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

// Function: sub_003B10F8
// Address: 0x3b10f8 - 0x3b1460
void sub_003B10F8_0x3b10f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B10F8_0x3b10f8");
#endif

    switch (ctx->pc) {
        case 0x3b10f8u: goto label_3b10f8;
        case 0x3b10fcu: goto label_3b10fc;
        case 0x3b1100u: goto label_3b1100;
        case 0x3b1104u: goto label_3b1104;
        case 0x3b1108u: goto label_3b1108;
        case 0x3b110cu: goto label_3b110c;
        case 0x3b1110u: goto label_3b1110;
        case 0x3b1114u: goto label_3b1114;
        case 0x3b1118u: goto label_3b1118;
        case 0x3b111cu: goto label_3b111c;
        case 0x3b1120u: goto label_3b1120;
        case 0x3b1124u: goto label_3b1124;
        case 0x3b1128u: goto label_3b1128;
        case 0x3b112cu: goto label_3b112c;
        case 0x3b1130u: goto label_3b1130;
        case 0x3b1134u: goto label_3b1134;
        case 0x3b1138u: goto label_3b1138;
        case 0x3b113cu: goto label_3b113c;
        case 0x3b1140u: goto label_3b1140;
        case 0x3b1144u: goto label_3b1144;
        case 0x3b1148u: goto label_3b1148;
        case 0x3b114cu: goto label_3b114c;
        case 0x3b1150u: goto label_3b1150;
        case 0x3b1154u: goto label_3b1154;
        case 0x3b1158u: goto label_3b1158;
        case 0x3b115cu: goto label_3b115c;
        case 0x3b1160u: goto label_3b1160;
        case 0x3b1164u: goto label_3b1164;
        case 0x3b1168u: goto label_3b1168;
        case 0x3b116cu: goto label_3b116c;
        case 0x3b1170u: goto label_3b1170;
        case 0x3b1174u: goto label_3b1174;
        case 0x3b1178u: goto label_3b1178;
        case 0x3b117cu: goto label_3b117c;
        case 0x3b1180u: goto label_3b1180;
        case 0x3b1184u: goto label_3b1184;
        case 0x3b1188u: goto label_3b1188;
        case 0x3b118cu: goto label_3b118c;
        case 0x3b1190u: goto label_3b1190;
        case 0x3b1194u: goto label_3b1194;
        case 0x3b1198u: goto label_3b1198;
        case 0x3b119cu: goto label_3b119c;
        case 0x3b11a0u: goto label_3b11a0;
        case 0x3b11a4u: goto label_3b11a4;
        case 0x3b11a8u: goto label_3b11a8;
        case 0x3b11acu: goto label_3b11ac;
        case 0x3b11b0u: goto label_3b11b0;
        case 0x3b11b4u: goto label_3b11b4;
        case 0x3b11b8u: goto label_3b11b8;
        case 0x3b11bcu: goto label_3b11bc;
        case 0x3b11c0u: goto label_3b11c0;
        case 0x3b11c4u: goto label_3b11c4;
        case 0x3b11c8u: goto label_3b11c8;
        case 0x3b11ccu: goto label_3b11cc;
        case 0x3b11d0u: goto label_3b11d0;
        case 0x3b11d4u: goto label_3b11d4;
        case 0x3b11d8u: goto label_3b11d8;
        case 0x3b11dcu: goto label_3b11dc;
        case 0x3b11e0u: goto label_3b11e0;
        case 0x3b11e4u: goto label_3b11e4;
        case 0x3b11e8u: goto label_3b11e8;
        case 0x3b11ecu: goto label_3b11ec;
        case 0x3b11f0u: goto label_3b11f0;
        case 0x3b11f4u: goto label_3b11f4;
        case 0x3b11f8u: goto label_3b11f8;
        case 0x3b11fcu: goto label_3b11fc;
        case 0x3b1200u: goto label_3b1200;
        case 0x3b1204u: goto label_3b1204;
        case 0x3b1208u: goto label_3b1208;
        case 0x3b120cu: goto label_3b120c;
        case 0x3b1210u: goto label_3b1210;
        case 0x3b1214u: goto label_3b1214;
        case 0x3b1218u: goto label_3b1218;
        case 0x3b121cu: goto label_3b121c;
        case 0x3b1220u: goto label_3b1220;
        case 0x3b1224u: goto label_3b1224;
        case 0x3b1228u: goto label_3b1228;
        case 0x3b122cu: goto label_3b122c;
        case 0x3b1230u: goto label_3b1230;
        case 0x3b1234u: goto label_3b1234;
        case 0x3b1238u: goto label_3b1238;
        case 0x3b123cu: goto label_3b123c;
        case 0x3b1240u: goto label_3b1240;
        case 0x3b1244u: goto label_3b1244;
        case 0x3b1248u: goto label_3b1248;
        case 0x3b124cu: goto label_3b124c;
        case 0x3b1250u: goto label_3b1250;
        case 0x3b1254u: goto label_3b1254;
        case 0x3b1258u: goto label_3b1258;
        case 0x3b125cu: goto label_3b125c;
        case 0x3b1260u: goto label_3b1260;
        case 0x3b1264u: goto label_3b1264;
        case 0x3b1268u: goto label_3b1268;
        case 0x3b126cu: goto label_3b126c;
        case 0x3b1270u: goto label_3b1270;
        case 0x3b1274u: goto label_3b1274;
        case 0x3b1278u: goto label_3b1278;
        case 0x3b127cu: goto label_3b127c;
        case 0x3b1280u: goto label_3b1280;
        case 0x3b1284u: goto label_3b1284;
        case 0x3b1288u: goto label_3b1288;
        case 0x3b128cu: goto label_3b128c;
        case 0x3b1290u: goto label_3b1290;
        case 0x3b1294u: goto label_3b1294;
        case 0x3b1298u: goto label_3b1298;
        case 0x3b129cu: goto label_3b129c;
        case 0x3b12a0u: goto label_3b12a0;
        case 0x3b12a4u: goto label_3b12a4;
        case 0x3b12a8u: goto label_3b12a8;
        case 0x3b12acu: goto label_3b12ac;
        case 0x3b12b0u: goto label_3b12b0;
        case 0x3b12b4u: goto label_3b12b4;
        case 0x3b12b8u: goto label_3b12b8;
        case 0x3b12bcu: goto label_3b12bc;
        case 0x3b12c0u: goto label_3b12c0;
        case 0x3b12c4u: goto label_3b12c4;
        case 0x3b12c8u: goto label_3b12c8;
        case 0x3b12ccu: goto label_3b12cc;
        case 0x3b12d0u: goto label_3b12d0;
        case 0x3b12d4u: goto label_3b12d4;
        case 0x3b12d8u: goto label_3b12d8;
        case 0x3b12dcu: goto label_3b12dc;
        case 0x3b12e0u: goto label_3b12e0;
        case 0x3b12e4u: goto label_3b12e4;
        case 0x3b12e8u: goto label_3b12e8;
        case 0x3b12ecu: goto label_3b12ec;
        case 0x3b12f0u: goto label_3b12f0;
        case 0x3b12f4u: goto label_3b12f4;
        case 0x3b12f8u: goto label_3b12f8;
        case 0x3b12fcu: goto label_3b12fc;
        case 0x3b1300u: goto label_3b1300;
        case 0x3b1304u: goto label_3b1304;
        case 0x3b1308u: goto label_3b1308;
        case 0x3b130cu: goto label_3b130c;
        case 0x3b1310u: goto label_3b1310;
        case 0x3b1314u: goto label_3b1314;
        case 0x3b1318u: goto label_3b1318;
        case 0x3b131cu: goto label_3b131c;
        case 0x3b1320u: goto label_3b1320;
        case 0x3b1324u: goto label_3b1324;
        case 0x3b1328u: goto label_3b1328;
        case 0x3b132cu: goto label_3b132c;
        case 0x3b1330u: goto label_3b1330;
        case 0x3b1334u: goto label_3b1334;
        case 0x3b1338u: goto label_3b1338;
        case 0x3b133cu: goto label_3b133c;
        case 0x3b1340u: goto label_3b1340;
        case 0x3b1344u: goto label_3b1344;
        case 0x3b1348u: goto label_3b1348;
        case 0x3b134cu: goto label_3b134c;
        case 0x3b1350u: goto label_3b1350;
        case 0x3b1354u: goto label_3b1354;
        case 0x3b1358u: goto label_3b1358;
        case 0x3b135cu: goto label_3b135c;
        case 0x3b1360u: goto label_3b1360;
        case 0x3b1364u: goto label_3b1364;
        case 0x3b1368u: goto label_3b1368;
        case 0x3b136cu: goto label_3b136c;
        case 0x3b1370u: goto label_3b1370;
        case 0x3b1374u: goto label_3b1374;
        case 0x3b1378u: goto label_3b1378;
        case 0x3b137cu: goto label_3b137c;
        case 0x3b1380u: goto label_3b1380;
        case 0x3b1384u: goto label_3b1384;
        case 0x3b1388u: goto label_3b1388;
        case 0x3b138cu: goto label_3b138c;
        case 0x3b1390u: goto label_3b1390;
        case 0x3b1394u: goto label_3b1394;
        case 0x3b1398u: goto label_3b1398;
        case 0x3b139cu: goto label_3b139c;
        case 0x3b13a0u: goto label_3b13a0;
        case 0x3b13a4u: goto label_3b13a4;
        case 0x3b13a8u: goto label_3b13a8;
        case 0x3b13acu: goto label_3b13ac;
        case 0x3b13b0u: goto label_3b13b0;
        case 0x3b13b4u: goto label_3b13b4;
        case 0x3b13b8u: goto label_3b13b8;
        case 0x3b13bcu: goto label_3b13bc;
        case 0x3b13c0u: goto label_3b13c0;
        case 0x3b13c4u: goto label_3b13c4;
        case 0x3b13c8u: goto label_3b13c8;
        case 0x3b13ccu: goto label_3b13cc;
        case 0x3b13d0u: goto label_3b13d0;
        case 0x3b13d4u: goto label_3b13d4;
        case 0x3b13d8u: goto label_3b13d8;
        case 0x3b13dcu: goto label_3b13dc;
        case 0x3b13e0u: goto label_3b13e0;
        case 0x3b13e4u: goto label_3b13e4;
        case 0x3b13e8u: goto label_3b13e8;
        case 0x3b13ecu: goto label_3b13ec;
        case 0x3b13f0u: goto label_3b13f0;
        case 0x3b13f4u: goto label_3b13f4;
        case 0x3b13f8u: goto label_3b13f8;
        case 0x3b13fcu: goto label_3b13fc;
        case 0x3b1400u: goto label_3b1400;
        case 0x3b1404u: goto label_3b1404;
        case 0x3b1408u: goto label_3b1408;
        case 0x3b140cu: goto label_3b140c;
        case 0x3b1410u: goto label_3b1410;
        case 0x3b1414u: goto label_3b1414;
        case 0x3b1418u: goto label_3b1418;
        case 0x3b141cu: goto label_3b141c;
        case 0x3b1420u: goto label_3b1420;
        case 0x3b1424u: goto label_3b1424;
        case 0x3b1428u: goto label_3b1428;
        case 0x3b142cu: goto label_3b142c;
        case 0x3b1430u: goto label_3b1430;
        case 0x3b1434u: goto label_3b1434;
        case 0x3b1438u: goto label_3b1438;
        case 0x3b143cu: goto label_3b143c;
        case 0x3b1440u: goto label_3b1440;
        case 0x3b1444u: goto label_3b1444;
        case 0x3b1448u: goto label_3b1448;
        case 0x3b144cu: goto label_3b144c;
        case 0x3b1450u: goto label_3b1450;
        case 0x3b1454u: goto label_3b1454;
        case 0x3b1458u: goto label_3b1458;
        case 0x3b145cu: goto label_3b145c;
        default: break;
    }

    ctx->pc = 0x3b10f8u;

