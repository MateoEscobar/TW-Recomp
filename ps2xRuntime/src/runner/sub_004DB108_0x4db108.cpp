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

// Function: sub_004DB108
// Address: 0x4db108 - 0x4db128
void sub_004DB108_0x4db108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB108_0x4db108");
#endif

    switch (ctx->pc) {
        case 0x4db118u: goto label_4db118;
        default: break;
    }

    ctx->pc = 0x4db108u;

    // 0x4db108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db110: 0xc0482a6  jal         func_120A98
    ctx->pc = 0x4DB110u;
    SET_GPR_U32(ctx, 31, 0x4DB118u);
    ctx->pc = 0x4DB114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB110u;
    // 0x4db114: 0xe48c0044  swc1        $f12, 0x44($a0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x4DB110u, 0x4DB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB118u;
label_4db118:
    // 0x4db118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db11c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB11Cu;
        // 0x4db120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB124u;
    // 0x4db124: 0x0  nop
    ctx->pc = 0x4db124u;
    // NOP
    ctx->pc = 0x4db128u;
}
