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

// Function: sub_004F17B0
// Address: 0x4f17b0 - 0x4f1a70
void sub_004F17B0_0x4f17b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F17B0_0x4f17b0");
#endif

    switch (ctx->pc) {
        case 0x4f17b0u: goto label_4f17b0;
        case 0x4f17b4u: goto label_4f17b4;
        case 0x4f17b8u: goto label_4f17b8;
        case 0x4f17bcu: goto label_4f17bc;
        case 0x4f17c0u: goto label_4f17c0;
        case 0x4f17c4u: goto label_4f17c4;
        case 0x4f17c8u: goto label_4f17c8;
        case 0x4f17ccu: goto label_4f17cc;
        case 0x4f17d0u: goto label_4f17d0;
        case 0x4f17d4u: goto label_4f17d4;
        case 0x4f17d8u: goto label_4f17d8;
        case 0x4f17dcu: goto label_4f17dc;
        case 0x4f17e0u: goto label_4f17e0;
        case 0x4f17e4u: goto label_4f17e4;
        case 0x4f17e8u: goto label_4f17e8;
        case 0x4f17ecu: goto label_4f17ec;
        case 0x4f17f0u: goto label_4f17f0;
        case 0x4f17f4u: goto label_4f17f4;
        case 0x4f17f8u: goto label_4f17f8;
        case 0x4f17fcu: goto label_4f17fc;
        case 0x4f1800u: goto label_4f1800;
        case 0x4f1804u: goto label_4f1804;
        case 0x4f1808u: goto label_4f1808;
        case 0x4f180cu: goto label_4f180c;
        case 0x4f1810u: goto label_4f1810;
        case 0x4f1814u: goto label_4f1814;
        case 0x4f1818u: goto label_4f1818;
        case 0x4f181cu: goto label_4f181c;
        case 0x4f1820u: goto label_4f1820;
        case 0x4f1824u: goto label_4f1824;
        case 0x4f1828u: goto label_4f1828;
        case 0x4f182cu: goto label_4f182c;
        case 0x4f1830u: goto label_4f1830;
        case 0x4f1834u: goto label_4f1834;
        case 0x4f1838u: goto label_4f1838;
        case 0x4f183cu: goto label_4f183c;
        case 0x4f1840u: goto label_4f1840;
        case 0x4f1844u: goto label_4f1844;
        case 0x4f1848u: goto label_4f1848;
        case 0x4f184cu: goto label_4f184c;
        case 0x4f1850u: goto label_4f1850;
        case 0x4f1854u: goto label_4f1854;
        case 0x4f1858u: goto label_4f1858;
        case 0x4f185cu: goto label_4f185c;
        case 0x4f1860u: goto label_4f1860;
        case 0x4f1864u: goto label_4f1864;
        case 0x4f1868u: goto label_4f1868;
        case 0x4f186cu: goto label_4f186c;
        case 0x4f1870u: goto label_4f1870;
        case 0x4f1874u: goto label_4f1874;
        case 0x4f1878u: goto label_4f1878;
        case 0x4f187cu: goto label_4f187c;
        case 0x4f1880u: goto label_4f1880;
        case 0x4f1884u: goto label_4f1884;
        case 0x4f1888u: goto label_4f1888;
        case 0x4f188cu: goto label_4f188c;
        case 0x4f1890u: goto label_4f1890;
        case 0x4f1894u: goto label_4f1894;
        case 0x4f1898u: goto label_4f1898;
        case 0x4f189cu: goto label_4f189c;
        case 0x4f18a0u: goto label_4f18a0;
        case 0x4f18a4u: goto label_4f18a4;
        case 0x4f18a8u: goto label_4f18a8;
        case 0x4f18acu: goto label_4f18ac;
        case 0x4f18b0u: goto label_4f18b0;
        case 0x4f18b4u: goto label_4f18b4;
        case 0x4f18b8u: goto label_4f18b8;
        case 0x4f18bcu: goto label_4f18bc;
        case 0x4f18c0u: goto label_4f18c0;
        case 0x4f18c4u: goto label_4f18c4;
        case 0x4f18c8u: goto label_4f18c8;
        case 0x4f18ccu: goto label_4f18cc;
        case 0x4f18d0u: goto label_4f18d0;
        case 0x4f18d4u: goto label_4f18d4;
        case 0x4f18d8u: goto label_4f18d8;
        case 0x4f18dcu: goto label_4f18dc;
        case 0x4f18e0u: goto label_4f18e0;
        case 0x4f18e4u: goto label_4f18e4;
        case 0x4f18e8u: goto label_4f18e8;
        case 0x4f18ecu: goto label_4f18ec;
        case 0x4f18f0u: goto label_4f18f0;
        case 0x4f18f4u: goto label_4f18f4;
        case 0x4f18f8u: goto label_4f18f8;
        case 0x4f18fcu: goto label_4f18fc;
        case 0x4f1900u: goto label_4f1900;
        case 0x4f1904u: goto label_4f1904;
        case 0x4f1908u: goto label_4f1908;
        case 0x4f190cu: goto label_4f190c;
        case 0x4f1910u: goto label_4f1910;
        case 0x4f1914u: goto label_4f1914;
        case 0x4f1918u: goto label_4f1918;
        case 0x4f191cu: goto label_4f191c;
        case 0x4f1920u: goto label_4f1920;
        case 0x4f1924u: goto label_4f1924;
        case 0x4f1928u: goto label_4f1928;
        case 0x4f192cu: goto label_4f192c;
        case 0x4f1930u: goto label_4f1930;
        case 0x4f1934u: goto label_4f1934;
        case 0x4f1938u: goto label_4f1938;
        case 0x4f193cu: goto label_4f193c;
        case 0x4f1940u: goto label_4f1940;
        case 0x4f1944u: goto label_4f1944;
        case 0x4f1948u: goto label_4f1948;
        case 0x4f194cu: goto label_4f194c;
        case 0x4f1950u: goto label_4f1950;
        case 0x4f1954u: goto label_4f1954;
        case 0x4f1958u: goto label_4f1958;
        case 0x4f195cu: goto label_4f195c;
        case 0x4f1960u: goto label_4f1960;
        case 0x4f1964u: goto label_4f1964;
        case 0x4f1968u: goto label_4f1968;
        case 0x4f196cu: goto label_4f196c;
        case 0x4f1970u: goto label_4f1970;
        case 0x4f1974u: goto label_4f1974;
        case 0x4f1978u: goto label_4f1978;
        case 0x4f197cu: goto label_4f197c;
        case 0x4f1980u: goto label_4f1980;
        case 0x4f1984u: goto label_4f1984;
        case 0x4f1988u: goto label_4f1988;
        case 0x4f198cu: goto label_4f198c;
        case 0x4f1990u: goto label_4f1990;
        case 0x4f1994u: goto label_4f1994;
        case 0x4f1998u: goto label_4f1998;
        case 0x4f199cu: goto label_4f199c;
        case 0x4f19a0u: goto label_4f19a0;
        case 0x4f19a4u: goto label_4f19a4;
        case 0x4f19a8u: goto label_4f19a8;
        case 0x4f19acu: goto label_4f19ac;
        case 0x4f19b0u: goto label_4f19b0;
        case 0x4f19b4u: goto label_4f19b4;
        case 0x4f19b8u: goto label_4f19b8;
        case 0x4f19bcu: goto label_4f19bc;
        case 0x4f19c0u: goto label_4f19c0;
        case 0x4f19c4u: goto label_4f19c4;
        case 0x4f19c8u: goto label_4f19c8;
        case 0x4f19ccu: goto label_4f19cc;
        case 0x4f19d0u: goto label_4f19d0;
        case 0x4f19d4u: goto label_4f19d4;
        case 0x4f19d8u: goto label_4f19d8;
        case 0x4f19dcu: goto label_4f19dc;
        case 0x4f19e0u: goto label_4f19e0;
        case 0x4f19e4u: goto label_4f19e4;
        case 0x4f19e8u: goto label_4f19e8;
        case 0x4f19ecu: goto label_4f19ec;
        case 0x4f19f0u: goto label_4f19f0;
        case 0x4f19f4u: goto label_4f19f4;
        case 0x4f19f8u: goto label_4f19f8;
        case 0x4f19fcu: goto label_4f19fc;
        case 0x4f1a00u: goto label_4f1a00;
        case 0x4f1a04u: goto label_4f1a04;
        case 0x4f1a08u: goto label_4f1a08;
        case 0x4f1a0cu: goto label_4f1a0c;
        case 0x4f1a10u: goto label_4f1a10;
        case 0x4f1a14u: goto label_4f1a14;
        case 0x4f1a18u: goto label_4f1a18;
        case 0x4f1a1cu: goto label_4f1a1c;
        case 0x4f1a20u: goto label_4f1a20;
        case 0x4f1a24u: goto label_4f1a24;
        case 0x4f1a28u: goto label_4f1a28;
        case 0x4f1a2cu: goto label_4f1a2c;
        case 0x4f1a30u: goto label_4f1a30;
        case 0x4f1a34u: goto label_4f1a34;
        case 0x4f1a38u: goto label_4f1a38;
        case 0x4f1a3cu: goto label_4f1a3c;
        case 0x4f1a40u: goto label_4f1a40;
        case 0x4f1a44u: goto label_4f1a44;
        case 0x4f1a48u: goto label_4f1a48;
        case 0x4f1a4cu: goto label_4f1a4c;
        case 0x4f1a50u: goto label_4f1a50;
        case 0x4f1a54u: goto label_4f1a54;
        case 0x4f1a58u: goto label_4f1a58;
        case 0x4f1a5cu: goto label_4f1a5c;
        case 0x4f1a60u: goto label_4f1a60;
        case 0x4f1a64u: goto label_4f1a64;
        case 0x4f1a68u: goto label_4f1a68;
        case 0x4f1a6cu: goto label_4f1a6c;
        default: break;
    }

    ctx->pc = 0x4f17b0u;

