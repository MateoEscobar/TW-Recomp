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

// Function: sub_0015DBB8
// Address: 0x15dbb8 - 0x15dd10
void sub_0015DBB8_0x15dbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DBB8_0x15dbb8");
#endif

    switch (ctx->pc) {
        case 0x15dbb8u: goto label_15dbb8;
        case 0x15dbbcu: goto label_15dbbc;
        case 0x15dbc0u: goto label_15dbc0;
        case 0x15dbc4u: goto label_15dbc4;
        case 0x15dbc8u: goto label_15dbc8;
        case 0x15dbccu: goto label_15dbcc;
        case 0x15dbd0u: goto label_15dbd0;
        case 0x15dbd4u: goto label_15dbd4;
        case 0x15dbd8u: goto label_15dbd8;
        case 0x15dbdcu: goto label_15dbdc;
        case 0x15dbe0u: goto label_15dbe0;
        case 0x15dbe4u: goto label_15dbe4;
        case 0x15dbe8u: goto label_15dbe8;
        case 0x15dbecu: goto label_15dbec;
        case 0x15dbf0u: goto label_15dbf0;
        case 0x15dbf4u: goto label_15dbf4;
        case 0x15dbf8u: goto label_15dbf8;
        case 0x15dbfcu: goto label_15dbfc;
        case 0x15dc00u: goto label_15dc00;
        case 0x15dc04u: goto label_15dc04;
        case 0x15dc08u: goto label_15dc08;
        case 0x15dc0cu: goto label_15dc0c;
        case 0x15dc10u: goto label_15dc10;
        case 0x15dc14u: goto label_15dc14;
        case 0x15dc18u: goto label_15dc18;
        case 0x15dc1cu: goto label_15dc1c;
        case 0x15dc20u: goto label_15dc20;
        case 0x15dc24u: goto label_15dc24;
        case 0x15dc28u: goto label_15dc28;
        case 0x15dc2cu: goto label_15dc2c;
        case 0x15dc30u: goto label_15dc30;
        case 0x15dc34u: goto label_15dc34;
        case 0x15dc38u: goto label_15dc38;
        case 0x15dc3cu: goto label_15dc3c;
        case 0x15dc40u: goto label_15dc40;
        case 0x15dc44u: goto label_15dc44;
        case 0x15dc48u: goto label_15dc48;
        case 0x15dc4cu: goto label_15dc4c;
        case 0x15dc50u: goto label_15dc50;
        case 0x15dc54u: goto label_15dc54;
        case 0x15dc58u: goto label_15dc58;
        case 0x15dc5cu: goto label_15dc5c;
        case 0x15dc60u: goto label_15dc60;
        case 0x15dc64u: goto label_15dc64;
        case 0x15dc68u: goto label_15dc68;
        case 0x15dc6cu: goto label_15dc6c;
        case 0x15dc70u: goto label_15dc70;
        case 0x15dc74u: goto label_15dc74;
        case 0x15dc78u: goto label_15dc78;
        case 0x15dc7cu: goto label_15dc7c;
        case 0x15dc80u: goto label_15dc80;
        case 0x15dc84u: goto label_15dc84;
        case 0x15dc88u: goto label_15dc88;
        case 0x15dc8cu: goto label_15dc8c;
        case 0x15dc90u: goto label_15dc90;
        case 0x15dc94u: goto label_15dc94;
        case 0x15dc98u: goto label_15dc98;
        case 0x15dc9cu: goto label_15dc9c;
        case 0x15dca0u: goto label_15dca0;
        case 0x15dca4u: goto label_15dca4;
        case 0x15dca8u: goto label_15dca8;
        case 0x15dcacu: goto label_15dcac;
        case 0x15dcb0u: goto label_15dcb0;
        case 0x15dcb4u: goto label_15dcb4;
        case 0x15dcb8u: goto label_15dcb8;
        case 0x15dcbcu: goto label_15dcbc;
        case 0x15dcc0u: goto label_15dcc0;
        case 0x15dcc4u: goto label_15dcc4;
        case 0x15dcc8u: goto label_15dcc8;
        case 0x15dcccu: goto label_15dccc;
        case 0x15dcd0u: goto label_15dcd0;
        case 0x15dcd4u: goto label_15dcd4;
        case 0x15dcd8u: goto label_15dcd8;
        case 0x15dcdcu: goto label_15dcdc;
        case 0x15dce0u: goto label_15dce0;
        case 0x15dce4u: goto label_15dce4;
        case 0x15dce8u: goto label_15dce8;
        case 0x15dcecu: goto label_15dcec;
        case 0x15dcf0u: goto label_15dcf0;
        case 0x15dcf4u: goto label_15dcf4;
        case 0x15dcf8u: goto label_15dcf8;
        case 0x15dcfcu: goto label_15dcfc;
        case 0x15dd00u: goto label_15dd00;
        case 0x15dd04u: goto label_15dd04;
        case 0x15dd08u: goto label_15dd08;
        case 0x15dd0cu: goto label_15dd0c;
        default: break;
    }

    ctx->pc = 0x15dbb8u;

