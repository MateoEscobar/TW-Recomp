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

// Function: sub_003CDB90
// Address: 0x3cdb90 - 0x3cdca8
void sub_003CDB90_0x3cdb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDB90_0x3cdb90");
#endif

    switch (ctx->pc) {
        case 0x3cdb90u: goto label_3cdb90;
        case 0x3cdb94u: goto label_3cdb94;
        case 0x3cdb98u: goto label_3cdb98;
        case 0x3cdb9cu: goto label_3cdb9c;
        case 0x3cdba0u: goto label_3cdba0;
        case 0x3cdba4u: goto label_3cdba4;
        case 0x3cdba8u: goto label_3cdba8;
        case 0x3cdbacu: goto label_3cdbac;
        case 0x3cdbb0u: goto label_3cdbb0;
        case 0x3cdbb4u: goto label_3cdbb4;
        case 0x3cdbb8u: goto label_3cdbb8;
        case 0x3cdbbcu: goto label_3cdbbc;
        case 0x3cdbc0u: goto label_3cdbc0;
        case 0x3cdbc4u: goto label_3cdbc4;
        case 0x3cdbc8u: goto label_3cdbc8;
        case 0x3cdbccu: goto label_3cdbcc;
        case 0x3cdbd0u: goto label_3cdbd0;
        case 0x3cdbd4u: goto label_3cdbd4;
        case 0x3cdbd8u: goto label_3cdbd8;
        case 0x3cdbdcu: goto label_3cdbdc;
        case 0x3cdbe0u: goto label_3cdbe0;
        case 0x3cdbe4u: goto label_3cdbe4;
        case 0x3cdbe8u: goto label_3cdbe8;
        case 0x3cdbecu: goto label_3cdbec;
        case 0x3cdbf0u: goto label_3cdbf0;
        case 0x3cdbf4u: goto label_3cdbf4;
        case 0x3cdbf8u: goto label_3cdbf8;
        case 0x3cdbfcu: goto label_3cdbfc;
        case 0x3cdc00u: goto label_3cdc00;
        case 0x3cdc04u: goto label_3cdc04;
        case 0x3cdc08u: goto label_3cdc08;
        case 0x3cdc0cu: goto label_3cdc0c;
        case 0x3cdc10u: goto label_3cdc10;
        case 0x3cdc14u: goto label_3cdc14;
        case 0x3cdc18u: goto label_3cdc18;
        case 0x3cdc1cu: goto label_3cdc1c;
        case 0x3cdc20u: goto label_3cdc20;
        case 0x3cdc24u: goto label_3cdc24;
        case 0x3cdc28u: goto label_3cdc28;
        case 0x3cdc2cu: goto label_3cdc2c;
        case 0x3cdc30u: goto label_3cdc30;
        case 0x3cdc34u: goto label_3cdc34;
        case 0x3cdc38u: goto label_3cdc38;
        case 0x3cdc3cu: goto label_3cdc3c;
        case 0x3cdc40u: goto label_3cdc40;
        case 0x3cdc44u: goto label_3cdc44;
        case 0x3cdc48u: goto label_3cdc48;
        case 0x3cdc4cu: goto label_3cdc4c;
        case 0x3cdc50u: goto label_3cdc50;
        case 0x3cdc54u: goto label_3cdc54;
        case 0x3cdc58u: goto label_3cdc58;
        case 0x3cdc5cu: goto label_3cdc5c;
        case 0x3cdc60u: goto label_3cdc60;
        case 0x3cdc64u: goto label_3cdc64;
        case 0x3cdc68u: goto label_3cdc68;
        case 0x3cdc6cu: goto label_3cdc6c;
        case 0x3cdc70u: goto label_3cdc70;
        case 0x3cdc74u: goto label_3cdc74;
        case 0x3cdc78u: goto label_3cdc78;
        case 0x3cdc7cu: goto label_3cdc7c;
        case 0x3cdc80u: goto label_3cdc80;
        case 0x3cdc84u: goto label_3cdc84;
        case 0x3cdc88u: goto label_3cdc88;
        case 0x3cdc8cu: goto label_3cdc8c;
        case 0x3cdc90u: goto label_3cdc90;
        case 0x3cdc94u: goto label_3cdc94;
        case 0x3cdc98u: goto label_3cdc98;
        case 0x3cdc9cu: goto label_3cdc9c;
        case 0x3cdca0u: goto label_3cdca0;
        case 0x3cdca4u: goto label_3cdca4;
        default: break;
    }

    ctx->pc = 0x3cdb90u;

label_3cdb90:
    // 0x3cdb90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3cdb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3cdb94:
    // 0x3cdb94: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3cdb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3cdb98:
    // 0x3cdb98: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3cdb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3cdb9c:
    // 0x3cdb9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cdb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cdba0:
    // 0x3cdba0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3cdba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3cdba4:
    // 0x3cdba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cdba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cdba8:
    // 0x3cdba8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cdba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cdbac:
    // 0x3cdbac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3cdbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cdbb0:
    // 0x3cdbb0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cdbb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cdbb4:
    // 0x3cdbb4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cdbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cdbb8:
    // 0x3cdbb8: 0x40f809  jalr        $v0
