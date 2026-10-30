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

// Function: sub_001F1000
// Address: 0x1f1000 - 0x1f1748
void sub_001F1000_0x1f1000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1000_0x1f1000");
#endif

    switch (ctx->pc) {
        case 0x1f1000u: goto label_1f1000;
        case 0x1f1004u: goto label_1f1004;
        case 0x1f1008u: goto label_1f1008;
        case 0x1f100cu: goto label_1f100c;
        case 0x1f1010u: goto label_1f1010;
        case 0x1f1014u: goto label_1f1014;
        case 0x1f1018u: goto label_1f1018;
        case 0x1f101cu: goto label_1f101c;
        case 0x1f1020u: goto label_1f1020;
        case 0x1f1024u: goto label_1f1024;
        case 0x1f1028u: goto label_1f1028;
        case 0x1f102cu: goto label_1f102c;
        case 0x1f1030u: goto label_1f1030;
        case 0x1f1034u: goto label_1f1034;
        case 0x1f1038u: goto label_1f1038;
        case 0x1f103cu: goto label_1f103c;
        case 0x1f1040u: goto label_1f1040;
        case 0x1f1044u: goto label_1f1044;
        case 0x1f1048u: goto label_1f1048;
        case 0x1f104cu: goto label_1f104c;
        case 0x1f1050u: goto label_1f1050;
        case 0x1f1054u: goto label_1f1054;
        case 0x1f1058u: goto label_1f1058;
        case 0x1f105cu: goto label_1f105c;
        case 0x1f1060u: goto label_1f1060;
        case 0x1f1064u: goto label_1f1064;
        case 0x1f1068u: goto label_1f1068;
        case 0x1f106cu: goto label_1f106c;
        case 0x1f1070u: goto label_1f1070;
        case 0x1f1074u: goto label_1f1074;
        case 0x1f1078u: goto label_1f1078;
        case 0x1f107cu: goto label_1f107c;
        case 0x1f1080u: goto label_1f1080;
        case 0x1f1084u: goto label_1f1084;
        case 0x1f1088u: goto label_1f1088;
        case 0x1f108cu: goto label_1f108c;
        case 0x1f1090u: goto label_1f1090;
        case 0x1f1094u: goto label_1f1094;
        case 0x1f1098u: goto label_1f1098;
        case 0x1f109cu: goto label_1f109c;
        case 0x1f10a0u: goto label_1f10a0;
        case 0x1f10a4u: goto label_1f10a4;
        case 0x1f10a8u: goto label_1f10a8;
        case 0x1f10acu: goto label_1f10ac;
        case 0x1f10b0u: goto label_1f10b0;
        case 0x1f10b4u: goto label_1f10b4;
        case 0x1f10b8u: goto label_1f10b8;
        case 0x1f10bcu: goto label_1f10bc;
        case 0x1f10c0u: goto label_1f10c0;
        case 0x1f10c4u: goto label_1f10c4;
        case 0x1f10c8u: goto label_1f10c8;
        case 0x1f10ccu: goto label_1f10cc;
        case 0x1f10d0u: goto label_1f10d0;
        case 0x1f10d4u: goto label_1f10d4;
        case 0x1f10d8u: goto label_1f10d8;
        case 0x1f10dcu: goto label_1f10dc;
        case 0x1f10e0u: goto label_1f10e0;
        case 0x1f10e4u: goto label_1f10e4;
        case 0x1f10e8u: goto label_1f10e8;
        case 0x1f10ecu: goto label_1f10ec;
        case 0x1f10f0u: goto label_1f10f0;
        case 0x1f10f4u: goto label_1f10f4;
        case 0x1f10f8u: goto label_1f10f8;
        case 0x1f10fcu: goto label_1f10fc;
        case 0x1f1100u: goto label_1f1100;
        case 0x1f1104u: goto label_1f1104;
        case 0x1f1108u: goto label_1f1108;
        case 0x1f110cu: goto label_1f110c;
        case 0x1f1110u: goto label_1f1110;
        case 0x1f1114u: goto label_1f1114;
        case 0x1f1118u: goto label_1f1118;
        case 0x1f111cu: goto label_1f111c;
        case 0x1f1120u: goto label_1f1120;
        case 0x1f1124u: goto label_1f1124;
        case 0x1f1128u: goto label_1f1128;
        case 0x1f112cu: goto label_1f112c;
        case 0x1f1130u: goto label_1f1130;
        case 0x1f1134u: goto label_1f1134;
        case 0x1f1138u: goto label_1f1138;
        case 0x1f113cu: goto label_1f113c;
        case 0x1f1140u: goto label_1f1140;
        case 0x1f1144u: goto label_1f1144;
        case 0x1f1148u: goto label_1f1148;
        case 0x1f114cu: goto label_1f114c;
        case 0x1f1150u: goto label_1f1150;
        case 0x1f1154u: goto label_1f1154;
        case 0x1f1158u: goto label_1f1158;
        case 0x1f115cu: goto label_1f115c;
        case 0x1f1160u: goto label_1f1160;
        case 0x1f1164u: goto label_1f1164;
        case 0x1f1168u: goto label_1f1168;
        case 0x1f116cu: goto label_1f116c;
        case 0x1f1170u: goto label_1f1170;
        case 0x1f1174u: goto label_1f1174;
        case 0x1f1178u: goto label_1f1178;
        case 0x1f117cu: goto label_1f117c;
        case 0x1f1180u: goto label_1f1180;
        case 0x1f1184u: goto label_1f1184;
        case 0x1f1188u: goto label_1f1188;
        case 0x1f118cu: goto label_1f118c;
        case 0x1f1190u: goto label_1f1190;
        case 0x1f1194u: goto label_1f1194;
        case 0x1f1198u: goto label_1f1198;
        case 0x1f119cu: goto label_1f119c;
        case 0x1f11a0u: goto label_1f11a0;
        case 0x1f11a4u: goto label_1f11a4;
        case 0x1f11a8u: goto label_1f11a8;
        case 0x1f11acu: goto label_1f11ac;
        case 0x1f11b0u: goto label_1f11b0;
        case 0x1f11b4u: goto label_1f11b4;
        case 0x1f11b8u: goto label_1f11b8;
        case 0x1f11bcu: goto label_1f11bc;
        case 0x1f11c0u: goto label_1f11c0;
        case 0x1f11c4u: goto label_1f11c4;
        case 0x1f11c8u: goto label_1f11c8;
        case 0x1f11ccu: goto label_1f11cc;
        case 0x1f11d0u: goto label_1f11d0;
        case 0x1f11d4u: goto label_1f11d4;
        case 0x1f11d8u: goto label_1f11d8;
        case 0x1f11dcu: goto label_1f11dc;
        case 0x1f11e0u: goto label_1f11e0;
        case 0x1f11e4u: goto label_1f11e4;
        case 0x1f11e8u: goto label_1f11e8;
        case 0x1f11ecu: goto label_1f11ec;
        case 0x1f11f0u: goto label_1f11f0;
        case 0x1f11f4u: goto label_1f11f4;
        case 0x1f11f8u: goto label_1f11f8;
        case 0x1f11fcu: goto label_1f11fc;
        case 0x1f1200u: goto label_1f1200;
        case 0x1f1204u: goto label_1f1204;
        case 0x1f1208u: goto label_1f1208;
        case 0x1f120cu: goto label_1f120c;
        case 0x1f1210u: goto label_1f1210;
        case 0x1f1214u: goto label_1f1214;
        case 0x1f1218u: goto label_1f1218;
        case 0x1f121cu: goto label_1f121c;
        case 0x1f1220u: goto label_1f1220;
        case 0x1f1224u: goto label_1f1224;
        case 0x1f1228u: goto label_1f1228;
        case 0x1f122cu: goto label_1f122c;
        case 0x1f1230u: goto label_1f1230;
        case 0x1f1234u: goto label_1f1234;
        case 0x1f1238u: goto label_1f1238;
        case 0x1f123cu: goto label_1f123c;
        case 0x1f1240u: goto label_1f1240;
        case 0x1f1244u: goto label_1f1244;
        case 0x1f1248u: goto label_1f1248;
        case 0x1f124cu: goto label_1f124c;
        case 0x1f1250u: goto label_1f1250;
        case 0x1f1254u: goto label_1f1254;
        case 0x1f1258u: goto label_1f1258;
        case 0x1f125cu: goto label_1f125c;
        case 0x1f1260u: goto label_1f1260;
        case 0x1f1264u: goto label_1f1264;
        case 0x1f1268u: goto label_1f1268;
        case 0x1f126cu: goto label_1f126c;
        case 0x1f1270u: goto label_1f1270;
        case 0x1f1274u: goto label_1f1274;
        case 0x1f1278u: goto label_1f1278;
        case 0x1f127cu: goto label_1f127c;
        case 0x1f1280u: goto label_1f1280;
        case 0x1f1284u: goto label_1f1284;
        case 0x1f1288u: goto label_1f1288;
        case 0x1f128cu: goto label_1f128c;
        case 0x1f1290u: goto label_1f1290;
        case 0x1f1294u: goto label_1f1294;
        case 0x1f1298u: goto label_1f1298;
        case 0x1f129cu: goto label_1f129c;
        case 0x1f12a0u: goto label_1f12a0;
        case 0x1f12a4u: goto label_1f12a4;
        case 0x1f12a8u: goto label_1f12a8;
        case 0x1f12acu: goto label_1f12ac;
        case 0x1f12b0u: goto label_1f12b0;
        case 0x1f12b4u: goto label_1f12b4;
        case 0x1f12b8u: goto label_1f12b8;
        case 0x1f12bcu: goto label_1f12bc;
        case 0x1f12c0u: goto label_1f12c0;
        case 0x1f12c4u: goto label_1f12c4;
        case 0x1f12c8u: goto label_1f12c8;
        case 0x1f12ccu: goto label_1f12cc;
        case 0x1f12d0u: goto label_1f12d0;
        case 0x1f12d4u: goto label_1f12d4;
        case 0x1f12d8u: goto label_1f12d8;
        case 0x1f12dcu: goto label_1f12dc;
        case 0x1f12e0u: goto label_1f12e0;
        case 0x1f12e4u: goto label_1f12e4;
        case 0x1f12e8u: goto label_1f12e8;
        case 0x1f12ecu: goto label_1f12ec;
        case 0x1f12f0u: goto label_1f12f0;
        case 0x1f12f4u: goto label_1f12f4;
        case 0x1f12f8u: goto label_1f12f8;
        case 0x1f12fcu: goto label_1f12fc;
        case 0x1f1300u: goto label_1f1300;
        case 0x1f1304u: goto label_1f1304;
        case 0x1f1308u: goto label_1f1308;
        case 0x1f130cu: goto label_1f130c;
        case 0x1f1310u: goto label_1f1310;
        case 0x1f1314u: goto label_1f1314;
        case 0x1f1318u: goto label_1f1318;
        case 0x1f131cu: goto label_1f131c;
        case 0x1f1320u: goto label_1f1320;
        case 0x1f1324u: goto label_1f1324;
        case 0x1f1328u: goto label_1f1328;
        case 0x1f132cu: goto label_1f132c;
        case 0x1f1330u: goto label_1f1330;
        case 0x1f1334u: goto label_1f1334;
        case 0x1f1338u: goto label_1f1338;
        case 0x1f133cu: goto label_1f133c;
        case 0x1f1340u: goto label_1f1340;
        case 0x1f1344u: goto label_1f1344;
        case 0x1f1348u: goto label_1f1348;
        case 0x1f134cu: goto label_1f134c;
        case 0x1f1350u: goto label_1f1350;
        case 0x1f1354u: goto label_1f1354;
        case 0x1f1358u: goto label_1f1358;
        case 0x1f135cu: goto label_1f135c;
        case 0x1f1360u: goto label_1f1360;
        case 0x1f1364u: goto label_1f1364;
        case 0x1f1368u: goto label_1f1368;
        case 0x1f136cu: goto label_1f136c;
        case 0x1f1370u: goto label_1f1370;
        case 0x1f1374u: goto label_1f1374;
        case 0x1f1378u: goto label_1f1378;
        case 0x1f137cu: goto label_1f137c;
        case 0x1f1380u: goto label_1f1380;
        case 0x1f1384u: goto label_1f1384;
        case 0x1f1388u: goto label_1f1388;
        case 0x1f138cu: goto label_1f138c;
        case 0x1f1390u: goto label_1f1390;
        case 0x1f1394u: goto label_1f1394;
        case 0x1f1398u: goto label_1f1398;
        case 0x1f139cu: goto label_1f139c;
        case 0x1f13a0u: goto label_1f13a0;
        case 0x1f13a4u: goto label_1f13a4;
        case 0x1f13a8u: goto label_1f13a8;
        case 0x1f13acu: goto label_1f13ac;
        case 0x1f13b0u: goto label_1f13b0;
        case 0x1f13b4u: goto label_1f13b4;
        case 0x1f13b8u: goto label_1f13b8;
        case 0x1f13bcu: goto label_1f13bc;
        case 0x1f13c0u: goto label_1f13c0;
        case 0x1f13c4u: goto label_1f13c4;
        case 0x1f13c8u: goto label_1f13c8;
        case 0x1f13ccu: goto label_1f13cc;
        case 0x1f13d0u: goto label_1f13d0;
        case 0x1f13d4u: goto label_1f13d4;
        case 0x1f13d8u: goto label_1f13d8;
        case 0x1f13dcu: goto label_1f13dc;
        case 0x1f13e0u: goto label_1f13e0;
        case 0x1f13e4u: goto label_1f13e4;
        case 0x1f13e8u: goto label_1f13e8;
        case 0x1f13ecu: goto label_1f13ec;
        case 0x1f13f0u: goto label_1f13f0;
        case 0x1f13f4u: goto label_1f13f4;
        case 0x1f13f8u: goto label_1f13f8;
        case 0x1f13fcu: goto label_1f13fc;
        case 0x1f1400u: goto label_1f1400;
        case 0x1f1404u: goto label_1f1404;
        case 0x1f1408u: goto label_1f1408;
        case 0x1f140cu: goto label_1f140c;
        case 0x1f1410u: goto label_1f1410;
        case 0x1f1414u: goto label_1f1414;
        case 0x1f1418u: goto label_1f1418;
        case 0x1f141cu: goto label_1f141c;
        case 0x1f1420u: goto label_1f1420;
        case 0x1f1424u: goto label_1f1424;
        case 0x1f1428u: goto label_1f1428;
        case 0x1f142cu: goto label_1f142c;
        case 0x1f1430u: goto label_1f1430;
        case 0x1f1434u: goto label_1f1434;
        case 0x1f1438u: goto label_1f1438;
        case 0x1f143cu: goto label_1f143c;
        case 0x1f1440u: goto label_1f1440;
        case 0x1f1444u: goto label_1f1444;
        case 0x1f1448u: goto label_1f1448;
        case 0x1f144cu: goto label_1f144c;
        case 0x1f1450u: goto label_1f1450;
        case 0x1f1454u: goto label_1f1454;
        case 0x1f1458u: goto label_1f1458;
        case 0x1f145cu: goto label_1f145c;
        case 0x1f1460u: goto label_1f1460;
        case 0x1f1464u: goto label_1f1464;
        case 0x1f1468u: goto label_1f1468;
        case 0x1f146cu: goto label_1f146c;
        case 0x1f1470u: goto label_1f1470;
        case 0x1f1474u: goto label_1f1474;
        case 0x1f1478u: goto label_1f1478;
        case 0x1f147cu: goto label_1f147c;
        case 0x1f1480u: goto label_1f1480;
        case 0x1f1484u: goto label_1f1484;
        case 0x1f1488u: goto label_1f1488;
        case 0x1f148cu: goto label_1f148c;
        case 0x1f1490u: goto label_1f1490;
        case 0x1f1494u: goto label_1f1494;
        case 0x1f1498u: goto label_1f1498;
        case 0x1f149cu: goto label_1f149c;
        case 0x1f14a0u: goto label_1f14a0;
        case 0x1f14a4u: goto label_1f14a4;
        case 0x1f14a8u: goto label_1f14a8;
        case 0x1f14acu: goto label_1f14ac;
        case 0x1f14b0u: goto label_1f14b0;
        case 0x1f14b4u: goto label_1f14b4;
        case 0x1f14b8u: goto label_1f14b8;
        case 0x1f14bcu: goto label_1f14bc;
        case 0x1f14c0u: goto label_1f14c0;
        case 0x1f14c4u: goto label_1f14c4;
        case 0x1f14c8u: goto label_1f14c8;
        case 0x1f14ccu: goto label_1f14cc;
        case 0x1f14d0u: goto label_1f14d0;
        case 0x1f14d4u: goto label_1f14d4;
        case 0x1f14d8u: goto label_1f14d8;
        case 0x1f14dcu: goto label_1f14dc;
        case 0x1f14e0u: goto label_1f14e0;
        case 0x1f14e4u: goto label_1f14e4;
        case 0x1f14e8u: goto label_1f14e8;
        case 0x1f14ecu: goto label_1f14ec;
        case 0x1f14f0u: goto label_1f14f0;
        case 0x1f14f4u: goto label_1f14f4;
        case 0x1f14f8u: goto label_1f14f8;
        case 0x1f14fcu: goto label_1f14fc;
        case 0x1f1500u: goto label_1f1500;
        case 0x1f1504u: goto label_1f1504;
        case 0x1f1508u: goto label_1f1508;
        case 0x1f150cu: goto label_1f150c;
        case 0x1f1510u: goto label_1f1510;
        case 0x1f1514u: goto label_1f1514;
        case 0x1f1518u: goto label_1f1518;
        case 0x1f151cu: goto label_1f151c;
        case 0x1f1520u: goto label_1f1520;
        case 0x1f1524u: goto label_1f1524;
        case 0x1f1528u: goto label_1f1528;
        case 0x1f152cu: goto label_1f152c;
        case 0x1f1530u: goto label_1f1530;
        case 0x1f1534u: goto label_1f1534;
        case 0x1f1538u: goto label_1f1538;
        case 0x1f153cu: goto label_1f153c;
        case 0x1f1540u: goto label_1f1540;
        case 0x1f1544u: goto label_1f1544;
        case 0x1f1548u: goto label_1f1548;
        case 0x1f154cu: goto label_1f154c;
        case 0x1f1550u: goto label_1f1550;
        case 0x1f1554u: goto label_1f1554;
        case 0x1f1558u: goto label_1f1558;
        case 0x1f155cu: goto label_1f155c;
        case 0x1f1560u: goto label_1f1560;
        case 0x1f1564u: goto label_1f1564;
        case 0x1f1568u: goto label_1f1568;
        case 0x1f156cu: goto label_1f156c;
        case 0x1f1570u: goto label_1f1570;
        case 0x1f1574u: goto label_1f1574;
        case 0x1f1578u: goto label_1f1578;
        case 0x1f157cu: goto label_1f157c;
        case 0x1f1580u: goto label_1f1580;
        case 0x1f1584u: goto label_1f1584;
        case 0x1f1588u: goto label_1f1588;
        case 0x1f158cu: goto label_1f158c;
        case 0x1f1590u: goto label_1f1590;
        case 0x1f1594u: goto label_1f1594;
        case 0x1f1598u: goto label_1f1598;
        case 0x1f159cu: goto label_1f159c;
        case 0x1f15a0u: goto label_1f15a0;
        case 0x1f15a4u: goto label_1f15a4;
        case 0x1f15a8u: goto label_1f15a8;
        case 0x1f15acu: goto label_1f15ac;
        case 0x1f15b0u: goto label_1f15b0;
        case 0x1f15b4u: goto label_1f15b4;
        case 0x1f15b8u: goto label_1f15b8;
        case 0x1f15bcu: goto label_1f15bc;
        case 0x1f15c0u: goto label_1f15c0;
        case 0x1f15c4u: goto label_1f15c4;
        case 0x1f15c8u: goto label_1f15c8;
        case 0x1f15ccu: goto label_1f15cc;
        case 0x1f15d0u: goto label_1f15d0;
        case 0x1f15d4u: goto label_1f15d4;
        case 0x1f15d8u: goto label_1f15d8;
        case 0x1f15dcu: goto label_1f15dc;
        case 0x1f15e0u: goto label_1f15e0;
        case 0x1f15e4u: goto label_1f15e4;
        case 0x1f15e8u: goto label_1f15e8;
        case 0x1f15ecu: goto label_1f15ec;
        case 0x1f15f0u: goto label_1f15f0;
        case 0x1f15f4u: goto label_1f15f4;
        case 0x1f15f8u: goto label_1f15f8;
        case 0x1f15fcu: goto label_1f15fc;
        case 0x1f1600u: goto label_1f1600;
        case 0x1f1604u: goto label_1f1604;
        case 0x1f1608u: goto label_1f1608;
        case 0x1f160cu: goto label_1f160c;
        case 0x1f1610u: goto label_1f1610;
        case 0x1f1614u: goto label_1f1614;
        case 0x1f1618u: goto label_1f1618;
        case 0x1f161cu: goto label_1f161c;
        case 0x1f1620u: goto label_1f1620;
        case 0x1f1624u: goto label_1f1624;
        case 0x1f1628u: goto label_1f1628;
        case 0x1f162cu: goto label_1f162c;
        case 0x1f1630u: goto label_1f1630;
        case 0x1f1634u: goto label_1f1634;
        case 0x1f1638u: goto label_1f1638;
        case 0x1f163cu: goto label_1f163c;
        case 0x1f1640u: goto label_1f1640;
        case 0x1f1644u: goto label_1f1644;
        case 0x1f1648u: goto label_1f1648;
        case 0x1f164cu: goto label_1f164c;
        case 0x1f1650u: goto label_1f1650;
        case 0x1f1654u: goto label_1f1654;
        case 0x1f1658u: goto label_1f1658;
        case 0x1f165cu: goto label_1f165c;
        case 0x1f1660u: goto label_1f1660;
        case 0x1f1664u: goto label_1f1664;
        case 0x1f1668u: goto label_1f1668;
        case 0x1f166cu: goto label_1f166c;
        case 0x1f1670u: goto label_1f1670;
        case 0x1f1674u: goto label_1f1674;
        case 0x1f1678u: goto label_1f1678;
        case 0x1f167cu: goto label_1f167c;
        case 0x1f1680u: goto label_1f1680;
        case 0x1f1684u: goto label_1f1684;
        case 0x1f1688u: goto label_1f1688;
        case 0x1f168cu: goto label_1f168c;
        case 0x1f1690u: goto label_1f1690;
        case 0x1f1694u: goto label_1f1694;
        case 0x1f1698u: goto label_1f1698;
        case 0x1f169cu: goto label_1f169c;
        case 0x1f16a0u: goto label_1f16a0;
        case 0x1f16a4u: goto label_1f16a4;
        case 0x1f16a8u: goto label_1f16a8;
        case 0x1f16acu: goto label_1f16ac;
        case 0x1f16b0u: goto label_1f16b0;
        case 0x1f16b4u: goto label_1f16b4;
        case 0x1f16b8u: goto label_1f16b8;
        case 0x1f16bcu: goto label_1f16bc;
        case 0x1f16c0u: goto label_1f16c0;
        case 0x1f16c4u: goto label_1f16c4;
        case 0x1f16c8u: goto label_1f16c8;
        case 0x1f16ccu: goto label_1f16cc;
        case 0x1f16d0u: goto label_1f16d0;
        case 0x1f16d4u: goto label_1f16d4;
        case 0x1f16d8u: goto label_1f16d8;
        case 0x1f16dcu: goto label_1f16dc;
        case 0x1f16e0u: goto label_1f16e0;
        case 0x1f16e4u: goto label_1f16e4;
        case 0x1f16e8u: goto label_1f16e8;
        case 0x1f16ecu: goto label_1f16ec;
        case 0x1f16f0u: goto label_1f16f0;
        case 0x1f16f4u: goto label_1f16f4;
        case 0x1f16f8u: goto label_1f16f8;
        case 0x1f16fcu: goto label_1f16fc;
        case 0x1f1700u: goto label_1f1700;
        case 0x1f1704u: goto label_1f1704;
        case 0x1f1708u: goto label_1f1708;
        case 0x1f170cu: goto label_1f170c;
        case 0x1f1710u: goto label_1f1710;
        case 0x1f1714u: goto label_1f1714;
        case 0x1f1718u: goto label_1f1718;
        case 0x1f171cu: goto label_1f171c;
        case 0x1f1720u: goto label_1f1720;
        case 0x1f1724u: goto label_1f1724;
        case 0x1f1728u: goto label_1f1728;
        case 0x1f172cu: goto label_1f172c;
        case 0x1f1730u: goto label_1f1730;
        case 0x1f1734u: goto label_1f1734;
        case 0x1f1738u: goto label_1f1738;
        case 0x1f173cu: goto label_1f173c;
        case 0x1f1740u: goto label_1f1740;
        case 0x1f1744u: goto label_1f1744;
        default: break;
    }

    ctx->pc = 0x1f1000u;

