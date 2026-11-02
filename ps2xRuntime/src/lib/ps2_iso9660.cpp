#include "runtime/ps2_iso9660.h"

#include <algorithm>
#include <cctype>
#include <cstring>
#include <fstream>
#include <vector>

namespace ps2_iso9660
{
    namespace
    {
        std::string upper(std::string value)
        {
            std::transform(value.begin(), value.end(), value.begin(),
                           [](unsigned char c) { return static_cast<char>(std::toupper(c)); });
            return value;
        }

        uint32_t readLe32(const uint8_t *p)
        {
            uint32_t v = 0;
            std::memcpy(&v, p, sizeof(v));
            return v;
        }
    }

    bool resolve(const std::string &imagePath,
                 const std::string &guestPath,
                 uint32_t &lbaOut,
                 uint32_t &sizeOut)
    {
        lbaOut = 0u;
        sizeOut = 0u;
        if (imagePath.empty() || guestPath.empty())
        {
            return false;
        }

        std::ifstream f(imagePath, std::ios::binary);
        if (!f.is_open())
        {
            return false;
        }

        auto readSector = [&](uint32_t lbn, std::vector<uint8_t> &buf) -> bool
        {
            buf.assign(kSectorSize, 0u);
            f.clear();
            f.seekg(static_cast<std::streamoff>(lbn) * kSectorSize);
            f.read(reinterpret_cast<char *>(buf.data()), kSectorSize);
            return f.good() || f.gcount() > 0;
        };

        std::vector<uint8_t> sec;
        if (!readSector(16u, sec)) // Primary Volume Descriptor
        {
            return false;
        }
        // Root directory record lives at PVD offset 156, 34 bytes.
        const uint8_t *root = sec.data() + 156;
        uint32_t dirLbn = readLe32(root + 2);
        uint32_t dirSize = readLe32(root + 10);

        // Split the guest path into components, dropping the device prefix, ";1" and case.
        std::string p = guestPath;
        if (const size_t colon = p.find(':'); colon != std::string::npos && colon < 8u)
        {
            p = p.substr(colon + 1u);
        }
        std::replace(p.begin(), p.end(), '\\', '/');
        std::vector<std::string> comps;
        size_t i = 0;
        while (i < p.size())
        {
            while (i < p.size() && p[i] == '/') ++i;
            size_t j = i;
            while (j < p.size() && p[j] != '/') ++j;
            if (j > i)
            {
                std::string c = p.substr(i, j - i);
                if (const size_t semi = c.find(';'); semi != std::string::npos) c = c.substr(0, semi);
                c = upper(c);
                if (!c.empty() && c != ".") comps.push_back(c);
            }
            i = j;
        }
        if (comps.empty())
        {
            return false;
        }

        for (size_t ci = 0; ci < comps.size(); ++ci)
        {
            const std::string &want = comps[ci];
            const bool wantDir = (ci + 1 < comps.size());
            bool found = false;
            uint32_t remaining = dirSize;
            uint32_t curLbn = dirLbn;
            std::vector<uint8_t> dbuf;
            while (remaining > 0 && !found)
            {
                if (!readSector(curLbn, dbuf)) return false;
                uint32_t off = 0;
                while (off < kSectorSize)
                {
                    const uint8_t len = dbuf[off];
                    if (len == 0) break; // rest of the sector is padding
                    if (off + 33u > kSectorSize) break;
                    const uint8_t *rec = dbuf.data() + off;
                    const uint32_t eLbn = readLe32(rec + 2);
                    const uint32_t eSize = readLe32(rec + 10);
                    const uint8_t flags = rec[25];
                    const uint8_t nameLen = rec[32];
                    std::string name(reinterpret_cast<const char *>(rec + 33),
                                     std::min<size_t>(nameLen, kSectorSize - (off + 33u)));
                    if (const size_t semi = name.find(';'); semi != std::string::npos) name = name.substr(0, semi);
                    name = upper(name);
                    if (name == want && (((flags & 2) != 0) == wantDir))
                    {
                        dirLbn = eLbn;
                        dirSize = eSize;
                        lbaOut = eLbn;
                        sizeOut = eSize;
                        found = true;
                        break;
                    }
                    off += len;
                }
                if (remaining >= kSectorSize) { remaining -= kSectorSize; ++curLbn; }
                else remaining = 0;
            }
            if (!found) return false;
        }
        return true;
    }
}
