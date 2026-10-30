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

// Function: sub_004D2FC0
// Address: 0x4d2fc0 - 0x4d33f8
void sub_004D2FC0_0x4d2fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2FC0_0x4d2fc0");
#endif

    switch (ctx->pc) {
        case 0x4d3018u: goto label_4d3018;
        case 0x4d3230u: goto label_4d3230;
        default: break;
    }

    ctx->pc = 0x4d2fc0u;

    // 0x4d2fc0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x4d2fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x4d2fc4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4d2fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4d2fc8: 0x244251c0  addiu       $v0, $v0, 0x51C0
    ctx->pc = 0x4d2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20928));
    // 0x4d2fcc: 0xffb70158  sd          $s7, 0x158($sp)
    ctx->pc = 0x4d2fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 23));
    // 0x4d2fd0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x4d2fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x4d2fd4: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x4d2fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x4d2fd8: 0xe2b821  addu        $s7, $a3, $v0
    ctx->pc = 0x4d2fd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d2fdc: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x4d2fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x4d2fe0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4d2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d2fe4: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x4d2fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x4d2fe8: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x4d2fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x4d2fec: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4d2fecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2ff0: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x4d2ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x4d2ff4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x4d2ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2ff8: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x4d2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x4d2ffc: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x4d2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x4d3000: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x4d3000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x4d3004: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x4d3004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x4d3008: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x4d3008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x4d300c: 0xafa8010c  sw          $t0, 0x10C($sp)
    ctx->pc = 0x4d300cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 8));
    // 0x4d3010: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x4d3010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x4d3014: 0x0  nop
    ctx->pc = 0x4d3014u;
    // NOP
label_4d3018:
    // 0x4d3018: 0x96ca0010  lhu         $t2, 0x10($s6)
    ctx->pc = 0x4d3018u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4d301c: 0x96c80020  lhu         $t0, 0x20($s6)
    ctx->pc = 0x4d301cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x4d3020: 0x96cb0030  lhu         $t3, 0x30($s6)
    ctx->pc = 0x4d3020u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x4d3024: 0x1481025  or          $v0, $t2, $t0
    ctx->pc = 0x4d3024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x4d3028: 0x96c40040  lhu         $a0, 0x40($s6)
    ctx->pc = 0x4d3028u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x4d302c: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x4d302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x4d3030: 0x96cc0050  lhu         $t4, 0x50($s6)
    ctx->pc = 0x4d3030u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x4d3034: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4d3034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4d3038: 0x96c90060  lhu         $t1, 0x60($s6)
    ctx->pc = 0x4d3038u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x4d303c: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x4d303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x4d3040: 0x96cd0070  lhu         $t5, 0x70($s6)
    ctx->pc = 0x4d3040u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x4d3044: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x4d3044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x4d3048: 0x1a21025  or          $v0, $t5, $v0
    ctx->pc = 0x4d3048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x4d304c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D304Cu;
    {
        const bool branch_taken_0x4d304c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d304c) {
            ctx->pc = 0x4D3050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D304Cu;
            // 0x4d3050: 0x8ee20040  lw          $v0, 0x40($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3090u;
            goto label_4d3090;
        }
    }
    ctx->pc = 0x4D3054u;
    // 0x4d3054: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4d3054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d3058: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4d3058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d305c: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4d305cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x4d3060: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x4d3060u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x4d3064: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4d3064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d3068: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x4d3068u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x4d306c: 0xae4200e0  sw          $v0, 0xE0($s2)
    ctx->pc = 0x4d306cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 2));
    // 0x4d3070: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d3070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4d3074: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4d3074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x4d3078: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x4d3078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x4d307c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x4d307cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x4d3080: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x4d3080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x4d3084: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x4d3084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    // 0x4d3088: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x4D3088u;
    {
        const bool branch_taken_0x4d3088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3088u;
        // 0x4d308c: 0xae4200c0  sw          $v0, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3088) {
            ctx->pc = 0x4D3204u;
            goto label_4d3204;
        }
    }
    ctx->pc = 0x4D3090u;