label_3b10f8:
    // 0x3b10f8: 0x27bdf660  addiu       $sp, $sp, -0x9A0
    ctx->pc = 0x3b10f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964832));
label_3b10fc:
    // 0x3b10fc: 0x7fb00960  sq          $s0, 0x960($sp)
    ctx->pc = 0x3b10fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 16));
label_3b1100:
    // 0x3b1100: 0x7fb10950  sq          $s1, 0x950($sp)
    ctx->pc = 0x3b1100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 17));
label_3b1104:
    // 0x3b1104: 0x7fb20940  sq          $s2, 0x940($sp)
    ctx->pc = 0x3b1104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 18));
label_3b1108:
    // 0x3b1108: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b1108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b110c:
    // 0x3b110c: 0x7fb30930  sq          $s3, 0x930($sp)
    ctx->pc = 0x3b110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 19));
label_3b1110:
    // 0x3b1110: 0x7fb40920  sq          $s4, 0x920($sp)
    ctx->pc = 0x3b1110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 20));
label_3b1114:
    // 0x3b1114: 0x7fb50910  sq          $s5, 0x910($sp)
    ctx->pc = 0x3b1114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 21));
label_3b1118:
    // 0x3b1118: 0x7fb60900  sq          $s6, 0x900($sp)
    ctx->pc = 0x3b1118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 22));
