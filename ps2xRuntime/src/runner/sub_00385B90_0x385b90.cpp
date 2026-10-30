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

// Function: sub_00385B90
// Address: 0x385b90 - 0x385bb8
void sub_00385B90_0x385b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385B90_0x385b90");
#endif

    switch (ctx->pc) {
        case 0x385ba4u: goto label_385ba4;
        default: break;
    }

    ctx->pc = 0x385b90u;

    // 0x385b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x385b94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x385b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x385b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x385b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x385b9c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x385B9Cu;
    SET_GPR_U32(ctx, 31, 0x385BA4u);
    ctx->pc = 0x385BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B9Cu;
    // 0x385ba0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x385B9Cu, 0x385BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385BA4u;
label_385ba4:
    // 0x385ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385ba8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x385ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x385bac: 0x3e00008  jr          $ra
    ctx->pc = 0x385BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BACu;
        // 0x385bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385BB4u;
    // 0x385bb4: 0x0  nop
    ctx->pc = 0x385bb4u;
    // NOP
    ctx->pc = 0x385bb8u;
}
