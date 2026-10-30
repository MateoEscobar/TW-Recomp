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

// Function: sub_002D6050
// Address: 0x2d6050 - 0x2d6080
void sub_002D6050_0x2d6050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6050_0x2d6050");
#endif

    switch (ctx->pc) {
        case 0x2d6060u: goto label_2d6060;
        case 0x2d6074u: goto label_2d6074;
        default: break;
    }

    ctx->pc = 0x2d6050u;

    // 0x2d6050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d6054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6058: 0xc0b5820  jal         func_2D6080
    ctx->pc = 0x2D6058u;
    SET_GPR_U32(ctx, 31, 0x2D6060u);
    ctx->pc = 0x2D605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6058u;
    // 0x2d605c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6080u, 0x2D6058u, 0x2D6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6060u;
label_2d6060:
    // 0x2d6060: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d6060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2d6064: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d6064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2d6068: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2d6068u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2d606c: 0xc107420  jal         func_41D080
    ctx->pc = 0x2D606Cu;
    SET_GPR_U32(ctx, 31, 0x2D6074u);
    ctx->pc = 0x2D6070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D606Cu;
    // 0x2d6070: 0x8c65bd30  lw          $a1, -0x42D0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D080u, 0x2D606Cu, 0x2D6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6074u;
label_2d6074:
    // 0x2d6074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6078: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6078u;
        // 0x2d607c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6080u;
}