label_15dbb8:
    // 0x15dbb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15dbbc:
    // 0x15dbbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15dbc0:
    // 0x15dbc0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x15dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_15dbc4:
    // 0x15dbc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15dbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15dbc8:
    // 0x15dbc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15dbcc:
    // 0x15dbcc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x15dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_15dbd0:
    // 0x15dbd0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x15dbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_15dbd4:
    // 0x15dbd4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x15dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_15dbd8:
    // 0x15dbd8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x15dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_15dbdc:
    // 0x15dbdc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x15dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_15dbe0:
    // 0x15dbe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15dbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15dbe4:
    // 0x15dbe4: 0xc107444  jal         func_41D110
label_15dbe8:
    if (ctx->pc == 0x15DBE8u) {
        ctx->pc = 0x15DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBE4u;
        // 0x15dbe8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBECu;
        goto label_15dbec;
    }
    ctx->pc = 0x15DBE4u;
    SET_GPR_U32(ctx, 31, 0x15DBECu);
    ctx->pc = 0x15DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBE4u;
    // 0x15dbe8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x15DBE4u, 0x15DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBECu;
label_15dbec:
    // 0x15dbec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15dbf0:
    if (ctx->pc == 0x15DBF0u) {
        ctx->pc = 0x15DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBECu;
        // 0x15dbf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBF4u;
        goto label_15dbf4;
    }
    ctx->pc = 0x15DBECu;
    {
        const bool branch_taken_0x15dbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBECu;
        // 0x15dbf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dbec) {
            ctx->pc = 0x15DBFCu;
            goto label_15dbfc;
        }
    }
    ctx->pc = 0x15DBF4u;
label_15dbf4:
    // 0x15dbf4: 0x10000003  b           . + 4 + (0x3 << 2)
label_15dbf8:
    if (ctx->pc == 0x15DBF8u) {
        ctx->pc = 0x15DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBF4u;
        // 0x15dbf8: 0x8c43ec34  lw          $v1, -0x13CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBFCu;
        goto label_15dbfc;
    }
    ctx->pc = 0x15DBF4u;
    {
        const bool branch_taken_0x15dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBF4u;
        // 0x15dbf8: 0x8c43ec34  lw          $v1, -0x13CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dbf4) {
            ctx->pc = 0x15DC04u;
            goto label_15dc04;
        }
    }
    ctx->pc = 0x15DBFCu;
label_15dbfc:
    // 0x15dbfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15dc00:
    // 0x15dc00: 0x8c43eddc  lw          $v1, -0x1224($v0)
    ctx->pc = 0x15dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_15dc04:
    // 0x15dc04: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x15dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_15dc08:
    // 0x15dc08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15dc0c:
    // 0x15dc0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc10:
    // 0x15dc10: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15dc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_15dc14:
    // 0x15dc14: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15dc14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15dc18:
    // 0x15dc18: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15dc18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15dc1c:
    // 0x15dc1c: 0xc0e8b20  jal         func_3A2C80
