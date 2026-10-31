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

// Function: sub_002CDB30
// Address: 0x2cdb30 - 0x2cdbb8
void sub_002CDB30_0x2cdb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDB30_0x2cdb30");
#endif

    switch (ctx->pc) {
        case 0x2cdb30u: goto label_2cdb30;
        case 0x2cdb34u: goto label_2cdb34;
        case 0x2cdb38u: goto label_2cdb38;
        case 0x2cdb3cu: goto label_2cdb3c;
        case 0x2cdb40u: goto label_2cdb40;
        case 0x2cdb44u: goto label_2cdb44;
        case 0x2cdb48u: goto label_2cdb48;
        case 0x2cdb4cu: goto label_2cdb4c;
        case 0x2cdb50u: goto label_2cdb50;
        case 0x2cdb54u: goto label_2cdb54;
        case 0x2cdb58u: goto label_2cdb58;
        case 0x2cdb5cu: goto label_2cdb5c;
        case 0x2cdb60u: goto label_2cdb60;
        case 0x2cdb64u: goto label_2cdb64;
        case 0x2cdb68u: goto label_2cdb68;
        case 0x2cdb6cu: goto label_2cdb6c;
        case 0x2cdb70u: goto label_2cdb70;
        case 0x2cdb74u: goto label_2cdb74;
        case 0x2cdb78u: goto label_2cdb78;
        case 0x2cdb7cu: goto label_2cdb7c;
        case 0x2cdb80u: goto label_2cdb80;
        case 0x2cdb84u: goto label_2cdb84;
        case 0x2cdb88u: goto label_2cdb88;
        case 0x2cdb8cu: goto label_2cdb8c;
        case 0x2cdb90u: goto label_2cdb90;
        case 0x2cdb94u: goto label_2cdb94;
        case 0x2cdb98u: goto label_2cdb98;
        case 0x2cdb9cu: goto label_2cdb9c;
        case 0x2cdba0u: goto label_2cdba0;
        case 0x2cdba4u: goto label_2cdba4;
        case 0x2cdba8u: goto label_2cdba8;
        case 0x2cdbacu: goto label_2cdbac;
        case 0x2cdbb0u: goto label_2cdbb0;
        case 0x2cdbb4u: goto label_2cdbb4;
        default: break;
    }

    ctx->pc = 0x2cdb30u;

label_2cdb30:
    // 0x2cdb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cdb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cdb34:
    // 0x2cdb34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cdb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2cdb38:
    // 0x2cdb38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cdb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cdb3c:
    // 0x2cdb3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cdb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cdb40:
    // 0x2cdb40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cdb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cdb44:
    // 0x2cdb44: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2cdb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cdb48:
    // 0x2cdb48: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2cdb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2cdb4c:
    // 0x2cdb4c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2cdb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2cdb50:
    // 0x2cdb50: 0x60f809  jalr        $v1
label_2cdb54:
    if (ctx->pc == 0x2CDB54u) {
        ctx->pc = 0x2CDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB50u;
        // 0x2cdb54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB58u;
        goto label_2cdb58;
    }
    ctx->pc = 0x2CDB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CDB58u);
        ctx->pc = 0x2CDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB50u;
        // 0x2cdb54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDB50u, 0x2CDB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDB58u;
label_2cdb58:
    // 0x2cdb58: 0xc0e4060  jal         func_390180
label_2cdb5c:
    if (ctx->pc == 0x2CDB5Cu) {
        ctx->pc = 0x2CDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB58u;
        // 0x2cdb5c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB60u;
        goto label_2cdb60;
    }
    ctx->pc = 0x2CDB58u;
    SET_GPR_U32(ctx, 31, 0x2CDB60u);
    ctx->pc = 0x2CDB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB58u;
    // 0x2cdb5c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CDB58u, 0x2CDB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB60u;
