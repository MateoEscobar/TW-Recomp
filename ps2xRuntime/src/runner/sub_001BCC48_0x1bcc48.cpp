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

// Function: sub_001BCC48
// Address: 0x1bcc48 - 0x1bcdd8
void sub_001BCC48_0x1bcc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCC48_0x1bcc48");
#endif

    switch (ctx->pc) {
        case 0x1bcc48u: goto label_1bcc48;
        case 0x1bcc4cu: goto label_1bcc4c;
        case 0x1bcc50u: goto label_1bcc50;
        case 0x1bcc54u: goto label_1bcc54;
        case 0x1bcc58u: goto label_1bcc58;
        case 0x1bcc5cu: goto label_1bcc5c;
        case 0x1bcc60u: goto label_1bcc60;
        case 0x1bcc64u: goto label_1bcc64;
        case 0x1bcc68u: goto label_1bcc68;
        case 0x1bcc6cu: goto label_1bcc6c;
        case 0x1bcc70u: goto label_1bcc70;
        case 0x1bcc74u: goto label_1bcc74;
        case 0x1bcc78u: goto label_1bcc78;
        case 0x1bcc7cu: goto label_1bcc7c;
        case 0x1bcc80u: goto label_1bcc80;
        case 0x1bcc84u: goto label_1bcc84;
        case 0x1bcc88u: goto label_1bcc88;
        case 0x1bcc8cu: goto label_1bcc8c;
        case 0x1bcc90u: goto label_1bcc90;
        case 0x1bcc94u: goto label_1bcc94;
        case 0x1bcc98u: goto label_1bcc98;
        case 0x1bcc9cu: goto label_1bcc9c;
        case 0x1bcca0u: goto label_1bcca0;
        case 0x1bcca4u: goto label_1bcca4;
        case 0x1bcca8u: goto label_1bcca8;
        case 0x1bccacu: goto label_1bccac;
        case 0x1bccb0u: goto label_1bccb0;
        case 0x1bccb4u: goto label_1bccb4;
        case 0x1bccb8u: goto label_1bccb8;
        case 0x1bccbcu: goto label_1bccbc;
        case 0x1bccc0u: goto label_1bccc0;
        case 0x1bccc4u: goto label_1bccc4;
        case 0x1bccc8u: goto label_1bccc8;
        case 0x1bccccu: goto label_1bcccc;
        case 0x1bccd0u: goto label_1bccd0;
        case 0x1bccd4u: goto label_1bccd4;
        case 0x1bccd8u: goto label_1bccd8;
        case 0x1bccdcu: goto label_1bccdc;
        case 0x1bcce0u: goto label_1bcce0;
        case 0x1bcce4u: goto label_1bcce4;
        case 0x1bcce8u: goto label_1bcce8;
        case 0x1bccecu: goto label_1bccec;
        case 0x1bccf0u: goto label_1bccf0;
        case 0x1bccf4u: goto label_1bccf4;
        case 0x1bccf8u: goto label_1bccf8;
        case 0x1bccfcu: goto label_1bccfc;
        case 0x1bcd00u: goto label_1bcd00;
        case 0x1bcd04u: goto label_1bcd04;
        case 0x1bcd08u: goto label_1bcd08;
        case 0x1bcd0cu: goto label_1bcd0c;
        case 0x1bcd10u: goto label_1bcd10;
        case 0x1bcd14u: goto label_1bcd14;
        case 0x1bcd18u: goto label_1bcd18;
        case 0x1bcd1cu: goto label_1bcd1c;
        case 0x1bcd20u: goto label_1bcd20;
        case 0x1bcd24u: goto label_1bcd24;
        case 0x1bcd28u: goto label_1bcd28;
        case 0x1bcd2cu: goto label_1bcd2c;
        case 0x1bcd30u: goto label_1bcd30;
        case 0x1bcd34u: goto label_1bcd34;
        case 0x1bcd38u: goto label_1bcd38;
        case 0x1bcd3cu: goto label_1bcd3c;
        case 0x1bcd40u: goto label_1bcd40;
        case 0x1bcd44u: goto label_1bcd44;
        case 0x1bcd48u: goto label_1bcd48;
        case 0x1bcd4cu: goto label_1bcd4c;
        case 0x1bcd50u: goto label_1bcd50;
        case 0x1bcd54u: goto label_1bcd54;
        case 0x1bcd58u: goto label_1bcd58;
        case 0x1bcd5cu: goto label_1bcd5c;
        case 0x1bcd60u: goto label_1bcd60;
        case 0x1bcd64u: goto label_1bcd64;
        case 0x1bcd68u: goto label_1bcd68;
        case 0x1bcd6cu: goto label_1bcd6c;
        case 0x1bcd70u: goto label_1bcd70;
        case 0x1bcd74u: goto label_1bcd74;
        case 0x1bcd78u: goto label_1bcd78;
        case 0x1bcd7cu: goto label_1bcd7c;
        case 0x1bcd80u: goto label_1bcd80;
        case 0x1bcd84u: goto label_1bcd84;
        case 0x1bcd88u: goto label_1bcd88;
        case 0x1bcd8cu: goto label_1bcd8c;
        case 0x1bcd90u: goto label_1bcd90;
        case 0x1bcd94u: goto label_1bcd94;
        case 0x1bcd98u: goto label_1bcd98;
        case 0x1bcd9cu: goto label_1bcd9c;
        case 0x1bcda0u: goto label_1bcda0;
        case 0x1bcda4u: goto label_1bcda4;
        case 0x1bcda8u: goto label_1bcda8;
        case 0x1bcdacu: goto label_1bcdac;
        case 0x1bcdb0u: goto label_1bcdb0;
        case 0x1bcdb4u: goto label_1bcdb4;
        case 0x1bcdb8u: goto label_1bcdb8;
        case 0x1bcdbcu: goto label_1bcdbc;
        case 0x1bcdc0u: goto label_1bcdc0;
        case 0x1bcdc4u: goto label_1bcdc4;
        case 0x1bcdc8u: goto label_1bcdc8;
        case 0x1bcdccu: goto label_1bcdcc;
        case 0x1bcdd0u: goto label_1bcdd0;
        case 0x1bcdd4u: goto label_1bcdd4;
        default: break;
    }

    ctx->pc = 0x1bcc48u;

