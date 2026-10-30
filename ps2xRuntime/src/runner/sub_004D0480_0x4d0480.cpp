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

// Function: sub_004D0480
// Address: 0x4d0480 - 0x4d04b8
void sub_004D0480_0x4d0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0480_0x4d0480");
#endif

    switch (ctx->pc) {
        case 0x4d04acu: goto label_4d04ac;
        default: break;
    }

    ctx->pc = 0x4d0480u;

    // 0x4d0480: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x4d0480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4d0484: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d0484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d0488: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4d0488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d048c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d0490: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x4d0490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4d0494: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x4d0494u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4d0498: 0x8c860080  lw          $a2, 0x80($a0)
    ctx->pc = 0x4d0498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x4d049c: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x4d049cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x4d04a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4d04a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d04a4: 0xc1361ee  jal         func_4D87B8
    ctx->pc = 0x4D04A4u;
    SET_GPR_U32(ctx, 31, 0x4D04ACu);
    ctx->pc = 0x4D04A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D04A4u;
    // 0x4d04a8: 0x2484008c  addiu       $a0, $a0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D87B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D87B8u, 0x4D04A4u, 0x4D04ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D04ACu;
label_4d04ac:
    // 0x4d04ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d04acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d04b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D04B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D04B0u;
        // 0x4d04b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D04B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D04B8u;
}