label_3cdbbc:
    if (ctx->pc == 0x3CDBBCu) {
        ctx->pc = 0x3CDBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBB8u;
        // 0x3cdbbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDBC0u;
        goto label_3cdbc0;
    }
    ctx->pc = 0x3CDBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDBC0u);
        ctx->pc = 0x3CDBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBB8u;
        // 0x3cdbbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDBB8u, 0x3CDBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDBC0u;
label_3cdbc0:
    // 0x3cdbc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cdbc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cdbc4:
    // 0x3cdbc4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3cdbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3cdbc8:
    // 0x3cdbc8: 0xc0e858c  jal         func_3A1630
label_3cdbcc:
    if (ctx->pc == 0x3CDBCCu) {
        ctx->pc = 0x3CDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBC8u;
        // 0x3cdbcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDBD0u;
        goto label_3cdbd0;
    }
    ctx->pc = 0x3CDBC8u;
    SET_GPR_U32(ctx, 31, 0x3CDBD0u);
    ctx->pc = 0x3CDBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDBC8u;
    // 0x3cdbcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CDBC8u, 0x3CDBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDBD0u;
label_3cdbd0:
    // 0x3cdbd0: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x3cdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3cdbd4:
    // 0x3cdbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cdbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cdbd8:
    // 0x3cdbd8: 0xc0ea14c  jal         func_3A8530
label_3cdbdc:
    if (ctx->pc == 0x3CDBDCu) {
        ctx->pc = 0x3CDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBD8u;
        // 0x3cdbdc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDBE0u;
        goto label_3cdbe0;
    }
    ctx->pc = 0x3CDBD8u;
    SET_GPR_U32(ctx, 31, 0x3CDBE0u);
    ctx->pc = 0x3CDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDBD8u;
    // 0x3cdbdc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CDBD8u, 0x3CDBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDBE0u;
label_3cdbe0:
    // 0x3cdbe0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cdbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cdbe4:
    // 0x3cdbe4: 0xc0ea12a  jal         func_3A84A8
label_3cdbe8:
    if (ctx->pc == 0x3CDBE8u) {
        ctx->pc = 0x3CDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBE4u;
        // 0x3cdbe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDBECu;
        goto label_3cdbec;
    }
    ctx->pc = 0x3CDBE4u;
    SET_GPR_U32(ctx, 31, 0x3CDBECu);
    ctx->pc = 0x3CDBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDBE4u;
    // 0x3cdbe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CDBE4u, 0x3CDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDBECu;
label_3cdbec:
    // 0x3cdbec: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cdbecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cdbf0:
    // 0x3cdbf0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cdbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cdbf4:
    // 0x3cdbf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cdbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cdbf8:
    // 0x3cdbf8: 0xc0ea12a  jal         func_3A84A8
label_3cdbfc:
    if (ctx->pc == 0x3CDBFCu) {
        ctx->pc = 0x3CDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBF8u;
        // 0x3cdbfc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC00u;
        goto label_3cdc00;
    }
    ctx->pc = 0x3CDBF8u;
    SET_GPR_U32(ctx, 31, 0x3CDC00u);
    ctx->pc = 0x3CDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDBF8u;
    // 0x3cdbfc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CDBF8u, 0x3CDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC00u;
label_3cdc00:
    // 0x3cdc00: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cdc00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cdc04:
    // 0x3cdc04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cdc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc08:
    // 0x3cdc08: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3cdc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3cdc0c:
    // 0x3cdc0c: 0xc0e858c  jal         func_3A1630
label_3cdc10:
    if (ctx->pc == 0x3CDC10u) {
        ctx->pc = 0x3CDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC0Cu;
        // 0x3cdc10: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC14u;
        goto label_3cdc14;
    }
    ctx->pc = 0x3CDC0Cu;
    SET_GPR_U32(ctx, 31, 0x3CDC14u);
    ctx->pc = 0x3CDC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC0Cu;
    // 0x3cdc10: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CDC0Cu, 0x3CDC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC14u;
label_3cdc14:
    // 0x3cdc14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cdc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc18:
    // 0x3cdc18: 0xc0e9132  jal         func_3A44C8
label_3cdc1c:
    if (ctx->pc == 0x3CDC1Cu) {
        ctx->pc = 0x3CDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC18u;
        // 0x3cdc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC20u;
        goto label_3cdc20;
    }
    ctx->pc = 0x3CDC18u;
    SET_GPR_U32(ctx, 31, 0x3CDC20u);
    ctx->pc = 0x3CDC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC18u;
    // 0x3cdc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3CDC18u, 0x3CDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC20u;
