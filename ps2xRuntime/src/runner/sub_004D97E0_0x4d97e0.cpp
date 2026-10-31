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

// Function: sub_004D97E0
// Address: 0x4d97e0 - 0x4d9e48
void sub_004D97E0_0x4d97e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D97E0_0x4d97e0");
#endif

    ctx->pc = 0x4d97e0u;

    // 0x4d97e0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4d97e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d97e4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d97e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d97e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4d97e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4d97ec: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x4d97ecu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x4d97f0: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x4d97f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x4d97f4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4d97f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4d97f8: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4D97F8u;
    {
        const bool branch_taken_0x4d97f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4D97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D97F8u;
        // 0x4d97fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d97f8) {
            ctx->pc = 0x4D9854u;
            goto label_4d9854;
        }
    }
    ctx->pc = 0x4D9800u;
    // 0x4d9800: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x4d9800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x4d9804: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4d9804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4d9808: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d9808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d980c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d980cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9810: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d9810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d9814: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4d9814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4d9818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4d9818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4d981c: 0x41823  negu        $v1, $a0
    ctx->pc = 0x4d981cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4d9820: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4d9820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4d9824: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4d9824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4d9828: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4d9828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4d982c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4d982cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4d9830: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x4d9830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d9834: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x4d9834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4d9838: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4d9838u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4d983c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4d983cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4d9840: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4d9840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4d9844: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4d9844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d9848: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d9848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d984c: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x4d984cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4d9850: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x4d9850u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_4d9854:
    // 0x4d9854: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x4d9854u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x4d9858: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4D9858u;
    {
        const bool branch_taken_0x4d9858 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4D985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9858u;
        // 0x4d985c: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9858) {
            ctx->pc = 0x4D98A8u;
            goto label_4d98a8;
        }
    }
    ctx->pc = 0x4D9860u;
    // 0x4d9860: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x4d9860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4d9864: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4d9864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4d9868: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d9868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d986c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d986cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9870: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d9870u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d9874: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4d9874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4d9878: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4d9878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4d987c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4d987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4d9880: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d9880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4d9884: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4d9884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4d9888: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x4d9888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4d988c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x4d988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4d9890: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4d9890u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4d9894: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4d9894u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4d9898: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4d9898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4d989c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4d989cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4d98a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4d98a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4d98a4: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x4d98a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_4d98a8:
    // 0x4d98a8: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x4d98a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x4d98ac: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x4d98acu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x4d98b0: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x4d98b0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x4d98b4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x4d98b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x4d98b8: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x4d98b8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x4d98bc: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x4d98bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4d98c0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x4d98c0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x4d98c4: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x4D98C4u;
    {
        const bool branch_taken_0x4d98c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D98C4u;
        // 0x4d98c8: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d98c4) {
            ctx->pc = 0x4D9B94u;
            goto label_4d9b94;
        }
    }
    ctx->pc = 0x4D98CCu;
    // 0x4d98cc: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x4d98ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d98d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4D98D0u;
    {
        const bool branch_taken_0x4d98d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D98D0u;
        // 0x4d98d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d98d0) {
            ctx->pc = 0x4D9960u;
            goto label_4d9960;
        }
    }
    ctx->pc = 0x4D98D8u;
    // 0x4d98d8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4d98d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d98dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D98DCu;
    {
        const bool branch_taken_0x4d98dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D98DCu;
        // 0x4d98e0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d98dc) {
            ctx->pc = 0x4D98F8u;
            goto label_4d98f8;
        }
    }
    ctx->pc = 0x4D98E4u;
    // 0x4d98e4: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x4d98e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4d98e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4d98e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d98ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4D98ECu;
    {
        const bool branch_taken_0x4d98ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D98ECu;
        // 0x4d98f0: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d98ec) {
            ctx->pc = 0x4D9910u;
            goto label_4d9910;
        }
    }
    ctx->pc = 0x4D98F4u;
    // 0x4d98f4: 0x0  nop
    ctx->pc = 0x4d98f4u;
    // NOP
label_4d98f8:
    // 0x4d98f8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4d98f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4d98fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d98fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d9900: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4d9900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4d9904: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4d9904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d9908: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x4d9908u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x4d990c: 0x0  nop
    ctx->pc = 0x4d990cu;
    // NOP
