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

// Function: sub_0046D0E8
// Address: 0x46d0e8 - 0x46d120
void sub_0046D0E8_0x46d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D0E8_0x46d0e8");
#endif

    switch (ctx->pc) {
        case 0x46d104u: goto label_46d104;
        default: break;
    }

    ctx->pc = 0x46d0e8u;

    // 0x46d0e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x46d0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46d0ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46d0f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x46d0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0f4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x46d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x46d0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46d0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46d0fc: 0xc11fda4  jal         func_47F690
    ctx->pc = 0x46D0FCu;
    SET_GPR_U32(ctx, 31, 0x46D104u);
    ctx->pc = 0x46D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D0FCu;
    // 0x46d100: 0x2444e710  addiu       $a0, $v0, -0x18F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F690u, 0x46D0FCu, 0x46D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D104u;
label_46d104:
    // 0x46d104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46d104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d108: 0x3e00008  jr          $ra
    ctx->pc = 0x46D108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D108u;
        // 0x46d10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D110u;
    // 0x46d110: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x46d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46d114: 0x0  nop
    ctx->pc = 0x46d114u;
    // NOP
    // 0x46d118: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46d118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46d11c: 0x0  nop
    ctx->pc = 0x46d11cu;
    // NOP
    ctx->pc = 0x46d120u;
}
