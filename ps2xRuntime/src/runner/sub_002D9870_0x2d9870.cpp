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

// Function: sub_002D9870
// Address: 0x2d9870 - 0x2d98b0
void sub_002D9870_0x2d9870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9870_0x2d9870");
#endif

    switch (ctx->pc) {
        case 0x2d98a4u: goto label_2d98a4;
        default: break;
    }

    ctx->pc = 0x2d9870u;

    // 0x2d9870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9874: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d9874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2d9878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d987c: 0x24421120  addiu       $v0, $v0, 0x1120
    ctx->pc = 0x2d987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x2d9880: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2d9880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2d9884: 0x2406025b  addiu       $a2, $zero, 0x25B
    ctx->pc = 0x2d9884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
    // 0x2d9888: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d9888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d988c: 0x24a564c0  addiu       $a1, $a1, 0x64C0
    ctx->pc = 0x2d988cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25792));
    // 0x2d9890: 0xac620208  sw          $v0, 0x208($v1)
    ctx->pc = 0x2d9890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 520), GPR_U32(ctx, 2));
    // 0x2d9894: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d9894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9898: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d9898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d989c: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D989Cu;
    SET_GPR_U32(ctx, 31, 0x2D98A4u);
    ctx->pc = 0x2D98A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D989Cu;
    // 0x2d98a0: 0x248403c8  addiu       $a0, $a0, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D989Cu, 0x2D98A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98A4u;
label_2d98a4:
    // 0x2d98a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d98a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d98a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D98A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D98ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D98A8u;
        // 0x2d98ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D98A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D98B0u;
}
