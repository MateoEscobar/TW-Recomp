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

// Function: sub_00386488
// Address: 0x386488 - 0x3864b0
void sub_00386488_0x386488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386488_0x386488");
#endif

    switch (ctx->pc) {
        case 0x3864a4u: goto label_3864a4;
        default: break;
    }

    ctx->pc = 0x386488u;

    // 0x386488: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x386488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38648c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38648cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x386490: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x386490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386494: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x386494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x386498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38649c: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x38649Cu;
    SET_GPR_U32(ctx, 31, 0x3864A4u);
    ctx->pc = 0x3864A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38649Cu;
    // 0x3864a0: 0x2444b880  addiu       $a0, $v0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x38649Cu, 0x3864A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3864A4u;
label_3864a4:
    // 0x3864a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3864a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3864a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3864A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3864ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864A8u;
        // 0x3864ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3864A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3864B0u;
}