label_2cdb60:
    // 0x2cdb60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdb64:
    // 0x2cdb64: 0xc0b3590  jal         func_2CD640
label_2cdb68:
    if (ctx->pc == 0x2CDB68u) {
        ctx->pc = 0x2CDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB64u;
        // 0x2cdb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB6Cu;
        goto label_2cdb6c;
    }
    ctx->pc = 0x2CDB64u;
    SET_GPR_U32(ctx, 31, 0x2CDB6Cu);
    ctx->pc = 0x2CDB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB64u;
    // 0x2cdb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD640u, 0x2CDB64u, 0x2CDB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB6Cu;
label_2cdb6c:
    // 0x2cdb6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cdb70:
    // 0x2cdb70: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2cdb70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cdb74:
    // 0x2cdb74: 0xc089bfc  jal         func_226FF0
label_2cdb78:
    if (ctx->pc == 0x2CDB78u) {
        ctx->pc = 0x2CDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB74u;
        // 0x2cdb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB7Cu;
        goto label_2cdb7c;
    }
    ctx->pc = 0x2CDB74u;
    SET_GPR_U32(ctx, 31, 0x2CDB7Cu);
    ctx->pc = 0x2CDB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB74u;
    // 0x2cdb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2CDB74u, 0x2CDB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB7Cu;
label_2cdb7c:
    // 0x2cdb7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2cdb80:
    if (ctx->pc == 0x2CDB80u) {
        ctx->pc = 0x2CDB84u;
        goto label_2cdb84;
    }
    ctx->pc = 0x2CDB7Cu;
    {
        const bool branch_taken_0x2cdb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb7c) {
            ctx->pc = 0x2CDB8Cu;
            goto label_2cdb8c;
        }
    }
    ctx->pc = 0x2CDB84u;
label_2cdb84:
    // 0x2cdb84: 0xc095fce  jal         func_257F38
label_2cdb88:
    if (ctx->pc == 0x2CDB88u) {
        ctx->pc = 0x2CDB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB84u;
        // 0x2cdb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB8Cu;
        goto label_2cdb8c;
    }
    ctx->pc = 0x2CDB84u;
    SET_GPR_U32(ctx, 31, 0x2CDB8Cu);
    ctx->pc = 0x2CDB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB84u;
    // 0x2cdb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2CDB84u, 0x2CDB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB8Cu;
label_2cdb8c:
    // 0x2cdb8c: 0xc089bdc  jal         func_226F70
label_2cdb90:
    if (ctx->pc == 0x2CDB90u) {
        ctx->pc = 0x2CDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB8Cu;
        // 0x2cdb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB94u;
        goto label_2cdb94;
    }
    ctx->pc = 0x2CDB8Cu;
    SET_GPR_U32(ctx, 31, 0x2CDB94u);
    ctx->pc = 0x2CDB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB8Cu;
    // 0x2cdb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2CDB8Cu, 0x2CDB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB94u;
label_2cdb94:
    // 0x2cdb94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cdb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cdb98:
    // 0x2cdb98: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x2cdb98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_2cdb9c:
    // 0x2cdb9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cdb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cdba0:
    // 0x2cdba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cdba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cdba4:
    // 0x2cdba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cdba8:
    // 0x2cdba8: 0xa0620265  sb          $v0, 0x265($v1)
    ctx->pc = 0x2cdba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 2));
label_2cdbac:
    // 0x2cdbac: 0x3e00008  jr          $ra
label_2cdbb0:
    if (ctx->pc == 0x2CDBB0u) {
        ctx->pc = 0x2CDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBACu;
        // 0x2cdbb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDBB4u;
        goto label_2cdbb4;
    }
    ctx->pc = 0x2CDBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBACu;
        // 0x2cdbb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDBB4u;
label_2cdbb4:
    // 0x2cdbb4: 0x0  nop
    ctx->pc = 0x2cdbb4u;
    // NOP
    ctx->pc = 0x2cdbb8u;
}
