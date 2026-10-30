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

// Function: sub_001B48D0
// Address: 0x1b48d0 - 0x1b4908
void sub_001B48D0_0x1b48d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B48D0_0x1b48d0");
#endif

    switch (ctx->pc) {
        case 0x1b48e8u: goto label_1b48e8;
        case 0x1b48fcu: goto label_1b48fc;
        default: break;
    }

    ctx->pc = 0x1b48d0u;

    // 0x1b48d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b48d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b48d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b48d8: 0x8c44cce4  lw          $a0, -0x331C($v0)
    ctx->pc = 0x1b48d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CCE4u));
    // 0x1b48dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b48dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b48e0: 0xc05fb1e  jal         func_17EC78
    ctx->pc = 0x1B48E0u;
    SET_GPR_U32(ctx, 31, 0x1B48E8u);
    ctx->pc = 0x17EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC78u, 0x1B48E0u, 0x1B48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B48E8u;
label_1b48e8:
    // 0x1b48e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b48e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b48ec: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1b48ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1b48f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b48f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b48f4: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x1B48F4u;
    SET_GPR_U32(ctx, 31, 0x1B48FCu);
    ctx->pc = 0x1B48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B48F4u;
    // 0x1b48f8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1B48F4u, 0x1B48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B48FCu;
label_1b48fc:
    // 0x1b48fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b48fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4900: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4900u;
        // 0x1b4904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4908u;
}
