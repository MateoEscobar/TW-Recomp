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

// Function: sub_00294A40
// Address: 0x294a40 - 0x294ad8
void sub_00294A40_0x294a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A40_0x294a40");
#endif

    switch (ctx->pc) {
        case 0x294a60u: goto label_294a60;
        case 0x294a68u: goto label_294a68;
        case 0x294aa0u: goto label_294aa0;
        case 0x294ac4u: goto label_294ac4;
        default: break;
    }

    ctx->pc = 0x294a40u;

    // 0x294a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294a44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x294a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x294a48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x294a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x294a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294a54: 0x260501b0  addiu       $a1, $s0, 0x1B0
    ctx->pc = 0x294a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x294a58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x294a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294a5c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x294a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_294a60:
    // 0x294a60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x294a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294a64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x294a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_294a68:
    // 0x294a68: 0x0  nop
    ctx->pc = 0x294a68u;
    // NOP
    // 0x294a6c: 0x0  nop
    ctx->pc = 0x294a6cu;
    // NOP
    // 0x294a70: 0x0  nop
    ctx->pc = 0x294a70u;
    // NOP
    // 0x294a74: 0x0  nop
    ctx->pc = 0x294a74u;
    // NOP
    // 0x294a78: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294A78u;
    {
        const bool branch_taken_0x294a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x294A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A78u;
        // 0x294a7c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a78) {
            ctx->pc = 0x294A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294a68;
        }
    }
    ctx->pc = 0x294A80u;
    // 0x294a80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x294a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a84: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x294A84u;
    {
        const bool branch_taken_0x294a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x294A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A84u;
        // 0x294a88: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a84) {
            ctx->pc = 0x294A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294a60;
        }
    }
    ctx->pc = 0x294A8Cu;
    // 0x294a8c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x294a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x294a90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x294a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a94: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x294a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294a98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x294a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x294a9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x294a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_294aa0:
    // 0x294aa0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x294aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x294aa4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x294aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x294aa8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x294aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x294aac: 0x0  nop
    ctx->pc = 0x294aacu;
    // NOP
    // 0x294ab0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294AB0u;
    {
        const bool branch_taken_0x294ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x294AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AB0u;
        // 0x294ab4: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ab0) {
            ctx->pc = 0x294AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294aa0;
        }
    }
    ctx->pc = 0x294AB8u;
    // 0x294ab8: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x294ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x294abc: 0xc0a52d8  jal         func_294B60
    ctx->pc = 0x294ABCu;
    SET_GPR_U32(ctx, 31, 0x294AC4u);
    ctx->pc = 0x294AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294ABCu;
    // 0x294ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B60u, 0x294ABCu, 0x294AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294AC4u;
label_294ac4:
    // 0x294ac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x294ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294acc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x294accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x294AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AD0u;
        // 0x294ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294AD8u;
}
