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

// Function: sub_0049FB20
// Address: 0x49fb20 - 0x49fb88
void sub_0049FB20_0x49fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FB20_0x49fb20");
#endif

    ctx->pc = 0x49fb20u;

    // 0x49fb20: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49fb24: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x49fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x49fb28: 0x2463f730  addiu       $v1, $v1, -0x8D0
    ctx->pc = 0x49fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965040));
    // 0x49fb2c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49fb2cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F730u));
    // 0x49fb30: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x49fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x49fb34: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x49fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x49fb38: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x49fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x49fb3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49fb3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fb40: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x49fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x49fb44: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x49fb44u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x49fb48: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x49fb48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x49fb4c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x49fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x49fb50: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x49fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x49fb54: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49fb58: 0x2463f720  addiu       $v1, $v1, -0x8E0
    ctx->pc = 0x49fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965024));
    // 0x49fb5c: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x49fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x49fb60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49fb60u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F720u));
    // 0x49fb64: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x49fb64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x49fb68: 0xaf85898c  sw          $a1, -0x7674($gp)
    ctx->pc = 0x49fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    // 0x49fb6c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49fb70: 0x2463f7b0  addiu       $v1, $v1, -0x850
    ctx->pc = 0x49fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965168));
    // 0x49fb74: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x49fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x49fb78: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49fb78u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7B0u));
    // 0x49fb7c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x49fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x49fb80: 0x3e00008  jr          $ra
    ctx->pc = 0x49FB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FB80u;
        // 0x49fb84: 0xaf85898c  sw          $a1, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FB88u;
}
