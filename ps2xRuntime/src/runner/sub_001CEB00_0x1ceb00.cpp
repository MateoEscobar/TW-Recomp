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

// Function: sub_001CEB00
// Address: 0x1ceb00 - 0x1ceb40
void sub_001CEB00_0x1ceb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEB00_0x1ceb00");
#endif

    switch (ctx->pc) {
        case 0x1ceb24u: goto label_1ceb24;
        default: break;
    }

    ctx->pc = 0x1ceb00u;

    // 0x1ceb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ceb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ceb04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ceb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ceb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ceb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ceb0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ceb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ceb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ceb14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CEB14u;
    {
        const bool branch_taken_0x1ceb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb14) {
            ctx->pc = 0x1CEB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEB14u;
            // 0x1ceb18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEB30u;
            goto label_1ceb30;
        }
    }
    ctx->pc = 0x1CEB1Cu;
    // 0x1ceb1c: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1CEB1Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB24u);
    ctx->pc = 0x1CEB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB1Cu;
    // 0x1ceb20: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1CEB1Cu, 0x1CEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB24u;
label_1ceb24:
    // 0x1ceb24: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ceb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ceb28: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ceb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ceb2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ceb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ceb30:
    // 0x1ceb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ceb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceb34: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB34u;
        // 0x1ceb38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEB3Cu;
    // 0x1ceb3c: 0x0  nop
    ctx->pc = 0x1ceb3cu;
    // NOP
    ctx->pc = 0x1ceb40u;
}
