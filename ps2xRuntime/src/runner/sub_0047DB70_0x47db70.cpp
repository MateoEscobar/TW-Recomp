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

// Function: sub_0047DB70
// Address: 0x47db70 - 0x47dd28
void sub_0047DB70_0x47db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047DB70_0x47db70");
#endif

    switch (ctx->pc) {
        case 0x47db70u: goto label_47db70;
        case 0x47db74u: goto label_47db74;
        case 0x47db78u: goto label_47db78;
        case 0x47db7cu: goto label_47db7c;
        case 0x47db80u: goto label_47db80;
        case 0x47db84u: goto label_47db84;
        case 0x47db88u: goto label_47db88;
        case 0x47db8cu: goto label_47db8c;
        case 0x47db90u: goto label_47db90;
        case 0x47db94u: goto label_47db94;
        case 0x47db98u: goto label_47db98;
        case 0x47db9cu: goto label_47db9c;
        case 0x47dba0u: goto label_47dba0;
        case 0x47dba4u: goto label_47dba4;
        case 0x47dba8u: goto label_47dba8;
        case 0x47dbacu: goto label_47dbac;
        case 0x47dbb0u: goto label_47dbb0;
        case 0x47dbb4u: goto label_47dbb4;
        case 0x47dbb8u: goto label_47dbb8;
        case 0x47dbbcu: goto label_47dbbc;
        case 0x47dbc0u: goto label_47dbc0;
        case 0x47dbc4u: goto label_47dbc4;
        case 0x47dbc8u: goto label_47dbc8;
        case 0x47dbccu: goto label_47dbcc;
        case 0x47dbd0u: goto label_47dbd0;
        case 0x47dbd4u: goto label_47dbd4;
        case 0x47dbd8u: goto label_47dbd8;
        case 0x47dbdcu: goto label_47dbdc;
        case 0x47dbe0u: goto label_47dbe0;
        case 0x47dbe4u: goto label_47dbe4;
        case 0x47dbe8u: goto label_47dbe8;
        case 0x47dbecu: goto label_47dbec;
        case 0x47dbf0u: goto label_47dbf0;
        case 0x47dbf4u: goto label_47dbf4;
        case 0x47dbf8u: goto label_47dbf8;
        case 0x47dbfcu: goto label_47dbfc;
        case 0x47dc00u: goto label_47dc00;
        case 0x47dc04u: goto label_47dc04;
        case 0x47dc08u: goto label_47dc08;
        case 0x47dc0cu: goto label_47dc0c;
        case 0x47dc10u: goto label_47dc10;
        case 0x47dc14u: goto label_47dc14;
        case 0x47dc18u: goto label_47dc18;
        case 0x47dc1cu: goto label_47dc1c;
        case 0x47dc20u: goto label_47dc20;
        case 0x47dc24u: goto label_47dc24;
        case 0x47dc28u: goto label_47dc28;
        case 0x47dc2cu: goto label_47dc2c;
        case 0x47dc30u: goto label_47dc30;
        case 0x47dc34u: goto label_47dc34;
        case 0x47dc38u: goto label_47dc38;
        case 0x47dc3cu: goto label_47dc3c;
        case 0x47dc40u: goto label_47dc40;
        case 0x47dc44u: goto label_47dc44;
        case 0x47dc48u: goto label_47dc48;
        case 0x47dc4cu: goto label_47dc4c;
        case 0x47dc50u: goto label_47dc50;
        case 0x47dc54u: goto label_47dc54;
        case 0x47dc58u: goto label_47dc58;
        case 0x47dc5cu: goto label_47dc5c;
        case 0x47dc60u: goto label_47dc60;
        case 0x47dc64u: goto label_47dc64;
        case 0x47dc68u: goto label_47dc68;
        case 0x47dc6cu: goto label_47dc6c;
        case 0x47dc70u: goto label_47dc70;
        case 0x47dc74u: goto label_47dc74;
        case 0x47dc78u: goto label_47dc78;
        case 0x47dc7cu: goto label_47dc7c;
        case 0x47dc80u: goto label_47dc80;
        case 0x47dc84u: goto label_47dc84;
        case 0x47dc88u: goto label_47dc88;
        case 0x47dc8cu: goto label_47dc8c;
        case 0x47dc90u: goto label_47dc90;
        case 0x47dc94u: goto label_47dc94;
        case 0x47dc98u: goto label_47dc98;
        case 0x47dc9cu: goto label_47dc9c;
        case 0x47dca0u: goto label_47dca0;
        case 0x47dca4u: goto label_47dca4;
        case 0x47dca8u: goto label_47dca8;
        case 0x47dcacu: goto label_47dcac;
        case 0x47dcb0u: goto label_47dcb0;
        case 0x47dcb4u: goto label_47dcb4;
        case 0x47dcb8u: goto label_47dcb8;
        case 0x47dcbcu: goto label_47dcbc;
        case 0x47dcc0u: goto label_47dcc0;
        case 0x47dcc4u: goto label_47dcc4;
        case 0x47dcc8u: goto label_47dcc8;
        case 0x47dcccu: goto label_47dccc;
        case 0x47dcd0u: goto label_47dcd0;
        case 0x47dcd4u: goto label_47dcd4;
        case 0x47dcd8u: goto label_47dcd8;
        case 0x47dcdcu: goto label_47dcdc;
        case 0x47dce0u: goto label_47dce0;
        case 0x47dce4u: goto label_47dce4;
        case 0x47dce8u: goto label_47dce8;
        case 0x47dcecu: goto label_47dcec;
        case 0x47dcf0u: goto label_47dcf0;
        case 0x47dcf4u: goto label_47dcf4;
        case 0x47dcf8u: goto label_47dcf8;
        case 0x47dcfcu: goto label_47dcfc;
        case 0x47dd00u: goto label_47dd00;
        case 0x47dd04u: goto label_47dd04;
        case 0x47dd08u: goto label_47dd08;
        case 0x47dd0cu: goto label_47dd0c;
        case 0x47dd10u: goto label_47dd10;
        case 0x47dd14u: goto label_47dd14;
        case 0x47dd18u: goto label_47dd18;
        case 0x47dd1cu: goto label_47dd1c;
        case 0x47dd20u: goto label_47dd20;
        case 0x47dd24u: goto label_47dd24;
        default: break;
    }

    ctx->pc = 0x47db70u;

