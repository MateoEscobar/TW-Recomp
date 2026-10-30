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

// Function: sub_003F1008
// Address: 0x3f1008 - 0x3f1388
void sub_003F1008_0x3f1008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1008_0x3f1008");
#endif

    switch (ctx->pc) {
        case 0x3f1008u: goto label_3f1008;
        case 0x3f100cu: goto label_3f100c;
        case 0x3f1010u: goto label_3f1010;
        case 0x3f1014u: goto label_3f1014;
        case 0x3f1018u: goto label_3f1018;
        case 0x3f101cu: goto label_3f101c;
        case 0x3f1020u: goto label_3f1020;
        case 0x3f1024u: goto label_3f1024;
        case 0x3f1028u: goto label_3f1028;
        case 0x3f102cu: goto label_3f102c;
        case 0x3f1030u: goto label_3f1030;
        case 0x3f1034u: goto label_3f1034;
        case 0x3f1038u: goto label_3f1038;
        case 0x3f103cu: goto label_3f103c;
        case 0x3f1040u: goto label_3f1040;
        case 0x3f1044u: goto label_3f1044;
        case 0x3f1048u: goto label_3f1048;
        case 0x3f104cu: goto label_3f104c;
        case 0x3f1050u: goto label_3f1050;
        case 0x3f1054u: goto label_3f1054;
        case 0x3f1058u: goto label_3f1058;
        case 0x3f105cu: goto label_3f105c;
        case 0x3f1060u: goto label_3f1060;
        case 0x3f1064u: goto label_3f1064;
        case 0x3f1068u: goto label_3f1068;
        case 0x3f106cu: goto label_3f106c;
        case 0x3f1070u: goto label_3f1070;
        case 0x3f1074u: goto label_3f1074;
        case 0x3f1078u: goto label_3f1078;
        case 0x3f107cu: goto label_3f107c;
        case 0x3f1080u: goto label_3f1080;
        case 0x3f1084u: goto label_3f1084;
        case 0x3f1088u: goto label_3f1088;
        case 0x3f108cu: goto label_3f108c;
        case 0x3f1090u: goto label_3f1090;
        case 0x3f1094u: goto label_3f1094;
        case 0x3f1098u: goto label_3f1098;
        case 0x3f109cu: goto label_3f109c;
        case 0x3f10a0u: goto label_3f10a0;
        case 0x3f10a4u: goto label_3f10a4;
        case 0x3f10a8u: goto label_3f10a8;
        case 0x3f10acu: goto label_3f10ac;
        case 0x3f10b0u: goto label_3f10b0;
        case 0x3f10b4u: goto label_3f10b4;
        case 0x3f10b8u: goto label_3f10b8;
        case 0x3f10bcu: goto label_3f10bc;
        case 0x3f10c0u: goto label_3f10c0;
        case 0x3f10c4u: goto label_3f10c4;
        case 0x3f10c8u: goto label_3f10c8;
        case 0x3f10ccu: goto label_3f10cc;
        case 0x3f10d0u: goto label_3f10d0;
        case 0x3f10d4u: goto label_3f10d4;
        case 0x3f10d8u: goto label_3f10d8;
        case 0x3f10dcu: goto label_3f10dc;
        case 0x3f10e0u: goto label_3f10e0;
        case 0x3f10e4u: goto label_3f10e4;
        case 0x3f10e8u: goto label_3f10e8;
        case 0x3f10ecu: goto label_3f10ec;
        case 0x3f10f0u: goto label_3f10f0;
        case 0x3f10f4u: goto label_3f10f4;
        case 0x3f10f8u: goto label_3f10f8;
        case 0x3f10fcu: goto label_3f10fc;
        case 0x3f1100u: goto label_3f1100;
        case 0x3f1104u: goto label_3f1104;
        case 0x3f1108u: goto label_3f1108;
        case 0x3f110cu: goto label_3f110c;
        case 0x3f1110u: goto label_3f1110;
        case 0x3f1114u: goto label_3f1114;
        case 0x3f1118u: goto label_3f1118;
        case 0x3f111cu: goto label_3f111c;
        case 0x3f1120u: goto label_3f1120;
        case 0x3f1124u: goto label_3f1124;
        case 0x3f1128u: goto label_3f1128;
        case 0x3f112cu: goto label_3f112c;
        case 0x3f1130u: goto label_3f1130;
        case 0x3f1134u: goto label_3f1134;
        case 0x3f1138u: goto label_3f1138;
        case 0x3f113cu: goto label_3f113c;
        case 0x3f1140u: goto label_3f1140;
        case 0x3f1144u: goto label_3f1144;
        case 0x3f1148u: goto label_3f1148;
        case 0x3f114cu: goto label_3f114c;
        case 0x3f1150u: goto label_3f1150;
        case 0x3f1154u: goto label_3f1154;
        case 0x3f1158u: goto label_3f1158;
        case 0x3f115cu: goto label_3f115c;
        case 0x3f1160u: goto label_3f1160;
        case 0x3f1164u: goto label_3f1164;
        case 0x3f1168u: goto label_3f1168;
        case 0x3f116cu: goto label_3f116c;
        case 0x3f1170u: goto label_3f1170;
        case 0x3f1174u: goto label_3f1174;
        case 0x3f1178u: goto label_3f1178;
        case 0x3f117cu: goto label_3f117c;
        case 0x3f1180u: goto label_3f1180;
        case 0x3f1184u: goto label_3f1184;
        case 0x3f1188u: goto label_3f1188;
        case 0x3f118cu: goto label_3f118c;
        case 0x3f1190u: goto label_3f1190;
        case 0x3f1194u: goto label_3f1194;
        case 0x3f1198u: goto label_3f1198;
        case 0x3f119cu: goto label_3f119c;
        case 0x3f11a0u: goto label_3f11a0;
        case 0x3f11a4u: goto label_3f11a4;
        case 0x3f11a8u: goto label_3f11a8;
        case 0x3f11acu: goto label_3f11ac;
        case 0x3f11b0u: goto label_3f11b0;
        case 0x3f11b4u: goto label_3f11b4;
        case 0x3f11b8u: goto label_3f11b8;
        case 0x3f11bcu: goto label_3f11bc;
        case 0x3f11c0u: goto label_3f11c0;
        case 0x3f11c4u: goto label_3f11c4;
        case 0x3f11c8u: goto label_3f11c8;
        case 0x3f11ccu: goto label_3f11cc;
        case 0x3f11d0u: goto label_3f11d0;
        case 0x3f11d4u: goto label_3f11d4;
        case 0x3f11d8u: goto label_3f11d8;
        case 0x3f11dcu: goto label_3f11dc;
        case 0x3f11e0u: goto label_3f11e0;
        case 0x3f11e4u: goto label_3f11e4;
        case 0x3f11e8u: goto label_3f11e8;
        case 0x3f11ecu: goto label_3f11ec;
        case 0x3f11f0u: goto label_3f11f0;
        case 0x3f11f4u: goto label_3f11f4;
        case 0x3f11f8u: goto label_3f11f8;
        case 0x3f11fcu: goto label_3f11fc;
        case 0x3f1200u: goto label_3f1200;
        case 0x3f1204u: goto label_3f1204;
        case 0x3f1208u: goto label_3f1208;
        case 0x3f120cu: goto label_3f120c;
        case 0x3f1210u: goto label_3f1210;
        case 0x3f1214u: goto label_3f1214;
        case 0x3f1218u: goto label_3f1218;
        case 0x3f121cu: goto label_3f121c;
        case 0x3f1220u: goto label_3f1220;
        case 0x3f1224u: goto label_3f1224;
        case 0x3f1228u: goto label_3f1228;
        case 0x3f122cu: goto label_3f122c;
        case 0x3f1230u: goto label_3f1230;
        case 0x3f1234u: goto label_3f1234;
        case 0x3f1238u: goto label_3f1238;
        case 0x3f123cu: goto label_3f123c;
        case 0x3f1240u: goto label_3f1240;
        case 0x3f1244u: goto label_3f1244;
        case 0x3f1248u: goto label_3f1248;
        case 0x3f124cu: goto label_3f124c;
        case 0x3f1250u: goto label_3f1250;
        case 0x3f1254u: goto label_3f1254;
        case 0x3f1258u: goto label_3f1258;
        case 0x3f125cu: goto label_3f125c;
        case 0x3f1260u: goto label_3f1260;
        case 0x3f1264u: goto label_3f1264;
        case 0x3f1268u: goto label_3f1268;
        case 0x3f126cu: goto label_3f126c;
        case 0x3f1270u: goto label_3f1270;
        case 0x3f1274u: goto label_3f1274;
        case 0x3f1278u: goto label_3f1278;
        case 0x3f127cu: goto label_3f127c;
        case 0x3f1280u: goto label_3f1280;
        case 0x3f1284u: goto label_3f1284;
        case 0x3f1288u: goto label_3f1288;
        case 0x3f128cu: goto label_3f128c;
        case 0x3f1290u: goto label_3f1290;
        case 0x3f1294u: goto label_3f1294;
        case 0x3f1298u: goto label_3f1298;
        case 0x3f129cu: goto label_3f129c;
        case 0x3f12a0u: goto label_3f12a0;
        case 0x3f12a4u: goto label_3f12a4;
        case 0x3f12a8u: goto label_3f12a8;
        case 0x3f12acu: goto label_3f12ac;
        case 0x3f12b0u: goto label_3f12b0;
        case 0x3f12b4u: goto label_3f12b4;
        case 0x3f12b8u: goto label_3f12b8;
        case 0x3f12bcu: goto label_3f12bc;
        case 0x3f12c0u: goto label_3f12c0;
        case 0x3f12c4u: goto label_3f12c4;
        case 0x3f12c8u: goto label_3f12c8;
        case 0x3f12ccu: goto label_3f12cc;
        case 0x3f12d0u: goto label_3f12d0;
        case 0x3f12d4u: goto label_3f12d4;
        case 0x3f12d8u: goto label_3f12d8;
        case 0x3f12dcu: goto label_3f12dc;
        case 0x3f12e0u: goto label_3f12e0;
        case 0x3f12e4u: goto label_3f12e4;
        case 0x3f12e8u: goto label_3f12e8;
        case 0x3f12ecu: goto label_3f12ec;
        case 0x3f12f0u: goto label_3f12f0;
        case 0x3f12f4u: goto label_3f12f4;
        case 0x3f12f8u: goto label_3f12f8;
        case 0x3f12fcu: goto label_3f12fc;
        case 0x3f1300u: goto label_3f1300;
        case 0x3f1304u: goto label_3f1304;
        case 0x3f1308u: goto label_3f1308;
        case 0x3f130cu: goto label_3f130c;
        case 0x3f1310u: goto label_3f1310;
        case 0x3f1314u: goto label_3f1314;
        case 0x3f1318u: goto label_3f1318;
        case 0x3f131cu: goto label_3f131c;
        case 0x3f1320u: goto label_3f1320;
        case 0x3f1324u: goto label_3f1324;
        case 0x3f1328u: goto label_3f1328;
        case 0x3f132cu: goto label_3f132c;
        case 0x3f1330u: goto label_3f1330;
        case 0x3f1334u: goto label_3f1334;
        case 0x3f1338u: goto label_3f1338;
        case 0x3f133cu: goto label_3f133c;
        case 0x3f1340u: goto label_3f1340;
        case 0x3f1344u: goto label_3f1344;
        case 0x3f1348u: goto label_3f1348;
        case 0x3f134cu: goto label_3f134c;
        case 0x3f1350u: goto label_3f1350;
        case 0x3f1354u: goto label_3f1354;
        case 0x3f1358u: goto label_3f1358;
        case 0x3f135cu: goto label_3f135c;
        case 0x3f1360u: goto label_3f1360;
        case 0x3f1364u: goto label_3f1364;
        case 0x3f1368u: goto label_3f1368;
        case 0x3f136cu: goto label_3f136c;
        case 0x3f1370u: goto label_3f1370;
        case 0x3f1374u: goto label_3f1374;
        case 0x3f1378u: goto label_3f1378;
        case 0x3f137cu: goto label_3f137c;
        case 0x3f1380u: goto label_3f1380;
        case 0x3f1384u: goto label_3f1384;
        default: break;
    }

    ctx->pc = 0x3f1008u;