label_4d9910:
    // 0x4d9910: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4d9910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4d9914: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x4d9914u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x4d9918: 0x24426320  addiu       $v0, $v0, 0x6320
    ctx->pc = 0x4d9918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25376));
    // 0x4d991c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4d991cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4d9920: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d9920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d9924: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4d9924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d9928: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4d9928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4d992c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x4d992cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4d9930: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D9930u;
    {
        const bool branch_taken_0x4d9930 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9930u;
        // 0x4d9934: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9930) {
            ctx->pc = 0x4D994Cu;
            goto label_4d994c;
        }
    }
    ctx->pc = 0x4D9938u;
    // 0x4d9938: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x4d9938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d993c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x4d993cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x4d9940: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x4d9940u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9944: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x4d9944u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d9948: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x4d9948u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_4d994c:
    // 0x4d994c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x4d994cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x4d9950: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x4d9950u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x4d9954: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x4D9954u;
    {
        const bool branch_taken_0x4d9954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9954u;
        // 0x4d9958: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9954) {
            ctx->pc = 0x4D9AD8u;
            goto label_4d9ad8;
        }
    }
    ctx->pc = 0x4D995Cu;
    // 0x4d995c: 0x0  nop
    ctx->pc = 0x4d995cu;
    // NOP
label_4d9960:
    // 0x4d9960: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D9960u;
    {
        const bool branch_taken_0x4d9960 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9960u;
        // 0x4d9964: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9960) {
            ctx->pc = 0x4D9988u;
            goto label_4d9988;
        }
    }
    ctx->pc = 0x4D9968u;
    // 0x4d9968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d9968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d996c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D996Cu;
    {
        const bool branch_taken_0x4d996c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d996c) {
            ctx->pc = 0x4D9970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D996Cu;
            // 0x4d9970: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9974u;
            goto label_4d9974;
        }
    }
    ctx->pc = 0x4D9974u;
label_4d9974:
    // 0x4d9974: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x4d9974u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4d9978: 0x1012  mflo        $v0
    ctx->pc = 0x4d9978u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d997c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4d997cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9980: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x4d9980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4d9984: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4d9984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4d9988:
    // 0x4d9988: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D9988u;
    {
        const bool branch_taken_0x4d9988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9988u;
        // 0x4d998c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9988) {
            ctx->pc = 0x4D99A0u;
            goto label_4d99a0;
        }
    }
    ctx->pc = 0x4D9990u;
    // 0x4d9990: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x4d9990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4d9994: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4d9994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d9998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D9998u;
    {
        const bool branch_taken_0x4d9998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9998u;
        // 0x4d999c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9998) {
            ctx->pc = 0x4D99B8u;
            goto label_4d99b8;
        }
    }
    ctx->pc = 0x4D99A0u;
label_4d99a0:
    // 0x4d99a0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4d99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4d99a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d99a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d99a8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4d99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4d99ac: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4d99acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d99b0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x4d99b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x4d99b4: 0x0  nop
    ctx->pc = 0x4d99b4u;
    // NOP
label_4d99b8:
    // 0x4d99b8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4d99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4d99bc: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x4d99bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x4d99c0: 0x24426320  addiu       $v0, $v0, 0x6320
    ctx->pc = 0x4d99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25376));
    // 0x4d99c4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4d99c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4d99c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d99cc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4d99ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d99d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4d99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4d99d4: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x4d99d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4d99d8: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D99D8u;
    {
        const bool branch_taken_0x4d99d8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D99D8u;
        // 0x4d99dc: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d99d8) {
            ctx->pc = 0x4D99F0u;
            goto label_4d99f0;
        }
    }
    ctx->pc = 0x4D99E0u;
    // 0x4d99e0: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x4d99e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x4d99e4: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x4d99e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x4d99e8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x4D99E8u;
    {
        const bool branch_taken_0x4d99e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D99E8u;
        // 0x4d99ec: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d99e8) {
            ctx->pc = 0x4D9ACCu;
            goto label_4d9acc;
        }
    }
    ctx->pc = 0x4D99F0u;
