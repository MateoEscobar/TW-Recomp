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

// Function: sub_004A17C0
// Address: 0x4a17c0 - 0x4a1a58
void sub_004A17C0_0x4a17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A17C0_0x4a17c0");
#endif

    switch (ctx->pc) {
        case 0x4a17c0u: goto label_4a17c0;
        case 0x4a17c4u: goto label_4a17c4;
        case 0x4a17c8u: goto label_4a17c8;
        case 0x4a17ccu: goto label_4a17cc;
        case 0x4a17d0u: goto label_4a17d0;
        case 0x4a17d4u: goto label_4a17d4;
        case 0x4a17d8u: goto label_4a17d8;
        case 0x4a17dcu: goto label_4a17dc;
        case 0x4a17e0u: goto label_4a17e0;
        case 0x4a17e4u: goto label_4a17e4;
        case 0x4a17e8u: goto label_4a17e8;
        case 0x4a17ecu: goto label_4a17ec;
        case 0x4a17f0u: goto label_4a17f0;
        case 0x4a17f4u: goto label_4a17f4;
        case 0x4a17f8u: goto label_4a17f8;
        case 0x4a17fcu: goto label_4a17fc;
        case 0x4a1800u: goto label_4a1800;
        case 0x4a1804u: goto label_4a1804;
        case 0x4a1808u: goto label_4a1808;
        case 0x4a180cu: goto label_4a180c;
        case 0x4a1810u: goto label_4a1810;
        case 0x4a1814u: goto label_4a1814;
        case 0x4a1818u: goto label_4a1818;
        case 0x4a181cu: goto label_4a181c;
        case 0x4a1820u: goto label_4a1820;
        case 0x4a1824u: goto label_4a1824;
        case 0x4a1828u: goto label_4a1828;
        case 0x4a182cu: goto label_4a182c;
        case 0x4a1830u: goto label_4a1830;
        case 0x4a1834u: goto label_4a1834;
        case 0x4a1838u: goto label_4a1838;
        case 0x4a183cu: goto label_4a183c;
        case 0x4a1840u: goto label_4a1840;
        case 0x4a1844u: goto label_4a1844;
        case 0x4a1848u: goto label_4a1848;
        case 0x4a184cu: goto label_4a184c;
        case 0x4a1850u: goto label_4a1850;
        case 0x4a1854u: goto label_4a1854;
        case 0x4a1858u: goto label_4a1858;
        case 0x4a185cu: goto label_4a185c;
        case 0x4a1860u: goto label_4a1860;
        case 0x4a1864u: goto label_4a1864;
        case 0x4a1868u: goto label_4a1868;
        case 0x4a186cu: goto label_4a186c;
        case 0x4a1870u: goto label_4a1870;
        case 0x4a1874u: goto label_4a1874;
        case 0x4a1878u: goto label_4a1878;
        case 0x4a187cu: goto label_4a187c;
        case 0x4a1880u: goto label_4a1880;
        case 0x4a1884u: goto label_4a1884;
        case 0x4a1888u: goto label_4a1888;
        case 0x4a188cu: goto label_4a188c;
        case 0x4a1890u: goto label_4a1890;
        case 0x4a1894u: goto label_4a1894;
        case 0x4a1898u: goto label_4a1898;
        case 0x4a189cu: goto label_4a189c;
        case 0x4a18a0u: goto label_4a18a0;
        case 0x4a18a4u: goto label_4a18a4;
        case 0x4a18a8u: goto label_4a18a8;
        case 0x4a18acu: goto label_4a18ac;
        case 0x4a18b0u: goto label_4a18b0;
        case 0x4a18b4u: goto label_4a18b4;
        case 0x4a18b8u: goto label_4a18b8;
        case 0x4a18bcu: goto label_4a18bc;
        case 0x4a18c0u: goto label_4a18c0;
        case 0x4a18c4u: goto label_4a18c4;
        case 0x4a18c8u: goto label_4a18c8;
        case 0x4a18ccu: goto label_4a18cc;
        case 0x4a18d0u: goto label_4a18d0;
        case 0x4a18d4u: goto label_4a18d4;
        case 0x4a18d8u: goto label_4a18d8;
        case 0x4a18dcu: goto label_4a18dc;
        case 0x4a18e0u: goto label_4a18e0;
        case 0x4a18e4u: goto label_4a18e4;
        case 0x4a18e8u: goto label_4a18e8;
        case 0x4a18ecu: goto label_4a18ec;
        case 0x4a18f0u: goto label_4a18f0;
        case 0x4a18f4u: goto label_4a18f4;
        case 0x4a18f8u: goto label_4a18f8;
        case 0x4a18fcu: goto label_4a18fc;
        case 0x4a1900u: goto label_4a1900;
        case 0x4a1904u: goto label_4a1904;
        case 0x4a1908u: goto label_4a1908;
        case 0x4a190cu: goto label_4a190c;
        case 0x4a1910u: goto label_4a1910;
        case 0x4a1914u: goto label_4a1914;
        case 0x4a1918u: goto label_4a1918;
        case 0x4a191cu: goto label_4a191c;
        case 0x4a1920u: goto label_4a1920;
        case 0x4a1924u: goto label_4a1924;
        case 0x4a1928u: goto label_4a1928;
        case 0x4a192cu: goto label_4a192c;
        case 0x4a1930u: goto label_4a1930;
        case 0x4a1934u: goto label_4a1934;
        case 0x4a1938u: goto label_4a1938;
        case 0x4a193cu: goto label_4a193c;
        case 0x4a1940u: goto label_4a1940;
        case 0x4a1944u: goto label_4a1944;
        case 0x4a1948u: goto label_4a1948;
        case 0x4a194cu: goto label_4a194c;
        case 0x4a1950u: goto label_4a1950;
        case 0x4a1954u: goto label_4a1954;
        case 0x4a1958u: goto label_4a1958;
        case 0x4a195cu: goto label_4a195c;
        case 0x4a1960u: goto label_4a1960;
        case 0x4a1964u: goto label_4a1964;
        case 0x4a1968u: goto label_4a1968;
        case 0x4a196cu: goto label_4a196c;
        case 0x4a1970u: goto label_4a1970;
        case 0x4a1974u: goto label_4a1974;
        case 0x4a1978u: goto label_4a1978;
        case 0x4a197cu: goto label_4a197c;
        case 0x4a1980u: goto label_4a1980;
        case 0x4a1984u: goto label_4a1984;
        case 0x4a1988u: goto label_4a1988;
        case 0x4a198cu: goto label_4a198c;
        case 0x4a1990u: goto label_4a1990;
        case 0x4a1994u: goto label_4a1994;
        case 0x4a1998u: goto label_4a1998;
        case 0x4a199cu: goto label_4a199c;
        case 0x4a19a0u: goto label_4a19a0;
        case 0x4a19a4u: goto label_4a19a4;
        case 0x4a19a8u: goto label_4a19a8;
        case 0x4a19acu: goto label_4a19ac;
        case 0x4a19b0u: goto label_4a19b0;
        case 0x4a19b4u: goto label_4a19b4;
        case 0x4a19b8u: goto label_4a19b8;
        case 0x4a19bcu: goto label_4a19bc;
        case 0x4a19c0u: goto label_4a19c0;
        case 0x4a19c4u: goto label_4a19c4;
        case 0x4a19c8u: goto label_4a19c8;
        case 0x4a19ccu: goto label_4a19cc;
        case 0x4a19d0u: goto label_4a19d0;
        case 0x4a19d4u: goto label_4a19d4;
        case 0x4a19d8u: goto label_4a19d8;
        case 0x4a19dcu: goto label_4a19dc;
        case 0x4a19e0u: goto label_4a19e0;
        case 0x4a19e4u: goto label_4a19e4;
        case 0x4a19e8u: goto label_4a19e8;
        case 0x4a19ecu: goto label_4a19ec;
        case 0x4a19f0u: goto label_4a19f0;
        case 0x4a19f4u: goto label_4a19f4;
        case 0x4a19f8u: goto label_4a19f8;
        case 0x4a19fcu: goto label_4a19fc;
        case 0x4a1a00u: goto label_4a1a00;
        case 0x4a1a04u: goto label_4a1a04;
        case 0x4a1a08u: goto label_4a1a08;
        case 0x4a1a0cu: goto label_4a1a0c;
        case 0x4a1a10u: goto label_4a1a10;
        case 0x4a1a14u: goto label_4a1a14;
        case 0x4a1a18u: goto label_4a1a18;
        case 0x4a1a1cu: goto label_4a1a1c;
        case 0x4a1a20u: goto label_4a1a20;
        case 0x4a1a24u: goto label_4a1a24;
        case 0x4a1a28u: goto label_4a1a28;
        case 0x4a1a2cu: goto label_4a1a2c;
        case 0x4a1a30u: goto label_4a1a30;
        case 0x4a1a34u: goto label_4a1a34;
        case 0x4a1a38u: goto label_4a1a38;
        case 0x4a1a3cu: goto label_4a1a3c;
        case 0x4a1a40u: goto label_4a1a40;
        case 0x4a1a44u: goto label_4a1a44;
        case 0x4a1a48u: goto label_4a1a48;
        case 0x4a1a4cu: goto label_4a1a4c;
        case 0x4a1a50u: goto label_4a1a50;
        case 0x4a1a54u: goto label_4a1a54;
        default: break;
    }

    ctx->pc = 0x4a17c0u;

