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

// Function: sub_0035BC98
// Address: 0x35bc98 - 0x35bcd0
void sub_0035BC98_0x35bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BC98_0x35bc98");
#endif

    switch (ctx->pc) {
        case 0x35bcacu: goto label_35bcac;
        case 0x35bcb4u: goto label_35bcb4;
        case 0x35bcbcu: goto label_35bcbc;
        default: break;
    }

    ctx->pc = 0x35bc98u;

    // 0x35bc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35bc9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35bc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bca4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BCA4u;
    SET_GPR_U32(ctx, 31, 0x35BCACu);
    ctx->pc = 0x35BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BCA4u;
    // 0x35bca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BCA4u, 0x35BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BCACu;
label_35bcac:
    // 0x35bcac: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BCACu;
    SET_GPR_U32(ctx, 31, 0x35BCB4u);
    ctx->pc = 0x35BCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BCACu;
    // 0x35bcb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BCACu, 0x35BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BCB4u;
label_35bcb4:
    // 0x35bcb4: 0xc08ddfe  jal         func_2377F8
    ctx->pc = 0x35BCB4u;
    SET_GPR_U32(ctx, 31, 0x35BCBCu);
    ctx->pc = 0x35BCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BCB4u;
    // 0x35bcb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2377F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2377F8u, 0x35BCB4u, 0x35BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BCBCu;
label_35bcbc:
    // 0x35bcbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bcc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bcc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x35BCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCC4u;
        // 0x35bcc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BCCCu;
    // 0x35bccc: 0x0  nop
    ctx->pc = 0x35bcccu;
    // NOP
    ctx->pc = 0x35bcd0u;
}