label_4d3090:
    // 0x4d3090: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4d3090u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4d3094: 0x8ee300c0  lw          $v1, 0xC0($s7)
    ctx->pc = 0x4d3094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 192)));
    // 0x4d3098: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x4d3098u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4d309c: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x4d309cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x4d30a0: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x4d30a0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x4d30a4: 0x8ef00020  lw          $s0, 0x20($s7)
    ctx->pc = 0x4d30a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x4d30a8: 0x1024018  mult        $t0, $t0, $v0
    ctx->pc = 0x4d30a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4d30ac: 0x8eee0060  lw          $t6, 0x60($s7)
    ctx->pc = 0x4d30acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 96)));
    // 0x4d30b0: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x4d30b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4d30b4: 0x8ef100a0  lw          $s1, 0xA0($s7)
    ctx->pc = 0x4d30b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 160)));
    // 0x4d30b8: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x4d30b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4d30bc: 0x8eef00e0  lw          $t7, 0xE0($s7)
    ctx->pc = 0x4d30bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 224)));
    // 0x4d30c0: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x4d30c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x4d30c4: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x4d30c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x4d30c8: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x4d30c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x4d30cc: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x4d30ccu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x4d30d0: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x4d30d0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x4d30d4: 0xc6403  sra         $t4, $t4, 16
    ctx->pc = 0x4d30d4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 16));
    // 0x4d30d8: 0xd6c03  sra         $t5, $t5, 16
    ctx->pc = 0x4d30d8u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 16));
    // 0x4d30dc: 0x1505018  mult        $t2, $t2, $s0
    ctx->pc = 0x4d30dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4d30e0: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x4d30e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4d30e4: 0x89ac3  sra         $s3, $t0, 11
    ctx->pc = 0x4d30e4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 8), 11));
    // 0x4d30e8: 0x9aac3  sra         $s5, $t1, 11
    ctx->pc = 0x4d30e8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 9), 11));
    // 0x4d30ec: 0x16e5818  mult        $t3, $t3, $t6
    ctx->pc = 0x4d30ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4d30f0: 0x1916018  mult        $t4, $t4, $s1
    ctx->pc = 0x4d30f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4d30f4: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4d30f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d30f8: 0x47400  sll         $t6, $a0, 16
    ctx->pc = 0x4d30f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4d30fc: 0x8ee80080  lw          $t0, 0x80($s7)
    ctx->pc = 0x4d30fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
    // 0x4d3100: 0xa8ac3  sra         $s1, $t2, 11
    ctx->pc = 0x4d3100u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 10), 11));
    // 0x4d3104: 0x86d00000  lh          $s0, 0x0($s6)
    ctx->pc = 0x4d3104u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d3108: 0x2757823  subu        $t7, $s3, $s5
    ctx->pc = 0x4d3108u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x4d310c: 0xb5ac3  sra         $t3, $t3, 11
    ctx->pc = 0x4d310cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 11));
    // 0x4d3110: 0xc62c3  sra         $t4, $t4, 11
    ctx->pc = 0x4d3110u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 11));
    // 0x4d3114: 0xdcac3  sra         $t9, $t5, 11
    ctx->pc = 0x4d3114u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 13), 11));
    // 0x4d3118: 0x24030b50  addiu       $v1, $zero, 0xB50
    ctx->pc = 0x4d3118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2896));
    // 0x4d311c: 0xe7403  sra         $t6, $t6, 16
    ctx->pc = 0x4d311cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 16));
    // 0x4d3120: 0x18bc023  subu        $t8, $t4, $t3
    ctx->pc = 0x4d3120u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x4d3124: 0x2396823  subu        $t5, $s1, $t9
    ctx->pc = 0x4d3124u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 25)));
    // 0x4d3128: 0x1c87018  mult        $t6, $t6, $t0
    ctx->pc = 0x4d3128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x4d312c: 0x2098018  mult        $s0, $s0, $t1
    ctx->pc = 0x4d312cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x4d3130: 0x30d5021  addu        $t2, $t8, $t5
    ctx->pc = 0x4d3130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x4d3134: 0x1e37818  mult        $t7, $t7, $v1
    ctx->pc = 0x4d3134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x4d3138: 0x24020ec8  addiu       $v0, $zero, 0xEC8
    ctx->pc = 0x4d3138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3784));
    // 0x4d313c: 0x2409eb18  addiu       $t1, $zero, -0x14E8
    ctx->pc = 0x4d313cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961944));
    // 0x4d3140: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x4d3140u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x4d3144: 0x239f021  addu        $fp, $s1, $t9
    ctx->pc = 0x4d3144u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 25)));
    // 0x4d3148: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x4d3148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4d314c: 0x3094818  mult        $t1, $t8, $t1
    ctx->pc = 0x4d314cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4d3150: 0x3cc5823  subu        $t3, $fp, $t4
    ctx->pc = 0x4d3150u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
    // 0x4d3154: 0x24020b50  addiu       $v0, $zero, 0xB50
    ctx->pc = 0x4d3154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2896));
    // 0x4d3158: 0x240808a9  addiu       $t0, $zero, 0x8A9
    ctx->pc = 0x4d3158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2217));
    // 0x4d315c: 0x275a021  addu        $s4, $s3, $s5
    ctx->pc = 0x4d315cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x4d3160: 0x1625818  mult        $t3, $t3, $v0
    ctx->pc = 0x4d3160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x4d3164: 0x1082c3  sra         $s0, $s0, 11
    ctx->pc = 0x4d3164u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 11));
    // 0x4d3168: 0xec2c3  sra         $t8, $t6, 11
    ctx->pc = 0x4d3168u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 14), 11));
    // 0x4d316c: 0x1a84018  mult        $t0, $t5, $t0
    ctx->pc = 0x4d316cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4d3170: 0xf7ac3  sra         $t7, $t7, 11
    ctx->pc = 0x4d3170u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 11));
    // 0x4d3174: 0x2187023  subu        $t6, $s0, $t8
    ctx->pc = 0x4d3174u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x4d3178: 0x2188821  addu        $s1, $s0, $t8
    ctx->pc = 0x4d3178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x4d317c: 0x1f41823  subu        $v1, $t7, $s4
    ctx->pc = 0x4d317cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
    // 0x4d3180: 0xa52c3  sra         $t2, $t2, 11
    ctx->pc = 0x4d3180u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 11));
    // 0x4d3184: 0x1c3c023  subu        $t8, $t6, $v1
    ctx->pc = 0x4d3184u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x4d3188: 0x1c39821  addu        $s3, $t6, $v1
    ctx->pc = 0x4d3188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x4d318c: 0x94ac3  sra         $t1, $t1, 11
    ctx->pc = 0x4d318cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 11));
    // 0x4d3190: 0xafac0108  sw          $t4, 0x108($sp)
    ctx->pc = 0x4d3190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 12));
    // 0x4d3194: 0x3ccc821  addu        $t9, $fp, $t4
    ctx->pc = 0x4d3194u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
    // 0x4d3198: 0x12a1821  addu        $v1, $t1, $t2
    ctx->pc = 0x4d3198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x4d319c: 0x234a823  subu        $s5, $s1, $s4
    ctx->pc = 0x4d319cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4d31a0: 0x796023  subu        $t4, $v1, $t9
    ctx->pc = 0x4d31a0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x4d31a4: 0x2348021  addu        $s0, $s1, $s4
    ctx->pc = 0x4d31a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4d31a8: 0x842c3  sra         $t0, $t0, 11
    ctx->pc = 0x4d31a8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 11));
    // 0x4d31ac: 0xb72c3  sra         $t6, $t3, 11
    ctx->pc = 0x4d31acu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 11), 11));
    // 0x4d31b0: 0x10a8823  subu        $s1, $t0, $t2
    ctx->pc = 0x4d31b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x4d31b4: 0x1cc5823  subu        $t3, $t6, $t4
    ctx->pc = 0x4d31b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x4d31b8: 0x2192823  subu        $a1, $s0, $t9
    ctx->pc = 0x4d31b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x4d31bc: 0x22b8821  addu        $s1, $s1, $t3
    ctx->pc = 0x4d31bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x4d31c0: 0x26c3823  subu        $a3, $s3, $t4
    ctx->pc = 0x4d31c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x4d31c4: 0x30b4023  subu        $t0, $t8, $t3
    ctx->pc = 0x4d31c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x4d31c8: 0x2b14823  subu        $t1, $s5, $s1
    ctx->pc = 0x4d31c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x4d31cc: 0x2191021  addu        $v0, $s0, $t9
    ctx->pc = 0x4d31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x4d31d0: 0x26c1821  addu        $v1, $s3, $t4
    ctx->pc = 0x4d31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x4d31d4: 0x30b2021  addu        $a0, $t8, $t3
    ctx->pc = 0x4d31d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x4d31d8: 0x2b13021  addu        $a2, $s5, $s1
    ctx->pc = 0x4d31d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x4d31dc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d31dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4d31e0: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4d31e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x4d31e4: 0xae4500e0  sw          $a1, 0xE0($s2)
    ctx->pc = 0x4d31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 5));
    // 0x4d31e8: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x4d31e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x4d31ec: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x4d31ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x4d31f0: 0xae4700c0  sw          $a3, 0xC0($s2)
    ctx->pc = 0x4d31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 7));
    // 0x4d31f4: 0xae440040  sw          $a0, 0x40($s2)
    ctx->pc = 0x4d31f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 4));
    // 0x4d31f8: 0xae4800a0  sw          $t0, 0xA0($s2)
    ctx->pc = 0x4d31f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 8));
    // 0x4d31fc: 0xae460080  sw          $a2, 0x80($s2)
    ctx->pc = 0x4d31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 6));
    // 0x4d3200: 0xae490060  sw          $t1, 0x60($s2)
    ctx->pc = 0x4d3200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 9));
