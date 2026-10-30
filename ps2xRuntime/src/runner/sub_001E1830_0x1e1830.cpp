#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1830
// Address: 0x1e1830 - 0x1e1a38
void sub_001E1830_0x1e1830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1830_0x1e1830");
#endif

    switch (ctx->pc) {
        case 0x1e1830u: goto label_1e1830;
        case 0x1e1834u: goto label_1e1834;
        case 0x1e1838u: goto label_1e1838;
        case 0x1e183cu: goto label_1e183c;
        case 0x1e1840u: goto label_1e1840;
        case 0x1e1844u: goto label_1e1844;
        case 0x1e1848u: goto label_1e1848;
        case 0x1e184cu: goto label_1e184c;
        case 0x1e1850u: goto label_1e1850;
        case 0x1e1854u: goto label_1e1854;
        case 0x1e1858u: goto label_1e1858;
        case 0x1e185cu: goto label_1e185c;
        case 0x1e1860u: goto label_1e1860;
        case 0x1e1864u: goto label_1e1864;
        case 0x1e1868u: goto label_1e1868;
        case 0x1e186cu: goto label_1e186c;
        case 0x1e1870u: goto label_1e1870;
        case 0x1e1874u: goto label_1e1874;
        case 0x1e1878u: goto label_1e1878;
        case 0x1e187cu: goto label_1e187c;
        case 0x1e1880u: goto label_1e1880;
        case 0x1e1884u: goto label_1e1884;
        case 0x1e1888u: goto label_1e1888;
        case 0x1e188cu: goto label_1e188c;
        case 0x1e1890u: goto label_1e1890;
        case 0x1e1894u: goto label_1e1894;
        case 0x1e1898u: goto label_1e1898;
        case 0x1e189cu: goto label_1e189c;
        case 0x1e18a0u: goto label_1e18a0;
        case 0x1e18a4u: goto label_1e18a4;
        case 0x1e18a8u: goto label_1e18a8;
        case 0x1e18acu: goto label_1e18ac;
        case 0x1e18b0u: goto label_1e18b0;
        case 0x1e18b4u: goto label_1e18b4;
        case 0x1e18b8u: goto label_1e18b8;
        case 0x1e18bcu: goto label_1e18bc;
        case 0x1e18c0u: goto label_1e18c0;
        case 0x1e18c4u: goto label_1e18c4;
        case 0x1e18c8u: goto label_1e18c8;
        case 0x1e18ccu: goto label_1e18cc;
        case 0x1e18d0u: goto label_1e18d0;
        case 0x1e18d4u: goto label_1e18d4;
        case 0x1e18d8u: goto label_1e18d8;
        case 0x1e18dcu: goto label_1e18dc;
        case 0x1e18e0u: goto label_1e18e0;
        case 0x1e18e4u: goto label_1e18e4;
        case 0x1e18e8u: goto label_1e18e8;
        case 0x1e18ecu: goto label_1e18ec;
        case 0x1e18f0u: goto label_1e18f0;
        case 0x1e18f4u: goto label_1e18f4;
        case 0x1e18f8u: goto label_1e18f8;
        case 0x1e18fcu: goto label_1e18fc;
        case 0x1e1900u: goto label_1e1900;
        case 0x1e1904u: goto label_1e1904;
        case 0x1e1908u: goto label_1e1908;
        case 0x1e190cu: goto label_1e190c;
        case 0x1e1910u: goto label_1e1910;
        case 0x1e1914u: goto label_1e1914;
        case 0x1e1918u: goto label_1e1918;
        case 0x1e191cu: goto label_1e191c;
        case 0x1e1920u: goto label_1e1920;
        case 0x1e1924u: goto label_1e1924;
        case 0x1e1928u: goto label_1e1928;
        case 0x1e192cu: goto label_1e192c;
        case 0x1e1930u: goto label_1e1930;
        case 0x1e1934u: goto label_1e1934;
        case 0x1e1938u: goto label_1e1938;
        case 0x1e193cu: goto label_1e193c;
        case 0x1e1940u: goto label_1e1940;
        case 0x1e1944u: goto label_1e1944;
        case 0x1e1948u: goto label_1e1948;
        case 0x1e194cu: goto label_1e194c;
        case 0x1e1950u: goto label_1e1950;
        case 0x1e1954u: goto label_1e1954;
        case 0x1e1958u: goto label_1e1958;
        case 0x1e195cu: goto label_1e195c;
        case 0x1e1960u: goto label_1e1960;
        case 0x1e1964u: goto label_1e1964;
        case 0x1e1968u: goto label_1e1968;
        case 0x1e196cu: goto label_1e196c;
        case 0x1e1970u: goto label_1e1970;
        case 0x1e1974u: goto label_1e1974;
        case 0x1e1978u: goto label_1e1978;
        case 0x1e197cu: goto label_1e197c;
        case 0x1e1980u: goto label_1e1980;
        case 0x1e1984u: goto label_1e1984;
        case 0x1e1988u: goto label_1e1988;
        case 0x1e198cu: goto label_1e198c;
        case 0x1e1990u: goto label_1e1990;
        case 0x1e1994u: goto label_1e1994;
        case 0x1e1998u: goto label_1e1998;
        case 0x1e199cu: goto label_1e199c;
        case 0x1e19a0u: goto label_1e19a0;
        case 0x1e19a4u: goto label_1e19a4;
        case 0x1e19a8u: goto label_1e19a8;
        case 0x1e19acu: goto label_1e19ac;
        case 0x1e19b0u: goto label_1e19b0;
        case 0x1e19b4u: goto label_1e19b4;
        case 0x1e19b8u: goto label_1e19b8;
        case 0x1e19bcu: goto label_1e19bc;
        case 0x1e19c0u: goto label_1e19c0;
        case 0x1e19c4u: goto label_1e19c4;
        case 0x1e19c8u: goto label_1e19c8;
        case 0x1e19ccu: goto label_1e19cc;
        case 0x1e19d0u: goto label_1e19d0;
        case 0x1e19d4u: goto label_1e19d4;
        case 0x1e19d8u: goto label_1e19d8;
        case 0x1e19dcu: goto label_1e19dc;
        case 0x1e19e0u: goto label_1e19e0;
        case 0x1e19e4u: goto label_1e19e4;
        case 0x1e19e8u: goto label_1e19e8;
        case 0x1e19ecu: goto label_1e19ec;
        case 0x1e19f0u: goto label_1e19f0;
        case 0x1e19f4u: goto label_1e19f4;
        case 0x1e19f8u: goto label_1e19f8;
        case 0x1e19fcu: goto label_1e19fc;
        case 0x1e1a00u: goto label_1e1a00;
        case 0x1e1a04u: goto label_1e1a04;
        case 0x1e1a08u: goto label_1e1a08;
        case 0x1e1a0cu: goto label_1e1a0c;
        case 0x1e1a10u: goto label_1e1a10;
        case 0x1e1a14u: goto label_1e1a14;
        case 0x1e1a18u: goto label_1e1a18;
        case 0x1e1a1cu: goto label_1e1a1c;
        case 0x1e1a20u: goto label_1e1a20;
        case 0x1e1a24u: goto label_1e1a24;
        case 0x1e1a28u: goto label_1e1a28;
        case 0x1e1a2cu: goto label_1e1a2c;
        case 0x1e1a30u: goto label_1e1a30;
        case 0x1e1a34u: goto label_1e1a34;
        default: break;
    }

    ctx->pc = 0x1e1830u;

