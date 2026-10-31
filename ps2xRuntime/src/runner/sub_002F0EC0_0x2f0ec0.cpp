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

// Function: sub_002F0EC0
// Address: 0x2f0ec0 - 0x2f13a8
void sub_002F0EC0_0x2f0ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0EC0_0x2f0ec0");
#endif

    switch (ctx->pc) {
        case 0x2f0ec0u: goto label_2f0ec0;
        case 0x2f0ec4u: goto label_2f0ec4;
        case 0x2f0ec8u: goto label_2f0ec8;
        case 0x2f0eccu: goto label_2f0ecc;
        case 0x2f0ed0u: goto label_2f0ed0;
        case 0x2f0ed4u: goto label_2f0ed4;
        case 0x2f0ed8u: goto label_2f0ed8;
        case 0x2f0edcu: goto label_2f0edc;
        case 0x2f0ee0u: goto label_2f0ee0;
        case 0x2f0ee4u: goto label_2f0ee4;
        case 0x2f0ee8u: goto label_2f0ee8;
        case 0x2f0eecu: goto label_2f0eec;
        case 0x2f0ef0u: goto label_2f0ef0;
        case 0x2f0ef4u: goto label_2f0ef4;
        case 0x2f0ef8u: goto label_2f0ef8;
        case 0x2f0efcu: goto label_2f0efc;
        case 0x2f0f00u: goto label_2f0f00;
        case 0x2f0f04u: goto label_2f0f04;
        case 0x2f0f08u: goto label_2f0f08;
        case 0x2f0f0cu: goto label_2f0f0c;
        case 0x2f0f10u: goto label_2f0f10;
        case 0x2f0f14u: goto label_2f0f14;
        case 0x2f0f18u: goto label_2f0f18;
        case 0x2f0f1cu: goto label_2f0f1c;
        case 0x2f0f20u: goto label_2f0f20;
        case 0x2f0f24u: goto label_2f0f24;
        case 0x2f0f28u: goto label_2f0f28;
        case 0x2f0f2cu: goto label_2f0f2c;
        case 0x2f0f30u: goto label_2f0f30;
        case 0x2f0f34u: goto label_2f0f34;
        case 0x2f0f38u: goto label_2f0f38;
        case 0x2f0f3cu: goto label_2f0f3c;
        case 0x2f0f40u: goto label_2f0f40;
        case 0x2f0f44u: goto label_2f0f44;
        case 0x2f0f48u: goto label_2f0f48;
        case 0x2f0f4cu: goto label_2f0f4c;
        case 0x2f0f50u: goto label_2f0f50;
        case 0x2f0f54u: goto label_2f0f54;
        case 0x2f0f58u: goto label_2f0f58;
        case 0x2f0f5cu: goto label_2f0f5c;
        case 0x2f0f60u: goto label_2f0f60;
        case 0x2f0f64u: goto label_2f0f64;
        case 0x2f0f68u: goto label_2f0f68;
        case 0x2f0f6cu: goto label_2f0f6c;
        case 0x2f0f70u: goto label_2f0f70;
        case 0x2f0f74u: goto label_2f0f74;
        case 0x2f0f78u: goto label_2f0f78;
        case 0x2f0f7cu: goto label_2f0f7c;
        case 0x2f0f80u: goto label_2f0f80;
        case 0x2f0f84u: goto label_2f0f84;
        case 0x2f0f88u: goto label_2f0f88;
        case 0x2f0f8cu: goto label_2f0f8c;
        case 0x2f0f90u: goto label_2f0f90;
        case 0x2f0f94u: goto label_2f0f94;
        case 0x2f0f98u: goto label_2f0f98;
        case 0x2f0f9cu: goto label_2f0f9c;
        case 0x2f0fa0u: goto label_2f0fa0;
        case 0x2f0fa4u: goto label_2f0fa4;
        case 0x2f0fa8u: goto label_2f0fa8;
        case 0x2f0facu: goto label_2f0fac;
        case 0x2f0fb0u: goto label_2f0fb0;
        case 0x2f0fb4u: goto label_2f0fb4;
        case 0x2f0fb8u: goto label_2f0fb8;
        case 0x2f0fbcu: goto label_2f0fbc;
        case 0x2f0fc0u: goto label_2f0fc0;
        case 0x2f0fc4u: goto label_2f0fc4;
        case 0x2f0fc8u: goto label_2f0fc8;
        case 0x2f0fccu: goto label_2f0fcc;
        case 0x2f0fd0u: goto label_2f0fd0;
        case 0x2f0fd4u: goto label_2f0fd4;
        case 0x2f0fd8u: goto label_2f0fd8;
        case 0x2f0fdcu: goto label_2f0fdc;
        case 0x2f0fe0u: goto label_2f0fe0;
        case 0x2f0fe4u: goto label_2f0fe4;
        case 0x2f0fe8u: goto label_2f0fe8;
        case 0x2f0fecu: goto label_2f0fec;
        case 0x2f0ff0u: goto label_2f0ff0;
        case 0x2f0ff4u: goto label_2f0ff4;
        case 0x2f0ff8u: goto label_2f0ff8;
        case 0x2f0ffcu: goto label_2f0ffc;
        case 0x2f1000u: goto label_2f1000;
        case 0x2f1004u: goto label_2f1004;
        case 0x2f1008u: goto label_2f1008;
        case 0x2f100cu: goto label_2f100c;
        case 0x2f1010u: goto label_2f1010;
        case 0x2f1014u: goto label_2f1014;
        case 0x2f1018u: goto label_2f1018;
        case 0x2f101cu: goto label_2f101c;
        case 0x2f1020u: goto label_2f1020;
        case 0x2f1024u: goto label_2f1024;
        case 0x2f1028u: goto label_2f1028;
        case 0x2f102cu: goto label_2f102c;
        case 0x2f1030u: goto label_2f1030;
        case 0x2f1034u: goto label_2f1034;
        case 0x2f1038u: goto label_2f1038;
        case 0x2f103cu: goto label_2f103c;
        case 0x2f1040u: goto label_2f1040;
        case 0x2f1044u: goto label_2f1044;
        case 0x2f1048u: goto label_2f1048;
        case 0x2f104cu: goto label_2f104c;
        case 0x2f1050u: goto label_2f1050;
        case 0x2f1054u: goto label_2f1054;
        case 0x2f1058u: goto label_2f1058;
        case 0x2f105cu: goto label_2f105c;
        case 0x2f1060u: goto label_2f1060;
        case 0x2f1064u: goto label_2f1064;
        case 0x2f1068u: goto label_2f1068;
        case 0x2f106cu: goto label_2f106c;
        case 0x2f1070u: goto label_2f1070;
        case 0x2f1074u: goto label_2f1074;
        case 0x2f1078u: goto label_2f1078;
        case 0x2f107cu: goto label_2f107c;
        case 0x2f1080u: goto label_2f1080;
        case 0x2f1084u: goto label_2f1084;
        case 0x2f1088u: goto label_2f1088;
        case 0x2f108cu: goto label_2f108c;
        case 0x2f1090u: goto label_2f1090;
        case 0x2f1094u: goto label_2f1094;
        case 0x2f1098u: goto label_2f1098;
        case 0x2f109cu: goto label_2f109c;
        case 0x2f10a0u: goto label_2f10a0;
        case 0x2f10a4u: goto label_2f10a4;
        case 0x2f10a8u: goto label_2f10a8;
        case 0x2f10acu: goto label_2f10ac;
        case 0x2f10b0u: goto label_2f10b0;
        case 0x2f10b4u: goto label_2f10b4;
        case 0x2f10b8u: goto label_2f10b8;
        case 0x2f10bcu: goto label_2f10bc;
        case 0x2f10c0u: goto label_2f10c0;
        case 0x2f10c4u: goto label_2f10c4;
        case 0x2f10c8u: goto label_2f10c8;
        case 0x2f10ccu: goto label_2f10cc;
        case 0x2f10d0u: goto label_2f10d0;
        case 0x2f10d4u: goto label_2f10d4;
        case 0x2f10d8u: goto label_2f10d8;
        case 0x2f10dcu: goto label_2f10dc;
        case 0x2f10e0u: goto label_2f10e0;
        case 0x2f10e4u: goto label_2f10e4;
        case 0x2f10e8u: goto label_2f10e8;
        case 0x2f10ecu: goto label_2f10ec;
        case 0x2f10f0u: goto label_2f10f0;
        case 0x2f10f4u: goto label_2f10f4;
        case 0x2f10f8u: goto label_2f10f8;
        case 0x2f10fcu: goto label_2f10fc;
        case 0x2f1100u: goto label_2f1100;
        case 0x2f1104u: goto label_2f1104;
        case 0x2f1108u: goto label_2f1108;
        case 0x2f110cu: goto label_2f110c;
        case 0x2f1110u: goto label_2f1110;
        case 0x2f1114u: goto label_2f1114;
        case 0x2f1118u: goto label_2f1118;
        case 0x2f111cu: goto label_2f111c;
        case 0x2f1120u: goto label_2f1120;
        case 0x2f1124u: goto label_2f1124;
        case 0x2f1128u: goto label_2f1128;
        case 0x2f112cu: goto label_2f112c;
        case 0x2f1130u: goto label_2f1130;
        case 0x2f1134u: goto label_2f1134;
        case 0x2f1138u: goto label_2f1138;
        case 0x2f113cu: goto label_2f113c;
        case 0x2f1140u: goto label_2f1140;
        case 0x2f1144u: goto label_2f1144;
        case 0x2f1148u: goto label_2f1148;
        case 0x2f114cu: goto label_2f114c;
        case 0x2f1150u: goto label_2f1150;
        case 0x2f1154u: goto label_2f1154;
        case 0x2f1158u: goto label_2f1158;
        case 0x2f115cu: goto label_2f115c;
        case 0x2f1160u: goto label_2f1160;
        case 0x2f1164u: goto label_2f1164;
        case 0x2f1168u: goto label_2f1168;
        case 0x2f116cu: goto label_2f116c;
        case 0x2f1170u: goto label_2f1170;
        case 0x2f1174u: goto label_2f1174;
        case 0x2f1178u: goto label_2f1178;
        case 0x2f117cu: goto label_2f117c;
        case 0x2f1180u: goto label_2f1180;
        case 0x2f1184u: goto label_2f1184;
        case 0x2f1188u: goto label_2f1188;
        case 0x2f118cu: goto label_2f118c;
        case 0x2f1190u: goto label_2f1190;
        case 0x2f1194u: goto label_2f1194;
        case 0x2f1198u: goto label_2f1198;
        case 0x2f119cu: goto label_2f119c;
        case 0x2f11a0u: goto label_2f11a0;
        case 0x2f11a4u: goto label_2f11a4;
        case 0x2f11a8u: goto label_2f11a8;
        case 0x2f11acu: goto label_2f11ac;
        case 0x2f11b0u: goto label_2f11b0;
        case 0x2f11b4u: goto label_2f11b4;
        case 0x2f11b8u: goto label_2f11b8;
        case 0x2f11bcu: goto label_2f11bc;
        case 0x2f11c0u: goto label_2f11c0;
        case 0x2f11c4u: goto label_2f11c4;
        case 0x2f11c8u: goto label_2f11c8;
        case 0x2f11ccu: goto label_2f11cc;
        case 0x2f11d0u: goto label_2f11d0;
        case 0x2f11d4u: goto label_2f11d4;
        case 0x2f11d8u: goto label_2f11d8;
        case 0x2f11dcu: goto label_2f11dc;
        case 0x2f11e0u: goto label_2f11e0;
        case 0x2f11e4u: goto label_2f11e4;
        case 0x2f11e8u: goto label_2f11e8;
        case 0x2f11ecu: goto label_2f11ec;
        case 0x2f11f0u: goto label_2f11f0;
        case 0x2f11f4u: goto label_2f11f4;
        case 0x2f11f8u: goto label_2f11f8;
        case 0x2f11fcu: goto label_2f11fc;
        case 0x2f1200u: goto label_2f1200;
        case 0x2f1204u: goto label_2f1204;
        case 0x2f1208u: goto label_2f1208;
        case 0x2f120cu: goto label_2f120c;
        case 0x2f1210u: goto label_2f1210;
        case 0x2f1214u: goto label_2f1214;
        case 0x2f1218u: goto label_2f1218;
        case 0x2f121cu: goto label_2f121c;
        case 0x2f1220u: goto label_2f1220;
        case 0x2f1224u: goto label_2f1224;
        case 0x2f1228u: goto label_2f1228;
        case 0x2f122cu: goto label_2f122c;
        case 0x2f1230u: goto label_2f1230;
        case 0x2f1234u: goto label_2f1234;
        case 0x2f1238u: goto label_2f1238;
        case 0x2f123cu: goto label_2f123c;
        case 0x2f1240u: goto label_2f1240;
        case 0x2f1244u: goto label_2f1244;
        case 0x2f1248u: goto label_2f1248;
        case 0x2f124cu: goto label_2f124c;
        case 0x2f1250u: goto label_2f1250;
        case 0x2f1254u: goto label_2f1254;
        case 0x2f1258u: goto label_2f1258;
        case 0x2f125cu: goto label_2f125c;
        case 0x2f1260u: goto label_2f1260;
        case 0x2f1264u: goto label_2f1264;
        case 0x2f1268u: goto label_2f1268;
        case 0x2f126cu: goto label_2f126c;
        case 0x2f1270u: goto label_2f1270;
        case 0x2f1274u: goto label_2f1274;
        case 0x2f1278u: goto label_2f1278;
        case 0x2f127cu: goto label_2f127c;
        case 0x2f1280u: goto label_2f1280;
        case 0x2f1284u: goto label_2f1284;
        case 0x2f1288u: goto label_2f1288;
        case 0x2f128cu: goto label_2f128c;
        case 0x2f1290u: goto label_2f1290;
        case 0x2f1294u: goto label_2f1294;
        case 0x2f1298u: goto label_2f1298;
        case 0x2f129cu: goto label_2f129c;
        case 0x2f12a0u: goto label_2f12a0;
        case 0x2f12a4u: goto label_2f12a4;
        case 0x2f12a8u: goto label_2f12a8;
        case 0x2f12acu: goto label_2f12ac;
        case 0x2f12b0u: goto label_2f12b0;
        case 0x2f12b4u: goto label_2f12b4;
        case 0x2f12b8u: goto label_2f12b8;
        case 0x2f12bcu: goto label_2f12bc;
        case 0x2f12c0u: goto label_2f12c0;
        case 0x2f12c4u: goto label_2f12c4;
        case 0x2f12c8u: goto label_2f12c8;
        case 0x2f12ccu: goto label_2f12cc;
        case 0x2f12d0u: goto label_2f12d0;
        case 0x2f12d4u: goto label_2f12d4;
        case 0x2f12d8u: goto label_2f12d8;
        case 0x2f12dcu: goto label_2f12dc;
        case 0x2f12e0u: goto label_2f12e0;
        case 0x2f12e4u: goto label_2f12e4;
        case 0x2f12e8u: goto label_2f12e8;
        case 0x2f12ecu: goto label_2f12ec;
        case 0x2f12f0u: goto label_2f12f0;
        case 0x2f12f4u: goto label_2f12f4;
        case 0x2f12f8u: goto label_2f12f8;
        case 0x2f12fcu: goto label_2f12fc;
        case 0x2f1300u: goto label_2f1300;
        case 0x2f1304u: goto label_2f1304;
        case 0x2f1308u: goto label_2f1308;
        case 0x2f130cu: goto label_2f130c;
        case 0x2f1310u: goto label_2f1310;
        case 0x2f1314u: goto label_2f1314;
        case 0x2f1318u: goto label_2f1318;
        case 0x2f131cu: goto label_2f131c;
        case 0x2f1320u: goto label_2f1320;
        case 0x2f1324u: goto label_2f1324;
        case 0x2f1328u: goto label_2f1328;
        case 0x2f132cu: goto label_2f132c;
        case 0x2f1330u: goto label_2f1330;
        case 0x2f1334u: goto label_2f1334;
        case 0x2f1338u: goto label_2f1338;
        case 0x2f133cu: goto label_2f133c;
        case 0x2f1340u: goto label_2f1340;
        case 0x2f1344u: goto label_2f1344;
        case 0x2f1348u: goto label_2f1348;
        case 0x2f134cu: goto label_2f134c;
        case 0x2f1350u: goto label_2f1350;
        case 0x2f1354u: goto label_2f1354;
        case 0x2f1358u: goto label_2f1358;
        case 0x2f135cu: goto label_2f135c;
        case 0x2f1360u: goto label_2f1360;
        case 0x2f1364u: goto label_2f1364;
        case 0x2f1368u: goto label_2f1368;
        case 0x2f136cu: goto label_2f136c;
        case 0x2f1370u: goto label_2f1370;
        case 0x2f1374u: goto label_2f1374;
        case 0x2f1378u: goto label_2f1378;
        case 0x2f137cu: goto label_2f137c;
        case 0x2f1380u: goto label_2f1380;
        case 0x2f1384u: goto label_2f1384;
        case 0x2f1388u: goto label_2f1388;
        case 0x2f138cu: goto label_2f138c;
        case 0x2f1390u: goto label_2f1390;
        case 0x2f1394u: goto label_2f1394;
        case 0x2f1398u: goto label_2f1398;
        case 0x2f139cu: goto label_2f139c;
        case 0x2f13a0u: goto label_2f13a0;
        case 0x2f13a4u: goto label_2f13a4;
        default: break;
    }

    ctx->pc = 0x2f0ec0u;

