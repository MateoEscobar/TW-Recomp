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

// Function: sub_0016B8D0
// Address: 0x16b8d0 - 0x16b980
void sub_0016B8D0_0x16b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B8D0_0x16b8d0");
#endif

    switch (ctx->pc) {
        case 0x16b8f8u: goto label_16b8f8;
        case 0x16b908u: goto label_16b908;
        case 0x16b918u: goto label_16b918;
        case 0x16b920u: goto label_16b920;
        case 0x16b928u: goto label_16b928;
        case 0x16b93cu: goto label_16b93c;
        case 0x16b954u: goto label_16b954;
        default: break;
    }

    ctx->pc = 0x16b8d0u;

    // 0x16b8d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x16b8d4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16b8d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b8d8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x16b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x16b8dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16b8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16b8e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16b8e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b8e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16b8ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b8f0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16B8F0u;
    SET_GPR_U32(ctx, 31, 0x16B8F8u);
    ctx->pc = 0x16B8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8F0u;
    // 0x16b8f4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16B8F0u, 0x16B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8F8u;
label_16b8f8:
    // 0x16b8f8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16B8F8u;
    {
        const bool branch_taken_0x16b8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8F8u;
        // 0x16b8fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8f8) {
            ctx->pc = 0x16B964u;
            goto label_16b964;
        }
    }
    ctx->pc = 0x16B900u;
    // 0x16b900: 0xc087502  jal         func_21D408
    ctx->pc = 0x16B900u;
    SET_GPR_U32(ctx, 31, 0x16B908u);
    ctx->pc = 0x16B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B900u;
    // 0x16b904: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16B900u, 0x16B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B908u;
label_16b908:
    // 0x16b908: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x16b908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b90c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x16b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16b910: 0x24720048  addiu       $s2, $v1, 0x48
    ctx->pc = 0x16b910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x16b914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b918:
    // 0x16b918: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16B918u;
    SET_GPR_U32(ctx, 31, 0x16B920u);
    ctx->pc = 0x16B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B918u;
    // 0x16b91c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16B918u, 0x16B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B920u;
label_16b920:
    // 0x16b920: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16B920u;
    SET_GPR_U32(ctx, 31, 0x16B928u);
    ctx->pc = 0x16B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B920u;
    // 0x16b924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16B920u, 0x16B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B928u;
label_16b928:
    // 0x16b928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b92c: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x16B92Cu;
    {
        const bool branch_taken_0x16b92c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b92c) {
            ctx->pc = 0x16B930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B92Cu;
            // 0x16b930: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B958u;
            goto label_16b958;
        }
    }
    ctx->pc = 0x16B934u;
    // 0x16b934: 0xc08a200  jal         func_228800
    ctx->pc = 0x16B934u;
    SET_GPR_U32(ctx, 31, 0x16B93Cu);
    ctx->pc = 0x16B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B934u;
    // 0x16b938: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x16B934u, 0x16B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B93Cu;
label_16b93c:
    // 0x16b93c: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x16b93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x16b940: 0x54730005  bnel        $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B940u;
    {
        const bool branch_taken_0x16b940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x16b940) {
            ctx->pc = 0x16B944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B940u;
            // 0x16b944: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B958u;
            goto label_16b958;
        }
    }
    ctx->pc = 0x16B948u;
    // 0x16b948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b94c: 0xc0871f2  jal         func_21C7C8
    ctx->pc = 0x16B94Cu;
    SET_GPR_U32(ctx, 31, 0x16B954u);
    ctx->pc = 0x16B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B94Cu;
    // 0x16b950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x16B94Cu, 0x16B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B954u;
label_16b954:
    // 0x16b954: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16b954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16b958:
    // 0x16b958: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x16b958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16b95c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16B95Cu;
    {
        const bool branch_taken_0x16b95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B95Cu;
        // 0x16b960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b95c) {
            ctx->pc = 0x16B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b918;
        }
    }
    ctx->pc = 0x16B964u;
label_16b964:
    // 0x16b964: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16b964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b968: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16b968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b96c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b970: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16b970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b978: 0x3e00008  jr          $ra
    ctx->pc = 0x16B978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B978u;
        // 0x16b97c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B980u;
}