label_1e1830:
    // 0x1e1830: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e1830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e1834:
    // 0x1e1834: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e1834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e1838:
    // 0x1e1838: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e1838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_1e183c:
    // 0x1e183c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1e183cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1e1840:
    // 0x1e1840: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1e1840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1e1844:
    // 0x1e1844: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1e1844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1e1848:
    // 0x1e1848: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x1e1848u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1e184c:
    // 0x1e184c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e184cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1850:
    // 0x1e1850: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1e1850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1e1854:
    // 0x1e1854: 0x24a56698  addiu       $a1, $a1, 0x6698
    ctx->pc = 0x1e1854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26264));
label_1e1858:
    // 0x1e1858: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1e1858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1e185c:
    // 0x1e185c: 0x25086628  addiu       $t0, $t0, 0x6628
    ctx->pc = 0x1e185cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26152));
label_1e1860:
    // 0x1e1860: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e1860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e1864:
    // 0x1e1864: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x1e1864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1e1868:
    // 0x1e1868: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1e1868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e186c:
    // 0x1e186c: 0x24090159  addiu       $t1, $zero, 0x159
    ctx->pc = 0x1e186cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
label_1e1870:
    // 0x1e1870: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1e1870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1e1874:
    // 0x1e1874: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e1874u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1878:
    // 0x1e1878: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1e1878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1e187c:
    // 0x1e187c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1e187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1e1880:
    // 0x1e1880: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1e1880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1e1884:
    // 0x1e1884: 0x40f809  jalr        $v0