label_4d99f0:
    // 0x4d99f0: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x4d99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d99f4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x4d99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x4d99f8: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x4d99f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x4d99fc: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x4d99fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d9a00: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x4d9a00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9a04: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x4d9a04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9a08: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x4d9a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x4d9a0c: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x4d9a0cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x4d9a10: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x4d9a10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x4d9a14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4d9a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9a18: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x4d9a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x4d9a1c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D9A1Cu;
    {
        const bool branch_taken_0x4d9a1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9a1c) {
            ctx->pc = 0x4D9A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9A1Cu;
            // 0x4d9a20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9A24u;
            goto label_4d9a24;
        }
    }
    ctx->pc = 0x4D9A24u;
label_4d9a24:
    // 0x4d9a24: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x4d9a24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9a28: 0x1012  mflo        $v0
    ctx->pc = 0x4d9a28u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d9a2c: 0x1810  mfhi        $v1
    ctx->pc = 0x4d9a2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4d9a30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d9a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9a34: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4d9a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4d9a38: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4d9a38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4d9a3c: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x4d9a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4d9a40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d9a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4d9a44: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4d9a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d9a48: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4D9A48u;
    {
        const bool branch_taken_0x4d9a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9a48) {
            ctx->pc = 0x4D9A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9A48u;
            // 0x4d9a4c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9A74u;
            goto label_4d9a74;
        }
    }
    ctx->pc = 0x4D9A50u;
    // 0x4d9a50: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4d9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4d9a54: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x4d9a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d9a58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D9A58u;
    {
        const bool branch_taken_0x4d9a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9a58) {
            ctx->pc = 0x4D9A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9A58u;
            // 0x4d9a5c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9A74u;
            goto label_4d9a74;
        }
    }
    ctx->pc = 0x4D9A60u;
    // 0x4d9a60: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4d9a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d9a64: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D9A64u;
    {
        const bool branch_taken_0x4d9a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9a64) {
            ctx->pc = 0x4D9A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9A64u;
            // 0x4d9a68: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9A70u;
            goto label_4d9a70;
        }
    }
    ctx->pc = 0x4D9A6Cu;
    // 0x4d9a6c: 0x0  nop
    ctx->pc = 0x4d9a6cu;
    // NOP
label_4d9a70:
    // 0x4d9a70: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4d9a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4d9a74:
    // 0x4d9a74: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x4d9a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4d9a78: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x4d9a78u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4d9a7c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D9A7Cu;
    {
        const bool branch_taken_0x4d9a7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9a7c) {
            ctx->pc = 0x4D9A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9A7Cu;
            // 0x4d9a80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9A84u;
            goto label_4d9a84;
        }
    }
    ctx->pc = 0x4D9A84u;
label_4d9a84:
    // 0x4d9a84: 0x1012  mflo        $v0
    ctx->pc = 0x4d9a84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d9a88: 0x1810  mfhi        $v1
    ctx->pc = 0x4d9a88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4d9a8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d9a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9a90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4d9a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4d9a94: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4d9a94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4d9a98: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x4d9a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4d9a9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d9a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4d9aa0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4d9aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d9aa4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D9AA4u;
    {
        const bool branch_taken_0x4d9aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9aa4) {
            ctx->pc = 0x4D9AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9AA4u;
            // 0x4d9aa8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9ACCu;
            goto label_4d9acc;
        }
    }
    ctx->pc = 0x4D9AACu;
    // 0x4d9aac: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4d9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4d9ab0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x4d9ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d9ab4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D9AB4u;
    {
        const bool branch_taken_0x4d9ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9AB4u;
        // 0x4d9ab8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9ab4) {
            ctx->pc = 0x4D9ACCu;
            goto label_4d9acc;
        }
    }
    ctx->pc = 0x4D9ABCu;
    // 0x4d9abc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4d9abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d9ac0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D9AC0u;
    {
        const bool branch_taken_0x4d9ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9ac0) {
            ctx->pc = 0x4D9AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9AC0u;
            // 0x4d9ac4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9AC8u;
            goto label_4d9ac8;
        }
    }
    ctx->pc = 0x4D9AC8u;
label_4d9ac8:
    // 0x4d9ac8: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x4d9ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4d9acc:
    // 0x4d9acc: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x4d9accu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x4d9ad0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4d9ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9ad4: 0x0  nop
    ctx->pc = 0x4d9ad4u;
    // NOP
