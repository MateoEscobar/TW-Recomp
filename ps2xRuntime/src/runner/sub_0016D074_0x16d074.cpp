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

// Function: sub_0016D074
// Address: 0x16d074 - 0x16d0e0
void sub_0016D074_0x16d074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D074_0x16d074");
#endif

    switch (ctx->pc) {
        case 0x16d088u: goto label_16d088;
        case 0x16d090u: goto label_16d090;
        case 0x16d098u: goto label_16d098;
        case 0x16d0b0u: goto label_16d0b0;
        case 0x16d0c8u: goto label_16d0c8;
        default: break;
    }

    ctx->pc = 0x16d074u;

    // 0x16d074: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16d074u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16d078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d07c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d080: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16D080u;
    SET_GPR_U32(ctx, 31, 0x16D088u);
    ctx->pc = 0x16D084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D080u;
    // 0x16d084: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16D080u, 0x16D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D088u;
label_16d088:
    // 0x16d088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d08c: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_16d090:
    // 0x16d090: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16D090u;
    SET_GPR_U32(ctx, 31, 0x16D098u);
    ctx->pc = 0x16D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D090u;
    // 0x16d094: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16D090u, 0x16D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D098u;
label_16d098:
    // 0x16d098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d09c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16d0a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D0A0u;
    {
        const bool branch_taken_0x16d0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0a0) {
            ctx->pc = 0x16D0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D0A0u;
            // 0x16d0a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D0B4u;
            goto label_16d0b4;
        }
    }
    ctx->pc = 0x16D0A8u;
    // 0x16d0a8: 0xc05a44c  jal         func_169130
    ctx->pc = 0x16D0A8u;
    SET_GPR_U32(ctx, 31, 0x16D0B0u);
    ctx->pc = 0x16D0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0A8u;
    // 0x16d0ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x16D0A8u, 0x16D0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0B0u;
label_16d0b0:
    // 0x16d0b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16d0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16d0b4:
    // 0x16d0b4: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x16d0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16d0b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16D0B8u;
    {
        const bool branch_taken_0x16d0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0B8u;
        // 0x16d0bc: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0b8) {
            ctx->pc = 0x16D090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d090;
        }
    }
    ctx->pc = 0x16D0C0u;
    // 0x16d0c0: 0xc0591ce  jal         func_164738
    ctx->pc = 0x16D0C0u;
    SET_GPR_U32(ctx, 31, 0x16D0C8u);
    ctx->pc = 0x16D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0C0u;
    // 0x16d0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164738u, 0x16D0C0u, 0x16D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0C8u;
label_16d0c8:
    // 0x16d0c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16d0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0D4u;
        // 0x16d0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D0DCu;
    // 0x16d0dc: 0x0  nop
    ctx->pc = 0x16d0dcu;
    // NOP
    ctx->pc = 0x16d0e0u;
}
