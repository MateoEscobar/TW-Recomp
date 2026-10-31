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

// Function: sub_001D3558
// Address: 0x1d3558 - 0x1d35a0
void sub_001D3558_0x1d3558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3558_0x1d3558");
#endif

    switch (ctx->pc) {
        case 0x1d3584u: goto label_1d3584;
        default: break;
    }

    ctx->pc = 0x1d3558u;

    // 0x1d3558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d355c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3568: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d3568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d356c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D356Cu;
    {
        const bool branch_taken_0x1d356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D356Cu;
        // 0x1d3570: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d356c) {
            ctx->pc = 0x1D358Cu;
            goto label_1d358c;
        }
    }
    ctx->pc = 0x1D3574u;
    // 0x1d3574: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3574u;
    {
        const bool branch_taken_0x1d3574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3574) {
            ctx->pc = 0x1D3578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3574u;
            // 0x1d3578: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3590u;
            goto label_1d3590;
        }
    }
    ctx->pc = 0x1D357Cu;
    // 0x1d357c: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1D357Cu;
    SET_GPR_U32(ctx, 31, 0x1D3584u);
    ctx->pc = 0x1D3580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D357Cu;
    // 0x1d3580: 0x8e050134  lw          $a1, 0x134($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1D357Cu, 0x1D3584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3584u;
label_1d3584:
    // 0x1d3584: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1d3584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1d3588: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d3588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d358c:
    // 0x1d358c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d358cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3590:
    // 0x1d3590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3594: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3594u;
        // 0x1d3598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D359Cu;
    // 0x1d359c: 0x0  nop
    ctx->pc = 0x1d359cu;
    // NOP
    ctx->pc = 0x1d35a0u;
}