label_4a17c0:
    // 0x4a17c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a17c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4a17c4:
    // 0x4a17c4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4a17c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4a17c8:
    // 0x4a17c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a17c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4a17cc:
    // 0x4a17cc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a17ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4a17d0:
    // 0x4a17d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a17d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a17d4:
    // 0x4a17d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4a17d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a17d8:
    // 0x4a17d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a17d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a17dc:
    // 0x4a17dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a17dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a17e0:
    // 0x4a17e0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a17e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4a17e4:
    // 0x4a17e4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4a17e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a17e8:
    // 0x4a17e8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4a17e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4a17ec:
    // 0x4a17ec: 0x2506fffe  addiu       $a2, $t0, -0x2
    ctx->pc = 0x4a17ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_4a17f0:
    // 0x4a17f0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4a17f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4a17f4:
    // 0x4a17f4: 0x2d080003  sltiu       $t0, $t0, 0x3
    ctx->pc = 0x4a17f4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4a17f8:
    // 0x4a17f8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a17f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4a17fc:
    // 0x4a17fc: 0x2477f7a0  addiu       $s7, $v1, -0x860
    ctx->pc = 0x4a17fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965152));
label_4a1800:
    // 0x4a1800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a1800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a1804:
    // 0x4a1804: 0xc8980a  movz        $s3, $a2, $t0
    ctx->pc = 0x4a1804u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