label_4f17b0:
    // 0x4f17b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4f17b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4f17b4:
    // 0x4f17b4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4f17b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4f17b8:
    // 0x4f17b8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4f17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4f17bc:
    // 0x4f17bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f17bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f17c0:
    // 0x4f17c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f17c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4f17c4:
    // 0x4f17c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f17c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f17c8:
    // 0x4f17c8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4f17c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4f17cc:
    // 0x4f17cc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4f17ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4f17d0:
    // 0x4f17d0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4f17d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_4f17d4:
    // 0x4f17d4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4f17d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_4f17d8:
    // 0x4f17d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f17d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f17dc:
    // 0x4f17dc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4f17dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f17e0:
    // 0x4f17e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4f17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4f17e4:
    // 0x4f17e4: 0x10a20043  beq         $a1, $v0, . + 4 + (0x43 << 2)
label_4f17e8:
    if (ctx->pc == 0x4F17E8u) {
        ctx->pc = 0x4F17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17E4u;
        // 0x4f17e8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F17ECu;
        goto label_4f17ec;
    }
    ctx->pc = 0x4F17E4u;
    {
        const bool branch_taken_0x4f17e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17E4u;
        // 0x4f17e8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f17e4) {
            ctx->pc = 0x4F18F4u;
            goto label_4f18f4;
        }
    }
    ctx->pc = 0x4F17ECu;
