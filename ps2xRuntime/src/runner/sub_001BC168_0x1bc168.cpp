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

// Function: sub_001BC168
// Address: 0x1bc168 - 0x1bc208
void sub_001BC168_0x1bc168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC168_0x1bc168");
#endif

    switch (ctx->pc) {
        case 0x1bc17cu: goto label_1bc17c;
        case 0x1bc1dcu: goto label_1bc1dc;
        case 0x1bc1e4u: goto label_1bc1e4;
        case 0x1bc1ecu: goto label_1bc1ec;
        case 0x1bc1f4u: goto label_1bc1f4;
        default: break;
    }

    ctx->pc = 0x1bc168u;

    // 0x1bc168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc16c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bc16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bc170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc174: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1BC174u;
    SET_GPR_U32(ctx, 31, 0x1BC17Cu);
    ctx->pc = 0x1BC178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC174u;
    // 0x1bc178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1BC174u, 0x1BC17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC17Cu;
label_1bc17c:
    // 0x1bc17c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1bc17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1bc180: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1bc180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1bc184: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1bc184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
    // 0x1bc188: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1bc188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1bc18c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bc18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bc190: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1bc190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1bc194: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1bc194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
    // 0x1bc198: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1bc198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1bc19c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1bc19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1bc1a0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1bc1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1bc1a4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1bc1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1bc1a8: 0x2463a3e0  addiu       $v1, $v1, -0x5C20
    ctx->pc = 0x1bc1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943712));
    // 0x1bc1ac: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1bc1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1bc1b0: 0x24a5a408  addiu       $a1, $a1, -0x5BF8
    ctx->pc = 0x1bc1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943752));
    // 0x1bc1b4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1bc1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1bc1b8: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1bc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1bc1bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1bc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1bc1c0: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x1bc1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x1bc1c4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1bc1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1bc1c8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1bc1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1bc1cc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bc1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1bc1d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bc1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bc1d4: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1BC1D4u;
    SET_GPR_U32(ctx, 31, 0x1BC1DCu);
    ctx->pc = 0x1BC1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC1D4u;
    // 0x1bc1d8: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1BC1D4u, 0x1BC1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1DCu;
label_1bc1dc:
    // 0x1bc1dc: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1BC1DCu;
    SET_GPR_U32(ctx, 31, 0x1BC1E4u);
    ctx->pc = 0x1BC1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC1DCu;
    // 0x1bc1e0: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1BC1DCu, 0x1BC1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1E4u;
label_1bc1e4:
    // 0x1bc1e4: 0xc073a9c  jal         func_1CEA70
    ctx->pc = 0x1BC1E4u;
    SET_GPR_U32(ctx, 31, 0x1BC1ECu);
    ctx->pc = 0x1BC1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC1E4u;
    // 0x1bc1e8: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1BC1E4u, 0x1BC1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1ECu;
label_1bc1ec:
    // 0x1bc1ec: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1BC1ECu;
    SET_GPR_U32(ctx, 31, 0x1BC1F4u);
    ctx->pc = 0x1BC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC1ECu;
    // 0x1bc1f0: 0x26040590  addiu       $a0, $s0, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1BC1ECu, 0x1BC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1F4u;
label_1bc1f4:
    // 0x1bc1f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bc1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc1fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bc1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc200: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC200u;
        // 0x1bc204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC208u;
}
