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

// Function: sub_0015E0F8
// Address: 0x15e0f8 - 0x15e130
void sub_0015E0F8_0x15e0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E0F8_0x15e0f8");
#endif

    switch (ctx->pc) {
        case 0x15e110u: goto label_15e110;
        case 0x15e120u: goto label_15e120;
        default: break;
    }

    ctx->pc = 0x15e0f8u;

    // 0x15e0f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15e0fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15e0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e100: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x15e104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e108: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15E108u;
    SET_GPR_U32(ctx, 31, 0x15E110u);
    ctx->pc = 0x15E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E108u;
    // 0x15e10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15E108u, 0x15E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E110u;
label_15e110:
    // 0x15e110: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15e114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e118: 0xc0517d8  jal         func_145F60
    ctx->pc = 0x15E118u;
    SET_GPR_U32(ctx, 31, 0x15E120u);
    ctx->pc = 0x15E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E118u;
    // 0x15e11c: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15E118u, 0x15E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E120u;
label_15e120:
    // 0x15e120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e124: 0x3e00008  jr          $ra
    ctx->pc = 0x15E124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E124u;
        // 0x15e128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E12Cu;
    // 0x15e12c: 0x0  nop
    ctx->pc = 0x15e12cu;
    // NOP
    ctx->pc = 0x15e130u;
}