label_2f0ec0:
    // 0x2f0ec0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f0ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f0ec4:
    // 0x2f0ec4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f0ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2f0ec8:
    // 0x2f0ec8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2f0ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2f0ecc:
    // 0x2f0ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f0eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ed0:
    // 0x2f0ed0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f0ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f0ed4:
    // 0x2f0ed4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f0ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ed8:
    // 0x2f0ed8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2f0ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2f0edc:
    // 0x2f0edc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2f0edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2f0ee0:
    // 0x2f0ee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f0ee4:
    // 0x2f0ee4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f0ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2f0ee8:
    // 0x2f0ee8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2f0ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f0eec:
    // 0x2f0eec: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2f0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2f0ef0:
    // 0x2f0ef0: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2f0ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f0ef4:
    // 0x2f0ef4: 0xc0e409a  jal         func_390268
label_2f0ef8:
    if (ctx->pc == 0x2F0EF8u) {
        ctx->pc = 0x2F0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EF4u;
        // 0x2f0ef8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0EFCu;
        goto label_2f0efc;
    }
    ctx->pc = 0x2F0EF4u;
    SET_GPR_U32(ctx, 31, 0x2F0EFCu);
    ctx->pc = 0x2F0EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0EF4u;
    // 0x2f0ef8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F0EF4u, 0x2F0EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0EFCu;