label_4a1808:
    // 0x4a1808: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a1808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a180c:
    // 0x4a180c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a180cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a1810:
    // 0x4a1810: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4a1810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4a1814:
    // 0x4a1814: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4a1814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4a1818:
    // 0x4a1818: 0x10000073  b           . + 4 + (0x73 << 2)
label_4a181c:
    if (ctx->pc == 0x4A181Cu) {
        ctx->pc = 0x4A181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1818u;
        // 0x4a181c: 0x2828821  addu        $s1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1820u;
        goto label_4a1820;
    }
    ctx->pc = 0x4A1818u;
    {
        const bool branch_taken_0x4a1818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1818u;
        // 0x4a181c: 0x2828821  addu        $s1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1818) {
            ctx->pc = 0x4A19E8u;
            goto label_4a19e8;
        }
    }
    ctx->pc = 0x4A1820u;
label_4a1820:
    // 0x4a1820: 0x3c0b7c00  lui         $t3, 0x7C00
    ctx->pc = 0x4a1820u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
label_4a1824:
    // 0x4a1824: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a1824u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4a1828:
    // 0x4a1828: 0x7ae90000  lq          $t1, 0x0($s7)
    ctx->pc = 0x4a1828u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_4a182c:
    // 0x4a182c: 0x2459f700  addiu       $t9, $v0, -0x900
    ctx->pc = 0x4a182cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a1830:
    // 0x4a1830: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x4a1830u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_4a1834:
    // 0x4a1834: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x4a1834u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a1838:
    // 0x4a1838: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x4a1838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a183c:
    // 0x4a183c: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x4a183cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
