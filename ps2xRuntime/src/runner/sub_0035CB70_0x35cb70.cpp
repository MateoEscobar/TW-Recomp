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

// Function: sub_0035CB70
// Address: 0x35cb70 - 0x35cba8
void sub_0035CB70_0x35cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CB70_0x35cb70");
#endif

    switch (ctx->pc) {
        case 0x35cb84u: goto label_35cb84;
        case 0x35cb8cu: goto label_35cb8c;
        case 0x35cb94u: goto label_35cb94;
        default: break;
    }

    ctx->pc = 0x35cb70u;

    // 0x35cb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35cb74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cb78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35cb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35cb7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CB7Cu;
    SET_GPR_U32(ctx, 31, 0x35CB84u);
    ctx->pc = 0x35CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CB7Cu;
    // 0x35cb80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CB7Cu, 0x35CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB84u;
label_35cb84:
    // 0x35cb84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CB84u;
    SET_GPR_U32(ctx, 31, 0x35CB8Cu);
    ctx->pc = 0x35CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CB84u;
    // 0x35cb88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CB84u, 0x35CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB8Cu;
label_35cb8c:
    // 0x35cb8c: 0xc08d32c  jal         func_234CB0
    ctx->pc = 0x35CB8Cu;
    SET_GPR_U32(ctx, 31, 0x35CB94u);
    ctx->pc = 0x35CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CB8Cu;
    // 0x35cb90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234CB0u, 0x35CB8Cu, 0x35CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB94u;
label_35cb94:
    // 0x35cb94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35cb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cb98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35cb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x35CB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB9Cu;
        // 0x35cba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CBA4u;
    // 0x35cba4: 0x0  nop
    ctx->pc = 0x35cba4u;
    // NOP
    ctx->pc = 0x35cba8u;
}
