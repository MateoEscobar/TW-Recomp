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

// Function: sub_0042DB88
// Address: 0x42db88 - 0x42dd34
void sub_0042DB88_0x42db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DB88_0x42db88");
#endif

    switch (ctx->pc) {
        case 0x42db88u: goto label_42db88;
        case 0x42db8cu: goto label_42db8c;
        case 0x42db90u: goto label_42db90;
        case 0x42db94u: goto label_42db94;
        case 0x42db98u: goto label_42db98;
        case 0x42db9cu: goto label_42db9c;
        case 0x42dba0u: goto label_42dba0;
        case 0x42dba4u: goto label_42dba4;
        case 0x42dba8u: goto label_42dba8;
        case 0x42dbacu: goto label_42dbac;
        case 0x42dbb0u: goto label_42dbb0;
        case 0x42dbb4u: goto label_42dbb4;
        case 0x42dbb8u: goto label_42dbb8;
        case 0x42dbbcu: goto label_42dbbc;
        case 0x42dbc0u: goto label_42dbc0;
        case 0x42dbc4u: goto label_42dbc4;
        case 0x42dbc8u: goto label_42dbc8;
        case 0x42dbccu: goto label_42dbcc;
        case 0x42dbd0u: goto label_42dbd0;
        case 0x42dbd4u: goto label_42dbd4;
        case 0x42dbd8u: goto label_42dbd8;
        case 0x42dbdcu: goto label_42dbdc;
        case 0x42dbe0u: goto label_42dbe0;
        case 0x42dbe4u: goto label_42dbe4;
        case 0x42dbe8u: goto label_42dbe8;
        case 0x42dbecu: goto label_42dbec;
        case 0x42dbf0u: goto label_42dbf0;
        case 0x42dbf4u: goto label_42dbf4;
        case 0x42dbf8u: goto label_42dbf8;
        case 0x42dbfcu: goto label_42dbfc;
        case 0x42dc00u: goto label_42dc00;
        case 0x42dc04u: goto label_42dc04;
        case 0x42dc08u: goto label_42dc08;
        case 0x42dc0cu: goto label_42dc0c;
        case 0x42dc10u: goto label_42dc10;
        case 0x42dc14u: goto label_42dc14;
        case 0x42dc18u: goto label_42dc18;
        case 0x42dc1cu: goto label_42dc1c;
        case 0x42dc20u: goto label_42dc20;
        case 0x42dc24u: goto label_42dc24;
        case 0x42dc28u: goto label_42dc28;
        case 0x42dc2cu: goto label_42dc2c;
        case 0x42dc30u: goto label_42dc30;
        case 0x42dc34u: goto label_42dc34;
        case 0x42dc38u: goto label_42dc38;
        case 0x42dc3cu: goto label_42dc3c;
        case 0x42dc40u: goto label_42dc40;
        case 0x42dc44u: goto label_42dc44;
        case 0x42dc48u: goto label_42dc48;
        case 0x42dc4cu: goto label_42dc4c;
        case 0x42dc50u: goto label_42dc50;
        case 0x42dc54u: goto label_42dc54;
        case 0x42dc58u: goto label_42dc58;
        case 0x42dc5cu: goto label_42dc5c;
        case 0x42dc60u: goto label_42dc60;
        case 0x42dc64u: goto label_42dc64;
        case 0x42dc68u: goto label_42dc68;
        case 0x42dc6cu: goto label_42dc6c;
        case 0x42dc70u: goto label_42dc70;
        case 0x42dc74u: goto label_42dc74;
        case 0x42dc78u: goto label_42dc78;
        case 0x42dc7cu: goto label_42dc7c;
        case 0x42dc80u: goto label_42dc80;
        case 0x42dc84u: goto label_42dc84;
        case 0x42dc88u: goto label_42dc88;
        case 0x42dc8cu: goto label_42dc8c;
        case 0x42dc90u: goto label_42dc90;
        case 0x42dc94u: goto label_42dc94;
        case 0x42dc98u: goto label_42dc98;
        case 0x42dc9cu: goto label_42dc9c;
        case 0x42dca0u: goto label_42dca0;
        case 0x42dca4u: goto label_42dca4;
        case 0x42dca8u: goto label_42dca8;
        case 0x42dcacu: goto label_42dcac;
        case 0x42dcb0u: goto label_42dcb0;
        case 0x42dcb4u: goto label_42dcb4;
        case 0x42dcb8u: goto label_42dcb8;
        case 0x42dcbcu: goto label_42dcbc;
        case 0x42dcc0u: goto label_42dcc0;
        case 0x42dcc4u: goto label_42dcc4;
        case 0x42dcc8u: goto label_42dcc8;
        case 0x42dcccu: goto label_42dccc;
        case 0x42dcd0u: goto label_42dcd0;
        case 0x42dcd4u: goto label_42dcd4;
        case 0x42dcd8u: goto label_42dcd8;
        case 0x42dcdcu: goto label_42dcdc;
        case 0x42dce0u: goto label_42dce0;
        case 0x42dce4u: goto label_42dce4;
        case 0x42dce8u: goto label_42dce8;
        case 0x42dcecu: goto label_42dcec;
        case 0x42dcf0u: goto label_42dcf0;
        case 0x42dcf4u: goto label_42dcf4;
        case 0x42dcf8u: goto label_42dcf8;
        case 0x42dcfcu: goto label_42dcfc;
        case 0x42dd00u: goto label_42dd00;
        case 0x42dd04u: goto label_42dd04;
        case 0x42dd08u: goto label_42dd08;
        case 0x42dd0cu: goto label_42dd0c;
        case 0x42dd10u: goto label_42dd10;
        case 0x42dd14u: goto label_42dd14;
        case 0x42dd18u: goto label_42dd18;
        case 0x42dd1cu: goto label_42dd1c;
        case 0x42dd20u: goto label_42dd20;
        case 0x42dd24u: goto label_42dd24;
        case 0x42dd28u: goto label_42dd28;
        case 0x42dd2cu: goto label_42dd2c;
        case 0x42dd30u: goto label_42dd30;
        default: break;
    }

    ctx->pc = 0x42db88u;