label_1f1000:
    // 0x1f1000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f1004:
    // 0x1f1004: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f1004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f1008:
    // 0x1f1008: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f100c:
    // 0x1f100c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f1010:
    // 0x1f1010: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f1010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f1014:
    // 0x1f1014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f1018:
    // 0x1f1018: 0xc071fa0  jal         func_1C7E80
label_1f101c:
    if (ctx->pc == 0x1F101Cu) {
        ctx->pc = 0x1F101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1018u;
        // 0x1f101c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1020u;
        goto label_1f1020;
    }
    ctx->pc = 0x1F1018u;
    SET_GPR_U32(ctx, 31, 0x1F1020u);
    ctx->pc = 0x1F101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1018u;
    // 0x1f101c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E80u, 0x1F1018u, 0x1F1020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1020u;
label_1f1020:
    // 0x1f1020: 0xc0579e4  jal         func_15E790
label_1f1024:
    if (ctx->pc == 0x1F1024u) {
        ctx->pc = 0x1F1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1020u;
        // 0x1f1024: 0x3c110055  lui         $s1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1028u;
        goto label_1f1028;
    }
    ctx->pc = 0x1F1020u;
    SET_GPR_U32(ctx, 31, 0x1F1028u);
    ctx->pc = 0x1F1024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1020u;
    // 0x1f1024: 0x3c110055  lui         $s1, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E790u, 0x1F1020u, 0x1F1028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1028u;
