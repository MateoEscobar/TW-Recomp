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

// Function: sub_00410308
// Address: 0x410308 - 0x410558
void sub_00410308_0x410308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410308_0x410308");
#endif

    switch (ctx->pc) {
        case 0x410308u: goto label_410308;
        case 0x41030cu: goto label_41030c;
        case 0x410310u: goto label_410310;
        case 0x410314u: goto label_410314;
        case 0x410318u: goto label_410318;
        case 0x41031cu: goto label_41031c;
        case 0x410320u: goto label_410320;
        case 0x410324u: goto label_410324;
        case 0x410328u: goto label_410328;
        case 0x41032cu: goto label_41032c;
        case 0x410330u: goto label_410330;
        case 0x410334u: goto label_410334;
        case 0x410338u: goto label_410338;
        case 0x41033cu: goto label_41033c;
        case 0x410340u: goto label_410340;
        case 0x410344u: goto label_410344;
        case 0x410348u: goto label_410348;
        case 0x41034cu: goto label_41034c;
        case 0x410350u: goto label_410350;
        case 0x410354u: goto label_410354;
        case 0x410358u: goto label_410358;
        case 0x41035cu: goto label_41035c;
        case 0x410360u: goto label_410360;
        case 0x410364u: goto label_410364;
        case 0x410368u: goto label_410368;
        case 0x41036cu: goto label_41036c;
        case 0x410370u: goto label_410370;
        case 0x410374u: goto label_410374;
        case 0x410378u: goto label_410378;
        case 0x41037cu: goto label_41037c;
        case 0x410380u: goto label_410380;
        case 0x410384u: goto label_410384;
        case 0x410388u: goto label_410388;
        case 0x41038cu: goto label_41038c;
        case 0x410390u: goto label_410390;
        case 0x410394u: goto label_410394;
        case 0x410398u: goto label_410398;
        case 0x41039cu: goto label_41039c;
        case 0x4103a0u: goto label_4103a0;
        case 0x4103a4u: goto label_4103a4;
        case 0x4103a8u: goto label_4103a8;
        case 0x4103acu: goto label_4103ac;
        case 0x4103b0u: goto label_4103b0;
        case 0x4103b4u: goto label_4103b4;
        case 0x4103b8u: goto label_4103b8;
        case 0x4103bcu: goto label_4103bc;
        case 0x4103c0u: goto label_4103c0;
        case 0x4103c4u: goto label_4103c4;
        case 0x4103c8u: goto label_4103c8;
        case 0x4103ccu: goto label_4103cc;
        case 0x4103d0u: goto label_4103d0;
        case 0x4103d4u: goto label_4103d4;
        case 0x4103d8u: goto label_4103d8;
        case 0x4103dcu: goto label_4103dc;
        case 0x4103e0u: goto label_4103e0;
        case 0x4103e4u: goto label_4103e4;
        case 0x4103e8u: goto label_4103e8;
        case 0x4103ecu: goto label_4103ec;
        case 0x4103f0u: goto label_4103f0;
        case 0x4103f4u: goto label_4103f4;
        case 0x4103f8u: goto label_4103f8;
        case 0x4103fcu: goto label_4103fc;
        case 0x410400u: goto label_410400;
        case 0x410404u: goto label_410404;
        case 0x410408u: goto label_410408;
        case 0x41040cu: goto label_41040c;
        case 0x410410u: goto label_410410;
        case 0x410414u: goto label_410414;
        case 0x410418u: goto label_410418;
        case 0x41041cu: goto label_41041c;
        case 0x410420u: goto label_410420;
        case 0x410424u: goto label_410424;
        case 0x410428u: goto label_410428;
        case 0x41042cu: goto label_41042c;
        case 0x410430u: goto label_410430;
        case 0x410434u: goto label_410434;
        case 0x410438u: goto label_410438;
        case 0x41043cu: goto label_41043c;
        case 0x410440u: goto label_410440;
        case 0x410444u: goto label_410444;
        case 0x410448u: goto label_410448;
        case 0x41044cu: goto label_41044c;
        case 0x410450u: goto label_410450;
        case 0x410454u: goto label_410454;
        case 0x410458u: goto label_410458;
        case 0x41045cu: goto label_41045c;
        case 0x410460u: goto label_410460;
        case 0x410464u: goto label_410464;
        case 0x410468u: goto label_410468;
        case 0x41046cu: goto label_41046c;
        case 0x410470u: goto label_410470;
        case 0x410474u: goto label_410474;
        case 0x410478u: goto label_410478;
        case 0x41047cu: goto label_41047c;
        case 0x410480u: goto label_410480;
        case 0x410484u: goto label_410484;
        case 0x410488u: goto label_410488;
        case 0x41048cu: goto label_41048c;
        case 0x410490u: goto label_410490;
        case 0x410494u: goto label_410494;
        case 0x410498u: goto label_410498;
        case 0x41049cu: goto label_41049c;
        case 0x4104a0u: goto label_4104a0;
        case 0x4104a4u: goto label_4104a4;
        case 0x4104a8u: goto label_4104a8;
        case 0x4104acu: goto label_4104ac;
        case 0x4104b0u: goto label_4104b0;
        case 0x4104b4u: goto label_4104b4;
        case 0x4104b8u: goto label_4104b8;
        case 0x4104bcu: goto label_4104bc;
        case 0x4104c0u: goto label_4104c0;
        case 0x4104c4u: goto label_4104c4;
        case 0x4104c8u: goto label_4104c8;
        case 0x4104ccu: goto label_4104cc;
        case 0x4104d0u: goto label_4104d0;
        case 0x4104d4u: goto label_4104d4;
        case 0x4104d8u: goto label_4104d8;
        case 0x4104dcu: goto label_4104dc;
        case 0x4104e0u: goto label_4104e0;
        case 0x4104e4u: goto label_4104e4;
        case 0x4104e8u: goto label_4104e8;
        case 0x4104ecu: goto label_4104ec;
        case 0x4104f0u: goto label_4104f0;
        case 0x4104f4u: goto label_4104f4;
        case 0x4104f8u: goto label_4104f8;
        case 0x4104fcu: goto label_4104fc;
        case 0x410500u: goto label_410500;
        case 0x410504u: goto label_410504;
        case 0x410508u: goto label_410508;
        case 0x41050cu: goto label_41050c;
        case 0x410510u: goto label_410510;
        case 0x410514u: goto label_410514;
        case 0x410518u: goto label_410518;
        case 0x41051cu: goto label_41051c;
        case 0x410520u: goto label_410520;
        case 0x410524u: goto label_410524;
        case 0x410528u: goto label_410528;
        case 0x41052cu: goto label_41052c;
        case 0x410530u: goto label_410530;
        case 0x410534u: goto label_410534;
        case 0x410538u: goto label_410538;
        case 0x41053cu: goto label_41053c;
        case 0x410540u: goto label_410540;
        case 0x410544u: goto label_410544;
        case 0x410548u: goto label_410548;
        case 0x41054cu: goto label_41054c;
        case 0x410550u: goto label_410550;
        case 0x410554u: goto label_410554;
        default: break;
    }

    ctx->pc = 0x410308u;

