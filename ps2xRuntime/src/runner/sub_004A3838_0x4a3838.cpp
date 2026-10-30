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

// Function: sub_004A3838
// Address: 0x4a3838 - 0x4a3b48
void sub_004A3838_0x4a3838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3838_0x4a3838");
#endif

    switch (ctx->pc) {
        case 0x4a3868u: goto label_4a3868;
        case 0x4a38b4u: goto label_4a38b4;
        case 0x4a3988u: goto label_4a3988;
        case 0x4a3ab0u: goto label_4a3ab0;
        default: break;
    }

    ctx->pc = 0x4a3838u;

    // 0x4a3838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a3838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a383c: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x4a383cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4a3840: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a3840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a3844: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a3844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4a3848: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a3848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a384c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4a3850: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x4a3850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x4a3854: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a3854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4a3858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a385c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x4a385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x4a3860: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A3860u;
    {
        const bool branch_taken_0x4a3860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3860) {
            ctx->pc = 0x4A3864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3860u;
            // 0x4a3864: 0x92420021  lbu         $v0, 0x21($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3870u;
            goto label_4a3870;
        }
    }
    ctx->pc = 0x4A3868u;
label_4a3868:
    // 0x4a3868: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x4A3868u;
    {
        const bool branch_taken_0x4a3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3868u;
        // 0x4a386c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3868) {
            ctx->pc = 0x4A3B28u;
            goto label_4a3b28;
        }
    }
    ctx->pc = 0x4A3870u;
label_4a3870:
    // 0x4a3870: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x4a3870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x4a3874: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x4A3874u;
    {
        const bool branch_taken_0x4a3874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3874u;
        // 0x4a3878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3874) {
            ctx->pc = 0x4A3B28u;
            goto label_4a3b28;
        }
    }
    ctx->pc = 0x4A387Cu;
    // 0x4a387c: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x4a387cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x4a3880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a3880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a3884: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A3884u;
    {
        const bool branch_taken_0x4a3884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3884u;
        // 0x4a3888: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3884) {
            ctx->pc = 0x4A3868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3868;
        }
    }
    ctx->pc = 0x4A388Cu;
    // 0x4a388c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x4a388cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x4a3890: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x4a3890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4a3894: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a3894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a3898: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x4a3898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a389c: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4a389cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4a38a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a38a4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4a38a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4a38a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4a38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x4a38ac: 0xc1235fa  jal         func_48D7E8
    ctx->pc = 0x4A38ACu;
    SET_GPR_U32(ctx, 31, 0x4A38B4u);
    ctx->pc = 0x4A38B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A38ACu;
    // 0x4a38b0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D7E8u, 0x4A38ACu, 0x4A38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A38B4u;
label_4a38b4:
    // 0x4a38b4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x4a38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x4a38b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a38bc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x4a38bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x4a38c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4a38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a38c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a38c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a38c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a38c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4a38cc: 0x319ba  dsrl        $v1, $v1, 6
    ctx->pc = 0x4a38ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 6);
    // 0x4a38d0: 0x8f868990  lw          $a2, -0x7670($gp)
    ctx->pc = 0x4a38d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
    // 0x4a38d4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a38d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a38d8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a38d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a38dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a38dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a38e0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a38e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a38e4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a38e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a38e8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a38e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a38ec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a38ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a38f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a38f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a38f4: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x4a38f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a38f8: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x4a38f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a38fc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x4a38fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x4a3900: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x4a3900u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x4a3904: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3904u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a3908: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a3908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a390c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a390cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a3910: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a3910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3914: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3914u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a3918: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a3918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a391c: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x4a391cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4a3920: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x4a3920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a3924: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a3924u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3928: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3928u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a392c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a3930: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a3930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a3934: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a3934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3938: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3938u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a393c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a393cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a3940: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a3940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a3944: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a3944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3948: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3948u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a394c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a394cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a3950: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a3950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a3954: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a3954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3958: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3958u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a395c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a395cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a3960: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x4a3960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a3964: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3964u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a3968: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a3968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a396c: 0x24e7ffb0  addiu       $a3, $a3, -0x50
    ctx->pc = 0x4a396cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967216));
    // 0x4a3970: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x4a3970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x4a3974: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A3974u;
    {
        const bool branch_taken_0x4a3974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3974u;
        // 0x4a3978: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3974) {
            ctx->pc = 0x4A39D8u;
            goto label_4a39d8;
        }
    }
    ctx->pc = 0x4A397Cu;
    // 0x4a397c: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x4A397Cu;
    {
        const bool branch_taken_0x4a397c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A397Cu;
        // 0x4a3980: 0x3c130053  lui         $s3, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a397c) {
            ctx->pc = 0x4A39F8u;
            goto label_4a39f8;
        }
    }
    ctx->pc = 0x4A3984u;
    // 0x4a3984: 0x0  nop
    ctx->pc = 0x4a3984u;
    // NOP