label_1f1028:
    // 0x1f1028: 0xc07f86a  jal         func_1FE1A8
label_1f102c:
    if (ctx->pc == 0x1F102Cu) {
        ctx->pc = 0x1F102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1028u;
        // 0x1f102c: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1030u;
        goto label_1f1030;
    }
    ctx->pc = 0x1F1028u;
    SET_GPR_U32(ctx, 31, 0x1F1030u);
    ctx->pc = 0x1F102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1028u;
    // 0x1f102c: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1F1028u, 0x1F1030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1030u;
label_1f1030:
    // 0x1f1030: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1f1034:
    if (ctx->pc == 0x1F1034u) {
        ctx->pc = 0x1F1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1030u;
        // 0x1f1034: 0x8e4b27e4  lw          $t3, 0x27E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1038u;
        goto label_1f1038;
    }
    ctx->pc = 0x1F1030u;
    {
        const bool branch_taken_0x1f1030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1030u;
        // 0x1f1034: 0x8e4b27e4  lw          $t3, 0x27E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1030) {
            ctx->pc = 0x1F1088u;
            goto label_1f1088;
        }
    }
    ctx->pc = 0x1F1038u;
label_1f1038:
    // 0x1f1038: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1f1038u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f103c:
    // 0x1f103c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f103cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1040:
    // 0x1f1040: 0x24a571a8  addiu       $a1, $a1, 0x71A8
    ctx->pc = 0x1f1040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29096));
