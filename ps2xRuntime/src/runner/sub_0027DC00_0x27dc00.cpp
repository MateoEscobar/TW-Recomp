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

// Function: sub_0027DC00
// Address: 0x27dc00 - 0x27de78
void sub_0027DC00_0x27dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DC00_0x27dc00");
#endif

    switch (ctx->pc) {
        case 0x27dc00u: goto label_27dc00;
        case 0x27dc04u: goto label_27dc04;
        case 0x27dc08u: goto label_27dc08;
        case 0x27dc0cu: goto label_27dc0c;
        case 0x27dc10u: goto label_27dc10;
        case 0x27dc14u: goto label_27dc14;
        case 0x27dc18u: goto label_27dc18;
        case 0x27dc1cu: goto label_27dc1c;
        case 0x27dc20u: goto label_27dc20;
        case 0x27dc24u: goto label_27dc24;
        case 0x27dc28u: goto label_27dc28;
        case 0x27dc2cu: goto label_27dc2c;
        case 0x27dc30u: goto label_27dc30;
        case 0x27dc34u: goto label_27dc34;
        case 0x27dc38u: goto label_27dc38;
        case 0x27dc3cu: goto label_27dc3c;
        case 0x27dc40u: goto label_27dc40;
        case 0x27dc44u: goto label_27dc44;
        case 0x27dc48u: goto label_27dc48;
        case 0x27dc4cu: goto label_27dc4c;
        case 0x27dc50u: goto label_27dc50;
        case 0x27dc54u: goto label_27dc54;
        case 0x27dc58u: goto label_27dc58;
        case 0x27dc5cu: goto label_27dc5c;
        case 0x27dc60u: goto label_27dc60;
        case 0x27dc64u: goto label_27dc64;
        case 0x27dc68u: goto label_27dc68;
        case 0x27dc6cu: goto label_27dc6c;
        case 0x27dc70u: goto label_27dc70;
        case 0x27dc74u: goto label_27dc74;
        case 0x27dc78u: goto label_27dc78;
        case 0x27dc7cu: goto label_27dc7c;
        case 0x27dc80u: goto label_27dc80;
        case 0x27dc84u: goto label_27dc84;
        case 0x27dc88u: goto label_27dc88;
        case 0x27dc8cu: goto label_27dc8c;
        case 0x27dc90u: goto label_27dc90;
        case 0x27dc94u: goto label_27dc94;
        case 0x27dc98u: goto label_27dc98;
        case 0x27dc9cu: goto label_27dc9c;
        case 0x27dca0u: goto label_27dca0;
        case 0x27dca4u: goto label_27dca4;
        case 0x27dca8u: goto label_27dca8;
        case 0x27dcacu: goto label_27dcac;
        case 0x27dcb0u: goto label_27dcb0;
        case 0x27dcb4u: goto label_27dcb4;
        case 0x27dcb8u: goto label_27dcb8;
        case 0x27dcbcu: goto label_27dcbc;
        case 0x27dcc0u: goto label_27dcc0;
        case 0x27dcc4u: goto label_27dcc4;
        case 0x27dcc8u: goto label_27dcc8;
        case 0x27dcccu: goto label_27dccc;
        case 0x27dcd0u: goto label_27dcd0;
        case 0x27dcd4u: goto label_27dcd4;
        case 0x27dcd8u: goto label_27dcd8;
        case 0x27dcdcu: goto label_27dcdc;
        case 0x27dce0u: goto label_27dce0;
        case 0x27dce4u: goto label_27dce4;
        case 0x27dce8u: goto label_27dce8;
        case 0x27dcecu: goto label_27dcec;
        case 0x27dcf0u: goto label_27dcf0;
        case 0x27dcf4u: goto label_27dcf4;
        case 0x27dcf8u: goto label_27dcf8;
        case 0x27dcfcu: goto label_27dcfc;
        case 0x27dd00u: goto label_27dd00;
        case 0x27dd04u: goto label_27dd04;
        case 0x27dd08u: goto label_27dd08;
        case 0x27dd0cu: goto label_27dd0c;
        case 0x27dd10u: goto label_27dd10;
        case 0x27dd14u: goto label_27dd14;
        case 0x27dd18u: goto label_27dd18;
        case 0x27dd1cu: goto label_27dd1c;
        case 0x27dd20u: goto label_27dd20;
        case 0x27dd24u: goto label_27dd24;
        case 0x27dd28u: goto label_27dd28;
        case 0x27dd2cu: goto label_27dd2c;
        case 0x27dd30u: goto label_27dd30;
        case 0x27dd34u: goto label_27dd34;
        case 0x27dd38u: goto label_27dd38;
        case 0x27dd3cu: goto label_27dd3c;
        case 0x27dd40u: goto label_27dd40;
        case 0x27dd44u: goto label_27dd44;
        case 0x27dd48u: goto label_27dd48;
        case 0x27dd4cu: goto label_27dd4c;
        case 0x27dd50u: goto label_27dd50;
        case 0x27dd54u: goto label_27dd54;
        case 0x27dd58u: goto label_27dd58;
        case 0x27dd5cu: goto label_27dd5c;
        case 0x27dd60u: goto label_27dd60;
        case 0x27dd64u: goto label_27dd64;
        case 0x27dd68u: goto label_27dd68;
        case 0x27dd6cu: goto label_27dd6c;
        case 0x27dd70u: goto label_27dd70;
        case 0x27dd74u: goto label_27dd74;
        case 0x27dd78u: goto label_27dd78;
        case 0x27dd7cu: goto label_27dd7c;
        case 0x27dd80u: goto label_27dd80;
        case 0x27dd84u: goto label_27dd84;
        case 0x27dd88u: goto label_27dd88;
        case 0x27dd8cu: goto label_27dd8c;
        case 0x27dd90u: goto label_27dd90;
        case 0x27dd94u: goto label_27dd94;
        case 0x27dd98u: goto label_27dd98;
        case 0x27dd9cu: goto label_27dd9c;
        case 0x27dda0u: goto label_27dda0;
        case 0x27dda4u: goto label_27dda4;
        case 0x27dda8u: goto label_27dda8;
        case 0x27ddacu: goto label_27ddac;
        case 0x27ddb0u: goto label_27ddb0;
        case 0x27ddb4u: goto label_27ddb4;
        case 0x27ddb8u: goto label_27ddb8;
        case 0x27ddbcu: goto label_27ddbc;
        case 0x27ddc0u: goto label_27ddc0;
        case 0x27ddc4u: goto label_27ddc4;
        case 0x27ddc8u: goto label_27ddc8;
        case 0x27ddccu: goto label_27ddcc;
        case 0x27ddd0u: goto label_27ddd0;
        case 0x27ddd4u: goto label_27ddd4;
        case 0x27ddd8u: goto label_27ddd8;
        case 0x27dddcu: goto label_27dddc;
        case 0x27dde0u: goto label_27dde0;
        case 0x27dde4u: goto label_27dde4;
        case 0x27dde8u: goto label_27dde8;
        case 0x27ddecu: goto label_27ddec;
        case 0x27ddf0u: goto label_27ddf0;
        case 0x27ddf4u: goto label_27ddf4;
        case 0x27ddf8u: goto label_27ddf8;
        case 0x27ddfcu: goto label_27ddfc;
        case 0x27de00u: goto label_27de00;
        case 0x27de04u: goto label_27de04;
        case 0x27de08u: goto label_27de08;
        case 0x27de0cu: goto label_27de0c;
        case 0x27de10u: goto label_27de10;
        case 0x27de14u: goto label_27de14;
        case 0x27de18u: goto label_27de18;
        case 0x27de1cu: goto label_27de1c;
        case 0x27de20u: goto label_27de20;
        case 0x27de24u: goto label_27de24;
        case 0x27de28u: goto label_27de28;
        case 0x27de2cu: goto label_27de2c;
        case 0x27de30u: goto label_27de30;
        case 0x27de34u: goto label_27de34;
        case 0x27de38u: goto label_27de38;
        case 0x27de3cu: goto label_27de3c;
        case 0x27de40u: goto label_27de40;
        case 0x27de44u: goto label_27de44;
        case 0x27de48u: goto label_27de48;
        case 0x27de4cu: goto label_27de4c;
        case 0x27de50u: goto label_27de50;
        case 0x27de54u: goto label_27de54;
        case 0x27de58u: goto label_27de58;
        case 0x27de5cu: goto label_27de5c;
        case 0x27de60u: goto label_27de60;
        case 0x27de64u: goto label_27de64;
        case 0x27de68u: goto label_27de68;
        case 0x27de6cu: goto label_27de6c;
        case 0x27de70u: goto label_27de70;
        case 0x27de74u: goto label_27de74;
        default: break;
    }

    ctx->pc = 0x27dc00u;

