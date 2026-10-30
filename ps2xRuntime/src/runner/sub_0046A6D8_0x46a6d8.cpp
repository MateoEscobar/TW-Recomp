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

// Function: sub_0046A6D8
// Address: 0x46a6d8 - 0x46a720
void sub_0046A6D8_0x46a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A6D8_0x46a6d8");
#endif

    switch (ctx->pc) {
        case 0x46a6f4u: goto label_46a6f4;
        default: break;
    }

    ctx->pc = 0x46a6d8u;

    // 0x46a6d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46a6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46a6dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x46a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x46a6e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46a6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46a6e4: 0x24a5a8d0  addiu       $a1, $a1, -0x5730
    ctx->pc = 0x46a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944976));
    // 0x46a6e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x46a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x46a6ec: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x46A6ECu;
    SET_GPR_U32(ctx, 31, 0x46A6F4u);
    ctx->pc = 0x46A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A6ECu;
    // 0x46a6f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x46A6ECu, 0x46A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A6F4u;
label_46a6f4:
    // 0x46a6f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x46a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46a6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x46A6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A6FCu;
        // 0x46a700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A704u;
    // 0x46a704: 0x0  nop
    ctx->pc = 0x46a704u;
    // NOP
    // 0x46a708: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46a70c: 0x0  nop
    ctx->pc = 0x46a70cu;
    // NOP
    // 0x46a710: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46a714: 0x0  nop
    ctx->pc = 0x46a714u;
    // NOP
    // 0x46a718: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a71c: 0x0  nop
    ctx->pc = 0x46a71cu;
    // NOP
    ctx->pc = 0x46a720u;
}