label_3f1008:
    // 0x3f1008: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f1008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f100c:
    // 0x3f100c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3f100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3f1010:
    // 0x3f1010: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f1010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3f1014:
    // 0x3f1014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f1014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f1018:
    // 0x3f1018: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f1018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f101c:
    // 0x3f101c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f1020:
    // 0x3f1020: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f1020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f1024:
    // 0x3f1024: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f1024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f1028:
    // 0x3f1028: 0x40f809  jalr        $v0
label_3f102c:
    if (ctx->pc == 0x3F102Cu) {
        ctx->pc = 0x3F102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1028u;
        // 0x3f102c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1030u;
        goto label_3f1030;
    }
    ctx->pc = 0x3F1028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1030u);
        ctx->pc = 0x3F102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1028u;
        // 0x3f102c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1028u, 0x3F1030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1030u;
label_3f1030:
    // 0x3f1030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f1030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1034:
    // 0x3f1034: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3f1034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f1038:
    // 0x3f1038: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3f103c:
    if (ctx->pc == 0x3F103Cu) {
        ctx->pc = 0x3F103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1038u;
        // 0x3f103c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1040u;
        goto label_3f1040;
    }
    ctx->pc = 0x3F1038u;
    {
        const bool branch_taken_0x3f1038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1038u;
        // 0x3f103c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1038) {
            ctx->pc = 0x3F1058u;
            goto label_3f1058;
        }
    }
    ctx->pc = 0x3F1040u;