label_4f17ec:
    // 0x4f17ec: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
label_4f17f0:
    if (ctx->pc == 0x4F17F0u) {
        ctx->pc = 0x4F17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F17ECu;
        // 0x4f17f0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F17F4u;
        goto label_4f17f4;
    }
    ctx->pc = 0x4F17ECu;
    {
        const bool branch_taken_0x4f17ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f17ec) {
            ctx->pc = 0x4F17F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F17ECu;
            // 0x4f17f0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1828u;
            goto label_4f1828;
        }
    }
    ctx->pc = 0x4F17F4u;
label_4f17f4:
    // 0x4f17f4: 0x68a2ffef  ldl         $v0, -0x11($a1)
    ctx->pc = 0x4f17f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4f17f8:
    // 0x4f17f8: 0x6ca2ffe8  ldr         $v0, -0x18($a1)
    ctx->pc = 0x4f17f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4f17fc:
    // 0x4f17fc: 0x68a3fff7  ldl         $v1, -0x9($a1)
    ctx->pc = 0x4f17fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4f1800:
    // 0x4f1800: 0x6ca3fff0  ldr         $v1, -0x10($a1)
    ctx->pc = 0x4f1800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4f1804:
    // 0x4f1804: 0x68a4ffff  ldl         $a0, -0x1($a1)
    ctx->pc = 0x4f1804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4f1808:
    // 0x4f1808: 0x6ca4fff8  ldr         $a0, -0x8($a1)
    ctx->pc = 0x4f1808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4f180c:
    // 0x4f180c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4f180cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1810:
    // 0x4f1810: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4f1810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1814:
    // 0x4f1814: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x4f1814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1818:
    // 0x4f1818: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x4f1818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f181c:
    // 0x4f181c: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x4f181cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1820:
    // 0x4f1820: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x4f1820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1824:
    // 0x4f1824: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f1824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f1828:
    // 0x4f1828: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x4f1828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_4f182c:
    // 0x4f182c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x4f182cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_4f1830:
    // 0x4f1830: 0x2486ffe8  addiu       $a2, $a0, -0x18
    ctx->pc = 0x4f1830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
