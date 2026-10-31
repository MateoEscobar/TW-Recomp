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

// Function: sub_00235438
// Address: 0x235438 - 0x235478
void sub_00235438_0x235438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235438_0x235438");
#endif

    switch (ctx->pc) {
        case 0x23544cu: goto label_23544c;
        case 0x235454u: goto label_235454;
        case 0x235464u: goto label_235464;
        default: break;
    }

    ctx->pc = 0x235438u;

    // 0x235438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23543c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23543cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235444: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235444u;
    SET_GPR_U32(ctx, 31, 0x23544Cu);
    ctx->pc = 0x235448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235444u;
    // 0x235448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235444u, 0x23544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23544Cu;
label_23544c:
    // 0x23544c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23544Cu;
    SET_GPR_U32(ctx, 31, 0x235454u);
    ctx->pc = 0x235450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23544Cu;
    // 0x235450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23544Cu, 0x235454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235454u;
label_235454:
    // 0x235454: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x235454u;
    {
        const bool branch_taken_0x235454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235454) {
            ctx->pc = 0x235458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235454u;
            // 0x235458: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23546Cu;
            goto label_23546c;
        }
    }
    ctx->pc = 0x23545Cu;
    // 0x23545c: 0xc087502  jal         func_21D408
    ctx->pc = 0x23545Cu;
    SET_GPR_U32(ctx, 31, 0x235464u);
    ctx->pc = 0x235460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23545Cu;
    // 0x235460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23545Cu, 0x235464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235464u;
label_235464:
    // 0x235464: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x235464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x235468: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x235468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_23546c:
    // 0x23546c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23546cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235470: 0x3e00008  jr          $ra
    ctx->pc = 0x235470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235470u;
        // 0x235474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235478u;
}