label_47db70:
    // 0x47db70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47db74:
    // 0x47db74: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x47db74u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47db78:
    // 0x47db78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47db78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47db7c:
    // 0x47db7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47db7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_47db80:
    // 0x47db80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47db80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47db84:
    // 0x47db84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x47db84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_47db88:
    // 0x47db88: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x47db88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_47db8c:
    // 0x47db8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47db90:
    // 0x47db90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x47db90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47db94:
    // 0x47db94: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x47db94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_47db98:
    // 0x47db98: 0x11af0034  beq         $t5, $t7, . + 4 + (0x34 << 2)
label_47db9c:
    if (ctx->pc == 0x47DB9Cu) {
        ctx->pc = 0x47DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DB98u;
        // 0x47db9c: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DBA0u;
        goto label_47dba0;
    }
    ctx->pc = 0x47DB98u;
    {
        const bool branch_taken_0x47db98 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x47DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DB98u;
        // 0x47db9c: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47db98) {
            ctx->pc = 0x47DC6Cu;
            goto label_47dc6c;
        }
    }
    ctx->pc = 0x47DBA0u;
label_47dba0:
    // 0x47dba0: 0x26580008  addiu       $t8, $s2, 0x8
    ctx->pc = 0x47dba0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_47dba4:
    // 0x47dba4: 0x25a20008  addiu       $v0, $t5, 0x8
    ctx->pc = 0x47dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_47dba8:
    // 0x47dba8: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x47dba8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_47dbac:
    // 0x47dbac: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
label_47dbb0:
    if (ctx->pc == 0x47DBB0u) {
        ctx->pc = 0x47DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DBACu;
        // 0x47dbb0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DBB4u;
        goto label_47dbb4;
    }
    ctx->pc = 0x47DBACu;
    {
        const bool branch_taken_0x47dbac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DBACu;
        // 0x47dbb0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dbac) {
            ctx->pc = 0x47DC58u;
            goto label_47dc58;
        }
    }
    ctx->pc = 0x47DBB4u;
label_47dbb4:
    // 0x47dbb4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x47dbb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47dbb8:
    // 0x47dbb8: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x47dbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_47dbbc:
    // 0x47dbbc: 0x1b83021  addu        $a2, $t5, $t8
    ctx->pc = 0x47dbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