label_42db88:
    // 0x42db88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x42db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_42db8c:
    // 0x42db8c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x42db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_42db90:
    // 0x42db90: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x42db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_42db94:
    // 0x42db94: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x42db94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42db98:
    // 0x42db98: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x42db98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_42db9c:
    // 0x42db9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x42db9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42dba0:
    // 0x42dba0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x42dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_42dba4:
    // 0x42dba4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x42dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_42dba8:
    // 0x42dba8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x42dba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_42dbac:
    // 0x42dbac: 0xc10b262  jal         func_42C988
label_42dbb0:
    if (ctx->pc == 0x42DBB0u) {
        ctx->pc = 0x42DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DBACu;
        // 0x42dbb0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DBB4u;
        goto label_42dbb4;
    }
    ctx->pc = 0x42DBACu;
    SET_GPR_U32(ctx, 31, 0x42DBB4u);
    ctx->pc = 0x42DBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DBACu;
    // 0x42dbb0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C988u, 0x42DBACu, 0x42DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DBB4u;
label_42dbb4:
    // 0x42dbb4: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_42dbb8:
    if (ctx->pc == 0x42DBB8u) {
        ctx->pc = 0x42DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DBB4u;
        // 0x42dbb8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DBBCu;
        goto label_42dbbc;
    }
    ctx->pc = 0x42DBB4u;
    {
        const bool branch_taken_0x42dbb4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x42DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DBB4u;
        // 0x42dbb8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dbb4) {
            ctx->pc = 0x42DBF8u;
            goto label_42dbf8;
        }
    }
    ctx->pc = 0x42DBBCu;
label_42dbbc:
    // 0x42dbbc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x42dbbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42dbc0:
    // 0x42dbc0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x42dbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42dbc4:
    // 0x42dbc4: 0x0  nop
    ctx->pc = 0x42dbc4u;
    // NOP
label_42dbc8:
    // 0x42dbc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x42dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42dbcc:
    // 0x42dbcc: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x42dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_42dbd0:
    // 0x42dbd0: 0xc10bd90  jal         func_42F640
label_42dbd4:
    if (ctx->pc == 0x42DBD4u) {
        ctx->pc = 0x42DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DBD0u;
        // 0x42dbd4: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DBD8u;
        goto label_42dbd8;
    }
    ctx->pc = 0x42DBD0u;
    SET_GPR_U32(ctx, 31, 0x42DBD8u);
    ctx->pc = 0x42DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DBD0u;
    // 0x42dbd4: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F640u, 0x42DBD0u, 0x42DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DBD8u;