label_4d3204:
    // 0x4d3204: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d3204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d3208: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x4d3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4d320c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4d3210: 0x1c60ff81  bgtz        $v1, . + 4 + (-0x7F << 2)
    ctx->pc = 0x4D3210u;
    {
        const bool branch_taken_0x4d3210 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x4D3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3210u;
        // 0x4d3214: 0xafa30110  sw          $v1, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3210) {
            ctx->pc = 0x4D3018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3018;
        }
    }
    ctx->pc = 0x4D3218u;
    // 0x4d3218: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4d3218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4d321c: 0x8faf0100  lw          $t7, 0x100($sp)
    ctx->pc = 0x4d321cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4d3220: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x4d3220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x4d3224: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x4d3224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3228: 0x24160b50  addiu       $s6, $zero, 0xB50
    ctx->pc = 0x4d3228u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2896));
    // 0x4d322c: 0x2417eb18  addiu       $s7, $zero, -0x14E8
    ctx->pc = 0x4d322cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961944));
label_4d3230:
    // 0x4d3230: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x4d3230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4d3234: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d3234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d3238: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4d3238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4d323c: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x4d323cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x4d3240: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x4d3240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4d3244: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4d3244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4d3248: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x4d3248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4d324c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x4d324cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d3250: 0x827023  subu        $t6, $a0, $v0
    ctx->pc = 0x4d3250u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d3254: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4d3254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4d3258: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x4d3258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4d325c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4d325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4d3260: 0xc5c023  subu        $t8, $a2, $a1
    ctx->pc = 0x4d3260u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4d3264: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4d3264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4d3268: 0x3176018  mult        $t4, $t8, $s7
    ctx->pc = 0x4d3268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4d326c: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x4d326cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4d3270: 0x82f021  addu        $fp, $a0, $v0
    ctx->pc = 0x4d3270u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d3274: 0x826823  subu        $t5, $a0, $v0
    ctx->pc = 0x4d3274u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d3278: 0x3c8c821  addu        $t9, $fp, $t0
    ctx->pc = 0x4d3278u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x4d327c: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x4d327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x4d3280: 0x67a021  addu        $s4, $v1, $a3
    ctx->pc = 0x4d3280u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4d3284: 0x2348021  addu        $s0, $s1, $s4
    ctx->pc = 0x4d3284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4d3288: 0x30d3021  addu        $a2, $t8, $t5
    ctx->pc = 0x4d3288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x4d328c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4d328cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d3290: 0x24040ec8  addiu       $a0, $zero, 0xEC8
    ctx->pc = 0x4d3290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3784));
    // 0x4d3294: 0x2191021  addu        $v0, $s0, $t9
    ctx->pc = 0x4d3294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x4d3298: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x4d3298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4d329c: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x4d329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x4d32a0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4d32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4d32a4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4d32a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4d32a8: 0x240408a9  addiu       $a0, $zero, 0x8A9
    ctx->pc = 0x4d32a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2217));
    // 0x4d32ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d32acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d32b0: 0x761818  mult        $v1, $v1, $s6
    ctx->pc = 0x4d32b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4d32b4: 0xa1e50000  sb          $a1, 0x0($t7)
    ctx->pc = 0x4d32b4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d32b8: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x4d32b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4d32bc: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x4d32bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x4d32c0: 0x2192023  subu        $a0, $s0, $t9
    ctx->pc = 0x4d32c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x4d32c4: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x4d32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4d32c8: 0x652c3  sra         $t2, $a2, 11
    ctx->pc = 0x4d32c8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 11));
    // 0x4d32cc: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x4d32ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x4d32d0: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x4d32d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x4d32d4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x4d32d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x4d32d8: 0xc62c3  sra         $t4, $t4, 11
    ctx->pc = 0x4d32d8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 11));
    // 0x4d32dc: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x4d32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4d32e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4d32e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d32e4: 0xa1e20007  sb          $v0, 0x7($t7)
    ctx->pc = 0x4d32e4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d32e8: 0x1c3c023  subu        $t8, $t6, $v1
    ctx->pc = 0x4d32e8u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x4d32ec: 0x1c39821  addu        $s3, $t6, $v1
    ctx->pc = 0x4d32ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x4d32f0: 0x3c82823  subu        $a1, $fp, $t0
    ctx->pc = 0x4d32f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x4d32f4: 0x18a1821  addu        $v1, $t4, $t2
    ctx->pc = 0x4d32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x4d32f8: 0x8fa8010c  lw          $t0, 0x10C($sp)
    ctx->pc = 0x4d32f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x4d32fc: 0x796023  subu        $t4, $v1, $t9
    ctx->pc = 0x4d32fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x4d3300: 0xb62818  mult        $a1, $a1, $s6
    ctx->pc = 0x4d3300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4d3304: 0x26c1021  addu        $v0, $s3, $t4
    ctx->pc = 0x4d3304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x4d3308: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x4d3308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x4d330c: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x4d330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x4d3310: 0x26c2023  subu        $a0, $s3, $t4
    ctx->pc = 0x4d3310u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x4d3314: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4d3314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4d3318: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x4d3318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4d331c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d3320: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x4d3320u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x4d3324: 0xa1e30001  sb          $v1, 0x1($t7)
    ctx->pc = 0x4d3324u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d3328: 0x572c3  sra         $t6, $a1, 11
    ctx->pc = 0x4d3328u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 5), 11));
    // 0x4d332c: 0x1cc5823  subu        $t3, $t6, $t4
    ctx->pc = 0x4d332cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x4d3330: 0x234a823  subu        $s5, $s1, $s4
    ctx->pc = 0x4d3330u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4d3334: 0x91020006  lbu         $v0, 0x6($t0)
    ctx->pc = 0x4d3334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x4d3338: 0x30b1821  addu        $v1, $t8, $t3
    ctx->pc = 0x4d3338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x4d333c: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x4d333cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x4d3340: 0x30b3023  subu        $a2, $t8, $t3
    ctx->pc = 0x4d3340u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x4d3344: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4d3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d3348: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x4d3348u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x4d334c: 0xa1e20006  sb          $v0, 0x6($t7)
    ctx->pc = 0x4d334cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d3350: 0x24c6007f  addiu       $a2, $a2, 0x7F
    ctx->pc = 0x4d3350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x4d3354: 0xd6ac3  sra         $t5, $t5, 11
    ctx->pc = 0x4d3354u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 11));
    // 0x4d3358: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x4d3358u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x4d335c: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x4d335cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x4d3360: 0x1aa8823  subu        $s1, $t5, $t2
    ctx->pc = 0x4d3360u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x4d3364: 0x22b8821  addu        $s1, $s1, $t3
    ctx->pc = 0x4d3364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x4d3368: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x4d3368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x4d336c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d3370: 0x2b12021  addu        $a0, $s5, $s1
    ctx->pc = 0x4d3370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x4d3374: 0xa1e20002  sb          $v0, 0x2($t7)
    ctx->pc = 0x4d3374u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d3378: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x4d3378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4d337c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x4d337cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x4d3380: 0x2b12823  subu        $a1, $s5, $s1
    ctx->pc = 0x4d3380u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x4d3384: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x4d3384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x4d3388: 0x24a5007f  addiu       $a1, $a1, 0x7F
    ctx->pc = 0x4d3388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x4d338c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x4d338cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x4d3390: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4d3390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4d3394: 0xa1e30005  sb          $v1, 0x5($t7)
    ctx->pc = 0x4d3394u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d3398: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x4d3398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4d339c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4d339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d33a0: 0xa1e20004  sb          $v0, 0x4($t7)
    ctx->pc = 0x4d33a0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d33a4: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x4d33a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x4d33a8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x4d33a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x4d33ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4d33acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4d33b0: 0xafa8010c  sw          $t0, 0x10C($sp)
    ctx->pc = 0x4d33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 8));
    // 0x4d33b4: 0xa1e30003  sb          $v1, 0x3($t7)
    ctx->pc = 0x4d33b4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d33b8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x4d33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4d33bc: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x4d33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x4d33c0: 0x461ff9b  bgez        $v1, . + 4 + (-0x65 << 2)
    ctx->pc = 0x4D33C0u;
    {
        const bool branch_taken_0x4d33c0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4D33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D33C0u;
        // 0x4d33c4: 0x1e27821  addu        $t7, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d33c0) {
            ctx->pc = 0x4D3230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3230;
        }
    }
    ctx->pc = 0x4D33C8u;
    // 0x4d33c8: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x4d33c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4d33cc: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x4d33ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x4d33d0: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x4d33d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x4d33d4: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x4d33d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x4d33d8: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x4d33d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4d33dc: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x4d33dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4d33e0: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x4d33e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x4d33e4: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x4d33e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x4d33e8: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x4d33e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4d33ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4D33ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D33ECu;
        // 0x4d33f0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D33ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D33F4u;
    // 0x4d33f4: 0x0  nop
    ctx->pc = 0x4d33f4u;
    // NOP
    ctx->pc = 0x4d33f8u;
}