label_47dbc0:
    // 0x47dbc0: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x47dbc0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_47dbc4:
    // 0x47dbc4: 0x5150001e  beql        $t2, $s0, . + 4 + (0x1E << 2)
label_47dbc8:
    if (ctx->pc == 0x47DBC8u) {
        ctx->pc = 0x47DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DBC4u;
        // 0x47dbc8: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DBCCu;
        goto label_47dbcc;
    }
    ctx->pc = 0x47DBC4u;
    {
        const bool branch_taken_0x47dbc4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 16));
        if (branch_taken_0x47dbc4) {
            ctx->pc = 0x47DBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DBC4u;
            // 0x47dbc8: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DC40u;
            goto label_47dc40;
        }
    }
    ctx->pc = 0x47DBCCu;
label_47dbcc:
    // 0x47dbcc: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
label_47dbd0:
    if (ctx->pc == 0x47DBD0u) {
        ctx->pc = 0x47DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DBCCu;
        // 0x47dbd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DBD4u;
        goto label_47dbd4;
    }
    ctx->pc = 0x47DBCCu;
    {
        const bool branch_taken_0x47dbcc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DBCCu;
        // 0x47dbd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dbcc) {
            ctx->pc = 0x47DC40u;
            goto label_47dc40;
        }
    }
    ctx->pc = 0x47DBD4u;
label_47dbd4:
    // 0x47dbd4: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x47dbd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_47dbd8:
    // 0x47dbd8: 0x10e1007  srav        $v0, $t6, $t0
    ctx->pc = 0x47dbd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
label_47dbdc:
    // 0x47dbdc: 0x0  nop
    ctx->pc = 0x47dbdcu;
    // NOP
label_47dbe0:
    // 0x47dbe0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x47dbe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47dbe4:
    // 0x47dbe4: 0x1471824  and         $v1, $t2, $a3
    ctx->pc = 0x47dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_47dbe8:
    // 0x47dbe8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_47dbec:
    if (ctx->pc == 0x47DBECu) {
        ctx->pc = 0x47DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DBE8u;
        // 0x47dbec: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DBF0u;
        goto label_47dbf0;
    }
    ctx->pc = 0x47DBE8u;
    {
        const bool branch_taken_0x47dbe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dbe8) {
            ctx->pc = 0x47DBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DBE8u;
            // 0x47dbec: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DC10u;
            goto label_47dc10;
        }
    }
    ctx->pc = 0x47DBF0u;
label_47dbf0:
    // 0x47dbf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47dbf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_47dbf4:
    // 0x47dbf4: 0x2d020008  sltiu       $v0, $t0, 0x8
    ctx->pc = 0x47dbf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_47dbf8:
    // 0x47dbf8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_47dbfc:
    if (ctx->pc == 0x47DBFCu) {
        ctx->pc = 0x47DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DBF8u;
        // 0x47dbfc: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DC00u;
        goto label_47dc00;
    }
    ctx->pc = 0x47DBF8u;
    {
        const bool branch_taken_0x47dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DBF8u;
        // 0x47dbfc: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dbf8) {
            ctx->pc = 0x47DC40u;
            goto label_47dc40;
        }
    }
    ctx->pc = 0x47DC00u;
label_47dc00:
    // 0x47dc00: 0x1520fff7  bnez        $t1, . + 4 + (-0x9 << 2)
label_47dc04:
    if (ctx->pc == 0x47DC04u) {
        ctx->pc = 0x47DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC00u;
        // 0x47dc04: 0x10e1007  srav        $v0, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DC08u;
        goto label_47dc08;
    }
    ctx->pc = 0x47DC00u;
    {
        const bool branch_taken_0x47dc00 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC00u;
        // 0x47dc04: 0x10e1007  srav        $v0, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dc00) {
            ctx->pc = 0x47DBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47dbe0;
        }
    }
    ctx->pc = 0x47DC08u;
label_47dc08:
    // 0x47dc08: 0x1000000d  b           . + 4 + (0xD << 2)
label_47dc0c:
    if (ctx->pc == 0x47DC0Cu) {
        ctx->pc = 0x47DC10u;
        goto label_47dc10;
    }
    ctx->pc = 0x47DC08u;
    {
        const bool branch_taken_0x47dc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dc08) {
            ctx->pc = 0x47DC40u;
            goto label_47dc40;
        }
    }
    ctx->pc = 0x47DC10u;