label_3f1040:
    // 0x3f1040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f1040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1044:
    // 0x3f1044: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3f1044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3f1048:
    // 0x3f1048: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f1048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f104c:
    // 0x3f104c: 0xc0e637e  jal         func_398DF8
label_3f1050:
    if (ctx->pc == 0x3F1050u) {
        ctx->pc = 0x3F1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F104Cu;
        // 0x3f1050: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1054u;
        goto label_3f1054;
    }
    ctx->pc = 0x3F104Cu;
    SET_GPR_U32(ctx, 31, 0x3F1054u);
    ctx->pc = 0x3F1050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F104Cu;
    // 0x3f1050: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F104Cu, 0x3F1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1054u;
label_3f1054:
    // 0x3f1054: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3f1054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3f1058:
    // 0x3f1058: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f1058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f105c:
    // 0x3f105c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f1060:
    // 0x3f1060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f1060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f1064:
    // 0x3f1064: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_3f1068:
    if (ctx->pc == 0x3F1068u) {
        ctx->pc = 0x3F1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1064u;
        // 0x3f1068: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F106Cu;
        goto label_3f106c;
    }
    ctx->pc = 0x3F1064u;
    {
        const bool branch_taken_0x3f1064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1064u;
        // 0x3f1068: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1064) {
            ctx->pc = 0x3F10C4u;
            goto label_3f10c4;
        }
    }
    ctx->pc = 0x3F106Cu;
