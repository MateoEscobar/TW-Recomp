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

// Function: sub_00423988
// Address: 0x423988 - 0x4239b0
void sub_00423988_0x423988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423988_0x423988");
#endif

    switch (ctx->pc) {
        case 0x4239a4u: goto label_4239a4;
        default: break;
    }

    ctx->pc = 0x423988u;

    // 0x423988: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x423988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42398c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42398cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x423990: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x423990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x423994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423998: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x423998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x42399c: 0xc109224  jal         func_424890
    ctx->pc = 0x42399Cu;
    SET_GPR_U32(ctx, 31, 0x4239A4u);
    ctx->pc = 0x4239A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42399Cu;
    // 0x4239a0: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424890u, 0x42399Cu, 0x4239A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4239A4u;
label_4239a4:
    // 0x4239a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4239a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4239a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4239A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4239ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4239A8u;
        // 0x4239ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4239A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4239B0u;
}
