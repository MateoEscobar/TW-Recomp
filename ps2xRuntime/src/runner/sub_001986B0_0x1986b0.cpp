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

// Function: sub_001986B0
// Address: 0x1986b0 - 0x1986e8
void sub_001986B0_0x1986b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001986B0_0x1986b0");
#endif

    switch (ctx->pc) {
        case 0x1986d0u: goto label_1986d0;
        default: break;
    }

    ctx->pc = 0x1986b0u;

    // 0x1986b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1986b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1986b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1986b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1986b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1986b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1986bc: 0x24428f78  addiu       $v0, $v0, -0x7088
    ctx->pc = 0x1986bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938488));
    // 0x1986c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1986c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1986c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1986c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986c8: 0xc0661ce  jal         func_198738
    ctx->pc = 0x1986C8u;
    SET_GPR_U32(ctx, 31, 0x1986D0u);
    ctx->pc = 0x1986CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1986C8u;
    // 0x1986cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198738u, 0x1986C8u, 0x1986D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986D0u;
label_1986d0:
    // 0x1986d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1986d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1986d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1986d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1986d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1986dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1986DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1986E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986DCu;
        // 0x1986e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1986DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1986E4u;
    // 0x1986e4: 0x0  nop
    ctx->pc = 0x1986e4u;
    // NOP
    ctx->pc = 0x1986e8u;
}