label_1e1888:
    if (ctx->pc == 0x1E1888u) {
        ctx->pc = 0x1E1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1884u;
        // 0x1e1888: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E188Cu;
        goto label_1e188c;
    }
    ctx->pc = 0x1E1884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E188Cu);
        ctx->pc = 0x1E1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1884u;
        // 0x1e1888: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1884u, 0x1E188Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E188Cu;
label_1e188c:
    // 0x1e188c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e1890:
    if (ctx->pc == 0x1E1890u) {
        ctx->pc = 0x1E1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E188Cu;
        // 0x1e1890: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1894u;
        goto label_1e1894;
    }
    ctx->pc = 0x1E188Cu;
    {
        const bool branch_taken_0x1e188c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E188Cu;
        // 0x1e1890: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e188c) {
            ctx->pc = 0x1E18A4u;
            goto label_1e18a4;
        }
    }
    ctx->pc = 0x1E1894u;
label_1e1894:
    // 0x1e1894: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e1894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1e1898:
    // 0x1e1898: 0xc07827a  jal         func_1E09E8
label_1e189c:
    if (ctx->pc == 0x1E189Cu) {
        ctx->pc = 0x1E189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1898u;
        // 0x1e189c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18A0u;
        goto label_1e18a0;
    }
    ctx->pc = 0x1E1898u;
    SET_GPR_U32(ctx, 31, 0x1E18A0u);
    ctx->pc = 0x1E189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1898u;
    // 0x1e189c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E09E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E09E8u, 0x1E1898u, 0x1E18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18A0u;
label_1e18a0:
    // 0x1e18a0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1e18a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1e18a4:
    // 0x1e18a4: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1e18a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1e18a8:
    // 0x1e18a8: 0x26110084  addiu       $s1, $s0, 0x84
    ctx->pc = 0x1e18a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_1e18ac:
    // 0x1e18ac: 0xc60c00c0  lwc1        $f12, 0xC0($s0)
    ctx->pc = 0x1e18acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e18b0:
    // 0x1e18b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e18b4:
    // 0x1e18b4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1e18b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1e18b8:
    // 0x1e18b8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1e18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1e18bc:
    // 0x1e18bc: 0x60f809  jalr        $v1
label_1e18c0:
    if (ctx->pc == 0x1E18C0u) {
        ctx->pc = 0x1E18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18BCu;
        // 0x1e18c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18C4u;
        goto label_1e18c4;
    }
    ctx->pc = 0x1E18BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E18C4u);
        ctx->pc = 0x1E18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18BCu;
        // 0x1e18c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E18BCu, 0x1E18C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E18C4u;
label_1e18c4:
    // 0x1e18c4: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1e18c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1e18c8:
    // 0x1e18c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e18c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e18cc:
    // 0x1e18cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e18ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e18d0:
    // 0x1e18d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e18d4:
    // 0x1e18d4: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e18d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e18d8:
    // 0x1e18d8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e18dc:
    // 0x1e18dc: 0x60f809  jalr        $v1
label_1e18e0:
    if (ctx->pc == 0x1E18E0u) {
        ctx->pc = 0x1E18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18DCu;
        // 0x1e18e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18E4u;
        goto label_1e18e4;
    }
    ctx->pc = 0x1E18DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E18E4u);
        ctx->pc = 0x1E18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18DCu;
        // 0x1e18e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E18DCu, 0x1E18E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E18E4u;
label_1e18e4:
    // 0x1e18e4: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x1e18e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1e18e8:
    // 0x1e18e8: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1e18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1e18ec:
    // 0x1e18ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e18f0:
    // 0x1e18f0: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1e18f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1e18f4:
    // 0x1e18f4: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1e18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1e18f8:
    // 0x1e18f8: 0x60f809  jalr        $v1
label_1e18fc:
    if (ctx->pc == 0x1E18FCu) {
        ctx->pc = 0x1E18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18F8u;
        // 0x1e18fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1900u;
        goto label_1e1900;
    }
    ctx->pc = 0x1E18F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1900u);
        ctx->pc = 0x1E18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18F8u;
        // 0x1e18fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E18F8u, 0x1E1900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1900u;
label_1e1900:
    // 0x1e1900: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1e1900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1e1904:
    // 0x1e1904: 0xc60c00c8  lwc1        $f12, 0xC8($s0)
    ctx->pc = 0x1e1904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e1908:
    // 0x1e1908: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e190c:
    // 0x1e190c: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1e190cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_1e1910:
    // 0x1e1910: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x1e1910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_1e1914:
    // 0x1e1914: 0x60f809  jalr        $v1