label_410308:
    // 0x410308: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x410308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_41030c:
    // 0x41030c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x41030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_410310:
    // 0x410310: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x410310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410314:
    // 0x410314: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x410314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_410318:
    // 0x410318: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x410318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_41031c:
    // 0x41031c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410320:
    // 0x410320: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x410320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_410324:
    // 0x410324: 0x266308f8  addiu       $v1, $s3, 0x8F8
    ctx->pc = 0x410324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2296));
label_410328:
    // 0x410328: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x410328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_41032c:
    // 0x41032c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x41032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_410330:
    // 0x410330: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x410330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_410334:
    // 0x410334: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x410334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_410338:
    // 0x410338: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x410338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_41033c:
    // 0x41033c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_410340:
    // 0x410340: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x410340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_410344:
    // 0x410344: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x410344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_410348:
    // 0x410348: 0x2c820012  sltiu       $v0, $a0, 0x12
    ctx->pc = 0x410348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_41034c:
    // 0x41034c: 0x0  nop
    ctx->pc = 0x41034cu;
    // NOP
label_410350:
    // 0x410350: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_410354:
    if (ctx->pc == 0x410354u) {
        ctx->pc = 0x410354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410350u;
        // 0x410354: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410358u;
        goto label_410358;
    }
    ctx->pc = 0x410350u;
    {
        const bool branch_taken_0x410350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x410354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410350u;
        // 0x410354: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410350) {
            ctx->pc = 0x410340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410340;
        }
    }
    ctx->pc = 0x410358u;