label_27dc00:
    // 0x27dc00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27dc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27dc04:
    // 0x27dc04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x27dc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_27dc08:
    // 0x27dc08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x27dc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_27dc0c:
    // 0x27dc0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27dc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27dc10:
    // 0x27dc10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27dc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27dc14:
    // 0x27dc14: 0xc0a03cc  jal         func_280F30
label_27dc18:
    if (ctx->pc == 0x27DC18u) {
        ctx->pc = 0x27DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC14u;
        // 0x27dc18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC1Cu;
        goto label_27dc1c;
    }
    ctx->pc = 0x27DC14u;
    SET_GPR_U32(ctx, 31, 0x27DC1Cu);
    ctx->pc = 0x27DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC14u;
    // 0x27dc18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F30u, 0x27DC14u, 0x27DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC1Cu;
label_27dc1c:
    // 0x27dc1c: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
label_27dc20:
    if (ctx->pc == 0x27DC20u) {
        ctx->pc = 0x27DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC1Cu;
        // 0x27dc20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC24u;
        goto label_27dc24;
    }
    ctx->pc = 0x27DC1Cu;
    {
        const bool branch_taken_0x27dc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC1Cu;
        // 0x27dc20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc1c) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DC24u;
label_27dc24:
    // 0x27dc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27dc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dc28:
    // 0x27dc28: 0xc089998  jal         func_226660
label_27dc2c:
    if (ctx->pc == 0x27DC2Cu) {
        ctx->pc = 0x27DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC28u;
        // 0x27dc2c: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC30u;
        goto label_27dc30;
    }
    ctx->pc = 0x27DC28u;
    SET_GPR_U32(ctx, 31, 0x27DC30u);
    ctx->pc = 0x27DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC28u;
    // 0x27dc2c: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27DC28u, 0x27DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC30u;
label_27dc30:
    // 0x27dc30: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
label_27dc34:
    if (ctx->pc == 0x27DC34u) {
        ctx->pc = 0x27DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC30u;
        // 0x27dc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC38u;
        goto label_27dc38;
    }
    ctx->pc = 0x27DC30u;
    {
        const bool branch_taken_0x27dc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC30u;
        // 0x27dc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc30) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DC38u;
label_27dc38:
    // 0x27dc38: 0xc089f22  jal         func_227C88
label_27dc3c:
    if (ctx->pc == 0x27DC3Cu) {
        ctx->pc = 0x27DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC38u;
        // 0x27dc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC40u;
        goto label_27dc40;
    }
    ctx->pc = 0x27DC38u;
    SET_GPR_U32(ctx, 31, 0x27DC40u);
    ctx->pc = 0x27DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC38u;
    // 0x27dc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x27DC38u, 0x27DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC40u;
label_27dc40:
    // 0x27dc40: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
label_27dc44:
    if (ctx->pc == 0x27DC44u) {
        ctx->pc = 0x27DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC40u;
        // 0x27dc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC48u;
        goto label_27dc48;
    }
    ctx->pc = 0x27DC40u;
    {
        const bool branch_taken_0x27dc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC40u;
        // 0x27dc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc40) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DC48u;
label_27dc48:
    // 0x27dc48: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x27dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_27dc4c:
    // 0x27dc4c: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x27dc4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_27dc50:
    // 0x27dc50: 0x2444e880  addiu       $a0, $v0, -0x1780
    ctx->pc = 0x27dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_27dc54:
    // 0x27dc54: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27dc54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27dc58:
    // 0x27dc58: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_27dc5c:
    if (ctx->pc == 0x27DC5Cu) {
        ctx->pc = 0x27DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC58u;
        // 0x27dc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC60u;
        goto label_27dc60;
    }
    ctx->pc = 0x27DC58u;
    {
        const bool branch_taken_0x27dc58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC58u;
        // 0x27dc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc58) {
            ctx->pc = 0x27DC90u;
            goto label_27dc90;
        }
    }
    ctx->pc = 0x27DC60u;
label_27dc60:
    // 0x27dc60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27dc64:
    // 0x27dc64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_27dc68:
    if (ctx->pc == 0x27DC68u) {
        ctx->pc = 0x27DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC64u;
        // 0x27dc68: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC6Cu;
        goto label_27dc6c;
    }
    ctx->pc = 0x27DC64u;
    {
        const bool branch_taken_0x27dc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC64u;
        // 0x27dc68: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc64) {
            ctx->pc = 0x27DC7Cu;
            goto label_27dc7c;
        }
    }
    ctx->pc = 0x27DC6Cu;
label_27dc6c:
    // 0x27dc6c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27dc6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_27dc70:
    // 0x27dc70: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x27dc70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_27dc74:
    // 0x27dc74: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_27dc78:
    if (ctx->pc == 0x27DC78u) {
        ctx->pc = 0x27DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC74u;
        // 0x27dc78: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC7Cu;
        goto label_27dc7c;
    }
    ctx->pc = 0x27DC74u;
    {
        const bool branch_taken_0x27dc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC74u;
        // 0x27dc78: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc74) {
            ctx->pc = 0x27DC8Cu;
            goto label_27dc8c;
        }
    }
    ctx->pc = 0x27DC7Cu;
