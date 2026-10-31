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

// Function: sub_002BBE98
// Address: 0x2bbe98 - 0x2bbf28
void sub_002BBE98_0x2bbe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBE98_0x2bbe98");
#endif

    switch (ctx->pc) {
        case 0x2bbe98u: goto label_2bbe98;
        case 0x2bbe9cu: goto label_2bbe9c;
        case 0x2bbea0u: goto label_2bbea0;
        case 0x2bbea4u: goto label_2bbea4;
        case 0x2bbea8u: goto label_2bbea8;
        case 0x2bbeacu: goto label_2bbeac;
        case 0x2bbeb0u: goto label_2bbeb0;
        case 0x2bbeb4u: goto label_2bbeb4;
        case 0x2bbeb8u: goto label_2bbeb8;
        case 0x2bbebcu: goto label_2bbebc;
        case 0x2bbec0u: goto label_2bbec0;
        case 0x2bbec4u: goto label_2bbec4;
        case 0x2bbec8u: goto label_2bbec8;
        case 0x2bbeccu: goto label_2bbecc;
        case 0x2bbed0u: goto label_2bbed0;
        case 0x2bbed4u: goto label_2bbed4;
        case 0x2bbed8u: goto label_2bbed8;
        case 0x2bbedcu: goto label_2bbedc;
        case 0x2bbee0u: goto label_2bbee0;
        case 0x2bbee4u: goto label_2bbee4;
        case 0x2bbee8u: goto label_2bbee8;
        case 0x2bbeecu: goto label_2bbeec;
        case 0x2bbef0u: goto label_2bbef0;
        case 0x2bbef4u: goto label_2bbef4;
        case 0x2bbef8u: goto label_2bbef8;
        case 0x2bbefcu: goto label_2bbefc;
        case 0x2bbf00u: goto label_2bbf00;
        case 0x2bbf04u: goto label_2bbf04;
        case 0x2bbf08u: goto label_2bbf08;
        case 0x2bbf0cu: goto label_2bbf0c;
        case 0x2bbf10u: goto label_2bbf10;
        case 0x2bbf14u: goto label_2bbf14;
        case 0x2bbf18u: goto label_2bbf18;
        case 0x2bbf1cu: goto label_2bbf1c;
        case 0x2bbf20u: goto label_2bbf20;
        case 0x2bbf24u: goto label_2bbf24;
        default: break;
    }

    ctx->pc = 0x2bbe98u;

label_2bbe98:
    // 0x2bbe98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bbe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2bbe9c:
    // 0x2bbe9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2bbe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2bbea0:
    // 0x2bbea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bbea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bbea4:
    // 0x2bbea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bbea8:
    // 0x2bbea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bbeac:
    // 0x2bbeac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bbeb0:
    // 0x2bbeb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2bbeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2bbeb4:
    // 0x2bbeb4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bbeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbeb8:
    // 0x2bbeb8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bbebc:
    // 0x2bbebc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2bbebcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bbec0:
    // 0x2bbec0: 0xc0e409a  jal         func_390268
label_2bbec4:
    if (ctx->pc == 0x2BBEC4u) {
        ctx->pc = 0x2BBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEC0u;
        // 0x2bbec4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBEC8u;
        goto label_2bbec8;
    }
    ctx->pc = 0x2BBEC0u;
    SET_GPR_U32(ctx, 31, 0x2BBEC8u);
    ctx->pc = 0x2BBEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBEC0u;
    // 0x2bbec4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BBEC0u, 0x2BBEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBEC8u;
label_2bbec8:
    // 0x2bbec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bbecc:
    // 0x2bbecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bbeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbed0:
    // 0x2bbed0: 0xc0a352c  jal         func_28D4B0
label_2bbed4:
    if (ctx->pc == 0x2BBED4u) {
        ctx->pc = 0x2BBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBED0u;
        // 0x2bbed4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBED8u;
        goto label_2bbed8;
    }
    ctx->pc = 0x2BBED0u;
    SET_GPR_U32(ctx, 31, 0x2BBED8u);
    ctx->pc = 0x2BBED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBED0u;
    // 0x2bbed4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BBED0u, 0x2BBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBED8u;
label_2bbed8:
    // 0x2bbed8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2bbedc:
    if (ctx->pc == 0x2BBEDCu) {
        ctx->pc = 0x2BBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBED8u;
        // 0x2bbedc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBEE0u;
        goto label_2bbee0;
    }
    ctx->pc = 0x2BBED8u;
    {
        const bool branch_taken_0x2bbed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbed8) {
            ctx->pc = 0x2BBEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBED8u;
            // 0x2bbedc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBEFCu;
            goto label_2bbefc;
        }
    }
    ctx->pc = 0x2BBEE0u;
label_2bbee0:
    // 0x2bbee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bbee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbee4:
    // 0x2bbee4: 0xc08750a  jal         func_21D428
label_2bbee8:
    if (ctx->pc == 0x2BBEE8u) {
        ctx->pc = 0x2BBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEE4u;
        // 0x2bbee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBEECu;
        goto label_2bbeec;
    }
    ctx->pc = 0x2BBEE4u;
    SET_GPR_U32(ctx, 31, 0x2BBEECu);
    ctx->pc = 0x2BBEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBEE4u;
    // 0x2bbee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2BBEE4u, 0x2BBEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBEECu;
label_2bbeec:
    // 0x2bbeec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bbeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbef0:
    // 0x2bbef0: 0xc0a580a  jal         func_296028
label_2bbef4:
    if (ctx->pc == 0x2BBEF4u) {
        ctx->pc = 0x2BBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEF0u;
        // 0x2bbef4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBEF8u;
        goto label_2bbef8;
    }
    ctx->pc = 0x2BBEF0u;
    SET_GPR_U32(ctx, 31, 0x2BBEF8u);
    ctx->pc = 0x2BBEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBEF0u;
    // 0x2bbef4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x2BBEF0u, 0x2BBEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBEF8u;
label_2bbef8:
    // 0x2bbef8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2bbef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2bbefc:
    // 0x2bbefc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2bbefcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2bbf00:
    // 0x2bbf00: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2bbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2bbf04:
    // 0x2bbf04: 0x60f809  jalr        $v1
label_2bbf08:
    if (ctx->pc == 0x2BBF08u) {
        ctx->pc = 0x2BBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF04u;
        // 0x2bbf08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF0Cu;
        goto label_2bbf0c;
    }
    ctx->pc = 0x2BBF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BBF0Cu);
        ctx->pc = 0x2BBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF04u;
        // 0x2bbf08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBF04u, 0x2BBF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BBF0Cu;
label_2bbf0c:
    // 0x2bbf0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2bbf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bbf10:
    // 0x2bbf10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2bbf10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bbf14:
    // 0x2bbf14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bbf14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbf18:
    // 0x2bbf18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bbf1c:
    // 0x2bbf1c: 0x3e00008  jr          $ra
label_2bbf20:
    if (ctx->pc == 0x2BBF20u) {
        ctx->pc = 0x2BBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF1Cu;
        // 0x2bbf20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF24u;
        goto label_2bbf24;
    }
    ctx->pc = 0x2BBF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF1Cu;
        // 0x2bbf20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBF24u;
label_2bbf24:
    // 0x2bbf24: 0x0  nop
    ctx->pc = 0x2bbf24u;
    // NOP
    ctx->pc = 0x2bbf28u;
}
