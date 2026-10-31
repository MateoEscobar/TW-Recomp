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

// Function: sub_0046D9D8
// Address: 0x46d9d8 - 0x46dc30
void sub_0046D9D8_0x46d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D9D8_0x46d9d8");
#endif

    switch (ctx->pc) {
        case 0x46d9d8u: goto label_46d9d8;
        case 0x46d9dcu: goto label_46d9dc;
        case 0x46d9e0u: goto label_46d9e0;
        case 0x46d9e4u: goto label_46d9e4;
        case 0x46d9e8u: goto label_46d9e8;
        case 0x46d9ecu: goto label_46d9ec;
        case 0x46d9f0u: goto label_46d9f0;
        case 0x46d9f4u: goto label_46d9f4;
        case 0x46d9f8u: goto label_46d9f8;
        case 0x46d9fcu: goto label_46d9fc;
        case 0x46da00u: goto label_46da00;
        case 0x46da04u: goto label_46da04;
        case 0x46da08u: goto label_46da08;
        case 0x46da0cu: goto label_46da0c;
        case 0x46da10u: goto label_46da10;
        case 0x46da14u: goto label_46da14;
        case 0x46da18u: goto label_46da18;
        case 0x46da1cu: goto label_46da1c;
        case 0x46da20u: goto label_46da20;
        case 0x46da24u: goto label_46da24;
        case 0x46da28u: goto label_46da28;
        case 0x46da2cu: goto label_46da2c;
        case 0x46da30u: goto label_46da30;
        case 0x46da34u: goto label_46da34;
        case 0x46da38u: goto label_46da38;
        case 0x46da3cu: goto label_46da3c;
        case 0x46da40u: goto label_46da40;
        case 0x46da44u: goto label_46da44;
        case 0x46da48u: goto label_46da48;
        case 0x46da4cu: goto label_46da4c;
        case 0x46da50u: goto label_46da50;
        case 0x46da54u: goto label_46da54;
        case 0x46da58u: goto label_46da58;
        case 0x46da5cu: goto label_46da5c;
        case 0x46da60u: goto label_46da60;
        case 0x46da64u: goto label_46da64;
        case 0x46da68u: goto label_46da68;
        case 0x46da6cu: goto label_46da6c;
        case 0x46da70u: goto label_46da70;
        case 0x46da74u: goto label_46da74;
        case 0x46da78u: goto label_46da78;
        case 0x46da7cu: goto label_46da7c;
        case 0x46da80u: goto label_46da80;
        case 0x46da84u: goto label_46da84;
        case 0x46da88u: goto label_46da88;
        case 0x46da8cu: goto label_46da8c;
        case 0x46da90u: goto label_46da90;
        case 0x46da94u: goto label_46da94;
        case 0x46da98u: goto label_46da98;
        case 0x46da9cu: goto label_46da9c;
        case 0x46daa0u: goto label_46daa0;
        case 0x46daa4u: goto label_46daa4;
        case 0x46daa8u: goto label_46daa8;
        case 0x46daacu: goto label_46daac;
        case 0x46dab0u: goto label_46dab0;
        case 0x46dab4u: goto label_46dab4;
        case 0x46dab8u: goto label_46dab8;
        case 0x46dabcu: goto label_46dabc;
        case 0x46dac0u: goto label_46dac0;
        case 0x46dac4u: goto label_46dac4;
        case 0x46dac8u: goto label_46dac8;
        case 0x46daccu: goto label_46dacc;
        case 0x46dad0u: goto label_46dad0;
        case 0x46dad4u: goto label_46dad4;
        case 0x46dad8u: goto label_46dad8;
        case 0x46dadcu: goto label_46dadc;
        case 0x46dae0u: goto label_46dae0;
        case 0x46dae4u: goto label_46dae4;
        case 0x46dae8u: goto label_46dae8;
        case 0x46daecu: goto label_46daec;
        case 0x46daf0u: goto label_46daf0;
        case 0x46daf4u: goto label_46daf4;
        case 0x46daf8u: goto label_46daf8;
        case 0x46dafcu: goto label_46dafc;
        case 0x46db00u: goto label_46db00;
        case 0x46db04u: goto label_46db04;
        case 0x46db08u: goto label_46db08;
        case 0x46db0cu: goto label_46db0c;
        case 0x46db10u: goto label_46db10;
        case 0x46db14u: goto label_46db14;
        case 0x46db18u: goto label_46db18;
        case 0x46db1cu: goto label_46db1c;
        case 0x46db20u: goto label_46db20;
        case 0x46db24u: goto label_46db24;
        case 0x46db28u: goto label_46db28;
        case 0x46db2cu: goto label_46db2c;
        case 0x46db30u: goto label_46db30;
        case 0x46db34u: goto label_46db34;
        case 0x46db38u: goto label_46db38;
        case 0x46db3cu: goto label_46db3c;
        case 0x46db40u: goto label_46db40;
        case 0x46db44u: goto label_46db44;
        case 0x46db48u: goto label_46db48;
        case 0x46db4cu: goto label_46db4c;
        case 0x46db50u: goto label_46db50;
        case 0x46db54u: goto label_46db54;
        case 0x46db58u: goto label_46db58;
        case 0x46db5cu: goto label_46db5c;
        case 0x46db60u: goto label_46db60;
        case 0x46db64u: goto label_46db64;
        case 0x46db68u: goto label_46db68;
        case 0x46db6cu: goto label_46db6c;
        case 0x46db70u: goto label_46db70;
        case 0x46db74u: goto label_46db74;
        case 0x46db78u: goto label_46db78;
        case 0x46db7cu: goto label_46db7c;
        case 0x46db80u: goto label_46db80;
        case 0x46db84u: goto label_46db84;
        case 0x46db88u: goto label_46db88;
        case 0x46db8cu: goto label_46db8c;
        case 0x46db90u: goto label_46db90;
        case 0x46db94u: goto label_46db94;
        case 0x46db98u: goto label_46db98;
        case 0x46db9cu: goto label_46db9c;
        case 0x46dba0u: goto label_46dba0;
        case 0x46dba4u: goto label_46dba4;
        case 0x46dba8u: goto label_46dba8;
        case 0x46dbacu: goto label_46dbac;
        case 0x46dbb0u: goto label_46dbb0;
        case 0x46dbb4u: goto label_46dbb4;
        case 0x46dbb8u: goto label_46dbb8;
        case 0x46dbbcu: goto label_46dbbc;
        case 0x46dbc0u: goto label_46dbc0;
        case 0x46dbc4u: goto label_46dbc4;
        case 0x46dbc8u: goto label_46dbc8;
        case 0x46dbccu: goto label_46dbcc;
        case 0x46dbd0u: goto label_46dbd0;
        case 0x46dbd4u: goto label_46dbd4;
        case 0x46dbd8u: goto label_46dbd8;
        case 0x46dbdcu: goto label_46dbdc;
        case 0x46dbe0u: goto label_46dbe0;
        case 0x46dbe4u: goto label_46dbe4;
        case 0x46dbe8u: goto label_46dbe8;
        case 0x46dbecu: goto label_46dbec;
        case 0x46dbf0u: goto label_46dbf0;
        case 0x46dbf4u: goto label_46dbf4;
        case 0x46dbf8u: goto label_46dbf8;
        case 0x46dbfcu: goto label_46dbfc;
        case 0x46dc00u: goto label_46dc00;
        case 0x46dc04u: goto label_46dc04;
        case 0x46dc08u: goto label_46dc08;
        case 0x46dc0cu: goto label_46dc0c;
        case 0x46dc10u: goto label_46dc10;
        case 0x46dc14u: goto label_46dc14;
        case 0x46dc18u: goto label_46dc18;
        case 0x46dc1cu: goto label_46dc1c;
        case 0x46dc20u: goto label_46dc20;
        case 0x46dc24u: goto label_46dc24;
        case 0x46dc28u: goto label_46dc28;
        case 0x46dc2cu: goto label_46dc2c;
        default: break;
    }

    ctx->pc = 0x46d9d8u;