label_27dc7c:
    // 0x27dc7c: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x27dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_27dc80:
    // 0x27dc80: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x27dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
label_27dc84:
    // 0x27dc84: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_27dc88:
    if (ctx->pc == 0x27DC88u) {
        ctx->pc = 0x27DC8Cu;
        goto label_27dc8c;
    }
    ctx->pc = 0x27DC84u;
    {
        const bool branch_taken_0x27dc84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27dc84) {
            ctx->pc = 0x27DC90u;
            goto label_27dc90;
        }
    }
    ctx->pc = 0x27DC8Cu;
label_27dc8c:
    // 0x27dc8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27dc90:
    // 0x27dc90: 0x14a00072  bnez        $a1, . + 4 + (0x72 << 2)
label_27dc94:
    if (ctx->pc == 0x27DC94u) {
        ctx->pc = 0x27DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC90u;
        // 0x27dc94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC98u;
        goto label_27dc98;
    }
    ctx->pc = 0x27DC90u;
    {
        const bool branch_taken_0x27dc90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC90u;
        // 0x27dc94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc90) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DC98u;
label_27dc98:
    // 0x27dc98: 0xc089b98  jal         func_226E60
label_27dc9c:
    if (ctx->pc == 0x27DC9Cu) {
        ctx->pc = 0x27DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC98u;
        // 0x27dc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCA0u;
        goto label_27dca0;
    }
    ctx->pc = 0x27DC98u;
    SET_GPR_U32(ctx, 31, 0x27DCA0u);
    ctx->pc = 0x27DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC98u;
    // 0x27dc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27DC98u, 0x27DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCA0u;
label_27dca0:
    // 0x27dca0: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_27dca4:
    if (ctx->pc == 0x27DCA4u) {
        ctx->pc = 0x27DCA8u;
        goto label_27dca8;
    }
    ctx->pc = 0x27DCA0u;
    {
        const bool branch_taken_0x27dca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dca0) {
            ctx->pc = 0x27DD90u;
            goto label_27dd90;
        }
    }
    ctx->pc = 0x27DCA8u;
