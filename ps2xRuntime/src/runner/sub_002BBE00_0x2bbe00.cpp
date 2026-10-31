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

// Function: sub_002BBE00
// Address: 0x2bbe00 - 0x2bbe98
void sub_002BBE00_0x2bbe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBE00_0x2bbe00");
#endif

    switch (ctx->pc) {
        case 0x2bbe00u: goto label_2bbe00;
        case 0x2bbe04u: goto label_2bbe04;
        case 0x2bbe08u: goto label_2bbe08;
        case 0x2bbe0cu: goto label_2bbe0c;
        case 0x2bbe10u: goto label_2bbe10;
        case 0x2bbe14u: goto label_2bbe14;
        case 0x2bbe18u: goto label_2bbe18;
        case 0x2bbe1cu: goto label_2bbe1c;
        case 0x2bbe20u: goto label_2bbe20;
        case 0x2bbe24u: goto label_2bbe24;
        case 0x2bbe28u: goto label_2bbe28;
        case 0x2bbe2cu: goto label_2bbe2c;
        case 0x2bbe30u: goto label_2bbe30;
        case 0x2bbe34u: goto label_2bbe34;
        case 0x2bbe38u: goto label_2bbe38;
        case 0x2bbe3cu: goto label_2bbe3c;
        case 0x2bbe40u: goto label_2bbe40;
        case 0x2bbe44u: goto label_2bbe44;
        case 0x2bbe48u: goto label_2bbe48;
        case 0x2bbe4cu: goto label_2bbe4c;
        case 0x2bbe50u: goto label_2bbe50;
        case 0x2bbe54u: goto label_2bbe54;
        case 0x2bbe58u: goto label_2bbe58;
        case 0x2bbe5cu: goto label_2bbe5c;
        case 0x2bbe60u: goto label_2bbe60;
        case 0x2bbe64u: goto label_2bbe64;
        case 0x2bbe68u: goto label_2bbe68;
        case 0x2bbe6cu: goto label_2bbe6c;
        case 0x2bbe70u: goto label_2bbe70;
        case 0x2bbe74u: goto label_2bbe74;
        case 0x2bbe78u: goto label_2bbe78;
        case 0x2bbe7cu: goto label_2bbe7c;
        case 0x2bbe80u: goto label_2bbe80;
        case 0x2bbe84u: goto label_2bbe84;
        case 0x2bbe88u: goto label_2bbe88;
        case 0x2bbe8cu: goto label_2bbe8c;
        case 0x2bbe90u: goto label_2bbe90;
        case 0x2bbe94u: goto label_2bbe94;
        default: break;
    }

    ctx->pc = 0x2bbe00u;

label_2bbe00:
    // 0x2bbe00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bbe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2bbe04:
    // 0x2bbe04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2bbe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2bbe08:
    // 0x2bbe08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bbe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bbe0c:
    // 0x2bbe0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbe0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bbe10:
    // 0x2bbe10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bbe14:
    // 0x2bbe14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bbe18:
    // 0x2bbe18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2bbe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2bbe1c:
    // 0x2bbe1c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bbe1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bbe20:
    // 0x2bbe20: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bbe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bbe24:
    // 0x2bbe24: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2bbe24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bbe28:
    // 0x2bbe28: 0xc0e409a  jal         func_390268
label_2bbe2c:
    if (ctx->pc == 0x2BBE2Cu) {
        ctx->pc = 0x2BBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE28u;
        // 0x2bbe2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE30u;
        goto label_2bbe30;
    }
    ctx->pc = 0x2BBE28u;
    SET_GPR_U32(ctx, 31, 0x2BBE30u);
    ctx->pc = 0x2BBE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE28u;
    // 0x2bbe2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BBE28u, 0x2BBE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE30u;
label_2bbe30:
    // 0x2bbe30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bbe34:
    // 0x2bbe34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bbe34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbe38:
    // 0x2bbe38: 0xc0a352c  jal         func_28D4B0