label_1bcc48:
    // 0x1bcc48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bcc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1bcc4c:
    // 0x1bcc4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bcc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bcc50:
    // 0x1bcc50: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1bcc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1bcc54:
    // 0x1bcc54: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1bcc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1bcc58:
    // 0x1bcc58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bcc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc5c:
    // 0x1bcc5c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1bcc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1bcc60:
    // 0x1bcc60: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1bcc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1bcc64:
    // 0x1bcc64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bcc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bcc68:
    // 0x1bcc68: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1bcc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1bcc6c:
    // 0x1bcc6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bcc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1bcc70:
    // 0x1bcc70: 0x8c7256d4  lw          $s2, 0x56D4($v1)
    ctx->pc = 0x1bcc70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22228)));
label_1bcc74:
    // 0x1bcc74: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_1bcc78:
    if (ctx->pc == 0x1BCC78u) {
        ctx->pc = 0x1BCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC74u;
        // 0x1bcc78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC7Cu;
        goto label_1bcc7c;
    }
    ctx->pc = 0x1BCC74u;
    {
        const bool branch_taken_0x1bcc74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC74u;
        // 0x1bcc78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc74) {
            ctx->pc = 0x1BCCB4u;
            goto label_1bccb4;
        }
    }
    ctx->pc = 0x1BCC7Cu;
label_1bcc7c:
    // 0x1bcc7c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1bcc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1bcc80:
    // 0x1bcc80: 0x40f809  jalr        $v0
label_1bcc84:
    if (ctx->pc == 0x1BCC84u) {
        ctx->pc = 0x1BCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC80u;
        // 0x1bcc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC88u;
        goto label_1bcc88;
    }
    ctx->pc = 0x1BCC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCC88u);
        ctx->pc = 0x1BCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC80u;
        // 0x1bcc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCC80u, 0x1BCC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCC88u;
label_1bcc88:
    // 0x1bcc88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1bcc8c:
    if (ctx->pc == 0x1BCC8Cu) {
        ctx->pc = 0x1BCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC88u;
        // 0x1bcc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC90u;
        goto label_1bcc90;
    }
    ctx->pc = 0x1BCC88u;
    {
        const bool branch_taken_0x1bcc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC88u;
        // 0x1bcc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc88) {
            ctx->pc = 0x1BCCA4u;
            goto label_1bcca4;
        }
    }
    ctx->pc = 0x1BCC90u;
