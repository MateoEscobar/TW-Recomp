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

// Function: sub_0044ECF8
// Address: 0x44ecf8 - 0x44ed98
void sub_0044ECF8_0x44ecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044ECF8_0x44ecf8");
#endif

    switch (ctx->pc) {
        case 0x44ecf8u: goto label_44ecf8;
        case 0x44ecfcu: goto label_44ecfc;
        case 0x44ed00u: goto label_44ed00;
        case 0x44ed04u: goto label_44ed04;
        case 0x44ed08u: goto label_44ed08;
        case 0x44ed0cu: goto label_44ed0c;
        case 0x44ed10u: goto label_44ed10;
        case 0x44ed14u: goto label_44ed14;
        case 0x44ed18u: goto label_44ed18;
        case 0x44ed1cu: goto label_44ed1c;
        case 0x44ed20u: goto label_44ed20;
        case 0x44ed24u: goto label_44ed24;
        case 0x44ed28u: goto label_44ed28;
        case 0x44ed2cu: goto label_44ed2c;
        case 0x44ed30u: goto label_44ed30;
        case 0x44ed34u: goto label_44ed34;
        case 0x44ed38u: goto label_44ed38;
        case 0x44ed3cu: goto label_44ed3c;
        case 0x44ed40u: goto label_44ed40;
        case 0x44ed44u: goto label_44ed44;
        case 0x44ed48u: goto label_44ed48;
        case 0x44ed4cu: goto label_44ed4c;
        case 0x44ed50u: goto label_44ed50;
        case 0x44ed54u: goto label_44ed54;
        case 0x44ed58u: goto label_44ed58;
        case 0x44ed5cu: goto label_44ed5c;
        case 0x44ed60u: goto label_44ed60;
        case 0x44ed64u: goto label_44ed64;
        case 0x44ed68u: goto label_44ed68;
        case 0x44ed6cu: goto label_44ed6c;
        case 0x44ed70u: goto label_44ed70;
        case 0x44ed74u: goto label_44ed74;
        case 0x44ed78u: goto label_44ed78;
        case 0x44ed7cu: goto label_44ed7c;
        case 0x44ed80u: goto label_44ed80;
        case 0x44ed84u: goto label_44ed84;
        case 0x44ed88u: goto label_44ed88;
        case 0x44ed8cu: goto label_44ed8c;
        case 0x44ed90u: goto label_44ed90;
        case 0x44ed94u: goto label_44ed94;
        default: break;
    }

    ctx->pc = 0x44ecf8u;

label_44ecf8:
    // 0x44ecf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x44ecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_44ecfc:
    // 0x44ecfc: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_44ed00:
    // 0x44ed00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x44ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_44ed04:
    // 0x44ed04: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x44ed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_44ed08:
    // 0x44ed08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44ed08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ed0c:
    // 0x44ed0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ed10:
    // 0x44ed10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x44ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_44ed14:
    // 0x44ed14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x44ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_44ed18:
    // 0x44ed18: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x44ed18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44ed1c:
    // 0x44ed1c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x44ed1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_44ed20:
    // 0x44ed20: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
label_44ed24:
    if (ctx->pc == 0x44ED24u) {
        ctx->pc = 0x44ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED20u;
        // 0x44ed24: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ED28u;
        goto label_44ed28;
    }
    ctx->pc = 0x44ED20u;
    {
        const bool branch_taken_0x44ed20 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x44ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED20u;
        // 0x44ed24: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ed20) {
            ctx->pc = 0x44ED78u;
            goto label_44ed78;
        }
    }
    ctx->pc = 0x44ED28u;
label_44ed28:
    // 0x44ed28: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x44ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_44ed2c:
    // 0x44ed2c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_44ed30:
    if (ctx->pc == 0x44ED30u) {
        ctx->pc = 0x44ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED2Cu;
        // 0x44ed30: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ED34u;
        goto label_44ed34;
    }
    ctx->pc = 0x44ED2Cu;
    {
        const bool branch_taken_0x44ed2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ed2c) {
            ctx->pc = 0x44ED30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44ED2Cu;
            // 0x44ed30: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44ED48u;
            goto label_44ed48;
        }
    }
    ctx->pc = 0x44ED34u;