label_1f1044:
    // 0x1f1044: 0x26287170  addiu       $t0, $s1, 0x7170
    ctx->pc = 0x1f1044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 29040));
label_1f1048:
    // 0x1f1048: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f1048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f104c:
    // 0x1f104c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1f104cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1f1050:
    // 0x1f1050: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f1050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f1054:
    // 0x1f1054: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x1f1054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1f1058:
    // 0x1f1058: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f1058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f105c:
    // 0x1f105c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f105cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1060:
    // 0x1f1060: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1064:
    // 0x1f1064: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1064u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1068:
    // 0x1f1068: 0x40f809  jalr        $v0
label_1f106c:
    if (ctx->pc == 0x1F106Cu) {
        ctx->pc = 0x1F106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1068u;
        // 0x1f106c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1070u;
        goto label_1f1070;
    }
    ctx->pc = 0x1F1068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1070u);
        ctx->pc = 0x1F106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1068u;
        // 0x1f106c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1068u, 0x1F1070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1070u;
label_1f1070:
    // 0x1f1070: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f1074:
    if (ctx->pc == 0x1F1074u) {
        ctx->pc = 0x1F1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1070u;
        // 0x1f1074: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1078u;
        goto label_1f1078;
    }
    ctx->pc = 0x1F1070u;
    {
        const bool branch_taken_0x1f1070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1070) {
            ctx->pc = 0x1F1074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1070u;
            // 0x1f1074: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1084u;
            goto label_1f1084;
        }
    }
    ctx->pc = 0x1F1078u;
label_1f1078:
    // 0x1f1078: 0xc07ec18  jal         func_1FB060
label_1f107c:
    if (ctx->pc == 0x1F107Cu) {
        ctx->pc = 0x1F107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1078u;
        // 0x1f107c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1080u;
        goto label_1f1080;
    }
    ctx->pc = 0x1F1078u;
    SET_GPR_U32(ctx, 31, 0x1F1080u);
    ctx->pc = 0x1F107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1078u;
    // 0x1f107c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB060u, 0x1F1078u, 0x1F1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1080u;
label_1f1080:
    // 0x1f1080: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1f1080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1f1084:
    // 0x1f1084: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x1f1084u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f1088:
    // 0x1f1088: 0x26317170  addiu       $s1, $s1, 0x7170
    ctx->pc = 0x1f1088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29040));
label_1f108c:
    // 0x1f108c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f108cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1090:
    // 0x1f1090: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1f1090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1f1094:
    // 0x1f1094: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f1094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1f1098:
    // 0x1f1098: 0x24a571b0  addiu       $a1, $a1, 0x71B0
    ctx->pc = 0x1f1098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29104));
label_1f109c:
    // 0x1f109c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f109cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f10a0:
    // 0x1f10a0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f10a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f10a4:
    // 0x1f10a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f10a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f10a8:
    // 0x1f10a8: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0x1f10a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1f10ac:
    // 0x1f10ac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f10acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f10b0:
    // 0x1f10b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f10b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f10b4:
    // 0x1f10b4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1f10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1f10b8:
    // 0x1f10b8: 0x40f809  jalr        $v0
label_1f10bc:
    if (ctx->pc == 0x1F10BCu) {
        ctx->pc = 0x1F10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10B8u;
        // 0x1f10bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F10C0u;
        goto label_1f10c0;
    }
    ctx->pc = 0x1F10B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F10C0u);
        ctx->pc = 0x1F10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10B8u;
        // 0x1f10bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F10B8u, 0x1F10C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F10C0u;
label_1f10c0:
    // 0x1f10c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f10c4:
    if (ctx->pc == 0x1F10C4u) {
        ctx->pc = 0x1F10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10C0u;
        // 0x1f10c4: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F10C8u;
        goto label_1f10c8;
    }
    ctx->pc = 0x1F10C0u;
    {
        const bool branch_taken_0x1f10c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f10c0) {
            ctx->pc = 0x1F10C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F10C0u;
            // 0x1f10c4: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F10D4u;
            goto label_1f10d4;
        }
    }
    ctx->pc = 0x1F10C8u;
label_1f10c8:
    // 0x1f10c8: 0xc07ef20  jal         func_1FBC80
label_1f10cc:
    if (ctx->pc == 0x1F10CCu) {
        ctx->pc = 0x1F10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10C8u;
        // 0x1f10cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F10D0u;
        goto label_1f10d0;
    }
    ctx->pc = 0x1F10C8u;
    SET_GPR_U32(ctx, 31, 0x1F10D0u);
    ctx->pc = 0x1F10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10C8u;
    // 0x1f10cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC80u, 0x1F10C8u, 0x1F10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10D0u;
label_1f10d0:
    // 0x1f10d0: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x1f10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_1f10d4:
    // 0x1f10d4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f10d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f10d8:
    // 0x1f10d8: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1f10d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f10dc:
    // 0x1f10dc: 0x24a571c8  addiu       $a1, $a1, 0x71C8
    ctx->pc = 0x1f10dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29128));
label_1f10e0:
    // 0x1f10e0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f10e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f10e4:
    // 0x1f10e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f10e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f10e8:
    // 0x1f10e8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f10ec:
    // 0x1f10ec: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f10ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f10f0:
    // 0x1f10f0: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x1f10f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1f10f4:
    // 0x1f10f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f10f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f10f8:
    // 0x1f10f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f10fc:
    // 0x1f10fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f10fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1100:
    // 0x1f1100: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f1100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1104:
    // 0x1f1104: 0x40f809  jalr        $v0
label_1f1108:
    if (ctx->pc == 0x1F1108u) {
        ctx->pc = 0x1F1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1104u;
        // 0x1f1108: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F110Cu;
        goto label_1f110c;
    }
    ctx->pc = 0x1F1104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F110Cu);
        ctx->pc = 0x1F1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1104u;
        // 0x1f1108: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1104u, 0x1F110Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F110Cu;
label_1f110c:
    // 0x1f110c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f1110:
    if (ctx->pc == 0x1F1110u) {
        ctx->pc = 0x1F1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F110Cu;
        // 0x1f1110: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1114u;
        goto label_1f1114;
    }
    ctx->pc = 0x1F110Cu;
    {
        const bool branch_taken_0x1f110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f110c) {
            ctx->pc = 0x1F1110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F110Cu;
            // 0x1f1110: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1120u;
            goto label_1f1120;
        }
    }
    ctx->pc = 0x1F1114u;
label_1f1114:
    // 0x1f1114: 0xc07f0e0  jal         func_1FC380
label_1f1118:
    if (ctx->pc == 0x1F1118u) {
        ctx->pc = 0x1F1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1114u;
        // 0x1f1118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F111Cu;
        goto label_1f111c;
    }
    ctx->pc = 0x1F1114u;
    SET_GPR_U32(ctx, 31, 0x1F111Cu);
    ctx->pc = 0x1F1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1114u;
    // 0x1f1118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC380u, 0x1F1114u, 0x1F111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F111Cu;
label_1f111c:
    // 0x1f111c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x1f111cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_1f1120:
    // 0x1f1120: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f1120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1124:
    // 0x1f1124: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1f1124u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f1128:
    // 0x1f1128: 0x24a571d8  addiu       $a1, $a1, 0x71D8
    ctx->pc = 0x1f1128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29144));
label_1f112c:
    // 0x1f112c: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x1f112cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1f1130:
    // 0x1f1130: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f1130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f1134:
    // 0x1f1134: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f1134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f1138:
    // 0x1f1138: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f1138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f113c:
    // 0x1f113c: 0x24090033  addiu       $t1, $zero, 0x33
    ctx->pc = 0x1f113cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1f1140:
    // 0x1f1140: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1144:
    // 0x1f1144: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f1144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f1148:
    // 0x1f1148: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1148u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f114c:
    // 0x1f114c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1150:
    // 0x1f1150: 0x40f809  jalr        $v0
label_1f1154:
    if (ctx->pc == 0x1F1154u) {
        ctx->pc = 0x1F1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1150u;
        // 0x1f1154: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1158u;
        goto label_1f1158;
    }
    ctx->pc = 0x1F1150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1158u);
        ctx->pc = 0x1F1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1150u;
        // 0x1f1154: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1150u, 0x1F1158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1158u;
label_1f1158:
    // 0x1f1158: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f115c:
    if (ctx->pc == 0x1F115Cu) {
        ctx->pc = 0x1F115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1158u;
        // 0x1f115c: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1160u;
        goto label_1f1160;
    }
    ctx->pc = 0x1F1158u;
    {
        const bool branch_taken_0x1f1158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1158) {
            ctx->pc = 0x1F115Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1158u;
            // 0x1f115c: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F116Cu;
            goto label_1f116c;
        }
    }
    ctx->pc = 0x1F1160u;
label_1f1160:
    // 0x1f1160: 0xc07dfb8  jal         func_1F7EE0
label_1f1164:
    if (ctx->pc == 0x1F1164u) {
        ctx->pc = 0x1F1164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1160u;
        // 0x1f1164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1168u;
        goto label_1f1168;
    }
    ctx->pc = 0x1F1160u;
    SET_GPR_U32(ctx, 31, 0x1F1168u);
    ctx->pc = 0x1F1164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1160u;
    // 0x1f1164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EE0u, 0x1F1160u, 0x1F1168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1168u;
