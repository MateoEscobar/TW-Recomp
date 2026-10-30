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

// Function: sub_001BC2C0
// Address: 0x1bc2c0 - 0x1bc2f0
void sub_001BC2C0_0x1bc2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC2C0_0x1bc2c0");
#endif

    switch (ctx->pc) {
        case 0x1bc2dcu: goto label_1bc2dc;
        default: break;
    }

    ctx->pc = 0x1bc2c0u;

    // 0x1bc2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc2c4: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x1bc2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x1bc2c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc2cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bc2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bc2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc2d4: 0xc05e602  jal         func_179808
    ctx->pc = 0x1BC2D4u;
    SET_GPR_U32(ctx, 31, 0x1BC2DCu);
    ctx->pc = 0x1BC2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC2D4u;
    // 0x1bc2d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1BC2D4u, 0x1BC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2DCu;
label_1bc2dc:
    // 0x1bc2dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bc2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc2e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bc2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2E8u;
        // 0x1bc2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC2F0u;
}