label_27dca8:
    // 0x27dca8: 0xc088ea6  jal         func_223A98
label_27dcac:
    if (ctx->pc == 0x27DCACu) {
        ctx->pc = 0x27DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCA8u;
        // 0x27dcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCB0u;
        goto label_27dcb0;
    }
    ctx->pc = 0x27DCA8u;
    SET_GPR_U32(ctx, 31, 0x27DCB0u);
    ctx->pc = 0x27DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCA8u;
    // 0x27dcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x27DCA8u, 0x27DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCB0u;
label_27dcb0:
    // 0x27dcb0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_27dcb4:
    if (ctx->pc == 0x27DCB4u) {
        ctx->pc = 0x27DCB8u;
        goto label_27dcb8;
    }
    ctx->pc = 0x27DCB0u;
    {
        const bool branch_taken_0x27dcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dcb0) {
            ctx->pc = 0x27DD90u;
            goto label_27dd90;
        }
    }
    ctx->pc = 0x27DCB8u;
label_27dcb8:
    // 0x27dcb8: 0xc09ed52  jal         func_27B548
label_27dcbc:
    if (ctx->pc == 0x27DCBCu) {
        ctx->pc = 0x27DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCB8u;
        // 0x27dcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCC0u;
        goto label_27dcc0;
    }
    ctx->pc = 0x27DCB8u;
    SET_GPR_U32(ctx, 31, 0x27DCC0u);
    ctx->pc = 0x27DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCB8u;
    // 0x27dcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B548u, 0x27DCB8u, 0x27DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCC0u;
label_27dcc0:
    // 0x27dcc0: 0xc089b88  jal         func_226E20
label_27dcc4:
    if (ctx->pc == 0x27DCC4u) {
        ctx->pc = 0x27DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCC0u;
        // 0x27dcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCC8u;
        goto label_27dcc8;
    }
    ctx->pc = 0x27DCC0u;
    SET_GPR_U32(ctx, 31, 0x27DCC8u);
    ctx->pc = 0x27DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCC0u;
    // 0x27dcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E20u, 0x27DCC0u, 0x27DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCC8u;
label_27dcc8:
    // 0x27dcc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27dcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27dccc:
    // 0x27dccc: 0xc0e4060  jal         func_390180
label_27dcd0:
    if (ctx->pc == 0x27DCD0u) {
        ctx->pc = 0x27DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCCCu;
        // 0x27dcd0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCD4u;
        goto label_27dcd4;
    }
    ctx->pc = 0x27DCCCu;
    SET_GPR_U32(ctx, 31, 0x27DCD4u);
    ctx->pc = 0x27DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCCCu;
    // 0x27dcd0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x27DCCCu, 0x27DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCD4u;
label_27dcd4:
    // 0x27dcd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27dcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dcd8:
    // 0x27dcd8: 0xc089b98  jal         func_226E60
label_27dcdc:
    if (ctx->pc == 0x27DCDCu) {
        ctx->pc = 0x27DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCD8u;
        // 0x27dcdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCE0u;
        goto label_27dce0;
    }
    ctx->pc = 0x27DCD8u;
    SET_GPR_U32(ctx, 31, 0x27DCE0u);
    ctx->pc = 0x27DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCD8u;
    // 0x27dcdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27DCD8u, 0x27DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCE0u;
label_27dce0:
    // 0x27dce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27dce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dce4:
    // 0x27dce4: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_27dce8:
    if (ctx->pc == 0x27DCE8u) {
        ctx->pc = 0x27DCECu;
        goto label_27dcec;
    }
    ctx->pc = 0x27DCE4u;
    {
        const bool branch_taken_0x27dce4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dce4) {
            ctx->pc = 0x27DD34u;
            goto label_27dd34;
        }
    }
    ctx->pc = 0x27DCECu;
label_27dcec:
    // 0x27dcec: 0xc08a05a  jal         func_228168