label_4f1834:
    // 0x4f1834: 0x24850018  addiu       $a1, $a0, 0x18
    ctx->pc = 0x4f1834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_4f1838:
    // 0x4f1838: 0xd21023  subu        $v0, $a2, $s2
    ctx->pc = 0x4f1838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_4f183c:
    // 0x4f183c: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x4f183cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_4f1840:
    // 0x4f1840: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4f1840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4f1844:
    // 0x4f1844: 0x6a870007  ldl         $a3, 0x7($s4)
    ctx->pc = 0x4f1844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4f1848:
    // 0x4f1848: 0x6e870000  ldr         $a3, 0x0($s4)
    ctx->pc = 0x4f1848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4f184c:
    // 0x4f184c: 0x6a88000f  ldl         $t0, 0xF($s4)
    ctx->pc = 0x4f184cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4f1850:
    // 0x4f1850: 0x6e880008  ldr         $t0, 0x8($s4)
    ctx->pc = 0x4f1850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4f1854:
    // 0x4f1854: 0x6a830017  ldl         $v1, 0x17($s4)
    ctx->pc = 0x4f1854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4f1858:
    // 0x4f1858: 0x6e830010  ldr         $v1, 0x10($s4)
    ctx->pc = 0x4f1858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4f185c:
    // 0x4f185c: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x4f185cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1860:
    // 0x4f1860: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x4f1860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1864:
    // 0x4f1864: 0xb3a8000f  sdl         $t0, 0xF($sp)
    ctx->pc = 0x4f1864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1868:
    // 0x4f1868: 0xb7a80008  sdr         $t0, 0x8($sp)
    ctx->pc = 0x4f1868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f186c:
    // 0x4f186c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x4f186cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1870:
    // 0x4f1870: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x4f1870u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_4f1874:
    // 0x4f1874: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_4f1878:
    if (ctx->pc == 0x4F1878u) {
        ctx->pc = 0x4F1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1874u;
        // 0x4f1878: 0xb7a30010  sdr         $v1, 0x10($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F187Cu;
        goto label_4f187c;
    }
    ctx->pc = 0x4F1874u;
    {
        const bool branch_taken_0x4f1874 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1874u;
        // 0x4f1878: 0xb7a30010  sdr         $v1, 0x10($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1874) {
            ctx->pc = 0x4F18C0u;
            goto label_4f18c0;
        }
    }
    ctx->pc = 0x4F187Cu;
