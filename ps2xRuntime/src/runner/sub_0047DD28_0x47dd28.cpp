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

// Function: sub_0047DD28
// Address: 0x47dd28 - 0x47de08
void sub_0047DD28_0x47dd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047DD28_0x47dd28");
#endif

    switch (ctx->pc) {
        case 0x47dd28u: goto label_47dd28;
        case 0x47dd2cu: goto label_47dd2c;
        case 0x47dd30u: goto label_47dd30;
        case 0x47dd34u: goto label_47dd34;
        case 0x47dd38u: goto label_47dd38;
        case 0x47dd3cu: goto label_47dd3c;
        case 0x47dd40u: goto label_47dd40;
        case 0x47dd44u: goto label_47dd44;
        case 0x47dd48u: goto label_47dd48;
        case 0x47dd4cu: goto label_47dd4c;
        case 0x47dd50u: goto label_47dd50;
        case 0x47dd54u: goto label_47dd54;
        case 0x47dd58u: goto label_47dd58;
        case 0x47dd5cu: goto label_47dd5c;
        case 0x47dd60u: goto label_47dd60;
        case 0x47dd64u: goto label_47dd64;
        case 0x47dd68u: goto label_47dd68;
        case 0x47dd6cu: goto label_47dd6c;
        case 0x47dd70u: goto label_47dd70;
        case 0x47dd74u: goto label_47dd74;
        case 0x47dd78u: goto label_47dd78;
        case 0x47dd7cu: goto label_47dd7c;
        case 0x47dd80u: goto label_47dd80;
        case 0x47dd84u: goto label_47dd84;
        case 0x47dd88u: goto label_47dd88;
        case 0x47dd8cu: goto label_47dd8c;
        case 0x47dd90u: goto label_47dd90;
        case 0x47dd94u: goto label_47dd94;
        case 0x47dd98u: goto label_47dd98;
        case 0x47dd9cu: goto label_47dd9c;
        case 0x47dda0u: goto label_47dda0;
        case 0x47dda4u: goto label_47dda4;
        case 0x47dda8u: goto label_47dda8;
        case 0x47ddacu: goto label_47ddac;
        case 0x47ddb0u: goto label_47ddb0;
        case 0x47ddb4u: goto label_47ddb4;
        case 0x47ddb8u: goto label_47ddb8;
        case 0x47ddbcu: goto label_47ddbc;
        case 0x47ddc0u: goto label_47ddc0;
        case 0x47ddc4u: goto label_47ddc4;
        case 0x47ddc8u: goto label_47ddc8;
        case 0x47ddccu: goto label_47ddcc;
        case 0x47ddd0u: goto label_47ddd0;
        case 0x47ddd4u: goto label_47ddd4;
        case 0x47ddd8u: goto label_47ddd8;
        case 0x47dddcu: goto label_47dddc;
        case 0x47dde0u: goto label_47dde0;
        case 0x47dde4u: goto label_47dde4;
        case 0x47dde8u: goto label_47dde8;
        case 0x47ddecu: goto label_47ddec;
        case 0x47ddf0u: goto label_47ddf0;
        case 0x47ddf4u: goto label_47ddf4;
        case 0x47ddf8u: goto label_47ddf8;
        case 0x47ddfcu: goto label_47ddfc;
        case 0x47de00u: goto label_47de00;
        case 0x47de04u: goto label_47de04;
        default: break;
    }

    ctx->pc = 0x47dd28u;

label_47dd28:
    // 0x47dd28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47dd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47dd2c:
    // 0x47dd2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47dd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_47dd30:
    // 0x47dd30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47dd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47dd34:
    // 0x47dd34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47dd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47dd38:
    // 0x47dd38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x47dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_47dd3c:
    // 0x47dd3c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x47dd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_47dd40:
    // 0x47dd40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47dd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47dd44:
    // 0x47dd44: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x47dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_47dd48:
    // 0x47dd48: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x47dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_47dd4c:
    // 0x47dd4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x47dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_47dd50:
    // 0x47dd50: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x47dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_47dd54:
    // 0x47dd54: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x47dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_47dd58:
    // 0x47dd58: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x47dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_47dd5c:
    // 0x47dd5c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x47dd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47dd60:
    // 0x47dd60: 0x10d1000e  beq         $a2, $s1, . + 4 + (0xE << 2)
label_47dd64:
    if (ctx->pc == 0x47DD64u) {
        ctx->pc = 0x47DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DD60u;
        // 0x47dd64: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DD68u;
        goto label_47dd68;
    }
    ctx->pc = 0x47DD60u;
    {
        const bool branch_taken_0x47dd60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        ctx->pc = 0x47DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DD60u;
        // 0x47dd64: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dd60) {
            ctx->pc = 0x47DD9Cu;
            goto label_47dd9c;
        }
    }
    ctx->pc = 0x47DD68u;
label_47dd68:
    // 0x47dd68: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x47dd68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47dd6c:
    // 0x47dd6c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x47dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_47dd70:
    // 0x47dd70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x47dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_47dd74:
    // 0x47dd74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x47dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_47dd78:
    // 0x47dd78: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x47dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_47dd7c:
    // 0x47dd7c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x47dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_47dd80:
    // 0x47dd80: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x47dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_47dd84:
    // 0x47dd84: 0x8e43010c  lw          $v1, 0x10C($s2)
    ctx->pc = 0x47dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_47dd88:
    // 0x47dd88: 0x60f809  jalr        $v1