label_46d9d8:
    // 0x46d9d8: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x46d9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_46d9dc:
    // 0x46d9dc: 0x7fbe0450  sq          $fp, 0x450($sp)
    ctx->pc = 0x46d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 30));
label_46d9e0:
    // 0x46d9e0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x46d9e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46d9e4:
    // 0x46d9e4: 0xafa60424  sw          $a2, 0x424($sp)
    ctx->pc = 0x46d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 6));
label_46d9e8:
    // 0x46d9e8: 0x7fb004d0  sq          $s0, 0x4D0($sp)
    ctx->pc = 0x46d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 16));
label_46d9ec:
    // 0x46d9ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x46d9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46d9f0:
    // 0x46d9f0: 0x7fb104c0  sq          $s1, 0x4C0($sp)
    ctx->pc = 0x46d9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 17));
label_46d9f4:
    // 0x46d9f4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x46d9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_46d9f8:
    // 0x46d9f8: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x46d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
label_46d9fc:
    // 0x46d9fc: 0x7fb304a0  sq          $s3, 0x4A0($sp)
    ctx->pc = 0x46d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 19));
label_46da00:
    // 0x46da00: 0x7fb40490  sq          $s4, 0x490($sp)
    ctx->pc = 0x46da00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 20));
label_46da04:
    // 0x46da04: 0x7fb50480  sq          $s5, 0x480($sp)
    ctx->pc = 0x46da04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 21));
