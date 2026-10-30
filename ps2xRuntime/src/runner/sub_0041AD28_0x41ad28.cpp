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

// Function: sub_0041AD28
// Address: 0x41ad28 - 0x41ad60
void sub_0041AD28_0x41ad28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AD28_0x41ad28");
#endif

    switch (ctx->pc) {
        case 0x41ad50u: goto label_41ad50;
        default: break;
    }

    ctx->pc = 0x41ad28u;

    // 0x41ad28: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x41ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x41ad2c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x41ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x41ad30: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x41ad30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x41ad34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41ad34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41ad38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x41ad3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41ad3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ad40: 0x8ce4489c  lw          $a0, 0x489C($a3)
    ctx->pc = 0x41ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ad44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ad48: 0xc106afe  jal         func_41ABF8
    ctx->pc = 0x41AD48u;
    SET_GPR_U32(ctx, 31, 0x41AD50u);
    ctx->pc = 0x41AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AD48u;
    // 0x41ad4c: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ABF8u, 0x41AD48u, 0x41AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AD50u;
label_41ad50:
    // 0x41ad50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ad50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ad54: 0x3e00008  jr          $ra
    ctx->pc = 0x41AD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD54u;
        // 0x41ad58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41AD5Cu;
    // 0x41ad5c: 0x0  nop
    ctx->pc = 0x41ad5cu;
    // NOP
    ctx->pc = 0x41ad60u;
}
