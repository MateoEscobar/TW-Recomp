#pragma once

// [TWR-29] ps2x::iop::IopHost implementation for TW-Recomp. The emulated IOP
// (ps2xIOP, the interpreter from the PS2Recomp submodule) reaches EE RAM, the
// disc image, host files, the memory card and the recompiled EE functions
// through this adapter. Ported from the upstream runtime (ps2xRecomp/ps2xRuntime/
// src/lib/ps2_iop_host.cpp) with four deliberate differences, see docs/iop.md:
//   1. translateGuestPath resolves `cdrom0:` against the ISO (PS2X_CD_IMAGE) and
//      falls back to games/warriors/{IRX,Modules}/ and the CD root -- there is no vfs().
//   2. openHostFile understands the synthetic `iso://<lba>/<size>` window.
//   3. invokeGuestFunction really runs a recompiled EE function (rpcInvokeFunction).
//   4. audioCommand only logs: audible audio is TWR-30 (SPU2), not an EE-side backend.
#include "ps2x/iop/iop_host.h"

#include <cstdint>
#include <cstdio>
#include <mutex>
#include <string>
#include <unordered_map>
#include <unordered_set>

class PS2Runtime;
struct R5900Context;

class PS2IopHostAdapter final : public ps2x::iop::IopHost
{
public:
    class CallScope
    {
    public:
        CallScope() = default;
        CallScope(PS2IopHostAdapter &owner, R5900Context *context, uint8_t *rdram);
        ~CallScope();

        CallScope(const CallScope &) = delete;
        CallScope &operator=(const CallScope &) = delete;
        CallScope(CallScope &&other) noexcept;
        CallScope &operator=(CallScope &&other) noexcept;

        [[nodiscard]] uint64_t token() const { return m_token; }

    private:
        void release();

        std::unique_lock<std::recursive_mutex> m_lock;
        PS2IopHostAdapter *m_owner = nullptr;
        R5900Context *m_previousContext = nullptr;
        uint8_t *m_previousRdram = nullptr;
        uint64_t m_previousToken = 0;
        uint64_t m_token = 0;
    };

    explicit PS2IopHostAdapter(PS2Runtime &runtime);
    ~PS2IopHostAdapter() override;

    [[nodiscard]] CallScope enterCall(R5900Context *context,
                                      uint8_t *rdram = nullptr);

    bool readGuest(uint32_t address, void *destination, size_t size) const override;
    bool writeGuest(uint32_t address, const void *source, size_t size) override;
    bool zeroGuest(uint32_t address, size_t size) override;
    bool normalizeGuestAddress(uint32_t address, uint32_t &normalized) const override;
    bool readIopMemory(uint32_t address, void *destination, size_t size) const override;
    bool writeIopMemory(uint32_t address, const void *source, size_t size) override;
    bool zeroIopMemory(uint32_t address, size_t size) override;
    bool normalizeIopAddress(uint32_t address, uint32_t &normalized) const override;
    uint32_t allocateIopHandle(ps2x::iop::IopHandleKind kind) override;
    uint32_t allocateGuest(uint32_t size, uint32_t alignment) override;
    void freeGuest(uint32_t address) override;

    void audioCommand(uint32_t sid,
                      uint32_t function,
                      ps2x::iop::GuestBuffer send,
                      ps2x::iop::GuestBuffer receive) override;

    std::string hostPath(ps2x::iop::HostPathKind kind) const override;
    std::string translateGuestPath(std::string_view path) const override;
    uint64_t openHostFile(std::string_view path) override;
    bool hostFileSize(uint64_t handle, uint64_t &size) const override;
    bool readHostFile(uint64_t handle,
                      uint64_t offset,
                      void *destination,
                      size_t size,
                      size_t &bytesRead) override;
    void closeHostFile(uint64_t handle) override;

    int32_t memoryCard(const ps2x::iop::MemoryCardRequest &request) override;

    bool hasGuestFunction(uint32_t address) const override;
    bool invokeGuestFunction(uint64_t callToken,
                             uint32_t address,
                             uint32_t a0,
                             uint32_t a1,
                             uint32_t a2,
                             uint32_t a3,
                             uint32_t *resultAddress) override;
    bool sendSifCommand(uint32_t commandId, const void *packet, size_t packetSize) override;
    // IOP -> EE RPC: the IRX's sceSifBindRpc/sceSifCallRpc reach the servers the EE registered
    // with SifRegisterRpc (g_rpc_servers with func != 0, e.g. MultiStream's 0x12344321).
    bool hasGuestRpcServer(uint32_t sid) const override;
    bool awaitGuestRpcServer(uint32_t sid) override;
    bool callGuestRpc(uint32_t sid,
                      uint32_t function,
                      const void *send,
                      uint32_t sendSize,
                      void *receive,
                      uint32_t receiveSize,
                      uint32_t *result) override;

    void log(ps2x::iop::LogLevel level, std::string_view message) override;

    // Diagnostics for the IOP/SIF debug tab.
    struct Counters
    {
        uint64_t audioCommands = 0;
        uint64_t guestInvocations = 0;
        uint64_t guestInvocationFailures = 0;
        uint64_t sifCommands = 0;
        uint64_t sifCommandsUnhandled = 0;
        uint64_t eeRpcCalls = 0;
        uint64_t eeRpcFailures = 0;
        uint64_t modulesFromIso = 0;
        uint64_t modulesFromHost = 0;
        uint64_t modulesMissing = 0;
    };
    [[nodiscard]] Counters counters() const;

private:
    friend class CallScope;

    bool guestRange(uint32_t address, size_t size, uint8_t *&begin) const;
    uint8_t *activeRdram() const;
    static void emit(ps2x::iop::LogLevel level, const std::string &message);

    PS2Runtime &m_runtime;
    std::recursive_mutex m_callMutex;
    R5900Context *m_activeContext = nullptr;
    uint8_t *m_activeRdram = nullptr;
    uint64_t m_activeToken = 0;
    uint64_t m_nextToken = 1;
    struct HostFile
    {
        std::FILE *stream = nullptr;
        uint64_t size = 0u;       // bytes visible through this handle
        uint64_t baseOffset = 0u; // iso:// window start inside the image, 0 for plain files
    };
    mutable std::mutex m_hostFileMutex;
    std::unordered_map<uint64_t, HostFile> m_hostFiles;
    uint64_t m_nextHostFileHandle = 1u;
    mutable std::mutex m_countersMutex;
    mutable Counters m_counters;
    mutable std::unordered_set<std::string> m_missingModules; // guarded by m_countersMutex
    std::unordered_map<std::string, uint32_t> m_repeatedLogs;   // guarded by m_countersMutex
};
