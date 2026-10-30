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

// Function: sub_003E1250
// Address: 0x3e1250 - 0x3e1430
void sub_003E1250_0x3e1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1250_0x3e1250");
#endif

    switch (ctx->pc) {
        case 0x3e1250u: goto label_3e1250;
        case 0x3e1254u: goto label_3e1254;
        case 0x3e1258u: goto label_3e1258;
        case 0x3e125cu: goto label_3e125c;
        case 0x3e1260u: goto label_3e1260;
        case 0x3e1264u: goto label_3e1264;
        case 0x3e1268u: goto label_3e1268;
        case 0x3e126cu: goto label_3e126c;
        case 0x3e1270u: goto label_3e1270;
        case 0x3e1274u: goto label_3e1274;
        case 0x3e1278u: goto label_3e1278;
        case 0x3e127cu: goto label_3e127c;
        case 0x3e1280u: goto label_3e1280;
        case 0x3e1284u: goto label_3e1284;
        case 0x3e1288u: goto label_3e1288;
        case 0x3e128cu: goto label_3e128c;
        case 0x3e1290u: goto label_3e1290;
        case 0x3e1294u: goto label_3e1294;
        case 0x3e1298u: goto label_3e1298;
        case 0x3e129cu: goto label_3e129c;
        case 0x3e12a0u: goto label_3e12a0;
        case 0x3e12a4u: goto label_3e12a4;
        case 0x3e12a8u: goto label_3e12a8;
        case 0x3e12acu: goto label_3e12ac;
        case 0x3e12b0u: goto label_3e12b0;
        case 0x3e12b4u: goto label_3e12b4;
        case 0x3e12b8u: goto label_3e12b8;
        case 0x3e12bcu: goto label_3e12bc;
        case 0x3e12c0u: goto label_3e12c0;
        case 0x3e12c4u: goto label_3e12c4;
        case 0x3e12c8u: goto label_3e12c8;
        case 0x3e12ccu: goto label_3e12cc;
        case 0x3e12d0u: goto label_3e12d0;
        case 0x3e12d4u: goto label_3e12d4;
        case 0x3e12d8u: goto label_3e12d8;
        case 0x3e12dcu: goto label_3e12dc;
        case 0x3e12e0u: goto label_3e12e0;
        case 0x3e12e4u: goto label_3e12e4;
        case 0x3e12e8u: goto label_3e12e8;
        case 0x3e12ecu: goto label_3e12ec;
        case 0x3e12f0u: goto label_3e12f0;
        case 0x3e12f4u: goto label_3e12f4;
        case 0x3e12f8u: goto label_3e12f8;
        case 0x3e12fcu: goto label_3e12fc;
        case 0x3e1300u: goto label_3e1300;
        case 0x3e1304u: goto label_3e1304;
        case 0x3e1308u: goto label_3e1308;
        case 0x3e130cu: goto label_3e130c;
        case 0x3e1310u: goto label_3e1310;
        case 0x3e1314u: goto label_3e1314;
        case 0x3e1318u: goto label_3e1318;
        case 0x3e131cu: goto label_3e131c;
        case 0x3e1320u: goto label_3e1320;
        case 0x3e1324u: goto label_3e1324;
        case 0x3e1328u: goto label_3e1328;
        case 0x3e132cu: goto label_3e132c;
        case 0x3e1330u: goto label_3e1330;
        case 0x3e1334u: goto label_3e1334;
        case 0x3e1338u: goto label_3e1338;
        case 0x3e133cu: goto label_3e133c;
        case 0x3e1340u: goto label_3e1340;
        case 0x3e1344u: goto label_3e1344;
        case 0x3e1348u: goto label_3e1348;
        case 0x3e134cu: goto label_3e134c;
        case 0x3e1350u: goto label_3e1350;
        case 0x3e1354u: goto label_3e1354;
        case 0x3e1358u: goto label_3e1358;
        case 0x3e135cu: goto label_3e135c;
        case 0x3e1360u: goto label_3e1360;
        case 0x3e1364u: goto label_3e1364;
        case 0x3e1368u: goto label_3e1368;
        case 0x3e136cu: goto label_3e136c;
        case 0x3e1370u: goto label_3e1370;
        case 0x3e1374u: goto label_3e1374;
        case 0x3e1378u: goto label_3e1378;
        case 0x3e137cu: goto label_3e137c;
        case 0x3e1380u: goto label_3e1380;
        case 0x3e1384u: goto label_3e1384;
        case 0x3e1388u: goto label_3e1388;
        case 0x3e138cu: goto label_3e138c;
        case 0x3e1390u: goto label_3e1390;
        case 0x3e1394u: goto label_3e1394;
        case 0x3e1398u: goto label_3e1398;
        case 0x3e139cu: goto label_3e139c;
        case 0x3e13a0u: goto label_3e13a0;
        case 0x3e13a4u: goto label_3e13a4;
        case 0x3e13a8u: goto label_3e13a8;
        case 0x3e13acu: goto label_3e13ac;
        case 0x3e13b0u: goto label_3e13b0;
        case 0x3e13b4u: goto label_3e13b4;
        case 0x3e13b8u: goto label_3e13b8;
        case 0x3e13bcu: goto label_3e13bc;
        case 0x3e13c0u: goto label_3e13c0;
        case 0x3e13c4u: goto label_3e13c4;
        case 0x3e13c8u: goto label_3e13c8;
        case 0x3e13ccu: goto label_3e13cc;
        case 0x3e13d0u: goto label_3e13d0;
        case 0x3e13d4u: goto label_3e13d4;
        case 0x3e13d8u: goto label_3e13d8;
        case 0x3e13dcu: goto label_3e13dc;
        case 0x3e13e0u: goto label_3e13e0;
        case 0x3e13e4u: goto label_3e13e4;
        case 0x3e13e8u: goto label_3e13e8;
        case 0x3e13ecu: goto label_3e13ec;
        case 0x3e13f0u: goto label_3e13f0;
        case 0x3e13f4u: goto label_3e13f4;
        case 0x3e13f8u: goto label_3e13f8;
        case 0x3e13fcu: goto label_3e13fc;
        case 0x3e1400u: goto label_3e1400;
        case 0x3e1404u: goto label_3e1404;
        case 0x3e1408u: goto label_3e1408;
        case 0x3e140cu: goto label_3e140c;
        case 0x3e1410u: goto label_3e1410;
        case 0x3e1414u: goto label_3e1414;
        case 0x3e1418u: goto label_3e1418;
        case 0x3e141cu: goto label_3e141c;
        case 0x3e1420u: goto label_3e1420;
        case 0x3e1424u: goto label_3e1424;
        case 0x3e1428u: goto label_3e1428;
        case 0x3e142cu: goto label_3e142c;
        default: break;
    }

    ctx->pc = 0x3e1250u;