label_3f106c:
    // 0x3f106c: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f106cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f1070:
    // 0x3f1070: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f1070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f1074:
    // 0x3f1074: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f1074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f1078:
    // 0x3f1078: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f1078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f107c:
    // 0x3f107c: 0x3c01c379  lui         $at, 0xC379
    ctx->pc = 0x3f107cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50041 << 16));
label_3f1080:
    // 0x3f1080: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x3f1080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
label_3f1084:
    // 0x3f1084: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f1084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f1088:
    // 0x3f1088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f108c:
    // 0x3f108c: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f108cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f1090:
    // 0x3f1090: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f1090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f1094:
    // 0x3f1094: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f1094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f1098:
    // 0x3f1098: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3f1098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3f109c:
    // 0x3f109c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f109cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f10a0:
    // 0x3f10a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f10a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f10a4:
    // 0x3f10a4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f10a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f10a8:
    // 0x3f10a8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f10a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f10ac:
    // 0x3f10ac: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f10acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f10b0:
    // 0x3f10b0: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f10b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f10b4:
    // 0x3f10b4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f10b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f10b8:
    // 0x3f10b8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f10b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f10bc:
    // 0x3f10bc: 0xc0e858c  jal         func_3A1630
label_3f10c0:
    if (ctx->pc == 0x3F10C0u) {
        ctx->pc = 0x3F10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F10BCu;
        // 0x3f10c0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F10C4u;
        goto label_3f10c4;
    }
    ctx->pc = 0x3F10BCu;
    SET_GPR_U32(ctx, 31, 0x3F10C4u);
    ctx->pc = 0x3F10C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F10BCu;
    // 0x3f10c0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F10BCu, 0x3F10C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F10C4u;