label_3b111c:
    // 0x3b111c: 0x7fb708f0  sq          $s7, 0x8F0($sp)
    ctx->pc = 0x3b111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 23));
label_3b1120:
    // 0x3b1120: 0x7fbe08e0  sq          $fp, 0x8E0($sp)
    ctx->pc = 0x3b1120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 30));
label_3b1124:
    // 0x3b1124: 0xffbf08d0  sd          $ra, 0x8D0($sp)
    ctx->pc = 0x3b1124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2256), GPR_U64(ctx, 31));
label_3b1128:
    // 0x3b1128: 0xe7b80990  swc1        $f24, 0x990($sp)
    ctx->pc = 0x3b1128u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2448), bits); }
label_3b112c:
    // 0x3b112c: 0xe7b70988  swc1        $f23, 0x988($sp)
    ctx->pc = 0x3b112cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2440), bits); }
label_3b1130:
    // 0x3b1130: 0xe7b60980  swc1        $f22, 0x980($sp)
    ctx->pc = 0x3b1130u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2432), bits); }
label_3b1134:
    // 0x3b1134: 0xe7b50978  swc1        $f21, 0x978($sp)
    ctx->pc = 0x3b1134u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2424), bits); }
label_3b1138:
    // 0x3b1138: 0xe7b40970  swc1        $f20, 0x970($sp)
    ctx->pc = 0x3b1138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2416), bits); }
label_3b113c:
    // 0x3b113c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b1140:
    // 0x3b1140: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b1140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b1144:
    // 0x3b1144: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b1144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b1148:
    // 0x3b1148: 0x40f809  jalr        $v0
label_3b114c:
    if (ctx->pc == 0x3B114Cu) {
        ctx->pc = 0x3B114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1148u;
        // 0x3b114c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1150u;
        goto label_3b1150;
    }
    ctx->pc = 0x3B1148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1150u);
        ctx->pc = 0x3B114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1148u;
        // 0x3b114c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1148u, 0x3B1150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1150u;
