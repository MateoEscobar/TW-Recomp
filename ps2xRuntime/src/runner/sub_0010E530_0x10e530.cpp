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

// Function: sub_0010E530
// Address: 0x10e530 - 0x10e558
void sub_0010E530_0x10e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E530_0x10e530");
#endif

    switch (ctx->pc) {
        case 0x10e540u: goto label_10e540;
        default: break;
    }

    ctx->pc = 0x10e530u;

    // 0x10e530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e538: 0xc04391a  jal         func_10E468
    ctx->pc = 0x10E538u;
    SET_GPR_U32(ctx, 31, 0x10E540u);
    ctx->pc = 0x10E468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E468u, 0x10E538u, 0x10E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E540u;
label_10e540:
    // 0x10e540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10e548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e54c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x10e54cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x10e550: 0x3e00008  jr          $ra
    ctx->pc = 0x10E550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E550u;
        // 0x10e554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E558u;
}