label_2f0efc:
    // 0x2f0efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f00:
    // 0x2f0f00: 0xc0a34d6  jal         func_28D358
label_2f0f04:
    if (ctx->pc == 0x2F0F04u) {
        ctx->pc = 0x2F0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F00u;
        // 0x2f0f04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F08u;
        goto label_2f0f08;
    }
    ctx->pc = 0x2F0F00u;
    SET_GPR_U32(ctx, 31, 0x2F0F08u);
    ctx->pc = 0x2F0F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F00u;
    // 0x2f0f04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F0F00u, 0x2F0F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F08u;
label_2f0f08:
    // 0x2f0f08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f0f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f0c:
    // 0x2f0f0c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2f0f10:
    if (ctx->pc == 0x2F0F10u) {
        ctx->pc = 0x2F0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F0Cu;
        // 0x2f0f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F14u;
        goto label_2f0f14;
    }
    ctx->pc = 0x2F0F0Cu;
    {
        const bool branch_taken_0x2f0f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F0Cu;
        // 0x2f0f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f0c) {
            ctx->pc = 0x2F0F1Cu;
            goto label_2f0f1c;
        }
    }
    ctx->pc = 0x2F0F14u;
label_2f0f14:
    // 0x2f0f14: 0xc0bbf30  jal         func_2EFCC0
label_2f0f18:
    if (ctx->pc == 0x2F0F18u) {
        ctx->pc = 0x2F0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F14u;
        // 0x2f0f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F1Cu;
        goto label_2f0f1c;
    }
    ctx->pc = 0x2F0F14u;
    SET_GPR_U32(ctx, 31, 0x2F0F1Cu);
    ctx->pc = 0x2F0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F14u;
    // 0x2f0f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCC0u, 0x2F0F14u, 0x2F0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F1Cu;
label_2f0f1c:
    // 0x2f0f1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f0f20:
    // 0x2f0f20: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2f0f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2f0f24:
    // 0x2f0f24: 0x1c400113  bgtz        $v0, . + 4 + (0x113 << 2)
label_2f0f28:
    if (ctx->pc == 0x2F0F28u) {
        ctx->pc = 0x2F0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F24u;
        // 0x2f0f28: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F2Cu;
        goto label_2f0f2c;
    }
    ctx->pc = 0x2F0F24u;
    {
        const bool branch_taken_0x2f0f24 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F24u;
        // 0x2f0f28: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f24) {
            ctx->pc = 0x2F1374u;
            goto label_2f1374;
        }
    }
    ctx->pc = 0x2F0F2Cu;
label_2f0f2c:
    // 0x2f0f2c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f0f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f0f30:
    // 0x2f0f30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f34:
    // 0x2f0f34: 0xc089998  jal         func_226660
label_2f0f38:
    if (ctx->pc == 0x2F0F38u) {
        ctx->pc = 0x2F0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F34u;
        // 0x2f0f38: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F3Cu;
        goto label_2f0f3c;
    }
    ctx->pc = 0x2F0F34u;
    SET_GPR_U32(ctx, 31, 0x2F0F3Cu);
    ctx->pc = 0x2F0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F34u;
    // 0x2f0f38: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F0F34u, 0x2F0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F3Cu;
label_2f0f3c:
    // 0x2f0f3c: 0x1052010e  beq         $v0, $s2, . + 4 + (0x10E << 2)
label_2f0f40:
    if (ctx->pc == 0x2F0F40u) {
        ctx->pc = 0x2F0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F3Cu;
        // 0x2f0f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F44u;
        goto label_2f0f44;
    }
    ctx->pc = 0x2F0F3Cu;
    {
        const bool branch_taken_0x2f0f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F3Cu;
        // 0x2f0f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f3c) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F0F44u;
label_2f0f44:
    // 0x2f0f44: 0x92220052  lbu         $v0, 0x52($s1)
    ctx->pc = 0x2f0f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_2f0f48:
    // 0x2f0f48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2f0f4c:
    if (ctx->pc == 0x2F0F4Cu) {
        ctx->pc = 0x2F0F50u;
        goto label_2f0f50;
    }
    ctx->pc = 0x2F0F48u;
    {
        const bool branch_taken_0x2f0f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0f48) {
            ctx->pc = 0x2F0F88u;
            goto label_2f0f88;
        }
    }
    ctx->pc = 0x2F0F50u;
label_2f0f50:
    // 0x2f0f50: 0xc0bbed2  jal         func_2EFB48
label_2f0f54:
    if (ctx->pc == 0x2F0F54u) {
        ctx->pc = 0x2F0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F50u;
        // 0x2f0f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F58u;
        goto label_2f0f58;
    }
    ctx->pc = 0x2F0F50u;
    SET_GPR_U32(ctx, 31, 0x2F0F58u);
    ctx->pc = 0x2F0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F50u;
    // 0x2f0f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFB48u, 0x2F0F50u, 0x2F0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F58u;
label_2f0f58:
    // 0x2f0f58: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
label_2f0f5c:
    if (ctx->pc == 0x2F0F5Cu) {
        ctx->pc = 0x2F0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F58u;
        // 0x2f0f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F60u;
        goto label_2f0f60;
    }
    ctx->pc = 0x2F0F58u;
    {
        const bool branch_taken_0x2f0f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F58u;
        // 0x2f0f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f58) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F0F60u;
label_2f0f60:
    // 0x2f0f60: 0xa2320052  sb          $s2, 0x52($s1)
    ctx->pc = 0x2f0f60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 82), (uint8_t)GPR_U32(ctx, 18));
label_2f0f64:
    // 0x2f0f64: 0xc0a367c  jal         func_28D9F0
label_2f0f68:
    if (ctx->pc == 0x2F0F68u) {
        ctx->pc = 0x2F0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F64u;
        // 0x2f0f68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F6Cu;
        goto label_2f0f6c;
    }
    ctx->pc = 0x2F0F64u;
    SET_GPR_U32(ctx, 31, 0x2F0F6Cu);
    ctx->pc = 0x2F0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F64u;
    // 0x2f0f68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F0F64u, 0x2F0F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F6Cu;
label_2f0f6c:
    // 0x2f0f6c: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
label_2f0f70:
    if (ctx->pc == 0x2F0F70u) {
        ctx->pc = 0x2F0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F6Cu;
        // 0x2f0f70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F74u;
        goto label_2f0f74;
    }
    ctx->pc = 0x2F0F6Cu;
    {
        const bool branch_taken_0x2f0f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F6Cu;
        // 0x2f0f70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f6c) {
            ctx->pc = 0x2F1374u;
            goto label_2f1374;
        }
    }
    ctx->pc = 0x2F0F74u;