label_3b1150:
    // 0x3b1150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b1150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1154:
    // 0x3b1154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b1154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b1158:
    // 0x3b1158: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b1158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b115c:
    // 0x3b115c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3b115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3b1160:
    // 0x3b1160: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b1160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3b1164:
    // 0x3b1164: 0x0  nop
    ctx->pc = 0x3b1164u;
    // NOP
label_3b1168:
    // 0x3b1168: 0x0  nop
    ctx->pc = 0x3b1168u;
    // NOP
label_3b116c:
    // 0x3b116c: 0x0  nop
    ctx->pc = 0x3b116cu;
    // NOP
label_3b1170:
    // 0x3b1170: 0x0  nop
    ctx->pc = 0x3b1170u;
    // NOP
label_3b1174:
    // 0x3b1174: 0x0  nop
    ctx->pc = 0x3b1174u;
    // NOP
label_3b1178:
    // 0x3b1178: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3b117c:
    if (ctx->pc == 0x3B117Cu) {
        ctx->pc = 0x3B117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1178u;
        // 0x3b117c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1180u;
        goto label_3b1180;
    }
    ctx->pc = 0x3B1178u;
    {
        const bool branch_taken_0x3b1178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1178u;
        // 0x3b117c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1178) {
            ctx->pc = 0x3B1168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1168;
        }
    }
    ctx->pc = 0x3B1180u;
label_3b1180:
    // 0x3b1180: 0xc138ddc  jal         func_4E3770
label_3b1184:
    if (ctx->pc == 0x3B1184u) {
        ctx->pc = 0x3B1188u;
        goto label_3b1188;
    }
    ctx->pc = 0x3B1180u;
    SET_GPR_U32(ctx, 31, 0x3B1188u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3B1180u, 0x3B1188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1188u;
label_3b1188:
    // 0x3b1188: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3b1188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b118c:
    // 0x3b118c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1190:
    // 0x3b1190: 0x146200a0  bne         $v1, $v0, . + 4 + (0xA0 << 2)
label_3b1194:
    if (ctx->pc == 0x3B1194u) {
        ctx->pc = 0x3B1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1190u;
        // 0x3b1194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1198u;
        goto label_3b1198;
    }
    ctx->pc = 0x3B1190u;
    {
        const bool branch_taken_0x3b1190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1190u;
        // 0x3b1194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1190) {
            ctx->pc = 0x3B1414u;
            goto label_3b1414;
        }
    }
    ctx->pc = 0x3B1198u;
label_3b1198:
    // 0x3b1198: 0xc0e9694  jal         func_3A5A50
label_3b119c:
    if (ctx->pc == 0x3B119Cu) {
        ctx->pc = 0x3B119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1198u;
        // 0x3b119c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11A0u;
        goto label_3b11a0;
    }
    ctx->pc = 0x3B1198u;
    SET_GPR_U32(ctx, 31, 0x3B11A0u);
    ctx->pc = 0x3B119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1198u;
    // 0x3b119c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B1198u, 0x3B11A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B11A0u;
label_3b11a0:
    // 0x3b11a0: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_3b11a4:
    if (ctx->pc == 0x3B11A4u) {
        ctx->pc = 0x3B11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11A0u;
        // 0x3b11a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11A8u;
        goto label_3b11a8;
    }
    ctx->pc = 0x3B11A0u;
    {
        const bool branch_taken_0x3b11a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11A0u;
        // 0x3b11a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11a0) {
            ctx->pc = 0x3B140Cu;
            goto label_3b140c;
        }
    }
    ctx->pc = 0x3B11A8u;
label_3b11a8:
    // 0x3b11a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b11a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b11ac:
    // 0x3b11ac: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3b11acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3b11b0:
    // 0x3b11b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3b11b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b11b4:
    // 0x3b11b4: 0xc0cd4ee  jal         func_3353B8
label_3b11b8:
    if (ctx->pc == 0x3B11B8u) {
        ctx->pc = 0x3B11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11B4u;
        // 0x3b11b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11BCu;
        goto label_3b11bc;
    }
    ctx->pc = 0x3B11B4u;
    SET_GPR_U32(ctx, 31, 0x3B11BCu);
    ctx->pc = 0x3B11B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B11B4u;
    // 0x3b11b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3B11B4u, 0x3B11BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B11BCu;
label_3b11bc:
    // 0x3b11bc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3b11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3b11c0:
    // 0x3b11c0: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3b11c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3b11c4:
    // 0x3b11c4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x3b11c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b11c8:
    // 0x3b11c8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3b11c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b11cc:
    // 0x3b11cc: 0xc0e90ca  jal         func_3A4328
label_3b11d0:
    if (ctx->pc == 0x3B11D0u) {
        ctx->pc = 0x3B11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11CCu;
        // 0x3b11d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11D4u;
        goto label_3b11d4;
    }
    ctx->pc = 0x3B11CCu;
    SET_GPR_U32(ctx, 31, 0x3B11D4u);
    ctx->pc = 0x3B11D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B11CCu;
    // 0x3b11d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3B11CCu, 0x3B11D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B11D4u;