label_3cdc20:
    // 0x3cdc20: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3cdc20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cdc24:
    // 0x3cdc24: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3cdc24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3cdc28:
    // 0x3cdc28: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3cdc28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cdc2c:
    // 0x3cdc2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3cdc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cdc30:
    // 0x3cdc30: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3cdc30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3cdc34:
    // 0x3cdc34: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3cdc34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3cdc38:
    // 0x3cdc38: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3cdc38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3cdc3c:
    // 0x3cdc3c: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x3cdc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_3cdc40:
    // 0x3cdc40: 0xc1073cc  jal         func_41CF30
label_3cdc44:
    if (ctx->pc == 0x3CDC44u) {
        ctx->pc = 0x3CDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC40u;
        // 0x3cdc44: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC48u;
        goto label_3cdc48;
    }
    ctx->pc = 0x3CDC40u;
    SET_GPR_U32(ctx, 31, 0x3CDC48u);
    ctx->pc = 0x3CDC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC40u;
    // 0x3cdc44: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3CDC40u, 0x3CDC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC48u;
label_3cdc48:
    // 0x3cdc48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cdc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3cdc4c:
    // 0x3cdc4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3cdc50:
    if (ctx->pc == 0x3CDC50u) {
        ctx->pc = 0x3CDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC4Cu;
        // 0x3cdc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC54u;
        goto label_3cdc54;
    }
    ctx->pc = 0x3CDC4Cu;
    {
        const bool branch_taken_0x3cdc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC4Cu;
        // 0x3cdc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc4c) {
            ctx->pc = 0x3CDC6Cu;
            goto label_3cdc6c;
        }
    }
    ctx->pc = 0x3CDC54u;
label_3cdc54:
    // 0x3cdc54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cdc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc58:
    // 0x3cdc58: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3cdc58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3cdc5c:
    // 0x3cdc5c: 0xc0e91f0  jal         func_3A47C0
label_3cdc60:
    if (ctx->pc == 0x3CDC60u) {
        ctx->pc = 0x3CDC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC5Cu;
        // 0x3cdc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC64u;
        goto label_3cdc64;
    }
    ctx->pc = 0x3CDC5Cu;
    SET_GPR_U32(ctx, 31, 0x3CDC64u);
    ctx->pc = 0x3CDC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC5Cu;
    // 0x3cdc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3CDC5Cu, 0x3CDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC64u;
label_3cdc64:
    // 0x3cdc64: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cdc68:
    if (ctx->pc == 0x3CDC68u) {
        ctx->pc = 0x3CDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC64u;
        // 0x3cdc68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC6Cu;
        goto label_3cdc6c;
    }
    ctx->pc = 0x3CDC64u;
    {
        const bool branch_taken_0x3cdc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC64u;
        // 0x3cdc68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc64) {
            ctx->pc = 0x3CDC80u;
            goto label_3cdc80;
        }
    }
    ctx->pc = 0x3CDC6Cu;
label_3cdc6c:
    // 0x3cdc6c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3cdc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3cdc70:
    // 0x3cdc70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cdc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc74:
    // 0x3cdc74: 0xc0e91f0  jal         func_3A47C0
label_3cdc78:
    if (ctx->pc == 0x3CDC78u) {
        ctx->pc = 0x3CDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC74u;
        // 0x3cdc78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC7Cu;
        goto label_3cdc7c;
    }
    ctx->pc = 0x3CDC74u;
    SET_GPR_U32(ctx, 31, 0x3CDC7Cu);
    ctx->pc = 0x3CDC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC74u;
    // 0x3cdc78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3CDC74u, 0x3CDC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC7Cu;
label_3cdc7c:
    // 0x3cdc7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cdc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc80:
    // 0x3cdc80: 0xc0e8dee  jal         func_3A37B8
label_3cdc84:
    if (ctx->pc == 0x3CDC84u) {
        ctx->pc = 0x3CDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC80u;
        // 0x3cdc84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC88u;
        goto label_3cdc88;
    }
    ctx->pc = 0x3CDC80u;
    SET_GPR_U32(ctx, 31, 0x3CDC88u);
    ctx->pc = 0x3CDC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDC80u;
    // 0x3cdc84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3CDC80u, 0x3CDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDC88u;
label_3cdc88:
    // 0x3cdc88: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3cdc88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3cdc8c:
    // 0x3cdc8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3cdc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cdc90:
    // 0x3cdc90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3cdc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cdc94:
    // 0x3cdc94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3cdc94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cdc98:
    // 0x3cdc98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cdc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cdc9c:
    // 0x3cdc9c: 0x3e00008  jr          $ra
label_3cdca0:
    if (ctx->pc == 0x3CDCA0u) {
        ctx->pc = 0x3CDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC9Cu;
        // 0x3cdca0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDCA4u;
        goto label_3cdca4;
    }
    ctx->pc = 0x3CDC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC9Cu;
        // 0x3cdca0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CDCA4u;
label_3cdca4:
    // 0x3cdca4: 0x0  nop
    ctx->pc = 0x3cdca4u;
    // NOP
    ctx->pc = 0x3cdca8u;
}