label_42dbd8:
    // 0x42dbd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_42dbdc:
    if (ctx->pc == 0x42DBDCu) {
        ctx->pc = 0x42DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DBD8u;
        // 0x42dbdc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DBE0u;
        goto label_42dbe0;
    }
    ctx->pc = 0x42DBD8u;
    {
        const bool branch_taken_0x42dbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42dbd8) {
            ctx->pc = 0x42DBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42DBD8u;
            // 0x42dbdc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42DBF0u;
            goto label_42dbf0;
        }
    }
    ctx->pc = 0x42DBE0u;
label_42dbe0:
    // 0x42dbe0: 0xc10b6d6  jal         func_42DB58
label_42dbe4:
    if (ctx->pc == 0x42DBE4u) {
        ctx->pc = 0x42DBE8u;
        goto label_42dbe8;
    }
    ctx->pc = 0x42DBE0u;
    SET_GPR_U32(ctx, 31, 0x42DBE8u);
    ctx->pc = 0x42DB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DB58u, 0x42DBE0u, 0x42DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DBE8u;
label_42dbe8:
    // 0x42dbe8: 0xc10b510  jal         func_42D440
label_42dbec:
    if (ctx->pc == 0x42DBECu) {
        ctx->pc = 0x42DBF0u;
        goto label_42dbf0;
    }
    ctx->pc = 0x42DBE8u;
    SET_GPR_U32(ctx, 31, 0x42DBF0u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DBE8u, 0x42DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DBF0u;
label_42dbf0:
    // 0x42dbf0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_42dbf4:
    if (ctx->pc == 0x42DBF4u) {
        ctx->pc = 0x42DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DBF0u;
        // 0x42dbf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DBF8u;
        goto label_42dbf8;
    }
    ctx->pc = 0x42DBF0u;
    {
        const bool branch_taken_0x42dbf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x42DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DBF0u;
        // 0x42dbf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dbf0) {
            ctx->pc = 0x42DBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42dbc8;
        }
    }
    ctx->pc = 0x42DBF8u;
label_42dbf8:
    // 0x42dbf8: 0xc10b62c  jal         func_42D8B0
label_42dbfc:
    if (ctx->pc == 0x42DBFCu) {
        ctx->pc = 0x42DC00u;
        goto label_42dc00;
    }
    ctx->pc = 0x42DBF8u;
    SET_GPR_U32(ctx, 31, 0x42DC00u);
    ctx->pc = 0x42D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D8B0u, 0x42DBF8u, 0x42DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DC00u;
label_42dc00:
    // 0x42dc00: 0xc10b510  jal         func_42D440
label_42dc04:
    if (ctx->pc == 0x42DC04u) {
        ctx->pc = 0x42DC08u;
        goto label_42dc08;
    }
    ctx->pc = 0x42DC00u;
    SET_GPR_U32(ctx, 31, 0x42DC08u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DC00u, 0x42DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DC08u;
label_42dc08:
    // 0x42dc08: 0xc10b644  jal         func_42D910
label_42dc0c:
    if (ctx->pc == 0x42DC0Cu) {
        ctx->pc = 0x42DC10u;
        goto label_42dc10;
    }
    ctx->pc = 0x42DC08u;
    SET_GPR_U32(ctx, 31, 0x42DC10u);
    ctx->pc = 0x42D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D910u, 0x42DC08u, 0x42DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DC10u;
label_42dc10:
    // 0x42dc10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x42dc10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42dc14:
    // 0x42dc14: 0x12540012  beq         $s2, $s4, . + 4 + (0x12 << 2)
label_42dc18:
    if (ctx->pc == 0x42DC18u) {
        ctx->pc = 0x42DC1Cu;
        goto label_42dc1c;
    }
    ctx->pc = 0x42DC14u;
    {
        const bool branch_taken_0x42dc14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x42dc14) {
            ctx->pc = 0x42DC60u;
            goto label_42dc60;
        }
    }
    ctx->pc = 0x42DC1Cu;
label_42dc1c:
    // 0x42dc1c: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_42dc20:
    if (ctx->pc == 0x42DC20u) {
        ctx->pc = 0x42DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC1Cu;
        // 0x42dc20: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DC24u;
        goto label_42dc24;
    }
    ctx->pc = 0x42DC1Cu;
    {
        const bool branch_taken_0x42dc1c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x42DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC1Cu;
        // 0x42dc20: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dc1c) {
            ctx->pc = 0x42DC60u;
            goto label_42dc60;
        }
    }
    ctx->pc = 0x42DC24u;
