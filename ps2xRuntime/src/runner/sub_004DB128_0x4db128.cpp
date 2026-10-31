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

// Function: sub_004DB128
// Address: 0x4db128 - 0x4db148
void sub_004DB128_0x4db128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB128_0x4db128");
#endif

    switch (ctx->pc) {
        case 0x4db138u: goto label_4db138;
        default: break;
    }

    ctx->pc = 0x4db128u;

    // 0x4db128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db12c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db130: 0xc0482a6  jal         func_120A98
    ctx->pc = 0x4DB130u;
    SET_GPR_U32(ctx, 31, 0x4DB138u);
    ctx->pc = 0x4DB134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB130u;
    // 0x4db134: 0xe48c004c  swc1        $f12, 0x4C($a0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x4DB130u, 0x4DB138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB138u;
label_4db138:
    // 0x4db138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db13c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB13Cu;
        // 0x4db140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB144u;
    // 0x4db144: 0x0  nop
    ctx->pc = 0x4db144u;
    // NOP
    ctx->pc = 0x4db148u;
}