label_4a1840:
    // 0x4a1840: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x4a1840u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
label_4a1844:
    // 0x4a1844: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x4a1844u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
label_4a1848:
    // 0x4a1848: 0x358c0404  ori         $t4, $t4, 0x404
    ctx->pc = 0x4a1848u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1028);
label_4a184c:
    // 0x4a184c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x4a184cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_4a1850:
    // 0x4a1850: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x4a1850u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
label_4a1854:
    // 0x4a1854: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4a1854u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_4a1858:
    // 0x4a1858: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x4a1858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a185c:
    // 0x4a185c: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x4a185cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_4a1860:
    // 0x4a1860: 0x202380b  movn        $a3, $s0, $v0
    ctx->pc = 0x4a1860u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
label_4a1864:
    // 0x4a1864: 0xef2018  mult        $a0, $a3, $t7
    ctx->pc = 0x4a1864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a1868:
    // 0x4a1868: 0xed1825  or          $v1, $a3, $t5
    ctx->pc = 0x4a1868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_4a186c:
    // 0x4a186c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a186cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a1870:
    // 0x4a1870: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x4a1870u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_4a1874:
    // 0x4a1874: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a1874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a1878:
    // 0x4a1878: 0x6c2825  or          $a1, $v1, $t4
    ctx->pc = 0x4a1878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
label_4a187c:
    // 0x4a187c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4a187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_4a1880:
    // 0x4a1880: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a1880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a1884:
    // 0x4a1884: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a1884u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a1888:
    // 0x4a1888: 0x4e1825  or          $v1, $v0, $t6
    ctx->pc = 0x4a1888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4a188c:
    // 0x4a188c: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a188cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a1890:
    // 0x4a1890: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a1894:
    // 0x4a1894: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a1894u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a1898:
    // 0x4a1898: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a1898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a189c:
    // 0x4a189c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a189cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a18a0:
    // 0x4a18a0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a18a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4a18a4:
    // 0x4a18a4: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x4a18a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
label_4a18a8:
    // 0x4a18a8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x4a18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_4a18ac:
    // 0x4a18ac: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x4a18acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_4a18b0:
    // 0x4a18b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a18b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a18b4:
    // 0x4a18b4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4a18b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_4a18b8:
    // 0x4a18b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a18b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a18bc:
    // 0x4a18bc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x4a18bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_4a18c0:
    // 0x4a18c0: 0x70a31b89  pcpyld      $v1, $a1, $v1
    ctx->pc = 0x4a18c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_4a18c4:
    // 0x4a18c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a18c8:
    // 0x4a18c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a18cc:
    // 0x4a18cc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4a18ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4a18d0:
    // 0x4a18d0: 0x10ea003d  beq         $a3, $t2, . + 4 + (0x3D << 2)
label_4a18d4:
    if (ctx->pc == 0x4A18D4u) {
        ctx->pc = 0x4A18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A18D0u;
        // 0x4a18d4: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A18D8u;
        goto label_4a18d8;
    }
    ctx->pc = 0x4A18D0u;
    {
        const bool branch_taken_0x4a18d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x4A18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A18D0u;
        // 0x4a18d4: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a18d0) {
            ctx->pc = 0x4A19C8u;
            goto label_4a19c8;
        }
    }
    ctx->pc = 0x4A18D8u;
