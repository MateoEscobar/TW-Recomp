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

// Function: sub_0021D0E0
// Address: 0x21d0e0 - 0x21d118
void sub_0021D0E0_0x21d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D0E0_0x21d0e0");
#endif

    switch (ctx->pc) {
        case 0x21d104u: goto label_21d104;
        default: break;
    }

    ctx->pc = 0x21d0e0u;

    // 0x21d0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d0e4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x21d0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d0ec: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21d0f0: 0x84840092  lh          $a0, 0x92($a0)
    ctx->pc = 0x21d0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x21d0f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x21d0f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d0fc: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x21D0FCu;
    SET_GPR_U32(ctx, 31, 0x21D104u);
    ctx->pc = 0x21D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0FCu;
    // 0x21d100: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x21D0FCu, 0x21D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D104u;
label_21d104:
    // 0x21d104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d108: 0x3e00008  jr          $ra
    ctx->pc = 0x21D108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D108u;
        // 0x21d10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D110u;
    // 0x21d110: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x21d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21d114: 0x0  nop
    ctx->pc = 0x21d114u;
    // NOP
    ctx->pc = 0x21d118u;
}
