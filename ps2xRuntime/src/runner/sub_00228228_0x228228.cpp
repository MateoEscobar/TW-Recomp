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

// Function: sub_00228228
// Address: 0x228228 - 0x228258
void sub_00228228_0x228228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228228_0x228228");
#endif

    switch (ctx->pc) {
        case 0x22824cu: goto label_22824c;
        default: break;
    }

    ctx->pc = 0x228228u;

    // 0x228228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22822c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x22822cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x228230: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x228230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x228234: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x228234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x228238: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x228238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x22823c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x22823cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x228240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228244: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228244u;
    SET_GPR_U32(ctx, 31, 0x22824Cu);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228244u, 0x22824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22824Cu;
label_22824c:
    // 0x22824c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22824cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228250: 0x3e00008  jr          $ra
    ctx->pc = 0x228250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228250u;
        // 0x228254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228258u;
}