label_3e1250:
    // 0x3e1250: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x3e1250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
label_3e1254:
    // 0x3e1254: 0x7fb20470  sq          $s2, 0x470($sp)
    ctx->pc = 0x3e1254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 18));
label_3e1258:
    // 0x3e1258: 0x7fb30460  sq          $s3, 0x460($sp)
    ctx->pc = 0x3e1258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 19));
label_3e125c:
    // 0x3e125c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e125cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1260:
    // 0x3e1260: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x3e1260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
label_3e1264:
    // 0x3e1264: 0x7fb10480  sq          $s1, 0x480($sp)
    ctx->pc = 0x3e1264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 17));
label_3e1268:
    // 0x3e1268: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3e1268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3e126c:
    // 0x3e126c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e1270:
    // 0x3e1270: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e1270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e1274:
    // 0x3e1274: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e1274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e1278:
    // 0x3e1278: 0x40f809  jalr        $v0
label_3e127c:
    if (ctx->pc == 0x3E127Cu) {
        ctx->pc = 0x3E127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1278u;
        // 0x3e127c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1280u;
        goto label_3e1280;
    }
    ctx->pc = 0x3E1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1280u);
        ctx->pc = 0x3E127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1278u;
        // 0x3e127c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1278u, 0x3E1280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1280u;
label_3e1280:
    // 0x3e1280: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e1280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1284:
    // 0x3e1284: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e1284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e1288:
    // 0x3e1288: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e1288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e128c:
    // 0x3e128c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e1290:
    // 0x3e1290: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e1290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e1294:
    // 0x3e1294: 0x0  nop
    ctx->pc = 0x3e1294u;
    // NOP
label_3e1298:
    // 0x3e1298: 0x0  nop
    ctx->pc = 0x3e1298u;
    // NOP
label_3e129c:
    // 0x3e129c: 0x0  nop
    ctx->pc = 0x3e129cu;
    // NOP