label_2bbe3c:
    if (ctx->pc == 0x2BBE3Cu) {
        ctx->pc = 0x2BBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE38u;
        // 0x2bbe3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE40u;
        goto label_2bbe40;
    }
    ctx->pc = 0x2BBE38u;
    SET_GPR_U32(ctx, 31, 0x2BBE40u);
    ctx->pc = 0x2BBE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE38u;
    // 0x2bbe3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BBE38u, 0x2BBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE40u;
label_2bbe40:
    // 0x2bbe40: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2bbe44:
    if (ctx->pc == 0x2BBE44u) {
        ctx->pc = 0x2BBE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE40u;
        // 0x2bbe44: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE48u;
        goto label_2bbe48;
    }
    ctx->pc = 0x2BBE40u;
    {
        const bool branch_taken_0x2bbe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe40) {
            ctx->pc = 0x2BBE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBE40u;
            // 0x2bbe44: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBE6Cu;
            goto label_2bbe6c;
        }
    }
    ctx->pc = 0x2BBE48u;
label_2bbe48:
    // 0x2bbe48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bbe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbe4c:
    // 0x2bbe4c: 0xc08750a  jal         func_21D428
label_2bbe50:
    if (ctx->pc == 0x2BBE50u) {
        ctx->pc = 0x2BBE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE4Cu;
        // 0x2bbe50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE54u;
        goto label_2bbe54;
    }
    ctx->pc = 0x2BBE4Cu;
    SET_GPR_U32(ctx, 31, 0x2BBE54u);
    ctx->pc = 0x2BBE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE4Cu;
    // 0x2bbe50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2BBE4Cu, 0x2BBE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE54u;
label_2bbe54:
    // 0x2bbe54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bbe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbe58:
    // 0x2bbe58: 0xc0a57ca  jal         func_295F28
label_2bbe5c:
    if (ctx->pc == 0x2BBE5Cu) {
        ctx->pc = 0x2BBE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE58u;
        // 0x2bbe5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE60u;
        goto label_2bbe60;
    }
    ctx->pc = 0x2BBE58u;
    SET_GPR_U32(ctx, 31, 0x2BBE60u);
    ctx->pc = 0x2BBE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE58u;
    // 0x2bbe5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x2BBE58u, 0x2BBE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE60u;
label_2bbe60:
    // 0x2bbe60: 0xc08bfbc  jal         func_22FEF0
label_2bbe64:
    if (ctx->pc == 0x2BBE64u) {
        ctx->pc = 0x2BBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE60u;
        // 0x2bbe64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE68u;
        goto label_2bbe68;
    }
    ctx->pc = 0x2BBE60u;
    SET_GPR_U32(ctx, 31, 0x2BBE68u);
    ctx->pc = 0x2BBE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE60u;
    // 0x2bbe64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BBE60u, 0x2BBE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE68u;
label_2bbe68:
    // 0x2bbe68: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2bbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2bbe6c:
    // 0x2bbe6c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2bbe6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2bbe70:
    // 0x2bbe70: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2bbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2bbe74:
    // 0x2bbe74: 0x60f809  jalr        $v1
label_2bbe78:
    if (ctx->pc == 0x2BBE78u) {
        ctx->pc = 0x2BBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE74u;
        // 0x2bbe78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE7Cu;
        goto label_2bbe7c;
    }
    ctx->pc = 0x2BBE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BBE7Cu);
        ctx->pc = 0x2BBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE74u;
        // 0x2bbe78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBE74u, 0x2BBE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BBE7Cu;
label_2bbe7c:
    // 0x2bbe7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2bbe7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bbe80:
    // 0x2bbe80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2bbe80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bbe84:
    // 0x2bbe84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bbe84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbe88:
    // 0x2bbe88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bbe8c:
    // 0x2bbe8c: 0x3e00008  jr          $ra
label_2bbe90:
    if (ctx->pc == 0x2BBE90u) {
        ctx->pc = 0x2BBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE8Cu;
        // 0x2bbe90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE94u;
        goto label_2bbe94;
    }
    ctx->pc = 0x2BBE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE8Cu;
        // 0x2bbe90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBE94u;
label_2bbe94:
    // 0x2bbe94: 0x0  nop
    ctx->pc = 0x2bbe94u;
    // NOP
    ctx->pc = 0x2bbe98u;
}