label_27dcf0:
    if (ctx->pc == 0x27DCF0u) {
        ctx->pc = 0x27DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCECu;
        // 0x27dcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCF4u;
        goto label_27dcf4;
    }
    ctx->pc = 0x27DCECu;
    SET_GPR_U32(ctx, 31, 0x27DCF4u);
    ctx->pc = 0x27DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCECu;
    // 0x27dcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x27DCECu, 0x27DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCF4u;
label_27dcf4:
    // 0x27dcf4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_27dcf8:
    if (ctx->pc == 0x27DCF8u) {
        ctx->pc = 0x27DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCF4u;
        // 0x27dcf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCFCu;
        goto label_27dcfc;
    }
    ctx->pc = 0x27DCF4u;
    {
        const bool branch_taken_0x27dcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCF4u;
        // 0x27dcf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcf4) {
            ctx->pc = 0x27DD34u;
            goto label_27dd34;
        }
    }
    ctx->pc = 0x27DCFCu;
label_27dcfc:
    // 0x27dcfc: 0xc08997c  jal         func_2265F0
label_27dd00:
    if (ctx->pc == 0x27DD00u) {
        ctx->pc = 0x27DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCFCu;
        // 0x27dd00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD04u;
        goto label_27dd04;
    }
    ctx->pc = 0x27DCFCu;
    SET_GPR_U32(ctx, 31, 0x27DD04u);
    ctx->pc = 0x27DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCFCu;
    // 0x27dd00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27DCFCu, 0x27DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD04u;
label_27dd04:
    // 0x27dd04: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_27dd08:
    if (ctx->pc == 0x27DD08u) {
        ctx->pc = 0x27DD0Cu;
        goto label_27dd0c;
    }
    ctx->pc = 0x27DD04u;
    {
        const bool branch_taken_0x27dd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dd04) {
            ctx->pc = 0x27DD34u;
            goto label_27dd34;
        }
    }
    ctx->pc = 0x27DD0Cu;
label_27dd0c:
    // 0x27dd0c: 0x3405e003  ori         $a1, $zero, 0xE003
    ctx->pc = 0x27dd0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57347);
label_27dd10:
    // 0x27dd10: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27dd10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_27dd14:
    // 0x27dd14: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x27dd14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
label_27dd18:
    // 0x27dd18: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x27dd18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
label_27dd1c:
    // 0x27dd1c: 0xc08997c  jal         func_2265F0
label_27dd20:
    if (ctx->pc == 0x27DD20u) {
        ctx->pc = 0x27DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD1Cu;
        // 0x27dd20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD24u;
        goto label_27dd24;
    }
    ctx->pc = 0x27DD1Cu;
    SET_GPR_U32(ctx, 31, 0x27DD24u);
    ctx->pc = 0x27DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD1Cu;
    // 0x27dd20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27DD1Cu, 0x27DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD24u;
label_27dd24:
    // 0x27dd24: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_27dd28:
    if (ctx->pc == 0x27DD28u) {
        ctx->pc = 0x27DD2Cu;
        goto label_27dd2c;
    }
    ctx->pc = 0x27DD24u;
    {
        const bool branch_taken_0x27dd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dd24) {
            ctx->pc = 0x27DDF4u;
            goto label_27ddf4;
        }
    }
    ctx->pc = 0x27DD2Cu;
label_27dd2c:
    // 0x27dd2c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_27dd30:
    if (ctx->pc == 0x27DD30u) {
        ctx->pc = 0x27DD34u;
        goto label_27dd34;
    }
    ctx->pc = 0x27DD2Cu;
    {
        const bool branch_taken_0x27dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dd2c) {
            ctx->pc = 0x27DE1Cu;
            goto label_27de1c;
        }
    }
    ctx->pc = 0x27DD34u;
label_27dd34:
    // 0x27dd34: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_27dd38:
    if (ctx->pc == 0x27DD38u) {
        ctx->pc = 0x27DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD34u;
        // 0x27dd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD3Cu;
        goto label_27dd3c;
    }
    ctx->pc = 0x27DD34u;
    {
        const bool branch_taken_0x27dd34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD34u;
        // 0x27dd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd34) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DD3Cu;
label_27dd3c:
    // 0x27dd3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27dd40:
    // 0x27dd40: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x27dd40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_27dd44:
    // 0x27dd44: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_27dd48:
    // 0x27dd48: 0x40f809  jalr        $v0
label_27dd4c:
    if (ctx->pc == 0x27DD4Cu) {
        ctx->pc = 0x27DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD48u;
        // 0x27dd4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD50u;
        goto label_27dd50;
    }
    ctx->pc = 0x27DD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27DD50u);
        ctx->pc = 0x27DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD48u;
        // 0x27dd4c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DD48u, 0x27DD50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DD50u;
