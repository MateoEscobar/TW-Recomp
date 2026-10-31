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

// Function: sub_004D27D8
// Address: 0x4d27d8 - 0x4d2b88
void sub_004D27D8_0x4d27d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D27D8_0x4d27d8");
#endif

    switch (ctx->pc) {
        case 0x4d2818u: goto label_4d2818;
        case 0x4d2a20u: goto label_4d2a20;
        default: break;
    }

    ctx->pc = 0x4d27d8u;

    // 0x4d27d8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x4d27d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x4d27dc: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x4d27dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x4d27e0: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x4d27e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x4d27e4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x4d27e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d27e8: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x4d27e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x4d27ec: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4d27ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d27f0: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x4d27f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x4d27f4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4d27f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d27f8: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x4d27f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x4d27fc: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x4d27fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d2800: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x4d2800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x4d2804: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x4d2804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x4d2808: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x4d2808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x4d280c: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x4d280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x4d2810: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x4d2810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x4d2814: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x4d2814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
label_4d2818:
    // 0x4d2818: 0x96ca0010  lhu         $t2, 0x10($s6)
    ctx->pc = 0x4d2818u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4d281c: 0x96c80020  lhu         $t0, 0x20($s6)
    ctx->pc = 0x4d281cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x4d2820: 0x96cb0030  lhu         $t3, 0x30($s6)
    ctx->pc = 0x4d2820u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x4d2824: 0x1481025  or          $v0, $t2, $t0
    ctx->pc = 0x4d2824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x4d2828: 0x96c40040  lhu         $a0, 0x40($s6)
    ctx->pc = 0x4d2828u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x4d282c: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x4d282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x4d2830: 0x96cc0050  lhu         $t4, 0x50($s6)
    ctx->pc = 0x4d2830u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x4d2834: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4d2834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4d2838: 0x96c90060  lhu         $t1, 0x60($s6)
    ctx->pc = 0x4d2838u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x4d283c: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x4d283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x4d2840: 0x96cd0070  lhu         $t5, 0x70($s6)
    ctx->pc = 0x4d2840u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x4d2844: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x4d2844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x4d2848: 0x1a21025  or          $v0, $t5, $v0
    ctx->pc = 0x4d2848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x4d284c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D284Cu;
    {
        const bool branch_taken_0x4d284c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d284c) {
            ctx->pc = 0x4D2850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D284Cu;
            // 0x4d2850: 0x8ee20040  lw          $v0, 0x40($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D2890u;
            goto label_4d2890;
        }
    }
    ctx->pc = 0x4D2854u;
    // 0x4d2854: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4d2854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d2858: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4d2858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d285c: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4d285cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x4d2860: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x4d2860u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x4d2864: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4d2864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d2868: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x4d2868u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x4d286c: 0xae6200e0  sw          $v0, 0xE0($s3)
    ctx->pc = 0x4d286cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 2));
    // 0x4d2870: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d2870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4d2874: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x4d2874u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x4d2878: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x4d2878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x4d287c: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x4d287cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    // 0x4d2880: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x4d2880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x4d2884: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x4d2884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
    // 0x4d2888: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x4D2888u;
    {
        const bool branch_taken_0x4d2888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2888u;
        // 0x4d288c: 0xae6200c0  sw          $v0, 0xC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2888) {
            ctx->pc = 0x4D2A00u;
            goto label_4d2a00;
        }
    }
    ctx->pc = 0x4D2890u;
