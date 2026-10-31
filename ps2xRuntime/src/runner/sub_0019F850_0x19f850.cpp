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

// Function: sub_0019F850
// Address: 0x19f850 - 0x19f8b8
void sub_0019F850_0x19f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F850_0x19f850");
#endif

    switch (ctx->pc) {
        case 0x19f89cu: goto label_19f89c;
        case 0x19f8a4u: goto label_19f8a4;
        default: break;
    }

    ctx->pc = 0x19f850u;

    // 0x19f850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f854: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x19f854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x19f858: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f860: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x19f860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x19f864: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x19f864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x19f868: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x19f868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f86c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19f870: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F870u;
    {
        const bool branch_taken_0x19f870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F870u;
        // 0x19f874: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f870) {
            ctx->pc = 0x19F888u;
            goto label_19f888;
        }
    }
    ctx->pc = 0x19F878u;
    // 0x19f878: 0x8e030468  lw          $v1, 0x468($s0)
    ctx->pc = 0x19f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x19f87c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f880: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F880u;
    {
        const bool branch_taken_0x19f880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f880) {
            ctx->pc = 0x19F884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F880u;
            // 0x19f884: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F8A8u;
            goto label_19f8a8;
        }
    }
    ctx->pc = 0x19F888u;
label_19f888:
    // 0x19f888: 0x8e02045c  lw          $v0, 0x45C($s0)
    ctx->pc = 0x19f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1116)));
    // 0x19f88c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F88Cu;
    {
        const bool branch_taken_0x19f88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f88c) {
            ctx->pc = 0x19F89Cu;
            goto label_19f89c;
        }
    }
    ctx->pc = 0x19F894u;
    // 0x19f894: 0xc068998  jal         func_1A2660
    ctx->pc = 0x19F894u;
    SET_GPR_U32(ctx, 31, 0x19F89Cu);
    ctx->pc = 0x19F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F894u;
    // 0x19f898: 0x26040480  addiu       $a0, $s0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x19F894u, 0x19F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F89Cu;
label_19f89c:
    // 0x19f89c: 0xc079dd4  jal         func_1E7750
    ctx->pc = 0x19F89Cu;
    SET_GPR_U32(ctx, 31, 0x19F8A4u);
    ctx->pc = 0x19F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F89Cu;
    // 0x19f8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7750u, 0x19F89Cu, 0x19F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8A4u;
label_19f8a4:
    // 0x19f8a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19f8a8:
    // 0x19f8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19F8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8ACu;
        // 0x19f8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F8B4u;
    // 0x19f8b4: 0x0  nop
    ctx->pc = 0x19f8b4u;
    // NOP
    ctx->pc = 0x19f8b8u;
}
