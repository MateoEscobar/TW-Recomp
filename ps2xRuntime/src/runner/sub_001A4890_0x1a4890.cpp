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

// Function: sub_001A4890
// Address: 0x1a4890 - 0x1a48d8
void sub_001A4890_0x1a4890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4890_0x1a4890");
#endif

    switch (ctx->pc) {
        case 0x1a48a4u: goto label_1a48a4;
        case 0x1a48b8u: goto label_1a48b8;
        default: break;
    }

    ctx->pc = 0x1a4890u;

    // 0x1a4890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4894: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a4894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a4898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a489c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1A489Cu;
    SET_GPR_U32(ctx, 31, 0x1A48A4u);
    ctx->pc = 0x1A48A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A489Cu;
    // 0x1a48a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1A489Cu, 0x1A48A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48A4u;
label_1a48a4:
    // 0x1a48a4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1a48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1a48a8: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x1a48a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1a48ac: 0x24639730  addiu       $v1, $v1, -0x68D0
    ctx->pc = 0x1a48acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940464));
    // 0x1a48b0: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1A48B0u;
    SET_GPR_U32(ctx, 31, 0x1A48B8u);
    ctx->pc = 0x1A48B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48B0u;
    // 0x1a48b4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1A48B0u, 0x1A48B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48B8u;
label_1a48b8:
    // 0x1a48b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a48b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48bc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1a48bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1a48c0: 0xae000350  sw          $zero, 0x350($s0)
    ctx->pc = 0x1a48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
    // 0x1a48c4: 0xae000354  sw          $zero, 0x354($s0)
    ctx->pc = 0x1a48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 0));
    // 0x1a48c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a48c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a48cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a48ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a48d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A48D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48D0u;
        // 0x1a48d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A48D8u;
}