label_3b11d4:
    // 0x3b11d4: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3b11d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3b11d8:
    // 0x3b11d8: 0x12c0008a  beqz        $s6, . + 4 + (0x8A << 2)
label_3b11dc:
    if (ctx->pc == 0x3B11DCu) {
        ctx->pc = 0x3B11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D8u;
        // 0x3b11dc: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B11E0u;
        goto label_3b11e0;
    }
    ctx->pc = 0x3B11D8u;
    {
        const bool branch_taken_0x3b11d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11D8u;
        // 0x3b11dc: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11d8) {
            ctx->pc = 0x3B1404u;
            goto label_3b1404;
        }
    }
    ctx->pc = 0x3B11E0u;
label_3b11e0:
    // 0x3b11e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b11e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b11e4:
    // 0x3b11e4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3b11e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3b11e8:
    // 0x3b11e8: 0x27b50460  addiu       $s5, $sp, 0x460
    ctx->pc = 0x3b11e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3b11ec:
    // 0x3b11ec: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x3b11ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_3b11f0:
    // 0x3b11f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b11f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b11f4:
    // 0x3b11f4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b11f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b11f8:
    // 0x3b11f8: 0x27b404c0  addiu       $s4, $sp, 0x4C0
    ctx->pc = 0x3b11f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3b11fc:
    // 0x3b11fc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3b11fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3b1200:
    // 0x3b1200: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3b1200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3b1204:
    // 0x3b1204: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b1204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b1208:
    // 0x3b1208: 0x27be0850  addiu       $fp, $sp, 0x850
    ctx->pc = 0x3b1208u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3b120c:
    // 0x3b120c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3b120cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3b1210:
    // 0x3b1210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b1210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b1214:
    // 0x3b1214: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3b1214u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3b1218:
    // 0x3b1218: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3b1218u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3b121c:
    // 0x3b121c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b121cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b1220:
    // 0x3b1220: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b1220u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b1224:
    // 0x3b1224: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b1224u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b1228:
    // 0x3b1228: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b1228u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b122c:
    // 0x3b122c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b122cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b1230:
    // 0x3b1230: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3b1230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3b1234:
    // 0x3b1234: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b1234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b1238:
    // 0x3b1238: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b1238u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b123c:
    // 0x3b123c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3b123cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b1240:
    // 0x3b1240: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3b1240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b1244:
    // 0x3b1244: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3b1244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b1248:
    // 0x3b1248: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3b1248u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3b124c:
    // 0x3b124c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3b124cu;
    // VWAITQ (Q already resolved in this runtime)
label_3b1250:
    // 0x3b1250: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3b1250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b1254:
    // 0x3b1254: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3b1254u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b1258:
    // 0x3b1258: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3b1258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3b125c:
    // 0x3b125c: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3b125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3b1260:
    // 0x3b1260: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3b1260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3b1264:
    // 0x3b1264: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3b1264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3b1268:
    // 0x3b1268: 0x7fa304b0  sq          $v1, 0x4B0($sp)
    ctx->pc = 0x3b1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 3));
label_3b126c:
    // 0x3b126c: 0xc0cd518  jal         func_335460
label_3b1270:
    if (ctx->pc == 0x3B1270u) {
        ctx->pc = 0x3B1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B126Cu;
        // 0x3b1270: 0x7fa304a0  sq          $v1, 0x4A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1274u;
        goto label_3b1274;
    }
    ctx->pc = 0x3B126Cu;
    SET_GPR_U32(ctx, 31, 0x3B1274u);
    ctx->pc = 0x3B1270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B126Cu;
    // 0x3b1270: 0x7fa304a0  sq          $v1, 0x4A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B126Cu, 0x3B1274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1274u;
label_3b1274:
    // 0x3b1274: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b1274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b1278:
    // 0x3b1278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b1278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b127c:
    // 0x3b127c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3b127cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3b1280:
    // 0x3b1280: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b1280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b1284:
    // 0x3b1284: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b1284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b1288:
    // 0x3b1288: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b1288u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b128c:
    // 0x3b128c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b128cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b1290:
    // 0x3b1290: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b1290u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b1294:
    // 0x3b1294: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3b1294u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3b1298:
    // 0x3b1298: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3b1298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3b129c:
    // 0x3b129c: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3b129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3b12a0:
    // 0x3b12a0: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3b12a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3b12a4:
    // 0x3b12a4: 0xc0cd518  jal         func_335460
label_3b12a8:
    if (ctx->pc == 0x3B12A8u) {
        ctx->pc = 0x3B12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12A4u;
        // 0x3b12a8: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12ACu;
        goto label_3b12ac;
    }
    ctx->pc = 0x3B12A4u;
    SET_GPR_U32(ctx, 31, 0x3B12ACu);
    ctx->pc = 0x3B12A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B12A4u;
    // 0x3b12a8: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B12A4u, 0x3B12ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B12ACu;