label_27dd50:
    // 0x27dd50: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x27dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_27dd54:
    // 0x27dd54: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x27dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_27dd58:
    // 0x27dd58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_27dd5c:
    // 0x27dd5c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_27dd60:
    if (ctx->pc == 0x27DD60u) {
        ctx->pc = 0x27DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD5Cu;
        // 0x27dd60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD64u;
        goto label_27dd64;
    }
    ctx->pc = 0x27DD5Cu;
    {
        const bool branch_taken_0x27dd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD5Cu;
        // 0x27dd60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd5c) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DD64u;
label_27dd64:
    // 0x27dd64: 0xc08a05a  jal         func_228168
label_27dd68:
    if (ctx->pc == 0x27DD68u) {
        ctx->pc = 0x27DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD64u;
        // 0x27dd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD6Cu;
        goto label_27dd6c;
    }
    ctx->pc = 0x27DD64u;
    SET_GPR_U32(ctx, 31, 0x27DD6Cu);
    ctx->pc = 0x27DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD64u;
    // 0x27dd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x27DD64u, 0x27DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD6Cu;
label_27dd6c:
    // 0x27dd6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27dd70:
    if (ctx->pc == 0x27DD70u) {
        ctx->pc = 0x27DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD6Cu;
        // 0x27dd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD74u;
        goto label_27dd74;
    }
    ctx->pc = 0x27DD6Cu;
    {
        const bool branch_taken_0x27dd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD6Cu;
        // 0x27dd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd6c) {
            ctx->pc = 0x27DD80u;
            goto label_27dd80;
        }
    }
    ctx->pc = 0x27DD74u;
label_27dd74:
    // 0x27dd74: 0xc0a0056  jal         func_280158
label_27dd78:
    if (ctx->pc == 0x27DD78u) {
        ctx->pc = 0x27DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD74u;
        // 0x27dd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD7Cu;
        goto label_27dd7c;
    }
    ctx->pc = 0x27DD74u;
    SET_GPR_U32(ctx, 31, 0x27DD7Cu);
    ctx->pc = 0x27DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD74u;
    // 0x27dd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280158u, 0x27DD74u, 0x27DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD7Cu;
label_27dd7c:
    // 0x27dd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27dd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dd80:
    // 0x27dd80: 0xc089974  jal         func_2265D0
label_27dd84:
    if (ctx->pc == 0x27DD84u) {
        ctx->pc = 0x27DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD80u;
        // 0x27dd84: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD88u;
        goto label_27dd88;
    }
    ctx->pc = 0x27DD80u;
    SET_GPR_U32(ctx, 31, 0x27DD88u);
    ctx->pc = 0x27DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD80u;
    // 0x27dd84: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x27DD80u, 0x27DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD88u;
label_27dd88:
    // 0x27dd88: 0x10000034  b           . + 4 + (0x34 << 2)
label_27dd8c:
    if (ctx->pc == 0x27DD8Cu) {
        ctx->pc = 0x27DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD88u;
        // 0x27dd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD90u;
        goto label_27dd90;
    }
    ctx->pc = 0x27DD88u;
    {
        const bool branch_taken_0x27dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD88u;
        // 0x27dd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd88) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DD90u;
label_27dd90:
    // 0x27dd90: 0xc088ea6  jal         func_223A98
label_27dd94:
    if (ctx->pc == 0x27DD94u) {
        ctx->pc = 0x27DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD90u;
        // 0x27dd94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DD98u;
        goto label_27dd98;
    }
    ctx->pc = 0x27DD90u;
    SET_GPR_U32(ctx, 31, 0x27DD98u);
    ctx->pc = 0x27DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DD90u;
    // 0x27dd94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x27DD90u, 0x27DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD98u;
label_27dd98:
    // 0x27dd98: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_27dd9c:
    if (ctx->pc == 0x27DD9Cu) {
        ctx->pc = 0x27DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD98u;
        // 0x27dd9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DDA0u;
        goto label_27dda0;
    }
    ctx->pc = 0x27DD98u;
    {
        const bool branch_taken_0x27dd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DD98u;
        // 0x27dd9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd98) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DDA0u;
label_27dda0:
    // 0x27dda0: 0xc089b98  jal         func_226E60
label_27dda4:
    if (ctx->pc == 0x27DDA4u) {
        ctx->pc = 0x27DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDA0u;
        // 0x27dda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DDA8u;
        goto label_27dda8;
    }
    ctx->pc = 0x27DDA0u;
    SET_GPR_U32(ctx, 31, 0x27DDA8u);
    ctx->pc = 0x27DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DDA0u;
    // 0x27dda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27DDA0u, 0x27DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDA8u;
label_27dda8:
    // 0x27dda8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27dda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ddac:
    // 0x27ddac: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_27ddb0:
    if (ctx->pc == 0x27DDB0u) {
        ctx->pc = 0x27DDB4u;
        goto label_27ddb4;
    }
    ctx->pc = 0x27DDACu;
    {
        const bool branch_taken_0x27ddac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ddac) {
            ctx->pc = 0x27DE34u;
            goto label_27de34;
        }
    }
    ctx->pc = 0x27DDB4u;
label_27ddb4:
    // 0x27ddb4: 0xc08a05a  jal         func_228168
label_27ddb8:
    if (ctx->pc == 0x27DDB8u) {
        ctx->pc = 0x27DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDB4u;
        // 0x27ddb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DDBCu;
        goto label_27ddbc;
    }
    ctx->pc = 0x27DDB4u;
    SET_GPR_U32(ctx, 31, 0x27DDBCu);
    ctx->pc = 0x27DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DDB4u;
    // 0x27ddb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x27DDB4u, 0x27DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDBCu;
label_27ddbc:
    // 0x27ddbc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_27ddc0:
    if (ctx->pc == 0x27DDC0u) {
        ctx->pc = 0x27DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDBCu;
        // 0x27ddc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DDC4u;
        goto label_27ddc4;
    }
    ctx->pc = 0x27DDBCu;
    {
        const bool branch_taken_0x27ddbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDBCu;
        // 0x27ddc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddbc) {
            ctx->pc = 0x27DE34u;
            goto label_27de34;
        }
    }
    ctx->pc = 0x27DDC4u;
