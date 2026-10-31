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

// Function: sub_00475690
// Address: 0x475690 - 0x4756c0
void sub_00475690_0x475690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475690_0x475690");
#endif

    switch (ctx->pc) {
        case 0x4756acu: goto label_4756ac;
        case 0x4756b4u: goto label_4756b4;
        default: break;
    }

    ctx->pc = 0x475690u;

    // 0x475690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x475690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x475694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x475694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x475698: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x475698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x47569c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47569Cu;
    {
        const bool branch_taken_0x47569c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4756A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47569Cu;
        // 0x4756a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47569c) {
            ctx->pc = 0x4756B8u;
            goto label_4756b8;
        }
    }
    ctx->pc = 0x4756A4u;
    // 0x4756a4: 0xc123142  jal         func_48C508
    ctx->pc = 0x4756A4u;
    SET_GPR_U32(ctx, 31, 0x4756ACu);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x4756A4u, 0x4756ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4756ACu;
label_4756ac:
    // 0x4756ac: 0xc123142  jal         func_48C508
    ctx->pc = 0x4756ACu;
    SET_GPR_U32(ctx, 31, 0x4756B4u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x4756ACu, 0x4756B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4756B4u;
label_4756b4:
    // 0x4756b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4756b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4756b8:
    // 0x4756b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4756B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4756BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4756B8u;
        // 0x4756bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4756B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4756C0u;
}