label_4d9ad8:
    // 0x4d9ad8: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x4d9ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x4d9adc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D9ADCu;
    {
        const bool branch_taken_0x4d9adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9adc) {
            ctx->pc = 0x4D9AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9ADCu;
            // 0x4d9ae0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9AE4u;
            goto label_4d9ae4;
        }
    }
    ctx->pc = 0x4D9AE4u;
label_4d9ae4:
    // 0x4d9ae4: 0x1012  mflo        $v0
    ctx->pc = 0x4d9ae4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d9ae8: 0x1810  mfhi        $v1
    ctx->pc = 0x4d9ae8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4d9aec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d9aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9af0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4d9af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4d9af4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4d9af4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4d9af8: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x4d9af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4d9afc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d9afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4d9b00: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4d9b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d9b04: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D9B04u;
    {
        const bool branch_taken_0x4d9b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9b04) {
            ctx->pc = 0x4D9B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9B04u;
            // 0x4d9b08: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9B2Cu;
            goto label_4d9b2c;
        }
    }
    ctx->pc = 0x4D9B0Cu;
    // 0x4d9b0c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4d9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4d9b10: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x4d9b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d9b14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D9B14u;
    {
        const bool branch_taken_0x4d9b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9b14) {
            ctx->pc = 0x4D9B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9B14u;
            // 0x4d9b18: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9B2Cu;
            goto label_4d9b2c;
        }
    }
    ctx->pc = 0x4D9B1Cu;
    // 0x4d9b1c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4d9b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d9b20: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D9B20u;
    {
        const bool branch_taken_0x4d9b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9b20) {
            ctx->pc = 0x4D9B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9B20u;
            // 0x4d9b24: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9B28u;
            goto label_4d9b28;
        }
    }
    ctx->pc = 0x4D9B28u;
label_4d9b28:
    // 0x4d9b28: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4d9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4d9b2c:
    // 0x4d9b2c: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x4d9b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x4d9b30: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x4d9b30u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4d9b34: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D9B34u;
    {
        const bool branch_taken_0x4d9b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9b34) {
            ctx->pc = 0x4D9B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9B34u;
            // 0x4d9b38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9B3Cu;
            goto label_4d9b3c;
        }
    }
    ctx->pc = 0x4D9B3Cu;
label_4d9b3c:
    // 0x4d9b3c: 0x1012  mflo        $v0
    ctx->pc = 0x4d9b3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d9b40: 0x1810  mfhi        $v1
    ctx->pc = 0x4d9b40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4d9b44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d9b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9b48: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4d9b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4d9b4c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4d9b4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4d9b50: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x4d9b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4d9b54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d9b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4d9b58: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4d9b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4d9b5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D9B5Cu;
    {
        const bool branch_taken_0x4d9b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9b5c) {
            ctx->pc = 0x4D9B7Cu;
            goto label_4d9b7c;
        }
    }
    ctx->pc = 0x4D9B64u;
    // 0x4d9b64: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4d9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4d9b68: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x4d9b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d9b6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D9B6Cu;
    {
        const bool branch_taken_0x4d9b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9B6Cu;
        // 0x4d9b70: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9b6c) {
            ctx->pc = 0x4D9B7Cu;
            goto label_4d9b7c;
        }
    }
    ctx->pc = 0x4D9B74u;
    // 0x4d9b74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D9B74u;
    {
        const bool branch_taken_0x4d9b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9b74) {
            ctx->pc = 0x4D9B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9B74u;
            // 0x4d9b78: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9B7Cu;
            goto label_4d9b7c;
        }
    }
    ctx->pc = 0x4D9B7Cu;
label_4d9b7c:
    // 0x4d9b7c: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x4D9B7Cu;
    {
        const bool branch_taken_0x4d9b7c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9B7Cu;
        // 0x4d9b80: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9b7c) {
            ctx->pc = 0x4D9DDCu;
            goto label_4d9ddc;
        }
    }
    ctx->pc = 0x4D9B84u;
    // 0x4d9b84: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x4d9b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9b88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4d9b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4d9b8c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x4D9B8Cu;
    {
        const bool branch_taken_0x4d9b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9B8Cu;
        // 0x4d9b90: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9b8c) {
            ctx->pc = 0x4D9DD8u;
            goto label_4d9dd8;
        }
    }
    ctx->pc = 0x4D9B94u;