label_4d2890:
    // 0x4d2890: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4d2890u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4d2894: 0x8ee300c0  lw          $v1, 0xC0($s7)
    ctx->pc = 0x4d2894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 192)));
    // 0x4d2898: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x4d2898u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4d289c: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x4d289cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x4d28a0: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x4d28a0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x4d28a4: 0x1024018  mult        $t0, $t0, $v0
    ctx->pc = 0x4d28a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4d28a8: 0x8ef00020  lw          $s0, 0x20($s7)
    ctx->pc = 0x4d28a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x4d28ac: 0x8eee0060  lw          $t6, 0x60($s7)
    ctx->pc = 0x4d28acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 96)));
    // 0x4d28b0: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x4d28b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4d28b4: 0x8ef100a0  lw          $s1, 0xA0($s7)
    ctx->pc = 0x4d28b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 160)));
    // 0x4d28b8: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x4d28b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4d28bc: 0x8eef00e0  lw          $t7, 0xE0($s7)
    ctx->pc = 0x4d28bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 224)));
    // 0x4d28c0: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x4d28c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x4d28c4: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x4d28c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x4d28c8: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x4d28c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x4d28cc: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x4d28ccu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x4d28d0: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x4d28d0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x4d28d4: 0xc6403  sra         $t4, $t4, 16
    ctx->pc = 0x4d28d4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 16));
    // 0x4d28d8: 0xd6c03  sra         $t5, $t5, 16
    ctx->pc = 0x4d28d8u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 16));
    // 0x4d28dc: 0x1505018  mult        $t2, $t2, $s0
    ctx->pc = 0x4d28dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4d28e0: 0x16e5818  mult        $t3, $t3, $t6
    ctx->pc = 0x4d28e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4d28e4: 0x8aac3  sra         $s5, $t0, 11
    ctx->pc = 0x4d28e4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 11));
    // 0x4d28e8: 0x9a2c3  sra         $s4, $t1, 11
    ctx->pc = 0x4d28e8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 11));
    // 0x4d28ec: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x4d28ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4d28f0: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x4d28f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4d28f4: 0x8ee80080  lw          $t0, 0x80($s7)
    ctx->pc = 0x4d28f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
    // 0x4d28f8: 0x47400  sll         $t6, $a0, 16
    ctx->pc = 0x4d28f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4d28fc: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4d28fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d2900: 0xe7403  sra         $t6, $t6, 16
    ctx->pc = 0x4d2900u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 16));
    // 0x4d2904: 0x86d00000  lh          $s0, 0x0($s6)
    ctx->pc = 0x4d2904u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d2908: 0xac2c3  sra         $t8, $t2, 11
    ctx->pc = 0x4d2908u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 10), 11));
    // 0x4d290c: 0xb5ac3  sra         $t3, $t3, 11
    ctx->pc = 0x4d290cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 11));
    // 0x4d2910: 0xc8ac3  sra         $s1, $t4, 11
    ctx->pc = 0x4d2910u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 12), 11));
    // 0x4d2914: 0x2b47823  subu        $t7, $s5, $s4
    ctx->pc = 0x4d2914u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x4d2918: 0xd6ac3  sra         $t5, $t5, 11
    ctx->pc = 0x4d2918u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 11));
    // 0x4d291c: 0x1c87018  mult        $t6, $t6, $t0
    ctx->pc = 0x4d291cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x4d2920: 0x24030b50  addiu       $v1, $zero, 0xB50
    ctx->pc = 0x4d2920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2896));
    // 0x4d2924: 0x22bc823  subu        $t9, $s1, $t3
    ctx->pc = 0x4d2924u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x4d2928: 0x30d9023  subu        $s2, $t8, $t5
    ctx->pc = 0x4d2928u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x4d292c: 0x2098018  mult        $s0, $s0, $t1
    ctx->pc = 0x4d292cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x4d2930: 0x1e37818  mult        $t7, $t7, $v1
    ctx->pc = 0x4d2930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x4d2934: 0x3325021  addu        $t2, $t9, $s2
    ctx->pc = 0x4d2934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 18)));
    // 0x4d2938: 0x24020ec8  addiu       $v0, $zero, 0xEC8
    ctx->pc = 0x4d2938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3784));
    // 0x4d293c: 0x2409eb18  addiu       $t1, $zero, -0x14E8
    ctx->pc = 0x4d293cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961944));
    // 0x4d2940: 0x22b8821  addu        $s1, $s1, $t3
    ctx->pc = 0x4d2940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x4d2944: 0x30d3021  addu        $a2, $t8, $t5
    ctx->pc = 0x4d2944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x4d2948: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x4d2948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4d294c: 0x3294818  mult        $t1, $t9, $t1
    ctx->pc = 0x4d294cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4d2950: 0xd15823  subu        $t3, $a2, $s1
    ctx->pc = 0x4d2950u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x4d2954: 0xecac3  sra         $t9, $t6, 11
    ctx->pc = 0x4d2954u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 14), 11));
    // 0x4d2958: 0x24020b50  addiu       $v0, $zero, 0xB50
    ctx->pc = 0x4d2958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2896));
    // 0x4d295c: 0x240808a9  addiu       $t0, $zero, 0x8A9
    ctx->pc = 0x4d295cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2217));
    // 0x4d2960: 0x2b47021  addu        $t6, $s5, $s4
    ctx->pc = 0x4d2960u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x4d2964: 0x1625818  mult        $t3, $t3, $v0
    ctx->pc = 0x4d2964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4d2968: 0x1082c3  sra         $s0, $s0, 11
    ctx->pc = 0x4d2968u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 11));
    // 0x4d296c: 0x2484018  mult        $t0, $s2, $t0
    ctx->pc = 0x4d296cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4d2970: 0xf7ac3  sra         $t7, $t7, 11
    ctx->pc = 0x4d2970u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 11));
    // 0x4d2974: 0x2192023  subu        $a0, $s0, $t9
    ctx->pc = 0x4d2974u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x4d2978: 0x2196021  addu        $t4, $s0, $t9
    ctx->pc = 0x4d2978u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x4d297c: 0x1ee2823  subu        $a1, $t7, $t6
    ctx->pc = 0x4d297cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x4d2980: 0xa3ac3  sra         $a3, $t2, 11
    ctx->pc = 0x4d2980u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 11));
    // 0x4d2984: 0x85c823  subu        $t9, $a0, $a1
    ctx->pc = 0x4d2984u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d2988: 0x85a821  addu        $s5, $a0, $a1
    ctx->pc = 0x4d2988u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d298c: 0x94ac3  sra         $t1, $t1, 11
    ctx->pc = 0x4d298cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 11));
    // 0x4d2990: 0xd16821  addu        $t5, $a2, $s1
    ctx->pc = 0x4d2990u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x4d2994: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x4d2994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x4d2998: 0x18ea023  subu        $s4, $t4, $t6
    ctx->pc = 0x4d2998u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x4d299c: 0xad8823  subu        $s1, $a1, $t5
    ctx->pc = 0x4d299cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x4d29a0: 0x18e8021  addu        $s0, $t4, $t6
    ctx->pc = 0x4d29a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x4d29a4: 0xb22c3  sra         $a0, $t3, 11
    ctx->pc = 0x4d29a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 11));
    // 0x4d29a8: 0x842c3  sra         $t0, $t0, 11
    ctx->pc = 0x4d29a8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 11));
    // 0x4d29ac: 0x915823  subu        $t3, $a0, $s1
    ctx->pc = 0x4d29acu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x4d29b0: 0x1076023  subu        $t4, $t0, $a3
    ctx->pc = 0x4d29b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x4d29b4: 0x18bc021  addu        $t8, $t4, $t3
    ctx->pc = 0x4d29b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x4d29b8: 0x20d2823  subu        $a1, $s0, $t5
    ctx->pc = 0x4d29b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x4d29bc: 0x2b13823  subu        $a3, $s5, $s1
    ctx->pc = 0x4d29bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x4d29c0: 0x32b4023  subu        $t0, $t9, $t3
    ctx->pc = 0x4d29c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x4d29c4: 0x2984823  subu        $t1, $s4, $t8
    ctx->pc = 0x4d29c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x4d29c8: 0x20d1021  addu        $v0, $s0, $t5
    ctx->pc = 0x4d29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x4d29cc: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x4d29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x4d29d0: 0x32b2021  addu        $a0, $t9, $t3
    ctx->pc = 0x4d29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x4d29d4: 0x2983021  addu        $a2, $s4, $t8
    ctx->pc = 0x4d29d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x4d29d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d29d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4d29dc: 0xae6500e0  sw          $a1, 0xE0($s3)
    ctx->pc = 0x4d29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 5));
    // 0x4d29e0: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4d29e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x4d29e4: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x4d29e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x4d29e8: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x4d29e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x4d29ec: 0xae6700c0  sw          $a3, 0xC0($s3)
    ctx->pc = 0x4d29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 7));
    // 0x4d29f0: 0xae640040  sw          $a0, 0x40($s3)
    ctx->pc = 0x4d29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 4));
    // 0x4d29f4: 0xae6800a0  sw          $t0, 0xA0($s3)
    ctx->pc = 0x4d29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 8));
    // 0x4d29f8: 0xae660080  sw          $a2, 0x80($s3)
    ctx->pc = 0x4d29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 6));
    // 0x4d29fc: 0xae690060  sw          $t1, 0x60($s3)
    ctx->pc = 0x4d29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 9));