label_410358:
    // 0x410358: 0x26641200  addiu       $a0, $s3, 0x1200
    ctx->pc = 0x410358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4608));
label_41035c:
    // 0x41035c: 0x26620940  addiu       $v0, $s3, 0x940
    ctx->pc = 0x41035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
label_410360:
    // 0x410360: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x410360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_410364:
    // 0x410364: 0x2403008b  addiu       $v1, $zero, 0x8B
    ctx->pc = 0x410364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_410368:
    // 0x410368: 0x26641204  addiu       $a0, $s3, 0x1204
    ctx->pc = 0x410368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4612));
label_41036c:
    // 0x41036c: 0x267e1208  addiu       $fp, $s3, 0x1208
    ctx->pc = 0x41036cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 4616));
label_410370:
    // 0x410370: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x410370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_410374:
    // 0x410374: 0x2664120c  addiu       $a0, $s3, 0x120C
    ctx->pc = 0x410374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4620));
label_410378:
    // 0x410378: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x410378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_41037c:
    // 0x41037c: 0x26641210  addiu       $a0, $s3, 0x1210
    ctx->pc = 0x41037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4624));
label_410380:
    // 0x410380: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x410380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_410384:
    // 0x410384: 0x26641214  addiu       $a0, $s3, 0x1214
    ctx->pc = 0x410384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4628));
label_410388:
    // 0x410388: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x410388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_41038c:
    // 0x41038c: 0x26641218  addiu       $a0, $s3, 0x1218
    ctx->pc = 0x41038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4632));
label_410390:
    // 0x410390: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x410390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_410394:
    // 0x410394: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x410394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_410398:
    // 0x410398: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x410398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_41039c:
    // 0x41039c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x41039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4103a0:
    // 0x4103a0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4103a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4103a4:
    // 0x4103a4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4103a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_4103a8:
    // 0x4103a8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_4103ac:
    if (ctx->pc == 0x4103ACu) {
        ctx->pc = 0x4103ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103A8u;
        // 0x4103ac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4103B0u;
        goto label_4103b0;
    }
    ctx->pc = 0x4103A8u;
    {
        const bool branch_taken_0x4103a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4103ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103A8u;
        // 0x4103ac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4103a8) {
            ctx->pc = 0x410398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410398;
        }
    }
    ctx->pc = 0x4103B0u;
label_4103b0:
    // 0x4103b0: 0x26700940  addiu       $s0, $s3, 0x940
    ctx->pc = 0x4103b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
label_4103b4:
    // 0x4103b4: 0x2417008b  addiu       $s7, $zero, 0x8B
    ctx->pc = 0x4103b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_4103b8:
    // 0x4103b8: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x4103b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4103bc:
    // 0x4103bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4103bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4103c0:
    // 0x4103c0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x4103c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4103c4:
    // 0x4103c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4103c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4103c8:
    // 0x4103c8: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x4103c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4103cc:
    // 0x4103cc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_4103d0:
    if (ctx->pc == 0x4103D0u) {
        ctx->pc = 0x4103D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103CCu;
        // 0x4103d0: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4103D4u;
        goto label_4103d4;
    }
    ctx->pc = 0x4103CCu;
    {
        const bool branch_taken_0x4103cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4103D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4103CCu;
        // 0x4103d0: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4103cc) {
            ctx->pc = 0x410478u;
            goto label_410478;
        }
    }
    ctx->pc = 0x4103D4u;
label_4103d4:
    // 0x4103d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4103d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4103d8:
    // 0x4103d8: 0x8ec9b9c0  lw          $t1, -0x4640($s6)
    ctx->pc = 0x4103d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949312)));
label_4103dc:
    // 0x4103dc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4103dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4103e0:
    // 0x4103e0: 0x24758d70  addiu       $s5, $v1, -0x7290
    ctx->pc = 0x4103e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937968));
label_4103e4:
    // 0x4103e4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x4103e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4103e8:
    // 0x4103e8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4103e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4103ec:
    // 0x4103ec: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4103ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_4103f0:
    // 0x4103f0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4103f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4103f4:
    // 0x4103f4: 0x24858d98  addiu       $a1, $a0, -0x7268
    ctx->pc = 0x4103f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938008));