label_3f10c4:
    // 0x3f10c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f10c8:
    // 0x3f10c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f10cc:
    // 0x3f10cc: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_3f10d0:
    if (ctx->pc == 0x3F10D0u) {
        ctx->pc = 0x3F10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F10CCu;
        // 0x3f10d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F10D4u;
        goto label_3f10d4;
    }
    ctx->pc = 0x3F10CCu;
    {
        const bool branch_taken_0x3f10cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F10CCu;
        // 0x3f10d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f10cc) {
            ctx->pc = 0x3F1134u;
            goto label_3f1134;
        }
    }
    ctx->pc = 0x3F10D4u;
label_3f10d4:
    // 0x3f10d4: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f10d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f10d8:
    // 0x3f10d8: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f10d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f10dc:
    // 0x3f10dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f10dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f10e0:
    // 0x3f10e0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f10e4:
    // 0x3f10e4: 0x3c01c379  lui         $at, 0xC379
    ctx->pc = 0x3f10e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50041 << 16));
label_3f10e8:
    // 0x3f10e8: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x3f10e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
label_3f10ec:
    // 0x3f10ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f10ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f10f0:
    // 0x3f10f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f10f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f10f4:
    // 0x3f10f4: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f10f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f10f8:
    // 0x3f10f8: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f10f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f10fc:
    // 0x3f10fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f10fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f1100:
    // 0x3f1100: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x3f1100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_3f1104:
    // 0x3f1104: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f1104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f1108:
    // 0x3f1108: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f1108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f110c:
    // 0x3f110c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f110cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f1110:
    // 0x3f1110: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f1110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f1114:
    // 0x3f1114: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f1114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f1118:
    // 0x3f1118: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f1118u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f111c:
    // 0x3f111c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f111cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1120:
    // 0x3f1120: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f1120u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f1124:
    // 0x3f1124: 0xc0e858c  jal         func_3A1630
label_3f1128:
    if (ctx->pc == 0x3F1128u) {
        ctx->pc = 0x3F1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1124u;
        // 0x3f1128: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F112Cu;
        goto label_3f112c;
    }
    ctx->pc = 0x3F1124u;
    SET_GPR_U32(ctx, 31, 0x3F112Cu);
    ctx->pc = 0x3F1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1124u;
    // 0x3f1128: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F1124u, 0x3F112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F112Cu;
label_3f112c:
    // 0x3f112c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f1130:
    // 0x3f1130: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f1130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f1134:
    // 0x3f1134: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_3f1138:
    if (ctx->pc == 0x3F1138u) {
        ctx->pc = 0x3F1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1134u;
        // 0x3f1138: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F113Cu;
        goto label_3f113c;
    }
    ctx->pc = 0x3F1134u;
    {
        const bool branch_taken_0x3f1134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f1134) {
            ctx->pc = 0x3F1138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1134u;
            // 0x3f1138: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F11A4u;
            goto label_3f11a4;
        }
    }
    ctx->pc = 0x3F113Cu;
label_3f113c:
    // 0x3f113c: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f113cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f1140:
    // 0x3f1140: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f1140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f1144:
    // 0x3f1144: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f1144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f1148:
    // 0x3f1148: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f1148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f114c:
    // 0x3f114c: 0x3c01c374  lui         $at, 0xC374
    ctx->pc = 0x3f114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50036 << 16));
label_3f1150:
    // 0x3f1150: 0x3421f78d  ori         $at, $at, 0xF78D
    ctx->pc = 0x3f1150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63373);
label_3f1154:
    // 0x3f1154: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f1154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f1158:
    // 0x3f1158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f115c:
    // 0x3f115c: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f115cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f1160:
    // 0x3f1160: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f1160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f1164:
    // 0x3f1164: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f1164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f1168:
    // 0x3f1168: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3f1168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f116c:
    // 0x3f116c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f1170:
    // 0x3f1170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f1170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f1174:
    // 0x3f1174: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f1174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f1178:
    // 0x3f1178: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f1178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f117c:
    // 0x3f117c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f117cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f1180:
    // 0x3f1180: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f1180u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f1184:
    // 0x3f1184: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f1184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1188:
    // 0x3f1188: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f1188u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f118c:
    // 0x3f118c: 0xc0e858c  jal         func_3A1630