label_3e12a0:
    // 0x3e12a0: 0x0  nop
    ctx->pc = 0x3e12a0u;
    // NOP
label_3e12a4:
    // 0x3e12a4: 0x0  nop
    ctx->pc = 0x3e12a4u;
    // NOP
label_3e12a8:
    // 0x3e12a8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e12ac:
    if (ctx->pc == 0x3E12ACu) {
        ctx->pc = 0x3E12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12A8u;
        // 0x3e12ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E12B0u;
        goto label_3e12b0;
    }
    ctx->pc = 0x3E12A8u;
    {
        const bool branch_taken_0x3e12a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12A8u;
        // 0x3e12ac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12a8) {
            ctx->pc = 0x3E1298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1298;
        }
    }
    ctx->pc = 0x3E12B0u;
label_3e12b0:
    // 0x3e12b0: 0xc138ddc  jal         func_4E3770
label_3e12b4:
    if (ctx->pc == 0x3E12B4u) {
        ctx->pc = 0x3E12B8u;
        goto label_3e12b8;
    }
    ctx->pc = 0x3E12B0u;
    SET_GPR_U32(ctx, 31, 0x3E12B8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E12B0u, 0x3E12B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E12B8u;
label_3e12b8:
    // 0x3e12b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e12bc:
    // 0x3e12bc: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x3e12bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_3e12c0:
    // 0x3e12c0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_3e12c4:
    if (ctx->pc == 0x3E12C4u) {
        ctx->pc = 0x3E12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12C0u;
        // 0x3e12c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E12C8u;
        goto label_3e12c8;
    }
    ctx->pc = 0x3E12C0u;
    {
        const bool branch_taken_0x3e12c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12C0u;
        // 0x3e12c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12c0) {
            ctx->pc = 0x3E1414u;
            goto label_3e1414;
        }
    }
    ctx->pc = 0x3E12C8u;
label_3e12c8:
    // 0x3e12c8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3e12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3e12cc:
    // 0x3e12cc: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x3e12ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
label_3e12d0:
    // 0x3e12d0: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_3e12d4:
    if (ctx->pc == 0x3E12D4u) {
        ctx->pc = 0x3E12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12D0u;
        // 0x3e12d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E12D8u;
        goto label_3e12d8;
    }
    ctx->pc = 0x3E12D0u;
    {
        const bool branch_taken_0x3e12d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12D0u;
        // 0x3e12d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12d0) {
            ctx->pc = 0x3E1414u;
            goto label_3e1414;
        }
    }
    ctx->pc = 0x3E12D8u;
label_3e12d8:
    // 0x3e12d8: 0xc0e9694  jal         func_3A5A50
label_3e12dc:
    if (ctx->pc == 0x3E12DCu) {
        ctx->pc = 0x3E12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12D8u;
        // 0x3e12dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E12E0u;
        goto label_3e12e0;
    }
    ctx->pc = 0x3E12D8u;
    SET_GPR_U32(ctx, 31, 0x3E12E0u);
    ctx->pc = 0x3E12DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E12D8u;
    // 0x3e12dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E12D8u, 0x3E12E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E12E0u;
label_3e12e0:
    // 0x3e12e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3e12e4:
    if (ctx->pc == 0x3E12E4u) {
        ctx->pc = 0x3E12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12E0u;
        // 0x3e12e4: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E12E8u;
        goto label_3e12e8;
    }
    ctx->pc = 0x3E12E0u;
    {
        const bool branch_taken_0x3e12e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e12e0) {
            ctx->pc = 0x3E12E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E12E0u;
            // 0x3e12e4: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E12F0u;
            goto label_3e12f0;
        }
    }
    ctx->pc = 0x3E12E8u;
label_3e12e8:
    // 0x3e12e8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3e12ec:
    if (ctx->pc == 0x3E12ECu) {
        ctx->pc = 0x3E12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12E8u;
        // 0x3e12ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E12F0u;
        goto label_3e12f0;
    }
    ctx->pc = 0x3E12E8u;
    {
        const bool branch_taken_0x3e12e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12E8u;
        // 0x3e12ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12e8) {
            ctx->pc = 0x3E1414u;
            goto label_3e1414;
        }
    }
    ctx->pc = 0x3E12F0u;