label_4f187c:
    // 0x4f187c: 0x0  nop
    ctx->pc = 0x4f187cu;
    // NOP
label_4f1880:
    // 0x4f1880: 0x2484ffe8  addiu       $a0, $a0, -0x18
    ctx->pc = 0x4f1880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
label_4f1884:
    // 0x4f1884: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x4f1884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
label_4f1888:
    // 0x4f1888: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x4f1888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4f188c:
    // 0x4f188c: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x4f188cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4f1890:
    // 0x4f1890: 0x68c8000f  ldl         $t0, 0xF($a2)
    ctx->pc = 0x4f1890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4f1894:
    // 0x4f1894: 0x6cc80008  ldr         $t0, 0x8($a2)
    ctx->pc = 0x4f1894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4f1898:
    // 0x4f1898: 0x68c30017  ldl         $v1, 0x17($a2)
    ctx->pc = 0x4f1898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4f189c:
    // 0x4f189c: 0x6cc30010  ldr         $v1, 0x10($a2)
    ctx->pc = 0x4f189cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4f18a0:
    // 0x4f18a0: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x4f18a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18a4:
    // 0x4f18a4: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x4f18a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18a8:
    // 0x4f18a8: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x4f18a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18ac:
    // 0x4f18ac: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x4f18acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18b0:
    // 0x4f18b0: 0xb0830017  sdl         $v1, 0x17($a0)
    ctx->pc = 0x4f18b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18b4:
    // 0x4f18b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f18b8:
    // 0x4f18b8: 0x1c40fff1  bgtz        $v0, . + 4 + (-0xF << 2)
label_4f18bc:
    if (ctx->pc == 0x4F18BCu) {
        ctx->pc = 0x4F18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F18B8u;
        // 0x4f18bc: 0xb4830010  sdr         $v1, 0x10($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F18C0u;
        goto label_4f18c0;
    }
    ctx->pc = 0x4F18B8u;
    {
        const bool branch_taken_0x4f18b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4F18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F18B8u;
        // 0x4f18bc: 0xb4830010  sdr         $v1, 0x10($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f18b8) {
            ctx->pc = 0x4F1880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1880;
        }
    }
    ctx->pc = 0x4F18C0u;
label_4f18c0:
    // 0x4f18c0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x4f18c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4f18c4:
    // 0x4f18c4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x4f18c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4f18c8:
    // 0x4f18c8: 0x6ba7000f  ldl         $a3, 0xF($sp)
    ctx->pc = 0x4f18c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4f18cc:
    // 0x4f18cc: 0x6fa70008  ldr         $a3, 0x8($sp)
    ctx->pc = 0x4f18ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4f18d0:
    // 0x4f18d0: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x4f18d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4f18d4:
    // 0x4f18d4: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x4f18d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4f18d8:
    // 0x4f18d8: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x4f18d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18dc:
    // 0x4f18dc: 0xb6460000  sdr         $a2, 0x0($s2)
    ctx->pc = 0x4f18dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18e0:
    // 0x4f18e0: 0xb247000f  sdl         $a3, 0xF($s2)
    ctx->pc = 0x4f18e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18e4:
    // 0x4f18e4: 0xb6470008  sdr         $a3, 0x8($s2)
    ctx->pc = 0x4f18e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18e8:
    // 0x4f18e8: 0xb2480017  sdl         $t0, 0x17($s2)
    ctx->pc = 0x4f18e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f18ec:
    // 0x4f18ec: 0x10000056  b           . + 4 + (0x56 << 2)
