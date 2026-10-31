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

// Function: sub_00169FE0
// Address: 0x169fe0 - 0x16a000
void sub_00169FE0_0x169fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169FE0_0x169fe0");
#endif

    switch (ctx->pc) {
        case 0x169ff0u: goto label_169ff0;
        default: break;
    }

    ctx->pc = 0x169fe0u;

    // 0x169fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169fe8: 0xc092414  jal         func_249050
    ctx->pc = 0x169FE8u;
    SET_GPR_U32(ctx, 31, 0x169FF0u);
    ctx->pc = 0x169FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FE8u;
    // 0x169fec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x169FE8u, 0x169FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FF0u;
label_169ff0:
    // 0x169ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x169FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FF4u;
        // 0x169ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169FFCu;
    // 0x169ffc: 0x0  nop
    ctx->pc = 0x169ffcu;
    // NOP
    ctx->pc = 0x16a000u;
}