label_2f0f74:
    // 0x2f0f74: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f0f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f0f78:
    // 0x2f0f78: 0xc0bebdc  jal         func_2FAF70
label_2f0f7c:
    if (ctx->pc == 0x2F0F7Cu) {
        ctx->pc = 0x2F0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F78u;
        // 0x2f0f7c: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F80u;
        goto label_2f0f80;
    }
    ctx->pc = 0x2F0F78u;
    SET_GPR_U32(ctx, 31, 0x2F0F80u);
    ctx->pc = 0x2F0F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F78u;
    // 0x2f0f7c: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F0F78u, 0x2F0F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F80u;
label_2f0f80:
    // 0x2f0f80: 0x100000fd  b           . + 4 + (0xFD << 2)
label_2f0f84:
    if (ctx->pc == 0x2F0F84u) {
        ctx->pc = 0x2F0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F80u;
        // 0x2f0f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F88u;
        goto label_2f0f88;
    }
    ctx->pc = 0x2F0F80u;
    {
        const bool branch_taken_0x2f0f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F80u;
        // 0x2f0f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f80) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F0F88u;
label_2f0f88:
    // 0x2f0f88: 0xc0bbefa  jal         func_2EFBE8
label_2f0f8c:
    if (ctx->pc == 0x2F0F8Cu) {
        ctx->pc = 0x2F0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F88u;
        // 0x2f0f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F90u;
        goto label_2f0f90;
    }
    ctx->pc = 0x2F0F88u;
    SET_GPR_U32(ctx, 31, 0x2F0F90u);
    ctx->pc = 0x2F0F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F88u;
    // 0x2f0f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFBE8u, 0x2F0F88u, 0x2F0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F90u;
label_2f0f90:
    // 0x2f0f90: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
label_2f0f94:
    if (ctx->pc == 0x2F0F94u) {
        ctx->pc = 0x2F0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F90u;
        // 0x2f0f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F98u;
        goto label_2f0f98;
    }
    ctx->pc = 0x2F0F90u;
    {
        const bool branch_taken_0x2f0f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F90u;
        // 0x2f0f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f90) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F0F98u;
label_2f0f98:
    // 0x2f0f98: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2f0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f0f9c:
    // 0x2f0f9c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_2f0fa0:
    if (ctx->pc == 0x2F0FA0u) {
        ctx->pc = 0x2F0FA4u;
        goto label_2f0fa4;
    }
    ctx->pc = 0x2F0F9Cu;
    {
        const bool branch_taken_0x2f0f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0f9c) {
            ctx->pc = 0x2F1048u;
            goto label_2f1048;
        }
    }
    ctx->pc = 0x2F0FA4u;
label_2f0fa4:
    // 0x2f0fa4: 0xc0a367c  jal         func_28D9F0
label_2f0fa8:
    if (ctx->pc == 0x2F0FA8u) {
        ctx->pc = 0x2F0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FA4u;
        // 0x2f0fa8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0FACu;
        goto label_2f0fac;
    }
    ctx->pc = 0x2F0FA4u;
    SET_GPR_U32(ctx, 31, 0x2F0FACu);
    ctx->pc = 0x2F0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FA4u;
    // 0x2f0fa8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F0FA4u, 0x2F0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0FACu;
label_2f0fac:
    // 0x2f0fac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f0fb0:
    if (ctx->pc == 0x2F0FB0u) {
        ctx->pc = 0x2F0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FACu;
        // 0x2f0fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0FB4u;
        goto label_2f0fb4;
    }
    ctx->pc = 0x2F0FACu;
    {
        const bool branch_taken_0x2f0fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FACu;
        // 0x2f0fb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fac) {
            ctx->pc = 0x2F0FD4u;
            goto label_2f0fd4;
        }
    }
    ctx->pc = 0x2F0FB4u;
label_2f0fb4:
    // 0x2f0fb4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f0fb8:
    // 0x2f0fb8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2f0fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2f0fbc:
    // 0x2f0fbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f0fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f0fc0:
    // 0x2f0fc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f0fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0fc4:
    // 0x2f0fc4: 0x2406029f  addiu       $a2, $zero, 0x29F
    ctx->pc = 0x2f0fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_2f0fc8:
    // 0x2f0fc8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2f0fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f0fcc:
    // 0x2f0fcc: 0xc0be91a  jal         func_2FA468
label_2f0fd0:
    if (ctx->pc == 0x2F0FD0u) {
        ctx->pc = 0x2F0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FCCu;
        // 0x2f0fd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0FD4u;
        goto label_2f0fd4;
    }
    ctx->pc = 0x2F0FCCu;
    SET_GPR_U32(ctx, 31, 0x2F0FD4u);
    ctx->pc = 0x2F0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FCCu;
    // 0x2f0fd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA468u, 0x2F0FCCu, 0x2F0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0FD4u;
label_2f0fd4:
    // 0x2f0fd4: 0xc0a367c  jal         func_28D9F0
label_2f0fd8:
    if (ctx->pc == 0x2F0FD8u) {
        ctx->pc = 0x2F0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FD4u;
        // 0x2f0fd8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0FDCu;
        goto label_2f0fdc;
    }
    ctx->pc = 0x2F0FD4u;
    SET_GPR_U32(ctx, 31, 0x2F0FDCu);
    ctx->pc = 0x2F0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FD4u;
    // 0x2f0fd8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F0FD4u, 0x2F0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0FDCu;
label_2f0fdc:
    // 0x2f0fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0fe0:
    // 0x2f0fe0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2f0fe4:
    if (ctx->pc == 0x2F0FE4u) {
        ctx->pc = 0x2F0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FE0u;
        // 0x2f0fe4: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0FE8u;
        goto label_2f0fe8;
    }
    ctx->pc = 0x2F0FE0u;
    {
        const bool branch_taken_0x2f0fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FE0u;
        // 0x2f0fe4: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fe0) {
            ctx->pc = 0x2F0FFCu;
            goto label_2f0ffc;
        }
    }
    ctx->pc = 0x2F0FE8u;
label_2f0fe8:
    // 0x2f0fe8: 0x9222004f  lbu         $v0, 0x4F($s1)
    ctx->pc = 0x2f0fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 79)));
label_2f0fec:
    // 0x2f0fec: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x2f0fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2f0ff0:
    // 0x2f0ff0: 0x3012  mflo        $a2
    ctx->pc = 0x2f0ff0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_2f0ff4:
    // 0x2f0ff4: 0xc0bebdc  jal         func_2FAF70
label_2f0ff8:
    if (ctx->pc == 0x2F0FF8u) {
        ctx->pc = 0x2F0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FF4u;
        // 0x2f0ff8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0FFCu;
        goto label_2f0ffc;
    }
    ctx->pc = 0x2F0FF4u;
    SET_GPR_U32(ctx, 31, 0x2F0FFCu);
    ctx->pc = 0x2F0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FF4u;
    // 0x2f0ff8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F0FF4u, 0x2F0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0FFCu;
label_2f0ffc:
    // 0x2f0ffc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2f1000:
    if (ctx->pc == 0x2F1000u) {
        ctx->pc = 0x2F1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FFCu;
        // 0x2f1000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1004u;
        goto label_2f1004;
    }
    ctx->pc = 0x2F0FFCu;
    {
        const bool branch_taken_0x2f0ffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FFCu;
        // 0x2f1000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ffc) {
            ctx->pc = 0x2F1024u;
            goto label_2f1024;
        }
    }
    ctx->pc = 0x2F1004u;
label_2f1004:
    // 0x2f1004: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2f1004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2f1008:
    // 0x2f1008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f100c:
    // 0x2f100c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2f100cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2f1010:
    // 0x2f1010: 0xc0bbf72  jal         func_2EFDC8
label_2f1014:
    if (ctx->pc == 0x2F1014u) {
        ctx->pc = 0x2F1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1010u;
        // 0x2f1014: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1018u;
        goto label_2f1018;
    }
    ctx->pc = 0x2F1010u;
    SET_GPR_U32(ctx, 31, 0x2F1018u);
    ctx->pc = 0x2F1014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1010u;
    // 0x2f1014: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFDC8u, 0x2F1010u, 0x2F1018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1018u;
label_2f1018:
    // 0x2f1018: 0xc087502  jal         func_21D408
