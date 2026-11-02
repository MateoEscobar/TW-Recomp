#pragma once

#include <cstdint>
#include <string>

// [TWR-29] Minimal ISO9660 resolver shared by the IOP host adapter (module loads from
// `cdrom0:`) and the legacy EE-side CD helpers. Extracted from ps2_iop.cpp so the
// disc-image lookup has a single implementation.
namespace ps2_iso9660
{
    // Resolve a guest path such as "cdrom0:\MODULES\IOP.IRX;1" or "\DATA\FILE.BIN;1"
    // against the mounted image. Device prefixes, the ";1" version suffix and case are
    // ignored. On success returns the file's absolute sector (LBA) and its size in bytes.
    bool resolve(const std::string &imagePath,
                 const std::string &guestPath,
                 uint32_t &lbaOut,
                 uint32_t &sizeOut);

    constexpr uint32_t kSectorSize = 2048u;
}