label_4a3988:
    // 0x4a3988: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a3988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a398c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a398cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a3990: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x4a3990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3994: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a3994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a3998: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x4a3998u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a399c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a399cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a39a0: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x4a39a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a39a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4a39a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4a39a8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a39a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a39ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a39acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a39b0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x4a39b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x4a39b4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a39b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a39b8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x4a39b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x4a39bc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a39bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a39c0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x4a39c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x4a39c4: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x4a39c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
    // 0x4a39c8: 0x14e0ffef  bnez        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4A39C8u;
    {
        const bool branch_taken_0x4a39c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A39C8u;
        // 0x4a39cc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a39c8) {
            ctx->pc = 0x4A3988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3988;
        }
    }
    ctx->pc = 0x4A39D0u;
    // 0x4a39d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A39D0u;
    {
        const bool branch_taken_0x4a39d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a39d0) {
            ctx->pc = 0x4A39F8u;
            goto label_4a39f8;
        }
    }
    ctx->pc = 0x4A39D8u;
label_4a39d8:
    // 0x4a39d8: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x4a39d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a39dc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x4a39dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a39e0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a39e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a39e4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a39e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a39e8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x4a39e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x4a39ec: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4a39ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
    // 0x4a39f0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a39f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a39f4: 0x0  nop
    ctx->pc = 0x4a39f4u;
    // NOP
label_4a39f8:
    // 0x4a39f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4a39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4a39fc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a39fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a3a00: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x4a3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x4a3a04: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x4a3a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x4a3a08: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a3a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4a3a0c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x4a3a0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x4a3a10: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3a10u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a3a14: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a3a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a3a18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4a3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4a3a1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a3a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a3a20: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x4a3a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x4a3a24: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4a3a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3a28: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x4a3a28u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x4a3a2c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a3a30: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a3a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a3a34: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x4a3a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x4a3a38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a3a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3a3c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4a3a3cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4a3a40: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a3a40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a3a44: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a3a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a3a48: 0xaf868990  sw          $a2, -0x7670($gp)
    ctx->pc = 0x4a3a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 6));
    // 0x4a3a4c: 0x2663f940  addiu       $v1, $s3, -0x6C0
    ctx->pc = 0x4a3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
    // 0x4a3a50: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x4a3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x4a3a54: 0x14520034  bne         $v0, $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x4A3A54u;
    {
        const bool branch_taken_0x4a3a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4A3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3A54u;
        // 0x4a3a58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a54) {
            ctx->pc = 0x4A3B28u;
            goto label_4a3b28;
        }
    }
    ctx->pc = 0x4A3A5Cu;
    // 0x4a3a5c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x4a3a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4a3a60: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x4a3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x4a3a64: 0x800013  mtlo        $a0
    ctx->pc = 0x4a3a64u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x4a3a68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A3A68u;
    {
        const bool branch_taken_0x4a3a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3A68u;
        // 0x4a3a6c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a68) {
            ctx->pc = 0x4A3A90u;
            goto label_4a3a90;
        }
    }
    ctx->pc = 0x4A3A70u;
    // 0x4a3a70: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x4a3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4a3a74: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4a3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a3a78: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x4a3a78u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3a7c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A3A7Cu;
    {
        const bool branch_taken_0x4a3a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3A7Cu;
        // 0x4a3a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a7c) {
            ctx->pc = 0x4A3AA4u;
            goto label_4a3aa4;
        }
    }
    ctx->pc = 0x4A3A84u;
    // 0x4a3a84: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x4A3A84u;
    {
        const bool branch_taken_0x4a3a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3A84u;
        // 0x4a3a88: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a84) {
            ctx->pc = 0x4A3B2Cu;
            goto label_4a3b2c;
        }
    }
    ctx->pc = 0x4A3A8Cu;
    // 0x4a3a8c: 0x0  nop
    ctx->pc = 0x4a3a8cu;
    // NOP