label_1bcc90:
    // 0x1bcc90: 0xc06f29c  jal         func_1BCA70
label_1bcc94:
    if (ctx->pc == 0x1BCC94u) {
        ctx->pc = 0x1BCC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC90u;
        // 0x1bcc94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC98u;
        goto label_1bcc98;
    }
    ctx->pc = 0x1BCC90u;
    SET_GPR_U32(ctx, 31, 0x1BCC98u);
    ctx->pc = 0x1BCC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC90u;
    // 0x1bcc94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA70u, 0x1BCC90u, 0x1BCC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC98u;
label_1bcc98:
    // 0x1bcc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc9c:
    // 0x1bcc9c: 0xc06f24c  jal         func_1BC930
label_1bcca0:
    if (ctx->pc == 0x1BCCA0u) {
        ctx->pc = 0x1BCCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC9Cu;
        // 0x1bcca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCA4u;
        goto label_1bcca4;
    }
    ctx->pc = 0x1BCC9Cu;
    SET_GPR_U32(ctx, 31, 0x1BCCA4u);
    ctx->pc = 0x1BCCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC9Cu;
    // 0x1bcca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC930u, 0x1BCC9Cu, 0x1BCCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCA4u;
label_1bcca4:
    // 0x1bcca4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bcca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bcca8:
    // 0x1bcca8: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1bcca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1bccac:
    // 0x1bccac: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_1bccb0:
    if (ctx->pc == 0x1BCCB0u) {
        ctx->pc = 0x1BCCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCACu;
        // 0x1bccb0: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCB4u;
        goto label_1bccb4;
    }
    ctx->pc = 0x1BCCACu;
    {
        const bool branch_taken_0x1bccac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bccac) {
            ctx->pc = 0x1BCCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCCACu;
            // 0x1bccb0: 0x8e220088  lw          $v0, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcc80;
        }
    }
    ctx->pc = 0x1BCCB4u;
label_1bccb4:
    // 0x1bccb4: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x1bccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1bccb8:
    // 0x1bccb8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1bccb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bccbc:
    // 0x1bccbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bccbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bccc0:
    // 0x1bccc0: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1bccc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bccc4:
    // 0x1bccc4: 0x12300015  beq         $s1, $s0, . + 4 + (0x15 << 2)
label_1bccc8:
    if (ctx->pc == 0x1BCCC8u) {
        ctx->pc = 0x1BCCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCC4u;
        // 0x1bccc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCCCu;
        goto label_1bcccc;
    }
    ctx->pc = 0x1BCCC4u;
    {
        const bool branch_taken_0x1bccc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BCCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCC4u;
        // 0x1bccc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccc4) {
            ctx->pc = 0x1BCD1Cu;
            goto label_1bcd1c;
        }
    }
    ctx->pc = 0x1BCCCCu;
label_1bcccc:
    // 0x1bcccc: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x1bccccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1bccd0:
    // 0x1bccd0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1bccd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1bccd4:
    // 0x1bccd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bccd8:
    // 0x1bccd8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1bccdc:
    if (ctx->pc == 0x1BCCDCu) {
        ctx->pc = 0x1BCCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCD8u;
        // 0x1bccdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCE0u;
        goto label_1bcce0;
    }
    ctx->pc = 0x1BCCD8u;
    {
        const bool branch_taken_0x1bccd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BCCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCD8u;
        // 0x1bccdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccd8) {
            ctx->pc = 0x1BCCF8u;
            goto label_1bccf8;
        }
    }
    ctx->pc = 0x1BCCE0u;
label_1bcce0:
    // 0x1bcce0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1bcce0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1bcce4:
    // 0x1bcce4: 0x0  nop
    ctx->pc = 0x1bcce4u;
    // NOP
label_1bcce8:
    // 0x1bcce8: 0x0  nop
    ctx->pc = 0x1bcce8u;
    // NOP
label_1bccec:
    // 0x1bccec: 0x0  nop
    ctx->pc = 0x1bccecu;
    // NOP
label_1bccf0:
    // 0x1bccf0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
label_1bccf4:
    if (ctx->pc == 0x1BCCF4u) {
        ctx->pc = 0x1BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCF0u;
        // 0x1bccf4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCF8u;
        goto label_1bccf8;
    }
    ctx->pc = 0x1BCCF0u;
    {
        const bool branch_taken_0x1bccf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCF0u;
        // 0x1bccf4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccf0) {
            ctx->pc = 0x1BCCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcce0;
        }
    }
    ctx->pc = 0x1BCCF8u;