label_3f1190:
    if (ctx->pc == 0x3F1190u) {
        ctx->pc = 0x3F1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F118Cu;
        // 0x3f1190: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1194u;
        goto label_3f1194;
    }
    ctx->pc = 0x3F118Cu;
    SET_GPR_U32(ctx, 31, 0x3F1194u);
    ctx->pc = 0x3F1190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F118Cu;
    // 0x3f1190: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F118Cu, 0x3F1194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1194u;
label_3f1194:
    // 0x3f1194: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f1194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f1198:
    // 0x3f1198: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f1198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3f119c:
    // 0x3f119c: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3f119cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3f11a0:
    // 0x3f11a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f11a4:
    // 0x3f11a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f11a8:
    // 0x3f11a8: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
label_3f11ac:
    if (ctx->pc == 0x3F11ACu) {
        ctx->pc = 0x3F11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F11A8u;
        // 0x3f11ac: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F11B0u;
        goto label_3f11b0;
    }
    ctx->pc = 0x3F11A8u;
    {
        const bool branch_taken_0x3f11a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f11a8) {
            ctx->pc = 0x3F11ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F11A8u;
            // 0x3f11ac: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1208u;
            goto label_3f1208;
        }
    }
    ctx->pc = 0x3F11B0u;
label_3f11b0:
    // 0x3f11b0: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f11b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f11b4:
    // 0x3f11b4: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f11b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f11b8:
    // 0x3f11b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f11b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f11bc:
    // 0x3f11bc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f11c0:
    // 0x3f11c0: 0x3c01c372  lui         $at, 0xC372
    ctx->pc = 0x3f11c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50034 << 16));
label_3f11c4:
    // 0x3f11c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f11c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f11c8:
    // 0x3f11c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f11c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f11cc:
    // 0x3f11cc: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x3f11ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_3f11d0:
    // 0x3f11d0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f11d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f11d4:
    // 0x3f11d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f11d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f11d8:
    // 0x3f11d8: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x3f11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3f11dc:
    // 0x3f11dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f11dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f11e0:
    // 0x3f11e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f11e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f11e4:
    // 0x3f11e4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f11e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f11e8:
    // 0x3f11e8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f11e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f11ec:
    // 0x3f11ec: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f11ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f11f0:
    // 0x3f11f0: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f11f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f11f4:
    // 0x3f11f4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f11f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f11f8:
    // 0x3f11f8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f11fc:
    // 0x3f11fc: 0xc0e858c  jal         func_3A1630
label_3f1200:
    if (ctx->pc == 0x3F1200u) {
        ctx->pc = 0x3F1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F11FCu;
        // 0x3f1200: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1204u;
        goto label_3f1204;
    }
    ctx->pc = 0x3F11FCu;
    SET_GPR_U32(ctx, 31, 0x3F1204u);
    ctx->pc = 0x3F1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F11FCu;
    // 0x3f1200: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F11FCu, 0x3F1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1204u;
label_3f1204:
    // 0x3f1204: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f1204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f1208:
    // 0x3f1208: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3f1208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f120c:
    // 0x3f120c: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_3f1210:
    if (ctx->pc == 0x3F1210u) {
        ctx->pc = 0x3F1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F120Cu;
        // 0x3f1210: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1214u;
        goto label_3f1214;
    }
    ctx->pc = 0x3F120Cu;
    {
        const bool branch_taken_0x3f120c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f120c) {
            ctx->pc = 0x3F1210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F120Cu;
            // 0x3f1210: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F1270u;
            goto label_3f1270;
        }
    }
    ctx->pc = 0x3F1214u;
label_3f1214:
    // 0x3f1214: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f1214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f1218:
    // 0x3f1218: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f1218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f121c:
    // 0x3f121c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f121cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f1220:
    // 0x3f1220: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f1220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f1224:
    // 0x3f1224: 0x3c01c371  lui         $at, 0xC371
    ctx->pc = 0x3f1224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50033 << 16));
