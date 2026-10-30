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

// Function: sub_00309DF8
// Address: 0x309df8 - 0x309ea0
void sub_00309DF8_0x309df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309DF8_0x309df8");
#endif

    switch (ctx->pc) {
        case 0x309e28u: goto label_309e28;
        case 0x309e30u: goto label_309e30;
        case 0x309e40u: goto label_309e40;
        case 0x309e54u: goto label_309e54;
        case 0x309e64u: goto label_309e64;
        case 0x309e74u: goto label_309e74;
        default: break;
    }

    ctx->pc = 0x309df8u;

    // 0x309df8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x309df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x309dfc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x309dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x309e00: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x309e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x309e04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x309e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x309e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x309e0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x309e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x309e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x309e14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x309e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x309e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309e1c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x309e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x309e20: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x309e20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x309e24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x309e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309e28:
    // 0x309e28: 0xc137826  jal         func_4DE098
    ctx->pc = 0x309E28u;
    SET_GPR_U32(ctx, 31, 0x309E30u);
    ctx->pc = 0x309E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E28u;
    // 0x309e2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x309E28u, 0x309E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E30u;
label_309e30:
    // 0x309e30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x309e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x309e34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x309e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e38: 0xc0e409a  jal         func_390268
    ctx->pc = 0x309E38u;
    SET_GPR_U32(ctx, 31, 0x309E40u);
    ctx->pc = 0x309E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E38u;
    // 0x309e3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x309E38u, 0x309E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E40u;
label_309e40:
    // 0x309e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x309e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e44: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x309E44u;
    {
        const bool branch_taken_0x309e44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E44u;
        // 0x309e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e44) {
            ctx->pc = 0x309E74u;
            goto label_309e74;
        }
    }
    ctx->pc = 0x309E4Cu;
    // 0x309e4c: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x309E4Cu;
    SET_GPR_U32(ctx, 31, 0x309E54u);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x309E4Cu, 0x309E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E54u;
label_309e54:
    // 0x309e54: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x309E54u;
    {
        const bool branch_taken_0x309e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x309E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E54u;
        // 0x309e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e54) {
            ctx->pc = 0x309E74u;
            goto label_309e74;
        }
    }
    ctx->pc = 0x309E5Cu;
    // 0x309e5c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x309E5Cu;
    SET_GPR_U32(ctx, 31, 0x309E64u);
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x309E5Cu, 0x309E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E64u;
label_309e64:
    // 0x309e64: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309E64u;
    {
        const bool branch_taken_0x309e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x309E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E64u;
        // 0x309e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e64) {
            ctx->pc = 0x309E74u;
            goto label_309e74;
        }
    }
    ctx->pc = 0x309E6Cu;
    // 0x309e6c: 0xc0c27a8  jal         func_309EA0
    ctx->pc = 0x309E6Cu;
    SET_GPR_U32(ctx, 31, 0x309E74u);
    ctx->pc = 0x309E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309E6Cu;
    // 0x309e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309EA0u, 0x309E6Cu, 0x309E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E74u;
label_309e74:
    // 0x309e74: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x309e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x309e78: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x309E78u;
    {
        const bool branch_taken_0x309e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E78u;
        // 0x309e7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e78) {
            ctx->pc = 0x309E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309e28;
        }
    }
    ctx->pc = 0x309E80u;
    // 0x309e80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x309e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x309e84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x309e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309e88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x309e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309e8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x309e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309e90: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x309e90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309e98: 0x3e00008  jr          $ra
    ctx->pc = 0x309E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E98u;
        // 0x309e9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309EA0u;
}