label_27ddc4:
    // 0x27ddc4: 0xc08997c  jal         func_2265F0
label_27ddc8:
    if (ctx->pc == 0x27DDC8u) {
        ctx->pc = 0x27DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDC4u;
        // 0x27ddc8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DDCCu;
        goto label_27ddcc;
    }
    ctx->pc = 0x27DDC4u;
    SET_GPR_U32(ctx, 31, 0x27DDCCu);
    ctx->pc = 0x27DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DDC4u;
    // 0x27ddc8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27DDC4u, 0x27DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDCCu;
label_27ddcc:
    // 0x27ddcc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_27ddd0:
    if (ctx->pc == 0x27DDD0u) {
        ctx->pc = 0x27DDD4u;
        goto label_27ddd4;
    }
    ctx->pc = 0x27DDCCu;
    {
        const bool branch_taken_0x27ddcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ddcc) {
            ctx->pc = 0x27DE34u;
            goto label_27de34;
        }
    }
    ctx->pc = 0x27DDD4u;
label_27ddd4:
    // 0x27ddd4: 0x3405e003  ori         $a1, $zero, 0xE003
    ctx->pc = 0x27ddd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57347);
label_27ddd8:
    // 0x27ddd8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27ddd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_27dddc:
    // 0x27dddc: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x27dddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
label_27dde0:
    // 0x27dde0: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x27dde0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
label_27dde4:
    // 0x27dde4: 0xc08997c  jal         func_2265F0
label_27dde8:
    if (ctx->pc == 0x27DDE8u) {
        ctx->pc = 0x27DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDE4u;
        // 0x27dde8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DDECu;
        goto label_27ddec;
    }
    ctx->pc = 0x27DDE4u;
    SET_GPR_U32(ctx, 31, 0x27DDECu);
    ctx->pc = 0x27DDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DDE4u;
    // 0x27dde8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27DDE4u, 0x27DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDECu;
label_27ddec:
    // 0x27ddec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27ddf0:
    if (ctx->pc == 0x27DDF0u) {
        ctx->pc = 0x27DDF4u;
        goto label_27ddf4;
    }
    ctx->pc = 0x27DDECu;
    {
        const bool branch_taken_0x27ddec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ddec) {
            ctx->pc = 0x27DE04u;
            goto label_27de04;
        }
    }
    ctx->pc = 0x27DDF4u;
label_27ddf4:
    // 0x27ddf4: 0xc089bdc  jal         func_226F70
label_27ddf8:
    if (ctx->pc == 0x27DDF8u) {
        ctx->pc = 0x27DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDF4u;
        // 0x27ddf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DDFCu;
        goto label_27ddfc;
    }
    ctx->pc = 0x27DDF4u;
    SET_GPR_U32(ctx, 31, 0x27DDFCu);
    ctx->pc = 0x27DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DDF4u;
    // 0x27ddf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x27DDF4u, 0x27DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DDFCu;
label_27ddfc:
    // 0x27ddfc: 0x10000017  b           . + 4 + (0x17 << 2)
label_27de00:
    if (ctx->pc == 0x27DE00u) {
        ctx->pc = 0x27DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDFCu;
        // 0x27de00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE04u;
        goto label_27de04;
    }
    ctx->pc = 0x27DDFCu;
    {
        const bool branch_taken_0x27ddfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DDFCu;
        // 0x27de00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddfc) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DE04u;
label_27de04:
    // 0x27de04: 0xc08a05a  jal         func_228168
label_27de08:
    if (ctx->pc == 0x27DE08u) {
        ctx->pc = 0x27DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE04u;
        // 0x27de08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE0Cu;
        goto label_27de0c;
    }
    ctx->pc = 0x27DE04u;
    SET_GPR_U32(ctx, 31, 0x27DE0Cu);
    ctx->pc = 0x27DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE04u;
    // 0x27de08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x27DE04u, 0x27DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE0Cu;
label_27de0c:
    // 0x27de0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27de10:
    if (ctx->pc == 0x27DE10u) {
        ctx->pc = 0x27DE14u;
        goto label_27de14;
    }
    ctx->pc = 0x27DE0Cu;
    {
        const bool branch_taken_0x27de0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27de0c) {
            ctx->pc = 0x27DE1Cu;
            goto label_27de1c;
        }
    }
    ctx->pc = 0x27DE14u;
