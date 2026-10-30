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

// Function: sub_0041D830
// Address: 0x41d830 - 0x41d860
void sub_0041D830_0x41d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D830_0x41d830");
#endif

    switch (ctx->pc) {
        case 0x41d850u: goto label_41d850;
        default: break;
    }

    ctx->pc = 0x41d830u;

    // 0x41d830: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41d830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d834: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41d834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x41d838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d83c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x41d83cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x41d840: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x41d840u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d848: 0xc1073d0  jal         func_41CF40
    ctx->pc = 0x41D848u;
    SET_GPR_U32(ctx, 31, 0x41D850u);
    ctx->pc = 0x41D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D848u;
    // 0x41d84c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF40u, 0x41D848u, 0x41D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D850u;
label_41d850:
    // 0x41d850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d854: 0x3e00008  jr          $ra
    ctx->pc = 0x41D854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D854u;
        // 0x41d858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D85Cu;
    // 0x41d85c: 0x0  nop
    ctx->pc = 0x41d85cu;
    // NOP
    ctx->pc = 0x41d860u;
}
