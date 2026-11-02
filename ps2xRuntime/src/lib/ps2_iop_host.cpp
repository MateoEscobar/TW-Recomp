#include "ps2_iop_host.h"

#include "ps2_runtime.h"
#include "ps2_stubs.h"
#include "runtime/ps2_iso9660.h"
#include "runtime/ps2_memory.h"
#include "Kernel/Stubs/MemoryCard.h"
#include "Kernel/Stubs/SIF.h"
#include "Kernel/Syscalls/Common.h" // rpcInvokeFunction / rpcAllocServerAddr / setRegU32

#include <algorithm>
#include <cctype>
#include <charconv>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <iostream>
#include <limits>
#include <utility>

#if !defined(_WIN32)
#include <sys/types.h>
#endif

namespace
{
    namespace fs = std::filesystem;

    constexpr const char *kIsoScheme = "iso://";

    std::string upperAscii(std::string value)
    {
        std::transform(value.begin(), value.end(), value.begin(),
                       [](unsigned char c) { return static_cast<char>(std::toupper(c)); });
        return value;
    }

    std::string lowerAscii(std::string value)
    {
        std::transform(value.begin(), value.end(), value.begin(),
                       [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
        return value;
    }

    // Split "device:rest" into its device (lower-case, without the colon) and the rest with
    // forward slashes, no ";1" version suffix and no leading slash. A path without a device
    // yields an empty device.
    void splitGuestPath(std::string_view path, std::string &device, std::string &rest)
    {
        std::string p(path);
        device.clear();
        const size_t colon = p.find(':');
        if (colon != std::string::npos && colon < 8u)
        {
            device = lowerAscii(p.substr(0, colon));
            p = p.substr(colon + 1u);
        }
        std::replace(p.begin(), p.end(), '\\', '/');
        if (const size_t semi = p.find(';'); semi != std::string::npos)
        {
            p = p.substr(0, semi);
        }
        while (!p.empty() && p.front() == '/')
        {
            p.erase(p.begin());
        }
        rest = p;
    }

    bool isCdDevice(const std::string &device)
    {
        return device == "cdrom0" || device == "cdrom" || device == "cdrom1" || device == "cdfs";
    }

    bool isHostDevice(const std::string &device)
    {
        return device == "host0" || device == "host" || device == "host1" || device == "hst";
    }

    // Case-insensitive lookup of `base` inside `dir`; returns the real path or "".
    std::string findInDirectory(const fs::path &dir, const std::string &base)
    {
        if (dir.empty() || base.empty())
        {
            return {};
        }
        std::error_code error;
        const fs::path direct = dir / base;
        if (fs::is_regular_file(direct, error))
        {
            return direct.string();
        }
        if (!fs::is_directory(dir, error))
        {
            return {};
        }
        const std::string want = upperAscii(base);
        for (const auto &entry : fs::directory_iterator(dir, error))
        {
            if (error)
            {
                break;
            }
            if (!entry.is_regular_file(error))
            {
                continue;
            }
            if (upperAscii(entry.path().filename().string()) == want)
            {
                return entry.path().string();
            }
        }
        return {};
    }

    bool parseIsoWindow(std::string_view path, uint64_t &lba, uint64_t &size)
    {
        lba = 0u;
        size = 0u;
        const std::string_view scheme(kIsoScheme);
        if (path.size() <= scheme.size() || path.substr(0, scheme.size()) != scheme)
        {
            return false;
        }
        const std::string_view rest = path.substr(scheme.size());
        const size_t slash = rest.find('/');
        if (slash == std::string_view::npos)
        {
            return false;
        }
        const std::string_view lbaText = rest.substr(0, slash);
        const std::string_view sizeText = rest.substr(slash + 1u);
        const auto r1 = std::from_chars(lbaText.data(), lbaText.data() + lbaText.size(), lba);
        const auto r2 = std::from_chars(sizeText.data(), sizeText.data() + sizeText.size(), size);
        return r1.ec == std::errc{} && r2.ec == std::errc{} &&
               r1.ptr == lbaText.data() + lbaText.size() &&
               r2.ptr == sizeText.data() + sizeText.size();
    }

    bool iopDebugLogEnabled()
    {
        static const bool enabled = []()
        {
            const char *v = std::getenv("PS2X_IOP_LOG");
            return v && v[0] && v[0] != '0';
        }();
        return enabled;
    }

    std::FILE *openBinary(const fs::path &hostPath)
    {
#if defined(_WIN32)
        return ::_wfopen(hostPath.c_str(), L"rb");
#else
        return std::fopen(hostPath.string().c_str(), "rb");
#endif
    }
}

PS2IopHostAdapter::CallScope::CallScope(PS2IopHostAdapter &owner, R5900Context *context, uint8_t *rdram)
    : m_lock(owner.m_callMutex),
      m_owner(&owner),
      m_previousContext(owner.m_activeContext),
      m_previousRdram(owner.m_activeRdram),
      m_previousToken(owner.m_activeToken)
{
    m_token = owner.m_nextToken++;
    if (m_token == 0)
    {
        m_token = owner.m_nextToken++;
    }
    owner.m_activeContext = context;
    owner.m_activeRdram = rdram;
    owner.m_activeToken = m_token;
}

PS2IopHostAdapter::CallScope::~CallScope()
{
    release();
}

PS2IopHostAdapter::CallScope::CallScope(CallScope &&other) noexcept
    : m_lock(std::move(other.m_lock)),
      m_owner(std::exchange(other.m_owner, nullptr)),
      m_previousContext(other.m_previousContext),
      m_previousRdram(other.m_previousRdram),
      m_previousToken(other.m_previousToken),
      m_token(other.m_token)
{
}

PS2IopHostAdapter::CallScope &PS2IopHostAdapter::CallScope::operator=(CallScope &&other) noexcept
{
    if (this != &other)
    {
        release();
        m_lock = std::move(other.m_lock);
        m_owner = std::exchange(other.m_owner, nullptr);
        m_previousContext = other.m_previousContext;
        m_previousRdram = other.m_previousRdram;
        m_previousToken = other.m_previousToken;
        m_token = other.m_token;
    }
    return *this;
}

void PS2IopHostAdapter::CallScope::release()
{
    if (m_owner)
    {
        m_owner->m_activeContext = m_previousContext;
        m_owner->m_activeRdram = m_previousRdram;
        m_owner->m_activeToken = m_previousToken;
        m_owner = nullptr;
    }
}

PS2IopHostAdapter::PS2IopHostAdapter(PS2Runtime &runtime)
    : m_runtime(runtime)
{
}

PS2IopHostAdapter::~PS2IopHostAdapter()
{
    std::lock_guard<std::mutex> lock(m_hostFileMutex);
    for (auto &[handle, file] : m_hostFiles)
    {
        (void)handle;
        if (file.stream)
        {
            std::fclose(file.stream);
        }
    }
    m_hostFiles.clear();
}

PS2IopHostAdapter::CallScope PS2IopHostAdapter::enterCall(R5900Context *context, uint8_t *rdram)
{
    return CallScope(*this, context, rdram);
}

PS2IopHostAdapter::Counters PS2IopHostAdapter::counters() const
{
    std::lock_guard<std::mutex> lock(m_countersMutex);
    return m_counters;
}

uint8_t *PS2IopHostAdapter::activeRdram() const
{
    return m_activeRdram ? m_activeRdram : const_cast<PS2Runtime &>(m_runtime).memory().getRDRAM();
}

bool PS2IopHostAdapter::guestRange(uint32_t address, size_t size, uint8_t *&begin) const
{
    begin = nullptr;
    uint8_t *const rdram = activeRdram();
    if (!rdram)
    {
        return false;
    }
    if (size == 0)
    {
        begin = getMemPtr(rdram, address);
        return begin != nullptr;
    }
    if (size - 1 > std::numeric_limits<uint32_t>::max() - address)
    {
        return false;
    }
    uint8_t *const first = getMemPtr(rdram, address);
    uint8_t *const last = getMemPtr(rdram, address + static_cast<uint32_t>(size - 1));
    if (!first || !last || last < first || static_cast<size_t>(last - first) != size - 1)
    {
        return false;
    }
    begin = first;
    return true;
}

bool PS2IopHostAdapter::readGuest(uint32_t address, void *destination, size_t size) const
{
    if (!destination && size != 0)
    {
        return false;
    }
    uint8_t *source = nullptr;
    if (!guestRange(address, size, source))
    {
        return false;
    }
    if (size != 0)
    {
        std::memcpy(destination, source, size);
    }
    return true;
}

bool PS2IopHostAdapter::writeGuest(uint32_t address, const void *source, size_t size)
{
    if (!source && size != 0)
    {
        return false;
    }
    uint8_t *destination = nullptr;
    if (!guestRange(address, size, destination))
    {
        return false;
    }
    if (size != 0)
    {
        ps2TraceGuestRangeWrite(activeRdram(), address, static_cast<uint32_t>(size), "IopHost::writeGuest", nullptr);
        std::memcpy(destination, source, size);
    }
    return true;
}

bool PS2IopHostAdapter::zeroGuest(uint32_t address, size_t size)
{
    uint8_t *destination = nullptr;
    if (!guestRange(address, size, destination))
    {
        return false;
    }
    if (size != 0)
    {
        ps2TraceGuestRangeWrite(activeRdram(), address, static_cast<uint32_t>(size), "IopHost::zeroGuest", nullptr);
        std::memset(destination, 0, size);
    }
    return true;
}

bool PS2IopHostAdapter::normalizeGuestAddress(uint32_t address, uint32_t &normalized) const
{
    bool scratchpad = false;
    if (!ps2ResolveGuestPointer(address, normalized, scratchpad) || scratchpad)
    {
        normalized = 0;
        return false;
    }
    return true;
}

bool PS2IopHostAdapter::readIopMemory(uint32_t address, void *destination, size_t size) const
{
    return m_runtime.readIopMemory(address, destination, size);
}

bool PS2IopHostAdapter::writeIopMemory(uint32_t address, const void *source, size_t size)
{
    return m_runtime.writeIopMemory(address, source, size);
}

bool PS2IopHostAdapter::zeroIopMemory(uint32_t address, size_t size)
{
    return m_runtime.zeroIopMemory(address, size);
}

bool PS2IopHostAdapter::normalizeIopAddress(uint32_t address, uint32_t &normalized) const
{
    if (!m_runtime.isIopMemoryRange(address, 0u))
    {
        normalized = 0u;
        return false;
    }
    normalized = address & 0x1FFFFFFFu;
    return true;
}

uint32_t PS2IopHostAdapter::allocateIopHandle(ps2x::iop::IopHandleKind kind)
{
    uint8_t *const rdram = activeRdram();
    if (!rdram)
    {
        return 0;
    }
    return kind == ps2x::iop::IopHandleKind::RpcPacket
               ? rpcAllocPacketAddr(rdram)
               : rpcAllocServerAddr(rdram);
}

uint32_t PS2IopHostAdapter::allocateGuest(uint32_t size, uint32_t alignment)
{
    return m_runtime.guestMalloc(size, alignment);
}

void PS2IopHostAdapter::freeGuest(uint32_t address)
{
    m_runtime.guestFree(address);
}

void PS2IopHostAdapter::audioCommand(uint32_t sid,
                                     uint32_t function,
                                     ps2x::iop::GuestBuffer send,
                                     ps2x::iop::GuestBuffer receive)
{
    // [TWR-30] Audible audio needs an SPU2 core; until then the libsd HLE service only
    // reports what the IRX asked for. Bounded so a busy driver cannot flood the log.
    uint64_t count = 0;
    {
        std::lock_guard<std::mutex> lock(m_countersMutex);
        count = ++m_counters.audioCommands;
    }
    if (count <= 64u)
    {
        char line[128];
        std::snprintf(line, sizeof(line), "audioCommand sid=0x%08x fn=0x%x send=%u recv=%u",
                      sid, function, send.size, receive.size);
        emit(ps2x::iop::LogLevel::Info, line);
    }
}

std::string PS2IopHostAdapter::hostPath(ps2x::iop::HostPathKind kind) const
{
    const PS2Runtime::IoPaths &paths = PS2Runtime::getIoPaths();
    switch (kind)
    {
    case ps2x::iop::HostPathKind::CdRoot:
        return paths.cdRoot.string();
    case ps2x::iop::HostPathKind::CdImage:
        return paths.cdImage.string();
    case ps2x::iop::HostPathKind::HostRoot:
        return paths.hostRoot.string();
    case ps2x::iop::HostPathKind::MemoryCardRoot:
        return paths.mcRoot.string();
    case ps2x::iop::HostPathKind::ElfDirectory:
    default:
        return paths.elfDirectory.string();
    }
}

std::string PS2IopHostAdapter::translateGuestPath(std::string_view path) const
{
    const PS2Runtime::IoPaths &paths = PS2Runtime::getIoPaths();
    std::string device;
    std::string rest;
    splitGuestPath(path, device, rest);
    if (rest.empty())
    {
        return {};
    }
    const std::string base = fs::path(rest).filename().string();

    if (isCdDevice(device))
    {
        // (1) The mounted image is authoritative: read the module straight from its sectors.
        if (!paths.cdImage.empty())
        {
            uint32_t lba = 0u;
            uint32_t size = 0u;
            if (ps2_iso9660::resolve(paths.cdImage.string(), rest, lba, size) && size != 0u)
            {
                {
                    std::lock_guard<std::mutex> lock(m_countersMutex);
                    ++m_counters.modulesFromIso;
                }
                emit(ps2x::iop::LogLevel::Info,
                     "module " + base + " from iso lba=" + std::to_string(lba) + " size=" + std::to_string(size));
                return std::string(kIsoScheme) + std::to_string(lba) + "/" + std::to_string(size);
            }
        }

        // (2)-(4) Extracted copies: games/warriors/IRX/, games/warriors/Modules/, <cdRoot>/<disc path>.
        const std::string candidates[] = {
            findInDirectory(paths.hostRoot / "IRX", base),
            findInDirectory(paths.hostRoot / "Modules", base),
            findInDirectory(paths.cdRoot / fs::path(rest).parent_path(), base),
        };
        for (const std::string &candidate : candidates)
        {
            if (!candidate.empty())
            {
                {
                    std::lock_guard<std::mutex> lock(m_countersMutex);
                    ++m_counters.modulesFromHost;
                }
                emit(ps2x::iop::LogLevel::Info, "module " + base + " from host " + candidate);
                return candidate;
            }
        }

        {
            std::lock_guard<std::mutex> lock(m_countersMutex);
            ++m_counters.modulesMissing;
        }
        emit(ps2x::iop::LogLevel::Error,
             "module " + std::string(path) + " not found; tried: iso=" + (paths.cdImage.empty() ? "no" : "yes") +
                 ", " + (paths.hostRoot / "IRX" / base).string() +
                 ", " + (paths.hostRoot / "Modules" / base).string() +
                 ", " + (paths.cdRoot / rest).string());
        return {};
    }

    if (isHostDevice(device) || device.empty())
    {
        if (paths.hostRoot.empty())
        {
            return rest;
        }
        return (paths.hostRoot / rest).string();
    }

    // mc0:/mc1: and other devices are served by the memory-card and ioman HLE paths.
    return {};
}

uint64_t PS2IopHostAdapter::openHostFile(std::string_view path)
{
    if (path.empty())
    {
        return 0u;
    }

    HostFile file{};
    uint64_t isoLba = 0u;
    uint64_t isoSize = 0u;
    if (parseIsoWindow(path, isoLba, isoSize))
    {
        const PS2Runtime::IoPaths &paths = PS2Runtime::getIoPaths();
        if (paths.cdImage.empty())
        {
            return 0u;
        }
        file.stream = openBinary(paths.cdImage);
        if (!file.stream)
        {
            return 0u;
        }
        file.baseOffset = isoLba * ps2_iso9660::kSectorSize;
        file.size = isoSize;
    }
    else
    {
        const fs::path hostPath{std::string(path)};
        file.stream = openBinary(hostPath);
        if (!file.stream)
        {
            return 0u;
        }
        std::error_code error;
        file.size = std::filesystem::file_size(hostPath, error);
        if (error)
        {
            std::fclose(file.stream);
            return 0u;
        }
    }

    std::lock_guard<std::mutex> lock(m_hostFileMutex);
    uint64_t handle = m_nextHostFileHandle++;
    if (handle == 0u)
    {
        handle = m_nextHostFileHandle++;
    }
    m_hostFiles.emplace(handle, file);
    return handle;
}

bool PS2IopHostAdapter::hostFileSize(uint64_t handle, uint64_t &size) const
{
    size = 0u;
    std::lock_guard<std::mutex> lock(m_hostFileMutex);
    const auto it = m_hostFiles.find(handle);
    if (it == m_hostFiles.end() || !it->second.stream)
    {
        return false;
    }
    size = it->second.size;
    return true;
}

bool PS2IopHostAdapter::readHostFile(uint64_t handle,
                                     uint64_t offset,
                                     void *destination,
                                     size_t size,
                                     size_t &bytesRead)
{
    bytesRead = 0u;
    if (!destination && size != 0u)
    {
        return false;
    }

    std::lock_guard<std::mutex> lock(m_hostFileMutex);
    const auto it = m_hostFiles.find(handle);
    if (it == m_hostFiles.end() || !it->second.stream)
    {
        return false;
    }
    HostFile &file = it->second;

    // Clamp to the window so an iso:// handle never reads past its file inside the image.
    if (offset >= file.size)
    {
        return size == 0u;
    }
    const uint64_t available = file.size - offset;
    const size_t toRead = static_cast<size_t>(std::min<uint64_t>(size, available));
    const uint64_t absolute = file.baseOffset + offset;

#if defined(_WIN32)
    if (absolute > static_cast<uint64_t>(std::numeric_limits<int64_t>::max()) ||
        _fseeki64(file.stream, static_cast<int64_t>(absolute), SEEK_SET) != 0)
#else
    if (absolute > static_cast<uint64_t>(std::numeric_limits<off_t>::max()) ||
        fseeko(file.stream, static_cast<off_t>(absolute), SEEK_SET) != 0)
#endif
    {
        return false;
    }

    bytesRead = toRead == 0u ? 0u : std::fread(destination, 1u, toRead, file.stream);
    if (bytesRead < toRead && std::ferror(file.stream))
    {
        std::clearerr(file.stream);
        return false;
    }
    return true;
}

void PS2IopHostAdapter::closeHostFile(uint64_t handle)
{
    std::FILE *stream = nullptr;
    {
        std::lock_guard<std::mutex> lock(m_hostFileMutex);
        const auto it = m_hostFiles.find(handle);
        if (it == m_hostFiles.end())
        {
            return;
        }
        stream = it->second.stream;
        m_hostFiles.erase(it);
    }
    if (stream)
    {
        std::fclose(stream);
    }
}

int32_t PS2IopHostAdapter::memoryCard(const ps2x::iop::MemoryCardRequest &request)
{
    using Handler = void (*)(uint8_t *, R5900Context *, PS2Runtime *);
    Handler handler = nullptr;
    switch (request.operation)
    {
    case ps2x::iop::MemoryCardOperation::Init:
        handler = ps2_stubs::sceMcInit;
        break;
    case ps2x::iop::MemoryCardOperation::GetInfo:
        handler = ps2_stubs::sceMcGetInfo;
        break;
    case ps2x::iop::MemoryCardOperation::Open:
        handler = ps2_stubs::sceMcOpen;
        break;
    case ps2x::iop::MemoryCardOperation::Close:
        handler = ps2_stubs::sceMcClose;
        break;
    case ps2x::iop::MemoryCardOperation::Seek:
        handler = ps2_stubs::sceMcSeek;
        break;
    case ps2x::iop::MemoryCardOperation::Read:
        handler = ps2_stubs::sceMcRead;
        break;
    case ps2x::iop::MemoryCardOperation::Write:
        handler = ps2_stubs::sceMcWrite;
        break;
    case ps2x::iop::MemoryCardOperation::Flush:
        handler = ps2_stubs::sceMcFlush;
        break;
    case ps2x::iop::MemoryCardOperation::Chdir:
        handler = ps2_stubs::sceMcChdir;
        break;
    case ps2x::iop::MemoryCardOperation::GetDir:
        handler = ps2_stubs::sceMcGetDir;
        break;
    case ps2x::iop::MemoryCardOperation::SetFileInfo:
        handler = ps2_stubs::sceMcSetFileInfo;
        break;
    case ps2x::iop::MemoryCardOperation::Delete:
        handler = ps2_stubs::sceMcDelete;
        break;
    case ps2x::iop::MemoryCardOperation::Format:
        handler = ps2_stubs::sceMcFormat;
        break;
    case ps2x::iop::MemoryCardOperation::Unformat:
        handler = ps2_stubs::sceMcUnformat;
        break;
    case ps2x::iop::MemoryCardOperation::Mkdir:
        handler = ps2_stubs::sceMcMkdir;
        break;
    }
    if (!handler)
    {
        return -1;
    }

    R5900Context context{};
    for (size_t i = 0; i < 4u; ++i)
    {
        setRegU32(&context, static_cast<int>(4 + i), request.arguments[i]);
    }

    // EE n32 ABI: the fifth argument travels in $t0, matching the sceMc* stubs.
    setRegU32(&context, 8, request.arguments[4]);

    handler(activeRdram(), &context, &m_runtime);
    return ps2_stubs::getMemoryCardDebugSnapshot().lastResult;
}

bool PS2IopHostAdapter::hasGuestFunction(uint32_t address) const
{
    return m_runtime.hasFunction(address);
}

bool PS2IopHostAdapter::invokeGuestFunction(uint64_t callToken,
                                            uint32_t address,
                                            uint32_t a0,
                                            uint32_t a1,
                                            uint32_t a2,
                                            uint32_t a3,
                                            uint32_t *resultAddress)
{
    (void)callToken;
    if (resultAddress)
    {
        *resultAddress = 0u;
    }
    // Synchronous on the calling thread: the recompiled function runs on a private context
    // copy with its own guest stack (rpcInvokeFunction, the same path Thread.cpp uses for
    // handlers). m_activeContext is the EE thread that entered the IOP (RPC, DMA); when the
    // IOP runs from a pump with no guest thread the main context is used as the template.
    R5900Context *context = m_activeContext ? m_activeContext : &m_runtime.cpu();
    uint32_t v0 = 0u;
    const bool ok = rpcInvokeFunction(activeRdram(), context, &m_runtime, address, a0, a1, a2, a3, &v0);
    {
        std::lock_guard<std::mutex> lock(m_countersMutex);
        ++m_counters.guestInvocations;
        if (!ok)
        {
            ++m_counters.guestInvocationFailures;
        }
    }
    if (!ok)
    {
        char line[96];
        std::snprintf(line, sizeof(line), "invokeGuestFunction 0x%08x failed (no recompiled function or runaway)", address);
        emit(ps2x::iop::LogLevel::Warning, line);
        return false;
    }
    if (resultAddress)
    {
        *resultAddress = v0;
    }
    return true;
}

bool PS2IopHostAdapter::sendSifCommand(uint32_t commandId,
                                       const void *packet,
                                       size_t packetSize)
{
    // Wired to the EE command dispatcher (ps2_stubs::dispatchSifCommand) in the IOP->EE
    // commit; until then the packet is counted and reported so a driver that depends on it
    // is visible in the log instead of failing silently.
    (void)packet;
    uint64_t count = 0;
    {
        std::lock_guard<std::mutex> lock(m_countersMutex);
        ++m_counters.sifCommands;
        count = ++m_counters.sifCommandsUnhandled;
    }
    if (count <= 16u)
    {
        char line[96];
        std::snprintf(line, sizeof(line), "sendSifCommand cid=0x%x size=%zu: no EE dispatcher yet", commandId, packetSize);
        emit(ps2x::iop::LogLevel::Warning, line);
    }
    return false;
}

void PS2IopHostAdapter::emit(ps2x::iop::LogLevel level, const std::string &message)
{
    const char *prefix = "[ps2xIOP]";
    if (level == ps2x::iop::LogLevel::Debug)
    {
        if (!iopDebugLogEnabled())
        {
            return;
        }
        prefix = "[ps2xIOP:debug]";
    }
    else if (level == ps2x::iop::LogLevel::Warning)
    {
        prefix = "[ps2xIOP:warning]";
    }
    else if (level == ps2x::iop::LogLevel::Error)
    {
        prefix = "[ps2xIOP:error]";
    }
    std::cerr << prefix << ' ' << message << std::endl;
}

void PS2IopHostAdapter::log(ps2x::iop::LogLevel level, std::string_view message)
{
    emit(level, std::string(message));
}