label_47dc10:
    // 0x47dc10: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x47dc10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_47dc14:
    // 0x47dc14: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x47dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_47dc18:
    // 0x47dc18: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x47dc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_47dc1c:
    // 0x47dc1c: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x47dc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
label_47dc20:
    // 0x47dc20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x47dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_47dc24:
    // 0x47dc24: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x47dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_47dc28:
    // 0x47dc28: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x47dc28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_47dc2c:
    // 0x47dc2c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x47dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_47dc30:
    // 0x47dc30: 0x31823  negu        $v1, $v1
    ctx->pc = 0x47dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_47dc34:
    // 0x47dc34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x47dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_47dc38:
    // 0x47dc38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x47dc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_47dc3c:
    // 0x47dc3c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x47dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_47dc40:
    // 0x47dc40: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_47dc44:
    if (ctx->pc == 0x47DC44u) {
        ctx->pc = 0x47DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC40u;
        // 0x47dc44: 0x8dad0000  lw          $t5, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DC48u;
        goto label_47dc48;
    }
    ctx->pc = 0x47DC40u;
    {
        const bool branch_taken_0x47dc40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x47dc40) {
            ctx->pc = 0x47DC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47DC40u;
            // 0x47dc44: 0x8dad0000  lw          $t5, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47DC5Cu;
            goto label_47dc5c;
        }
    }
    ctx->pc = 0x47DC48u;
label_47dc48:
    // 0x47dc48: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x47dc48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_47dc4c:
    // 0x47dc4c: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x47dc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_47dc50:
    // 0x47dc50: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_47dc54:
    if (ctx->pc == 0x47DC54u) {
        ctx->pc = 0x47DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC50u;
        // 0x47dc54: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DC58u;
        goto label_47dc58;
    }
    ctx->pc = 0x47DC50u;
    {
        const bool branch_taken_0x47dc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC50u;
        // 0x47dc54: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dc50) {
            ctx->pc = 0x47DBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47dbc0;
        }
    }
    ctx->pc = 0x47DC58u;
label_47dc58:
    // 0x47dc58: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x47dc58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_47dc5c:
    // 0x47dc5c: 0x11af0003  beq         $t5, $t7, . + 4 + (0x3 << 2)
label_47dc60:
    if (ctx->pc == 0x47DC60u) {
        ctx->pc = 0x47DC64u;
        goto label_47dc64;
    }
    ctx->pc = 0x47DC5Cu;
    {
        const bool branch_taken_0x47dc5c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x47dc5c) {
            ctx->pc = 0x47DC6Cu;
            goto label_47dc6c;
        }
    }
    ctx->pc = 0x47DC64u;
label_47dc64:
    // 0x47dc64: 0x1080ffd0  beqz        $a0, . + 4 + (-0x30 << 2)
label_47dc68:
    if (ctx->pc == 0x47DC68u) {
        ctx->pc = 0x47DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC64u;
        // 0x47dc68: 0x25a20008  addiu       $v0, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DC6Cu;
        goto label_47dc6c;
    }
    ctx->pc = 0x47DC64u;
    {
        const bool branch_taken_0x47dc64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC64u;
        // 0x47dc68: 0x25a20008  addiu       $v0, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dc64) {
            ctx->pc = 0x47DBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47dba8;
        }
    }
    ctx->pc = 0x47DC6Cu;
label_47dc6c:
    // 0x47dc6c: 0x14800026  bnez        $a0, . + 4 + (0x26 << 2)
label_47dc70:
    if (ctx->pc == 0x47DC70u) {
        ctx->pc = 0x47DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC6Cu;
        // 0x47dc70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DC74u;
        goto label_47dc74;
    }
    ctx->pc = 0x47DC6Cu;
    {
        const bool branch_taken_0x47dc6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC6Cu;
        // 0x47dc70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dc6c) {
            ctx->pc = 0x47DD08u;
            goto label_47dd08;
        }
    }
    ctx->pc = 0x47DC74u;
label_47dc74:
    // 0x47dc74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x47dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_47dc78:
    // 0x47dc78: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47dc7c:
    // 0x47dc7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x47dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_47dc80:
    // 0x47dc80: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x47dc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_47dc84:
    // 0x47dc84: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x47dc84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_47dc88:
    // 0x47dc88: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x47dc88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_47dc8c:
    // 0x47dc8c: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x47dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_47dc90:
    // 0x47dc90: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x47dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_47dc94:
    // 0x47dc94: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x47dc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_47dc98:
    // 0x47dc98: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x47dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_47dc9c:
    // 0x47dc9c: 0x40f809  jalr        $v0
