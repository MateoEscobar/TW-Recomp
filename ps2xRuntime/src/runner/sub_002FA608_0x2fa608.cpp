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

// Function: sub_002FA608
// Address: 0x2fa608 - 0x2fa650
void sub_002FA608_0x2fa608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA608_0x2fa608");
#endif

    switch (ctx->pc) {
        case 0x2fa628u: goto label_2fa628;
        case 0x2fa63cu: goto label_2fa63c;
        default: break;
    }

    ctx->pc = 0x2fa608u;

    // 0x2fa608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa60c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa614: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fa614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa618: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2fa618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2fa61c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2fa61cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa620: 0xc089998  jal         func_226660
    ctx->pc = 0x2FA620u;
    SET_GPR_U32(ctx, 31, 0x2FA628u);
    ctx->pc = 0x2FA624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA620u;
    // 0x2fa624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FA620u, 0x2FA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA628u;
label_2fa628:
    // 0x2fa628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa62c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA62Cu;
    {
        const bool branch_taken_0x2fa62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa62c) {
            ctx->pc = 0x2FA630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA62Cu;
            // 0x2fa630: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA640u;
            goto label_2fa640;
        }
    }
    ctx->pc = 0x2FA634u;
    // 0x2fa634: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x2FA634u;
    SET_GPR_U32(ctx, 31, 0x2FA63Cu);
    ctx->pc = 0x2FA638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA634u;
    // 0x2fa638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x2FA634u, 0x2FA63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA63Cu;
label_2fa63c:
    // 0x2fa63c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fa640:
    // 0x2fa640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa648: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA648u;
        // 0x2fa64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA650u;
}