label_4a18d8:
    // 0x4a18d8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a18d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_4a18dc:
    // 0x4a18dc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a18dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4a18e0:
    // 0x4a18e0: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x4a18e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4a18e4:
    // 0x4a18e4: 0x96460004  lhu         $a2, 0x4($s2)
    ctx->pc = 0x4a18e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_4a18e8:
    // 0x4a18e8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4a18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4a18ec:
    // 0x4a18ec: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4a18ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4a18f0:
    // 0x4a18f0: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x4a18f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_4a18f4:
    // 0x4a18f4: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x4a18f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_4a18f8:
    // 0x4a18f8: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a18fc:
    // 0x4a18fc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x4a18fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_4a1900:
    // 0x4a1900: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a1900u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a1904:
    // 0x4a1904: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a1904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a1908:
    // 0x4a1908: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a1908u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a190c:
    // 0x4a190c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x4a190cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_4a1910:
    // 0x4a1910: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a1910u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a1914:
    // 0x4a1914: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a1914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a1918:
    // 0x4a1918: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a191c:
    // 0x4a191c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x4a191cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_4a1920:
    // 0x4a1920: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a1920u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a1924:
    // 0x4a1924: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a1924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a1928:
    // 0x4a1928: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a192c:
    // 0x4a192c: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x4a192cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_4a1930:
    // 0x4a1930: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a1930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a1934:
    // 0x4a1934: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a1934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a1938:
    // 0x4a1938: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a193c:
    // 0x4a193c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a193cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a1940:
    // 0x4a1940: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a1940u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a1944:
    // 0x4a1944: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a1944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a1948:
    // 0x4a1948: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a194c:
    // 0x4a194c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a194cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a1950:
    // 0x4a1950: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a1950u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a1954:
    // 0x4a1954: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a1954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a1958:
    // 0x4a1958: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a195c:
    // 0x4a195c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a195cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a1960:
    // 0x4a1960: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a1960u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a1964:
    // 0x4a1964: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a1964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a1968:
    // 0x4a1968: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a196c:
    // 0x4a196c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a196cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a1970:
    // 0x4a1970: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a1970u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a1974:
    // 0x4a1974: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x4a1974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a1978:
    // 0x4a1978: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a197c:
    // 0x4a197c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4a197cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_4a1980:
    // 0x4a1980: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x4a1980u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_4a1984:
    // 0x4a1984: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x4a1984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a1988:
    // 0x4a1988: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a198c:
    // 0x4a198c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4a198cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_4a1990:
    // 0x4a1990: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x4a1990u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_4a1994:
    // 0x4a1994: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x4a1994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4a1998:
    // 0x4a1998: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a1998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a199c:
    // 0x4a199c: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x4a199cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_4a19a0:
    // 0x4a19a0: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4a19a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4a19a4:
    // 0x4a19a4: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4a19a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4a19a8:
    // 0x4a19a8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a19ac:
    // 0x4a19ac: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4a19acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_4a19b0:
    // 0x4a19b0: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x4a19b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_4a19b4:
    // 0x4a19b4: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x4a19b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4a19b8:
    // 0x4a19b8: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a19b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a19bc:
    // 0x4a19bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4a19bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4a19c0:
    // 0x4a19c0: 0x14e8ffc7  bne         $a3, $t0, . + 4 + (-0x39 << 2)
label_4a19c4:
    if (ctx->pc == 0x4A19C4u) {
        ctx->pc = 0x4A19C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19C0u;
        // 0x4a19c4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A19C8u;
        goto label_4a19c8;
    }
    ctx->pc = 0x4A19C0u;
    {
        const bool branch_taken_0x4a19c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x4A19C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19C0u;
        // 0x4a19c4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a19c0) {
            ctx->pc = 0x4A18E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a18e0;
        }
    }
    ctx->pc = 0x4A19C8u;
label_4a19c8:
    // 0x4a19c8: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a19cc:
    // 0x4a19cc: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x4a19ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
label_4a19d0:
    // 0x4a19d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a19d4:
    // 0x4a19d4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a19d8:
    // 0x4a19d8: 0x1600ff9f  bnez        $s0, . + 4 + (-0x61 << 2)
label_4a19dc:
    if (ctx->pc == 0x4A19DCu) {
        ctx->pc = 0x4A19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19D8u;
        // 0x4a19dc: 0x7b290000  lq          $t1, 0x0($t9) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A19E0u;
        goto label_4a19e0;
    }
    ctx->pc = 0x4A19D8u;
    {
        const bool branch_taken_0x4a19d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19D8u;
        // 0x4a19dc: 0x7b290000  lq          $t1, 0x0($t9) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a19d8) {
            ctx->pc = 0x4A1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1858;
        }
    }
    ctx->pc = 0x4A19E0u;
label_4a19e0:
    // 0x4a19e0: 0xc127ec8  jal         func_49FB20