label_1f1168:
    // 0x1f1168: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1f1168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_1f116c:
    // 0x1f116c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f116cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1170:
    // 0x1f1170: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1f1170u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f1174:
    // 0x1f1174: 0x24a571e8  addiu       $a1, $a1, 0x71E8
    ctx->pc = 0x1f1174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29160));
label_1f1178:
    // 0x1f1178: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1f1178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1f117c:
    // 0x1f117c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f117cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f1180:
    // 0x1f1180: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f1180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f1184:
    // 0x1f1184: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f1184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1188:
    // 0x1f1188: 0x24090034  addiu       $t1, $zero, 0x34
    ctx->pc = 0x1f1188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1f118c:
    // 0x1f118c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f118cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1190:
    // 0x1f1190: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f1190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f1194:
    // 0x1f1194: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1194u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1198:
    // 0x1f1198: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f119c:
    // 0x1f119c: 0x40f809  jalr        $v0
label_1f11a0:
    if (ctx->pc == 0x1F11A0u) {
        ctx->pc = 0x1F11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F119Cu;
        // 0x1f11a0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F11A4u;
        goto label_1f11a4;
    }
    ctx->pc = 0x1F119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F11A4u);
        ctx->pc = 0x1F11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F119Cu;
        // 0x1f11a0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F119Cu, 0x1F11A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F11A4u;
label_1f11a4:
    // 0x1f11a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f11a8:
    if (ctx->pc == 0x1F11A8u) {
        ctx->pc = 0x1F11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11A4u;
        // 0x1f11a8: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F11ACu;
        goto label_1f11ac;
    }
    ctx->pc = 0x1F11A4u;
    {
        const bool branch_taken_0x1f11a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f11a4) {
            ctx->pc = 0x1F11A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F11A4u;
            // 0x1f11a8: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F11B8u;
            goto label_1f11b8;
        }
    }
    ctx->pc = 0x1F11ACu;
label_1f11ac:
    // 0x1f11ac: 0xc07a9fa  jal         func_1EA7E8
label_1f11b0:
    if (ctx->pc == 0x1F11B0u) {
        ctx->pc = 0x1F11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11ACu;
        // 0x1f11b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F11B4u;
        goto label_1f11b4;
    }
    ctx->pc = 0x1F11ACu;
    SET_GPR_U32(ctx, 31, 0x1F11B4u);
    ctx->pc = 0x1F11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11ACu;
    // 0x1f11b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA7E8u, 0x1F11ACu, 0x1F11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11B4u;
label_1f11b4:
    // 0x1f11b4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x1f11b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_1f11b8:
    // 0x1f11b8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f11b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f11bc:
    // 0x1f11bc: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1f11bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f11c0:
    // 0x1f11c0: 0x24a571f8  addiu       $a1, $a1, 0x71F8
    ctx->pc = 0x1f11c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29176));
label_1f11c4:
    // 0x1f11c4: 0x240601f0  addiu       $a2, $zero, 0x1F0
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1f11c8:
    // 0x1f11c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f11c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f11cc:
    // 0x1f11cc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f11d0:
    // 0x1f11d0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f11d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f11d4:
    // 0x1f11d4: 0x24090035  addiu       $t1, $zero, 0x35
    ctx->pc = 0x1f11d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1f11d8:
    // 0x1f11d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f11d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f11dc:
    // 0x1f11dc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f11dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f11e0:
    // 0x1f11e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f11e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f11e4:
    // 0x1f11e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f11e8:
    // 0x1f11e8: 0x40f809  jalr        $v0
label_1f11ec:
    if (ctx->pc == 0x1F11ECu) {
        ctx->pc = 0x1F11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11E8u;
        // 0x1f11ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F11F0u;
        goto label_1f11f0;
    }
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F11F0u);
        ctx->pc = 0x1F11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11E8u;
        // 0x1f11ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F11E8u, 0x1F11F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F11F0u;
label_1f11f0:
    // 0x1f11f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f11f4:
    if (ctx->pc == 0x1F11F4u) {
        ctx->pc = 0x1F11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11F0u;
        // 0x1f11f4: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F11F8u;
        goto label_1f11f8;
    }
    ctx->pc = 0x1F11F0u;
    {
        const bool branch_taken_0x1f11f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f11f0) {
            ctx->pc = 0x1F11F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F11F0u;
            // 0x1f11f4: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1204u;
            goto label_1f1204;
        }
    }
    ctx->pc = 0x1F11F8u;
label_1f11f8:
    // 0x1f11f8: 0xc07b08e  jal         func_1EC238
label_1f11fc:
    if (ctx->pc == 0x1F11FCu) {
        ctx->pc = 0x1F11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11F8u;
        // 0x1f11fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1200u;
        goto label_1f1200;
    }
    ctx->pc = 0x1F11F8u;
    SET_GPR_U32(ctx, 31, 0x1F1200u);
    ctx->pc = 0x1F11FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11F8u;
    // 0x1f11fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC238u, 0x1F11F8u, 0x1F1200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1200u;
label_1f1200:
    // 0x1f1200: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1f1200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_1f1204:
    // 0x1f1204: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f1204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1208:
    // 0x1f1208: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1f1208u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f120c:
    // 0x1f120c: 0x24a57208  addiu       $a1, $a1, 0x7208
    ctx->pc = 0x1f120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29192));
label_1f1210:
    // 0x1f1210: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1f1210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1f1214:
    // 0x1f1214: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f1214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f1218:
    // 0x1f1218: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f1218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f121c:
    // 0x1f121c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f121cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1220:
    // 0x1f1220: 0x24090037  addiu       $t1, $zero, 0x37
    ctx->pc = 0x1f1220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1f1224:
    // 0x1f1224: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1224u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1228:
    // 0x1f1228: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f1228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f122c:
    // 0x1f122c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f122cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1230:
    // 0x1f1230: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1234:
    // 0x1f1234: 0x40f809  jalr        $v0
label_1f1238:
    if (ctx->pc == 0x1F1238u) {
        ctx->pc = 0x1F1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1234u;
        // 0x1f1238: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F123Cu;
        goto label_1f123c;
    }
    ctx->pc = 0x1F1234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F123Cu);
        ctx->pc = 0x1F1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1234u;
        // 0x1f1238: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1234u, 0x1F123Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F123Cu;
label_1f123c:
    // 0x1f123c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f1240:
    if (ctx->pc == 0x1F1240u) {
        ctx->pc = 0x1F1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F123Cu;
        // 0x1f1240: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1244u;
        goto label_1f1244;
    }
    ctx->pc = 0x1F123Cu;
    {
        const bool branch_taken_0x1f123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f123c) {
            ctx->pc = 0x1F1240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F123Cu;
            // 0x1f1240: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1250u;
            goto label_1f1250;
        }
    }
    ctx->pc = 0x1F1244u;
label_1f1244:
    // 0x1f1244: 0xc07c9f4  jal         func_1F27D0
label_1f1248:
    if (ctx->pc == 0x1F1248u) {
        ctx->pc = 0x1F1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1244u;
        // 0x1f1248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F124Cu;
        goto label_1f124c;
    }
    ctx->pc = 0x1F1244u;
    SET_GPR_U32(ctx, 31, 0x1F124Cu);
    ctx->pc = 0x1F1248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1244u;
    // 0x1f1248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F27D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F27D0u, 0x1F1244u, 0x1F124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F124Cu;
label_1f124c:
    // 0x1f124c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1f124cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1f1250:
    // 0x1f1250: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f1250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1254:
    // 0x1f1254: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1f1254u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f1258:
    // 0x1f1258: 0x24a57218  addiu       $a1, $a1, 0x7218
    ctx->pc = 0x1f1258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29208));
label_1f125c:
    // 0x1f125c: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1f125cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1f1260:
    // 0x1f1260: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f1260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f1264:
    // 0x1f1264: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f1264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f1268:
    // 0x1f1268: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f1268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f126c:
    // 0x1f126c: 0x24090038  addiu       $t1, $zero, 0x38
    ctx->pc = 0x1f126cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1f1270:
    // 0x1f1270: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1274:
    // 0x1f1274: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f1274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f1278:
    // 0x1f1278: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1278u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f127c:
    // 0x1f127c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1280:
    // 0x1f1280: 0x40f809  jalr        $v0
label_1f1284:
    if (ctx->pc == 0x1F1284u) {
        ctx->pc = 0x1F1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1280u;
        // 0x1f1284: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1288u;
        goto label_1f1288;
    }
    ctx->pc = 0x1F1280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1288u);
        ctx->pc = 0x1F1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1280u;
        // 0x1f1284: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1280u, 0x1F1288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1288u;
label_1f1288:
    // 0x1f1288: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f128c:
    if (ctx->pc == 0x1F128Cu) {
        ctx->pc = 0x1F128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1288u;
        // 0x1f128c: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1290u;
        goto label_1f1290;
    }
    ctx->pc = 0x1F1288u;
    {
        const bool branch_taken_0x1f1288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1288) {
            ctx->pc = 0x1F128Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1288u;
            // 0x1f128c: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F129Cu;
            goto label_1f129c;
        }
    }
    ctx->pc = 0x1F1290u;
label_1f1290:
    // 0x1f1290: 0xc07ccee  jal         func_1F33B8