label_4f18f0:
    if (ctx->pc == 0x4F18F0u) {
        ctx->pc = 0x4F18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F18ECu;
        // 0x4f18f0: 0xb6480010  sdr         $t0, 0x10($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F18F4u;
        goto label_4f18f4;
    }
    ctx->pc = 0x4F18ECu;
    {
        const bool branch_taken_0x4f18ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F18ECu;
        // 0x4f18f0: 0xb6480010  sdr         $t0, 0x10($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f18ec) {
            ctx->pc = 0x4F1A48u;
            goto label_4f1a48;
        }
    }
    ctx->pc = 0x4F18F4u;
label_4f18f4:
    // 0x4f18f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4f18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f18f8:
    // 0x4f18f8: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x4f18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
label_4f18fc:
    // 0x4f18fc: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4f18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4f1900:
    // 0x4f1900: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4f1900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4f1904:
    // 0x4f1904: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x4f1904u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4f1908:
    // 0x4f1908: 0x8c89b9c0  lw          $t1, -0x4640($a0)
    ctx->pc = 0x4f1908u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949312)));
label_4f190c:
    // 0x4f190c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4f190cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4f1910:
    // 0x4f1910: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4f1910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f1914:
    // 0x4f1914: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x4f1914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4f1918:
    // 0x4f1918: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4f1918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4f191c:
    // 0x4f191c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4f191cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1920:
    // 0x4f1920: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x4f1920u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_4f1924:
    // 0x4f1924: 0x84e40050  lh          $a0, 0x50($a3)
    ctx->pc = 0x4f1924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_4f1928:
    // 0x4f1928: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x4f1928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4f192c:
    // 0x4f192c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x4f192cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_4f1930:
    // 0x4f1930: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x4f1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_4f1934:
    // 0x4f1934: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x4f1934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4f1938:
    // 0x4f1938: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x4f1938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4f193c:
    // 0x4f193c: 0xa3980b  movn        $s3, $a1, $v1
    ctx->pc = 0x4f193cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
label_4f1940:
    // 0x4f1940: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x4f1940u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_4f1944:
    // 0x4f1944: 0x2660018  mult        $zero, $s3, $a2
    ctx->pc = 0x4f1944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f1948:
    // 0x4f1948: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4f1948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_4f194c:
    // 0x4f194c: 0x24a5dbd8  addiu       $a1, $a1, -0x2428
    ctx->pc = 0x4f194cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958040));
label_4f1950:
    // 0x4f1950: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f1950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f1954:
    // 0x4f1954: 0x25088fd8  addiu       $t0, $t0, -0x7028
    ctx->pc = 0x4f1954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938584));
label_4f1958:
    // 0x4f1958: 0x254adbe0  addiu       $t2, $t2, -0x2420
    ctx->pc = 0x4f1958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958048));
label_4f195c:
    // 0x4f195c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f195cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f1960:
    // 0x4f1960: 0x3012  mflo        $a2
    ctx->pc = 0x4f1960u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_4f1964:
    // 0x4f1964: 0x40f809  jalr        $v0
label_4f1968:
    if (ctx->pc == 0x4F1968u) {
        ctx->pc = 0x4F1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1964u;
        // 0x4f1968: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F196Cu;
        goto label_4f196c;
    }
    ctx->pc = 0x4F1964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F196Cu);
        ctx->pc = 0x4F1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1964u;
        // 0x4f1968: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1964u, 0x4F196Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F196Cu;
label_4f196c:
    // 0x4f196c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4f196cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f1970:
    // 0x4f1970: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4f1970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f1974:
    // 0x4f1974: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f1974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f1978:
    // 0x4f1978: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f1978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f197c:
    // 0x4f197c: 0xc13c5d6  jal         func_4F1758
