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

// Function: sub_0030DC28
// Address: 0x30dc28 - 0x30dcb8
void sub_0030DC28_0x30dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DC28_0x30dc28");
#endif

    switch (ctx->pc) {
        case 0x30dc50u: goto label_30dc50;
        case 0x30dc58u: goto label_30dc58;
        case 0x30dc60u: goto label_30dc60;
        case 0x30dc80u: goto label_30dc80;
        default: break;
    }

    ctx->pc = 0x30dc28u;

    // 0x30dc28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30dc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30dc2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30dc30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30dc34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30dc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30dc3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30dc40: 0x241200b2  addiu       $s2, $zero, 0xB2
    ctx->pc = 0x30dc40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x30dc44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30dc48: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30dc48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30dc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30dc50:
    // 0x30dc50: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30DC50u;
    SET_GPR_U32(ctx, 31, 0x30DC58u);
    ctx->pc = 0x30DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DC50u;
    // 0x30dc54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30DC50u, 0x30DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DC58u;
label_30dc58:
    // 0x30dc58: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30DC58u;
    SET_GPR_U32(ctx, 31, 0x30DC60u);
    ctx->pc = 0x30DC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DC58u;
    // 0x30dc5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30DC58u, 0x30DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DC60u;
label_30dc60:
    // 0x30dc60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30dc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc64: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x30DC64u;
    {
        const bool branch_taken_0x30dc64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC64u;
        // 0x30dc68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc64) {
            ctx->pc = 0x30DC90u;
            goto label_30dc90;
        }
    }
    ctx->pc = 0x30DC6Cu;
    // 0x30dc6c: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x30dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30dc70: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DC70u;
    {
        const bool branch_taken_0x30dc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x30dc70) {
            ctx->pc = 0x30DC90u;
            goto label_30dc90;
        }
    }
    ctx->pc = 0x30DC78u;
    // 0x30dc78: 0xc089f98  jal         func_227E60
    ctx->pc = 0x30DC78u;
    SET_GPR_U32(ctx, 31, 0x30DC80u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x30DC78u, 0x30DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DC80u;
label_30dc80:
    // 0x30dc80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30DC80u;
    {
        const bool branch_taken_0x30dc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC80u;
        // 0x30dc84: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc80) {
            ctx->pc = 0x30DC94u;
            goto label_30dc94;
        }
    }
    ctx->pc = 0x30DC88u;
    // 0x30dc88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30DC88u;
    {
        const bool branch_taken_0x30dc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC88u;
        // 0x30dc8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc88) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DC90u;
label_30dc90:
    // 0x30dc90: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30dc90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30dc94:
    // 0x30dc94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30DC94u;
    {
        const bool branch_taken_0x30dc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC94u;
        // 0x30dc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc94) {
            ctx->pc = 0x30DC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dc50;
        }
    }
    ctx->pc = 0x30DC9Cu;
    // 0x30dc9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30dc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30dca0:
    // 0x30dca0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30dca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30dca4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30dca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dca8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30dca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dcac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30dcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x30DCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCB0u;
        // 0x30dcb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DCB8u;
}