label_44ed34:
    // 0x44ed34: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x44ed34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_44ed38:
    // 0x44ed38: 0x40f809  jalr        $v0
label_44ed3c:
    if (ctx->pc == 0x44ED3Cu) {
        ctx->pc = 0x44ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED38u;
        // 0x44ed3c: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ED40u;
        goto label_44ed40;
    }
    ctx->pc = 0x44ED38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44ED40u);
        ctx->pc = 0x44ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED38u;
        // 0x44ed3c: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ED38u, 0x44ED40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44ED40u;
label_44ed40:
    // 0x44ed40: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x44ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_44ed44:
    // 0x44ed44: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x44ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_44ed48:
    // 0x44ed48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_44ed4c:
    if (ctx->pc == 0x44ED4Cu) {
        ctx->pc = 0x44ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED48u;
        // 0x44ed4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ED50u;
        goto label_44ed50;
    }
    ctx->pc = 0x44ED48u;
    {
        const bool branch_taken_0x44ed48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED48u;
        // 0x44ed4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ed48) {
            ctx->pc = 0x44ED60u;
            goto label_44ed60;
        }
    }
    ctx->pc = 0x44ED50u;
label_44ed50:
    // 0x44ed50: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x44ed50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_44ed54:
    // 0x44ed54: 0x40f809  jalr        $v0
label_44ed58:
    if (ctx->pc == 0x44ED58u) {
        ctx->pc = 0x44ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED54u;
        // 0x44ed58: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ED5Cu;
        goto label_44ed5c;
    }
    ctx->pc = 0x44ED54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44ED5Cu);
        ctx->pc = 0x44ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED54u;
        // 0x44ed58: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ED54u, 0x44ED5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44ED5Cu;
label_44ed5c:
    // 0x44ed5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44ed5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44ed60:
    // 0x44ed60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44ed64:
    // 0x44ed64: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_44ed68:
    if (ctx->pc == 0x44ED68u) {
        ctx->pc = 0x44ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED64u;
        // 0x44ed68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ED6Cu;
        goto label_44ed6c;
    }
    ctx->pc = 0x44ED64u;
    {
        const bool branch_taken_0x44ed64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x44ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED64u;
        // 0x44ed68: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ed64) {
            ctx->pc = 0x44ED7Cu;
            goto label_44ed7c;
        }
    }
    ctx->pc = 0x44ED6Cu;
label_44ed6c:
    // 0x44ed6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x44ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_44ed70:
    // 0x44ed70: 0x40f809  jalr        $v0
label_44ed74:
    if (ctx->pc == 0x44ED74u) {
        ctx->pc = 0x44ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED70u;
        // 0x44ed74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ED78u;
        goto label_44ed78;
    }
    ctx->pc = 0x44ED70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44ED78u);
        ctx->pc = 0x44ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED70u;
        // 0x44ed74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ED70u, 0x44ED78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44ED78u;
label_44ed78:
    // 0x44ed78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44ed78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44ed7c:
    // 0x44ed7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x44ed7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44ed80:
    // 0x44ed80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x44ed80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44ed84:
    // 0x44ed84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x44ed84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ed88:
    // 0x44ed88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ed88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ed8c:
    // 0x44ed8c: 0x3e00008  jr          $ra
label_44ed90:
    if (ctx->pc == 0x44ED90u) {
        ctx->pc = 0x44ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED8Cu;
        // 0x44ed90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44ED94u;
        goto label_44ed94;
    }
    ctx->pc = 0x44ED8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44ED8Cu;
        // 0x44ed90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ED8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44ED94u;
label_44ed94:
    // 0x44ed94: 0x0  nop
    ctx->pc = 0x44ed94u;
    // NOP
    ctx->pc = 0x44ed98u;
}