label_46da08:
    // 0x46da08: 0x7fb60470  sq          $s6, 0x470($sp)
    ctx->pc = 0x46da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 22));
label_46da0c:
    // 0x46da0c: 0x7fb70460  sq          $s7, 0x460($sp)
    ctx->pc = 0x46da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 23));
label_46da10:
    // 0x46da10: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x46da10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_46da14:
    // 0x46da14: 0xc11ef80  jal         func_47BE00
label_46da18:
    if (ctx->pc == 0x46DA18u) {
        ctx->pc = 0x46DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA14u;
        // 0x46da18: 0xafa40420  sw          $a0, 0x420($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DA1Cu;
        goto label_46da1c;
    }
    ctx->pc = 0x46DA14u;
    SET_GPR_U32(ctx, 31, 0x46DA1Cu);
    ctx->pc = 0x46DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46DA14u;
    // 0x46da18: 0xafa40420  sw          $a0, 0x420($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46DA14u, 0x46DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DA1Cu;
label_46da1c:
    // 0x46da1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46da20:
    if (ctx->pc == 0x46DA20u) {
        ctx->pc = 0x46DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA1Cu;
        // 0x46da20: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DA24u;
        goto label_46da24;
    }
    ctx->pc = 0x46DA1Cu;
    {
        const bool branch_taken_0x46da1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA1Cu;
        // 0x46da20: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46da1c) {
            ctx->pc = 0x46DA2Cu;
            goto label_46da2c;
        }
    }
    ctx->pc = 0x46DA24u;
label_46da24:
    // 0x46da24: 0x10000076  b           . + 4 + (0x76 << 2)
label_46da28:
    if (ctx->pc == 0x46DA28u) {
        ctx->pc = 0x46DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA24u;
        // 0x46da28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DA2Cu;
        goto label_46da2c;
    }
    ctx->pc = 0x46DA24u;
    {
        const bool branch_taken_0x46da24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA24u;
        // 0x46da28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46da24) {
            ctx->pc = 0x46DC00u;
            goto label_46dc00;
        }
    }
    ctx->pc = 0x46DA2Cu;
label_46da2c:
    // 0x46da2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x46da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_46da30:
    // 0x46da30: 0x93c50000  lbu         $a1, 0x0($fp)
    ctx->pc = 0x46da30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_46da34:
    // 0x46da34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x46da34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_46da38:
    // 0x46da38: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_46da3c:
    if (ctx->pc == 0x46DA3Cu) {
        ctx->pc = 0x46DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA38u;
        // 0x46da3c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DA40u;
        goto label_46da40;
    }
    ctx->pc = 0x46DA38u;
    {
        const bool branch_taken_0x46da38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x46DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA38u;
        // 0x46da3c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46da38) {
            ctx->pc = 0x46DA54u;
            goto label_46da54;
        }
    }
    ctx->pc = 0x46DA40u;
label_46da40:
    // 0x46da40: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x46da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_46da44:
    // 0x46da44: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x46da44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_46da48:
    // 0x46da48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46da4c:
    // 0x46da4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_46da50:
    if (ctx->pc == 0x46DA50u) {
        ctx->pc = 0x46DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA4Cu;
        // 0x46da50: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DA54u;
        goto label_46da54;
    }
    ctx->pc = 0x46DA4Cu;
    {
        const bool branch_taken_0x46da4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA4Cu;
        // 0x46da50: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46da4c) {
            ctx->pc = 0x46DA78u;
            goto label_46da78;
        }
    }
    ctx->pc = 0x46DA54u;