label_2f101c:
    if (ctx->pc == 0x2F101Cu) {
        ctx->pc = 0x2F101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1018u;
        // 0x2f101c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1020u;
        goto label_2f1020;
    }
    ctx->pc = 0x2F1018u;
    SET_GPR_U32(ctx, 31, 0x2F1020u);
    ctx->pc = 0x2F101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1018u;
    // 0x2f101c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F1018u, 0x2F1020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1020u;
label_2f1020:
    // 0x2f1020: 0xa052011f  sb          $s2, 0x11F($v0)
    ctx->pc = 0x2f1020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 287), (uint8_t)GPR_U32(ctx, 18));
label_2f1024:
    // 0x2f1024: 0xa2200053  sb          $zero, 0x53($s1)
    ctx->pc = 0x2f1024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 83), (uint8_t)GPR_U32(ctx, 0));
label_2f1028:
    // 0x2f1028: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2f1028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2f102c:
    // 0x2f102c: 0x9225004d  lbu         $a1, 0x4D($s1)
    ctx->pc = 0x2f102cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
label_2f1030:
    // 0x2f1030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1034:
    // 0x2f1034: 0x8c64bd30  lw          $a0, -0x42D0($v1)
    ctx->pc = 0x2f1034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2f1038:
    // 0x2f1038: 0xae320030  sw          $s2, 0x30($s1)
    ctx->pc = 0x2f1038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
label_2f103c:
    // 0x2f103c: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x2f103cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
label_2f1040:
    // 0x2f1040: 0x100000cd  b           . + 4 + (0xCD << 2)
label_2f1044:
    if (ctx->pc == 0x2F1044u) {
        ctx->pc = 0x2F1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1040u;
        // 0x2f1044: 0xa225004e  sb          $a1, 0x4E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1048u;
        goto label_2f1048;
    }
    ctx->pc = 0x2F1040u;
    {
        const bool branch_taken_0x2f1040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1040u;
        // 0x2f1044: 0xa225004e  sb          $a1, 0x4E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1040) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F1048u;
label_2f1048:
    // 0x2f1048: 0x1472003b  bne         $v1, $s2, . + 4 + (0x3B << 2)
label_2f104c:
    if (ctx->pc == 0x2F104Cu) {
        ctx->pc = 0x2F104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1048u;
        // 0x2f104c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1050u;
        goto label_2f1050;
    }
    ctx->pc = 0x2F1048u;
    {
        const bool branch_taken_0x2f1048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1048u;
        // 0x2f104c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1048) {
            ctx->pc = 0x2F1138u;
            goto label_2f1138;
        }
    }
    ctx->pc = 0x2F1050u;
label_2f1050:
    // 0x2f1050: 0xc0a367c  jal         func_28D9F0
label_2f1054:
    if (ctx->pc == 0x2F1054u) {
        ctx->pc = 0x2F1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1050u;
        // 0x2f1054: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1058u;
        goto label_2f1058;
    }
    ctx->pc = 0x2F1050u;
    SET_GPR_U32(ctx, 31, 0x2F1058u);
    ctx->pc = 0x2F1054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1050u;
    // 0x2f1054: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F1050u, 0x2F1058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1058u;
label_2f1058:
    // 0x2f1058: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f105c:
    if (ctx->pc == 0x2F105Cu) {
        ctx->pc = 0x2F105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1058u;
        // 0x2f105c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1060u;
        goto label_2f1060;
    }
    ctx->pc = 0x2F1058u;
    {
        const bool branch_taken_0x2f1058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1058u;
        // 0x2f105c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1058) {
            ctx->pc = 0x2F1080u;
            goto label_2f1080;
        }
    }
    ctx->pc = 0x2F1060u;
label_2f1060:
    // 0x2f1060: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f1060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f1064:
    // 0x2f1064: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2f1064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2f1068:
    // 0x2f1068: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f1068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f106c:
    // 0x2f106c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f106cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f1070:
    // 0x2f1070: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2f1070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_2f1074:
    // 0x2f1074: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2f1074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f1078:
    // 0x2f1078: 0xc0be8c0  jal         func_2FA300
label_2f107c:
    if (ctx->pc == 0x2F107Cu) {
        ctx->pc = 0x2F107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1078u;
        // 0x2f107c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1080u;
        goto label_2f1080;
    }
    ctx->pc = 0x2F1078u;
    SET_GPR_U32(ctx, 31, 0x2F1080u);
    ctx->pc = 0x2F107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1078u;
    // 0x2f107c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2F1078u, 0x2F1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1080u;
label_2f1080:
    // 0x2f1080: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2f1080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2f1084:
    // 0x2f1084: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2f1084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2f1088:
    // 0x2f1088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f108c:
    // 0x2f108c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1090:
    // 0x2f1090: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2f1090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2f1094:
    // 0x2f1094: 0xc0bc0c6  jal         func_2F0318
label_2f1098:
    if (ctx->pc == 0x2F1098u) {
        ctx->pc = 0x2F1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1094u;
        // 0x2f1098: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F109Cu;
        goto label_2f109c;
    }
    ctx->pc = 0x2F1094u;
    SET_GPR_U32(ctx, 31, 0x2F109Cu);
    ctx->pc = 0x2F1098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1094u;
    // 0x2f1098: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0318u, 0x2F1094u, 0x2F109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F109Cu;
label_2f109c:
    // 0x2f109c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f109cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f10a0:
    // 0x2f10a0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2f10a4:
    if (ctx->pc == 0x2F10A4u) {
        ctx->pc = 0x2F10A8u;
        goto label_2f10a8;
    }
    ctx->pc = 0x2F10A0u;
    {
        const bool branch_taken_0x2f10a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f10a0) {
            ctx->pc = 0x2F10B0u;
            goto label_2f10b0;
        }
    }
    ctx->pc = 0x2F10A8u;
label_2f10a8:
    // 0x2f10a8: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_2f10ac:
    if (ctx->pc == 0x2F10ACu) {
        ctx->pc = 0x2F10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10A8u;
        // 0x2f10ac: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10B0u;
        goto label_2f10b0;
    }
    ctx->pc = 0x2F10A8u;
    {
        const bool branch_taken_0x2f10a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10A8u;
        // 0x2f10ac: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10a8) {
            ctx->pc = 0x2F1374u;
            goto label_2f1374;
        }
    }
    ctx->pc = 0x2F10B0u;
label_2f10b0:
    // 0x2f10b0: 0xc087502  jal         func_21D408
label_2f10b4:
    if (ctx->pc == 0x2F10B4u) {
        ctx->pc = 0x2F10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10B0u;
        // 0x2f10b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10B8u;
        goto label_2f10b8;
    }
    ctx->pc = 0x2F10B0u;
    SET_GPR_U32(ctx, 31, 0x2F10B8u);
    ctx->pc = 0x2F10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F10B0u;
    // 0x2f10b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F10B0u, 0x2F10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F10B8u;
label_2f10b8:
    // 0x2f10b8: 0xa040011f  sb          $zero, 0x11F($v0)
    ctx->pc = 0x2f10b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 287), (uint8_t)GPR_U32(ctx, 0));
label_2f10bc:
    // 0x2f10bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f10c0:
    // 0x2f10c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f10c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f10c4:
    // 0x2f10c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f10c8:
    // 0x2f10c8: 0x40f809  jalr        $v0
label_2f10cc:
    if (ctx->pc == 0x2F10CCu) {
        ctx->pc = 0x2F10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10C8u;
        // 0x2f10cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10D0u;
        goto label_2f10d0;
    }
    ctx->pc = 0x2F10C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F10D0u);
        ctx->pc = 0x2F10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10C8u;
        // 0x2f10cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F10C8u, 0x2F10D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F10D0u;
label_2f10d0:
    // 0x2f10d0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2f10d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f10d4:
    // 0x2f10d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f10d8:
    // 0x2f10d8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f10d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f10dc:
    // 0x2f10dc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2f10dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2f10e0:
    // 0x2f10e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f10e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f10e4:
    // 0x2f10e4: 0x0  nop
    ctx->pc = 0x2f10e4u;
    // NOP
label_2f10e8:
    // 0x2f10e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2f10ec:
    if (ctx->pc == 0x2F10ECu) {
        ctx->pc = 0x2F10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10E8u;
        // 0x2f10ec: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10F0u;
        goto label_2f10f0;
    }
    ctx->pc = 0x2F10E8u;
    {
        const bool branch_taken_0x2f10e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10E8u;
        // 0x2f10ec: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10e8) {
            ctx->pc = 0x2F10F4u;
            goto label_2f10f4;
        }
    }
    ctx->pc = 0x2F10F0u;