label_1f1294:
    if (ctx->pc == 0x1F1294u) {
        ctx->pc = 0x1F1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1290u;
        // 0x1f1294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1298u;
        goto label_1f1298;
    }
    ctx->pc = 0x1F1290u;
    SET_GPR_U32(ctx, 31, 0x1F1298u);
    ctx->pc = 0x1F1294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1290u;
    // 0x1f1294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33B8u, 0x1F1290u, 0x1F1298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1298u;
label_1f1298:
    // 0x1f1298: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1f1298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_1f129c:
    // 0x1f129c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f129cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f12a0:
    // 0x1f12a0: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1f12a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f12a4:
    // 0x1f12a4: 0x24a57228  addiu       $a1, $a1, 0x7228
    ctx->pc = 0x1f12a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29224));
label_1f12a8:
    // 0x1f12a8: 0x24060170  addiu       $a2, $zero, 0x170
    ctx->pc = 0x1f12a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_1f12ac:
    // 0x1f12ac: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f12acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f12b0:
    // 0x1f12b0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f12b4:
    // 0x1f12b4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f12b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f12b8:
    // 0x1f12b8: 0x24090039  addiu       $t1, $zero, 0x39
    ctx->pc = 0x1f12b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1f12bc:
    // 0x1f12bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f12bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f12c0:
    // 0x1f12c0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f12c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f12c4:
    // 0x1f12c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f12c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f12c8:
    // 0x1f12c8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f12cc:
    // 0x1f12cc: 0x40f809  jalr        $v0
label_1f12d0:
    if (ctx->pc == 0x1F12D0u) {
        ctx->pc = 0x1F12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12CCu;
        // 0x1f12d0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12D4u;
        goto label_1f12d4;
    }
    ctx->pc = 0x1F12CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F12D4u);
        ctx->pc = 0x1F12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12CCu;
        // 0x1f12d0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F12CCu, 0x1F12D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F12D4u;
label_1f12d4:
    // 0x1f12d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f12d8:
    if (ctx->pc == 0x1F12D8u) {
        ctx->pc = 0x1F12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12D4u;
        // 0x1f12d8: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12DCu;
        goto label_1f12dc;
    }
    ctx->pc = 0x1F12D4u;
    {
        const bool branch_taken_0x1f12d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f12d4) {
            ctx->pc = 0x1F12D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F12D4u;
            // 0x1f12d8: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F12E8u;
            goto label_1f12e8;
        }
    }
    ctx->pc = 0x1F12DCu;
label_1f12dc:
    // 0x1f12dc: 0xc07d6fc  jal         func_1F5BF0
label_1f12e0:
    if (ctx->pc == 0x1F12E0u) {
        ctx->pc = 0x1F12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12DCu;
        // 0x1f12e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12E4u;
        goto label_1f12e4;
    }
    ctx->pc = 0x1F12DCu;
    SET_GPR_U32(ctx, 31, 0x1F12E4u);
    ctx->pc = 0x1F12E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12DCu;
    // 0x1f12e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5BF0u, 0x1F12DCu, 0x1F12E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12E4u;
label_1f12e4:
    // 0x1f12e4: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1f12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_1f12e8:
    // 0x1f12e8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f12e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f12ec:
    // 0x1f12ec: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1f12ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1f12f0:
    // 0x1f12f0: 0x24a57238  addiu       $a1, $a1, 0x7238
    ctx->pc = 0x1f12f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29240));
label_1f12f4:
    // 0x1f12f4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f12f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f12f8:
    // 0x1f12f8: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1f12f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1f12fc:
    // 0x1f12fc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f1300:
    // 0x1f1300: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f1300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f1304:
    // 0x1f1304: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x1f1304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1f1308:
    // 0x1f1308: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f130c:
    // 0x1f130c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f130cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f1310:
    // 0x1f1310: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1310u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1314:
    // 0x1f1314: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1318:
    // 0x1f1318: 0x40f809  jalr        $v0
label_1f131c:
    if (ctx->pc == 0x1F131Cu) {
        ctx->pc = 0x1F131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1318u;
        // 0x1f131c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1320u;
        goto label_1f1320;
    }
    ctx->pc = 0x1F1318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1320u);
        ctx->pc = 0x1F131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1318u;
        // 0x1f131c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1318u, 0x1F1320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1320u;
label_1f1320:
    // 0x1f1320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f1324:
    if (ctx->pc == 0x1F1324u) {
        ctx->pc = 0x1F1328u;
        goto label_1f1328;
    }
    ctx->pc = 0x1F1320u;
    {
        const bool branch_taken_0x1f1320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1320) {
            ctx->pc = 0x1F1330u;
            goto label_1f1330;
        }
    }
    ctx->pc = 0x1F1328u;
label_1f1328:
    // 0x1f1328: 0xc07fa0e  jal         func_1FE838
label_1f132c:
    if (ctx->pc == 0x1F132Cu) {
        ctx->pc = 0x1F132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1328u;
        // 0x1f132c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1330u;
        goto label_1f1330;
    }
    ctx->pc = 0x1F1328u;
    SET_GPR_U32(ctx, 31, 0x1F1330u);
    ctx->pc = 0x1F132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1328u;
    // 0x1f132c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE838u, 0x1F1328u, 0x1F1330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1330u;
label_1f1330:
    // 0x1f1330: 0xc07f86a  jal         func_1FE1A8
label_1f1334:
    if (ctx->pc == 0x1F1334u) {
        ctx->pc = 0x1F1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1330u;
        // 0x1f1334: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1338u;
        goto label_1f1338;
    }
    ctx->pc = 0x1F1330u;
    SET_GPR_U32(ctx, 31, 0x1F1338u);
    ctx->pc = 0x1F1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1330u;
    // 0x1f1334: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1F1330u, 0x1F1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1338u;
label_1f1338:
    // 0x1f1338: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1f133c:
    if (ctx->pc == 0x1F133Cu) {
        ctx->pc = 0x1F133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1338u;
        // 0x1f133c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1340u;
        goto label_1f1340;
    }
    ctx->pc = 0x1F1338u;
    {
        const bool branch_taken_0x1f1338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1338u;
        // 0x1f133c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1338) {
            ctx->pc = 0x1F13D0u;
            goto label_1f13d0;
        }
    }
    ctx->pc = 0x1F1340u;
label_1f1340:
    // 0x1f1340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1344:
    // 0x1f1344: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1f1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1f1348:
    // 0x1f1348: 0x8e080088  lw          $t0, 0x88($s0)
    ctx->pc = 0x1f1348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1f134c:
    // 0x1f134c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f134cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1350:
    // 0x1f1350: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1354:
    // 0x1f1354: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1354u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1358:
    // 0x1f1358: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f135c:
    // 0x1f135c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f135cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1360:
    // 0x1f1360: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1360u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1364:
    // 0x1f1364: 0x120f809  jalr        $t1
label_1f1368:
    if (ctx->pc == 0x1F1368u) {
        ctx->pc = 0x1F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1364u;
        // 0x1f1368: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F136Cu;
        goto label_1f136c;
    }
    ctx->pc = 0x1F1364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F136Cu);
        ctx->pc = 0x1F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1364u;
        // 0x1f1368: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1364u, 0x1F136Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F136Cu;
label_1f136c:
    // 0x1f136c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1370:
    // 0x1f1370: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1374:
    // 0x1f1374: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1f1374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1f1378:
    // 0x1f1378: 0x8e080094  lw          $t0, 0x94($s0)
    ctx->pc = 0x1f1378u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f137c:
    // 0x1f137c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f137cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1380:
    // 0x1f1380: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1384:
    // 0x1f1384: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1384u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1388:
    // 0x1f1388: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f138c:
    // 0x1f138c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f138cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1390:
    // 0x1f1390: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1390u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1394:
    // 0x1f1394: 0x120f809  jalr        $t1
label_1f1398:
    if (ctx->pc == 0x1F1398u) {
        ctx->pc = 0x1F1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1394u;
        // 0x1f1398: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F139Cu;
        goto label_1f139c;
    }
    ctx->pc = 0x1F1394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F139Cu);
        ctx->pc = 0x1F1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1394u;
        // 0x1f1398: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1394u, 0x1F139Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F139Cu;
label_1f139c:
    // 0x1f139c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f13a0:
    // 0x1f13a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f13a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f13a4:
    // 0x1f13a4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1f13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1f13a8:
    // 0x1f13a8: 0x8e08009c  lw          $t0, 0x9C($s0)
    ctx->pc = 0x1f13a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f13ac:
    // 0x1f13ac: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f13acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f13b0:
    // 0x1f13b0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f13b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f13b4:
    // 0x1f13b4: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f13b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f13b8:
    // 0x1f13b8: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f13b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f13bc:
    // 0x1f13bc: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f13bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f13c0:
    // 0x1f13c0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f13c0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f13c4:
    // 0x1f13c4: 0x120f809  jalr        $t1
label_1f13c8:
    if (ctx->pc == 0x1F13C8u) {
        ctx->pc = 0x1F13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13C4u;
        // 0x1f13c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13CCu;
        goto label_1f13cc;
    }
    ctx->pc = 0x1F13C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F13CCu);
        ctx->pc = 0x1F13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13C4u;
        // 0x1f13c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F13C4u, 0x1F13CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F13CCu;
