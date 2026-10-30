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

// Function: sub_0021ECD0
// Address: 0x21ecd0 - 0x21ed28
void sub_0021ECD0_0x21ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ECD0_0x21ecd0");
#endif

    switch (ctx->pc) {
        case 0x21ece8u: goto label_21ece8;
        case 0x21ecf4u: goto label_21ecf4;
        case 0x21ed08u: goto label_21ed08;
        default: break;
    }

    ctx->pc = 0x21ecd0u;

    // 0x21ecd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ecd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21ecd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ecdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21ecdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ece0: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x21ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x21ece4: 0x0  nop
    ctx->pc = 0x21ece4u;
    // NOP
label_21ece8:
    // 0x21ece8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x21ece8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x21ecec: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x21ECECu;
    SET_GPR_U32(ctx, 31, 0x21ECF4u);
    ctx->pc = 0x21ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECECu;
    // 0x21ecf0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x21ECECu, 0x21ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECF4u;
label_21ecf4:
    // 0x21ecf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ecf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ECF8u;
    {
        const bool branch_taken_0x21ecf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF8u;
        // 0x21ecfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecf8) {
            ctx->pc = 0x21ED08u;
            goto label_21ed08;
        }
    }
    ctx->pc = 0x21ED00u;
    // 0x21ed00: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x21ED00u;
    SET_GPR_U32(ctx, 31, 0x21ED08u);
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x21ED00u, 0x21ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED08u;
label_21ed08:
    // 0x21ed08: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x21ed08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x21ed0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21ED0Cu;
    {
        const bool branch_taken_0x21ed0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED0Cu;
        // 0x21ed10: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed0c) {
            ctx->pc = 0x21ECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ece8;
        }
    }
    ctx->pc = 0x21ED14u;
    // 0x21ed14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21ed14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ed18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ed1c: 0x3e00008  jr          $ra
    ctx->pc = 0x21ED1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED1Cu;
        // 0x21ed20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ED1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ED24u;
    // 0x21ed24: 0x0  nop
    ctx->pc = 0x21ed24u;
    // NOP
    ctx->pc = 0x21ed28u;
}