label_47dca0:
    if (ctx->pc == 0x47DCA0u) {
        ctx->pc = 0x47DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC9Cu;
        // 0x47dca0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DCA4u;
        goto label_47dca4;
    }
    ctx->pc = 0x47DC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47DCA4u);
        ctx->pc = 0x47DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DC9Cu;
        // 0x47dca0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DC9Cu, 0x47DCA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47DCA4u;
label_47dca4:
    // 0x47dca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47dca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47dca8:
    // 0x47dca8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_47dcac:
    if (ctx->pc == 0x47DCACu) {
        ctx->pc = 0x47DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DCA8u;
        // 0x47dcac: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DCB0u;
        goto label_47dcb0;
    }
    ctx->pc = 0x47DCA8u;
    {
        const bool branch_taken_0x47dca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DCA8u;
        // 0x47dcac: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dca8) {
            ctx->pc = 0x47DCB8u;
            goto label_47dcb8;
        }
    }
    ctx->pc = 0x47DCB0u;
label_47dcb0:
    // 0x47dcb0: 0x10000015  b           . + 4 + (0x15 << 2)
label_47dcb4:
    if (ctx->pc == 0x47DCB4u) {
        ctx->pc = 0x47DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DCB0u;
        // 0x47dcb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DCB8u;
        goto label_47dcb8;
    }
    ctx->pc = 0x47DCB0u;
    {
        const bool branch_taken_0x47dcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DCB0u;
        // 0x47dcb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dcb0) {
            ctx->pc = 0x47DD08u;
            goto label_47dd08;
        }
    }
    ctx->pc = 0x47DCB8u;
label_47dcb8:
    // 0x47dcb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47dcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47dcbc:
    // 0x47dcbc: 0xc10c1fa  jal         func_4307E8
label_47dcc0:
    if (ctx->pc == 0x47DCC0u) {
        ctx->pc = 0x47DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DCBCu;
        // 0x47dcc0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DCC4u;
        goto label_47dcc4;
    }
    ctx->pc = 0x47DCBCu;
    SET_GPR_U32(ctx, 31, 0x47DCC4u);
    ctx->pc = 0x47DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47DCBCu;
    // 0x47dcc0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x47DCBCu, 0x47DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DCC4u;
label_47dcc4:
    // 0x47dcc4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x47dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_47dcc8:
    // 0x47dcc8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x47dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_47dccc:
    // 0x47dccc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x47dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_47dcd0:
    // 0x47dcd0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x47dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_47dcd4:
    // 0x47dcd4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x47dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_47dcd8:
    // 0x47dcd8: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x47dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_47dcdc:
    // 0x47dcdc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x47dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_47dce0:
    // 0x47dce0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x47dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_47dce4:
    // 0x47dce4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x47dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_47dce8:
    // 0x47dce8: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x47dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_47dcec:
    // 0x47dcec: 0xa2050008  sb          $a1, 0x8($s0)
    ctx->pc = 0x47dcecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 5));
label_47dcf0:
    // 0x47dcf0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x47dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_47dcf4:
    // 0x47dcf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47dcf8:
    // 0x47dcf8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x47dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_47dcfc:
    // 0x47dcfc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x47dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_47dd00:
    // 0x47dd00: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x47dd00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_47dd04:
    // 0x47dd04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47dd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47dd08:
    // 0x47dd08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47dd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47dd0c:
    // 0x47dd0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47dd0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47dd10:
    // 0x47dd10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x47dd10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47dd14:
    // 0x47dd14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47dd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47dd18:
    // 0x47dd18: 0x3e00008  jr          $ra
label_47dd1c:
    if (ctx->pc == 0x47DD1Cu) {
        ctx->pc = 0x47DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DD18u;
        // 0x47dd1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47DD20u;
        goto label_47dd20;
    }
    ctx->pc = 0x47DD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47DD18u;
        // 0x47dd1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47DD20u;
label_47dd20:
    // 0x47dd20: 0x24420108  addiu       $v0, $v0, 0x108
    ctx->pc = 0x47dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
label_47dd24:
    // 0x47dd24: 0x0  nop
    ctx->pc = 0x47dd24u;
    // NOP
    ctx->pc = 0x47dd28u;
}