label_1f13cc:
    // 0x1f13cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f13d0:
    // 0x1f13d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f13d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f13d4:
    // 0x1f13d4: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1f13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1f13d8:
    // 0x1f13d8: 0x8e080080  lw          $t0, 0x80($s0)
    ctx->pc = 0x1f13d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1f13dc:
    // 0x1f13dc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f13e0:
    // 0x1f13e0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f13e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f13e4:
    // 0x1f13e4: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f13e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f13e8:
    // 0x1f13e8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f13e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f13ec:
    // 0x1f13ec: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f13ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f13f0:
    // 0x1f13f0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f13f0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f13f4:
    // 0x1f13f4: 0x120f809  jalr        $t1
label_1f13f8:
    if (ctx->pc == 0x1F13F8u) {
        ctx->pc = 0x1F13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13F4u;
        // 0x1f13f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13FCu;
        goto label_1f13fc;
    }
    ctx->pc = 0x1F13F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F13FCu);
        ctx->pc = 0x1F13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13F4u;
        // 0x1f13f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F13F4u, 0x1F13FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F13FCu;
label_1f13fc:
    // 0x1f13fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1400:
    // 0x1f1400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1404:
    // 0x1f1404: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1f1404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1f1408:
    // 0x1f1408: 0x8e080090  lw          $t0, 0x90($s0)
    ctx->pc = 0x1f1408u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f140c:
    // 0x1f140c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f140cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1410:
    // 0x1f1410: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1414:
    // 0x1f1414: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1414u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1418:
    // 0x1f1418: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f141c:
    // 0x1f141c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f141cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1420:
    // 0x1f1420: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1420u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1424:
    // 0x1f1424: 0x120f809  jalr        $t1
label_1f1428:
    if (ctx->pc == 0x1F1428u) {
        ctx->pc = 0x1F1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1424u;
        // 0x1f1428: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F142Cu;
        goto label_1f142c;
    }
    ctx->pc = 0x1F1424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F142Cu);
        ctx->pc = 0x1F1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1424u;
        // 0x1f1428: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1424u, 0x1F142Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F142Cu;
label_1f142c:
    // 0x1f142c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1430:
    // 0x1f1430: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1434:
    // 0x1f1434: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1f1434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1f1438:
    // 0x1f1438: 0x8e080090  lw          $t0, 0x90($s0)
    ctx->pc = 0x1f1438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f143c:
    // 0x1f143c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1440:
    // 0x1f1440: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1444:
    // 0x1f1444: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1444u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1448:
    // 0x1f1448: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f144c:
    // 0x1f144c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f144cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1450:
    // 0x1f1450: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1450u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1454:
    // 0x1f1454: 0x120f809  jalr        $t1
label_1f1458:
    if (ctx->pc == 0x1F1458u) {
        ctx->pc = 0x1F1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1454u;
        // 0x1f1458: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F145Cu;
        goto label_1f145c;
    }
    ctx->pc = 0x1F1454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F145Cu);
        ctx->pc = 0x1F1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1454u;
        // 0x1f1458: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1454u, 0x1F145Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F145Cu;
label_1f145c:
    // 0x1f145c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1460:
    // 0x1f1460: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f1460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1464:
    // 0x1f1464: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1f1468:
    // 0x1f1468: 0x8e080090  lw          $t0, 0x90($s0)
    ctx->pc = 0x1f1468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f146c:
    // 0x1f146c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f146cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1470:
    // 0x1f1470: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1474:
    // 0x1f1474: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1474u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1478:
    // 0x1f1478: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f147c:
    // 0x1f147c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f147cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1480:
    // 0x1f1480: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1480u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1484:
    // 0x1f1484: 0x120f809  jalr        $t1
label_1f1488:
    if (ctx->pc == 0x1F1488u) {
        ctx->pc = 0x1F1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1484u;
        // 0x1f1488: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F148Cu;
        goto label_1f148c;
    }
    ctx->pc = 0x1F1484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F148Cu);
        ctx->pc = 0x1F1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1484u;
        // 0x1f1488: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1484u, 0x1F148Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F148Cu;
label_1f148c:
    // 0x1f148c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1490:
    // 0x1f1490: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f1490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f1494:
    // 0x1f1494: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1f1494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1f1498:
    // 0x1f1498: 0x8e08008c  lw          $t0, 0x8C($s0)
    ctx->pc = 0x1f1498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1f149c:
    // 0x1f149c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f149cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f14a0:
    // 0x1f14a0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f14a4:
    // 0x1f14a4: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f14a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f14a8:
    // 0x1f14a8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f14a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f14ac:
    // 0x1f14ac: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f14acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f14b0:
    // 0x1f14b0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f14b0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f14b4:
    // 0x1f14b4: 0x120f809  jalr        $t1
label_1f14b8:
    if (ctx->pc == 0x1F14B8u) {
        ctx->pc = 0x1F14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14B4u;
        // 0x1f14b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F14BCu;
        goto label_1f14bc;
    }
    ctx->pc = 0x1F14B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F14BCu);
        ctx->pc = 0x1F14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14B4u;
        // 0x1f14b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F14B4u, 0x1F14BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F14BCu;
label_1f14bc:
    // 0x1f14bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f14c0:
    // 0x1f14c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f14c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f14c4:
    // 0x1f14c4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1f14c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1f14c8:
    // 0x1f14c8: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x1f14c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1f14cc:
    // 0x1f14cc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f14ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f14d0:
    // 0x1f14d0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f14d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f14d4:
    // 0x1f14d4: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f14d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f14d8:
    // 0x1f14d8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f14d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f14dc:
    // 0x1f14dc: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f14dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f14e0:
    // 0x1f14e0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f14e0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f14e4:
    // 0x1f14e4: 0x120f809  jalr        $t1
label_1f14e8:
    if (ctx->pc == 0x1F14E8u) {
        ctx->pc = 0x1F14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14E4u;
        // 0x1f14e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F14ECu;
        goto label_1f14ec;
    }
    ctx->pc = 0x1F14E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F14ECu);
        ctx->pc = 0x1F14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14E4u;
        // 0x1f14e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F14E4u, 0x1F14ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F14ECu;
label_1f14ec:
    // 0x1f14ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f14f0:
    // 0x1f14f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f14f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f14f4:
    // 0x1f14f4: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1f14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1f14f8:
    // 0x1f14f8: 0x8e080090  lw          $t0, 0x90($s0)
    ctx->pc = 0x1f14f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f14fc:
    // 0x1f14fc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f14fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1500:
    // 0x1f1500: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1504:
    // 0x1f1504: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1504u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1508:
    // 0x1f1508: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f150c:
    // 0x1f150c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f150cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1510:
    // 0x1f1510: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1510u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1514:
    // 0x1f1514: 0x120f809  jalr        $t1
label_1f1518:
    if (ctx->pc == 0x1F1518u) {
        ctx->pc = 0x1F1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1514u;
        // 0x1f1518: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F151Cu;
        goto label_1f151c;
    }
    ctx->pc = 0x1F1514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F151Cu);
        ctx->pc = 0x1F1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1514u;
        // 0x1f1518: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1514u, 0x1F151Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F151Cu;
label_1f151c:
    // 0x1f151c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1520:
    // 0x1f1520: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f1520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1524:
    // 0x1f1524: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1f1524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1f1528:
    // 0x1f1528: 0x8e08008c  lw          $t0, 0x8C($s0)
    ctx->pc = 0x1f1528u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1f152c:
    // 0x1f152c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f152cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1530:
    // 0x1f1530: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1534:
    // 0x1f1534: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1534u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1538:
    // 0x1f1538: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f153c:
    // 0x1f153c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f153cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1540:
    // 0x1f1540: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1540u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1544:
    // 0x1f1544: 0x120f809  jalr        $t1
label_1f1548:
    if (ctx->pc == 0x1F1548u) {
        ctx->pc = 0x1F1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1544u;
        // 0x1f1548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F154Cu;
        goto label_1f154c;
    }
    ctx->pc = 0x1F1544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F154Cu);
        ctx->pc = 0x1F1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1544u;
        // 0x1f1548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1544u, 0x1F154Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F154Cu;
label_1f154c:
    // 0x1f154c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1550:
    // 0x1f1550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1554:
    // 0x1f1554: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1f1554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f1558:
    // 0x1f1558: 0x8e08008c  lw          $t0, 0x8C($s0)
    ctx->pc = 0x1f1558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1f155c:
    // 0x1f155c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f155cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1560:
    // 0x1f1560: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1564:
    // 0x1f1564: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1564u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1568:
    // 0x1f1568: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f156c:
    // 0x1f156c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f156cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1570:
    // 0x1f1570: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1570u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1574:
    // 0x1f1574: 0x120f809  jalr        $t1
label_1f1578:
    if (ctx->pc == 0x1F1578u) {
        ctx->pc = 0x1F1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1574u;
        // 0x1f1578: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F157Cu;
        goto label_1f157c;
    }
    ctx->pc = 0x1F1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F157Cu);
        ctx->pc = 0x1F1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1574u;
        // 0x1f1578: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1574u, 0x1F157Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F157Cu;
label_1f157c:
    // 0x1f157c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1580:
    // 0x1f1580: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1584:
    // 0x1f1584: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1f1584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f1588:
    // 0x1f1588: 0x8e080080  lw          $t0, 0x80($s0)
    ctx->pc = 0x1f1588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1f158c:
    // 0x1f158c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f158cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1590:
    // 0x1f1590: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1594:
    // 0x1f1594: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1594u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1598:
    // 0x1f1598: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f159c:
    // 0x1f159c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f159cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f15a0:
    // 0x1f15a0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f15a0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f15a4:
    // 0x1f15a4: 0x120f809  jalr        $t1