label_46da54:
    // 0x46da54: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x46da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_46da58:
    // 0x46da58: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
label_46da5c:
    if (ctx->pc == 0x46DA5Cu) {
        ctx->pc = 0x46DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA58u;
        // 0x46da5c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DA60u;
        goto label_46da60;
    }
    ctx->pc = 0x46DA58u;
    {
        const bool branch_taken_0x46da58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x46DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA58u;
        // 0x46da5c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46da58) {
            ctx->pc = 0x46DA84u;
            goto label_46da84;
        }
    }
    ctx->pc = 0x46DA60u;
label_46da60:
    // 0x46da60: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x46da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_46da64:
    // 0x46da64: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x46da64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_46da68:
    // 0x46da68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46da68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46da6c:
    // 0x46da6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_46da70:
    if (ctx->pc == 0x46DA70u) {
        ctx->pc = 0x46DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA6Cu;
        // 0x46da70: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DA74u;
        goto label_46da74;
    }
    ctx->pc = 0x46DA6Cu;
    {
        const bool branch_taken_0x46da6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA6Cu;
        // 0x46da70: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46da6c) {
            ctx->pc = 0x46DA84u;
            goto label_46da84;
        }
    }
    ctx->pc = 0x46DA74u;
label_46da74:
    // 0x46da74: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x46da74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_46da78:
    // 0x46da78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x46da78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_46da7c:
    // 0x46da7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x46da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_46da80:
    // 0x46da80: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46da80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46da84:
    // 0x46da84: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46da84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46da88:
    // 0x46da88: 0x2450ad18  addiu       $s0, $v0, -0x52E8
    ctx->pc = 0x46da88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46da8c:
    // 0x46da8c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x46da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_46da90:
    // 0x46da90: 0x40f809  jalr        $v0
label_46da94:
    if (ctx->pc == 0x46DA94u) {
        ctx->pc = 0x46DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA90u;
        // 0x46da94: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DA98u;
        goto label_46da98;
    }
    ctx->pc = 0x46DA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DA98u);
        ctx->pc = 0x46DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA90u;
        // 0x46da94: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DA90u, 0x46DA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DA98u;
label_46da98:
    // 0x46da98: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x46da98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46da9c:
    // 0x46da9c: 0x12e00057  beqz        $s7, . + 4 + (0x57 << 2)
label_46daa0:
    if (ctx->pc == 0x46DAA0u) {
        ctx->pc = 0x46DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA9Cu;
        // 0x46daa0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DAA4u;
        goto label_46daa4;
    }
    ctx->pc = 0x46DA9Cu;
    {
        const bool branch_taken_0x46da9c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DA9Cu;
        // 0x46daa0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46da9c) {
            ctx->pc = 0x46DBFCu;
            goto label_46dbfc;
        }
    }
    ctx->pc = 0x46DAA4u;
label_46daa4:
    // 0x46daa4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x46daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_46daa8:
    // 0x46daa8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x46daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_46daac:
    // 0x46daac: 0x26f50010  addiu       $s5, $s7, 0x10
    ctx->pc = 0x46daacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_46dab0:
    // 0x46dab0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x46dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_46dab4:
    // 0x46dab4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x46dab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_46dab8:
    // 0x46dab8: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x46dab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_46dabc:
    // 0x46dabc: 0xa6e20004  sh          $v0, 0x4($s7)
    ctx->pc = 0x46dabcu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 2));
label_46dac0:
    // 0x46dac0: 0x2a3a021  addu        $s4, $s5, $v1
    ctx->pc = 0x46dac0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_46dac4:
    // 0x46dac4: 0x8f8288e8  lw          $v0, -0x7718($gp)
    ctx->pc = 0x46dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46dac8:
    // 0x46dac8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46dacc:
    // 0x46dacc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x46daccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_46dad0:
    // 0x46dad0: 0xa6e30006  sh          $v1, 0x6($s7)
    ctx->pc = 0x46dad0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 3));
label_46dad4:
    // 0x46dad4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x46dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_46dad8:
    // 0x46dad8: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x46dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
label_46dadc:
    // 0x46dadc: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x46dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
label_46dae0:
    // 0x46dae0: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