label_4103f8:
    // 0x4103f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4103f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4103fc:
    // 0x4103fc: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x4103fcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_410400:
    // 0x410400: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x410400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_410404:
    // 0x410404: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x410404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_410408:
    // 0x410408: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x410408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_41040c:
    // 0x41040c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x41040cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_410410:
    // 0x410410: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x410410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_410414:
    // 0x410414: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x410414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_410418:
    // 0x410418: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x410418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_41041c:
    // 0x41041c: 0x246a8da0  addiu       $t2, $v1, -0x7260
    ctx->pc = 0x41041cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938016));
label_410420:
    // 0x410420: 0x40f809  jalr        $v0
label_410424:
    if (ctx->pc == 0x410424u) {
        ctx->pc = 0x410424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410420u;
        // 0x410424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410428u;
        goto label_410428;
    }
    ctx->pc = 0x410420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410428u);
        ctx->pc = 0x410424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410420u;
        // 0x410424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410420u, 0x410428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410428u;
label_410428:
    // 0x410428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x410428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41042c:
    // 0x41042c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41042cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410430:
    // 0x410430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x410430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410434:
    // 0x410434: 0xc10c1bb  jal         func_4306EC
label_410438:
    if (ctx->pc == 0x410438u) {
        ctx->pc = 0x410438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410434u;
        // 0x410438: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41043Cu;
        goto label_41043c;
    }
    ctx->pc = 0x410434u;
    SET_GPR_U32(ctx, 31, 0x41043Cu);
    ctx->pc = 0x410438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410434u;
    // 0x410438: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x410434u, 0x41043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41043Cu;
label_41043c:
    // 0x41043c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x41043cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_410440:
    // 0x410440: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_410444:
    if (ctx->pc == 0x410444u) {
        ctx->pc = 0x410444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410440u;
        // 0x410444: 0x8ec8b9c0  lw          $t0, -0x4640($s6) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410448u;
        goto label_410448;
    }
    ctx->pc = 0x410440u;
    {
        const bool branch_taken_0x410440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x410444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410440u;
        // 0x410444: 0x8ec8b9c0  lw          $t0, -0x4640($s6) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410440) {
            ctx->pc = 0x410464u;
            goto label_410464;
        }
    }
    ctx->pc = 0x410448u;
label_410448:
    // 0x410448: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x410448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41044c:
    // 0x41044c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x41044cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_410450:
    // 0x410450: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x410450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_410454:
    // 0x410454: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x410454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_410458:
    // 0x410458: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x410458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_41045c:
    // 0x41045c: 0x60f809  jalr        $v1
label_410460:
    if (ctx->pc == 0x410460u) {
        ctx->pc = 0x410460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41045Cu;
        // 0x410460: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410464u;
        goto label_410464;
    }
    ctx->pc = 0x41045Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410464u);
        ctx->pc = 0x410460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41045Cu;
        // 0x410460: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41045Cu, 0x410464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410464u;
label_410464:
    // 0x410464: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x410464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_410468:
    // 0x410468: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x410468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_41046c:
    // 0x41046c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x41046cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_410470:
    // 0x410470: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x410470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_410474:
    // 0x410474: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x410474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_410478:
    // 0x410478: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x410478u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_41047c:
    // 0x41047c: 0x6e1ffce  bgez        $s7, . + 4 + (-0x32 << 2)
label_410480:
    if (ctx->pc == 0x410480u) {
        ctx->pc = 0x410480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41047Cu;
        // 0x410480: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410484u;
        goto label_410484;
    }
    ctx->pc = 0x41047Cu;
    {
        const bool branch_taken_0x41047c = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x410480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41047Cu;
        // 0x410480: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41047c) {
            ctx->pc = 0x4103B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4103b8;
        }
    }
    ctx->pc = 0x410484u;
label_410484:
    // 0x410484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x410484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_410488:
    // 0x410488: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x410488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_41048c:
    // 0x41048c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x41048cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_410490:
    // 0x410490: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x410490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_410494:
    // 0x410494: 0x246a0f50  addiu       $t2, $v1, 0xF50
    ctx->pc = 0x410494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 3920));