label_3f1228:
    // 0x3f1228: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3f1228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3f122c:
    // 0x3f122c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f122cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f1230:
    // 0x3f1230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1234:
    // 0x3f1234: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x3f1234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_3f1238:
    // 0x3f1238: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f1238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f123c:
    // 0x3f123c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f123cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f1240:
    // 0x3f1240: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x3f1240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3f1244:
    // 0x3f1244: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f1244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f1248:
    // 0x3f1248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f1248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f124c:
    // 0x3f124c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f124cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f1250:
    // 0x3f1250: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f1250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f1254:
    // 0x3f1254: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f1254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f1258:
    // 0x3f1258: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f1258u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f125c:
    // 0x3f125c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f125cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1260:
    // 0x3f1260: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f1260u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f1264:
    // 0x3f1264: 0xc0e858c  jal         func_3A1630
label_3f1268:
    if (ctx->pc == 0x3F1268u) {
        ctx->pc = 0x3F1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1264u;
        // 0x3f1268: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F126Cu;
        goto label_3f126c;
    }
    ctx->pc = 0x3F1264u;
    SET_GPR_U32(ctx, 31, 0x3F126Cu);
    ctx->pc = 0x3F1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1264u;
    // 0x3f1268: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F1264u, 0x3F126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F126Cu;
label_3f126c:
    // 0x3f126c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f1270:
    // 0x3f1270: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3f1270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f1274:
    // 0x3f1274: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_3f1278:
    if (ctx->pc == 0x3F1278u) {
        ctx->pc = 0x3F1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1274u;
        // 0x3f1278: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F127Cu;
        goto label_3f127c;
    }
    ctx->pc = 0x3F1274u;
    {
        const bool branch_taken_0x3f1274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f1274) {
            ctx->pc = 0x3F1278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F1274u;
            // 0x3f1278: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F12D8u;
            goto label_3f12d8;
        }
    }
    ctx->pc = 0x3F127Cu;
label_3f127c:
    // 0x3f127c: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f127cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f1280:
    // 0x3f1280: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f1280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f1284:
    // 0x3f1284: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f1284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f1288:
    // 0x3f1288: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3f1288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f128c:
    // 0x3f128c: 0x3c01c374  lui         $at, 0xC374
    ctx->pc = 0x3f128cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50036 << 16));
label_3f1290:
    // 0x3f1290: 0x3421f893  ori         $at, $at, 0xF893
    ctx->pc = 0x3f1290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63635);
label_3f1294:
    // 0x3f1294: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f1294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f1298:
    // 0x3f1298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f129c:
    // 0x3f129c: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x3f129cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_3f12a0:
    // 0x3f12a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f12a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f12a4:
    // 0x3f12a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f12a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f12a8:
    // 0x3f12a8: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x3f12a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_3f12ac:
    // 0x3f12ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f12acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f12b0:
    // 0x3f12b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f12b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f12b4:
    // 0x3f12b4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f12b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f12b8:
    // 0x3f12b8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3f12b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f12bc:
    // 0x3f12bc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f12bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f12c0:
    // 0x3f12c0: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3f12c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f12c4:
    // 0x3f12c4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f12c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f12c8:
    // 0x3f12c8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f12c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f12cc:
    // 0x3f12cc: 0xc0e858c  jal         func_3A1630
label_3f12d0:
    if (ctx->pc == 0x3F12D0u) {
        ctx->pc = 0x3F12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F12CCu;
        // 0x3f12d0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F12D4u;
        goto label_3f12d4;
    }
    ctx->pc = 0x3F12CCu;
    SET_GPR_U32(ctx, 31, 0x3F12D4u);
    ctx->pc = 0x3F12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F12CCu;
    // 0x3f12d0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F12CCu, 0x3F12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F12D4u;
label_3f12d4:
    // 0x3f12d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f12d8:
    // 0x3f12d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3f12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3f12dc:
    // 0x3f12dc: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_3f12e0:
    if (ctx->pc == 0x3F12E0u) {
        ctx->pc = 0x3F12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F12DCu;
        // 0x3f12e0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F12E4u;
        goto label_3f12e4;
    }
    ctx->pc = 0x3F12DCu;
    {
        const bool branch_taken_0x3f12dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f12dc) {
            ctx->pc = 0x3F12E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F12DCu;
            // 0x3f12e0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F134Cu;
            goto label_3f134c;
        }
    }
    ctx->pc = 0x3F12E4u;