label_46dae4:
    // 0x46dae4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_46dae8:
    // 0x46dae8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x46dae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_46daec:
    // 0x46daec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46daf0:
    // 0x46daf0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x46daf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_46daf4:
    // 0x46daf4: 0x96f60004  lhu         $s6, 0x4($s7)
    ctx->pc = 0x46daf4u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
label_46daf8:
    // 0x46daf8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x46daf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46dafc:
    // 0x46dafc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_46db00:
    if (ctx->pc == 0x46DB00u) {
        ctx->pc = 0x46DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DAFCu;
        // 0x46db00: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DB04u;
        goto label_46db04;
    }
    ctx->pc = 0x46DAFCu;
    {
        const bool branch_taken_0x46dafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DAFCu;
        // 0x46db00: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dafc) {
            ctx->pc = 0x46DBFCu;
            goto label_46dbfc;
        }
    }
    ctx->pc = 0x46DB04u;
label_46db04:
    // 0x46db04: 0x0  nop
    ctx->pc = 0x46db04u;
    // NOP
label_46db08:
    // 0x46db08: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x46db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_46db0c:
    // 0x46db0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x46db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_46db10:
    // 0x46db10: 0xc11ef80  jal         func_47BE00
label_46db14:
    if (ctx->pc == 0x46DB14u) {
        ctx->pc = 0x46DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB10u;
        // 0x46db14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DB18u;
        goto label_46db18;
    }
    ctx->pc = 0x46DB10u;
    SET_GPR_U32(ctx, 31, 0x46DB18u);
    ctx->pc = 0x46DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46DB10u;
    // 0x46db14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46DB10u, 0x46DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DB18u;
label_46db18:
    // 0x46db18: 0x1040ffc2  beqz        $v0, . + 4 + (-0x3E << 2)
label_46db1c:
    if (ctx->pc == 0x46DB1Cu) {
        ctx->pc = 0x46DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB18u;
        // 0x46db1c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DB20u;
        goto label_46db20;
    }
    ctx->pc = 0x46DB18u;
    {
        const bool branch_taken_0x46db18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB18u;
        // 0x46db1c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46db18) {
            ctx->pc = 0x46DA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46da24;
        }
    }
    ctx->pc = 0x46DB20u;
label_46db20:
    // 0x46db20: 0x8fa40424  lw          $a0, 0x424($sp)
    ctx->pc = 0x46db20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
label_46db24:
    // 0x46db24: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x46db24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_46db28:
    // 0x46db28: 0xc11b5bc  jal         func_46D6F0
label_46db2c:
    if (ctx->pc == 0x46DB2Cu) {
        ctx->pc = 0x46DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB28u;
        // 0x46db2c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DB30u;
        goto label_46db30;
    }
    ctx->pc = 0x46DB28u;
    SET_GPR_U32(ctx, 31, 0x46DB30u);
    ctx->pc = 0x46DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46DB28u;
    // 0x46db2c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D6F0u, 0x46DB28u, 0x46DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DB30u;
label_46db30:
    // 0x46db30: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x46db30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_46db34:
    // 0x46db34: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x46db34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_46db38:
    // 0x46db38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x46db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_46db3c:
    // 0x46db3c: 0x93c30000  lbu         $v1, 0x0($fp)
    ctx->pc = 0x46db3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_46db40:
    // 0x46db40: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_46db44:
    if (ctx->pc == 0x46DB44u) {
        ctx->pc = 0x46DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB40u;
        // 0x46db44: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DB48u;
        goto label_46db48;
    }
    ctx->pc = 0x46DB40u;
    {
        const bool branch_taken_0x46db40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x46DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB40u;
        // 0x46db44: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46db40) {
            ctx->pc = 0x46DB5Cu;
            goto label_46db5c;
        }
    }
    ctx->pc = 0x46DB48u;
label_46db48:
    // 0x46db48: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x46db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_46db4c:
    // 0x46db4c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x46db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_46db50:
    // 0x46db50: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x46db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_46db54:
    // 0x46db54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_46db58:
    if (ctx->pc == 0x46DB58u) {
        ctx->pc = 0x46DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB54u;
        // 0x46db58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DB5Cu;
        goto label_46db5c;
    }
    ctx->pc = 0x46DB54u;
    {
        const bool branch_taken_0x46db54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB54u;
        // 0x46db58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46db54) {
            ctx->pc = 0x46DB78u;
            goto label_46db78;
        }
    }
    ctx->pc = 0x46DB5Cu;
