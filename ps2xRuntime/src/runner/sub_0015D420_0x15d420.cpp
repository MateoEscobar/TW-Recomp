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

// Function: sub_0015D420
// Address: 0x15d420 - 0x15d480
void sub_0015D420_0x15d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D420_0x15d420");
#endif

    switch (ctx->pc) {
        case 0x15d43cu: goto label_15d43c;
        case 0x15d450u: goto label_15d450;
        default: break;
    }

    ctx->pc = 0x15d420u;

    // 0x15d420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d424: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15d424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15d428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d42c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d434: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x15D434u;
    SET_GPR_U32(ctx, 31, 0x15D43Cu);
    ctx->pc = 0x15D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D434u;
    // 0x15d438: 0x3c11005e  lui         $s1, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x15D434u, 0x15D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D43Cu;
label_15d43c:
    // 0x15d43c: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x15d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x15d440: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D440u;
    {
        const bool branch_taken_0x15d440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D440u;
        // 0x15d444: 0x26225df8  addiu       $v0, $s1, 0x5DF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d440) {
            ctx->pc = 0x15D468u;
            goto label_15d468;
        }
    }
    ctx->pc = 0x15D448u;
    // 0x15d448: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x15D448u;
    SET_GPR_U32(ctx, 31, 0x15D450u);
    ctx->pc = 0x15D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D448u;
    // 0x15d44c: 0x26245df8  addiu       $a0, $s1, 0x5DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x15D448u, 0x15D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D450u;
label_15d450:
    // 0x15d450: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D450u;
    {
        const bool branch_taken_0x15d450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D450u;
        // 0x15d454: 0x26225df8  addiu       $v0, $s1, 0x5DF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d450) {
            ctx->pc = 0x15D468u;
            goto label_15d468;
        }
    }
    ctx->pc = 0x15D458u;
    // 0x15d458: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15d458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15d45c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d460: 0xac62c754  sw          $v0, -0x38AC($v1)
    ctx->pc = 0x15d460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C754u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C754u, _value); } while (0);
    // 0x15d464: 0x26225df8  addiu       $v0, $s1, 0x5DF8
    ctx->pc = 0x15d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24056));
label_15d468:
    // 0x15d468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d46c: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x15d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
    // 0x15d470: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15d470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d478: 0x3e00008  jr          $ra
    ctx->pc = 0x15D478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D478u;
        // 0x15d47c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D480u;
}