label_2f10f0:
    // 0x2f10f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f10f4:
    // 0x2f10f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f10f8:
    // 0x2f10f8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2f10fc:
    if (ctx->pc == 0x2F10FCu) {
        ctx->pc = 0x2F10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10F8u;
        // 0x2f10fc: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1100u;
        goto label_2f1100;
    }
    ctx->pc = 0x2F10F8u;
    {
        const bool branch_taken_0x2f10f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10F8u;
        // 0x2f10fc: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10f8) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F1100u;
label_2f1100:
    // 0x2f1100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1104:
    // 0x2f1104: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1108:
    // 0x2f1108: 0xc0bc24c  jal         func_2F0930
label_2f110c:
    if (ctx->pc == 0x2F110Cu) {
        ctx->pc = 0x2F110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1108u;
        // 0x2f110c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1110u;
        goto label_2f1110;
    }
    ctx->pc = 0x2F1108u;
    SET_GPR_U32(ctx, 31, 0x2F1110u);
    ctx->pc = 0x2F110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1108u;
    // 0x2f110c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0930u, 0x2F1108u, 0x2F1110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1110u;
label_2f1110:
    // 0x2f1110: 0x10000099  b           . + 4 + (0x99 << 2)
label_2f1114:
    if (ctx->pc == 0x2F1114u) {
        ctx->pc = 0x2F1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1110u;
        // 0x2f1114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1118u;
        goto label_2f1118;
    }
    ctx->pc = 0x2F1110u;
    {
        const bool branch_taken_0x2f1110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1110u;
        // 0x2f1114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1110) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F1118u;
label_2f1118:
    // 0x2f1118: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x2f1118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_2f111c:
    // 0x2f111c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1120:
    // 0x2f1120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1124:
    // 0x2f1124: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x2f1124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
label_2f1128:
    // 0x2f1128: 0xc0bbf72  jal         func_2EFDC8
label_2f112c:
    if (ctx->pc == 0x2F112Cu) {
        ctx->pc = 0x2F112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1128u;
        // 0x2f112c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1130u;
        goto label_2f1130;
    }
    ctx->pc = 0x2F1128u;
    SET_GPR_U32(ctx, 31, 0x2F1130u);
    ctx->pc = 0x2F112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1128u;
    // 0x2f112c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFDC8u, 0x2F1128u, 0x2F1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1130u;
label_2f1130:
    // 0x2f1130: 0x10000091  b           . + 4 + (0x91 << 2)
label_2f1134:
    if (ctx->pc == 0x2F1134u) {
        ctx->pc = 0x2F1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1130u;
        // 0x2f1134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1138u;
        goto label_2f1138;
    }
    ctx->pc = 0x2F1130u;
    {
        const bool branch_taken_0x2f1130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1130u;
        // 0x2f1134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1130) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F1138u;
label_2f1138:
    // 0x2f1138: 0x1475001e  bne         $v1, $s5, . + 4 + (0x1E << 2)
label_2f113c:
    if (ctx->pc == 0x2F113Cu) {
        ctx->pc = 0x2F113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1138u;
        // 0x2f113c: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1140u;
        goto label_2f1140;
    }
    ctx->pc = 0x2F1138u;
    {
        const bool branch_taken_0x2f1138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2F113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1138u;
        // 0x2f113c: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1138) {
            ctx->pc = 0x2F11B4u;
            goto label_2f11b4;
        }
    }
    ctx->pc = 0x2F1140u;
label_2f1140:
    // 0x2f1140: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f1140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f1144:
    // 0x2f1144: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2f1144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2f1148:
    // 0x2f1148: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x2f1148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2f114c:
    // 0x2f114c: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
label_2f1150:
    if (ctx->pc == 0x2F1150u) {
        ctx->pc = 0x2F1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F114Cu;
        // 0x2f1150: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1154u;
        goto label_2f1154;
    }
    ctx->pc = 0x2F114Cu;
    {
        const bool branch_taken_0x2f114c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F114Cu;
        // 0x2f1150: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f114c) {
            ctx->pc = 0x2F1198u;
            goto label_2f1198;
        }
    }
    ctx->pc = 0x2F1154u;
label_2f1154:
    // 0x2f1154: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x2f1154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_2f1158:
    // 0x2f1158: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2f1158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2f115c:
    // 0x2f115c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2f115cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2f1160:
    // 0x2f1160: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2f1160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2f1164:
    // 0x2f1164: 0x12000083  beqz        $s0, . + 4 + (0x83 << 2)
label_2f1168:
    if (ctx->pc == 0x2F1168u) {
        ctx->pc = 0x2F1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1164u;
        // 0x2f1168: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F116Cu;
        goto label_2f116c;
    }
    ctx->pc = 0x2F1164u;
    {
        const bool branch_taken_0x2f1164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1164u;
        // 0x2f1168: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1164) {
            ctx->pc = 0x2F1374u;
            goto label_2f1374;
        }
    }
    ctx->pc = 0x2F116Cu;
label_2f116c:
    // 0x2f116c: 0x92220050  lbu         $v0, 0x50($s1)
    ctx->pc = 0x2f116cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_2f1170:
    // 0x2f1170: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2f1170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2f1174:
    // 0x2f1174: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x2f1174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_2f1178:
    // 0x2f1178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f117c:
    // 0x2f117c: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x2f117cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2f1180:
    // 0x2f1180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1184:
    // 0x2f1184: 0x3812  mflo        $a3
    ctx->pc = 0x2f1184u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_2f1188:
    // 0x2f1188: 0xc0bbf72  jal         func_2EFDC8
label_2f118c:
    if (ctx->pc == 0x2F118Cu) {
        ctx->pc = 0x2F118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1188u;
        // 0x2f118c: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1190u;
        goto label_2f1190;
    }
    ctx->pc = 0x2F1188u;
    SET_GPR_U32(ctx, 31, 0x2F1190u);
    ctx->pc = 0x2F118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1188u;
    // 0x2f118c: 0x34c600ff  ori         $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFDC8u, 0x2F1188u, 0x2F1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1190u;
label_2f1190:
    // 0x2f1190: 0x10000079  b           . + 4 + (0x79 << 2)
label_2f1194:
    if (ctx->pc == 0x2F1194u) {
        ctx->pc = 0x2F1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1190u;
        // 0x2f1194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1198u;
        goto label_2f1198;
    }
    ctx->pc = 0x2F1190u;
    {
        const bool branch_taken_0x2f1190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1190u;
        // 0x2f1194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1190) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F1198u;
label_2f1198:
    // 0x2f1198: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x2f1198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2f119c:
    // 0x2f119c: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_2f11a0:
    if (ctx->pc == 0x2F11A0u) {
        ctx->pc = 0x2F11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F119Cu;
        // 0x2f11a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11A4u;
        goto label_2f11a4;
    }
    ctx->pc = 0x2F119Cu;
    {
        const bool branch_taken_0x2f119c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F119Cu;
        // 0x2f11a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f119c) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F11A4u;
label_2f11a4:
    // 0x2f11a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f11a8:
    // 0x2f11a8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2f11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2f11ac:
    // 0x2f11ac: 0x10000071  b           . + 4 + (0x71 << 2)
label_2f11b0:
    if (ctx->pc == 0x2F11B0u) {
        ctx->pc = 0x2F11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11ACu;
        // 0x2f11b0: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11B4u;
        goto label_2f11b4;
    }
    ctx->pc = 0x2F11ACu;
    {
        const bool branch_taken_0x2f11ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11ACu;
        // 0x2f11b0: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11ac) {
            ctx->pc = 0x2F1374u;
            goto label_2f1374;
        }
    }
    ctx->pc = 0x2F11B4u;
label_2f11b4:
    // 0x2f11b4: 0x14740006  bne         $v1, $s4, . + 4 + (0x6 << 2)
label_2f11b8:
    if (ctx->pc == 0x2F11B8u) {
        ctx->pc = 0x2F11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11B4u;
        // 0x2f11b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11BCu;
        goto label_2f11bc;
    }
    ctx->pc = 0x2F11B4u;
    {
        const bool branch_taken_0x2f11b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2F11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11B4u;
        // 0x2f11b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11b4) {
            ctx->pc = 0x2F11D0u;
            goto label_2f11d0;
        }
    }
    ctx->pc = 0x2F11BCu;
label_2f11bc:
    // 0x2f11bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f11bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f11c0:
    // 0x2f11c0: 0xc0bc294  jal         func_2F0A50
