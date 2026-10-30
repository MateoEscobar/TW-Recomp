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

// Function: sub_0041D860
// Address: 0x41d860 - 0x41d890
void sub_0041D860_0x41d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D860_0x41d860");
#endif

    switch (ctx->pc) {
        case 0x41d880u: goto label_41d880;
        default: break;
    }

    ctx->pc = 0x41d860u;

    // 0x41d860: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x41d860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d864: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41d864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x41d868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d86c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x41d86cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x41d870: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x41d870u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d878: 0xc1073d6  jal         func_41CF58
    ctx->pc = 0x41D878u;
    SET_GPR_U32(ctx, 31, 0x41D880u);
    ctx->pc = 0x41D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D878u;
    // 0x41d87c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF58u, 0x41D878u, 0x41D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D880u;
label_41d880:
    // 0x41d880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d884: 0x3e00008  jr          $ra
    ctx->pc = 0x41D884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D884u;
        // 0x41d888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D88Cu;
    // 0x41d88c: 0x0  nop
    ctx->pc = 0x41d88cu;
    // NOP
    ctx->pc = 0x41d890u;
}