label_1e1918:
    if (ctx->pc == 0x1E1918u) {
        ctx->pc = 0x1E1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1914u;
        // 0x1e1918: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E191Cu;
        goto label_1e191c;
    }
    ctx->pc = 0x1E1914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E191Cu);
        ctx->pc = 0x1E1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1914u;
        // 0x1e1918: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1914u, 0x1E191Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E191Cu;
label_1e191c:
    // 0x1e191c: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x1e191cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1e1920:
    // 0x1e1920: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1e1920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1e1924:
    // 0x1e1924: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e1928:
    // 0x1e1928: 0x84440118  lh          $a0, 0x118($v0)
    ctx->pc = 0x1e1928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
label_1e192c:
    // 0x1e192c: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x1e192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
label_1e1930:
    // 0x1e1930: 0x60f809  jalr        $v1
label_1e1934:
    if (ctx->pc == 0x1E1934u) {
        ctx->pc = 0x1E1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1930u;
        // 0x1e1934: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1938u;
        goto label_1e1938;
    }
    ctx->pc = 0x1E1930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1938u);
        ctx->pc = 0x1E1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1930u;
        // 0x1e1934: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1930u, 0x1E1938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1938u;
label_1e1938:
    // 0x1e1938: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1e1938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1e193c:
    // 0x1e193c: 0xc60c00dc  lwc1        $f12, 0xDC($s0)
    ctx->pc = 0x1e193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e1940:
    // 0x1e1940: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1944:
    // 0x1e1944: 0x84440120  lh          $a0, 0x120($v0)
    ctx->pc = 0x1e1944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
label_1e1948:
    // 0x1e1948: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x1e1948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1e194c:
    // 0x1e194c: 0x60f809  jalr        $v1
label_1e1950:
    if (ctx->pc == 0x1E1950u) {
        ctx->pc = 0x1E1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E194Cu;
        // 0x1e1950: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1954u;
        goto label_1e1954;
    }
    ctx->pc = 0x1E194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1954u);
        ctx->pc = 0x1E1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E194Cu;
        // 0x1e1950: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E194Cu, 0x1E1954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1954u;
label_1e1954:
    // 0x1e1954: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x1e1954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e1958:
    // 0x1e1958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e195c:
    // 0x1e195c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e195cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1960:
    // 0x1e1960: 0xc13a214  jal         func_4E8850
label_1e1964:
    if (ctx->pc == 0x1E1964u) {
        ctx->pc = 0x1E1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1960u;
        // 0x1e1964: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1968u;
        goto label_1e1968;
    }
    ctx->pc = 0x1E1960u;
    SET_GPR_U32(ctx, 31, 0x1E1968u);
    ctx->pc = 0x1E1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1960u;
    // 0x1e1964: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8850u, 0x1E1960u, 0x1E1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1968u;
label_1e1968:
    // 0x1e1968: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e1968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e196c:
    // 0x1e196c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1970:
    // 0x1e1970: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e1970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1974:
    // 0x1e1974: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1e1978:
    if (ctx->pc == 0x1E1978u) {
        ctx->pc = 0x1E1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1974u;
        // 0x1e1978: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E197Cu;
        goto label_1e197c;
    }
    ctx->pc = 0x1E1974u;
    {
        const bool branch_taken_0x1e1974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1974u;
        // 0x1e1978: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1974) {
            ctx->pc = 0x1E1990u;
            goto label_1e1990;
        }
    }
    ctx->pc = 0x1E197Cu;
label_1e197c:
    // 0x1e197c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1e197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1e1980:
    // 0x1e1980: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e1980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1e1984:
    // 0x1e1984: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1e1984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e1988:
    // 0x1e1988: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1e198c:
    if (ctx->pc == 0x1E198Cu) {
        ctx->pc = 0x1E1990u;
        goto label_1e1990;
    }
    ctx->pc = 0x1E1988u;
    {
        const bool branch_taken_0x1e1988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1988) {
            ctx->pc = 0x1E1994u;
            goto label_1e1994;
        }
    }
    ctx->pc = 0x1E1990u;
label_1e1990:
    // 0x1e1990: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e1990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1994:
    // 0x1e1994: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1e1998:
    if (ctx->pc == 0x1E1998u) {
        ctx->pc = 0x1E1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1994u;
        // 0x1e1998: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E199Cu;
        goto label_1e199c;
    }
    ctx->pc = 0x1E1994u;
    {
        const bool branch_taken_0x1e1994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1994u;
        // 0x1e1998: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1994) {
            ctx->pc = 0x1E19CCu;
            goto label_1e19cc;
        }
    }
    ctx->pc = 0x1E199Cu;