label_3b12ac:
    // 0x3b12ac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3b12acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3b12b0:
    // 0x3b12b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b12b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b12b4:
    // 0x3b12b4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b12b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b12b8:
    // 0x3b12b8: 0xc0cd518  jal         func_335460
label_3b12bc:
    if (ctx->pc == 0x3B12BCu) {
        ctx->pc = 0x3B12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12B8u;
        // 0x3b12bc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12C0u;
        goto label_3b12c0;
    }
    ctx->pc = 0x3B12B8u;
    SET_GPR_U32(ctx, 31, 0x3B12C0u);
    ctx->pc = 0x3B12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B12B8u;
    // 0x3b12bc: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B12B8u, 0x3B12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B12C0u;
label_3b12c0:
    // 0x3b12c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b12c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b12c4:
    // 0x3b12c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b12c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b12c8:
    // 0x3b12c8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b12c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b12cc:
    // 0x3b12cc: 0xc0cd518  jal         func_335460
label_3b12d0:
    if (ctx->pc == 0x3B12D0u) {
        ctx->pc = 0x3B12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12CCu;
        // 0x3b12d0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12D4u;
        goto label_3b12d4;
    }
    ctx->pc = 0x3B12CCu;
    SET_GPR_U32(ctx, 31, 0x3B12D4u);
    ctx->pc = 0x3B12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B12CCu;
    // 0x3b12d0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B12CCu, 0x3B12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B12D4u;
label_3b12d4:
    // 0x3b12d4: 0xe7b50460  swc1        $f21, 0x460($sp)
    ctx->pc = 0x3b12d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3b12d8:
    // 0x3b12d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b12d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b12dc:
    // 0x3b12dc: 0xe7b40464  swc1        $f20, 0x464($sp)
    ctx->pc = 0x3b12dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_3b12e0:
    // 0x3b12e0: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x3b12e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3b12e4:
    // 0x3b12e4: 0xe6b8000c  swc1        $f24, 0xC($s5)
    ctx->pc = 0x3b12e4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_3b12e8:
    // 0x3b12e8: 0x7ba30460  lq          $v1, 0x460($sp)
    ctx->pc = 0x3b12e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3b12ec:
    // 0x3b12ec: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3b12ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3b12f0:
    // 0x3b12f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b12f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b12f4:
    // 0x3b12f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b12f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b12f8:
    // 0x3b12f8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b12f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b12fc:
    // 0x3b12fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b12fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b1300:
    // 0x3b1300: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b1300u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b1304:
    // 0x3b1304: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3b1304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3b1308:
    // 0x3b1308: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3b1308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3b130c:
    // 0x3b130c: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3b130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3b1310:
    // 0x3b1310: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3b1310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3b1314:
    // 0x3b1314: 0xc0e9694  jal         func_3A5A50
label_3b1318:
    if (ctx->pc == 0x3B1318u) {
        ctx->pc = 0x3B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1314u;
        // 0x3b1318: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B131Cu;
        goto label_3b131c;
    }
    ctx->pc = 0x3B1314u;
    SET_GPR_U32(ctx, 31, 0x3B131Cu);
    ctx->pc = 0x3B1318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1314u;
    // 0x3b1318: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3B1314u, 0x3B131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B131Cu;
label_3b131c:
    // 0x3b131c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_3b1320:
    if (ctx->pc == 0x3B1320u) {
        ctx->pc = 0x3B1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B131Cu;
        // 0x3b1320: 0x7ba20420  lq          $v0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1324u;
        goto label_3b1324;
    }
    ctx->pc = 0x3B131Cu;
    {
        const bool branch_taken_0x3b131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B131Cu;
        // 0x3b1320: 0x7ba20420  lq          $v0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b131c) {
            ctx->pc = 0x3B13F0u;
            goto label_3b13f0;
        }
    }
    ctx->pc = 0x3B1324u;
label_3b1324:
    // 0x3b1324: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b1324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b1328:
    // 0x3b1328: 0x7ba30430  lq          $v1, 0x430($sp)
    ctx->pc = 0x3b1328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3b132c:
    // 0x3b132c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b132cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b1330:
    // 0x3b1330: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3b1330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3b1334:
    // 0x3b1334: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3b1334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3b1338:
    // 0x3b1338: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3b1338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3b133c:
    // 0x3b133c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3b133cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b1340:
    // 0x3b1340: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3b1340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b1344:
    // 0x3b1344: 0xc0e9fa6  jal         func_3A7E98
label_3b1348:
    if (ctx->pc == 0x3B1348u) {
        ctx->pc = 0x3B1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1344u;
        // 0x3b1348: 0xafa20460  sw          $v0, 0x460($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B134Cu;
        goto label_3b134c;
    }
    ctx->pc = 0x3B1344u;
    SET_GPR_U32(ctx, 31, 0x3B134Cu);
    ctx->pc = 0x3B1348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1344u;
    // 0x3b1348: 0xafa20460  sw          $v0, 0x460($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B1344u, 0x3B134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B134Cu;
label_3b134c:
    // 0x3b134c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3b134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3b1350:
    // 0x3b1350: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b1350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b1354:
    // 0x3b1354: 0xc0f15bc  jal         func_3C56F0