label_27de14:
    // 0x27de14: 0xc0a0056  jal         func_280158
label_27de18:
    if (ctx->pc == 0x27DE18u) {
        ctx->pc = 0x27DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE14u;
        // 0x27de18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE1Cu;
        goto label_27de1c;
    }
    ctx->pc = 0x27DE14u;
    SET_GPR_U32(ctx, 31, 0x27DE1Cu);
    ctx->pc = 0x27DE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE14u;
    // 0x27de18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280158u, 0x27DE14u, 0x27DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE1Cu;
label_27de1c:
    // 0x27de1c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x27de1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_27de20:
    // 0x27de20: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x27de20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_27de24:
    // 0x27de24: 0xc089974  jal         func_2265D0
label_27de28:
    if (ctx->pc == 0x27DE28u) {
        ctx->pc = 0x27DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE24u;
        // 0x27de28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE2Cu;
        goto label_27de2c;
    }
    ctx->pc = 0x27DE24u;
    SET_GPR_U32(ctx, 31, 0x27DE2Cu);
    ctx->pc = 0x27DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE24u;
    // 0x27de28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x27DE24u, 0x27DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE2Cu;
label_27de2c:
    // 0x27de2c: 0x1000000b  b           . + 4 + (0xB << 2)
label_27de30:
    if (ctx->pc == 0x27DE30u) {
        ctx->pc = 0x27DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE2Cu;
        // 0x27de30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE34u;
        goto label_27de34;
    }
    ctx->pc = 0x27DE2Cu;
    {
        const bool branch_taken_0x27de2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE2Cu;
        // 0x27de30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de2c) {
            ctx->pc = 0x27DE5Cu;
            goto label_27de5c;
        }
    }
    ctx->pc = 0x27DE34u;
label_27de34:
    // 0x27de34: 0xc08a05a  jal         func_228168
label_27de38:
    if (ctx->pc == 0x27DE38u) {
        ctx->pc = 0x27DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE34u;
        // 0x27de38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE3Cu;
        goto label_27de3c;
    }
    ctx->pc = 0x27DE34u;
    SET_GPR_U32(ctx, 31, 0x27DE3Cu);
    ctx->pc = 0x27DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE34u;
    // 0x27de38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x27DE34u, 0x27DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE3Cu;
label_27de3c:
    // 0x27de3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27de40:
    if (ctx->pc == 0x27DE40u) {
        ctx->pc = 0x27DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE3Cu;
        // 0x27de40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE44u;
        goto label_27de44;
    }
    ctx->pc = 0x27DE3Cu;
    {
        const bool branch_taken_0x27de3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE3Cu;
        // 0x27de40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de3c) {
            ctx->pc = 0x27DE50u;
            goto label_27de50;
        }
    }
    ctx->pc = 0x27DE44u;
label_27de44:
    // 0x27de44: 0xc0a0056  jal         func_280158
label_27de48:
    if (ctx->pc == 0x27DE48u) {
        ctx->pc = 0x27DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE44u;
        // 0x27de48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE4Cu;
        goto label_27de4c;
    }
    ctx->pc = 0x27DE44u;
    SET_GPR_U32(ctx, 31, 0x27DE4Cu);
    ctx->pc = 0x27DE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE44u;
    // 0x27de48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280158u, 0x27DE44u, 0x27DE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE4Cu;
label_27de4c:
    // 0x27de4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27de4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27de50:
    // 0x27de50: 0xc089974  jal         func_2265D0
label_27de54:
    if (ctx->pc == 0x27DE54u) {
        ctx->pc = 0x27DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE50u;
        // 0x27de54: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE58u;
        goto label_27de58;
    }
    ctx->pc = 0x27DE50u;
    SET_GPR_U32(ctx, 31, 0x27DE58u);
    ctx->pc = 0x27DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE50u;
    // 0x27de54: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x27DE50u, 0x27DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE58u;
label_27de58:
    // 0x27de58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27de58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27de5c:
    // 0x27de5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x27de5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27de60:
    // 0x27de60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x27de60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27de64:
    // 0x27de64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27de64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27de68:
    // 0x27de68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27de68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27de6c:
    // 0x27de6c: 0x3e00008  jr          $ra
label_27de70:
    if (ctx->pc == 0x27DE70u) {
        ctx->pc = 0x27DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE6Cu;
        // 0x27de70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DE74u;
        goto label_27de74;
    }
    ctx->pc = 0x27DE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE6Cu;
        // 0x27de70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DE74u;
label_27de74:
    // 0x27de74: 0x0  nop
    ctx->pc = 0x27de74u;
    // NOP
    ctx->pc = 0x27de78u;
}