label_46db5c:
    // 0x46db5c: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_46db60:
    if (ctx->pc == 0x46DB60u) {
        ctx->pc = 0x46DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB5Cu;
        // 0x46db60: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DB64u;
        goto label_46db64;
    }
    ctx->pc = 0x46DB5Cu;
    {
        const bool branch_taken_0x46db5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x46DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB5Cu;
        // 0x46db60: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46db5c) {
            ctx->pc = 0x46DBF0u;
            goto label_46dbf0;
        }
    }
    ctx->pc = 0x46DB64u;
label_46db64:
    // 0x46db64: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x46db64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_46db68:
    // 0x46db68: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x46db68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_46db6c:
    // 0x46db6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46db70:
    // 0x46db70: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_46db74:
    if (ctx->pc == 0x46DB74u) {
        ctx->pc = 0x46DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB70u;
        // 0x46db74: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DB78u;
        goto label_46db78;
    }
    ctx->pc = 0x46DB70u;
    {
        const bool branch_taken_0x46db70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB70u;
        // 0x46db74: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46db70) {
            ctx->pc = 0x46DBF0u;
            goto label_46dbf0;
        }
    }
    ctx->pc = 0x46DB78u;
label_46db78:
    // 0x46db78: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x46db78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_46db7c:
    // 0x46db7c: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_46db80:
    if (ctx->pc == 0x46DB80u) {
        ctx->pc = 0x46DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB7Cu;
        // 0x46db80: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DB84u;
        goto label_46db84;
    }
    ctx->pc = 0x46DB7Cu;
    {
        const bool branch_taken_0x46db7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DB7Cu;
        // 0x46db80: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46db7c) {
            ctx->pc = 0x46DBF0u;
            goto label_46dbf0;
        }
    }
    ctx->pc = 0x46DB84u;
label_46db84:
    // 0x46db84: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x46db84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_46db88:
    // 0x46db88: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x46db88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_46db8c:
    // 0x46db8c: 0x0  nop
    ctx->pc = 0x46db8cu;
    // NOP
label_46db90:
    // 0x46db90: 0x2e420101  sltiu       $v0, $s2, 0x101
    ctx->pc = 0x46db90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_46db94:
    // 0x46db94: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x46db94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_46db98:
    // 0x46db98: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x46db98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46db9c:
    // 0x46db9c: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x46db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_46dba0:
    // 0x46dba0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x46dba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46dba4:
    // 0x46dba4: 0x7fa70430  sq          $a3, 0x430($sp)
    ctx->pc = 0x46dba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 7));
label_46dba8:
    // 0x46dba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46dba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46dbac:
    // 0x46dbac: 0xc11ef80  jal         func_47BE00
label_46dbb0:
    if (ctx->pc == 0x46DBB0u) {
        ctx->pc = 0x46DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBACu;
        // 0x46dbb0: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DBB4u;
        goto label_46dbb4;
    }
    ctx->pc = 0x46DBACu;
    SET_GPR_U32(ctx, 31, 0x46DBB4u);
    ctx->pc = 0x46DBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46DBACu;
    // 0x46dbb0: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x46DBACu, 0x46DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DBB4u;
label_46dbb4:
    // 0x46dbb4: 0x1040ff9b  beqz        $v0, . + 4 + (-0x65 << 2)
label_46dbb8:
    if (ctx->pc == 0x46DBB8u) {
        ctx->pc = 0x46DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBB4u;
        // 0x46dbb8: 0x7ba70430  lq          $a3, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DBBCu;
        goto label_46dbbc;
    }
    ctx->pc = 0x46DBB4u;
    {
        const bool branch_taken_0x46dbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBB4u;
        // 0x46dbb8: 0x7ba70430  lq          $a3, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dbb4) {
            ctx->pc = 0x46DA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46da24;
        }
    }
    ctx->pc = 0x46DBBCu;