label_42dc24:
    // 0x42dc24: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x42dc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42dc28:
    // 0x42dc28: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x42dc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42dc2c:
    // 0x42dc2c: 0x0  nop
    ctx->pc = 0x42dc2cu;
    // NOP
label_42dc30:
    // 0x42dc30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x42dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42dc34:
    // 0x42dc34: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x42dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_42dc38:
    // 0x42dc38: 0xc10bd90  jal         func_42F640
label_42dc3c:
    if (ctx->pc == 0x42DC3Cu) {
        ctx->pc = 0x42DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC38u;
        // 0x42dc3c: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DC40u;
        goto label_42dc40;
    }
    ctx->pc = 0x42DC38u;
    SET_GPR_U32(ctx, 31, 0x42DC40u);
    ctx->pc = 0x42DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DC38u;
    // 0x42dc3c: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F640u, 0x42DC38u, 0x42DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DC40u;
label_42dc40:
    // 0x42dc40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_42dc44:
    if (ctx->pc == 0x42DC44u) {
        ctx->pc = 0x42DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC40u;
        // 0x42dc44: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DC48u;
        goto label_42dc48;
    }
    ctx->pc = 0x42DC40u;
    {
        const bool branch_taken_0x42dc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42dc40) {
            ctx->pc = 0x42DC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42DC40u;
            // 0x42dc44: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42DC58u;
            goto label_42dc58;
        }
    }
    ctx->pc = 0x42DC48u;
label_42dc48:
    // 0x42dc48: 0xc10b6d6  jal         func_42DB58
label_42dc4c:
    if (ctx->pc == 0x42DC4Cu) {
        ctx->pc = 0x42DC50u;
        goto label_42dc50;
    }
    ctx->pc = 0x42DC48u;
    SET_GPR_U32(ctx, 31, 0x42DC50u);
    ctx->pc = 0x42DB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DB58u, 0x42DC48u, 0x42DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DC50u;
label_42dc50:
    // 0x42dc50: 0xc10b510  jal         func_42D440
label_42dc54:
    if (ctx->pc == 0x42DC54u) {
        ctx->pc = 0x42DC58u;
        goto label_42dc58;
    }
    ctx->pc = 0x42DC50u;
    SET_GPR_U32(ctx, 31, 0x42DC58u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DC50u, 0x42DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DC58u;
label_42dc58:
    // 0x42dc58: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_42dc5c:
    if (ctx->pc == 0x42DC5Cu) {
        ctx->pc = 0x42DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC58u;
        // 0x42dc5c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DC60u;
        goto label_42dc60;
    }
    ctx->pc = 0x42DC58u;
    {
        const bool branch_taken_0x42dc58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x42DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC58u;
        // 0x42dc5c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dc58) {
            ctx->pc = 0x42DC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42dc30;
        }
    }
    ctx->pc = 0x42DC60u;
label_42dc60:
    // 0x42dc60: 0xc10b7ba  jal         func_42DEE8
label_42dc64:
    if (ctx->pc == 0x42DC64u) {
        ctx->pc = 0x42DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC60u;
        // 0x42dc64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DC68u;
        goto label_42dc68;
    }
    ctx->pc = 0x42DC60u;
    SET_GPR_U32(ctx, 31, 0x42DC68u);
    ctx->pc = 0x42DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DC60u;
    // 0x42dc64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DEE8u, 0x42DC60u, 0x42DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DC68u;
label_42dc68:
    // 0x42dc68: 0x1a600025  blez        $s3, . + 4 + (0x25 << 2)
label_42dc6c:
    if (ctx->pc == 0x42DC6Cu) {
        ctx->pc = 0x42DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC68u;
        // 0x42dc6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DC70u;
        goto label_42dc70;
    }
    ctx->pc = 0x42DC68u;
    {
        const bool branch_taken_0x42dc68 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x42DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC68u;
        // 0x42dc6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dc68) {
            ctx->pc = 0x42DD00u;
            goto label_42dd00;
        }
    }
    ctx->pc = 0x42DC70u;
label_42dc70:
    // 0x42dc70: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x42dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_42dc74:
    // 0x42dc74: 0x0  nop
    ctx->pc = 0x42dc74u;
    // NOP
