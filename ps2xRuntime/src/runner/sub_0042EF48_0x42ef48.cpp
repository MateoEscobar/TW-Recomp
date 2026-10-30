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

// Function: sub_0042EF48
// Address: 0x42ef48 - 0x42ef78
void sub_0042EF48_0x42ef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EF48_0x42ef48");
#endif

    switch (ctx->pc) {
        case 0x42ef6cu: goto label_42ef6c;
        default: break;
    }

    ctx->pc = 0x42ef48u;

    // 0x42ef48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42ef48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42ef4c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x42ef50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42ef50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42ef54: 0x2442c2f8  addiu       $v0, $v0, -0x3D08
    ctx->pc = 0x42ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951672));
    // 0x42ef58: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x42ef58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x42ef5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x42EF5Cu;
    {
        const bool branch_taken_0x42ef5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EF5Cu;
        // 0x42ef60: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ef5c) {
            ctx->pc = 0x42EF6Cu;
            goto label_42ef6c;
        }
    }
    ctx->pc = 0x42EF64u;
    // 0x42ef64: 0xc10b208  jal         func_42C820
    ctx->pc = 0x42EF64u;
    SET_GPR_U32(ctx, 31, 0x42EF6Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x42EF64u, 0x42EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42EF6Cu;
label_42ef6c:
    // 0x42ef6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42ef6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ef70: 0x3e00008  jr          $ra
    ctx->pc = 0x42EF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EF70u;
        // 0x42ef74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42EF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42EF78u;
}
