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

// Function: sub_002221B0
// Address: 0x2221b0 - 0x2221e0
void sub_002221B0_0x2221b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002221B0_0x2221b0");
#endif

    switch (ctx->pc) {
        case 0x2221d4u: goto label_2221d4;
        default: break;
    }

    ctx->pc = 0x2221b0u;

    // 0x2221b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2221b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2221b4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2221b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2221b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2221b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2221bc: 0x84a20092  lh          $v0, 0x92($a1)
    ctx->pc = 0x2221bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x2221c0: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2221c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2221c4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2221c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2221c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2221c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2221cc: 0xc088878  jal         func_2221E0
    ctx->pc = 0x2221CCu;
    SET_GPR_U32(ctx, 31, 0x2221D4u);
    ctx->pc = 0x2221D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221CCu;
    // 0x2221d0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2221CCu, 0x2221D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2221D4u;
label_2221d4:
    // 0x2221d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2221d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2221d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2221D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2221DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221D8u;
        // 0x2221dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2221D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2221E0u;
}
