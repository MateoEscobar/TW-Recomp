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

// Function: sub_0035BE50
// Address: 0x35be50 - 0x35beb0
void sub_0035BE50_0x35be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BE50_0x35be50");
#endif

    switch (ctx->pc) {
        case 0x35be70u: goto label_35be70;
        case 0x35be78u: goto label_35be78;
        case 0x35be8cu: goto label_35be8c;
        case 0x35be98u: goto label_35be98;
        default: break;
    }

    ctx->pc = 0x35be50u;

    // 0x35be50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35be54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35be54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35be58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35be5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35be5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35be60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35be64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35be64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35be68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BE68u;
    SET_GPR_U32(ctx, 31, 0x35BE70u);
    ctx->pc = 0x35BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE68u;
    // 0x35be6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BE68u, 0x35BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE70u;
label_35be70:
    // 0x35be70: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BE70u;
    SET_GPR_U32(ctx, 31, 0x35BE78u);
    ctx->pc = 0x35BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE70u;
    // 0x35be74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BE70u, 0x35BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE78u;
label_35be78:
    // 0x35be78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35be78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35be7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35be80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35be84: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35BE84u;
    SET_GPR_U32(ctx, 31, 0x35BE8Cu);
    ctx->pc = 0x35BE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE84u;
    // 0x35be88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35BE84u, 0x35BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE8Cu;
label_35be8c:
    // 0x35be8c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35be8cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35be90: 0xc08dcfe  jal         func_2373F8
    ctx->pc = 0x35BE90u;
    SET_GPR_U32(ctx, 31, 0x35BE98u);
    ctx->pc = 0x35BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BE90u;
    // 0x35be94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2373F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2373F8u, 0x35BE90u, 0x35BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE98u;
label_35be98:
    // 0x35be98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35be98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35be9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35be9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35bea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bea8: 0x3e00008  jr          $ra
    ctx->pc = 0x35BEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BEA8u;
        // 0x35beac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BEB0u;
}