label_410498:
    // 0x410498: 0x8fa90024  lw          $t1, 0x24($sp)
    ctx->pc = 0x410498u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_41049c:
    // 0x41049c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x41049cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_4104a0:
    // 0x4104a0: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x4104a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4104a4:
    // 0x4104a4: 0xae602158  sw          $zero, 0x2158($s3)
    ctx->pc = 0x4104a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8536), GPR_U32(ctx, 0));
label_4104a8:
    // 0x4104a8: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x4104a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_4104ac:
    // 0x4104ac: 0xae60215c  sw          $zero, 0x215C($s3)
    ctx->pc = 0x4104acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8540), GPR_U32(ctx, 0));
label_4104b0:
    // 0x4104b0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x4104b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4104b4:
    // 0x4104b4: 0xae602160  sw          $zero, 0x2160($s3)
    ctx->pc = 0x4104b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8544), GPR_U32(ctx, 0));
label_4104b8:
    // 0x4104b8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x4104b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4104bc:
    // 0x4104bc: 0xae602164  sw          $zero, 0x2164($s3)
    ctx->pc = 0x4104bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8548), GPR_U32(ctx, 0));
label_4104c0:
    // 0x4104c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4104c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4104c4:
    // 0x4104c4: 0xae602168  sw          $zero, 0x2168($s3)
    ctx->pc = 0x4104c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8552), GPR_U32(ctx, 0));
label_4104c8:
    // 0x4104c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4104c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4104cc:
    // 0x4104cc: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4104ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_4104d0:
    // 0x4104d0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x4104d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_4104d4:
    // 0x4104d4: 0xae602170  sw          $zero, 0x2170($s3)
    ctx->pc = 0x4104d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8560), GPR_U32(ctx, 0));
label_4104d8:
    // 0x4104d8: 0xae60216c  sw          $zero, 0x216C($s3)
    ctx->pc = 0x4104d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8556), GPR_U32(ctx, 0));
label_4104dc:
    // 0x4104dc: 0xae602150  sw          $zero, 0x2150($s3)
    ctx->pc = 0x4104dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8528), GPR_U32(ctx, 0));
label_4104e0:
    // 0x4104e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4104e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_4104e4:
    // 0x4104e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4104e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_4104e8:
    // 0x4104e8: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x4104e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_4104ec:
    // 0x4104ec: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4104ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_4104f0:
    // 0x4104f0: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x4104f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_4104f4:
    // 0x4104f4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4104f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4104f8:
    // 0x4104f8: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x4104f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_4104fc:
    // 0x4104fc: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x4104fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_410500:
    // 0x410500: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x410500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
label_410504:
    // 0x410504: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x410504u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_410508:
    // 0x410508: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x410508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_41050c:
    // 0x41050c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x41050cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_410510:
    // 0x410510: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x410510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_410514:
    // 0x410514: 0x6a102a  slt         $v0, $v1, $t2
    ctx->pc = 0x410514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_410518:
    // 0x410518: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_41051c:
    if (ctx->pc == 0x41051Cu) {
        ctx->pc = 0x41051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410518u;
        // 0x41051c: 0x2529001c  addiu       $t1, $t1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410520u;
        goto label_410520;
    }
    ctx->pc = 0x410518u;
    {
        const bool branch_taken_0x410518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410518u;
        // 0x41051c: 0x2529001c  addiu       $t1, $t1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410518) {
            ctx->pc = 0x4104E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4104e0;
        }
    }
    ctx->pc = 0x410520u;
label_410520:
    // 0x410520: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x410520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_410524:
    // 0x410524: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x410524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_410528:
    // 0x410528: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x410528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_41052c:
    // 0x41052c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x41052cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_410530:
    // 0x410530: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x410530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_410534:
    // 0x410534: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x410534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_410538:
    // 0x410538: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x410538u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41053c:
    // 0x41053c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x41053cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_410540:
    // 0x410540: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x410540u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_410544:
    // 0x410544: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x410544u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_410548:
    // 0x410548: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x410548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_41054c:
    // 0x41054c: 0x3e00008  jr          $ra
label_410550:
    if (ctx->pc == 0x410550u) {
        ctx->pc = 0x410550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41054Cu;
        // 0x410550: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410554u;
        goto label_410554;
    }
    ctx->pc = 0x41054Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41054Cu;
        // 0x410550: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41054Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x410554u;
label_410554:
    // 0x410554: 0x0  nop
    ctx->pc = 0x410554u;
    // NOP
    ctx->pc = 0x410558u;
}