label_1bccf8:
    // 0x1bccf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bccf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bccfc:
    // 0x1bccfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bccfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd00:
    // 0x1bcd00: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1bcd00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1bcd04:
    // 0x1bcd04: 0xc13959c  jal         func_4E5670
label_1bcd08:
    if (ctx->pc == 0x1BCD08u) {
        ctx->pc = 0x1BCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD04u;
        // 0x1bcd08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD0Cu;
        goto label_1bcd0c;
    }
    ctx->pc = 0x1BCD04u;
    SET_GPR_U32(ctx, 31, 0x1BCD0Cu);
    ctx->pc = 0x1BCD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD04u;
    // 0x1bcd08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5670u, 0x1BCD04u, 0x1BCD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD0Cu;
label_1bcd0c:
    // 0x1bcd0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd10:
    // 0x1bcd10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bcd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd14:
    // 0x1bcd14: 0xc1396c2  jal         func_4E5B08
label_1bcd18:
    if (ctx->pc == 0x1BCD18u) {
        ctx->pc = 0x1BCD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD14u;
        // 0x1bcd18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD1Cu;
        goto label_1bcd1c;
    }
    ctx->pc = 0x1BCD14u;
    SET_GPR_U32(ctx, 31, 0x1BCD1Cu);
    ctx->pc = 0x1BCD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD14u;
    // 0x1bcd18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5B08u, 0x1BCD14u, 0x1BCD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD1Cu;
label_1bcd1c:
    // 0x1bcd1c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1bcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1bcd20:
    // 0x1bcd20: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1bcd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1bcd24:
    // 0x1bcd24: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_1bcd28:
    if (ctx->pc == 0x1BCD28u) {
        ctx->pc = 0x1BCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD24u;
        // 0x1bcd28: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD2Cu;
        goto label_1bcd2c;
    }
    ctx->pc = 0x1BCD24u;
    {
        const bool branch_taken_0x1bcd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD24u;
        // 0x1bcd28: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd24) {
            ctx->pc = 0x1BCDACu;
            goto label_1bcdac;
        }
    }
    ctx->pc = 0x1BCD2Cu;
label_1bcd2c:
    // 0x1bcd2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bcd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bcd30:
    // 0x1bcd30: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x1bcd30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1bcd34:
    // 0x1bcd34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1bcd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1bcd38:
    // 0x1bcd38: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1bcd38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bcd3c:
    // 0x1bcd3c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1bcd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bcd40:
    // 0x1bcd40: 0x12300016  beq         $s1, $s0, . + 4 + (0x16 << 2)
label_1bcd44:
    if (ctx->pc == 0x1BCD44u) {
        ctx->pc = 0x1BCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD40u;
        // 0x1bcd44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD48u;
        goto label_1bcd48;
    }
    ctx->pc = 0x1BCD40u;
    {
        const bool branch_taken_0x1bcd40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD40u;
        // 0x1bcd44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd40) {
            ctx->pc = 0x1BCD9Cu;
            goto label_1bcd9c;
        }
    }
    ctx->pc = 0x1BCD48u;
label_1bcd48:
    // 0x1bcd48: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1bcd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1bcd4c:
    // 0x1bcd4c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1bcd4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1bcd50:
    // 0x1bcd50: 0x10540009  beq         $v0, $s4, . + 4 + (0x9 << 2)
label_1bcd54:
    if (ctx->pc == 0x1BCD54u) {
        ctx->pc = 0x1BCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD50u;
        // 0x1bcd54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD58u;
        goto label_1bcd58;
    }
    ctx->pc = 0x1BCD50u;
    {
        const bool branch_taken_0x1bcd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1BCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD50u;
        // 0x1bcd54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd50) {
            ctx->pc = 0x1BCD78u;
            goto label_1bcd78;
        }
    }
    ctx->pc = 0x1BCD58u;
label_1bcd58:
    // 0x1bcd58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bcd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcd5c:
    // 0x1bcd5c: 0x0  nop
    ctx->pc = 0x1bcd5cu;
    // NOP