label_42dc78:
    // 0x42dc78: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x42dc78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_42dc7c:
    // 0x42dc7c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x42dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_42dc80:
    // 0x42dc80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42dc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42dc84:
    // 0x42dc84: 0xc10bd90  jal         func_42F640
label_42dc88:
    if (ctx->pc == 0x42DC88u) {
        ctx->pc = 0x42DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC84u;
        // 0x42dc88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DC8Cu;
        goto label_42dc8c;
    }
    ctx->pc = 0x42DC84u;
    SET_GPR_U32(ctx, 31, 0x42DC8Cu);
    ctx->pc = 0x42DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DC84u;
    // 0x42dc88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F640u, 0x42DC84u, 0x42DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DC8Cu;
label_42dc8c:
    // 0x42dc8c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_42dc90:
    if (ctx->pc == 0x42DC90u) {
        ctx->pc = 0x42DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC8Cu;
        // 0x42dc90: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DC94u;
        goto label_42dc94;
    }
    ctx->pc = 0x42DC8Cu;
    {
        const bool branch_taken_0x42dc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DC8Cu;
        // 0x42dc90: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dc8c) {
            ctx->pc = 0x42DCF0u;
            goto label_42dcf0;
        }
    }
    ctx->pc = 0x42DC94u;
label_42dc94:
    // 0x42dc94: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x42dc94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
label_42dc98:
    // 0x42dc98: 0x2451c150  addiu       $s1, $v0, -0x3EB0
    ctx->pc = 0x42dc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951248));
label_42dc9c:
    // 0x42dc9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x42dc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42dca0:
    // 0x42dca0: 0xc10b652  jal         func_42D948
label_42dca4:
    if (ctx->pc == 0x42DCA4u) {
        ctx->pc = 0x42DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DCA0u;
        // 0x42dca4: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DCA8u;
        goto label_42dca8;
    }
    ctx->pc = 0x42DCA0u;
    SET_GPR_U32(ctx, 31, 0x42DCA8u);
    ctx->pc = 0x42DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DCA0u;
    // 0x42dca4: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D948u, 0x42DCA0u, 0x42DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DCA8u;
label_42dca8:
    // 0x42dca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42dca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42dcac:
    // 0x42dcac: 0x10000003  b           . + 4 + (0x3 << 2)
label_42dcb0:
    if (ctx->pc == 0x42DCB0u) {
        ctx->pc = 0x42DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DCACu;
        // 0x42dcb0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DCB4u;
        goto label_42dcb4;
    }
    ctx->pc = 0x42DCACu;
    {
        const bool branch_taken_0x42dcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DCACu;
        // 0x42dcb0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dcac) {
            ctx->pc = 0x42DCBCu;
            goto label_42dcbc;
        }
    }
    ctx->pc = 0x42DCB4u;
label_42dcb4:
    // 0x42dcb4: 0xc10b510  jal         func_42D440
label_42dcb8:
    if (ctx->pc == 0x42DCB8u) {
        ctx->pc = 0x42DCBCu;
        goto label_42dcbc;
    }
    ctx->pc = 0x42DCB4u;
    SET_GPR_U32(ctx, 31, 0x42DCBCu);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DCB4u, 0x42DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DCBCu;
label_42dcbc:
    // 0x42dcbc: 0x2642c168  addiu       $v0, $s2, -0x3E98
    ctx->pc = 0x42dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951272));
label_42dcc0:
    // 0x42dcc0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_42dcc4:
    // 0x42dcc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x42dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42dcc8:
    // 0x42dcc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42dccc:
    // 0x42dccc: 0x40f809  jalr        $v0
label_42dcd0:
    if (ctx->pc == 0x42DCD0u) {
        ctx->pc = 0x42DCD4u;
        goto label_42dcd4;
    }
    ctx->pc = 0x42DCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42DCD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DCCCu, 0x42DCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42DCD4u;
label_42dcd4:
    // 0x42dcd4: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x42dcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
label_42dcd8:
    // 0x42dcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42dcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42dcdc:
    // 0x42dcdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42dcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42dce0:
    // 0x42dce0: 0xc10b680  jal         func_42DA00
label_42dce4:
    if (ctx->pc == 0x42DCE4u) {
        ctx->pc = 0x42DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DCE0u;
        // 0x42dce4: 0x24c6dea0  addiu       $a2, $a2, -0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DCE8u;
        goto label_42dce8;
    }
    ctx->pc = 0x42DCE0u;
    SET_GPR_U32(ctx, 31, 0x42DCE8u);
    ctx->pc = 0x42DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DCE0u;
    // 0x42dce4: 0x24c6dea0  addiu       $a2, $a2, -0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DA00u, 0x42DCE0u, 0x42DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DCE8u;