label_1f15a8:
    if (ctx->pc == 0x1F15A8u) {
        ctx->pc = 0x1F15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15A4u;
        // 0x1f15a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F15ACu;
        goto label_1f15ac;
    }
    ctx->pc = 0x1F15A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F15ACu);
        ctx->pc = 0x1F15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15A4u;
        // 0x1f15a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F15A4u, 0x1F15ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F15ACu;
label_1f15ac:
    // 0x1f15ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f15acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f15b0:
    // 0x1f15b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f15b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f15b4:
    // 0x1f15b4: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1f15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f15b8:
    // 0x1f15b8: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x1f15b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f15bc:
    // 0x1f15bc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f15bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f15c0:
    // 0x1f15c0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f15c4:
    // 0x1f15c4: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f15c8:
    // 0x1f15c8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f15c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f15cc:
    // 0x1f15cc: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f15ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f15d0:
    // 0x1f15d0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f15d0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f15d4:
    // 0x1f15d4: 0x120f809  jalr        $t1
label_1f15d8:
    if (ctx->pc == 0x1F15D8u) {
        ctx->pc = 0x1F15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15D4u;
        // 0x1f15d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F15DCu;
        goto label_1f15dc;
    }
    ctx->pc = 0x1F15D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F15DCu);
        ctx->pc = 0x1F15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15D4u;
        // 0x1f15d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F15D4u, 0x1F15DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F15DCu;
label_1f15dc:
    // 0x1f15dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f15e0:
    // 0x1f15e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f15e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f15e4:
    // 0x1f15e4: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1f15e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f15e8:
    // 0x1f15e8: 0x8e08009c  lw          $t0, 0x9C($s0)
    ctx->pc = 0x1f15e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f15ec:
    // 0x1f15ec: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f15ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f15f0:
    // 0x1f15f0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f15f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f15f4:
    // 0x1f15f4: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f15f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f15f8:
    // 0x1f15f8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f15f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f15fc:
    // 0x1f15fc: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f15fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1600:
    // 0x1f1600: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1600u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1604:
    // 0x1f1604: 0x120f809  jalr        $t1
label_1f1608:
    if (ctx->pc == 0x1F1608u) {
        ctx->pc = 0x1F1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1604u;
        // 0x1f1608: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F160Cu;
        goto label_1f160c;
    }
    ctx->pc = 0x1F1604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F160Cu);
        ctx->pc = 0x1F1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1604u;
        // 0x1f1608: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1604u, 0x1F160Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F160Cu;
label_1f160c:
    // 0x1f160c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1610:
    // 0x1f1610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1614:
    // 0x1f1614: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1f1614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f1618:
    // 0x1f1618: 0x8e0800a0  lw          $t0, 0xA0($s0)
    ctx->pc = 0x1f1618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f161c:
    // 0x1f161c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f161cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1620:
    // 0x1f1620: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1624:
    // 0x1f1624: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1628:
    // 0x1f1628: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f162c:
    // 0x1f162c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f162cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1630:
    // 0x1f1630: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1630u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1634:
    // 0x1f1634: 0x120f809  jalr        $t1
label_1f1638:
    if (ctx->pc == 0x1F1638u) {
        ctx->pc = 0x1F1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1634u;
        // 0x1f1638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F163Cu;
        goto label_1f163c;
    }
    ctx->pc = 0x1F1634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F163Cu);
        ctx->pc = 0x1F1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1634u;
        // 0x1f1638: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1634u, 0x1F163Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F163Cu;
label_1f163c:
    // 0x1f163c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1640:
    // 0x1f1640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1644:
    // 0x1f1644: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1f1644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f1648:
    // 0x1f1648: 0x8e08007c  lw          $t0, 0x7C($s0)
    ctx->pc = 0x1f1648u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1f164c:
    // 0x1f164c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f164cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1650:
    // 0x1f1650: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1654:
    // 0x1f1654: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1658:
    // 0x1f1658: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f165c:
    // 0x1f165c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f165cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1660:
    // 0x1f1660: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1660u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1664:
    // 0x1f1664: 0x120f809  jalr        $t1
label_1f1668:
    if (ctx->pc == 0x1F1668u) {
        ctx->pc = 0x1F1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1664u;
        // 0x1f1668: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F166Cu;
        goto label_1f166c;
    }
    ctx->pc = 0x1F1664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F166Cu);
        ctx->pc = 0x1F1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1664u;
        // 0x1f1668: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1664u, 0x1F166Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F166Cu;
label_1f166c:
    // 0x1f166c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1670:
    // 0x1f1670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1674:
    // 0x1f1674: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1f1674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f1678:
    // 0x1f1678: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x1f1678u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f167c:
    // 0x1f167c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f167cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1680:
    // 0x1f1680: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1684:
    // 0x1f1684: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1688:
    // 0x1f1688: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f168c:
    // 0x1f168c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f168cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1690:
    // 0x1f1690: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f1690u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f1694:
    // 0x1f1694: 0x120f809  jalr        $t1
label_1f1698:
    if (ctx->pc == 0x1F1698u) {
        ctx->pc = 0x1F1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1694u;
        // 0x1f1698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F169Cu;
        goto label_1f169c;
    }
    ctx->pc = 0x1F1694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F169Cu);
        ctx->pc = 0x1F1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1694u;
        // 0x1f1698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1694u, 0x1F169Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F169Cu;
label_1f169c:
    // 0x1f169c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f16a0:
    // 0x1f16a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f16a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f16a4:
    // 0x1f16a4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1f16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f16a8:
    // 0x1f16a8: 0x8e080094  lw          $t0, 0x94($s0)
    ctx->pc = 0x1f16a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f16ac:
    // 0x1f16ac: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f16acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f16b0:
    // 0x1f16b0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f16b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f16b4:
    // 0x1f16b4: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f16b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f16b8:
    // 0x1f16b8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f16bc:
    // 0x1f16bc: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f16bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f16c0:
    // 0x1f16c0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f16c0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f16c4:
    // 0x1f16c4: 0x120f809  jalr        $t1
label_1f16c8:
    if (ctx->pc == 0x1F16C8u) {
        ctx->pc = 0x1F16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16C4u;
        // 0x1f16c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16CCu;
        goto label_1f16cc;
    }
    ctx->pc = 0x1F16C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F16CCu);
        ctx->pc = 0x1F16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16C4u;
        // 0x1f16c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F16C4u, 0x1F16CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F16CCu;
label_1f16cc:
    // 0x1f16cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f16d0:
    // 0x1f16d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f16d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f16d4:
    // 0x1f16d4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1f16d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f16d8:
    // 0x1f16d8: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x1f16d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f16dc:
    // 0x1f16dc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f16dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f16e0:
    // 0x1f16e0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f16e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f16e4:
    // 0x1f16e4: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f16e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f16e8:
    // 0x1f16e8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f16e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f16ec:
    // 0x1f16ec: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f16ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f16f0:
    // 0x1f16f0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x1f16f0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_1f16f4:
    // 0x1f16f4: 0x120f809  jalr        $t1
label_1f16f8:
    if (ctx->pc == 0x1F16F8u) {
        ctx->pc = 0x1F16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16F4u;
        // 0x1f16f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16FCu;
        goto label_1f16fc;
    }
    ctx->pc = 0x1F16F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F16FCu);
        ctx->pc = 0x1F16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16F4u;
        // 0x1f16f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F16F4u, 0x1F16FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F16FCu;
label_1f16fc:
    // 0x1f16fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f1700:
    // 0x1f1700: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f1700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1704:
    // 0x1f1704: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1f1704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f1708:
    // 0x1f1708: 0x8e08007c  lw          $t0, 0x7C($s0)
    ctx->pc = 0x1f1708u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1f170c:
    // 0x1f170c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f170cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1710:
    // 0x1f1710: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1f1710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1f1714:
    // 0x1f1714: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x1f1714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_1f1718:
    // 0x1f1718: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x1f1718u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f171c:
    // 0x1f171c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1f171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1f1720:
    // 0x1f1720: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1f1720u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f1724:
    // 0x1f1724: 0x120f809  jalr        $t1
label_1f1728:
    if (ctx->pc == 0x1F1728u) {
        ctx->pc = 0x1F1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1724u;
        // 0x1f1728: 0x8380a  movz        $a3, $zero, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F172Cu;
        goto label_1f172c;
    }
    ctx->pc = 0x1F1724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1F172Cu);
        ctx->pc = 0x1F1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1724u;
        // 0x1f1728: 0x8380a  movz        $a3, $zero, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1724u, 0x1F172Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F172Cu;
label_1f172c:
    // 0x1f172c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f172cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1730:
    // 0x1f1730: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f1730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1734:
    // 0x1f1734: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f1734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1738:
    // 0x1f1738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f173c:
    // 0x1f173c: 0x3e00008  jr          $ra
label_1f1740:
    if (ctx->pc == 0x1F1740u) {
        ctx->pc = 0x1F1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F173Cu;
        // 0x1f1740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1744u;
        goto label_1f1744;
    }
    ctx->pc = 0x1F173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F173Cu;
        // 0x1f1740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F173Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1744u;
label_1f1744:
    // 0x1f1744: 0x0  nop
    ctx->pc = 0x1f1744u;
    // NOP
    ctx->pc = 0x1f1748u;
}
