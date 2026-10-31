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

// Function: sub_0030BB28
// Address: 0x30bb28 - 0x30bbb8
void sub_0030BB28_0x30bb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BB28_0x30bb28");
#endif

    switch (ctx->pc) {
        case 0x30bb48u: goto label_30bb48;
        case 0x30bb50u: goto label_30bb50;
        case 0x30bb58u: goto label_30bb58;
        case 0x30bb80u: goto label_30bb80;
        default: break;
    }

    ctx->pc = 0x30bb28u;

    // 0x30bb28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30bb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30bb2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30bb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30bb30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30bb34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30bb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30bb3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30bb40: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30bb40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30bb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30bb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30bb48:
    // 0x30bb48: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30BB48u;
    SET_GPR_U32(ctx, 31, 0x30BB50u);
    ctx->pc = 0x30BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB48u;
    // 0x30bb4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30BB48u, 0x30BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB50u;
label_30bb50:
    // 0x30bb50: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30BB50u;
    SET_GPR_U32(ctx, 31, 0x30BB58u);
    ctx->pc = 0x30BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB50u;
    // 0x30bb54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30BB50u, 0x30BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB58u;
label_30bb58:
    // 0x30bb58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30bb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb5c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x30BB5Cu;
    {
        const bool branch_taken_0x30bb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB5Cu;
        // 0x30bb60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb5c) {
            ctx->pc = 0x30BB90u;
            goto label_30bb90;
        }
    }
    ctx->pc = 0x30BB64u;
    // 0x30bb64: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x30bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x30bb68: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x30bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x30bb6c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x30bb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30bb70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BB70u;
    {
        const bool branch_taken_0x30bb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bb70) {
            ctx->pc = 0x30BB90u;
            goto label_30bb90;
        }
    }
    ctx->pc = 0x30BB78u;
    // 0x30bb78: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x30BB78u;
    SET_GPR_U32(ctx, 31, 0x30BB80u);
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x30BB78u, 0x30BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB80u;
label_30bb80:
    // 0x30bb80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BB80u;
    {
        const bool branch_taken_0x30bb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB80u;
        // 0x30bb84: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb80) {
            ctx->pc = 0x30BB94u;
            goto label_30bb94;
        }
    }
    ctx->pc = 0x30BB88u;
    // 0x30bb88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30BB88u;
    {
        const bool branch_taken_0x30bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB88u;
        // 0x30bb8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb88) {
            ctx->pc = 0x30BBA0u;
            goto label_30bba0;
        }
    }
    ctx->pc = 0x30BB90u;
label_30bb90:
    // 0x30bb90: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30bb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30bb94:
    // 0x30bb94: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x30BB94u;
    {
        const bool branch_taken_0x30bb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB94u;
        // 0x30bb98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb94) {
            ctx->pc = 0x30BB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30bb48;
        }
    }
    ctx->pc = 0x30BB9Cu;
    // 0x30bb9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30bb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bba0:
    // 0x30bba0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30bba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30bba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bbac: 0x3e00008  jr          $ra
    ctx->pc = 0x30BBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBACu;
        // 0x30bbb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BBB4u;
    // 0x30bbb4: 0x0  nop
    ctx->pc = 0x30bbb4u;
    // NOP
    ctx->pc = 0x30bbb8u;
}