label_46dbbc:
    // 0x46dbbc: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x46dbbcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_46dbc0:
    // 0x46dbc0: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_46dbc4:
    if (ctx->pc == 0x46DBC4u) {
        ctx->pc = 0x46DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBC0u;
        // 0x46dbc4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DBC8u;
        goto label_46dbc8;
    }
    ctx->pc = 0x46DBC0u;
    {
        const bool branch_taken_0x46dbc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBC0u;
        // 0x46dbc4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dbc0) {
            ctx->pc = 0x46DBE4u;
            goto label_46dbe4;
        }
    }
    ctx->pc = 0x46DBC8u;
label_46dbc8:
    // 0x46dbc8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x46dbc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_46dbcc:
    // 0x46dbcc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x46dbccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46dbd0:
    // 0x46dbd0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x46dbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_46dbd4:
    // 0x46dbd4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x46dbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_46dbd8:
    // 0x46dbd8: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x46dbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_46dbdc:
    // 0x46dbdc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_46dbe0:
    if (ctx->pc == 0x46DBE0u) {
        ctx->pc = 0x46DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBDCu;
        // 0x46dbe0: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DBE4u;
        goto label_46dbe4;
    }
    ctx->pc = 0x46DBDCu;
    {
        const bool branch_taken_0x46dbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBDCu;
        // 0x46dbe0: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dbdc) {
            ctx->pc = 0x46DBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46dbc8;
        }
    }
    ctx->pc = 0x46DBE4u;
label_46dbe4:
    // 0x46dbe4: 0x5640ffea  bnel        $s2, $zero, . + 4 + (-0x16 << 2)
label_46dbe8:
    if (ctx->pc == 0x46DBE8u) {
        ctx->pc = 0x46DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBE4u;
        // 0x46dbe8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DBECu;
        goto label_46dbec;
    }
    ctx->pc = 0x46DBE4u;
    {
        const bool branch_taken_0x46dbe4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x46dbe4) {
            ctx->pc = 0x46DBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46DBE4u;
            // 0x46dbe8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46DB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46db90;
        }
    }
    ctx->pc = 0x46DBECu;
label_46dbec:
    // 0x46dbec: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x46dbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46dbf0:
    // 0x46dbf0: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x46dbf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_46dbf4:
    // 0x46dbf4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_46dbf8:
    if (ctx->pc == 0x46DBF8u) {
        ctx->pc = 0x46DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBF4u;
        // 0x46dbf8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DBFCu;
        goto label_46dbfc;
    }
    ctx->pc = 0x46DBF4u;
    {
        const bool branch_taken_0x46dbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DBF4u;
        // 0x46dbf8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dbf4) {
            ctx->pc = 0x46DB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46db08;
        }
    }
    ctx->pc = 0x46DBFCu;
label_46dbfc:
    // 0x46dbfc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x46dbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46dc00:
    // 0x46dc00: 0x7bb004d0  lq          $s0, 0x4D0($sp)
    ctx->pc = 0x46dc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_46dc04:
    // 0x46dc04: 0x7bb104c0  lq          $s1, 0x4C0($sp)
    ctx->pc = 0x46dc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_46dc08:
    // 0x46dc08: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x46dc08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_46dc0c:
    // 0x46dc0c: 0x7bb304a0  lq          $s3, 0x4A0($sp)
    ctx->pc = 0x46dc0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_46dc10:
    // 0x46dc10: 0x7bb40490  lq          $s4, 0x490($sp)
    ctx->pc = 0x46dc10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_46dc14:
    // 0x46dc14: 0x7bb50480  lq          $s5, 0x480($sp)
    ctx->pc = 0x46dc14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_46dc18:
    // 0x46dc18: 0x7bb60470  lq          $s6, 0x470($sp)
    ctx->pc = 0x46dc18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_46dc1c:
    // 0x46dc1c: 0x7bb70460  lq          $s7, 0x460($sp)
    ctx->pc = 0x46dc1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_46dc20:
    // 0x46dc20: 0x7bbe0450  lq          $fp, 0x450($sp)
    ctx->pc = 0x46dc20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_46dc24:
    // 0x46dc24: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x46dc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_46dc28:
    // 0x46dc28: 0x3e00008  jr          $ra
label_46dc2c:
    if (ctx->pc == 0x46DC2Cu) {
        ctx->pc = 0x46DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DC28u;
        // 0x46dc2c: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DC30u;
        goto label_fallthrough_0x46dc28;
    }
    ctx->pc = 0x46DC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DC28u;
        // 0x46dc2c: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46dc28:
    ctx->pc = 0x46DC30u;
}