label_2f11c4:
    if (ctx->pc == 0x2F11C4u) {
        ctx->pc = 0x2F11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11C0u;
        // 0x2f11c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11C8u;
        goto label_2f11c8;
    }
    ctx->pc = 0x2F11C0u;
    SET_GPR_U32(ctx, 31, 0x2F11C8u);
    ctx->pc = 0x2F11C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11C0u;
    // 0x2f11c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0A50u, 0x2F11C0u, 0x2F11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F11C8u;
label_2f11c8:
    // 0x2f11c8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2f11cc:
    if (ctx->pc == 0x2F11CCu) {
        ctx->pc = 0x2F11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11C8u;
        // 0x2f11cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11D0u;
        goto label_2f11d0;
    }
    ctx->pc = 0x2F11C8u;
    {
        const bool branch_taken_0x2f11c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11C8u;
        // 0x2f11cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11c8) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F11D0u;
label_2f11d0:
    // 0x2f11d0: 0x14660042  bne         $v1, $a2, . + 4 + (0x42 << 2)
label_2f11d4:
    if (ctx->pc == 0x2F11D4u) {
        ctx->pc = 0x2F11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11D0u;
        // 0x2f11d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11D8u;
        goto label_2f11d8;
    }
    ctx->pc = 0x2F11D0u;
    {
        const bool branch_taken_0x2f11d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2F11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11D0u;
        // 0x2f11d4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11d0) {
            ctx->pc = 0x2F12DCu;
            goto label_2f12dc;
        }
    }
    ctx->pc = 0x2F11D8u;
label_2f11d8:
    // 0x2f11d8: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2f11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2f11dc:
    // 0x2f11dc: 0x14a00021  bnez        $a1, . + 4 + (0x21 << 2)
label_2f11e0:
    if (ctx->pc == 0x2F11E0u) {
        ctx->pc = 0x2F11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11DCu;
        // 0x2f11e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11E4u;
        goto label_2f11e4;
    }
    ctx->pc = 0x2F11DCu;
    {
        const bool branch_taken_0x2f11dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11DCu;
        // 0x2f11e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11dc) {
            ctx->pc = 0x2F1264u;
            goto label_2f1264;
        }
    }
    ctx->pc = 0x2F11E4u;
label_2f11e4:
    // 0x2f11e4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2f11e8:
    // 0x2f11e8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2f11e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2f11ec:
    // 0x2f11ec: 0xc0cd4ee  jal         func_3353B8
label_2f11f0:
    if (ctx->pc == 0x2F11F0u) {
        ctx->pc = 0x2F11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11ECu;
        // 0x2f11f0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11F4u;
        goto label_2f11f4;
    }
    ctx->pc = 0x2F11ECu;
    SET_GPR_U32(ctx, 31, 0x2F11F4u);
    ctx->pc = 0x2F11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11ECu;
    // 0x2f11f0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F11ECu, 0x2F11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F11F4u;
label_2f11f4:
    // 0x2f11f4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2f11f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2f11f8:
    // 0x2f11f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f11f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f11fc:
    // 0x2f11fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f11fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f1200:
    // 0x2f1200: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2f1200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2f1204:
    // 0x2f1204: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2f1204u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f1208:
    // 0x2f1208: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f1208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f120c:
    // 0x2f120c: 0x283300b  movn        $a2, $s4, $v1
    ctx->pc = 0x2f120cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 20));
label_2f1210:
    // 0x2f1210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f1210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1214:
    // 0x2f1214: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2f1214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2f1218:
    // 0x2f1218: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f1218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f121c:
    // 0x2f121c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f121cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f1220:
    // 0x2f1220: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f1220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1224:
    // 0x2f1224: 0xc0968f8  jal         func_25A3E0
label_2f1228:
    if (ctx->pc == 0x2F1228u) {
        ctx->pc = 0x2F1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1224u;
        // 0x2f1228: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F122Cu;
        goto label_2f122c;
    }
    ctx->pc = 0x2F1224u;
    SET_GPR_U32(ctx, 31, 0x2F122Cu);
    ctx->pc = 0x2F1228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1224u;
    // 0x2f1228: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2F1224u, 0x2F122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F122Cu;
label_2f122c:
    // 0x2f122c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1230:
    // 0x2f1230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1234:
    // 0x2f1234: 0xc0bc24c  jal         func_2F0930
label_2f1238:
    if (ctx->pc == 0x2F1238u) {
        ctx->pc = 0x2F1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1234u;
        // 0x2f1238: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F123Cu;
        goto label_2f123c;
    }
    ctx->pc = 0x2F1234u;
    SET_GPR_U32(ctx, 31, 0x2F123Cu);
    ctx->pc = 0x2F1238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1234u;
    // 0x2f1238: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0930u, 0x2F1234u, 0x2F123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F123Cu;
label_2f123c:
    // 0x2f123c: 0x92240051  lbu         $a0, 0x51($s1)
    ctx->pc = 0x2f123cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 81)));
label_2f1240:
    // 0x2f1240: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f1240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2f1244:
    // 0x2f1244: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2f1244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2f1248:
    // 0x2f1248: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2f1248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f124c:
    // 0x2f124c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2f124cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2f1250:
    // 0x2f1250: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1254:
    // 0x2f1254: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2f1254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2f1258:
    // 0x2f1258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f1258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f125c:
    // 0x2f125c: 0x10000046  b           . + 4 + (0x46 << 2)
label_2f1260:
    if (ctx->pc == 0x2F1260u) {
        ctx->pc = 0x2F1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F125Cu;
        // 0x2f1260: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1264u;
        goto label_2f1264;
    }
    ctx->pc = 0x2F125Cu;
    {
        const bool branch_taken_0x2f125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F125Cu;
        // 0x2f1260: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f125c) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F1264u;
label_2f1264:
    // 0x2f1264: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2f1264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f1268:
    // 0x2f1268: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2f1268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f126c:
    // 0x2f126c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2f126cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2f1270:
    // 0x2f1270: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
label_2f1274:
    if (ctx->pc == 0x2F1274u) {
        ctx->pc = 0x2F1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1270u;
        // 0x2f1274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1278u;
        goto label_2f1278;
    }
    ctx->pc = 0x2F1270u;
    {
        const bool branch_taken_0x2f1270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1270u;
        // 0x2f1274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1270) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F1278u;
label_2f1278:
    // 0x2f1278: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2f1278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2f127c:
    // 0x2f127c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f127cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2f1280:
    // 0x2f1280: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f1280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f1284:
    // 0x2f1284: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f1284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1288:
    // 0x2f1288: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2f1288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2f128c:
    // 0x2f128c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f128cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1290:
    // 0x2f1290: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f1290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1294:
    // 0x2f1294: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f1294u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2f1298:
    // 0x2f1298: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f1298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f129c:
    // 0x2f129c: 0xc0968f8  jal         func_25A3E0
label_2f12a0:
    if (ctx->pc == 0x2F12A0u) {
        ctx->pc = 0x2F12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F129Cu;
        // 0x2f12a0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12A4u;
        goto label_2f12a4;
    }
    ctx->pc = 0x2F129Cu;
    SET_GPR_U32(ctx, 31, 0x2F12A4u);
    ctx->pc = 0x2F12A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F129Cu;
    // 0x2f12a0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2F129Cu, 0x2F12A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12A4u;
label_2f12a4:
    // 0x2f12a4: 0xc0a367c  jal         func_28D9F0
label_2f12a8:
    if (ctx->pc == 0x2F12A8u) {
        ctx->pc = 0x2F12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12A4u;
        // 0x2f12a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12ACu;
        goto label_2f12ac;
    }
    ctx->pc = 0x2F12A4u;
    SET_GPR_U32(ctx, 31, 0x2F12ACu);
    ctx->pc = 0x2F12A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12A4u;
    // 0x2f12a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F12A4u, 0x2F12ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12ACu;
label_2f12ac:
    // 0x2f12ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f12b0:
    if (ctx->pc == 0x2F12B0u) {
        ctx->pc = 0x2F12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12ACu;
        // 0x2f12b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12B4u;
        goto label_2f12b4;
    }
    ctx->pc = 0x2F12ACu;
    {
        const bool branch_taken_0x2f12ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12ACu;
        // 0x2f12b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12ac) {
            ctx->pc = 0x2F12C0u;
            goto label_2f12c0;
        }
    }
    ctx->pc = 0x2F12B4u;
label_2f12b4:
    // 0x2f12b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f12b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f12b8:
    // 0x2f12b8: 0xc0bebdc  jal         func_2FAF70
label_2f12bc:
    if (ctx->pc == 0x2F12BCu) {
        ctx->pc = 0x2F12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12B8u;
        // 0x2f12bc: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12C0u;
        goto label_2f12c0;
    }
    ctx->pc = 0x2F12B8u;
    SET_GPR_U32(ctx, 31, 0x2F12C0u);
    ctx->pc = 0x2F12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12B8u;
    // 0x2f12bc: 0x240605dc  addiu       $a2, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2F12B8u, 0x2F12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12C0u;
label_2f12c0:
    // 0x2f12c0: 0x9224004e  lbu         $a0, 0x4E($s1)
    ctx->pc = 0x2f12c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 78)));