label_1bcd60:
    // 0x1bcd60: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bcd60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1bcd64:
    // 0x1bcd64: 0x0  nop
    ctx->pc = 0x1bcd64u;
    // NOP
label_1bcd68:
    // 0x1bcd68: 0x0  nop
    ctx->pc = 0x1bcd68u;
    // NOP
label_1bcd6c:
    // 0x1bcd6c: 0x0  nop
    ctx->pc = 0x1bcd6cu;
    // NOP
label_1bcd70:
    // 0x1bcd70: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_1bcd74:
    if (ctx->pc == 0x1BCD74u) {
        ctx->pc = 0x1BCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD70u;
        // 0x1bcd74: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD78u;
        goto label_1bcd78;
    }
    ctx->pc = 0x1BCD70u;
    {
        const bool branch_taken_0x1bcd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD70u;
        // 0x1bcd74: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd70) {
            ctx->pc = 0x1BCD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcd60;
        }
    }
    ctx->pc = 0x1BCD78u;
label_1bcd78:
    // 0x1bcd78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bcd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd7c:
    // 0x1bcd7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bcd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd80:
    // 0x1bcd80: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1bcd80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1bcd84:
    // 0x1bcd84: 0xc13985a  jal         func_4E6168
label_1bcd88:
    if (ctx->pc == 0x1BCD88u) {
        ctx->pc = 0x1BCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD84u;
        // 0x1bcd88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD8Cu;
        goto label_1bcd8c;
    }
    ctx->pc = 0x1BCD84u;
    SET_GPR_U32(ctx, 31, 0x1BCD8Cu);
    ctx->pc = 0x1BCD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD84u;
    // 0x1bcd88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6168u, 0x1BCD84u, 0x1BCD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD8Cu;
label_1bcd8c:
    // 0x1bcd8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd90:
    // 0x1bcd90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bcd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd94:
    // 0x1bcd94: 0xc13998a  jal         func_4E6628
label_1bcd98:
    if (ctx->pc == 0x1BCD98u) {
        ctx->pc = 0x1BCD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD94u;
        // 0x1bcd98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD9Cu;
        goto label_1bcd9c;
    }
    ctx->pc = 0x1BCD94u;
    SET_GPR_U32(ctx, 31, 0x1BCD9Cu);
    ctx->pc = 0x1BCD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD94u;
    // 0x1bcd98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6628u, 0x1BCD94u, 0x1BCD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD9Cu;
label_1bcd9c:
    // 0x1bcd9c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1bcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1bcda0:
    // 0x1bcda0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x1bcda0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bcda4:
    // 0x1bcda4: 0x5462ffe2  bnel        $v1, $v0, . + 4 + (-0x1E << 2)
label_1bcda8:
    if (ctx->pc == 0x1BCDA8u) {
        ctx->pc = 0x1BCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDA4u;
        // 0x1bcda8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDACu;
        goto label_1bcdac;
    }
    ctx->pc = 0x1BCDA4u;
    {
        const bool branch_taken_0x1bcda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcda4) {
            ctx->pc = 0x1BCDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCDA4u;
            // 0x1bcda8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcd30;
        }
    }
    ctx->pc = 0x1BCDACu;
label_1bcdac:
    // 0x1bcdac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1bcdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bcdb0:
    // 0x1bcdb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bcdb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bcdb4:
    // 0x1bcdb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bcdb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bcdb8:
    // 0x1bcdb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1bcdb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bcdbc:
    // 0x1bcdbc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1bcdbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bcdc0:
    // 0x1bcdc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bcdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcdc4:
    // 0x1bcdc4: 0x3e00008  jr          $ra
label_1bcdc8:
    if (ctx->pc == 0x1BCDC8u) {
        ctx->pc = 0x1BCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDC4u;
        // 0x1bcdc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDCCu;
        goto label_1bcdcc;
    }
    ctx->pc = 0x1BCDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDC4u;
        // 0x1bcdc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCDCCu;
label_1bcdcc:
    // 0x1bcdcc: 0x0  nop
    ctx->pc = 0x1bcdccu;
    // NOP
label_1bcdd0:
    // 0x1bcdd0: 0x0  nop
    ctx->pc = 0x1bcdd0u;
    // NOP
label_1bcdd4:
    // 0x1bcdd4: 0x0  nop
    ctx->pc = 0x1bcdd4u;
    // NOP
    ctx->pc = 0x1bcdd8u;
}