label_47dd8c:
    if (ctx->pc == 0x47DD8Cu) {
        ctx->pc = 0x47DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DD88u;
        // 0x47dd8c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DD90u;
        goto label_47dd90;
    }
    ctx->pc = 0x47DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x47DD90u);
        ctx->pc = 0x47DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DD88u;
        // 0x47dd8c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DD88u, 0x47DD90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47DD90u;
label_47dd90:
    // 0x47dd90: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x47dd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47dd94:
    // 0x47dd94: 0x54d1fff6  bnel        $a2, $s1, . + 4 + (-0xA << 2)
label_47dd98:
    if (ctx->pc == 0x47DD98u) {
        ctx->pc = 0x47DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DD94u;
        // 0x47dd98: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DD9Cu;
        goto label_47dd9c;
    }
    ctx->pc = 0x47DD94u;
    {
        const bool branch_taken_0x47dd94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x47dd94) {
            ctx->pc = 0x47DD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DD94u;
            // 0x47dd98: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47dd70;
        }
    }
    ctx->pc = 0x47DD9Cu;
label_47dd9c:
    // 0x47dd9c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x47dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_47dda0:
    // 0x47dda0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x47dda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_47dda4:
    // 0x47dda4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_47dda8:
    if (ctx->pc == 0x47DDA8u) {
        ctx->pc = 0x47DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDA4u;
        // 0x47dda8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DDACu;
        goto label_47ddac;
    }
    ctx->pc = 0x47DDA4u;
    {
        const bool branch_taken_0x47dda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47dda4) {
            ctx->pc = 0x47DDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DDA4u;
            // 0x47dda8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DDE8u;
            goto label_47dde8;
        }
    }
    ctx->pc = 0x47DDACu;
label_47ddac:
    // 0x47ddac: 0x8f8485dc  lw          $a0, -0x7A24($gp)
    ctx->pc = 0x47ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
label_47ddb0:
    // 0x47ddb0: 0x10900004  beq         $a0, $s0, . + 4 + (0x4 << 2)
label_47ddb4:
    if (ctx->pc == 0x47DDB4u) {
        ctx->pc = 0x47DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDB0u;
        // 0x47ddb4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DDB8u;
        goto label_47ddb8;
    }
    ctx->pc = 0x47DDB0u;
    {
        const bool branch_taken_0x47ddb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x47DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDB0u;
        // 0x47ddb4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ddb0) {
            ctx->pc = 0x47DDC4u;
            goto label_47ddc4;
        }
    }
    ctx->pc = 0x47DDB8u;
label_47ddb8:
    // 0x47ddb8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_47ddbc:
    if (ctx->pc == 0x47DDBCu) {
        ctx->pc = 0x47DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDB8u;
        // 0x47ddbc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DDC0u;
        goto label_47ddc0;
    }
    ctx->pc = 0x47DDB8u;
    {
        const bool branch_taken_0x47ddb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDB8u;
        // 0x47ddbc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ddb8) {
            ctx->pc = 0x47DDD8u;
            goto label_47ddd8;
        }
    }
    ctx->pc = 0x47DDC0u;
label_47ddc0:
    // 0x47ddc0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47ddc4:
    // 0x47ddc4: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x47ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_47ddc8:
    // 0x47ddc8: 0x40f809  jalr        $v0
label_47ddcc:
    if (ctx->pc == 0x47DDCCu) {
        ctx->pc = 0x47DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDC8u;
        // 0x47ddcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DDD0u;
        goto label_47ddd0;
    }
    ctx->pc = 0x47DDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47DDD0u);
        ctx->pc = 0x47DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDC8u;
        // 0x47ddcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DDC8u, 0x47DDD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47DDD0u;
label_47ddd0:
    // 0x47ddd0: 0x10000005  b           . + 4 + (0x5 << 2)
label_47ddd4:
    if (ctx->pc == 0x47DDD4u) {
        ctx->pc = 0x47DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDD0u;
        // 0x47ddd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DDD8u;
        goto label_47ddd8;
    }
    ctx->pc = 0x47DDD0u;
    {
        const bool branch_taken_0x47ddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDD0u;
        // 0x47ddd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ddd0) {
            ctx->pc = 0x47DDE8u;
            goto label_47dde8;
        }
    }
    ctx->pc = 0x47DDD8u;
label_47ddd8:
    // 0x47ddd8: 0x8c62ae34  lw          $v0, -0x51CC($v1)
    ctx->pc = 0x47ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946356)));
label_47dddc:
    // 0x47dddc: 0x40f809  jalr        $v0
label_47dde0:
    if (ctx->pc == 0x47DDE0u) {
        ctx->pc = 0x47DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDDCu;
        // 0x47dde0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DDE4u;
        goto label_47dde4;
    }
    ctx->pc = 0x47DDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47DDE4u);
        ctx->pc = 0x47DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDDCu;
        // 0x47dde0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DDDCu, 0x47DDE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47DDE4u;
label_47dde4:
    // 0x47dde4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47dde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47dde8:
    // 0x47dde8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47ddec:
    // 0x47ddec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47ddecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ddf0:
    // 0x47ddf0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x47ddf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ddf4:
    // 0x47ddf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ddf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47ddf8:
    // 0x47ddf8: 0x3e00008  jr          $ra
label_47ddfc:
    if (ctx->pc == 0x47DDFCu) {
        ctx->pc = 0x47DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDF8u;
        // 0x47ddfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DE00u;
        goto label_47de00;
    }
    ctx->pc = 0x47DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DDF8u;
        // 0x47ddfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47DE00u;
label_47de00:
    // 0x47de00: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x47de00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_47de04:
    // 0x47de04: 0x0  nop
    ctx->pc = 0x47de04u;
    // NOP
    ctx->pc = 0x47de08u;
}