label_2f12c4:
    // 0x2f12c4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x2f12c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f12c8:
    // 0x2f12c8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2f12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2f12cc:
    // 0x2f12cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f12ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f12d0:
    // 0x2f12d0: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x2f12d0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2f12d4:
    // 0x2f12d4: 0x10000028  b           . + 4 + (0x28 << 2)
label_2f12d8:
    if (ctx->pc == 0x2F12D8u) {
        ctx->pc = 0x2F12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12D4u;
        // 0x2f12d8: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12DCu;
        goto label_2f12dc;
    }
    ctx->pc = 0x2F12D4u;
    {
        const bool branch_taken_0x2f12d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12D4u;
        // 0x2f12d8: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12d4) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F12DCu;
label_2f12dc:
    // 0x2f12dc: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_2f12e0:
    if (ctx->pc == 0x2F12E0u) {
        ctx->pc = 0x2F12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12DCu;
        // 0x2f12e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12E4u;
        goto label_2f12e4;
    }
    ctx->pc = 0x2F12DCu;
    {
        const bool branch_taken_0x2f12dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12DCu;
        // 0x2f12e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12dc) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F12E4u;
label_2f12e4:
    // 0x2f12e4: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2f12e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2f12e8:
    // 0x2f12e8: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
label_2f12ec:
    if (ctx->pc == 0x2F12ECu) {
        ctx->pc = 0x2F12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12E8u;
        // 0x2f12ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12F0u;
        goto label_2f12f0;
    }
    ctx->pc = 0x2F12E8u;
    {
        const bool branch_taken_0x2f12e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12E8u;
        // 0x2f12ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12e8) {
            ctx->pc = 0x2F1354u;
            goto label_2f1354;
        }
    }
    ctx->pc = 0x2F12F0u;
label_2f12f0:
    // 0x2f12f0: 0x92220053  lbu         $v0, 0x53($s1)
    ctx->pc = 0x2f12f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 83)));
label_2f12f4:
    // 0x2f12f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f12f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f12f8:
    // 0x2f12f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f12f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f12fc:
    // 0x2f12fc: 0xc0bc24c  jal         func_2F0930
label_2f1300:
    if (ctx->pc == 0x2F1300u) {
        ctx->pc = 0x2F1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12FCu;
        // 0x2f1300: 0x282300a  movz        $a2, $s4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1304u;
        goto label_2f1304;
    }
    ctx->pc = 0x2F12FCu;
    SET_GPR_U32(ctx, 31, 0x2F1304u);
    ctx->pc = 0x2F1300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12FCu;
    // 0x2f1300: 0x282300a  movz        $a2, $s4, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0930u, 0x2F12FCu, 0x2F1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1304u;
label_2f1304:
    // 0x2f1304: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2f1308:
    if (ctx->pc == 0x2F1308u) {
        ctx->pc = 0x2F1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1304u;
        // 0x2f1308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F130Cu;
        goto label_2f130c;
    }
    ctx->pc = 0x2F1304u;
    {
        const bool branch_taken_0x2f1304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1304u;
        // 0x2f1308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1304) {
            ctx->pc = 0x2F132Cu;
            goto label_2f132c;
        }
    }
    ctx->pc = 0x2F130Cu;
label_2f130c:
    // 0x2f130c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2f130cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2f1310:
    // 0x2f1310: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1314:
    // 0x2f1314: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2f1314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2f1318:
    // 0x2f1318: 0xc0bbf72  jal         func_2EFDC8
label_2f131c:
    if (ctx->pc == 0x2F131Cu) {
        ctx->pc = 0x2F131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1318u;
        // 0x2f131c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1320u;
        goto label_2f1320;
    }
    ctx->pc = 0x2F1318u;
    SET_GPR_U32(ctx, 31, 0x2F1320u);
    ctx->pc = 0x2F131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1318u;
    // 0x2f131c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFDC8u, 0x2F1318u, 0x2F1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1320u;
label_2f1320:
    // 0x2f1320: 0xc087502  jal         func_21D408
label_2f1324:
    if (ctx->pc == 0x2F1324u) {
        ctx->pc = 0x2F1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1320u;
        // 0x2f1324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1328u;
        goto label_2f1328;
    }
    ctx->pc = 0x2F1320u;
    SET_GPR_U32(ctx, 31, 0x2F1328u);
    ctx->pc = 0x2F1324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1320u;
    // 0x2f1324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F1320u, 0x2F1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1328u;
label_2f1328:
    // 0x2f1328: 0xa052011f  sb          $s2, 0x11F($v0)
    ctx->pc = 0x2f1328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 287), (uint8_t)GPR_U32(ctx, 18));
label_2f132c:
    // 0x2f132c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f1330:
    // 0x2f1330: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2f1330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2f1334:
    // 0x2f1334: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x2f1334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f1338:
    // 0x2f1338: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2f1338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2f133c:
    // 0x2f133c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f133cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1340:
    // 0x2f1340: 0xae250034  sw          $a1, 0x34($s1)
    ctx->pc = 0x2f1340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 5));
label_2f1344:
    // 0x2f1344: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2f1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f1348:
    // 0x2f1348: 0x246305dc  addiu       $v1, $v1, 0x5DC
    ctx->pc = 0x2f1348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1500));
label_2f134c:
    // 0x2f134c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f1350:
    if (ctx->pc == 0x2F1350u) {
        ctx->pc = 0x2F1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F134Cu;
        // 0x2f1350: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1354u;
        goto label_2f1354;
    }
    ctx->pc = 0x2F134Cu;
    {
        const bool branch_taken_0x2f134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F134Cu;
        // 0x2f1350: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f134c) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F1354u;
label_2f1354:
    // 0x2f1354: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2f1354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f1358:
    // 0x2f1358: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2f1358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2f135c:
    // 0x2f135c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2f135cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2f1360:
    // 0x2f1360: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2f1364:
    if (ctx->pc == 0x2F1364u) {
        ctx->pc = 0x2F1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1360u;
        // 0x2f1364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1368u;
        goto label_2f1368;
    }
    ctx->pc = 0x2F1360u;
    {
        const bool branch_taken_0x2f1360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1360u;
        // 0x2f1364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1360) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F1368u;
label_2f1368:
    // 0x2f1368: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2f1368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2f136c:
    // 0x2f136c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f1370:
    if (ctx->pc == 0x2F1370u) {
        ctx->pc = 0x2F1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F136Cu;
        // 0x2f1370: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1374u;
        goto label_2f1374;
    }
    ctx->pc = 0x2F136Cu;
    {
        const bool branch_taken_0x2f136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F136Cu;
        // 0x2f1370: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f136c) {
            ctx->pc = 0x2F1378u;
            goto label_2f1378;
        }
    }
    ctx->pc = 0x2F1374u;
label_2f1374:
    // 0x2f1374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1378:
    // 0x2f1378: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f1378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f137c:
    // 0x2f137c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f137cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f1380:
    // 0x2f1380: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f1380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f1384:
    // 0x2f1384: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f1384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f1388:
    // 0x2f1388: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2f1388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f138c:
    // 0x2f138c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2f138cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f1390:
    // 0x2f1390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f1394:
    // 0x2f1394: 0x3e00008  jr          $ra
label_2f1398:
    if (ctx->pc == 0x2F1398u) {
        ctx->pc = 0x2F1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1394u;
        // 0x2f1398: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F139Cu;
        goto label_2f139c;
    }
    ctx->pc = 0x2F1394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1394u;
        // 0x2f1398: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F139Cu;
label_2f139c:
    // 0x2f139c: 0x0  nop
    ctx->pc = 0x2f139cu;
    // NOP
label_2f13a0:
    // 0x2f13a0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2f13a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f13a4:
    // 0x2f13a4: 0x0  nop
    ctx->pc = 0x2f13a4u;
    // NOP
    ctx->pc = 0x2f13a8u;
}
