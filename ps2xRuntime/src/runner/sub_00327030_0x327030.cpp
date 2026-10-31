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

// Function: sub_00327030
// Address: 0x327030 - 0x327058
void sub_00327030_0x327030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327030_0x327030");
#endif

    switch (ctx->pc) {
        case 0x32704cu: goto label_32704c;
        default: break;
    }

    ctx->pc = 0x327030u;

    // 0x327030: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x327030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x327034: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x327034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x327038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32703c: 0x46380b  movn        $a3, $v0, $a2
    ctx->pc = 0x32703cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x327040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327044: 0xc0c9bc6  jal         func_326F18
    ctx->pc = 0x327044u;
    SET_GPR_U32(ctx, 31, 0x32704Cu);
    ctx->pc = 0x327048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327044u;
    // 0x327048: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326F18u, 0x327044u, 0x32704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32704Cu;
label_32704c:
    // 0x32704c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32704cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327050: 0x3e00008  jr          $ra
    ctx->pc = 0x327050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327050u;
        // 0x327054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327058u;
}