label_4d9b94:
    // 0x4d9b94: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x4d9b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4d9b98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D9B98u;
    {
        const bool branch_taken_0x4d9b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9B98u;
        // 0x4d9b9c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9b98) {
            ctx->pc = 0x4D9BB4u;
            goto label_4d9bb4;
        }
    }
    ctx->pc = 0x4D9BA0u;
    // 0x4d9ba0: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x4d9ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x4d9ba4: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x4d9ba4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4d9ba8: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x4d9ba8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x4d9bac: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x4D9BACu;
    {
        const bool branch_taken_0x4d9bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9BACu;
        // 0x4d9bb0: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9bac) {
            ctx->pc = 0x4D9DDCu;
            goto label_4d9ddc;
        }
    }
    ctx->pc = 0x4D9BB4u;
label_4d9bb4:
    // 0x4d9bb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x4d9bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4d9bb8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x4d9bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4d9bbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D9BBCu;
    {
        const bool branch_taken_0x4d9bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9BBCu;
        // 0x4d9bc0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9bbc) {
            ctx->pc = 0x4D9BD8u;
            goto label_4d9bd8;
        }
    }
    ctx->pc = 0x4D9BC4u;
    // 0x4d9bc4: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x4d9bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x4d9bc8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4d9bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d9bcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4D9BCCu;
    {
        const bool branch_taken_0x4d9bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9BCCu;
        // 0x4d9bd0: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9bcc) {
            ctx->pc = 0x4D9BF0u;
            goto label_4d9bf0;
        }
    }
    ctx->pc = 0x4D9BD4u;
    // 0x4d9bd4: 0x0  nop
    ctx->pc = 0x4d9bd4u;
    // NOP
label_4d9bd8:
    // 0x4d9bd8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4d9bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4d9bdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d9bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d9be0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4d9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4d9be4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x4d9be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4d9be8: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x4d9be8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x4d9bec: 0x0  nop
    ctx->pc = 0x4d9becu;
    // NOP
label_4d9bf0:
    // 0x4d9bf0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4d9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4d9bf4: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x4d9bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x4d9bf8: 0x24426320  addiu       $v0, $v0, 0x6320
    ctx->pc = 0x4d9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25376));
    // 0x4d9bfc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x4d9bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4d9c00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d9c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d9c04: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4d9c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d9c08: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4d9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4d9c0c: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x4d9c0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d9c10: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x4D9C10u;
    {
        const bool branch_taken_0x4d9c10 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9C10u;
        // 0x4d9c14: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9c10) {
            ctx->pc = 0x4D9C58u;
            goto label_4d9c58;
        }
    }
    ctx->pc = 0x4D9C18u;
    // 0x4d9c18: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x4d9c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4d9c1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D9C1Cu;
    {
        const bool branch_taken_0x4d9c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9C1Cu;
        // 0x4d9c20: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9c1c) {
            ctx->pc = 0x4D9C30u;
            goto label_4d9c30;
        }
    }
    ctx->pc = 0x4D9C24u;
    // 0x4d9c24: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x4d9c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d9c28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D9C28u;
    {
        const bool branch_taken_0x4d9c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d9c28) {
            ctx->pc = 0x4D9C40u;
            goto label_4d9c40;
        }
    }
    ctx->pc = 0x4D9C30u;
label_4d9c30:
    // 0x4d9c30: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x4d9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x4d9c34: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x4d9c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d9c38: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x4d9c38u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d9c3c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4d9c3cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d9c40:
    // 0x4d9c40: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x4D9C40u;
    {
        const bool branch_taken_0x4d9c40 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9C40u;
        // 0x4d9c44: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9c40) {
            ctx->pc = 0x4D9DDCu;
            goto label_4d9ddc;
        }
    }
    ctx->pc = 0x4D9C48u;
    // 0x4d9c48: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x4d9c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x4d9c4c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x4d9c4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4d9c50: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x4D9C50u;
    {
        const bool branch_taken_0x4d9c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9C50u;
        // 0x4d9c54: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9c50) {
            ctx->pc = 0x4D9DD8u;
            goto label_4d9dd8;
        }
    }
    ctx->pc = 0x4D9C58u;
