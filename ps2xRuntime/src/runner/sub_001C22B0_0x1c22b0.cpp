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

// Function: sub_001C22B0
// Address: 0x1c22b0 - 0x1c22e8
void sub_001C22B0_0x1c22b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C22B0_0x1c22b0");
#endif

    ctx->pc = 0x1c22b0u;

    // 0x1c22b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c22b4: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1c22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1c22b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c22bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c22bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c22c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C22C0u;
    {
        const bool branch_taken_0x1c22c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c22c0) {
            ctx->pc = 0x1C22DCu;
            goto label_1c22dc;
        }
    }
    ctx->pc = 0x1C22C8u;
    // 0x1c22c8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1c22c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1c22cc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c22ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c22d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c22d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c22d4: 0x0  nop
    ctx->pc = 0x1c22d4u;
    // NOP
    // 0x1c22d8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1c22d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1c22dc:
    // 0x1c22dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22DCu;
        // 0x1c22e0: 0xe48c0040  swc1        $f12, 0x40($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C22E4u;
    // 0x1c22e4: 0x0  nop
    ctx->pc = 0x1c22e4u;
    // NOP
    ctx->pc = 0x1c22e8u;
}