label_4a3a90:
    // 0x4a3a90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4a3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x4a3a94: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4a3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a3a98: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x4a3a98u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3a9c: 0x14820022  bne         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4A3A9Cu;
    {
        const bool branch_taken_0x4a3a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3A9Cu;
        // 0x4a3aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a9c) {
            ctx->pc = 0x4A3B28u;
            goto label_4a3b28;
        }
    }
    ctx->pc = 0x4A3AA4u;
label_4a3aa4:
    // 0x4a3aa4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4a3aa8: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x4A3AA8u;
    SET_GPR_U32(ctx, 31, 0x4A3AB0u);
    ctx->pc = 0x4A3AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3AA8u;
    // 0x4a3aac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4A3AA8u, 0x4A3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3AB0u;
label_4a3ab0:
    // 0x4a3ab0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x4a3ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x4a3ab4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4a3ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4a3ab8: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x4a3ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x4a3abc: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x4a3abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3ac0: 0x71063389  pcpyld      $a2, $t0, $a2
    ctx->pc = 0x4a3ac0u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x4a3ac4: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x4a3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4a3ac8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x4a3ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x4a3acc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4a3accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a3ad0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a3ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a3ad4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x4a3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4a3ad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a3ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3adc: 0x70823389  pcpyld      $a2, $a0, $v0
    ctx->pc = 0x4a3adcu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x4a3ae0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x4a3ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x4a3ae4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4a3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a3ae8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4a3aec: 0x9e260008  lwu         $a2, 0x8($s1)
    ctx->pc = 0x4a3aecu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a3af0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x4a3af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a3af4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x4a3af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a3af8: 0x9e22000c  lwu         $v0, 0xC($s1)
    ctx->pc = 0x4a3af8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a3afc: 0x2664f940  addiu       $a0, $s3, -0x6C0
    ctx->pc = 0x4a3afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
    // 0x4a3b00: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x4a3b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4a3b04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a3b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a3b08: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4a3b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4a3b0c: 0xe5400b  movn        $t0, $a3, $a1
    ctx->pc = 0x4a3b0cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
    // 0x4a3b10: 0x71063389  pcpyld      $a2, $t0, $a2
    ctx->pc = 0x4a3b10u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x4a3b14: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x4a3b14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x4a3b18: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4a3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4a3b1c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a3b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a3b24: 0x0  nop
    ctx->pc = 0x4a3b24u;
    // NOP
label_4a3b28:
    // 0x4a3b28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a3b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a3b2c:
    // 0x4a3b2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a3b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a3b30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a3b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a3b34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a3b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a3b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a3b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A3B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3B3Cu;
        // 0x4a3b40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A3B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A3B44u;
    // 0x4a3b44: 0x0  nop
    ctx->pc = 0x4a3b44u;
    // NOP
    ctx->pc = 0x4a3b48u;
}