label_4d9c58:
    // 0x4d9c58: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x4d9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9c5c: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x4d9c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x4d9c60: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x4d9c60u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x4d9c64: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x4d9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x4d9c68: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x4d9c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9c6c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x4d9c6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d9c70: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x4d9c70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4d9c74: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x4d9c74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9c78: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x4d9c78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9c7c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x4d9c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x4d9c80: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x4d9c80u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x4d9c84: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x4d9c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x4d9c88: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x4d9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x4d9c8c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D9C8Cu;
    {
        const bool branch_taken_0x4d9c8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9c8c) {
            ctx->pc = 0x4D9C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9C8Cu;
            // 0x4d9c90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9C94u;
            goto label_4d9c94;
        }
    }
    ctx->pc = 0x4D9C94u;
label_4d9c94:
    // 0x4d9c94: 0x1012  mflo        $v0
    ctx->pc = 0x4d9c94u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d9c98: 0x1810  mfhi        $v1
    ctx->pc = 0x4d9c98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4d9c9c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4d9c9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9ca0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d9ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9ca4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4d9ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4d9ca8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4d9ca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4d9cac: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x4d9cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4d9cb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d9cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4d9cb4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x4d9cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4d9cb8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4D9CB8u;
    {
        const bool branch_taken_0x4d9cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9cb8) {
            ctx->pc = 0x4D9CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9CB8u;
            // 0x4d9cbc: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9CECu;
            goto label_4d9cec;
        }
    }
    ctx->pc = 0x4D9CC0u;
    // 0x4d9cc0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4d9cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4d9cc4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x4d9cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4d9cc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D9CC8u;
    {
        const bool branch_taken_0x4d9cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9CC8u;
        // 0x4d9ccc: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9cc8) {
            ctx->pc = 0x4D9CE8u;
            goto label_4d9ce8;
        }
    }
    ctx->pc = 0x4D9CD0u;
    // 0x4d9cd0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x4d9cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4d9cd4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D9CD4u;
    {
        const bool branch_taken_0x4d9cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9cd4) {
            ctx->pc = 0x4D9CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9CD4u;
            // 0x4d9cd8: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9CECu;
            goto label_4d9cec;
        }
    }
    ctx->pc = 0x4D9CDCu;
    // 0x4d9cdc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4d9cdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x4d9ce0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4d9ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4d9ce4: 0x0  nop
    ctx->pc = 0x4d9ce4u;
    // NOP
label_4d9ce8:
    // 0x4d9ce8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4d9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4d9cec:
    // 0x4d9cec: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4D9CECu;
    {
        const bool branch_taken_0x4d9cec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9cec) {
            ctx->pc = 0x4D9CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D9CECu;
            // 0x4d9cf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D9CF4u;
            goto label_4d9cf4;
        }
    }
    ctx->pc = 0x4D9CF4u;
