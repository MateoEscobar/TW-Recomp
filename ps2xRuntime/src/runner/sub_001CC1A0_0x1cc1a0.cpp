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

// Function: sub_001CC1A0
// Address: 0x1cc1a0 - 0x1cc210
void sub_001CC1A0_0x1cc1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC1A0_0x1cc1a0");
#endif

    switch (ctx->pc) {
        case 0x1cc1b4u: goto label_1cc1b4;
        default: break;
    }

    ctx->pc = 0x1cc1a0u;

    // 0x1cc1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc1a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cc1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cc1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc1ac: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1CC1ACu;
    SET_GPR_U32(ctx, 31, 0x1CC1B4u);
    ctx->pc = 0x1CC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC1ACu;
    // 0x1cc1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1CC1ACu, 0x1CC1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC1B4u;
label_1cc1b4:
    // 0x1cc1b4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cc1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cc1b8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1cc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1cc1bc: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1cc1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
    // 0x1cc1c0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1cc1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1cc1c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cc1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cc1c8: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
    // 0x1cc1cc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1cc1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1cc1d0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cc1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cc1d4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1cc1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1cc1d8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1cc1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1cc1dc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1cc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1cc1e0: 0x2463aca0  addiu       $v1, $v1, -0x5360
    ctx->pc = 0x1cc1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945952));
    // 0x1cc1e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cc1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1cc1e8: 0x24a5acc8  addiu       $a1, $a1, -0x5338
    ctx->pc = 0x1cc1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945992));
    // 0x1cc1ec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cc1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1cc1f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cc1f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1f4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1cc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1cc1f8: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x1cc1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x1cc1fc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1cc1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1cc200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cc200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc208: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC208u;
        // 0x1cc20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC210u;
}
