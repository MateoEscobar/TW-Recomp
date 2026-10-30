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

// Function: sub_00228028
// Address: 0x228028 - 0x228050
void sub_00228028_0x228028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228028_0x228028");
#endif

    switch (ctx->pc) {
        case 0x228040u: goto label_228040;
        default: break;
    }

    ctx->pc = 0x228028u;

    // 0x228028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22802c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22802cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x228030: 0x52ef8  dsll        $a1, $a1, 27
    ctx->pc = 0x228030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
    // 0x228034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228038: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228038u;
    SET_GPR_U32(ctx, 31, 0x228040u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228038u, 0x228040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228040u;
label_228040:
    // 0x228040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228044: 0x3e00008  jr          $ra
    ctx->pc = 0x228044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228044u;
        // 0x228048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22804Cu;
    // 0x22804c: 0x0  nop
    ctx->pc = 0x22804cu;
    // NOP
    ctx->pc = 0x228050u;
}
