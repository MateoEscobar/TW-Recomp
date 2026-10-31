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

// Function: sub_002DE608
// Address: 0x2de608 - 0x2de650
void sub_002DE608_0x2de608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE608_0x2de608");
#endif

    switch (ctx->pc) {
        case 0x2de620u: goto label_2de620;
        case 0x2de630u: goto label_2de630;
        case 0x2de63cu: goto label_2de63c;
        default: break;
    }

    ctx->pc = 0x2de608u;

    // 0x2de608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de60c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2de60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2de610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de618: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DE618u;
    SET_GPR_U32(ctx, 31, 0x2DE620u);
    ctx->pc = 0x2DE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE618u;
    // 0x2de61c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DE618u, 0x2DE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE620u;
label_2de620:
    // 0x2de620: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2de620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2de624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de628: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2DE628u;
    SET_GPR_U32(ctx, 31, 0x2DE630u);
    ctx->pc = 0x2DE62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE628u;
    // 0x2de62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2DE628u, 0x2DE630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE630u;
label_2de630:
    // 0x2de630: 0x82050026  lb          $a1, 0x26($s0)
    ctx->pc = 0x2de630u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x2de634: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2DE634u;
    SET_GPR_U32(ctx, 31, 0x2DE63Cu);
    ctx->pc = 0x2DE638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE634u;
    // 0x2de638: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2DE634u, 0x2DE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE63Cu;
label_2de63c:
    // 0x2de63c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2de63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de644: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE644u;
        // 0x2de648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE64Cu;
    // 0x2de64c: 0x0  nop
    ctx->pc = 0x2de64cu;
    // NOP
    ctx->pc = 0x2de650u;
}