label_3e12f0:
    // 0x3e12f0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3e12f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_3e12f4:
    // 0x3e12f4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3e12f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3e12f8:
    // 0x3e12f8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_3e12fc:
    if (ctx->pc == 0x3E12FCu) {
        ctx->pc = 0x3E12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12F8u;
        // 0x3e12fc: 0x641826  xor         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1300u;
        goto label_3e1300;
    }
    ctx->pc = 0x3E12F8u;
    {
        const bool branch_taken_0x3e12f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E12F8u;
        // 0x3e12fc: 0x641826  xor         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e12f8) {
            ctx->pc = 0x3E13F8u;
            goto label_3e13f8;
        }
    }
    ctx->pc = 0x3E1300u;
label_3e1300:
    // 0x3e1300: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3e1300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3e1304:
    // 0x3e1304: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3e1304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3e1308:
    // 0x3e1308: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x3e1308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_3e130c:
    // 0x3e130c: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3e130cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e1310:
    // 0x3e1310: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x3e1310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_3e1314:
    // 0x3e1314: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e1314u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3e1318:
    // 0x3e1318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e131c:
    // 0x3e131c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e131cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1320:
    // 0x3e1320: 0xc0f3222  jal         func_3CC888
label_3e1324:
    if (ctx->pc == 0x3E1324u) {
        ctx->pc = 0x3E1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1320u;
        // 0x3e1324: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1328u;
        goto label_3e1328;
    }
    ctx->pc = 0x3E1320u;
    SET_GPR_U32(ctx, 31, 0x3E1328u);
    ctx->pc = 0x3E1324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1320u;
    // 0x3e1324: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3E1320u, 0x3E1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1328u;
label_3e1328:
    // 0x3e1328: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x3e1328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_3e132c:
    // 0x3e132c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e132cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e1330:
    // 0x3e1330: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e1330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e1334:
    // 0x3e1334: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3e1334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e1338:
    // 0x3e1338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e1338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e133c:
    // 0x3e133c: 0xc136b24  jal         func_4DAC90
label_3e1340:
    if (ctx->pc == 0x3E1340u) {
        ctx->pc = 0x3E1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E133Cu;
        // 0x3e1340: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1344u;
        goto label_3e1344;
    }
    ctx->pc = 0x3E133Cu;
    SET_GPR_U32(ctx, 31, 0x3E1344u);
    ctx->pc = 0x3E1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E133Cu;
    // 0x3e1340: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E133Cu, 0x3E1344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1344u;
label_3e1344:
    // 0x3e1344: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e1344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e1348:
    // 0x3e1348: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3e1348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e134c:
    // 0x3e134c: 0x27a60430  addiu       $a2, $sp, 0x430
    ctx->pc = 0x3e134cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e1350:
    // 0x3e1350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e1350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1354:
    // 0x3e1354: 0xc136afa  jal         func_4DABE8
label_3e1358:
    if (ctx->pc == 0x3E1358u) {
        ctx->pc = 0x3E1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1354u;
        // 0x3e1358: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E135Cu;
        goto label_3e135c;
    }
    ctx->pc = 0x3E1354u;
    SET_GPR_U32(ctx, 31, 0x3E135Cu);
    ctx->pc = 0x3E1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1354u;
    // 0x3e1358: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3E1354u, 0x3E135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E135Cu;
label_3e135c:
    // 0x3e135c: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e135cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e1360:
    // 0x3e1360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e1360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1364:
    // 0x3e1364: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e1364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e1368:
    // 0x3e1368: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e1368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e136c:
    // 0x3e136c: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3e136cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e1370:
    // 0x3e1370: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x3e1370u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
label_3e1374:
    // 0x3e1374: 0xc136b24  jal         func_4DAC90
label_3e1378:
    if (ctx->pc == 0x3E1378u) {
        ctx->pc = 0x3E1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1374u;
        // 0x3e1378: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E137Cu;
        goto label_3e137c;
    }
    ctx->pc = 0x3E1374u;
    SET_GPR_U32(ctx, 31, 0x3E137Cu);
    ctx->pc = 0x3E1378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1374u;
    // 0x3e1378: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E1374u, 0x3E137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E137Cu;
label_3e137c:
    // 0x3e137c: 0x7ba30430  lq          $v1, 0x430($sp)
    ctx->pc = 0x3e137cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e1380:
    // 0x3e1380: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x3e1380u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
