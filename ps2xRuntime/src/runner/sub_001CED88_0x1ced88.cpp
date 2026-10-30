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

// Function: sub_001CED88
// Address: 0x1ced88 - 0x1cede8
void sub_001CED88_0x1ced88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CED88_0x1ced88");
#endif

    switch (ctx->pc) {
        case 0x1ced88u: goto label_1ced88;
        case 0x1ced8cu: goto label_1ced8c;
        case 0x1ced90u: goto label_1ced90;
        case 0x1ced94u: goto label_1ced94;
        case 0x1ced98u: goto label_1ced98;
        case 0x1ced9cu: goto label_1ced9c;
        case 0x1ceda0u: goto label_1ceda0;
        case 0x1ceda4u: goto label_1ceda4;
        case 0x1ceda8u: goto label_1ceda8;
        case 0x1cedacu: goto label_1cedac;
        case 0x1cedb0u: goto label_1cedb0;
        case 0x1cedb4u: goto label_1cedb4;
        case 0x1cedb8u: goto label_1cedb8;
        case 0x1cedbcu: goto label_1cedbc;
        case 0x1cedc0u: goto label_1cedc0;
        case 0x1cedc4u: goto label_1cedc4;
        case 0x1cedc8u: goto label_1cedc8;
        case 0x1cedccu: goto label_1cedcc;
        case 0x1cedd0u: goto label_1cedd0;
        case 0x1cedd4u: goto label_1cedd4;
        case 0x1cedd8u: goto label_1cedd8;
        case 0x1ceddcu: goto label_1ceddc;
        case 0x1cede0u: goto label_1cede0;
        case 0x1cede4u: goto label_1cede4;
        default: break;
    }

    ctx->pc = 0x1ced88u;

label_1ced88:
    // 0x1ced88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ced88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ced8c:
    // 0x1ced8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ced8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ced90:
    // 0x1ced90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ced90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ced94:
    // 0x1ced94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ced94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ced98:
    // 0x1ced98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ced98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ced9c:
    // 0x1ced9c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1ced9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1ceda0:
    // 0x1ceda0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1ceda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1ceda4:
    // 0x1ceda4: 0x40f809  jalr        $v0
label_1ceda8:
    if (ctx->pc == 0x1CEDA8u) {
        ctx->pc = 0x1CEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDA4u;
        // 0x1ceda8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDACu;
        goto label_1cedac;
    }
    ctx->pc = 0x1CEDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CEDACu);
        ctx->pc = 0x1CEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDA4u;
        // 0x1ceda8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDA4u, 0x1CEDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEDACu;
label_1cedac:
    // 0x1cedac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1cedb0:
    if (ctx->pc == 0x1CEDB0u) {
        ctx->pc = 0x1CEDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDACu;
        // 0x1cedb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDB4u;
        goto label_1cedb4;
    }
    ctx->pc = 0x1CEDACu;
    {
        const bool branch_taken_0x1cedac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cedac) {
            ctx->pc = 0x1CEDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEDACu;
            // 0x1cedb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEDDCu;
            goto label_1ceddc;
        }
    }
    ctx->pc = 0x1CEDB4u;
label_1cedb4:
    // 0x1cedb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cedb8:
    // 0x1cedb8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1cedb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1cedbc:
    // 0x1cedbc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1cedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1cedc0:
    // 0x1cedc0: 0x40f809  jalr        $v0
label_1cedc4:
    if (ctx->pc == 0x1CEDC4u) {
        ctx->pc = 0x1CEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDC0u;
        // 0x1cedc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDC8u;
        goto label_1cedc8;
    }
    ctx->pc = 0x1CEDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CEDC8u);
        ctx->pc = 0x1CEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDC0u;
        // 0x1cedc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDC0u, 0x1CEDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEDC8u;
label_1cedc8:
    // 0x1cedc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1cedcc:
    if (ctx->pc == 0x1CEDCCu) {
        ctx->pc = 0x1CEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDC8u;
        // 0x1cedcc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDD0u;
        goto label_1cedd0;
    }
    ctx->pc = 0x1CEDC8u;
    {
        const bool branch_taken_0x1cedc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cedc8) {
            ctx->pc = 0x1CEDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEDC8u;
            // 0x1cedcc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEDDCu;
            goto label_1ceddc;
        }
    }
    ctx->pc = 0x1CEDD0u;
label_1cedd0:
    // 0x1cedd0: 0xc06ec70  jal         func_1BB1C0
label_1cedd4:
    if (ctx->pc == 0x1CEDD4u) {
        ctx->pc = 0x1CEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDD0u;
        // 0x1cedd4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDD8u;
        goto label_1cedd8;
    }
    ctx->pc = 0x1CEDD0u;
    SET_GPR_U32(ctx, 31, 0x1CEDD8u);
    ctx->pc = 0x1CEDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDD0u;
    // 0x1cedd4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1CEDD0u, 0x1CEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDD8u;
label_1cedd8:
    // 0x1cedd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cedd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ceddc:
    // 0x1ceddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ceddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cede0:
    // 0x1cede0: 0x3e00008  jr          $ra
label_1cede4:
    if (ctx->pc == 0x1CEDE4u) {
        ctx->pc = 0x1CEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDE0u;
        // 0x1cede4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDE8u;
        goto label_fallthrough_0x1cede0;
    }
    ctx->pc = 0x1CEDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDE0u;
        // 0x1cede4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cede0:
    ctx->pc = 0x1CEDE8u;
}