label_1e199c:
    // 0x1e199c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e199cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e19a0:
    // 0x1e19a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e19a4:
    // 0x1e19a4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1e19a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e19a8:
    // 0x1e19a8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1e19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1e19ac:
    // 0x1e19ac: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e19acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e19b0:
    // 0x1e19b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e19b4:
    // 0x1e19b4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1e19b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1e19b8:
    // 0x1e19b8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e19b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e19bc:
    // 0x1e19bc: 0xc13a36e  jal         func_4E8DB8
label_1e19c0:
    if (ctx->pc == 0x1E19C0u) {
        ctx->pc = 0x1E19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19BCu;
        // 0x1e19c0: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E19C4u;
        goto label_1e19c4;
    }
    ctx->pc = 0x1E19BCu;
    SET_GPR_U32(ctx, 31, 0x1E19C4u);
    ctx->pc = 0x1E19C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19BCu;
    // 0x1e19c0: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8DB8u, 0x1E19BCu, 0x1E19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19C4u;
label_1e19c4:
    // 0x1e19c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1e19c8:
    // 0x1e19c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1e19cc:
    // 0x1e19cc: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x1e19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1e19d0:
    // 0x1e19d0: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x1e19d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_1e19d4:
    // 0x1e19d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e19d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e19d8:
    // 0x1e19d8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1e19d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_1e19dc:
    // 0x1e19dc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1e19dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e19e0:
    // 0x1e19e0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e19e4:
    // 0x1e19e4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1e19e8:
    if (ctx->pc == 0x1E19E8u) {
        ctx->pc = 0x1E19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19E4u;
        // 0x1e19e8: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E19ECu;
        goto label_1e19ec;
    }
    ctx->pc = 0x1E19E4u;
    {
        const bool branch_taken_0x1e19e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19E4u;
        // 0x1e19e8: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19e4) {
            ctx->pc = 0x1E1A08u;
            goto label_1e1a08;
        }
    }
    ctx->pc = 0x1E19ECu;
label_1e19ec:
    // 0x1e19ec: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1e19f0:
    if (ctx->pc == 0x1E19F0u) {
        ctx->pc = 0x1E19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19ECu;
        // 0x1e19f0: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E19F4u;
        goto label_1e19f4;
    }
    ctx->pc = 0x1E19ECu;
    {
        const bool branch_taken_0x1e19ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19ECu;
        // 0x1e19f0: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19ec) {
            ctx->pc = 0x1E19F8u;
            goto label_1e19f8;
        }
    }
    ctx->pc = 0x1E19F4u;
label_1e19f4:
    // 0x1e19f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e19f8:
    // 0x1e19f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e19fc:
    // 0x1e19fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1e1a00:
    // 0x1e1a00: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e1a04:
    if (ctx->pc == 0x1E1A04u) {
        ctx->pc = 0x1E1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A00u;
        // 0x1e1a04: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A08u;
        goto label_1e1a08;
    }
    ctx->pc = 0x1E1A00u;
    {
        const bool branch_taken_0x1e1a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A00u;
        // 0x1e1a04: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a00) {
            ctx->pc = 0x1E1A10u;
            goto label_1e1a10;
        }
    }
    ctx->pc = 0x1E1A08u;
label_1e1a08:
    // 0x1e1a08: 0xc13a3da  jal         func_4E8F68
label_1e1a0c:
    if (ctx->pc == 0x1E1A0Cu) {
        ctx->pc = 0x1E1A10u;
        goto label_1e1a10;
    }
    ctx->pc = 0x1E1A08u;
    SET_GPR_U32(ctx, 31, 0x1E1A10u);
    ctx->pc = 0x4E8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8F68u, 0x1E1A08u, 0x1E1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A10u;
label_1e1a10:
    // 0x1e1a10: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x1e1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1e1a14:
    // 0x1e1a14: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1e1a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e1a18:
    // 0x1e1a18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e1a1c:
    // 0x1e1a1c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1e1a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e1a20:
    // 0x1e1a20: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1e1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_1e1a24:
    // 0x1e1a24: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1e1a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e1a28:
    // 0x1e1a28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e1a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e1a2c:
    // 0x1e1a2c: 0x3e00008  jr          $ra
label_1e1a30:
    if (ctx->pc == 0x1E1A30u) {
        ctx->pc = 0x1E1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A2Cu;
        // 0x1e1a30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A34u;
        goto label_1e1a34;
    }
    ctx->pc = 0x1E1A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A2Cu;
        // 0x1e1a30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1A34u;
label_1e1a34:
    // 0x1e1a34: 0x0  nop
    ctx->pc = 0x1e1a34u;
    // NOP
    ctx->pc = 0x1e1a38u;
}