label_4f1980:
    if (ctx->pc == 0x4F1980u) {
        ctx->pc = 0x4F1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F197Cu;
        // 0x4f1980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1984u;
        goto label_4f1984;
    }
    ctx->pc = 0x4F197Cu;
    SET_GPR_U32(ctx, 31, 0x4F1984u);
    ctx->pc = 0x4F1980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F197Cu;
    // 0x4f1980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1758u, 0x4F197Cu, 0x4F1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1984u;
label_4f1984:
    // 0x4f1984: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_4f1988:
    if (ctx->pc == 0x4F1988u) {
        ctx->pc = 0x4F1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1984u;
        // 0x4f1988: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F198Cu;
        goto label_4f198c;
    }
    ctx->pc = 0x4F1984u;
    {
        const bool branch_taken_0x4f1984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1984) {
            ctx->pc = 0x4F1988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F1984u;
            // 0x4f1988: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F19C0u;
            goto label_4f19c0;
        }
    }
    ctx->pc = 0x4F198Cu;
label_4f198c:
    // 0x4f198c: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x4f198cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4f1990:
    // 0x4f1990: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x4f1990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4f1994:
    // 0x4f1994: 0x6a84000f  ldl         $a0, 0xF($s4)
    ctx->pc = 0x4f1994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4f1998:
    // 0x4f1998: 0x6e840008  ldr         $a0, 0x8($s4)
    ctx->pc = 0x4f1998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4f199c:
    // 0x4f199c: 0x6a850017  ldl         $a1, 0x17($s4)
    ctx->pc = 0x4f199cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4f19a0:
    // 0x4f19a0: 0x6e850010  ldr         $a1, 0x10($s4)
    ctx->pc = 0x4f19a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4f19a4:
    // 0x4f19a4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x4f19a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f19a8:
    // 0x4f19a8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x4f19a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f19ac:
    // 0x4f19ac: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x4f19acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f19b0:
    // 0x4f19b0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x4f19b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f19b4:
    // 0x4f19b4: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x4f19b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f19b8:
    // 0x4f19b8: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x4f19b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f19bc:
    // 0x4f19bc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4f19bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f19c0:
    // 0x4f19c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f19c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f19c4:
    // 0x4f19c4: 0x24460018  addiu       $a2, $v0, 0x18
    ctx->pc = 0x4f19c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_4f19c8:
    // 0x4f19c8: 0xc13c5d6  jal         func_4F1758
label_4f19cc:
    if (ctx->pc == 0x4F19CCu) {
        ctx->pc = 0x4F19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F19C8u;
        // 0x4f19cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F19D0u;
        goto label_4f19d0;
    }
    ctx->pc = 0x4F19C8u;
    SET_GPR_U32(ctx, 31, 0x4F19D0u);
    ctx->pc = 0x4F19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F19C8u;
    // 0x4f19cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1758u, 0x4F19C8u, 0x4F19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F19D0u;
label_4f19d0:
    // 0x4f19d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f19d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f19d4:
    // 0x4f19d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f19d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f19d8:
    // 0x4f19d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4f19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f19dc:
    // 0x4f19dc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4f19dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f19e0:
    // 0x4f19e0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_4f19e4:
    if (ctx->pc == 0x4F19E4u) {
        ctx->pc = 0x4F19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F19E0u;
        // 0x4f19e4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F19E8u;
        goto label_4f19e8;
    }
    ctx->pc = 0x4F19E0u;
    {
        const bool branch_taken_0x4f19e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f19e0) {
            ctx->pc = 0x4F19E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F19E0u;
            // 0x4f19e4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1A0Cu;
            goto label_4f1a0c;
        }
    }
    ctx->pc = 0x4F19E8u;
label_4f19e8:
    // 0x4f19e8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4f19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_4f19ec:
    // 0x4f19ec: 0x0  nop
    ctx->pc = 0x4f19ecu;
    // NOP