label_3b1358:
    if (ctx->pc == 0x3B1358u) {
        ctx->pc = 0x3B1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1354u;
        // 0x3b1358: 0x24441ff0  addiu       $a0, $v0, 0x1FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B135Cu;
        goto label_3b135c;
    }
    ctx->pc = 0x3B1354u;
    SET_GPR_U32(ctx, 31, 0x3B135Cu);
    ctx->pc = 0x3B1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1354u;
    // 0x3b1358: 0x24441ff0  addiu       $a0, $v0, 0x1FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B1354u, 0x3B135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B135Cu;
label_3b135c:
    // 0x3b135c: 0xc0e8630  jal         func_3A18C0
label_3b1360:
    if (ctx->pc == 0x3B1360u) {
        ctx->pc = 0x3B1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B135Cu;
        // 0x3b1360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1364u;
        goto label_3b1364;
    }
    ctx->pc = 0x3B135Cu;
    SET_GPR_U32(ctx, 31, 0x3B1364u);
    ctx->pc = 0x3B1360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B135Cu;
    // 0x3b1360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3B135Cu, 0x3B1364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1364u;
label_3b1364:
    // 0x3b1364: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3b1368:
    if (ctx->pc == 0x3B1368u) {
        ctx->pc = 0x3B1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1364u;
        // 0x3b1368: 0x7ba30430  lq          $v1, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B136Cu;
        goto label_3b136c;
    }
    ctx->pc = 0x3B1364u;
    {
        const bool branch_taken_0x3b1364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1364u;
        // 0x3b1368: 0x7ba30430  lq          $v1, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1364) {
            ctx->pc = 0x3B13F0u;
            goto label_3b13f0;
        }
    }
    ctx->pc = 0x3B136Cu;
label_3b136c:
    // 0x3b136c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1370:
    // 0x3b1370: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x3b1370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_3b1374:
    // 0x3b1374: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3b1374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b1378:
    // 0x3b1378: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3b1378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b137c:
    // 0x3b137c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b137cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b1380:
    // 0x3b1380: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3b1380u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b1384:
    // 0x3b1384: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3b1384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3b1388:
    // 0x3b1388: 0x7fa30890  sq          $v1, 0x890($sp)
    ctx->pc = 0x3b1388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 3));
label_3b138c:
    // 0x3b138c: 0x7fa30870  sq          $v1, 0x870($sp)
    ctx->pc = 0x3b138cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 3));
label_3b1390:
    // 0x3b1390: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3b1390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3b1394:
    // 0x3b1394: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b1394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b1398:
    // 0x3b1398: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b1398u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b139c:
    // 0x3b139c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b139cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b13a0:
    // 0x3b13a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b13a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b13a4:
    // 0x3b13a4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b13a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b13a8:
    // 0x3b13a8: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3b13a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3b13ac:
    // 0x3b13ac: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3b13acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3b13b0:
    // 0x3b13b0: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x3b13b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
label_3b13b4:
    // 0x3b13b4: 0xc0e8630  jal         func_3A18C0
label_3b13b8:
    if (ctx->pc == 0x3B13B8u) {
        ctx->pc = 0x3B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13B4u;
        // 0x3b13b8: 0x7fa20860  sq          $v0, 0x860($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13BCu;
        goto label_3b13bc;
    }
    ctx->pc = 0x3B13B4u;
    SET_GPR_U32(ctx, 31, 0x3B13BCu);
    ctx->pc = 0x3B13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B13B4u;
    // 0x3b13b8: 0x7fa20860  sq          $v0, 0x860($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3B13B4u, 0x3B13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B13BCu;
label_3b13bc:
    // 0x3b13bc: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x3b13bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_3b13c0:
    // 0x3b13c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b13c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b13c4:
    // 0x3b13c4: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3b13c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3b13c8:
    // 0x3b13c8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b13c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b13cc:
    // 0x3b13cc: 0x7fa30880  sq          $v1, 0x880($sp)
    ctx->pc = 0x3b13ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 3));
label_3b13d0:
    // 0x3b13d0: 0x27a60880  addiu       $a2, $sp, 0x880
    ctx->pc = 0x3b13d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3b13d4:
    // 0x3b13d4: 0x7fa20890  sq          $v0, 0x890($sp)
    ctx->pc = 0x3b13d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 2));
label_3b13d8:
    // 0x3b13d8: 0xc0e9fa6  jal         func_3A7E98
label_3b13dc:
    if (ctx->pc == 0x3B13DCu) {
        ctx->pc = 0x3B13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13D8u;
        // 0x3b13dc: 0x27a70890  addiu       $a3, $sp, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13E0u;
        goto label_3b13e0;
    }
    ctx->pc = 0x3B13D8u;
    SET_GPR_U32(ctx, 31, 0x3B13E0u);
    ctx->pc = 0x3B13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B13D8u;
    // 0x3b13dc: 0x27a70890  addiu       $a3, $sp, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3B13D8u, 0x3B13E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B13E0u;
