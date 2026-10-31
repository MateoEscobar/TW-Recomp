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

// Function: sub_00468A60
// Address: 0x468a60 - 0x468ac8
void sub_00468A60_0x468a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468A60_0x468a60");
#endif

    switch (ctx->pc) {
        case 0x468a88u: goto label_468a88;
        case 0x468aa0u: goto label_468aa0;
        default: break;
    }

    ctx->pc = 0x468a60u;

    // 0x468a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x468a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x468a64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x468a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x468a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x468a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x468a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x468a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x468a74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x468a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468a78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x468a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x468a7c: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x468a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x468a80: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x468A80u;
    SET_GPR_U32(ctx, 31, 0x468A88u);
    ctx->pc = 0x468A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468A80u;
    // 0x468a84: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x468A80u, 0x468A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468A88u;
label_468a88:
    // 0x468a88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x468A88u;
    {
        const bool branch_taken_0x468a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x468A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468A88u;
        // 0x468a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468a88) {
            ctx->pc = 0x468AACu;
            goto label_468aac;
        }
    }
    ctx->pc = 0x468A90u;
    // 0x468a90: 0x8e25007c  lw          $a1, 0x7C($s1)
    ctx->pc = 0x468a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x468a94: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x468a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x468a98: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x468A98u;
    SET_GPR_U32(ctx, 31, 0x468AA0u);
    ctx->pc = 0x468A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468A98u;
    // 0x468a9c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x468A98u, 0x468AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468AA0u;
label_468aa0:
    // 0x468aa0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x468aa0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x468aa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x468AA4u;
    {
        const bool branch_taken_0x468aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468AA4u;
        // 0x468aa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468aa4) {
            ctx->pc = 0x468AB0u;
            goto label_468ab0;
        }
    }
    ctx->pc = 0x468AACu;
label_468aac:
    // 0x468aac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x468aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468ab0:
    // 0x468ab0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x468ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x468ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468abc: 0x3e00008  jr          $ra
    ctx->pc = 0x468ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x468AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468ABCu;
        // 0x468ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468AC4u;
    // 0x468ac4: 0x0  nop
    ctx->pc = 0x468ac4u;
    // NOP
    ctx->pc = 0x468ac8u;
}