label_4d9cf4:
    // 0x4d9cf4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x4d9cf4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4d9cf8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x4d9cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4d9cfc: 0x1012  mflo        $v0
    ctx->pc = 0x4d9cfcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d9d00: 0x1810  mfhi        $v1
    ctx->pc = 0x4d9d00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4d9d04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4d9d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9d08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d9d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9d0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4d9d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4d9d10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4d9d10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4d9d14: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x4d9d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4d9d18: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x4d9d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4d9d1c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x4d9d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4d9d20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4D9D20u;
    {
        const bool branch_taken_0x4d9d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9D20u;
        // 0x4d9d24: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9d20) {
            ctx->pc = 0x4D9D50u;
            goto label_4d9d50;
        }
    }
    ctx->pc = 0x4D9D28u;
    // 0x4d9d28: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x4d9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x4d9d2c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x4d9d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4d9d30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D9D30u;
    {
        const bool branch_taken_0x4d9d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9D30u;
        // 0x4d9d34: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9d30) {
            ctx->pc = 0x4D9D4Cu;
            goto label_4d9d4c;
        }
    }
    ctx->pc = 0x4D9D38u;
    // 0x4d9d38: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x4d9d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4d9d3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D9D3Cu;
    {
        const bool branch_taken_0x4d9d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9D3Cu;
        // 0x4d9d40: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9d3c) {
            ctx->pc = 0x4D9D50u;
            goto label_4d9d50;
        }
    }
    ctx->pc = 0x4D9D44u;
    // 0x4d9d44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4d9d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4d9d48: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x4d9d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_4d9d4c:
    // 0x4d9d4c: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x4d9d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_4d9d50:
    // 0x4d9d50: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x4d9d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4d9d54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4d9d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4d9d58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4d9d58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4d9d5c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x4d9d5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9d60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d9d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d9d64: 0x480019  multu       $v0, $t0
    ctx->pc = 0x4d9d64u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4d9d68: 0x3810  mfhi        $a3
    ctx->pc = 0x4d9d68u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x4d9d6c: 0x3012  mflo        $a2
    ctx->pc = 0x4d9d6cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4d9d70: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x4d9d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4d9d74: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D9D74u;
    {
        const bool branch_taken_0x4d9d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9D74u;
        // 0x4d9d78: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9d74) {
            ctx->pc = 0x4D9D90u;
            goto label_4d9d90;
        }
    }
    ctx->pc = 0x4D9D7Cu;
    // 0x4d9d7c: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D9D7Cu;
    {
        const bool branch_taken_0x4d9d7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x4D9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9D7Cu;
        // 0x4d9d80: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9d7c) {
            ctx->pc = 0x4D9DA0u;
            goto label_4d9da0;
        }
    }
    ctx->pc = 0x4D9D84u;
    // 0x4d9d84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D9D84u;
    {
        const bool branch_taken_0x4d9d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d9d84) {
            ctx->pc = 0x4D9DA0u;
            goto label_4d9da0;
        }
    }
    ctx->pc = 0x4D9D8Cu;
    // 0x4d9d8c: 0x0  nop
    ctx->pc = 0x4d9d8cu;
    // NOP
label_4d9d90:
    // 0x4d9d90: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x4d9d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4d9d94: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x4d9d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d9d98: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x4d9d98u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d9d9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4d9d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d9da0:
    // 0x4d9da0: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x4D9DA0u;
    {
        const bool branch_taken_0x4d9da0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9DA0u;
        // 0x4d9da4: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9da0) {
            ctx->pc = 0x4D9DDCu;
            goto label_4d9ddc;
        }
    }
    ctx->pc = 0x4D9DA8u;
    // 0x4d9da8: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x4d9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4d9dac: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x4d9dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d9db0: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x4d9db0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d9db4: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x4d9db4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x4d9db8: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x4d9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9dbc: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x4d9dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x4d9dc0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4d9dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4d9dc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4d9dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4d9dc8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4d9dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4d9dcc: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x4d9dccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4d9dd0: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x4d9dd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x4d9dd4: 0x0  nop
    ctx->pc = 0x4d9dd4u;
    // NOP
label_4d9dd8:
    // 0x4d9dd8: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x4d9dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
label_4d9ddc:
    // 0x4d9ddc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4D9DDCu;
    {
        const bool branch_taken_0x4d9ddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9DDCu;
        // 0x4d9de0: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9ddc) {
            ctx->pc = 0x4D9E38u;
            goto label_4d9e38;
        }
    }
    ctx->pc = 0x4D9DE4u;
    // 0x4d9de4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4d9de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d9de8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4d9de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4d9dec: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x4d9decu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x4d9df0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x4d9df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9df4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4d9df4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4d9df8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d9dfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4d9dfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4d9e00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4d9e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4d9e04: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4d9e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4d9e08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4d9e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4d9e0c: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x4d9e0cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x4d9e10: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x4d9e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x4d9e14: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4d9e14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4d9e18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d9e1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4d9e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4d9e20: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4d9e20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d9e24: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x4d9e24u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x4d9e28: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4d9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d9e2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4d9e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4d9e30: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x4d9e30u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x4d9e34: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x4d9e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_4d9e38:
    // 0x4d9e38: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x4d9e38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9e3c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4d9e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d9e40: 0x3e00008  jr          $ra
    ctx->pc = 0x4D9E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9E40u;
        // 0x4d9e44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D9E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D9E48u;
}
