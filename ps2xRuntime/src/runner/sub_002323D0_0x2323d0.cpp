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

// Function: sub_002323D0
// Address: 0x2323d0 - 0x232430
void sub_002323D0_0x2323d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002323D0_0x2323d0");
#endif

    switch (ctx->pc) {
        case 0x2323e4u: goto label_2323e4;
        case 0x2323e8u: goto label_2323e8;
        case 0x2323f4u: goto label_2323f4;
        case 0x232408u: goto label_232408;
        default: break;
    }

    ctx->pc = 0x2323d0u;

    // 0x2323d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2323d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2323d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2323d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2323d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2323d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2323dc: 0xc04155c  jal         func_105570
    ctx->pc = 0x2323DCu;
    SET_GPR_U32(ctx, 31, 0x2323E4u);
    ctx->pc = 0x2323E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323DCu;
    // 0x2323e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105570u, 0x2323DCu, 0x2323E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323E4u;
label_2323e4:
    // 0x2323e4: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x2323e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_2323e8:
    // 0x2323e8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2323e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2323ec: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x2323ECu;
    SET_GPR_U32(ctx, 31, 0x2323F4u);
    ctx->pc = 0x2323F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2323ECu;
    // 0x2323f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x2323ECu, 0x2323F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323F4u;
label_2323f4:
    // 0x2323f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2323f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2323f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2323F8u;
    {
        const bool branch_taken_0x2323f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2323FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323F8u;
        // 0x2323fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323f8) {
            ctx->pc = 0x232408u;
            goto label_232408;
        }
    }
    ctx->pc = 0x232400u;
    // 0x232400: 0xc0871f2  jal         func_21C7C8
    ctx->pc = 0x232400u;
    SET_GPR_U32(ctx, 31, 0x232408u);
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x232400u, 0x232408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232408u;
label_232408:
    // 0x232408: 0x2e02003c  sltiu       $v0, $s0, 0x3C
    ctx->pc = 0x232408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x23240c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23240Cu;
    {
        const bool branch_taken_0x23240c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23240Cu;
        // 0x232410: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23240c) {
            ctx->pc = 0x2323E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2323e8;
        }
    }
    ctx->pc = 0x232414u;
    // 0x232414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x232414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23241c: 0x3e00008  jr          $ra
    ctx->pc = 0x23241Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23241Cu;
        // 0x232420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23241Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232424u;
    // 0x232424: 0x0  nop
    ctx->pc = 0x232424u;
    // NOP
    // 0x232428: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x232428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23242c: 0x0  nop
    ctx->pc = 0x23242cu;
    // NOP
    ctx->pc = 0x232430u;
}