label_3f12e4:
    // 0x3f12e4: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f12e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f12e8:
    // 0x3f12e8: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f12e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f12ec:
    // 0x3f12ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f12ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f12f0:
    // 0x3f12f0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3f12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f12f4:
    // 0x3f12f4: 0x3c01c375  lui         $at, 0xC375
    ctx->pc = 0x3f12f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50037 << 16));
label_3f12f8:
    // 0x3f12f8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x3f12f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_3f12fc:
    // 0x3f12fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f12fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f1300:
    // 0x3f1300: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f1300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f1304:
    // 0x3f1304: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x3f1304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_3f1308:
    // 0x3f1308: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f1308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f130c:
    // 0x3f130c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f130cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f1310:
    // 0x3f1310: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3f1310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3f1314:
    // 0x3f1314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f1314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f1318:
    // 0x3f1318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f1318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f131c:
    // 0x3f131c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f131cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1320:
    // 0x3f1320: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3f1320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f1324:
    // 0x3f1324: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3f1324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3f1328:
    // 0x3f1328: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3f1328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3f132c:
    // 0x3f132c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f132cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f1330:
    // 0x3f1330: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x3f1330u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f1334:
    // 0x3f1334: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x3f1334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
label_3f1338:
    // 0x3f1338: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f1338u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f133c:
    // 0x3f133c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3f133cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3f1340:
    // 0x3f1340: 0xc0e858c  jal         func_3A1630
label_3f1344:
    if (ctx->pc == 0x3F1344u) {
        ctx->pc = 0x3F1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1340u;
        // 0x3f1344: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1348u;
        goto label_3f1348;
    }
    ctx->pc = 0x3F1340u;
    SET_GPR_U32(ctx, 31, 0x3F1348u);
    ctx->pc = 0x3F1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1340u;
    // 0x3f1344: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F1340u, 0x3F1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1348u;
label_3f1348:
    // 0x3f1348: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f1348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f134c:
    // 0x3f134c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3f134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3f1350:
    // 0x3f1350: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_3f1354:
    if (ctx->pc == 0x3F1354u) {
        ctx->pc = 0x3F1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1350u;
        // 0x3f1354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1358u;
        goto label_3f1358;
    }
    ctx->pc = 0x3F1350u;
    {
        const bool branch_taken_0x3f1350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1350u;
        // 0x3f1354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1350) {
            ctx->pc = 0x3F136Cu;
            goto label_3f136c;
        }
    }
    ctx->pc = 0x3F1358u;
label_3f1358:
    // 0x3f1358: 0x3c01be38  lui         $at, 0xBE38
    ctx->pc = 0x3f1358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48696 << 16));
label_3f135c:
    // 0x3f135c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3f135cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3f1360:
    // 0x3f1360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f1360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f1364:
    // 0x3f1364: 0x10000002  b           . + 4 + (0x2 << 2)
label_3f1368:
    if (ctx->pc == 0x3F1368u) {
        ctx->pc = 0x3F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1364u;
        // 0x3f1368: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F136Cu;
        goto label_3f136c;
    }
    ctx->pc = 0x3F1364u;
    {
        const bool branch_taken_0x3f1364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1364u;
        // 0x3f1368: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1364) {
            ctx->pc = 0x3F1370u;
            goto label_3f1370;
        }
    }
    ctx->pc = 0x3F136Cu;
label_3f136c:
    // 0x3f136c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f1370:
    // 0x3f1370: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3f1370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1374:
    // 0x3f1374: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f1374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1378:
    // 0x3f1378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f1378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f137c:
    // 0x3f137c: 0x3e00008  jr          $ra
label_3f1380:
    if (ctx->pc == 0x3F1380u) {
        ctx->pc = 0x3F1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F137Cu;
        // 0x3f1380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1384u;
        goto label_3f1384;
    }
    ctx->pc = 0x3F137Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F137Cu;
        // 0x3f1380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F137Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1384u;
label_3f1384:
    // 0x3f1384: 0x0  nop
    ctx->pc = 0x3f1384u;
    // NOP
    ctx->pc = 0x3f1388u;
}