label_42dce8:
    // 0x42dce8: 0xc10b510  jal         func_42D440
label_42dcec:
    if (ctx->pc == 0x42DCECu) {
        ctx->pc = 0x42DCF0u;
        goto label_42dcf0;
    }
    ctx->pc = 0x42DCE8u;
    SET_GPR_U32(ctx, 31, 0x42DCF0u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DCE8u, 0x42DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DCF0u;
label_42dcf0:
    // 0x42dcf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x42dcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_42dcf4:
    // 0x42dcf4: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x42dcf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_42dcf8:
    // 0x42dcf8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_42dcfc:
    if (ctx->pc == 0x42DCFCu) {
        ctx->pc = 0x42DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DCF8u;
        // 0x42dcfc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DD00u;
        goto label_42dd00;
    }
    ctx->pc = 0x42DCF8u;
    {
        const bool branch_taken_0x42dcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DCF8u;
        // 0x42dcfc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dcf8) {
            ctx->pc = 0x42DC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42dc78;
        }
    }
    ctx->pc = 0x42DD00u;
label_42dd00:
    // 0x42dd00: 0xc10b61a  jal         func_42D868
label_42dd04:
    if (ctx->pc == 0x42DD04u) {
        ctx->pc = 0x42DD08u;
        goto label_42dd08;
    }
    ctx->pc = 0x42DD00u;
    SET_GPR_U32(ctx, 31, 0x42DD08u);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x42DD00u, 0x42DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DD08u;
label_42dd08:
    // 0x42dd08: 0xc10b510  jal         func_42D440
label_42dd0c:
    if (ctx->pc == 0x42DD0Cu) {
        ctx->pc = 0x42DD10u;
        goto label_42dd10;
    }
    ctx->pc = 0x42DD08u;
    SET_GPR_U32(ctx, 31, 0x42DD10u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x42DD08u, 0x42DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DD10u;
label_42dd10:
    // 0x42dd10: 0x2642c168  addiu       $v0, $s2, -0x3E98
    ctx->pc = 0x42dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951272));
label_42dd14:
    // 0x42dd14: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_42dd18:
    if (ctx->pc == 0x42DD18u) {
        ctx->pc = 0x42DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DD14u;
        // 0x42dd18: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DD1Cu;
        goto label_42dd1c;
    }
    ctx->pc = 0x42DD14u;
    {
        const bool branch_taken_0x42dd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DD14u;
        // 0x42dd18: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dd14) {
            ctx->pc = 0x42DCB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42dcb4;
        }
    }
    ctx->pc = 0x42DD1Cu;
label_42dd1c:
    // 0x42dd1c: 0xc10b6a4  jal         func_42DA90
label_42dd20:
    if (ctx->pc == 0x42DD20u) {
        ctx->pc = 0x42DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DD1Cu;
        // 0x42dd20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DD24u;
        goto label_42dd24;
    }
    ctx->pc = 0x42DD1Cu;
    SET_GPR_U32(ctx, 31, 0x42DD24u);
    ctx->pc = 0x42DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DD1Cu;
    // 0x42dd20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DA90u, 0x42DD1Cu, 0x42DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DD24u;
label_42dd24:
    // 0x42dd24: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_42dd28:
    if (ctx->pc == 0x42DD28u) {
        ctx->pc = 0x42DD2Cu;
        goto label_42dd2c;
    }
    ctx->pc = 0x42DD24u;
    {
        const bool branch_taken_0x42dd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42dd24) {
            ctx->pc = 0x42DD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42dd08;
        }
    }
    ctx->pc = 0x42DD2Cu;
label_42dd2c:
    // 0x42dd2c: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_42dd30:
    if (ctx->pc == 0x42DD30u) {
        ctx->pc = 0x42DD34u;
        goto label_fallthrough_0x42dd2c;
    }
    ctx->pc = 0x42DD2Cu;
    {
        const bool branch_taken_0x42dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42dd2c) {
            ctx->pc = 0x42DC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42dc00;
        }
    }
label_fallthrough_0x42dd2c:
    ctx->pc = 0x42DD34u;
}