label_4a19e4:
    if (ctx->pc == 0x4A19E4u) {
        ctx->pc = 0x4A19E8u;
        goto label_4a19e8;
    }
    ctx->pc = 0x4A19E0u;
    SET_GPR_U32(ctx, 31, 0x4A19E8u);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A19E0u, 0x4A19E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A19E8u;
label_4a19e8:
    // 0x4a19e8: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_4a19ec:
    if (ctx->pc == 0x4A19ECu) {
        ctx->pc = 0x4A19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19E8u;
        // 0x4a19ec: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A19F0u;
        goto label_4a19f0;
    }
    ctx->pc = 0x4A19E8u;
    {
        const bool branch_taken_0x4a19e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19E8u;
        // 0x4a19ec: 0x8f90879c  lw          $s0, -0x7864($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a19e8) {
            ctx->pc = 0x4A1A20u;
            goto label_4a1a20;
        }
    }
    ctx->pc = 0x4A19F0u;
label_4a19f0:
    // 0x4a19f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a19f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a19f4:
    // 0x4a19f4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a19f8:
    // 0x4a19f8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4a19f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a19fc:
    // 0x4a19fc: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x4a19fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4a1a00:
    // 0x4a1a00: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x4a1a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4a1a04:
    // 0x4a1a04: 0x263800a  movz        $s0, $s3, $v1
    ctx->pc = 0x4a1a04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_4a1a08:
    // 0x4a1a08: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4a1a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a1a0c:
    // 0x4a1a0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a1a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a10:
    // 0x4a1a10: 0x40f809  jalr        $v0
label_4a1a14:
    if (ctx->pc == 0x4A1A14u) {
        ctx->pc = 0x4A1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A10u;
        // 0x4a1a14: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1A18u;
        goto label_4a1a18;
    }
    ctx->pc = 0x4A1A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A1A18u);
        ctx->pc = 0x4A1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A10u;
        // 0x4a1a14: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1A10u, 0x4A1A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A1A18u;
label_4a1a18:
    // 0x4a1a18: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a1a1c:
    if (ctx->pc == 0x4A1A1Cu) {
        ctx->pc = 0x4A1A20u;
        goto label_4a1a20;
    }
    ctx->pc = 0x4A1A18u;
    {
        const bool branch_taken_0x4a1a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a1a18) {
            ctx->pc = 0x4A1A24u;
            goto label_4a1a24;
        }
    }
    ctx->pc = 0x4A1A20u;
label_4a1a20:
    // 0x4a1a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a1a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a24:
    // 0x4a1a24: 0x1600ff7e  bnez        $s0, . + 4 + (-0x82 << 2)
label_4a1a28:
    if (ctx->pc == 0x4A1A28u) {
        ctx->pc = 0x4A1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A24u;
        // 0x4a1a28: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1A2Cu;
        goto label_4a1a2c;
    }
    ctx->pc = 0x4A1A24u;
    {
        const bool branch_taken_0x4a1a24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A24u;
        // 0x4a1a28: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1a24) {
            ctx->pc = 0x4A1820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1820;
        }
    }
    ctx->pc = 0x4A1A2Cu;
label_4a1a2c:
    // 0x4a1a2c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a1a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a1a30:
    // 0x4a1a30: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a1a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a1a34:
    // 0x4a1a34: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a1a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a1a38:
    // 0x4a1a38: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a1a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a1a3c:
    // 0x4a1a3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a1a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a1a40:
    // 0x4a1a40: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a1a40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a1a44:
    // 0x4a1a44: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4a1a44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a1a48:
    // 0x4a1a48: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4a1a48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1a4c:
    // 0x4a1a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a1a50:
    // 0x4a1a50: 0x3e00008  jr          $ra
label_4a1a54:
    if (ctx->pc == 0x4A1A54u) {
        ctx->pc = 0x4A1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A50u;
        // 0x4a1a54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1A58u;
        goto label_fallthrough_0x4a1a50;
    }
    ctx->pc = 0x4A1A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A50u;
        // 0x4a1a54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a1a50:
    ctx->pc = 0x4A1A58u;
}