label_15dc20:
    if (ctx->pc == 0x15DC20u) {
        ctx->pc = 0x15DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC1Cu;
        // 0x15dc20: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC24u;
        goto label_15dc24;
    }
    ctx->pc = 0x15DC1Cu;
    SET_GPR_U32(ctx, 31, 0x15DC24u);
    ctx->pc = 0x15DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC1Cu;
    // 0x15dc20: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15DC1Cu, 0x15DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC24u;
label_15dc24:
    // 0x15dc24: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x15dc24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc28:
    // 0x15dc28: 0x8e02b8b8  lw          $v0, -0x4748($s0)
    ctx->pc = 0x15dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_15dc2c:
    // 0x15dc2c: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x15dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_15dc30:
    // 0x15dc30: 0x2650002c  addiu       $s0, $s2, 0x2C
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_15dc34:
    // 0x15dc34: 0xc043ec8  jal         func_10FB20
label_15dc38:
    if (ctx->pc == 0x15DC38u) {
        ctx->pc = 0x15DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC34u;
        // 0x15dc38: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC3Cu;
        goto label_15dc3c;
    }
    ctx->pc = 0x15DC34u;
    SET_GPR_U32(ctx, 31, 0x15DC3Cu);
    ctx->pc = 0x15DC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC34u;
    // 0x15dc38: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB20u, 0x15DC34u, 0x15DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC3Cu;
label_15dc3c:
    // 0x15dc3c: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x15dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_15dc40:
    // 0x15dc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc44:
    // 0x15dc44: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15dc48:
    // 0x15dc48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15dc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dc4c:
    // 0x15dc4c: 0xa08256e0  sb          $v0, 0x56E0($a0)
    ctx->pc = 0x15dc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22240), (uint8_t)GPR_U32(ctx, 2));
label_15dc50:
    // 0x15dc50: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x15dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_15dc54:
    // 0x15dc54: 0x0  nop
    ctx->pc = 0x15dc54u;
    // NOP
label_15dc58:
    // 0x15dc58: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15dc5c:
    // 0x15dc5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15dc60:
    if (ctx->pc == 0x15DC60u) {
        ctx->pc = 0x15DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC5Cu;
        // 0x15dc60: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC64u;
        goto label_15dc64;
    }
    ctx->pc = 0x15DC5Cu;
    {
        const bool branch_taken_0x15dc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC5Cu;
        // 0x15dc60: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc5c) {
            ctx->pc = 0x15DC6Cu;
            goto label_15dc6c;
        }
    }
    ctx->pc = 0x15DC64u;
label_15dc64:
    // 0x15dc64: 0xa0600041  sb          $zero, 0x41($v1)
    ctx->pc = 0x15dc64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 0));
label_15dc68:
    // 0x15dc68: 0xa0600040  sb          $zero, 0x40($v1)
    ctx->pc = 0x15dc68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 0));
label_15dc6c:
    // 0x15dc6c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x15dc6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_15dc70:
    // 0x15dc70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_15dc74:
    if (ctx->pc == 0x15DC74u) {
        ctx->pc = 0x15DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC70u;
        // 0x15dc74: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC78u;
        goto label_15dc78;
    }
    ctx->pc = 0x15DC70u;
    {
        const bool branch_taken_0x15dc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC70u;
        // 0x15dc74: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc70) {
            ctx->pc = 0x15DC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dc58;
        }
    }
    ctx->pc = 0x15DC78u;
label_15dc78:
    // 0x15dc78: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x15dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_15dc7c:
    // 0x15dc7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15dc80:
    // 0x15dc80: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x15dc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15dc84:
    // 0x15dc84: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x15dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15dc88:
    // 0x15dc88: 0x60f809  jalr        $v1
label_15dc8c:
    if (ctx->pc == 0x15DC8Cu) {
        ctx->pc = 0x15DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC88u;
        // 0x15dc8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC90u;
        goto label_15dc90;
    }
    ctx->pc = 0x15DC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DC90u);
        ctx->pc = 0x15DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC88u;
        // 0x15dc8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DC88u, 0x15DC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DC90u;