label_4d2a00:
    // 0x4d2a00: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x4d2a00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x4d2a04: 0x1fc0ff84  bgtz        $fp, . + 4 + (-0x7C << 2)
    ctx->pc = 0x4D2A04u;
    {
        const bool branch_taken_0x4d2a04 = (GPR_S32(ctx, 30) > 0);
        ctx->pc = 0x4D2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2A04u;
        // 0x4d2a08: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2a04) {
            ctx->pc = 0x4D2818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d2818;
        }
    }
    ctx->pc = 0x4D2A0Cu;
    // 0x4d2a0c: 0x8faf0100  lw          $t7, 0x100($sp)
    ctx->pc = 0x4d2a0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4d2a10: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x4d2a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2a14: 0x24160b50  addiu       $s6, $zero, 0xB50
    ctx->pc = 0x4d2a14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2896));
    // 0x4d2a18: 0x2417eb18  addiu       $s7, $zero, -0x14E8
    ctx->pc = 0x4d2a18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961944));
    // 0x4d2a1c: 0x241e0007  addiu       $fp, $zero, 0x7
    ctx->pc = 0x4d2a1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4d2a20:
    // 0x4d2a20: 0x8e6d0018  lw          $t5, 0x18($s3)
    ctx->pc = 0x4d2a20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4d2a24: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x4d2a24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x4d2a28: 0x8e6e0008  lw          $t6, 0x8($s3)
    ctx->pc = 0x4d2a28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4d2a2c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x4d2a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4d2a30: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x4d2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4d2a34: 0x1cd4823  subu        $t1, $t6, $t5
    ctx->pc = 0x4d2a34u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x4d2a38: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4d2a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4d2a3c: 0x1364818  mult        $t1, $t1, $s6
    ctx->pc = 0x4d2a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4d2a40: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x4d2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4d2a44: 0xa3c823  subu        $t9, $a1, $v1
    ctx->pc = 0x4d2a44u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d2a48: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x4d2a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d2a4c: 0x3375818  mult        $t3, $t9, $s7
    ctx->pc = 0x4d2a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4d2a50: 0x829023  subu        $s2, $a0, $v0
    ctx->pc = 0x4d2a50u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d2a54: 0x24030ec8  addiu       $v1, $zero, 0xEC8
    ctx->pc = 0x4d2a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3784));
    // 0x4d2a58: 0x3324021  addu        $t0, $t9, $s2
    ctx->pc = 0x4d2a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 18)));
    // 0x4d2a5c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x4d2a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d2a60: 0x1034018  mult        $t0, $t0, $v1
    ctx->pc = 0x4d2a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4d2a64: 0x8e6c0000  lw          $t4, 0x0($s3)
    ctx->pc = 0x4d2a64u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d2a68: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x4d2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4d2a6c: 0xd15023  subu        $t2, $a2, $s1
    ctx->pc = 0x4d2a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x4d2a70: 0x240408a9  addiu       $a0, $zero, 0x8A9
    ctx->pc = 0x4d2a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2217));
    // 0x4d2a74: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x4d2a74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x4d2a78: 0x94ac3  sra         $t1, $t1, 11
    ctx->pc = 0x4d2a78u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 11));
    // 0x4d2a7c: 0x2441018  mult        $v0, $s2, $a0
    ctx->pc = 0x4d2a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d2a80: 0x1565018  mult        $t2, $t2, $s6
    ctx->pc = 0x4d2a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4d2a84: 0x1832023  subu        $a0, $t4, $v1
    ctx->pc = 0x4d2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x4d2a88: 0x12e2823  subu        $a1, $t1, $t6
    ctx->pc = 0x4d2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x4d2a8c: 0x83ac3  sra         $a3, $t0, 11
    ctx->pc = 0x4d2a8cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 11));
    // 0x4d2a90: 0x85c823  subu        $t9, $a0, $a1
    ctx->pc = 0x4d2a90u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d2a94: 0x85a821  addu        $s5, $a0, $a1
    ctx->pc = 0x4d2a94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d2a98: 0xb5ac3  sra         $t3, $t3, 11
    ctx->pc = 0x4d2a98u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 11));
    // 0x4d2a9c: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x4d2a9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x4d2aa0: 0x1672821  addu        $a1, $t3, $a3
    ctx->pc = 0x4d2aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x4d2aa4: 0xd16821  addu        $t5, $a2, $s1
    ctx->pc = 0x4d2aa4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x4d2aa8: 0xad8823  subu        $s1, $a1, $t5
    ctx->pc = 0x4d2aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x4d2aac: 0x18ea023  subu        $s4, $t4, $t6
    ctx->pc = 0x4d2aacu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x4d2ab0: 0x18e8021  addu        $s0, $t4, $t6
    ctx->pc = 0x4d2ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x4d2ab4: 0xa22c3  sra         $a0, $t2, 11
    ctx->pc = 0x4d2ab4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 10), 11));
    // 0x4d2ab8: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x4d2ab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x4d2abc: 0x915823  subu        $t3, $a0, $s1
    ctx->pc = 0x4d2abcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x4d2ac0: 0x476023  subu        $t4, $v0, $a3
    ctx->pc = 0x4d2ac0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4d2ac4: 0x20d3023  subu        $a2, $s0, $t5
    ctx->pc = 0x4d2ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x4d2ac8: 0x18bc021  addu        $t8, $t4, $t3
    ctx->pc = 0x4d2ac8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x4d2acc: 0x2b13823  subu        $a3, $s5, $s1
    ctx->pc = 0x4d2accu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x4d2ad0: 0x32b4023  subu        $t0, $t9, $t3
    ctx->pc = 0x4d2ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x4d2ad4: 0x2984823  subu        $t1, $s4, $t8
    ctx->pc = 0x4d2ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x4d2ad8: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x4d2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x4d2adc: 0x32b2021  addu        $a0, $t9, $t3
    ctx->pc = 0x4d2adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x4d2ae0: 0x2982821  addu        $a1, $s4, $t8
    ctx->pc = 0x4d2ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 24)));
    // 0x4d2ae4: 0x20d1021  addu        $v0, $s0, $t5
    ctx->pc = 0x4d2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x4d2ae8: 0x24c6007f  addiu       $a2, $a2, 0x7F
    ctx->pc = 0x4d2ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x4d2aec: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x4d2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x4d2af0: 0x24e7007f  addiu       $a3, $a3, 0x7F
    ctx->pc = 0x4d2af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x4d2af4: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x4d2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4d2af8: 0x2508007f  addiu       $t0, $t0, 0x7F
    ctx->pc = 0x4d2af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 127));
    // 0x4d2afc: 0x24a5007f  addiu       $a1, $a1, 0x7F
    ctx->pc = 0x4d2afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x4d2b00: 0x2529007f  addiu       $t1, $t1, 0x7F
    ctx->pc = 0x4d2b00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 127));
    // 0x4d2b04: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x4d2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x4d2b08: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x4d2b08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x4d2b0c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x4d2b0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x4d2b10: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x4d2b10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x4d2b14: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x4d2b14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x4d2b18: 0x84203  sra         $t0, $t0, 8
    ctx->pc = 0x4d2b18u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 8));
    // 0x4d2b1c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x4d2b1cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x4d2b20: 0x94a03  sra         $t1, $t1, 8
    ctx->pc = 0x4d2b20u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 8));
    // 0x4d2b24: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4d2b24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4d2b28: 0xa1e60007  sb          $a2, 0x7($t7)
    ctx->pc = 0x4d2b28u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d2b2c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x4d2b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x4d2b30: 0xa1e30001  sb          $v1, 0x1($t7)
    ctx->pc = 0x4d2b30u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d2b34: 0xa1e70006  sb          $a3, 0x6($t7)
    ctx->pc = 0x4d2b34u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 6), (uint8_t)GPR_U32(ctx, 7));
    // 0x4d2b38: 0xa1e40002  sb          $a0, 0x2($t7)
    ctx->pc = 0x4d2b38u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d2b3c: 0xa1e80005  sb          $t0, 0x5($t7)
    ctx->pc = 0x4d2b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x4d2b40: 0xa1e50004  sb          $a1, 0x4($t7)
    ctx->pc = 0x4d2b40u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d2b44: 0xa1e90003  sb          $t1, 0x3($t7)
    ctx->pc = 0x4d2b44u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x4d2b48: 0xa1e20000  sb          $v0, 0x0($t7)
    ctx->pc = 0x4d2b48u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d2b4c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x4d2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x4d2b50: 0x7c1ffb3  bgez        $fp, . + 4 + (-0x4D << 2)
    ctx->pc = 0x4D2B50u;
    {
        const bool branch_taken_0x4d2b50 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x4D2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2B50u;
        // 0x4d2b54: 0x1e27821  addu        $t7, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2b50) {
            ctx->pc = 0x4D2A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d2a20;
        }
    }
    ctx->pc = 0x4D2B58u;
    // 0x4d2b58: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x4d2b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4d2b5c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x4d2b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x4d2b60: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x4d2b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4d2b64: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x4d2b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x4d2b68: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x4d2b68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x4d2b6c: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x4d2b6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x4d2b70: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x4d2b70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4d2b74: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x4d2b74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4d2b78: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x4d2b78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x4d2b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2B7Cu;
        // 0x4d2b80: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D2B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D2B84u;
    // 0x4d2b84: 0x0  nop
    ctx->pc = 0x4d2b84u;
    // NOP
    ctx->pc = 0x4d2b88u;
}