label_3e1384:
    // 0x3e1384: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3e1384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3e1388:
    // 0x3e1388: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e1388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e138c:
    // 0x3e138c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e1390:
    // 0x3e1390: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x3e1390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_3e1394:
    // 0x3e1394: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_3e1398:
    if (ctx->pc == 0x3E1398u) {
        ctx->pc = 0x3E1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1394u;
        // 0x3e1398: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E139Cu;
        goto label_3e139c;
    }
    ctx->pc = 0x3E1394u;
    {
        const bool branch_taken_0x3e1394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1394u;
        // 0x3e1398: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1394) {
            ctx->pc = 0x3E13F8u;
            goto label_3e13f8;
        }
    }
    ctx->pc = 0x3E139Cu;
label_3e139c:
    // 0x3e139c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3e139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e13a0:
    // 0x3e13a0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x3e13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_3e13a4:
    // 0x3e13a4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3e13a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3e13a8:
    // 0x3e13a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3e13ac:
    if (ctx->pc == 0x3E13ACu) {
        ctx->pc = 0x3E13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13A8u;
        // 0x3e13ac: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E13B0u;
        goto label_3e13b0;
    }
    ctx->pc = 0x3E13A8u;
    {
        const bool branch_taken_0x3e13a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13A8u;
        // 0x3e13ac: 0x641026  xor         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13a8) {
            ctx->pc = 0x3E13B4u;
            goto label_3e13b4;
        }
    }
    ctx->pc = 0x3E13B0u;
label_3e13b0:
    // 0x3e13b0: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3e13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3e13b4:
    // 0x3e13b4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3e13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e13b8:
    // 0x3e13b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3e13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3e13bc:
    // 0x3e13bc: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3e13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3e13c0:
    // 0x3e13c0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3e13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_3e13c4:
    // 0x3e13c4: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3e13c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3e13c8:
    // 0x3e13c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e13c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3e13cc:
    // 0x3e13cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3e13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3e13d0:
    // 0x3e13d0: 0x3c02f0f0  lui         $v0, 0xF0F0
    ctx->pc = 0x3e13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61680 << 16));
label_3e13d4:
    // 0x3e13d4: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x3e13d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_3e13d8:
    // 0x3e13d8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x3e13d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_3e13dc:
    // 0x3e13dc: 0x7e450030  sq          $a1, 0x30($s2)
    ctx->pc = 0x3e13dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 5));
label_3e13e0:
    // 0x3e13e0: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3e13e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3e13e4:
    // 0x3e13e4: 0xae440054  sw          $a0, 0x54($s2)
    ctx->pc = 0x3e13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 4));
label_3e13e8:
    // 0x3e13e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3e13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e13ec:
    // 0x3e13ec: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3e13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3e13f0:
    // 0x3e13f0: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x3e13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_3e13f4:
    // 0x3e13f4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3e13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3e13f8:
    // 0x3e13f8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3e13f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3e13fc:
    // 0x3e13fc: 0xc0e858c  jal         func_3A1630
label_3e1400:
    if (ctx->pc == 0x3E1400u) {
        ctx->pc = 0x3E1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13FCu;
        // 0x3e1400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1404u;
        goto label_3e1404;
    }
    ctx->pc = 0x3E13FCu;
    SET_GPR_U32(ctx, 31, 0x3E1404u);
    ctx->pc = 0x3E1400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E13FCu;
    // 0x3e1400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E13FCu, 0x3E1404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1404u;
label_3e1404:
    // 0x3e1404: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x3e1404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3e1408:
    // 0x3e1408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e1408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e140c:
    // 0x3e140c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e1410:
    // 0x3e1410: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x3e1410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_3e1414:
    // 0x3e1414: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x3e1414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3e1418:
    // 0x3e1418: 0x7bb10480  lq          $s1, 0x480($sp)
    ctx->pc = 0x3e1418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e141c:
    // 0x3e141c: 0x7bb20470  lq          $s2, 0x470($sp)
    ctx->pc = 0x3e141cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3e1420:
    // 0x3e1420: 0x7bb30460  lq          $s3, 0x460($sp)
    ctx->pc = 0x3e1420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e1424:
    // 0x3e1424: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3e1424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e1428:
    // 0x3e1428: 0x3e00008  jr          $ra
label_3e142c:
    if (ctx->pc == 0x3E142Cu) {
        ctx->pc = 0x3E142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1428u;
        // 0x3e142c: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1430u;
        goto label_fallthrough_0x3e1428;
    }
    ctx->pc = 0x3E1428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1428u;
        // 0x3e142c: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e1428:
    ctx->pc = 0x3E1430u;
}