label_15dc90:
    // 0x15dc90: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
label_15dc94:
    // 0x15dc94: 0xc04456a  jal         func_1115A8
label_15dc98:
    if (ctx->pc == 0x15DC98u) {
        ctx->pc = 0x15DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC94u;
        // 0x15dc98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC9Cu;
        goto label_15dc9c;
    }
    ctx->pc = 0x15DC94u;
    SET_GPR_U32(ctx, 31, 0x15DC9Cu);
    ctx->pc = 0x15DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC94u;
    // 0x15dc98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A8u, 0x15DC94u, 0x15DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC9Cu;
label_15dc9c:
    // 0x15dc9c: 0x8ea5b8b8  lw          $a1, -0x4748($s5)
    ctx->pc = 0x15dc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949048)));
label_15dca0:
    // 0x15dca0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15dca4:
    // 0x15dca4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15dca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15dca8:
    // 0x15dca8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15dcac:
    // 0x15dcac: 0x40f809  jalr        $v0
label_15dcb0:
    if (ctx->pc == 0x15DCB0u) {
        ctx->pc = 0x15DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCACu;
        // 0x15dcb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DCB4u;
        goto label_15dcb4;
    }
    ctx->pc = 0x15DCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15DCB4u);
        ctx->pc = 0x15DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCACu;
        // 0x15dcb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DCACu, 0x15DCB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DCB4u;
label_15dcb4:
    // 0x15dcb4: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x15dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_15dcb8:
    // 0x15dcb8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15dcbc:
    // 0x15dcbc: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_15dcc0:
    // 0x15dcc0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15dcc4:
    // 0x15dcc4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_15dcc8:
    // 0x15dcc8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x15dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15dccc:
    // 0x15dccc: 0x40f809  jalr        $v0
label_15dcd0:
    if (ctx->pc == 0x15DCD0u) {
        ctx->pc = 0x15DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCCCu;
        // 0x15dcd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DCD4u;
        goto label_15dcd4;
    }
    ctx->pc = 0x15DCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15DCD4u);
        ctx->pc = 0x15DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCCCu;
        // 0x15dcd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DCCCu, 0x15DCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DCD4u;
label_15dcd4:
    // 0x15dcd4: 0x8e84aa84  lw          $a0, -0x557C($s4)
    ctx->pc = 0x15dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945412)));
label_15dcd8:
    // 0x15dcd8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15dcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_15dcdc:
    // 0x15dcdc: 0x24a5f778  addiu       $a1, $a1, -0x888
    ctx->pc = 0x15dcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965112));
label_15dce0:
    // 0x15dce0: 0xc043e94  jal         func_10FA50
label_15dce4:
    if (ctx->pc == 0x15DCE4u) {
        ctx->pc = 0x15DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCE0u;
        // 0x15dce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DCE8u;
        goto label_15dce8;
    }
    ctx->pc = 0x15DCE0u;
    SET_GPR_U32(ctx, 31, 0x15DCE8u);
    ctx->pc = 0x15DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCE0u;
    // 0x15dce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15DCE0u, 0x15DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCE8u;
label_15dce8:
    // 0x15dce8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x15dce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15dcec:
    // 0x15dcec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x15dcecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15dcf0:
    // 0x15dcf0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x15dcf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15dcf4:
    // 0x15dcf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15dcf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15dcf8:
    // 0x15dcf8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x15dcf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15dcfc:
    // 0x15dcfc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x15dcfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15dd00:
    // 0x15dd00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15dd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15dd04:
    // 0x15dd04: 0x3e00008  jr          $ra
label_15dd08:
    if (ctx->pc == 0x15DD08u) {
        ctx->pc = 0x15DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD04u;
        // 0x15dd08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD0Cu;
        goto label_15dd0c;
    }
    ctx->pc = 0x15DD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD04u;
        // 0x15dd08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DD0Cu;
label_15dd0c:
    // 0x15dd0c: 0x0  nop
    ctx->pc = 0x15dd0cu;
    // NOP
    ctx->pc = 0x15dd10u;
}