label_4f19f0:
    // 0x4f19f0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4f19f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f19f4:
    // 0x4f19f4: 0x0  nop
    ctx->pc = 0x4f19f4u;
    // NOP
label_4f19f8:
    // 0x4f19f8: 0x0  nop
    ctx->pc = 0x4f19f8u;
    // NOP
label_4f19fc:
    // 0x4f19fc: 0x0  nop
    ctx->pc = 0x4f19fcu;
    // NOP
label_4f1a00:
    // 0x4f1a00: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_4f1a04:
    if (ctx->pc == 0x4F1A04u) {
        ctx->pc = 0x4F1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A00u;
        // 0x4f1a04: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1A08u;
        goto label_4f1a08;
    }
    ctx->pc = 0x4F1A00u;
    {
        const bool branch_taken_0x4f1a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A00u;
        // 0x4f1a04: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1a00) {
            ctx->pc = 0x4F19F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f19f0;
        }
    }
    ctx->pc = 0x4F1A08u;
label_4f1a08:
    // 0x4f1a08: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4f1a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f1a0c:
    // 0x4f1a0c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4f1a10:
    if (ctx->pc == 0x4F1A10u) {
        ctx->pc = 0x4F1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A0Cu;
        // 0x4f1a10: 0x8ec8b9c0  lw          $t0, -0x4640($s6) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1A14u;
        goto label_4f1a14;
    }
    ctx->pc = 0x4F1A0Cu;
    {
        const bool branch_taken_0x4f1a0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A0Cu;
        // 0x4f1a10: 0x8ec8b9c0  lw          $t0, -0x4640($s6) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1a0c) {
            ctx->pc = 0x4F1A30u;
            goto label_4f1a30;
        }
    }
    ctx->pc = 0x4F1A14u;
label_4f1a14:
    // 0x4f1a14: 0x26a68fd8  addiu       $a2, $s5, -0x7028
    ctx->pc = 0x4f1a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938584));
label_4f1a18:
    // 0x4f1a18: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f1a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f1a1c:
    // 0x4f1a1c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f1a20:
    // 0x4f1a20: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f1a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f1a24:
    // 0x4f1a24: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f1a28:
    // 0x4f1a28: 0x60f809  jalr        $v1
label_4f1a2c:
    if (ctx->pc == 0x4F1A2Cu) {
        ctx->pc = 0x4F1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A28u;
        // 0x4f1a2c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1A30u;
        goto label_4f1a30;
    }
    ctx->pc = 0x4F1A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1A30u);
        ctx->pc = 0x4F1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A28u;
        // 0x4f1a2c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1A28u, 0x4F1A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1A30u;
label_4f1a30:
    // 0x4f1a30: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x4f1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4f1a34:
    // 0x4f1a34: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x4f1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_4f1a38:
    // 0x4f1a38: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x4f1a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4f1a3c:
    // 0x4f1a3c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x4f1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_4f1a40:
    // 0x4f1a40: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x4f1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4f1a44:
    // 0x4f1a44: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4f1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4f1a48:
    // 0x4f1a48: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4f1a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4f1a4c:
    // 0x4f1a4c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4f1a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f1a50:
    // 0x4f1a50: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4f1a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f1a54:
    // 0x4f1a54: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4f1a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f1a58:
    // 0x4f1a58: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f1a58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f1a5c:
    // 0x4f1a5c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4f1a5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f1a60:
    // 0x4f1a60: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4f1a60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f1a64:
    // 0x4f1a64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f1a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1a68:
    // 0x4f1a68: 0x3e00008  jr          $ra
label_4f1a6c:
    if (ctx->pc == 0x4F1A6Cu) {
        ctx->pc = 0x4F1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A68u;
        // 0x4f1a6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1A70u;
        goto label_fallthrough_0x4f1a68;
    }
    ctx->pc = 0x4F1A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1A68u;
        // 0x4f1a6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f1a68:
    ctx->pc = 0x4F1A70u;
}