label_3b13e0:
    // 0x3b13e0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3b13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_3b13e4:
    // 0x3b13e4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b13e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b13e8:
    // 0x3b13e8: 0xc0f15bc  jal         func_3C56F0
label_3b13ec:
    if (ctx->pc == 0x3B13ECu) {
        ctx->pc = 0x3B13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13E8u;
        // 0x3b13ec: 0x24642000  addiu       $a0, $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13F0u;
        goto label_3b13f0;
    }
    ctx->pc = 0x3B13E8u;
    SET_GPR_U32(ctx, 31, 0x3B13F0u);
    ctx->pc = 0x3B13ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B13E8u;
    // 0x3b13ec: 0x24642000  addiu       $a0, $v1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3B13E8u, 0x3B13F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B13F0u;
label_3b13f0:
    // 0x3b13f0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x3b13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3b13f4:
    // 0x3b13f4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x3b13f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b13f8:
    // 0x3b13f8: 0x276182b  sltu        $v1, $s3, $s6
    ctx->pc = 0x3b13f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3b13fc:
    // 0x3b13fc: 0x5460ff84  bnel        $v1, $zero, . + 4 + (-0x7C << 2)
label_3b1400:
    if (ctx->pc == 0x3B1400u) {
        ctx->pc = 0x3B1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13FCu;
        // 0x3b1400: 0x7a030000  lq          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1404u;
        goto label_3b1404;
    }
    ctx->pc = 0x3B13FCu;
    {
        const bool branch_taken_0x3b13fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b13fc) {
            ctx->pc = 0x3B1400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B13FCu;
            // 0x3b1400: 0x7a030000  lq          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1210;
        }
    }
    ctx->pc = 0x3B1404u;
label_3b1404:
    // 0x3b1404: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b1408:
    if (ctx->pc == 0x3B1408u) {
        ctx->pc = 0x3B1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1404u;
        // 0x3b1408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B140Cu;
        goto label_3b140c;
    }
    ctx->pc = 0x3B1404u;
    {
        const bool branch_taken_0x3b1404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1404u;
        // 0x3b1408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1404) {
            ctx->pc = 0x3B141Cu;
            goto label_3b141c;
        }
    }
    ctx->pc = 0x3B140Cu;
label_3b140c:
    // 0x3b140c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3b140cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b1410:
    // 0x3b1410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1414:
    // 0x3b1414: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b1414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b1418:
    // 0x3b1418: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3b1418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_3b141c:
    // 0x3b141c: 0x7bb00960  lq          $s0, 0x960($sp)
    ctx->pc = 0x3b141cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
label_3b1420:
    // 0x3b1420: 0x7bb10950  lq          $s1, 0x950($sp)
    ctx->pc = 0x3b1420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_3b1424:
    // 0x3b1424: 0x7bb20940  lq          $s2, 0x940($sp)
    ctx->pc = 0x3b1424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3b1428:
    // 0x3b1428: 0x7bb30930  lq          $s3, 0x930($sp)
    ctx->pc = 0x3b1428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3b142c:
    // 0x3b142c: 0x7bb40920  lq          $s4, 0x920($sp)
    ctx->pc = 0x3b142cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3b1430:
    // 0x3b1430: 0x7bb50910  lq          $s5, 0x910($sp)
    ctx->pc = 0x3b1430u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3b1434:
    // 0x3b1434: 0x7bb60900  lq          $s6, 0x900($sp)
    ctx->pc = 0x3b1434u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3b1438:
    // 0x3b1438: 0x7bb708f0  lq          $s7, 0x8F0($sp)
    ctx->pc = 0x3b1438u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3b143c:
    // 0x3b143c: 0x7bbe08e0  lq          $fp, 0x8E0($sp)
    ctx->pc = 0x3b143cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3b1440:
    // 0x3b1440: 0xdfbf08d0  ld          $ra, 0x8D0($sp)
    ctx->pc = 0x3b1440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2256)));
label_3b1444:
    // 0x3b1444: 0xc7b80990  lwc1        $f24, 0x990($sp)
    ctx->pc = 0x3b1444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3b1448:
    // 0x3b1448: 0xc7b70988  lwc1        $f23, 0x988($sp)
    ctx->pc = 0x3b1448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b144c:
    // 0x3b144c: 0xc7b60980  lwc1        $f22, 0x980($sp)
    ctx->pc = 0x3b144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b1450:
    // 0x3b1450: 0xc7b50978  lwc1        $f21, 0x978($sp)
    ctx->pc = 0x3b1450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b1454:
    // 0x3b1454: 0xc7b40970  lwc1        $f20, 0x970($sp)
    ctx->pc = 0x3b1454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b1458:
    // 0x3b1458: 0x3e00008  jr          $ra
label_3b145c:
    if (ctx->pc == 0x3B145Cu) {
        ctx->pc = 0x3B145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1458u;
        // 0x3b145c: 0x27bd09a0  addiu       $sp, $sp, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1460u;
        goto label_fallthrough_0x3b1458;
    }
    ctx->pc = 0x3B1458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1458u;
        // 0x3b145c: 0x27bd09a0  addiu       $sp, $sp, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1458:
    ctx->pc = 0x3B1460u;
}
