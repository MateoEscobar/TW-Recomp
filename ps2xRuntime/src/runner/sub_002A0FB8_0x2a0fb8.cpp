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

// Function: sub_002A0FB8
// Address: 0x2a0fb8 - 0x2a1aa8
void sub_002A0FB8_0x2a0fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0FB8_0x2a0fb8");
#endif

    switch (ctx->pc) {
        case 0x2a0fb8u: goto label_2a0fb8;
        case 0x2a0fbcu: goto label_2a0fbc;
        case 0x2a0fc0u: goto label_2a0fc0;
        case 0x2a0fc4u: goto label_2a0fc4;
        case 0x2a0fc8u: goto label_2a0fc8;
        case 0x2a0fccu: goto label_2a0fcc;
        case 0x2a0fd0u: goto label_2a0fd0;
        case 0x2a0fd4u: goto label_2a0fd4;
        case 0x2a0fd8u: goto label_2a0fd8;
        case 0x2a0fdcu: goto label_2a0fdc;
        case 0x2a0fe0u: goto label_2a0fe0;
        case 0x2a0fe4u: goto label_2a0fe4;
        case 0x2a0fe8u: goto label_2a0fe8;
        case 0x2a0fecu: goto label_2a0fec;
        case 0x2a0ff0u: goto label_2a0ff0;
        case 0x2a0ff4u: goto label_2a0ff4;
        case 0x2a0ff8u: goto label_2a0ff8;
        case 0x2a0ffcu: goto label_2a0ffc;
        case 0x2a1000u: goto label_2a1000;
        case 0x2a1004u: goto label_2a1004;
        case 0x2a1008u: goto label_2a1008;
        case 0x2a100cu: goto label_2a100c;
        case 0x2a1010u: goto label_2a1010;
        case 0x2a1014u: goto label_2a1014;
        case 0x2a1018u: goto label_2a1018;
        case 0x2a101cu: goto label_2a101c;
        case 0x2a1020u: goto label_2a1020;
        case 0x2a1024u: goto label_2a1024;
        case 0x2a1028u: goto label_2a1028;
        case 0x2a102cu: goto label_2a102c;
        case 0x2a1030u: goto label_2a1030;
        case 0x2a1034u: goto label_2a1034;
        case 0x2a1038u: goto label_2a1038;
        case 0x2a103cu: goto label_2a103c;
        case 0x2a1040u: goto label_2a1040;
        case 0x2a1044u: goto label_2a1044;
        case 0x2a1048u: goto label_2a1048;
        case 0x2a104cu: goto label_2a104c;
        case 0x2a1050u: goto label_2a1050;
        case 0x2a1054u: goto label_2a1054;
        case 0x2a1058u: goto label_2a1058;
        case 0x2a105cu: goto label_2a105c;
        case 0x2a1060u: goto label_2a1060;
        case 0x2a1064u: goto label_2a1064;
        case 0x2a1068u: goto label_2a1068;
        case 0x2a106cu: goto label_2a106c;
        case 0x2a1070u: goto label_2a1070;
        case 0x2a1074u: goto label_2a1074;
        case 0x2a1078u: goto label_2a1078;
        case 0x2a107cu: goto label_2a107c;
        case 0x2a1080u: goto label_2a1080;
        case 0x2a1084u: goto label_2a1084;
        case 0x2a1088u: goto label_2a1088;
        case 0x2a108cu: goto label_2a108c;
        case 0x2a1090u: goto label_2a1090;
        case 0x2a1094u: goto label_2a1094;
        case 0x2a1098u: goto label_2a1098;
        case 0x2a109cu: goto label_2a109c;
        case 0x2a10a0u: goto label_2a10a0;
        case 0x2a10a4u: goto label_2a10a4;
        case 0x2a10a8u: goto label_2a10a8;
        case 0x2a10acu: goto label_2a10ac;
        case 0x2a10b0u: goto label_2a10b0;
        case 0x2a10b4u: goto label_2a10b4;
        case 0x2a10b8u: goto label_2a10b8;
        case 0x2a10bcu: goto label_2a10bc;
        case 0x2a10c0u: goto label_2a10c0;
        case 0x2a10c4u: goto label_2a10c4;
        case 0x2a10c8u: goto label_2a10c8;
        case 0x2a10ccu: goto label_2a10cc;
        case 0x2a10d0u: goto label_2a10d0;
        case 0x2a10d4u: goto label_2a10d4;
        case 0x2a10d8u: goto label_2a10d8;
        case 0x2a10dcu: goto label_2a10dc;
        case 0x2a10e0u: goto label_2a10e0;
        case 0x2a10e4u: goto label_2a10e4;
        case 0x2a10e8u: goto label_2a10e8;
        case 0x2a10ecu: goto label_2a10ec;
        case 0x2a10f0u: goto label_2a10f0;
        case 0x2a10f4u: goto label_2a10f4;
        case 0x2a10f8u: goto label_2a10f8;
        case 0x2a10fcu: goto label_2a10fc;
        case 0x2a1100u: goto label_2a1100;
        case 0x2a1104u: goto label_2a1104;
        case 0x2a1108u: goto label_2a1108;
        case 0x2a110cu: goto label_2a110c;
        case 0x2a1110u: goto label_2a1110;
        case 0x2a1114u: goto label_2a1114;
        case 0x2a1118u: goto label_2a1118;
        case 0x2a111cu: goto label_2a111c;
        case 0x2a1120u: goto label_2a1120;
        case 0x2a1124u: goto label_2a1124;
        case 0x2a1128u: goto label_2a1128;
        case 0x2a112cu: goto label_2a112c;
        case 0x2a1130u: goto label_2a1130;
        case 0x2a1134u: goto label_2a1134;
        case 0x2a1138u: goto label_2a1138;
        case 0x2a113cu: goto label_2a113c;
        case 0x2a1140u: goto label_2a1140;
        case 0x2a1144u: goto label_2a1144;
        case 0x2a1148u: goto label_2a1148;
        case 0x2a114cu: goto label_2a114c;
        case 0x2a1150u: goto label_2a1150;
        case 0x2a1154u: goto label_2a1154;
        case 0x2a1158u: goto label_2a1158;
        case 0x2a115cu: goto label_2a115c;
        case 0x2a1160u: goto label_2a1160;
        case 0x2a1164u: goto label_2a1164;
        case 0x2a1168u: goto label_2a1168;
        case 0x2a116cu: goto label_2a116c;
        case 0x2a1170u: goto label_2a1170;
        case 0x2a1174u: goto label_2a1174;
        case 0x2a1178u: goto label_2a1178;
        case 0x2a117cu: goto label_2a117c;
        case 0x2a1180u: goto label_2a1180;
        case 0x2a1184u: goto label_2a1184;
        case 0x2a1188u: goto label_2a1188;
        case 0x2a118cu: goto label_2a118c;
        case 0x2a1190u: goto label_2a1190;
        case 0x2a1194u: goto label_2a1194;
        case 0x2a1198u: goto label_2a1198;
        case 0x2a119cu: goto label_2a119c;
        case 0x2a11a0u: goto label_2a11a0;
        case 0x2a11a4u: goto label_2a11a4;
        case 0x2a11a8u: goto label_2a11a8;
        case 0x2a11acu: goto label_2a11ac;
        case 0x2a11b0u: goto label_2a11b0;
        case 0x2a11b4u: goto label_2a11b4;
        case 0x2a11b8u: goto label_2a11b8;
        case 0x2a11bcu: goto label_2a11bc;
        case 0x2a11c0u: goto label_2a11c0;
        case 0x2a11c4u: goto label_2a11c4;
        case 0x2a11c8u: goto label_2a11c8;
        case 0x2a11ccu: goto label_2a11cc;
        case 0x2a11d0u: goto label_2a11d0;
        case 0x2a11d4u: goto label_2a11d4;
        case 0x2a11d8u: goto label_2a11d8;
        case 0x2a11dcu: goto label_2a11dc;
        case 0x2a11e0u: goto label_2a11e0;
        case 0x2a11e4u: goto label_2a11e4;
        case 0x2a11e8u: goto label_2a11e8;
        case 0x2a11ecu: goto label_2a11ec;
        case 0x2a11f0u: goto label_2a11f0;
        case 0x2a11f4u: goto label_2a11f4;
        case 0x2a11f8u: goto label_2a11f8;
        case 0x2a11fcu: goto label_2a11fc;
        case 0x2a1200u: goto label_2a1200;
        case 0x2a1204u: goto label_2a1204;
        case 0x2a1208u: goto label_2a1208;
        case 0x2a120cu: goto label_2a120c;
        case 0x2a1210u: goto label_2a1210;
        case 0x2a1214u: goto label_2a1214;
        case 0x2a1218u: goto label_2a1218;
        case 0x2a121cu: goto label_2a121c;
        case 0x2a1220u: goto label_2a1220;
        case 0x2a1224u: goto label_2a1224;
        case 0x2a1228u: goto label_2a1228;
        case 0x2a122cu: goto label_2a122c;
        case 0x2a1230u: goto label_2a1230;
        case 0x2a1234u: goto label_2a1234;
        case 0x2a1238u: goto label_2a1238;
        case 0x2a123cu: goto label_2a123c;
        case 0x2a1240u: goto label_2a1240;
        case 0x2a1244u: goto label_2a1244;
        case 0x2a1248u: goto label_2a1248;
        case 0x2a124cu: goto label_2a124c;
        case 0x2a1250u: goto label_2a1250;
        case 0x2a1254u: goto label_2a1254;
        case 0x2a1258u: goto label_2a1258;
        case 0x2a125cu: goto label_2a125c;
        case 0x2a1260u: goto label_2a1260;
        case 0x2a1264u: goto label_2a1264;
        case 0x2a1268u: goto label_2a1268;
        case 0x2a126cu: goto label_2a126c;
        case 0x2a1270u: goto label_2a1270;
        case 0x2a1274u: goto label_2a1274;
        case 0x2a1278u: goto label_2a1278;
        case 0x2a127cu: goto label_2a127c;
        case 0x2a1280u: goto label_2a1280;
        case 0x2a1284u: goto label_2a1284;
        case 0x2a1288u: goto label_2a1288;
        case 0x2a128cu: goto label_2a128c;
        case 0x2a1290u: goto label_2a1290;
        case 0x2a1294u: goto label_2a1294;
        case 0x2a1298u: goto label_2a1298;
        case 0x2a129cu: goto label_2a129c;
        case 0x2a12a0u: goto label_2a12a0;
        case 0x2a12a4u: goto label_2a12a4;
        case 0x2a12a8u: goto label_2a12a8;
        case 0x2a12acu: goto label_2a12ac;
        case 0x2a12b0u: goto label_2a12b0;
        case 0x2a12b4u: goto label_2a12b4;
        case 0x2a12b8u: goto label_2a12b8;
        case 0x2a12bcu: goto label_2a12bc;
        case 0x2a12c0u: goto label_2a12c0;
        case 0x2a12c4u: goto label_2a12c4;
        case 0x2a12c8u: goto label_2a12c8;
        case 0x2a12ccu: goto label_2a12cc;
        case 0x2a12d0u: goto label_2a12d0;
        case 0x2a12d4u: goto label_2a12d4;
        case 0x2a12d8u: goto label_2a12d8;
        case 0x2a12dcu: goto label_2a12dc;
        case 0x2a12e0u: goto label_2a12e0;
        case 0x2a12e4u: goto label_2a12e4;
        case 0x2a12e8u: goto label_2a12e8;
        case 0x2a12ecu: goto label_2a12ec;
        case 0x2a12f0u: goto label_2a12f0;
        case 0x2a12f4u: goto label_2a12f4;
        case 0x2a12f8u: goto label_2a12f8;
        case 0x2a12fcu: goto label_2a12fc;
        case 0x2a1300u: goto label_2a1300;
        case 0x2a1304u: goto label_2a1304;
        case 0x2a1308u: goto label_2a1308;
        case 0x2a130cu: goto label_2a130c;
        case 0x2a1310u: goto label_2a1310;
        case 0x2a1314u: goto label_2a1314;
        case 0x2a1318u: goto label_2a1318;
        case 0x2a131cu: goto label_2a131c;
        case 0x2a1320u: goto label_2a1320;
        case 0x2a1324u: goto label_2a1324;
        case 0x2a1328u: goto label_2a1328;
        case 0x2a132cu: goto label_2a132c;
        case 0x2a1330u: goto label_2a1330;
        case 0x2a1334u: goto label_2a1334;
        case 0x2a1338u: goto label_2a1338;
        case 0x2a133cu: goto label_2a133c;
        case 0x2a1340u: goto label_2a1340;
        case 0x2a1344u: goto label_2a1344;
        case 0x2a1348u: goto label_2a1348;
        case 0x2a134cu: goto label_2a134c;
        case 0x2a1350u: goto label_2a1350;
        case 0x2a1354u: goto label_2a1354;
        case 0x2a1358u: goto label_2a1358;
        case 0x2a135cu: goto label_2a135c;
        case 0x2a1360u: goto label_2a1360;
        case 0x2a1364u: goto label_2a1364;
        case 0x2a1368u: goto label_2a1368;
        case 0x2a136cu: goto label_2a136c;
        case 0x2a1370u: goto label_2a1370;
        case 0x2a1374u: goto label_2a1374;
        case 0x2a1378u: goto label_2a1378;
        case 0x2a137cu: goto label_2a137c;
        case 0x2a1380u: goto label_2a1380;
        case 0x2a1384u: goto label_2a1384;
        case 0x2a1388u: goto label_2a1388;
        case 0x2a138cu: goto label_2a138c;
        case 0x2a1390u: goto label_2a1390;
        case 0x2a1394u: goto label_2a1394;
        case 0x2a1398u: goto label_2a1398;
        case 0x2a139cu: goto label_2a139c;
        case 0x2a13a0u: goto label_2a13a0;
        case 0x2a13a4u: goto label_2a13a4;
        case 0x2a13a8u: goto label_2a13a8;
        case 0x2a13acu: goto label_2a13ac;
        case 0x2a13b0u: goto label_2a13b0;
        case 0x2a13b4u: goto label_2a13b4;
        case 0x2a13b8u: goto label_2a13b8;
        case 0x2a13bcu: goto label_2a13bc;
        case 0x2a13c0u: goto label_2a13c0;
        case 0x2a13c4u: goto label_2a13c4;
        case 0x2a13c8u: goto label_2a13c8;
        case 0x2a13ccu: goto label_2a13cc;
        case 0x2a13d0u: goto label_2a13d0;
        case 0x2a13d4u: goto label_2a13d4;
        case 0x2a13d8u: goto label_2a13d8;
        case 0x2a13dcu: goto label_2a13dc;
        case 0x2a13e0u: goto label_2a13e0;
        case 0x2a13e4u: goto label_2a13e4;
        case 0x2a13e8u: goto label_2a13e8;
        case 0x2a13ecu: goto label_2a13ec;
        case 0x2a13f0u: goto label_2a13f0;
        case 0x2a13f4u: goto label_2a13f4;
        case 0x2a13f8u: goto label_2a13f8;
        case 0x2a13fcu: goto label_2a13fc;
        case 0x2a1400u: goto label_2a1400;
        case 0x2a1404u: goto label_2a1404;
        case 0x2a1408u: goto label_2a1408;
        case 0x2a140cu: goto label_2a140c;
        case 0x2a1410u: goto label_2a1410;
        case 0x2a1414u: goto label_2a1414;
        case 0x2a1418u: goto label_2a1418;
        case 0x2a141cu: goto label_2a141c;
        case 0x2a1420u: goto label_2a1420;
        case 0x2a1424u: goto label_2a1424;
        case 0x2a1428u: goto label_2a1428;
        case 0x2a142cu: goto label_2a142c;
        case 0x2a1430u: goto label_2a1430;
        case 0x2a1434u: goto label_2a1434;
        case 0x2a1438u: goto label_2a1438;
        case 0x2a143cu: goto label_2a143c;
        case 0x2a1440u: goto label_2a1440;
        case 0x2a1444u: goto label_2a1444;
        case 0x2a1448u: goto label_2a1448;
        case 0x2a144cu: goto label_2a144c;
        case 0x2a1450u: goto label_2a1450;
        case 0x2a1454u: goto label_2a1454;
        case 0x2a1458u: goto label_2a1458;
        case 0x2a145cu: goto label_2a145c;
        case 0x2a1460u: goto label_2a1460;
        case 0x2a1464u: goto label_2a1464;
        case 0x2a1468u: goto label_2a1468;
        case 0x2a146cu: goto label_2a146c;
        case 0x2a1470u: goto label_2a1470;
        case 0x2a1474u: goto label_2a1474;
        case 0x2a1478u: goto label_2a1478;
        case 0x2a147cu: goto label_2a147c;
        case 0x2a1480u: goto label_2a1480;
        case 0x2a1484u: goto label_2a1484;
        case 0x2a1488u: goto label_2a1488;
        case 0x2a148cu: goto label_2a148c;
        case 0x2a1490u: goto label_2a1490;
        case 0x2a1494u: goto label_2a1494;
        case 0x2a1498u: goto label_2a1498;
        case 0x2a149cu: goto label_2a149c;
        case 0x2a14a0u: goto label_2a14a0;
        case 0x2a14a4u: goto label_2a14a4;
        case 0x2a14a8u: goto label_2a14a8;
        case 0x2a14acu: goto label_2a14ac;
        case 0x2a14b0u: goto label_2a14b0;
        case 0x2a14b4u: goto label_2a14b4;
        case 0x2a14b8u: goto label_2a14b8;
        case 0x2a14bcu: goto label_2a14bc;
        case 0x2a14c0u: goto label_2a14c0;
        case 0x2a14c4u: goto label_2a14c4;
        case 0x2a14c8u: goto label_2a14c8;
        case 0x2a14ccu: goto label_2a14cc;
        case 0x2a14d0u: goto label_2a14d0;
        case 0x2a14d4u: goto label_2a14d4;
        case 0x2a14d8u: goto label_2a14d8;
        case 0x2a14dcu: goto label_2a14dc;
        case 0x2a14e0u: goto label_2a14e0;
        case 0x2a14e4u: goto label_2a14e4;
        case 0x2a14e8u: goto label_2a14e8;
        case 0x2a14ecu: goto label_2a14ec;
        case 0x2a14f0u: goto label_2a14f0;
        case 0x2a14f4u: goto label_2a14f4;
        case 0x2a14f8u: goto label_2a14f8;
        case 0x2a14fcu: goto label_2a14fc;
        case 0x2a1500u: goto label_2a1500;
        case 0x2a1504u: goto label_2a1504;
        case 0x2a1508u: goto label_2a1508;
        case 0x2a150cu: goto label_2a150c;
        case 0x2a1510u: goto label_2a1510;
        case 0x2a1514u: goto label_2a1514;
        case 0x2a1518u: goto label_2a1518;
        case 0x2a151cu: goto label_2a151c;
        case 0x2a1520u: goto label_2a1520;
        case 0x2a1524u: goto label_2a1524;
        case 0x2a1528u: goto label_2a1528;
        case 0x2a152cu: goto label_2a152c;
        case 0x2a1530u: goto label_2a1530;
        case 0x2a1534u: goto label_2a1534;
        case 0x2a1538u: goto label_2a1538;
        case 0x2a153cu: goto label_2a153c;
        case 0x2a1540u: goto label_2a1540;
        case 0x2a1544u: goto label_2a1544;
        case 0x2a1548u: goto label_2a1548;
        case 0x2a154cu: goto label_2a154c;
        case 0x2a1550u: goto label_2a1550;
        case 0x2a1554u: goto label_2a1554;
        case 0x2a1558u: goto label_2a1558;
        case 0x2a155cu: goto label_2a155c;
        case 0x2a1560u: goto label_2a1560;
        case 0x2a1564u: goto label_2a1564;
        case 0x2a1568u: goto label_2a1568;
        case 0x2a156cu: goto label_2a156c;
        case 0x2a1570u: goto label_2a1570;
        case 0x2a1574u: goto label_2a1574;
        case 0x2a1578u: goto label_2a1578;
        case 0x2a157cu: goto label_2a157c;
        case 0x2a1580u: goto label_2a1580;
        case 0x2a1584u: goto label_2a1584;
        case 0x2a1588u: goto label_2a1588;
        case 0x2a158cu: goto label_2a158c;
        case 0x2a1590u: goto label_2a1590;
        case 0x2a1594u: goto label_2a1594;
        case 0x2a1598u: goto label_2a1598;
        case 0x2a159cu: goto label_2a159c;
        case 0x2a15a0u: goto label_2a15a0;
        case 0x2a15a4u: goto label_2a15a4;
        case 0x2a15a8u: goto label_2a15a8;
        case 0x2a15acu: goto label_2a15ac;
        case 0x2a15b0u: goto label_2a15b0;
        case 0x2a15b4u: goto label_2a15b4;
        case 0x2a15b8u: goto label_2a15b8;
        case 0x2a15bcu: goto label_2a15bc;
        case 0x2a15c0u: goto label_2a15c0;
        case 0x2a15c4u: goto label_2a15c4;
        case 0x2a15c8u: goto label_2a15c8;
        case 0x2a15ccu: goto label_2a15cc;
        case 0x2a15d0u: goto label_2a15d0;
        case 0x2a15d4u: goto label_2a15d4;
        case 0x2a15d8u: goto label_2a15d8;
        case 0x2a15dcu: goto label_2a15dc;
        case 0x2a15e0u: goto label_2a15e0;
        case 0x2a15e4u: goto label_2a15e4;
        case 0x2a15e8u: goto label_2a15e8;
        case 0x2a15ecu: goto label_2a15ec;
        case 0x2a15f0u: goto label_2a15f0;
        case 0x2a15f4u: goto label_2a15f4;
        case 0x2a15f8u: goto label_2a15f8;
        case 0x2a15fcu: goto label_2a15fc;
        case 0x2a1600u: goto label_2a1600;
        case 0x2a1604u: goto label_2a1604;
        case 0x2a1608u: goto label_2a1608;
        case 0x2a160cu: goto label_2a160c;
        case 0x2a1610u: goto label_2a1610;
        case 0x2a1614u: goto label_2a1614;
        case 0x2a1618u: goto label_2a1618;
        case 0x2a161cu: goto label_2a161c;
        case 0x2a1620u: goto label_2a1620;
        case 0x2a1624u: goto label_2a1624;
        case 0x2a1628u: goto label_2a1628;
        case 0x2a162cu: goto label_2a162c;
        case 0x2a1630u: goto label_2a1630;
        case 0x2a1634u: goto label_2a1634;
        case 0x2a1638u: goto label_2a1638;
        case 0x2a163cu: goto label_2a163c;
        case 0x2a1640u: goto label_2a1640;
        case 0x2a1644u: goto label_2a1644;
        case 0x2a1648u: goto label_2a1648;
        case 0x2a164cu: goto label_2a164c;
        case 0x2a1650u: goto label_2a1650;
        case 0x2a1654u: goto label_2a1654;
        case 0x2a1658u: goto label_2a1658;
        case 0x2a165cu: goto label_2a165c;
        case 0x2a1660u: goto label_2a1660;
        case 0x2a1664u: goto label_2a1664;
        case 0x2a1668u: goto label_2a1668;
        case 0x2a166cu: goto label_2a166c;
        case 0x2a1670u: goto label_2a1670;
        case 0x2a1674u: goto label_2a1674;
        case 0x2a1678u: goto label_2a1678;
        case 0x2a167cu: goto label_2a167c;
        case 0x2a1680u: goto label_2a1680;
        case 0x2a1684u: goto label_2a1684;
        case 0x2a1688u: goto label_2a1688;
        case 0x2a168cu: goto label_2a168c;
        case 0x2a1690u: goto label_2a1690;
        case 0x2a1694u: goto label_2a1694;
        case 0x2a1698u: goto label_2a1698;
        case 0x2a169cu: goto label_2a169c;
        case 0x2a16a0u: goto label_2a16a0;
        case 0x2a16a4u: goto label_2a16a4;
        case 0x2a16a8u: goto label_2a16a8;
        case 0x2a16acu: goto label_2a16ac;
        case 0x2a16b0u: goto label_2a16b0;
        case 0x2a16b4u: goto label_2a16b4;
        case 0x2a16b8u: goto label_2a16b8;
        case 0x2a16bcu: goto label_2a16bc;
        case 0x2a16c0u: goto label_2a16c0;
        case 0x2a16c4u: goto label_2a16c4;
        case 0x2a16c8u: goto label_2a16c8;
        case 0x2a16ccu: goto label_2a16cc;
        case 0x2a16d0u: goto label_2a16d0;
        case 0x2a16d4u: goto label_2a16d4;
        case 0x2a16d8u: goto label_2a16d8;
        case 0x2a16dcu: goto label_2a16dc;
        case 0x2a16e0u: goto label_2a16e0;
        case 0x2a16e4u: goto label_2a16e4;
        case 0x2a16e8u: goto label_2a16e8;
        case 0x2a16ecu: goto label_2a16ec;
        case 0x2a16f0u: goto label_2a16f0;
        case 0x2a16f4u: goto label_2a16f4;
        case 0x2a16f8u: goto label_2a16f8;
        case 0x2a16fcu: goto label_2a16fc;
        case 0x2a1700u: goto label_2a1700;
        case 0x2a1704u: goto label_2a1704;
        case 0x2a1708u: goto label_2a1708;
        case 0x2a170cu: goto label_2a170c;
        case 0x2a1710u: goto label_2a1710;
        case 0x2a1714u: goto label_2a1714;
        case 0x2a1718u: goto label_2a1718;
        case 0x2a171cu: goto label_2a171c;
        case 0x2a1720u: goto label_2a1720;
        case 0x2a1724u: goto label_2a1724;
        case 0x2a1728u: goto label_2a1728;
        case 0x2a172cu: goto label_2a172c;
        case 0x2a1730u: goto label_2a1730;
        case 0x2a1734u: goto label_2a1734;
        case 0x2a1738u: goto label_2a1738;
        case 0x2a173cu: goto label_2a173c;
        case 0x2a1740u: goto label_2a1740;
        case 0x2a1744u: goto label_2a1744;
        case 0x2a1748u: goto label_2a1748;
        case 0x2a174cu: goto label_2a174c;
        case 0x2a1750u: goto label_2a1750;
        case 0x2a1754u: goto label_2a1754;
        case 0x2a1758u: goto label_2a1758;
        case 0x2a175cu: goto label_2a175c;
        case 0x2a1760u: goto label_2a1760;
        case 0x2a1764u: goto label_2a1764;
        case 0x2a1768u: goto label_2a1768;
        case 0x2a176cu: goto label_2a176c;
        case 0x2a1770u: goto label_2a1770;
        case 0x2a1774u: goto label_2a1774;
        case 0x2a1778u: goto label_2a1778;
        case 0x2a177cu: goto label_2a177c;
        case 0x2a1780u: goto label_2a1780;
        case 0x2a1784u: goto label_2a1784;
        case 0x2a1788u: goto label_2a1788;
        case 0x2a178cu: goto label_2a178c;
        case 0x2a1790u: goto label_2a1790;
        case 0x2a1794u: goto label_2a1794;
        case 0x2a1798u: goto label_2a1798;
        case 0x2a179cu: goto label_2a179c;
        case 0x2a17a0u: goto label_2a17a0;
        case 0x2a17a4u: goto label_2a17a4;
        case 0x2a17a8u: goto label_2a17a8;
        case 0x2a17acu: goto label_2a17ac;
        case 0x2a17b0u: goto label_2a17b0;
        case 0x2a17b4u: goto label_2a17b4;
        case 0x2a17b8u: goto label_2a17b8;
        case 0x2a17bcu: goto label_2a17bc;
        case 0x2a17c0u: goto label_2a17c0;
        case 0x2a17c4u: goto label_2a17c4;
        case 0x2a17c8u: goto label_2a17c8;
        case 0x2a17ccu: goto label_2a17cc;
        case 0x2a17d0u: goto label_2a17d0;
        case 0x2a17d4u: goto label_2a17d4;
        case 0x2a17d8u: goto label_2a17d8;
        case 0x2a17dcu: goto label_2a17dc;
        case 0x2a17e0u: goto label_2a17e0;
        case 0x2a17e4u: goto label_2a17e4;
        case 0x2a17e8u: goto label_2a17e8;
        case 0x2a17ecu: goto label_2a17ec;
        case 0x2a17f0u: goto label_2a17f0;
        case 0x2a17f4u: goto label_2a17f4;
        case 0x2a17f8u: goto label_2a17f8;
        case 0x2a17fcu: goto label_2a17fc;
        case 0x2a1800u: goto label_2a1800;
        case 0x2a1804u: goto label_2a1804;
        case 0x2a1808u: goto label_2a1808;
        case 0x2a180cu: goto label_2a180c;
        case 0x2a1810u: goto label_2a1810;
        case 0x2a1814u: goto label_2a1814;
        case 0x2a1818u: goto label_2a1818;
        case 0x2a181cu: goto label_2a181c;
        case 0x2a1820u: goto label_2a1820;
        case 0x2a1824u: goto label_2a1824;
        case 0x2a1828u: goto label_2a1828;
        case 0x2a182cu: goto label_2a182c;
        case 0x2a1830u: goto label_2a1830;
        case 0x2a1834u: goto label_2a1834;
        case 0x2a1838u: goto label_2a1838;
        case 0x2a183cu: goto label_2a183c;
        case 0x2a1840u: goto label_2a1840;
        case 0x2a1844u: goto label_2a1844;
        case 0x2a1848u: goto label_2a1848;
        case 0x2a184cu: goto label_2a184c;
        case 0x2a1850u: goto label_2a1850;
        case 0x2a1854u: goto label_2a1854;
        case 0x2a1858u: goto label_2a1858;
        case 0x2a185cu: goto label_2a185c;
        case 0x2a1860u: goto label_2a1860;
        case 0x2a1864u: goto label_2a1864;
        case 0x2a1868u: goto label_2a1868;
        case 0x2a186cu: goto label_2a186c;
        case 0x2a1870u: goto label_2a1870;
        case 0x2a1874u: goto label_2a1874;
        case 0x2a1878u: goto label_2a1878;
        case 0x2a187cu: goto label_2a187c;
        case 0x2a1880u: goto label_2a1880;
        case 0x2a1884u: goto label_2a1884;
        case 0x2a1888u: goto label_2a1888;
        case 0x2a188cu: goto label_2a188c;
        case 0x2a1890u: goto label_2a1890;
        case 0x2a1894u: goto label_2a1894;
        case 0x2a1898u: goto label_2a1898;
        case 0x2a189cu: goto label_2a189c;
        case 0x2a18a0u: goto label_2a18a0;
        case 0x2a18a4u: goto label_2a18a4;
        case 0x2a18a8u: goto label_2a18a8;
        case 0x2a18acu: goto label_2a18ac;
        case 0x2a18b0u: goto label_2a18b0;
        case 0x2a18b4u: goto label_2a18b4;
        case 0x2a18b8u: goto label_2a18b8;
        case 0x2a18bcu: goto label_2a18bc;
        case 0x2a18c0u: goto label_2a18c0;
        case 0x2a18c4u: goto label_2a18c4;
        case 0x2a18c8u: goto label_2a18c8;
        case 0x2a18ccu: goto label_2a18cc;
        case 0x2a18d0u: goto label_2a18d0;
        case 0x2a18d4u: goto label_2a18d4;
        case 0x2a18d8u: goto label_2a18d8;
        case 0x2a18dcu: goto label_2a18dc;
        case 0x2a18e0u: goto label_2a18e0;
        case 0x2a18e4u: goto label_2a18e4;
        case 0x2a18e8u: goto label_2a18e8;
        case 0x2a18ecu: goto label_2a18ec;
        case 0x2a18f0u: goto label_2a18f0;
        case 0x2a18f4u: goto label_2a18f4;
        case 0x2a18f8u: goto label_2a18f8;
        case 0x2a18fcu: goto label_2a18fc;
        case 0x2a1900u: goto label_2a1900;
        case 0x2a1904u: goto label_2a1904;
        case 0x2a1908u: goto label_2a1908;
        case 0x2a190cu: goto label_2a190c;
        case 0x2a1910u: goto label_2a1910;
        case 0x2a1914u: goto label_2a1914;
        case 0x2a1918u: goto label_2a1918;
        case 0x2a191cu: goto label_2a191c;
        case 0x2a1920u: goto label_2a1920;
        case 0x2a1924u: goto label_2a1924;
        case 0x2a1928u: goto label_2a1928;
        case 0x2a192cu: goto label_2a192c;
        case 0x2a1930u: goto label_2a1930;
        case 0x2a1934u: goto label_2a1934;
        case 0x2a1938u: goto label_2a1938;
        case 0x2a193cu: goto label_2a193c;
        case 0x2a1940u: goto label_2a1940;
        case 0x2a1944u: goto label_2a1944;
        case 0x2a1948u: goto label_2a1948;
        case 0x2a194cu: goto label_2a194c;
        case 0x2a1950u: goto label_2a1950;
        case 0x2a1954u: goto label_2a1954;
        case 0x2a1958u: goto label_2a1958;
        case 0x2a195cu: goto label_2a195c;
        case 0x2a1960u: goto label_2a1960;
        case 0x2a1964u: goto label_2a1964;
        case 0x2a1968u: goto label_2a1968;
        case 0x2a196cu: goto label_2a196c;
        case 0x2a1970u: goto label_2a1970;
        case 0x2a1974u: goto label_2a1974;
        case 0x2a1978u: goto label_2a1978;
        case 0x2a197cu: goto label_2a197c;
        case 0x2a1980u: goto label_2a1980;
        case 0x2a1984u: goto label_2a1984;
        case 0x2a1988u: goto label_2a1988;
        case 0x2a198cu: goto label_2a198c;
        case 0x2a1990u: goto label_2a1990;
        case 0x2a1994u: goto label_2a1994;
        case 0x2a1998u: goto label_2a1998;
        case 0x2a199cu: goto label_2a199c;
        case 0x2a19a0u: goto label_2a19a0;
        case 0x2a19a4u: goto label_2a19a4;
        case 0x2a19a8u: goto label_2a19a8;
        case 0x2a19acu: goto label_2a19ac;
        case 0x2a19b0u: goto label_2a19b0;
        case 0x2a19b4u: goto label_2a19b4;
        case 0x2a19b8u: goto label_2a19b8;
        case 0x2a19bcu: goto label_2a19bc;
        case 0x2a19c0u: goto label_2a19c0;
        case 0x2a19c4u: goto label_2a19c4;
        case 0x2a19c8u: goto label_2a19c8;
        case 0x2a19ccu: goto label_2a19cc;
        case 0x2a19d0u: goto label_2a19d0;
        case 0x2a19d4u: goto label_2a19d4;
        case 0x2a19d8u: goto label_2a19d8;
        case 0x2a19dcu: goto label_2a19dc;
        case 0x2a19e0u: goto label_2a19e0;
        case 0x2a19e4u: goto label_2a19e4;
        case 0x2a19e8u: goto label_2a19e8;
        case 0x2a19ecu: goto label_2a19ec;
        case 0x2a19f0u: goto label_2a19f0;
        case 0x2a19f4u: goto label_2a19f4;
        case 0x2a19f8u: goto label_2a19f8;
        case 0x2a19fcu: goto label_2a19fc;
        case 0x2a1a00u: goto label_2a1a00;
        case 0x2a1a04u: goto label_2a1a04;
        case 0x2a1a08u: goto label_2a1a08;
        case 0x2a1a0cu: goto label_2a1a0c;
        case 0x2a1a10u: goto label_2a1a10;
        case 0x2a1a14u: goto label_2a1a14;
        case 0x2a1a18u: goto label_2a1a18;
        case 0x2a1a1cu: goto label_2a1a1c;
        case 0x2a1a20u: goto label_2a1a20;
        case 0x2a1a24u: goto label_2a1a24;
        case 0x2a1a28u: goto label_2a1a28;
        case 0x2a1a2cu: goto label_2a1a2c;
        case 0x2a1a30u: goto label_2a1a30;
        case 0x2a1a34u: goto label_2a1a34;
        case 0x2a1a38u: goto label_2a1a38;
        case 0x2a1a3cu: goto label_2a1a3c;
        case 0x2a1a40u: goto label_2a1a40;
        case 0x2a1a44u: goto label_2a1a44;
        case 0x2a1a48u: goto label_2a1a48;
        case 0x2a1a4cu: goto label_2a1a4c;
        case 0x2a1a50u: goto label_2a1a50;
        case 0x2a1a54u: goto label_2a1a54;
        case 0x2a1a58u: goto label_2a1a58;
        case 0x2a1a5cu: goto label_2a1a5c;
        case 0x2a1a60u: goto label_2a1a60;
        case 0x2a1a64u: goto label_2a1a64;
        case 0x2a1a68u: goto label_2a1a68;
        case 0x2a1a6cu: goto label_2a1a6c;
        case 0x2a1a70u: goto label_2a1a70;
        case 0x2a1a74u: goto label_2a1a74;
        case 0x2a1a78u: goto label_2a1a78;
        case 0x2a1a7cu: goto label_2a1a7c;
        case 0x2a1a80u: goto label_2a1a80;
        case 0x2a1a84u: goto label_2a1a84;
        case 0x2a1a88u: goto label_2a1a88;
        case 0x2a1a8cu: goto label_2a1a8c;
        case 0x2a1a90u: goto label_2a1a90;
        case 0x2a1a94u: goto label_2a1a94;
        case 0x2a1a98u: goto label_2a1a98;
        case 0x2a1a9cu: goto label_2a1a9c;
        case 0x2a1aa0u: goto label_2a1aa0;
        case 0x2a1aa4u: goto label_2a1aa4;
        default: break;
    }

    ctx->pc = 0x2a0fb8u;

label_2a0fb8:
    // 0x2a0fb8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a0fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2a0fbc:
    // 0x2a0fbc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2a0fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2a0fc0:
    // 0x2a0fc0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2a0fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2a0fc4:
    // 0x2a0fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a0fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0fc8:
    // 0x2a0fc8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2a0fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2a0fcc:
    // 0x2a0fcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a0fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0fd0:
    // 0x2a0fd0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2a0fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2a0fd4:
    // 0x2a0fd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a0fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0fd8:
    // 0x2a0fd8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2a0fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2a0fdc:
    // 0x2a0fdc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2a0fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2a0fe0:
    // 0x2a0fe0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a0fe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0fe4:
    // 0x2a0fe4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a0fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a0fe8:
    // 0x2a0fe8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a0fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a0fec:
    // 0x2a0fec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a0ff0:
    // 0x2a0ff0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2a0ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a0ff4:
    // 0x2a0ff4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a0ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a0ff8:
    // 0x2a0ff8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a0ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a0ffc:
    // 0x2a0ffc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1000:
    // 0x2a1000: 0x40f809  jalr        $v0
label_2a1004:
    if (ctx->pc == 0x2A1004u) {
        ctx->pc = 0x2A1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1000u;
        // 0x2a1004: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1008u;
        goto label_2a1008;
    }
    ctx->pc = 0x2A1000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1008u);
        ctx->pc = 0x2A1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1000u;
        // 0x2a1004: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1000u, 0x2A1008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1008u;
label_2a1008:
    // 0x2a1008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a100c:
    // 0x2a100c: 0xc088b90  jal         func_222E40
label_2a1010:
    if (ctx->pc == 0x2A1010u) {
        ctx->pc = 0x2A1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A100Cu;
        // 0x2a1010: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1014u;
        goto label_2a1014;
    }
    ctx->pc = 0x2A100Cu;
    SET_GPR_U32(ctx, 31, 0x2A1014u);
    ctx->pc = 0x2A1010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A100Cu;
    // 0x2a1010: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x2A100Cu, 0x2A1014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1014u;
label_2a1014:
    // 0x2a1014: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x2a1014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_2a1018:
    // 0x2a1018: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a101c:
    // 0x2a101c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2a101cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2a1020:
    // 0x2a1020: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a1024:
    if (ctx->pc == 0x2A1024u) {
        ctx->pc = 0x2A1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1020u;
        // 0x2a1024: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1028u;
        goto label_2a1028;
    }
    ctx->pc = 0x2A1020u;
    {
        const bool branch_taken_0x2a1020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1020) {
            ctx->pc = 0x2A1024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1020u;
            // 0x2a1024: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1028u;
            goto label_2a1028;
        }
    }
    ctx->pc = 0x2A1028u;
label_2a1028:
    // 0x2a1028: 0x1012  mflo        $v0
    ctx->pc = 0x2a1028u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2a102c:
    // 0x2a102c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a102cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a1030:
    // 0x2a1030: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x2a1030u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_2a1034:
    // 0x2a1034: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
label_2a1038:
    if (ctx->pc == 0x2A1038u) {
        ctx->pc = 0x2A1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1034u;
        // 0x2a1038: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A103Cu;
        goto label_2a103c;
    }
    ctx->pc = 0x2A1034u;
    {
        const bool branch_taken_0x2a1034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1034u;
        // 0x2a1038: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1034) {
            ctx->pc = 0x2A1070u;
            goto label_2a1070;
        }
    }
    ctx->pc = 0x2A103Cu;
label_2a103c:
    // 0x2a103c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2a1040:
    if (ctx->pc == 0x2A1040u) {
        ctx->pc = 0x2A1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A103Cu;
        // 0x2a1040: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1044u;
        goto label_2a1044;
    }
    ctx->pc = 0x2A103Cu;
    {
        const bool branch_taken_0x2a103c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a103c) {
            ctx->pc = 0x2A1040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A103Cu;
            // 0x2a1040: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1054u;
            goto label_2a1054;
        }
    }
    ctx->pc = 0x2A1044u;
label_2a1044:
    // 0x2a1044: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_2a1048:
    if (ctx->pc == 0x2A1048u) {
        ctx->pc = 0x2A1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1044u;
        // 0x2a1048: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A104Cu;
        goto label_2a104c;
    }
    ctx->pc = 0x2A1044u;
    {
        const bool branch_taken_0x2a1044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1044) {
            ctx->pc = 0x2A1048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1044u;
            // 0x2a1048: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1064u;
            goto label_2a1064;
        }
    }
    ctx->pc = 0x2A104Cu;
label_2a104c:
    // 0x2a104c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a1050:
    if (ctx->pc == 0x2A1050u) {
        ctx->pc = 0x2A1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A104Cu;
        // 0x2a1050: 0x86430010  lh          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1054u;
        goto label_2a1054;
    }
    ctx->pc = 0x2A104Cu;
    {
        const bool branch_taken_0x2a104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A104Cu;
        // 0x2a1050: 0x86430010  lh          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a104c) {
            ctx->pc = 0x2A108Cu;
            goto label_2a108c;
        }
    }
    ctx->pc = 0x2A1054u;
label_2a1054:
    // 0x2a1054: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2a1058:
    if (ctx->pc == 0x2A1058u) {
        ctx->pc = 0x2A1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1054u;
        // 0x2a1058: 0x86430010  lh          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A105Cu;
        goto label_2a105c;
    }
    ctx->pc = 0x2A1054u;
    {
        const bool branch_taken_0x2a1054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1054) {
            ctx->pc = 0x2A1058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1054u;
            // 0x2a1058: 0x86430010  lh          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A108Cu;
            goto label_2a108c;
        }
    }
    ctx->pc = 0x2A105Cu;
label_2a105c:
    // 0x2a105c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a1060:
    if (ctx->pc == 0x2A1060u) {
        ctx->pc = 0x2A1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A105Cu;
        // 0x2a1060: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1064u;
        goto label_2a1064;
    }
    ctx->pc = 0x2A105Cu;
    {
        const bool branch_taken_0x2a105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A105Cu;
        // 0x2a1060: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a105c) {
            ctx->pc = 0x2A1080u;
            goto label_2a1080;
        }
    }
    ctx->pc = 0x2A1064u;
label_2a1064:
    // 0x2a1064: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2a1064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1068:
    // 0x2a1068: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a106c:
    if (ctx->pc == 0x2A106Cu) {
        ctx->pc = 0x2A106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1068u;
        // 0x2a106c: 0x24101388  addiu       $s0, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1070u;
        goto label_2a1070;
    }
    ctx->pc = 0x2A1068u;
    {
        const bool branch_taken_0x2a1068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1068u;
        // 0x2a106c: 0x24101388  addiu       $s0, $zero, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1068) {
            ctx->pc = 0x2A1088u;
            goto label_2a1088;
        }
    }
    ctx->pc = 0x2A1070u;
label_2a1070:
    // 0x2a1070: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2a1070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1074:
    // 0x2a1074: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1078:
    // 0x2a1078: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a107c:
    if (ctx->pc == 0x2A107Cu) {
        ctx->pc = 0x2A107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1078u;
        // 0x2a107c: 0x24100bb8  addiu       $s0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1080u;
        goto label_2a1080;
    }
    ctx->pc = 0x2A1078u;
    {
        const bool branch_taken_0x2a1078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1078u;
        // 0x2a107c: 0x24100bb8  addiu       $s0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1078) {
            ctx->pc = 0x2A1088u;
            goto label_2a1088;
        }
    }
    ctx->pc = 0x2A1080u;
label_2a1080:
    // 0x2a1080: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a1080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1084:
    // 0x2a1084: 0x241007d0  addiu       $s0, $zero, 0x7D0
    ctx->pc = 0x2a1084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2a1088:
    // 0x2a1088: 0x86430010  lh          $v1, 0x10($s2)
    ctx->pc = 0x2a1088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_2a108c:
    // 0x2a108c: 0x24160064  addiu       $s6, $zero, 0x64
    ctx->pc = 0x2a108cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a1090:
    // 0x2a1090: 0x10760153  beq         $v1, $s6, . + 4 + (0x153 << 2)
label_2a1094:
    if (ctx->pc == 0x2A1094u) {
        ctx->pc = 0x2A1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1090u;
        // 0x2a1094: 0x28620065  slti        $v0, $v1, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1098u;
        goto label_2a1098;
    }
    ctx->pc = 0x2A1090u;
    {
        const bool branch_taken_0x2a1090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x2A1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1090u;
        // 0x2a1094: 0x28620065  slti        $v0, $v1, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1090) {
            ctx->pc = 0x2A15E0u;
            goto label_2a15e0;
        }
    }
    ctx->pc = 0x2A1098u;
label_2a1098:
    // 0x2a1098: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_2a109c:
    if (ctx->pc == 0x2A109Cu) {
        ctx->pc = 0x2A109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1098u;
        // 0x2a109c: 0x241500c9  addiu       $s5, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10A0u;
        goto label_2a10a0;
    }
    ctx->pc = 0x2A1098u;
    {
        const bool branch_taken_0x2a1098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1098) {
            ctx->pc = 0x2A109Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1098u;
            // 0x2a109c: 0x241500c9  addiu       $s5, $zero, 0xC9 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A112Cu;
            goto label_2a112c;
        }
    }
    ctx->pc = 0x2A10A0u;
label_2a10a0:
    // 0x2a10a0: 0x2416000b  addiu       $s6, $zero, 0xB
    ctx->pc = 0x2a10a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a10a4:
    // 0x2a10a4: 0x107600e3  beq         $v1, $s6, . + 4 + (0xE3 << 2)
label_2a10a8:
    if (ctx->pc == 0x2A10A8u) {
        ctx->pc = 0x2A10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10A4u;
        // 0x2a10a8: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10ACu;
        goto label_2a10ac;
    }
    ctx->pc = 0x2A10A4u;
    {
        const bool branch_taken_0x2a10a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x2A10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10A4u;
        // 0x2a10a8: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10a4) {
            ctx->pc = 0x2A1434u;
            goto label_2a1434;
        }
    }
    ctx->pc = 0x2A10ACu;
label_2a10ac:
    // 0x2a10ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2a10b0:
    if (ctx->pc == 0x2A10B0u) {
        ctx->pc = 0x2A10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10ACu;
        // 0x2a10b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10B4u;
        goto label_2a10b4;
    }
    ctx->pc = 0x2A10ACu;
    {
        const bool branch_taken_0x2a10ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10ACu;
        // 0x2a10b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10ac) {
            ctx->pc = 0x2A10ECu;
            goto label_2a10ec;
        }
    }
    ctx->pc = 0x2A10B4u;
label_2a10b4:
    // 0x2a10b4: 0x106200a0  beq         $v1, $v0, . + 4 + (0xA0 << 2)
label_2a10b8:
    if (ctx->pc == 0x2A10B8u) {
        ctx->pc = 0x2A10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10B4u;
        // 0x2a10b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10BCu;
        goto label_2a10bc;
    }
    ctx->pc = 0x2A10B4u;
    {
        const bool branch_taken_0x2a10b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10B4u;
        // 0x2a10b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10b4) {
            ctx->pc = 0x2A1338u;
            goto label_2a1338;
        }
    }
    ctx->pc = 0x2A10BCu;
label_2a10bc:
    // 0x2a10bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a10c0:
    if (ctx->pc == 0x2A10C0u) {
        ctx->pc = 0x2A10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10BCu;
        // 0x2a10c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10C4u;
        goto label_2a10c4;
    }
    ctx->pc = 0x2A10BCu;
    {
        const bool branch_taken_0x2a10bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10BCu;
        // 0x2a10c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10bc) {
            ctx->pc = 0x2A10D4u;
            goto label_2a10d4;
        }
    }
    ctx->pc = 0x2A10C4u;
label_2a10c4:
    // 0x2a10c4: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_2a10c8:
    if (ctx->pc == 0x2A10C8u) {
        ctx->pc = 0x2A10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10C4u;
        // 0x2a10c8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10CCu;
        goto label_2a10cc;
    }
    ctx->pc = 0x2A10C4u;
    {
        const bool branch_taken_0x2a10c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10C4u;
        // 0x2a10c8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10c4) {
            ctx->pc = 0x2A11C0u;
            goto label_2a11c0;
        }
    }
    ctx->pc = 0x2A10CCu;
label_2a10cc:
    // 0x2a10cc: 0x1000026d  b           . + 4 + (0x26D << 2)
label_2a10d0:
    if (ctx->pc == 0x2A10D0u) {
        ctx->pc = 0x2A10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10CCu;
        // 0x2a10d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10D4u;
        goto label_2a10d4;
    }
    ctx->pc = 0x2A10CCu;
    {
        const bool branch_taken_0x2a10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10CCu;
        // 0x2a10d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10cc) {
            ctx->pc = 0x2A1A84u;
            goto label_2a1a84;
        }
    }
    ctx->pc = 0x2A10D4u;
label_2a10d4:
    // 0x2a10d4: 0x106200b2  beq         $v1, $v0, . + 4 + (0xB2 << 2)
label_2a10d8:
    if (ctx->pc == 0x2A10D8u) {
        ctx->pc = 0x2A10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10D4u;
        // 0x2a10d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10DCu;
        goto label_2a10dc;
    }
    ctx->pc = 0x2A10D4u;
    {
        const bool branch_taken_0x2a10d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10D4u;
        // 0x2a10d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10d4) {
            ctx->pc = 0x2A13A0u;
            goto label_2a13a0;
        }
    }
    ctx->pc = 0x2A10DCu;
label_2a10dc:
    // 0x2a10dc: 0x106200ca  beq         $v1, $v0, . + 4 + (0xCA << 2)
label_2a10e0:
    if (ctx->pc == 0x2A10E0u) {
        ctx->pc = 0x2A10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10DCu;
        // 0x2a10e0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10E4u;
        goto label_2a10e4;
    }
    ctx->pc = 0x2A10DCu;
    {
        const bool branch_taken_0x2a10dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10DCu;
        // 0x2a10e0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10dc) {
            ctx->pc = 0x2A1408u;
            goto label_2a1408;
        }
    }
    ctx->pc = 0x2A10E4u;
label_2a10e4:
    // 0x2a10e4: 0x10000267  b           . + 4 + (0x267 << 2)
label_2a10e8:
    if (ctx->pc == 0x2A10E8u) {
        ctx->pc = 0x2A10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10E4u;
        // 0x2a10e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10ECu;
        goto label_2a10ec;
    }
    ctx->pc = 0x2A10E4u;
    {
        const bool branch_taken_0x2a10e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10E4u;
        // 0x2a10e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10e4) {
            ctx->pc = 0x2A1A84u;
            goto label_2a1a84;
        }
    }
    ctx->pc = 0x2A10ECu;
label_2a10ec:
    // 0x2a10ec: 0x24110015  addiu       $s1, $zero, 0x15
    ctx->pc = 0x2a10ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2a10f0:
    // 0x2a10f0: 0x107100fe  beq         $v1, $s1, . + 4 + (0xFE << 2)
label_2a10f4:
    if (ctx->pc == 0x2A10F4u) {
        ctx->pc = 0x2A10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10F0u;
        // 0x2a10f4: 0x28620016  slti        $v0, $v1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A10F8u;
        goto label_2a10f8;
    }
    ctx->pc = 0x2A10F0u;
    {
        const bool branch_taken_0x2a10f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2A10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10F0u;
        // 0x2a10f4: 0x28620016  slti        $v0, $v1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10f0) {
            ctx->pc = 0x2A14ECu;
            goto label_2a14ec;
        }
    }
    ctx->pc = 0x2A10F8u;
label_2a10f8:
    // 0x2a10f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a10fc:
    if (ctx->pc == 0x2A10FCu) {
        ctx->pc = 0x2A10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10F8u;
        // 0x2a10fc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1100u;
        goto label_2a1100;
    }
    ctx->pc = 0x2A10F8u;
    {
        const bool branch_taken_0x2a10f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10F8u;
        // 0x2a10fc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10f8) {
            ctx->pc = 0x2A1110u;
            goto label_2a1110;
        }
    }
    ctx->pc = 0x2A1100u;
label_2a1100:
    // 0x2a1100: 0x506200e6  beql        $v1, $v0, . + 4 + (0xE6 << 2)
label_2a1104:
    if (ctx->pc == 0x2A1104u) {
        ctx->pc = 0x2A1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1100u;
        // 0x2a1104: 0x8642001a  lh          $v0, 0x1A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1108u;
        goto label_2a1108;
    }
    ctx->pc = 0x2A1100u;
    {
        const bool branch_taken_0x2a1100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1100) {
            ctx->pc = 0x2A1104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1100u;
            // 0x2a1104: 0x8642001a  lh          $v0, 0x1A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A149Cu;
            goto label_2a149c;
        }
    }
    ctx->pc = 0x2A1108u;
label_2a1108:
    // 0x2a1108: 0x1000025d  b           . + 4 + (0x25D << 2)
label_2a110c:
    if (ctx->pc == 0x2A110Cu) {
        ctx->pc = 0x2A110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1108u;
        // 0x2a110c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1110u;
        goto label_2a1110;
    }
    ctx->pc = 0x2A1108u;
    {
        const bool branch_taken_0x2a1108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1108u;
        // 0x2a110c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1108) {
            ctx->pc = 0x2A1A80u;
            goto label_2a1a80;
        }
    }
    ctx->pc = 0x2A1110u;
label_2a1110:
    // 0x2a1110: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2a1110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2a1114:
    // 0x2a1114: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
label_2a1118:
    if (ctx->pc == 0x2A1118u) {
        ctx->pc = 0x2A1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1114u;
        // 0x2a1118: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A111Cu;
        goto label_2a111c;
    }
    ctx->pc = 0x2A1114u;
    {
        const bool branch_taken_0x2a1114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1114u;
        // 0x2a1118: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1114) {
            ctx->pc = 0x2A1228u;
            goto label_2a1228;
        }
    }
    ctx->pc = 0x2A111Cu;
label_2a111c:
    // 0x2a111c: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
label_2a1120:
    if (ctx->pc == 0x2A1120u) {
        ctx->pc = 0x2A1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A111Cu;
        // 0x2a1120: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1124u;
        goto label_2a1124;
    }
    ctx->pc = 0x2A111Cu;
    {
        const bool branch_taken_0x2a111c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A111Cu;
        // 0x2a1120: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a111c) {
            ctx->pc = 0x2A12A0u;
            goto label_2a12a0;
        }
    }
    ctx->pc = 0x2A1124u;
label_2a1124:
    // 0x2a1124: 0x10000257  b           . + 4 + (0x257 << 2)
label_2a1128:
    if (ctx->pc == 0x2A1128u) {
        ctx->pc = 0x2A1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1124u;
        // 0x2a1128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A112Cu;
        goto label_2a112c;
    }
    ctx->pc = 0x2A1124u;
    {
        const bool branch_taken_0x2a1124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1124u;
        // 0x2a1128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1124) {
            ctx->pc = 0x2A1A84u;
            goto label_2a1a84;
        }
    }
    ctx->pc = 0x2A112Cu;
label_2a112c:
    // 0x2a112c: 0x107501d3  beq         $v1, $s5, . + 4 + (0x1D3 << 2)
label_2a1130:
    if (ctx->pc == 0x2A1130u) {
        ctx->pc = 0x2A1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A112Cu;
        // 0x2a1130: 0x286200ca  slti        $v0, $v1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1134u;
        goto label_2a1134;
    }
    ctx->pc = 0x2A112Cu;
    {
        const bool branch_taken_0x2a112c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x2A1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A112Cu;
        // 0x2a1130: 0x286200ca  slti        $v0, $v1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a112c) {
            ctx->pc = 0x2A187Cu;
            goto label_2a187c;
        }
    }
    ctx->pc = 0x2A1134u;
label_2a1134:
    // 0x2a1134: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2a1138:
    if (ctx->pc == 0x2A1138u) {
        ctx->pc = 0x2A1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1134u;
        // 0x2a1138: 0x2410006a  addiu       $s0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A113Cu;
        goto label_2a113c;
    }
    ctx->pc = 0x2A1134u;
    {
        const bool branch_taken_0x2a1134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1134u;
        // 0x2a1138: 0x2410006a  addiu       $s0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1134) {
            ctx->pc = 0x2A1178u;
            goto label_2a1178;
        }
    }
    ctx->pc = 0x2A113Cu;
label_2a113c:
    // 0x2a113c: 0x10700147  beq         $v1, $s0, . + 4 + (0x147 << 2)
label_2a1140:
    if (ctx->pc == 0x2A1140u) {
        ctx->pc = 0x2A1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A113Cu;
        // 0x2a1140: 0x2862006b  slti        $v0, $v1, 0x6B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)107) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1144u;
        goto label_2a1144;
    }
    ctx->pc = 0x2A113Cu;
    {
        const bool branch_taken_0x2a113c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A113Cu;
        // 0x2a1140: 0x2862006b  slti        $v0, $v1, 0x6B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)107) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a113c) {
            ctx->pc = 0x2A165Cu;
            goto label_2a165c;
        }
    }
    ctx->pc = 0x2A1144u;
label_2a1144:
    // 0x2a1144: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a1148:
    if (ctx->pc == 0x2A1148u) {
        ctx->pc = 0x2A1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1144u;
        // 0x2a1148: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A114Cu;
        goto label_2a114c;
    }
    ctx->pc = 0x2A1144u;
    {
        const bool branch_taken_0x2a1144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1144u;
        // 0x2a1148: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1144) {
            ctx->pc = 0x2A115Cu;
            goto label_2a115c;
        }
    }
    ctx->pc = 0x2A114Cu;
label_2a114c:
    // 0x2a114c: 0x10620137  beq         $v1, $v0, . + 4 + (0x137 << 2)
label_2a1150:
    if (ctx->pc == 0x2A1150u) {
        ctx->pc = 0x2A1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A114Cu;
        // 0x2a1150: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1154u;
        goto label_2a1154;
    }
    ctx->pc = 0x2A114Cu;
    {
        const bool branch_taken_0x2a114c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A114Cu;
        // 0x2a1150: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a114c) {
            ctx->pc = 0x2A162Cu;
            goto label_2a162c;
        }
    }
    ctx->pc = 0x2A1154u;
label_2a1154:
    // 0x2a1154: 0x1000024a  b           . + 4 + (0x24A << 2)
label_2a1158:
    if (ctx->pc == 0x2A1158u) {
        ctx->pc = 0x2A1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1154u;
        // 0x2a1158: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A115Cu;
        goto label_2a115c;
    }
    ctx->pc = 0x2A1154u;
    {
        const bool branch_taken_0x2a1154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1154u;
        // 0x2a1158: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1154) {
            ctx->pc = 0x2A1A80u;
            goto label_2a1a80;
        }
    }
    ctx->pc = 0x2A115Cu;
label_2a115c:
    // 0x2a115c: 0x2402006b  addiu       $v0, $zero, 0x6B
    ctx->pc = 0x2a115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_2a1160:
    // 0x2a1160: 0x10620180  beq         $v1, $v0, . + 4 + (0x180 << 2)
label_2a1164:
    if (ctx->pc == 0x2A1164u) {
        ctx->pc = 0x2A1164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1160u;
        // 0x2a1164: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1168u;
        goto label_2a1168;
    }
    ctx->pc = 0x2A1160u;
    {
        const bool branch_taken_0x2a1160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1160u;
        // 0x2a1164: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1160) {
            ctx->pc = 0x2A1764u;
            goto label_2a1764;
        }
    }
    ctx->pc = 0x2A1168u;
label_2a1168:
    // 0x2a1168: 0x1062018b  beq         $v1, $v0, . + 4 + (0x18B << 2)
label_2a116c:
    if (ctx->pc == 0x2A116Cu) {
        ctx->pc = 0x2A116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1168u;
        // 0x2a116c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1170u;
        goto label_2a1170;
    }
    ctx->pc = 0x2A1168u;
    {
        const bool branch_taken_0x2a1168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1168u;
        // 0x2a116c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1168) {
            ctx->pc = 0x2A1798u;
            goto label_2a1798;
        }
    }
    ctx->pc = 0x2A1170u;
label_2a1170:
    // 0x2a1170: 0x10000244  b           . + 4 + (0x244 << 2)
label_2a1174:
    if (ctx->pc == 0x2A1174u) {
        ctx->pc = 0x2A1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1170u;
        // 0x2a1174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1178u;
        goto label_2a1178;
    }
    ctx->pc = 0x2A1170u;
    {
        const bool branch_taken_0x2a1170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1170u;
        // 0x2a1174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1170) {
            ctx->pc = 0x2A1A84u;
            goto label_2a1a84;
        }
    }
    ctx->pc = 0x2A1178u;
label_2a1178:
    // 0x2a1178: 0x2411012d  addiu       $s1, $zero, 0x12D
    ctx->pc = 0x2a1178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
label_2a117c:
    // 0x2a117c: 0x10710226  beq         $v1, $s1, . + 4 + (0x226 << 2)
label_2a1180:
    if (ctx->pc == 0x2A1180u) {
        ctx->pc = 0x2A1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A117Cu;
        // 0x2a1180: 0x2862012e  slti        $v0, $v1, 0x12E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)302) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1184u;
        goto label_2a1184;
    }
    ctx->pc = 0x2A117Cu;
    {
        const bool branch_taken_0x2a117c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2A1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A117Cu;
        // 0x2a1180: 0x2862012e  slti        $v0, $v1, 0x12E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)302) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a117c) {
            ctx->pc = 0x2A1A18u;
            goto label_2a1a18;
        }
    }
    ctx->pc = 0x2A1184u;
label_2a1184:
    // 0x2a1184: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a1188:
    if (ctx->pc == 0x2A1188u) {
        ctx->pc = 0x2A1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1184u;
        // 0x2a1188: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A118Cu;
        goto label_2a118c;
    }
    ctx->pc = 0x2A1184u;
    {
        const bool branch_taken_0x2a1184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1184u;
        // 0x2a1188: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1184) {
            ctx->pc = 0x2A11A4u;
            goto label_2a11a4;
        }
    }
    ctx->pc = 0x2A118Cu;
label_2a118c:
    // 0x2a118c: 0x106201bb  beq         $v1, $v0, . + 4 + (0x1BB << 2)
label_2a1190:
    if (ctx->pc == 0x2A1190u) {
        ctx->pc = 0x2A1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A118Cu;
        // 0x2a1190: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1194u;
        goto label_2a1194;
    }
    ctx->pc = 0x2A118Cu;
    {
        const bool branch_taken_0x2a118c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A118Cu;
        // 0x2a1190: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a118c) {
            ctx->pc = 0x2A187Cu;
            goto label_2a187c;
        }
    }
    ctx->pc = 0x2A1194u;
label_2a1194:
    // 0x2a1194: 0x106201c2  beq         $v1, $v0, . + 4 + (0x1C2 << 2)
label_2a1198:
    if (ctx->pc == 0x2A1198u) {
        ctx->pc = 0x2A1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1194u;
        // 0x2a1198: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A119Cu;
        goto label_2a119c;
    }
    ctx->pc = 0x2A1194u;
    {
        const bool branch_taken_0x2a1194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1194u;
        // 0x2a1198: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1194) {
            ctx->pc = 0x2A18A0u;
            goto label_2a18a0;
        }
    }
    ctx->pc = 0x2A119Cu;
label_2a119c:
    // 0x2a119c: 0x10000239  b           . + 4 + (0x239 << 2)
label_2a11a0:
    if (ctx->pc == 0x2A11A0u) {
        ctx->pc = 0x2A11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A119Cu;
        // 0x2a11a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A11A4u;
        goto label_2a11a4;
    }
    ctx->pc = 0x2A119Cu;
    {
        const bool branch_taken_0x2a119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A119Cu;
        // 0x2a11a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a119c) {
            ctx->pc = 0x2A1A84u;
            goto label_2a1a84;
        }
    }
    ctx->pc = 0x2A11A4u;
label_2a11a4:
    // 0x2a11a4: 0x2402012e  addiu       $v0, $zero, 0x12E
    ctx->pc = 0x2a11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_2a11a8:
    // 0x2a11a8: 0x1062022d  beq         $v1, $v0, . + 4 + (0x22D << 2)
label_2a11ac:
    if (ctx->pc == 0x2A11ACu) {
        ctx->pc = 0x2A11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11A8u;
        // 0x2a11ac: 0x2402012f  addiu       $v0, $zero, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A11B0u;
        goto label_2a11b0;
    }
    ctx->pc = 0x2A11A8u;
    {
        const bool branch_taken_0x2a11a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11A8u;
        // 0x2a11ac: 0x2402012f  addiu       $v0, $zero, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a11a8) {
            ctx->pc = 0x2A1A60u;
            goto label_2a1a60;
        }
    }
    ctx->pc = 0x2A11B0u;
label_2a11b0:
    // 0x2a11b0: 0x106201fb  beq         $v1, $v0, . + 4 + (0x1FB << 2)
label_2a11b4:
    if (ctx->pc == 0x2A11B4u) {
        ctx->pc = 0x2A11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11B0u;
        // 0x2a11b4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A11B8u;
        goto label_2a11b8;
    }
    ctx->pc = 0x2A11B0u;
    {
        const bool branch_taken_0x2a11b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11B0u;
        // 0x2a11b4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a11b0) {
            ctx->pc = 0x2A19A0u;
            goto label_2a19a0;
        }
    }
    ctx->pc = 0x2A11B8u;
label_2a11b8:
    // 0x2a11b8: 0x10000232  b           . + 4 + (0x232 << 2)
label_2a11bc:
    if (ctx->pc == 0x2A11BCu) {
        ctx->pc = 0x2A11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11B8u;
        // 0x2a11bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A11C0u;
        goto label_2a11c0;
    }
    ctx->pc = 0x2A11B8u;
    {
        const bool branch_taken_0x2a11b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11B8u;
        // 0x2a11bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a11b8) {
            ctx->pc = 0x2A1A84u;
            goto label_2a1a84;
        }
    }
    ctx->pc = 0x2A11C0u;
label_2a11c0:
    // 0x2a11c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a11c4:
    // 0x2a11c4: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2a11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2a11c8:
    // 0x2a11c8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a11c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a11cc:
    // 0x2a11cc: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x2a11ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
label_2a11d0:
    // 0x2a11d0: 0xc0e409a  jal         func_390268
label_2a11d4:
    if (ctx->pc == 0x2A11D4u) {
        ctx->pc = 0x2A11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11D0u;
        // 0x2a11d4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A11D8u;
        goto label_2a11d8;
    }
    ctx->pc = 0x2A11D0u;
    SET_GPR_U32(ctx, 31, 0x2A11D8u);
    ctx->pc = 0x2A11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11D0u;
    // 0x2a11d4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A11D0u, 0x2A11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11D8u;
label_2a11d8:
    // 0x2a11d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a11dc:
    // 0x2a11dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a11dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a11e0:
    // 0x2a11e0: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2a11e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a11e4:
    // 0x2a11e4: 0xa0f809  jalr        $a1
label_2a11e8:
    if (ctx->pc == 0x2A11E8u) {
        ctx->pc = 0x2A11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11E4u;
        // 0x2a11e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A11ECu;
        goto label_2a11ec;
    }
    ctx->pc = 0x2A11E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A11ECu);
        ctx->pc = 0x2A11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A11E4u;
        // 0x2a11e8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A11E4u, 0x2A11ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A11ECu;
label_2a11ec:
    // 0x2a11ec: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2a11ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2a11f0:
    // 0x2a11f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a11f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a11f4:
    // 0x2a11f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a11f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a11f8:
    // 0x2a11f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a11f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a11fc:
    // 0x2a11fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a11fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1200:
    // 0x2a1200: 0xc0bf832  jal         func_2FE0C8
label_2a1204:
    if (ctx->pc == 0x2A1204u) {
        ctx->pc = 0x2A1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1200u;
        // 0x2a1204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1208u;
        goto label_2a1208;
    }
    ctx->pc = 0x2A1200u;
    SET_GPR_U32(ctx, 31, 0x2A1208u);
    ctx->pc = 0x2A1204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1200u;
    // 0x2a1204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A1200u, 0x2A1208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1208u;
label_2a1208:
    // 0x2a1208: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a120c:
    // 0x2a120c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a120cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1210:
    // 0x2a1210: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x2a1210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2a1214:
    // 0x2a1214: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a1214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a1218:
    // 0x2a1218: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a1218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a121c:
    // 0x2a121c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a121cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a1220:
    // 0x2a1220: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2a1224:
    if (ctx->pc == 0x2A1224u) {
        ctx->pc = 0x2A1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1220u;
        // 0x2a1224: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1228u;
        goto label_2a1228;
    }
    ctx->pc = 0x2A1220u;
    {
        const bool branch_taken_0x2a1220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1220u;
        // 0x2a1224: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1220) {
            ctx->pc = 0x2A1320u;
            goto label_2a1320;
        }
    }
    ctx->pc = 0x2A1228u;
label_2a1228:
    // 0x2a1228: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a1228u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a122c:
    // 0x2a122c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a122cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a1230:
    // 0x2a1230: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2a1230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2a1234:
    // 0x2a1234: 0x24a52ae0  addiu       $a1, $a1, 0x2AE0
    ctx->pc = 0x2a1234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10976));
label_2a1238:
    // 0x2a1238: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a1238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a123c:
    // 0x2a123c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2a123cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2a1240:
    // 0x2a1240: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2a1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2a1244:
    // 0x2a1244: 0x40f809  jalr        $v0
label_2a1248:
    if (ctx->pc == 0x2A1248u) {
        ctx->pc = 0x2A1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1244u;
        // 0x2a1248: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A124Cu;
        goto label_2a124c;
    }
    ctx->pc = 0x2A1244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A124Cu);
        ctx->pc = 0x2A1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1244u;
        // 0x2a1248: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1244u, 0x2A124Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A124Cu;
label_2a124c:
    // 0x2a124c: 0x8e032b04  lw          $v1, 0x2B04($s0)
    ctx->pc = 0x2a124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2a1250:
    // 0x2a1250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1254:
    // 0x2a1254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a1254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1258:
    // 0x2a1258: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a125c:
    // 0x2a125c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2a125cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2a1260:
    // 0x2a1260: 0x8c47008c  lw          $a3, 0x8C($v0)
    ctx->pc = 0x2a1260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2a1264:
    // 0x2a1264: 0xe0f809  jalr        $a3
label_2a1268:
    if (ctx->pc == 0x2A1268u) {
        ctx->pc = 0x2A1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1264u;
        // 0x2a1268: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A126Cu;
        goto label_2a126c;
    }
    ctx->pc = 0x2A1264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2A126Cu);
        ctx->pc = 0x2A1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1264u;
        // 0x2a1268: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1264u, 0x2A126Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A126Cu;
label_2a126c:
    // 0x2a126c: 0x86430018  lh          $v1, 0x18($s2)
    ctx->pc = 0x2a126cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_2a1270:
    // 0x2a1270: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a1270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a1274:
    // 0x2a1274: 0xa6420010  sh          $v0, 0x10($s2)
    ctx->pc = 0x2a1274u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a1278:
    // 0x2a1278: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a127c:
    // 0x2a127c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a127cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a1280:
    // 0x2a1280: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1284:
    // 0x2a1284: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2a1284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2a1288:
    // 0x2a1288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a1288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a128c:
    // 0x2a128c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a128cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a1290:
    // 0x2a1290: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x2a1290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2a1294:
    // 0x2a1294: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a1294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a1298:
    // 0x2a1298: 0x10000021  b           . + 4 + (0x21 << 2)
label_2a129c:
    if (ctx->pc == 0x2A129Cu) {
        ctx->pc = 0x2A129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1298u;
        // 0x2a129c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A12A0u;
        goto label_2a12a0;
    }
    ctx->pc = 0x2A1298u;
    {
        const bool branch_taken_0x2a1298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1298u;
        // 0x2a129c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1298) {
            ctx->pc = 0x2A1320u;
            goto label_2a1320;
        }
    }
    ctx->pc = 0x2A12A0u;
label_2a12a0:
    // 0x2a12a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a12a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a12a4:
    // 0x2a12a4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a12a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a12a8:
    // 0x2a12a8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2a12a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2a12ac:
    // 0x2a12ac: 0x24a52af8  addiu       $a1, $a1, 0x2AF8
    ctx->pc = 0x2a12acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11000));
label_2a12b0:
    // 0x2a12b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a12b4:
    // 0x2a12b4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2a12b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2a12b8:
    // 0x2a12b8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2a12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2a12bc:
    // 0x2a12bc: 0x40f809  jalr        $v0
label_2a12c0:
    if (ctx->pc == 0x2A12C0u) {
        ctx->pc = 0x2A12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12BCu;
        // 0x2a12c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A12C4u;
        goto label_2a12c4;
    }
    ctx->pc = 0x2A12BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A12C4u);
        ctx->pc = 0x2A12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12BCu;
        // 0x2a12c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A12BCu, 0x2A12C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A12C4u;
label_2a12c4:
    // 0x2a12c4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x2a12c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2a12c8:
    // 0x2a12c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a12c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a12cc:
    // 0x2a12cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a12ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a12d0:
    // 0x2a12d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a12d4:
    // 0x2a12d4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2a12d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2a12d8:
    // 0x2a12d8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2a12d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2a12dc:
    // 0x2a12dc: 0x60f809  jalr        $v1
label_2a12e0:
    if (ctx->pc == 0x2A12E0u) {
        ctx->pc = 0x2A12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12DCu;
        // 0x2a12e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A12E4u;
        goto label_2a12e4;
    }
    ctx->pc = 0x2A12DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A12E4u);
        ctx->pc = 0x2A12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12DCu;
        // 0x2a12e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A12DCu, 0x2A12E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A12E4u;
label_2a12e4:
    // 0x2a12e4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a12e8:
    // 0x2a12e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a12e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a12ec:
    // 0x2a12ec: 0xa6420010  sh          $v0, 0x10($s2)
    ctx->pc = 0x2a12ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
label_2a12f0:
    // 0x2a12f0: 0xc08d70a  jal         func_235C28
label_2a12f4:
    if (ctx->pc == 0x2A12F4u) {
        ctx->pc = 0x2A12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12F0u;
        // 0x2a12f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A12F8u;
        goto label_2a12f8;
    }
    ctx->pc = 0x2A12F0u;
    SET_GPR_U32(ctx, 31, 0x2A12F8u);
    ctx->pc = 0x2A12F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A12F0u;
    // 0x2a12f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235C28u, 0x2A12F0u, 0x2A12F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12F8u;
label_2a12f8:
    // 0x2a12f8: 0x86420016  lh          $v0, 0x16($s2)
    ctx->pc = 0x2a12f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_2a12fc:
    // 0x2a12fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a12fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1300:
    // 0x2a1300: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1304:
    // 0x2a1304: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a1304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a1308:
    // 0x2a1308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a130c:
    // 0x2a130c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a130cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1310:
    // 0x2a1310: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a1310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a1314:
    // 0x2a1314: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a1314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2a1318:
    // 0x2a1318: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a1318u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a131c:
    // 0x2a131c: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2a131cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2a1320:
    // 0x2a1320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1324:
    // 0x2a1324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a1324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1328:
    // 0x2a1328: 0xc0b68b0  jal         func_2DA2C0
label_2a132c:
    if (ctx->pc == 0x2A132Cu) {
        ctx->pc = 0x2A132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1328u;
        // 0x2a132c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1330u;
        goto label_2a1330;
    }
    ctx->pc = 0x2A1328u;
    SET_GPR_U32(ctx, 31, 0x2A1330u);
    ctx->pc = 0x2A132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1328u;
    // 0x2a132c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A1328u, 0x2A1330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1330u;
label_2a1330:
    // 0x2a1330: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_2a1334:
    if (ctx->pc == 0x2A1334u) {
        ctx->pc = 0x2A1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1330u;
        // 0x2a1334: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1338u;
        goto label_2a1338;
    }
    ctx->pc = 0x2A1330u;
    {
        const bool branch_taken_0x2a1330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1330u;
        // 0x2a1334: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1330) {
            ctx->pc = 0x2A1A80u;
            goto label_2a1a80;
        }
    }
    ctx->pc = 0x2A1338u;
label_2a1338:
    // 0x2a1338: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a1338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a133c:
    // 0x2a133c: 0xc0cd4e4  jal         func_335390
label_2a1340:
    if (ctx->pc == 0x2A1340u) {
        ctx->pc = 0x2A1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A133Cu;
        // 0x2a1340: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1344u;
        goto label_2a1344;
    }
    ctx->pc = 0x2A133Cu;
    SET_GPR_U32(ctx, 31, 0x2A1344u);
    ctx->pc = 0x2A1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A133Cu;
    // 0x2a1340: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A133Cu, 0x2A1344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1344u;
label_2a1344:
    // 0x2a1344: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a1344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a1348:
    // 0x2a1348: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a134c:
    if (ctx->pc == 0x2A134Cu) {
        ctx->pc = 0x2A134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1348u;
        // 0x2a134c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1350u;
        goto label_2a1350;
    }
    ctx->pc = 0x2A1348u;
    {
        const bool branch_taken_0x2a1348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1348u;
        // 0x2a134c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1348) {
            ctx->pc = 0x2A135Cu;
            goto label_2a135c;
        }
    }
    ctx->pc = 0x2A1350u;
label_2a1350:
    // 0x2a1350: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2a1350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2a1354:
    // 0x2a1354: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a1354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a1358:
    // 0x2a1358: 0xfe6200e0  sd          $v0, 0xE0($s3)
    ctx->pc = 0x2a1358u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
label_2a135c:
    // 0x2a135c: 0x86420016  lh          $v0, 0x16($s2)
    ctx->pc = 0x2a135cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_2a1360:
    // 0x2a1360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1364:
    // 0x2a1364: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1368:
    // 0x2a1368: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a1368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a136c:
    // 0x2a136c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a136cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a1370:
    // 0x2a1370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a1370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1374:
    // 0x2a1374: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a1374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a1378:
    // 0x2a1378: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a1378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2a137c:
    // 0x2a137c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a137cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a1380:
    // 0x2a1380: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2a1380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2a1384:
    // 0x2a1384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1388:
    // 0x2a1388: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a1388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a138c:
    // 0x2a138c: 0xc0b68b0  jal         func_2DA2C0
label_2a1390:
    if (ctx->pc == 0x2A1390u) {
        ctx->pc = 0x2A1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A138Cu;
        // 0x2a1390: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1394u;
        goto label_2a1394;
    }
    ctx->pc = 0x2A138Cu;
    SET_GPR_U32(ctx, 31, 0x2A1394u);
    ctx->pc = 0x2A1390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A138Cu;
    // 0x2a1390: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A138Cu, 0x2A1394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1394u;
label_2a1394:
    // 0x2a1394: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1398:
    // 0x2a1398: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_2a139c:
    if (ctx->pc == 0x2A139Cu) {
        ctx->pc = 0x2A139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1398u;
        // 0x2a139c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13A0u;
        goto label_2a13a0;
    }
    ctx->pc = 0x2A1398u;
    {
        const bool branch_taken_0x2a1398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1398u;
        // 0x2a139c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1398) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A13A0u;
label_2a13a0:
    // 0x2a13a0: 0xc0a4e54  jal         func_293950
label_2a13a4:
    if (ctx->pc == 0x2A13A4u) {
        ctx->pc = 0x2A13A8u;
        goto label_2a13a8;
    }
    ctx->pc = 0x2A13A0u;
    SET_GPR_U32(ctx, 31, 0x2A13A8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A13A0u, 0x2A13A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13A8u;
label_2a13a8:
    // 0x2a13a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a13a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a13ac:
    // 0x2a13ac: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2a13b0:
    if (ctx->pc == 0x2A13B0u) {
        ctx->pc = 0x2A13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13ACu;
        // 0x2a13b0: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13B4u;
        goto label_2a13b4;
    }
    ctx->pc = 0x2A13ACu;
    {
        const bool branch_taken_0x2a13ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13ACu;
        // 0x2a13b0: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13ac) {
            ctx->pc = 0x2A13F0u;
            goto label_2a13f0;
        }
    }
    ctx->pc = 0x2A13B4u;
label_2a13b4:
    // 0x2a13b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a13b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a13b8:
    // 0x2a13b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a13b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a13bc:
    // 0x2a13bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a13bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a13c0:
    // 0x2a13c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a13c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a13c4:
    // 0x2a13c4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2a13c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_2a13c8:
    // 0x2a13c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a13c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a13cc:
    // 0x2a13cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a13ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a13d0:
    // 0x2a13d0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2a13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2a13d4:
    // 0x2a13d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a13d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a13d8:
    // 0x2a13d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2a13dc:
    // 0x2a13dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a13dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a13e0:
    // 0x2a13e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a13e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a13e4:
    // 0x2a13e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a13e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a13e8:
    // 0x2a13e8: 0xc0a8cc8  jal         func_2A3320
label_2a13ec:
    if (ctx->pc == 0x2A13ECu) {
        ctx->pc = 0x2A13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13E8u;
        // 0x2a13ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13F0u;
        goto label_2a13f0;
    }
    ctx->pc = 0x2A13E8u;
    SET_GPR_U32(ctx, 31, 0x2A13F0u);
    ctx->pc = 0x2A13ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13E8u;
    // 0x2a13ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3320u, 0x2A13E8u, 0x2A13F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13F0u;
label_2a13f0:
    // 0x2a13f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a13f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a13f4:
    // 0x2a13f4: 0xc0a35d6  jal         func_28D758
label_2a13f8:
    if (ctx->pc == 0x2A13F8u) {
        ctx->pc = 0x2A13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13F4u;
        // 0x2a13f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13FCu;
        goto label_2a13fc;
    }
    ctx->pc = 0x2A13F4u;
    SET_GPR_U32(ctx, 31, 0x2A13FCu);
    ctx->pc = 0x2A13F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13F4u;
    // 0x2a13f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A13F4u, 0x2A13FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13FCu;
label_2a13fc:
    // 0x2a13fc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2a13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a1400:
    // 0x2a1400: 0x1000019e  b           . + 4 + (0x19E << 2)
label_2a1404:
    if (ctx->pc == 0x2A1404u) {
        ctx->pc = 0x2A1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1400u;
        // 0x2a1404: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1408u;
        goto label_2a1408;
    }
    ctx->pc = 0x2A1400u;
    {
        const bool branch_taken_0x2a1400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1400u;
        // 0x2a1404: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1400) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A1408u;
label_2a1408:
    // 0x2a1408: 0x86420018  lh          $v0, 0x18($s2)
    ctx->pc = 0x2a1408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_2a140c:
    // 0x2a140c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a140cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1410:
    // 0x2a1410: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1414:
    // 0x2a1414: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a1414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a1418:
    // 0x2a1418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a141c:
    // 0x2a141c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a141cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1420:
    // 0x2a1420: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a1420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a1424:
    // 0x2a1424: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a1424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2a1428:
    // 0x2a1428: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a1428u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a142c:
    // 0x2a142c: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_2a1430:
    if (ctx->pc == 0x2A1430u) {
        ctx->pc = 0x2A1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A142Cu;
        // 0x2a1430: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1434u;
        goto label_2a1434;
    }
    ctx->pc = 0x2A142Cu;
    {
        const bool branch_taken_0x2a142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A142Cu;
        // 0x2a1430: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a142c) {
            ctx->pc = 0x2A1780u;
            goto label_2a1780;
        }
    }
    ctx->pc = 0x2A1434u;
label_2a1434:
    // 0x2a1434: 0xc0a4e54  jal         func_293950
label_2a1438:
    if (ctx->pc == 0x2A1438u) {
        ctx->pc = 0x2A143Cu;
        goto label_2a143c;
    }
    ctx->pc = 0x2A1434u;
    SET_GPR_U32(ctx, 31, 0x2A143Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A1434u, 0x2A143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A143Cu;
label_2a143c:
    // 0x2a143c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a143cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1440:
    // 0x2a1440: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2a1444:
    if (ctx->pc == 0x2A1444u) {
        ctx->pc = 0x2A1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1440u;
        // 0x2a1444: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1448u;
        goto label_2a1448;
    }
    ctx->pc = 0x2A1440u;
    {
        const bool branch_taken_0x2a1440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1440u;
        // 0x2a1444: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1440) {
            ctx->pc = 0x2A1484u;
            goto label_2a1484;
        }
    }
    ctx->pc = 0x2A1448u;
label_2a1448:
    // 0x2a1448: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a1448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a144c:
    // 0x2a144c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a144cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a1450:
    // 0x2a1450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1454:
    // 0x2a1454: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a1454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a1458:
    // 0x2a1458: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2a1458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_2a145c:
    // 0x2a145c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a145cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a1460:
    // 0x2a1460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1464:
    // 0x2a1464: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2a1464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2a1468:
    // 0x2a1468: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2a1468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a146c:
    // 0x2a146c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a146cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2a1470:
    // 0x2a1470: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a1470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1474:
    // 0x2a1474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a1474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1478:
    // 0x2a1478: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a1478u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a147c:
    // 0x2a147c: 0xc0a8cc8  jal         func_2A3320
label_2a1480:
    if (ctx->pc == 0x2A1480u) {
        ctx->pc = 0x2A1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A147Cu;
        // 0x2a1480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1484u;
        goto label_2a1484;
    }
    ctx->pc = 0x2A147Cu;
    SET_GPR_U32(ctx, 31, 0x2A1484u);
    ctx->pc = 0x2A1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A147Cu;
    // 0x2a1480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3320u, 0x2A147Cu, 0x2A1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1484u;
label_2a1484:
    // 0x2a1484: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a1484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1488:
    // 0x2a1488: 0xc0a35d6  jal         func_28D758
label_2a148c:
    if (ctx->pc == 0x2A148Cu) {
        ctx->pc = 0x2A148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1488u;
        // 0x2a148c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1490u;
        goto label_2a1490;
    }
    ctx->pc = 0x2A1488u;
    SET_GPR_U32(ctx, 31, 0x2A1490u);
    ctx->pc = 0x2A148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1488u;
    // 0x2a148c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A1488u, 0x2A1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1490u;
label_2a1490:
    // 0x2a1490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1494:
    // 0x2a1494: 0x10000179  b           . + 4 + (0x179 << 2)
label_2a1498:
    if (ctx->pc == 0x2A1498u) {
        ctx->pc = 0x2A1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1494u;
        // 0x2a1498: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A149Cu;
        goto label_2a149c;
    }
    ctx->pc = 0x2A1494u;
    {
        const bool branch_taken_0x2a1494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1494u;
        // 0x2a1498: 0xa6430010  sh          $v1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1494) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A149Cu;
label_2a149c:
    // 0x2a149c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a14a0:
    // 0x2a14a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a14a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a14a4:
    // 0x2a14a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a14a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a14a8:
    // 0x2a14a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a14ac:
    // 0x2a14ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a14acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a14b0:
    // 0x2a14b0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a14b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a14b4:
    // 0x2a14b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2a14b8:
    // 0x2a14b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a14b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a14bc:
    // 0x2a14bc: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2a14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2a14c0:
    // 0x2a14c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a14c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a14c4:
    // 0x2a14c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a14c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a14c8:
    // 0x2a14c8: 0xc0b68b0  jal         func_2DA2C0
label_2a14cc:
    if (ctx->pc == 0x2A14CCu) {
        ctx->pc = 0x2A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14C8u;
        // 0x2a14cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A14D0u;
        goto label_2a14d0;
    }
    ctx->pc = 0x2A14C8u;
    SET_GPR_U32(ctx, 31, 0x2A14D0u);
    ctx->pc = 0x2A14CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A14C8u;
    // 0x2a14cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A14C8u, 0x2A14D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14D0u;
label_2a14d0:
    // 0x2a14d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2a14d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2a14d4:
    // 0x2a14d4: 0xa6510010  sh          $s1, 0x10($s2)
    ctx->pc = 0x2a14d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 17));
label_2a14d8:
    // 0x2a14d8: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2a14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2a14dc:
    // 0x2a14dc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a14e0:
    // 0x2a14e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a14e4:
    // 0x2a14e4: 0x10000165  b           . + 4 + (0x165 << 2)
label_2a14e8:
    if (ctx->pc == 0x2A14E8u) {
        ctx->pc = 0x2A14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14E4u;
        // 0x2a14e8: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A14ECu;
        goto label_2a14ec;
    }
    ctx->pc = 0x2A14E4u;
    {
        const bool branch_taken_0x2a14e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14E4u;
        // 0x2a14e8: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14e4) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A14ECu;
label_2a14ec:
    // 0x2a14ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a14f0:
    // 0x2a14f0: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a14f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a14f4:
    // 0x2a14f4: 0x1c600032  bgtz        $v1, . + 4 + (0x32 << 2)
label_2a14f8:
    if (ctx->pc == 0x2A14F8u) {
        ctx->pc = 0x2A14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14F4u;
        // 0x2a14f8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A14FCu;
        goto label_2a14fc;
    }
    ctx->pc = 0x2A14F4u;
    {
        const bool branch_taken_0x2a14f4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14F4u;
        // 0x2a14f8: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14f4) {
            ctx->pc = 0x2A15C0u;
            goto label_2a15c0;
        }
    }
    ctx->pc = 0x2A14FCu;
label_2a14fc:
    // 0x2a14fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a1500:
    // 0x2a1500: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a1500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a1504:
    // 0x2a1504: 0xc0e409a  jal         func_390268
label_2a1508:
    if (ctx->pc == 0x2A1508u) {
        ctx->pc = 0x2A1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1504u;
        // 0x2a1508: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A150Cu;
        goto label_2a150c;
    }
    ctx->pc = 0x2A1504u;
    SET_GPR_U32(ctx, 31, 0x2A150Cu);
    ctx->pc = 0x2A1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1504u;
    // 0x2a1508: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A1504u, 0x2A150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A150Cu;
label_2a150c:
    // 0x2a150c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a150cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a1510:
    // 0x2a1510: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1514:
    // 0x2a1514: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2a1514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1518:
    // 0x2a1518: 0xa0f809  jalr        $a1
label_2a151c:
    if (ctx->pc == 0x2A151Cu) {
        ctx->pc = 0x2A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1518u;
        // 0x2a151c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1520u;
        goto label_2a1520;
    }
    ctx->pc = 0x2A1518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A1520u);
        ctx->pc = 0x2A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1518u;
        // 0x2a151c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1518u, 0x2A1520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1520u;
label_2a1520:
    // 0x2a1520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a1520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1524:
    // 0x2a1524: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1528:
    // 0x2a1528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a152c:
    // 0x2a152c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1530:
    // 0x2a1530: 0xc0bf832  jal         func_2FE0C8
label_2a1534:
    if (ctx->pc == 0x2A1534u) {
        ctx->pc = 0x2A1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1530u;
        // 0x2a1534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1538u;
        goto label_2a1538;
    }
    ctx->pc = 0x2A1530u;
    SET_GPR_U32(ctx, 31, 0x2A1538u);
    ctx->pc = 0x2A1534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1530u;
    // 0x2a1534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A1530u, 0x2A1538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1538u;
label_2a1538:
    // 0x2a1538: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a1538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a153c:
    // 0x2a153c: 0x8c430200  lw          $v1, 0x200($v0)
    ctx->pc = 0x2a153cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
label_2a1540:
    // 0x2a1540: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_2a1544:
    if (ctx->pc == 0x2A1544u) {
        ctx->pc = 0x2A1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1540u;
        // 0x2a1544: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1548u;
        goto label_2a1548;
    }
    ctx->pc = 0x2A1540u;
    {
        const bool branch_taken_0x2a1540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1540u;
        // 0x2a1544: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1540) {
            ctx->pc = 0x2A15BCu;
            goto label_2a15bc;
        }
    }
    ctx->pc = 0x2A1548u;
label_2a1548:
    // 0x2a1548: 0xc0cd4e4  jal         func_335390
label_2a154c:
    if (ctx->pc == 0x2A154Cu) {
        ctx->pc = 0x2A154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1548u;
        // 0x2a154c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1550u;
        goto label_2a1550;
    }
    ctx->pc = 0x2A1548u;
    SET_GPR_U32(ctx, 31, 0x2A1550u);
    ctx->pc = 0x2A154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1548u;
    // 0x2a154c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A1548u, 0x2A1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1550u;
label_2a1550:
    // 0x2a1550: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2a1550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2a1554:
    // 0x2a1554: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2a1558:
    if (ctx->pc == 0x2A1558u) {
        ctx->pc = 0x2A1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1554u;
        // 0x2a1558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A155Cu;
        goto label_2a155c;
    }
    ctx->pc = 0x2A1554u;
    {
        const bool branch_taken_0x2a1554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1554u;
        // 0x2a1558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1554) {
            ctx->pc = 0x2A156Cu;
            goto label_2a156c;
        }
    }
    ctx->pc = 0x2A155Cu;
label_2a155c:
    // 0x2a155c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2a1560:
    if (ctx->pc == 0x2A1560u) {
        ctx->pc = 0x2A1560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A155Cu;
        // 0x2a1560: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1564u;
        goto label_2a1564;
    }
    ctx->pc = 0x2A155Cu;
    {
        const bool branch_taken_0x2a155c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A155Cu;
        // 0x2a1560: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a155c) {
            ctx->pc = 0x2A1598u;
            goto label_2a1598;
        }
    }
    ctx->pc = 0x2A1564u;
label_2a1564:
    // 0x2a1564: 0x10000017  b           . + 4 + (0x17 << 2)
label_2a1568:
    if (ctx->pc == 0x2A1568u) {
        ctx->pc = 0x2A1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1564u;
        // 0x2a1568: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A156Cu;
        goto label_2a156c;
    }
    ctx->pc = 0x2A1564u;
    {
        const bool branch_taken_0x2a1564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1564u;
        // 0x2a1568: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1564) {
            ctx->pc = 0x2A15C4u;
            goto label_2a15c4;
        }
    }
    ctx->pc = 0x2A156Cu;
label_2a156c:
    // 0x2a156c: 0xc0a367c  jal         func_28D9F0
label_2a1570:
    if (ctx->pc == 0x2A1570u) {
        ctx->pc = 0x2A1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A156Cu;
        // 0x2a1570: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1574u;
        goto label_2a1574;
    }
    ctx->pc = 0x2A156Cu;
    SET_GPR_U32(ctx, 31, 0x2A1574u);
    ctx->pc = 0x2A1570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A156Cu;
    // 0x2a1570: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A156Cu, 0x2A1574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1574u;
label_2a1574:
    // 0x2a1574: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2a1578:
    if (ctx->pc == 0x2A1578u) {
        ctx->pc = 0x2A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1574u;
        // 0x2a1578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A157Cu;
        goto label_2a157c;
    }
    ctx->pc = 0x2A1574u;
    {
        const bool branch_taken_0x2a1574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1574u;
        // 0x2a1578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1574) {
            ctx->pc = 0x2A15BCu;
            goto label_2a15bc;
        }
    }
    ctx->pc = 0x2A157Cu;
label_2a157c:
    // 0x2a157c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a157cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1580:
    // 0x2a1580: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a1580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2a1584:
    // 0x2a1584: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1588:
    // 0x2a1588: 0xc0bf8e0  jal         func_2FE380
label_2a158c:
    if (ctx->pc == 0x2A158Cu) {
        ctx->pc = 0x2A158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1588u;
        // 0x2a158c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1590u;
        goto label_2a1590;
    }
    ctx->pc = 0x2A1588u;
    SET_GPR_U32(ctx, 31, 0x2A1590u);
    ctx->pc = 0x2A158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1588u;
    // 0x2a158c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE380u, 0x2A1588u, 0x2A1590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1590u;
label_2a1590:
    // 0x2a1590: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a1594:
    if (ctx->pc == 0x2A1594u) {
        ctx->pc = 0x2A1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1590u;
        // 0x2a1594: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1598u;
        goto label_2a1598;
    }
    ctx->pc = 0x2A1590u;
    {
        const bool branch_taken_0x2a1590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1590u;
        // 0x2a1594: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1590) {
            ctx->pc = 0x2A15C0u;
            goto label_2a15c0;
        }
    }
    ctx->pc = 0x2A1598u;
label_2a1598:
    // 0x2a1598: 0xc0a367c  jal         func_28D9F0
label_2a159c:
    if (ctx->pc == 0x2A159Cu) {
        ctx->pc = 0x2A159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1598u;
        // 0x2a159c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15A0u;
        goto label_2a15a0;
    }
    ctx->pc = 0x2A1598u;
    SET_GPR_U32(ctx, 31, 0x2A15A0u);
    ctx->pc = 0x2A159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1598u;
    // 0x2a159c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A1598u, 0x2A15A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15A0u;
label_2a15a0:
    // 0x2a15a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a15a4:
    if (ctx->pc == 0x2A15A4u) {
        ctx->pc = 0x2A15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15A0u;
        // 0x2a15a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15A8u;
        goto label_2a15a8;
    }
    ctx->pc = 0x2A15A0u;
    {
        const bool branch_taken_0x2a15a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15A0u;
        // 0x2a15a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a15a0) {
            ctx->pc = 0x2A15BCu;
            goto label_2a15bc;
        }
    }
    ctx->pc = 0x2A15A8u;
label_2a15a8:
    // 0x2a15a8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a15a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a15ac:
    // 0x2a15ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a15acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a15b0:
    // 0x2a15b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a15b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a15b4:
    // 0x2a15b4: 0xc0bf8e0  jal         func_2FE380
label_2a15b8:
    if (ctx->pc == 0x2A15B8u) {
        ctx->pc = 0x2A15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15B4u;
        // 0x2a15b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15BCu;
        goto label_2a15bc;
    }
    ctx->pc = 0x2A15B4u;
    SET_GPR_U32(ctx, 31, 0x2A15BCu);
    ctx->pc = 0x2A15B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A15B4u;
    // 0x2a15b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE380u, 0x2A15B4u, 0x2A15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15BCu;
label_2a15bc:
    // 0x2a15bc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a15bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a15c0:
    // 0x2a15c0: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x2a15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_2a15c4:
    // 0x2a15c4: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a15c8:
    // 0x2a15c8: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a15c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a15cc:
    // 0x2a15cc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a15ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a15d0:
    // 0x2a15d0: 0x1040012a  beqz        $v0, . + 4 + (0x12A << 2)
label_2a15d4:
    if (ctx->pc == 0x2A15D4u) {
        ctx->pc = 0x2A15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15D0u;
        // 0x2a15d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15D8u;
        goto label_2a15d8;
    }
    ctx->pc = 0x2A15D0u;
    {
        const bool branch_taken_0x2a15d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15D0u;
        // 0x2a15d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a15d0) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A15D8u;
label_2a15d8:
    // 0x2a15d8: 0x10000128  b           . + 4 + (0x128 << 2)
label_2a15dc:
    if (ctx->pc == 0x2A15DCu) {
        ctx->pc = 0x2A15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15D8u;
        // 0x2a15dc: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15E0u;
        goto label_2a15e0;
    }
    ctx->pc = 0x2A15D8u;
    {
        const bool branch_taken_0x2a15d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15D8u;
        // 0x2a15dc: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a15d8) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A15E0u;
label_2a15e0:
    // 0x2a15e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a15e4:
    // 0x2a15e4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a15e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a15e8:
    // 0x2a15e8: 0xc0e409a  jal         func_390268
label_2a15ec:
    if (ctx->pc == 0x2A15ECu) {
        ctx->pc = 0x2A15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15E8u;
        // 0x2a15ec: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A15F0u;
        goto label_2a15f0;
    }
    ctx->pc = 0x2A15E8u;
    SET_GPR_U32(ctx, 31, 0x2A15F0u);
    ctx->pc = 0x2A15ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A15E8u;
    // 0x2a15ec: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A15E8u, 0x2A15F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15F0u;
label_2a15f0:
    // 0x2a15f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a15f4:
    // 0x2a15f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a15f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a15f8:
    // 0x2a15f8: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2a15f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a15fc:
    // 0x2a15fc: 0xa0f809  jalr        $a1
label_2a1600:
    if (ctx->pc == 0x2A1600u) {
        ctx->pc = 0x2A1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15FCu;
        // 0x2a1600: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1604u;
        goto label_2a1604;
    }
    ctx->pc = 0x2A15FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A1604u);
        ctx->pc = 0x2A1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15FCu;
        // 0x2a1600: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A15FCu, 0x2A1604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1604u;
label_2a1604:
    // 0x2a1604: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2a1604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2a1608:
    // 0x2a1608: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a1608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a160c:
    // 0x2a160c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a160cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1610:
    // 0x2a1610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1614:
    // 0x2a1614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1618:
    // 0x2a1618: 0xc0bf832  jal         func_2FE0C8
label_2a161c:
    if (ctx->pc == 0x2A161Cu) {
        ctx->pc = 0x2A161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1618u;
        // 0x2a161c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1620u;
        goto label_2a1620;
    }
    ctx->pc = 0x2A1618u;
    SET_GPR_U32(ctx, 31, 0x2A1620u);
    ctx->pc = 0x2A161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1618u;
    // 0x2a161c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A1618u, 0x2A1620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1620u;
label_2a1620:
    // 0x2a1620: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x2a1620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2a1624:
    // 0x2a1624: 0x10000115  b           . + 4 + (0x115 << 2)
label_2a1628:
    if (ctx->pc == 0x2A1628u) {
        ctx->pc = 0x2A1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1624u;
        // 0x2a1628: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A162Cu;
        goto label_2a162c;
    }
    ctx->pc = 0x2A1624u;
    {
        const bool branch_taken_0x2a1624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1624u;
        // 0x2a1628: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1624) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A162Cu;
label_2a162c:
    // 0x2a162c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a162cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1630:
    // 0x2a1630: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x2a1630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2a1634:
    // 0x2a1634: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a1634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1638:
    // 0x2a1638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a1638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a163c:
    // 0x2a163c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a163cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a1640:
    // 0x2a1640: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a1640u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a1644:
    // 0x2a1644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1648:
    // 0x2a1648: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a1648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a164c:
    // 0x2a164c: 0xc0b68b0  jal         func_2DA2C0
label_2a1650:
    if (ctx->pc == 0x2A1650u) {
        ctx->pc = 0x2A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A164Cu;
        // 0x2a1650: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1654u;
        goto label_2a1654;
    }
    ctx->pc = 0x2A164Cu;
    SET_GPR_U32(ctx, 31, 0x2A1654u);
    ctx->pc = 0x2A1650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A164Cu;
    // 0x2a1650: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A164Cu, 0x2A1654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1654u;
label_2a1654:
    // 0x2a1654: 0x10000109  b           . + 4 + (0x109 << 2)
label_2a1658:
    if (ctx->pc == 0x2A1658u) {
        ctx->pc = 0x2A1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1654u;
        // 0x2a1658: 0xa6500010  sh          $s0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A165Cu;
        goto label_2a165c;
    }
    ctx->pc = 0x2A1654u;
    {
        const bool branch_taken_0x2a1654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1654u;
        // 0x2a1658: 0xa6500010  sh          $s0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1654) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A165Cu;
label_2a165c:
    // 0x2a165c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a165cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a1660:
    // 0x2a1660: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a1660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a1664:
    // 0x2a1664: 0xc0e409a  jal         func_390268
label_2a1668:
    if (ctx->pc == 0x2A1668u) {
        ctx->pc = 0x2A1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1664u;
        // 0x2a1668: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A166Cu;
        goto label_2a166c;
    }
    ctx->pc = 0x2A1664u;
    SET_GPR_U32(ctx, 31, 0x2A166Cu);
    ctx->pc = 0x2A1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1664u;
    // 0x2a1668: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A1664u, 0x2A166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A166Cu;
label_2a166c:
    // 0x2a166c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a1670:
    // 0x2a1670: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a1670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a1674:
    // 0x2a1674: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a1674u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a1678:
    // 0x2a1678: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2a1678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a167c:
    // 0x2a167c: 0xc0f809  jalr        $a2
label_2a1680:
    if (ctx->pc == 0x2A1680u) {
        ctx->pc = 0x2A1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A167Cu;
        // 0x2a1680: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1684u;
        goto label_2a1684;
    }
    ctx->pc = 0x2A167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2A1684u);
        ctx->pc = 0x2A1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A167Cu;
        // 0x2a1680: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A167Cu, 0x2A1684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1684u;
label_2a1684:
    // 0x2a1684: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a1684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a1688:
    // 0x2a1688: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2a1688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a168c:
    // 0x2a168c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2a168cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a1690:
    // 0x2a1690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1694:
    // 0x2a1694: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a1694u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a1698:
    // 0x2a1698: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2a1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a169c:
    // 0x2a169c: 0x40f809  jalr        $v0
label_2a16a0:
    if (ctx->pc == 0x2A16A0u) {
        ctx->pc = 0x2A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A169Cu;
        // 0x2a16a0: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16A4u;
        goto label_2a16a4;
    }
    ctx->pc = 0x2A169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A16A4u);
        ctx->pc = 0x2A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A169Cu;
        // 0x2a16a0: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A169Cu, 0x2A16A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A16A4u;
label_2a16a4:
    // 0x2a16a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a16a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a16a8:
    // 0x2a16a8: 0xc0cdb38  jal         func_336CE0
label_2a16ac:
    if (ctx->pc == 0x2A16ACu) {
        ctx->pc = 0x2A16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16A8u;
        // 0x2a16ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16B0u;
        goto label_2a16b0;
    }
    ctx->pc = 0x2A16A8u;
    SET_GPR_U32(ctx, 31, 0x2A16B0u);
    ctx->pc = 0x2A16ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16A8u;
    // 0x2a16ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A16A8u, 0x2A16B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16B0u;
label_2a16b0:
    // 0x2a16b0: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x2a16b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_2a16b4:
    // 0x2a16b4: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2a16b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_2a16b8:
    // 0x2a16b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a16b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a16bc:
    // 0x2a16bc: 0x0  nop
    ctx->pc = 0x2a16bcu;
    // NOP
label_2a16c0:
    // 0x2a16c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a16c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a16c4:
    // 0x2a16c4: 0x0  nop
    ctx->pc = 0x2a16c4u;
    // NOP
label_2a16c8:
    // 0x2a16c8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_2a16cc:
    if (ctx->pc == 0x2A16CCu) {
        ctx->pc = 0x2A16D0u;
        goto label_2a16d0;
    }
    ctx->pc = 0x2A16C8u;
    {
        const bool branch_taken_0x2a16c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a16c8) {
            ctx->pc = 0x2A172Cu;
            goto label_2a172c;
        }
    }
    ctx->pc = 0x2A16D0u;
label_2a16d0:
    // 0x2a16d0: 0xc0a4e54  jal         func_293950
label_2a16d4:
    if (ctx->pc == 0x2A16D4u) {
        ctx->pc = 0x2A16D8u;
        goto label_2a16d8;
    }
    ctx->pc = 0x2A16D0u;
    SET_GPR_U32(ctx, 31, 0x2A16D8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A16D0u, 0x2A16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16D8u;
label_2a16d8:
    // 0x2a16d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a16d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a16dc:
    // 0x2a16dc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2a16e0:
    if (ctx->pc == 0x2A16E0u) {
        ctx->pc = 0x2A16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16DCu;
        // 0x2a16e0: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A16E4u;
        goto label_2a16e4;
    }
    ctx->pc = 0x2A16DCu;
    {
        const bool branch_taken_0x2a16dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A16DCu;
        // 0x2a16e0: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a16dc) {
            ctx->pc = 0x2A1720u;
            goto label_2a1720;
        }
    }
    ctx->pc = 0x2A16E4u;
label_2a16e4:
    // 0x2a16e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a16e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a16e8:
    // 0x2a16e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a16e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a16ec:
    // 0x2a16ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a16ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a16f0:
    // 0x2a16f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a16f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a16f4:
    // 0x2a16f4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a16f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a16f8:
    // 0x2a16f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a16f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a16fc:
    // 0x2a16fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a16fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1700:
    // 0x2a1700: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2a1700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2a1704:
    // 0x2a1704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1708:
    // 0x2a1708: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a1708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2a170c:
    // 0x2a170c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a170cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1710:
    // 0x2a1710: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a1710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1714:
    // 0x2a1714: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a1714u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1718:
    // 0x2a1718: 0xc0a8cc8  jal         func_2A3320
label_2a171c:
    if (ctx->pc == 0x2A171Cu) {
        ctx->pc = 0x2A171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1718u;
        // 0x2a171c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1720u;
        goto label_2a1720;
    }
    ctx->pc = 0x2A1718u;
    SET_GPR_U32(ctx, 31, 0x2A1720u);
    ctx->pc = 0x2A171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1718u;
    // 0x2a171c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3320u, 0x2A1718u, 0x2A1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1720u;
label_2a1720:
    // 0x2a1720: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a1720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1724:
    // 0x2a1724: 0xc0a35d6  jal         func_28D758
label_2a1728:
    if (ctx->pc == 0x2A1728u) {
        ctx->pc = 0x2A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1724u;
        // 0x2a1728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A172Cu;
        goto label_2a172c;
    }
    ctx->pc = 0x2A1724u;
    SET_GPR_U32(ctx, 31, 0x2A172Cu);
    ctx->pc = 0x2A1728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1724u;
    // 0x2a1728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A1724u, 0x2A172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A172Cu;
label_2a172c:
    // 0x2a172c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a172cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1730:
    // 0x2a1730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1734:
    // 0x2a1734: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2a1734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2a1738:
    // 0x2a1738: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a1738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a173c:
    // 0x2a173c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a173cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1740:
    // 0x2a1740: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a1740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a1744:
    // 0x2a1744: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a1744u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a1748:
    // 0x2a1748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a174c:
    // 0x2a174c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a174cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1750:
    // 0x2a1750: 0xc0b68b0  jal         func_2DA2C0
label_2a1754:
    if (ctx->pc == 0x2A1754u) {
        ctx->pc = 0x2A1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1750u;
        // 0x2a1754: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1758u;
        goto label_2a1758;
    }
    ctx->pc = 0x2A1750u;
    SET_GPR_U32(ctx, 31, 0x2A1758u);
    ctx->pc = 0x2A1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1750u;
    // 0x2a1754: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A1750u, 0x2A1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1758u;
label_2a1758:
    // 0x2a1758: 0x2402006b  addiu       $v0, $zero, 0x6B
    ctx->pc = 0x2a1758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_2a175c:
    // 0x2a175c: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_2a1760:
    if (ctx->pc == 0x2A1760u) {
        ctx->pc = 0x2A1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A175Cu;
        // 0x2a1760: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1764u;
        goto label_2a1764;
    }
    ctx->pc = 0x2A175Cu;
    {
        const bool branch_taken_0x2a175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A175Cu;
        // 0x2a1760: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a175c) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A1764u;
label_2a1764:
    // 0x2a1764: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a1764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1768:
    // 0x2a1768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a176c:
    // 0x2a176c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x2a176cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2a1770:
    // 0x2a1770: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a1770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a1774:
    // 0x2a1774: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a1774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1778:
    // 0x2a1778: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a1778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a177c:
    // 0x2a177c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a177cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a1780:
    // 0x2a1780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1784:
    // 0x2a1784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a1784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1788:
    // 0x2a1788: 0xc0b68b0  jal         func_2DA2C0
label_2a178c:
    if (ctx->pc == 0x2A178Cu) {
        ctx->pc = 0x2A178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1788u;
        // 0x2a178c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1790u;
        goto label_2a1790;
    }
    ctx->pc = 0x2A1788u;
    SET_GPR_U32(ctx, 31, 0x2A1790u);
    ctx->pc = 0x2A178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1788u;
    // 0x2a178c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A1788u, 0x2A1790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1790u;
label_2a1790:
    // 0x2a1790: 0x100000ba  b           . + 4 + (0xBA << 2)
label_2a1794:
    if (ctx->pc == 0x2A1794u) {
        ctx->pc = 0x2A1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1790u;
        // 0x2a1794: 0xa6560010  sh          $s6, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1798u;
        goto label_2a1798;
    }
    ctx->pc = 0x2A1790u;
    {
        const bool branch_taken_0x2a1790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1790u;
        // 0x2a1794: 0xa6560010  sh          $s6, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1790) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A1798u;
label_2a1798:
    // 0x2a1798: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a1798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a179c:
    // 0x2a179c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a17a0:
    // 0x2a17a0: 0xc0e409a  jal         func_390268
label_2a17a4:
    if (ctx->pc == 0x2A17A4u) {
        ctx->pc = 0x2A17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17A0u;
        // 0x2a17a4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A17A8u;
        goto label_2a17a8;
    }
    ctx->pc = 0x2A17A0u;
    SET_GPR_U32(ctx, 31, 0x2A17A8u);
    ctx->pc = 0x2A17A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17A0u;
    // 0x2a17a4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A17A0u, 0x2A17A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17A8u;
label_2a17a8:
    // 0x2a17a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a17a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a17ac:
    // 0x2a17ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a17b0:
    // 0x2a17b0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a17b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a17b4:
    // 0x2a17b4: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2a17b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a17b8:
    // 0x2a17b8: 0xc0f809  jalr        $a2
label_2a17bc:
    if (ctx->pc == 0x2A17BCu) {
        ctx->pc = 0x2A17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17B8u;
        // 0x2a17bc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A17C0u;
        goto label_2a17c0;
    }
    ctx->pc = 0x2A17B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2A17C0u);
        ctx->pc = 0x2A17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17B8u;
        // 0x2a17bc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A17B8u, 0x2A17C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A17C0u;
label_2a17c0:
    // 0x2a17c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a17c4:
    // 0x2a17c4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2a17c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a17c8:
    // 0x2a17c8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2a17c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a17cc:
    // 0x2a17cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a17ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a17d0:
    // 0x2a17d0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a17d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a17d4:
    // 0x2a17d4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2a17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a17d8:
    // 0x2a17d8: 0x40f809  jalr        $v0
label_2a17dc:
    if (ctx->pc == 0x2A17DCu) {
        ctx->pc = 0x2A17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17D8u;
        // 0x2a17dc: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A17E0u;
        goto label_2a17e0;
    }
    ctx->pc = 0x2A17D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A17E0u);
        ctx->pc = 0x2A17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17D8u;
        // 0x2a17dc: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A17D8u, 0x2A17E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A17E0u;
label_2a17e0:
    // 0x2a17e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a17e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a17e4:
    // 0x2a17e4: 0xc0cdb38  jal         func_336CE0
label_2a17e8:
    if (ctx->pc == 0x2A17E8u) {
        ctx->pc = 0x2A17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17E4u;
        // 0x2a17e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A17ECu;
        goto label_2a17ec;
    }
    ctx->pc = 0x2A17E4u;
    SET_GPR_U32(ctx, 31, 0x2A17ECu);
    ctx->pc = 0x2A17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17E4u;
    // 0x2a17e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A17E4u, 0x2A17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17ECu;
label_2a17ec:
    // 0x2a17ec: 0x3c01451c  lui         $at, 0x451C
    ctx->pc = 0x2a17ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17692 << 16));
label_2a17f0:
    // 0x2a17f0: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2a17f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_2a17f4:
    // 0x2a17f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a17f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a17f8:
    // 0x2a17f8: 0x0  nop
    ctx->pc = 0x2a17f8u;
    // NOP
label_2a17fc:
    // 0x2a17fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a17fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a1800:
    // 0x2a1800: 0x0  nop
    ctx->pc = 0x2a1800u;
    // NOP
label_2a1804:
    // 0x2a1804: 0x4500009e  bc1f        . + 4 + (0x9E << 2)
label_2a1808:
    if (ctx->pc == 0x2A1808u) {
        ctx->pc = 0x2A1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1804u;
        // 0x2a1808: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A180Cu;
        goto label_2a180c;
    }
    ctx->pc = 0x2A1804u;
    {
        const bool branch_taken_0x2a1804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1804u;
        // 0x2a1808: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1804) {
            ctx->pc = 0x2A1A80u;
            goto label_2a1a80;
        }
    }
    ctx->pc = 0x2A180Cu;
label_2a180c:
    // 0x2a180c: 0xc0a4e54  jal         func_293950
label_2a1810:
    if (ctx->pc == 0x2A1810u) {
        ctx->pc = 0x2A1814u;
        goto label_2a1814;
    }
    ctx->pc = 0x2A180Cu;
    SET_GPR_U32(ctx, 31, 0x2A1814u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A180Cu, 0x2A1814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1814u;
label_2a1814:
    // 0x2a1814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a1814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1818:
    // 0x2a1818: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2a181c:
    if (ctx->pc == 0x2A181Cu) {
        ctx->pc = 0x2A181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1818u;
        // 0x2a181c: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1820u;
        goto label_2a1820;
    }
    ctx->pc = 0x2A1818u;
    {
        const bool branch_taken_0x2a1818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1818u;
        // 0x2a181c: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1818) {
            ctx->pc = 0x2A185Cu;
            goto label_2a185c;
        }
    }
    ctx->pc = 0x2A1820u;
label_2a1820:
    // 0x2a1820: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a1820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1824:
    // 0x2a1824: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a1824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a1828:
    // 0x2a1828: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a182c:
    // 0x2a182c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1830:
    // 0x2a1830: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2a1830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_2a1834:
    // 0x2a1834: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a1834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a1838:
    // 0x2a1838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a1838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a183c:
    // 0x2a183c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2a183cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2a1840:
    // 0x2a1840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1844:
    // 0x2a1844: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a1844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2a1848:
    // 0x2a1848: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2a1848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a184c:
    // 0x2a184c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a184cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1850:
    // 0x2a1850: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a1850u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1854:
    // 0x2a1854: 0xc0a8cc8  jal         func_2A3320
label_2a1858:
    if (ctx->pc == 0x2A1858u) {
        ctx->pc = 0x2A1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1854u;
        // 0x2a1858: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A185Cu;
        goto label_2a185c;
    }
    ctx->pc = 0x2A1854u;
    SET_GPR_U32(ctx, 31, 0x2A185Cu);
    ctx->pc = 0x2A1858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1854u;
    // 0x2a1858: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3320u, 0x2A1854u, 0x2A185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A185Cu;
label_2a185c:
    // 0x2a185c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1860:
    // 0x2a1860: 0xc0a35d6  jal         func_28D758
label_2a1864:
    if (ctx->pc == 0x2A1864u) {
        ctx->pc = 0x2A1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1860u;
        // 0x2a1864: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1868u;
        goto label_2a1868;
    }
    ctx->pc = 0x2A1860u;
    SET_GPR_U32(ctx, 31, 0x2A1868u);
    ctx->pc = 0x2A1864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1860u;
    // 0x2a1864: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A1860u, 0x2A1868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1868u;
label_2a1868:
    // 0x2a1868: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a1868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a186c:
    // 0x2a186c: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2a186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2a1870:
    // 0x2a1870: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a1870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a1874:
    // 0x2a1874: 0x10000065  b           . + 4 + (0x65 << 2)
label_2a1878:
    if (ctx->pc == 0x2A1878u) {
        ctx->pc = 0x2A1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1874u;
        // 0x2a1878: 0xa6550010  sh          $s5, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A187Cu;
        goto label_2a187c;
    }
    ctx->pc = 0x2A1874u;
    {
        const bool branch_taken_0x2a1874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1874u;
        // 0x2a1878: 0xa6550010  sh          $s5, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1874) {
            ctx->pc = 0x2A1A0Cu;
            goto label_2a1a0c;
        }
    }
    ctx->pc = 0x2A187Cu;
label_2a187c:
    // 0x2a187c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a187cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a1880:
    // 0x2a1880: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x2a1880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_2a1884:
    // 0x2a1884: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a1884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a1888:
    // 0x2a1888: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a1888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a188c:
    // 0x2a188c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a188cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a1890:
    // 0x2a1890: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_2a1894:
    if (ctx->pc == 0x2A1894u) {
        ctx->pc = 0x2A1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1890u;
        // 0x2a1894: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1898u;
        goto label_2a1898;
    }
    ctx->pc = 0x2A1890u;
    {
        const bool branch_taken_0x2a1890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1890u;
        // 0x2a1894: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1890) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A1898u;
label_2a1898:
    // 0x2a1898: 0x10000078  b           . + 4 + (0x78 << 2)
label_2a189c:
    if (ctx->pc == 0x2A189Cu) {
        ctx->pc = 0x2A189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1898u;
        // 0x2a189c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A18A0u;
        goto label_2a18a0;
    }
    ctx->pc = 0x2A1898u;
    {
        const bool branch_taken_0x2a1898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1898u;
        // 0x2a189c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1898) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A18A0u;
label_2a18a0:
    // 0x2a18a0: 0x86430014  lh          $v1, 0x14($s2)
    ctx->pc = 0x2a18a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_2a18a4:
    // 0x2a18a4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2a18a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2a18a8:
    // 0x2a18a8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2a18ac:
    if (ctx->pc == 0x2A18ACu) {
        ctx->pc = 0x2A18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18A8u;
        // 0x2a18ac: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A18B0u;
        goto label_2a18b0;
    }
    ctx->pc = 0x2A18A8u;
    {
        const bool branch_taken_0x2a18a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18A8u;
        // 0x2a18ac: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18a8) {
            ctx->pc = 0x2A1994u;
            goto label_2a1994;
        }
    }
    ctx->pc = 0x2A18B0u;
label_2a18b0:
    // 0x2a18b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a18b4:
    // 0x2a18b4: 0x24422b30  addiu       $v0, $v0, 0x2B30
    ctx->pc = 0x2a18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11056));
label_2a18b8:
    // 0x2a18b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a18bc:
    // 0x2a18bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a18bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a18c0:
    // 0x2a18c0: 0x800008  jr          $a0
label_2a18c4:
    if (ctx->pc == 0x2A18C4u) {
        ctx->pc = 0x2A18C8u;
        goto label_2a18c8;
    }
    ctx->pc = 0x2A18C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A18C8u: goto label_2a18c8;
            case 0x2A18D4u: goto label_2a18d4;
            case 0x2A18FCu: goto label_2a18fc;
            case 0x2A1908u: goto label_2a1908;
            case 0x2A1930u: goto label_2a1930;
            case 0x2A1968u: goto label_2a1968;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A18C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A18C8u;
label_2a18c8:
    // 0x2a18c8: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a18c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a18cc:
    // 0x2a18cc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2a18d0:
    if (ctx->pc == 0x2A18D0u) {
        ctx->pc = 0x2A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18CCu;
        // 0x2a18d0: 0x24842b10  addiu       $a0, $a0, 0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A18D4u;
        goto label_2a18d4;
    }
    ctx->pc = 0x2A18CCu;
    {
        const bool branch_taken_0x2a18cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18CCu;
        // 0x2a18d0: 0x24842b10  addiu       $a0, $a0, 0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18cc) {
            ctx->pc = 0x2A1938u;
            goto label_2a1938;
        }
    }
    ctx->pc = 0x2A18D4u;
label_2a18d4:
    // 0x2a18d4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a18d8:
    // 0x2a18d8: 0xc10561e  jal         func_415878
label_2a18dc:
    if (ctx->pc == 0x2A18DCu) {
        ctx->pc = 0x2A18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18D8u;
        // 0x2a18dc: 0x24842b10  addiu       $a0, $a0, 0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A18E0u;
        goto label_2a18e0;
    }
    ctx->pc = 0x2A18D8u;
    SET_GPR_U32(ctx, 31, 0x2A18E0u);
    ctx->pc = 0x2A18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18D8u;
    // 0x2a18dc: 0x24842b10  addiu       $a0, $a0, 0x2B10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415878u, 0x2A18D8u, 0x2A18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18E0u;
label_2a18e0:
    // 0x2a18e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a18e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a18e4:
    // 0x2a18e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a18e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a18e8:
    // 0x2a18e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a18ec:
    // 0x2a18ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a18ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a18f0:
    // 0x2a18f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a18f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a18f4:
    // 0x2a18f4: 0x10000018  b           . + 4 + (0x18 << 2)
label_2a18f8:
    if (ctx->pc == 0x2A18F8u) {
        ctx->pc = 0x2A18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18F4u;
        // 0x2a18f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A18FCu;
        goto label_2a18fc;
    }
    ctx->pc = 0x2A18F4u;
    {
        const bool branch_taken_0x2a18f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18F4u;
        // 0x2a18f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18f4) {
            ctx->pc = 0x2A1958u;
            goto label_2a1958;
        }
    }
    ctx->pc = 0x2A18FCu;
label_2a18fc:
    // 0x2a18fc: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a1900:
    // 0x2a1900: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a1904:
    if (ctx->pc == 0x2A1904u) {
        ctx->pc = 0x2A1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1900u;
        // 0x2a1904: 0x24842b18  addiu       $a0, $a0, 0x2B18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1908u;
        goto label_2a1908;
    }
    ctx->pc = 0x2A1900u;
    {
        const bool branch_taken_0x2a1900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1900u;
        // 0x2a1904: 0x24842b18  addiu       $a0, $a0, 0x2B18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1900) {
            ctx->pc = 0x2A1938u;
            goto label_2a1938;
        }
    }
    ctx->pc = 0x2A1908u;
label_2a1908:
    // 0x2a1908: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a1908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a190c:
    // 0x2a190c: 0xc10561e  jal         func_415878
label_2a1910:
    if (ctx->pc == 0x2A1910u) {
        ctx->pc = 0x2A1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A190Cu;
        // 0x2a1910: 0x24842b18  addiu       $a0, $a0, 0x2B18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1914u;
        goto label_2a1914;
    }
    ctx->pc = 0x2A190Cu;
    SET_GPR_U32(ctx, 31, 0x2A1914u);
    ctx->pc = 0x2A1910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A190Cu;
    // 0x2a1910: 0x24842b18  addiu       $a0, $a0, 0x2B18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415878u, 0x2A190Cu, 0x2A1914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1914u;
label_2a1914:
    // 0x2a1914: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a1914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1918:
    // 0x2a1918: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a191c:
    // 0x2a191c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1920:
    // 0x2a1920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1924:
    // 0x2a1924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a1924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1928:
    // 0x2a1928: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a192c:
    if (ctx->pc == 0x2A192Cu) {
        ctx->pc = 0x2A192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1928u;
        // 0x2a192c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1930u;
        goto label_2a1930;
    }
    ctx->pc = 0x2A1928u;
    {
        const bool branch_taken_0x2a1928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1928u;
        // 0x2a192c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1928) {
            ctx->pc = 0x2A1958u;
            goto label_2a1958;
        }
    }
    ctx->pc = 0x2A1930u;
label_2a1930:
    // 0x2a1930: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a1930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a1934:
    // 0x2a1934: 0x24842b20  addiu       $a0, $a0, 0x2B20
    ctx->pc = 0x2a1934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11040));
label_2a1938:
    // 0x2a1938: 0xc10561e  jal         func_415878
label_2a193c:
    if (ctx->pc == 0x2A193Cu) {
        ctx->pc = 0x2A1940u;
        goto label_2a1940;
    }
    ctx->pc = 0x2A1938u;
    SET_GPR_U32(ctx, 31, 0x2A1940u);
    ctx->pc = 0x415878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415878u, 0x2A1938u, 0x2A1940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1940u;
label_2a1940:
    // 0x2a1940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a1940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1944:
    // 0x2a1944: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1948:
    // 0x2a1948: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a194c:
    // 0x2a194c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a194cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1950:
    // 0x2a1950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a1950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1954:
    // 0x2a1954: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1958:
    // 0x2a1958: 0xc0b816a  jal         func_2E05A8
label_2a195c:
    if (ctx->pc == 0x2A195Cu) {
        ctx->pc = 0x2A195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1958u;
        // 0x2a195c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1960u;
        goto label_2a1960;
    }
    ctx->pc = 0x2A1958u;
    SET_GPR_U32(ctx, 31, 0x2A1960u);
    ctx->pc = 0x2A195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1958u;
    // 0x2a195c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E05A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E05A8u, 0x2A1958u, 0x2A1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1960u;
label_2a1960:
    // 0x2a1960: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a1964:
    if (ctx->pc == 0x2A1964u) {
        ctx->pc = 0x2A1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1960u;
        // 0x2a1964: 0x2402012f  addiu       $v0, $zero, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1968u;
        goto label_2a1968;
    }
    ctx->pc = 0x2A1960u;
    {
        const bool branch_taken_0x2a1960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1960u;
        // 0x2a1964: 0x2402012f  addiu       $v0, $zero, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1960) {
            ctx->pc = 0x2A1998u;
            goto label_2a1998;
        }
    }
    ctx->pc = 0x2A1968u;
label_2a1968:
    // 0x2a1968: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2a1968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2a196c:
    // 0x2a196c: 0xc10561e  jal         func_415878
label_2a1970:
    if (ctx->pc == 0x2A1970u) {
        ctx->pc = 0x2A1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A196Cu;
        // 0x2a1970: 0x24842b20  addiu       $a0, $a0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1974u;
        goto label_2a1974;
    }
    ctx->pc = 0x2A196Cu;
    SET_GPR_U32(ctx, 31, 0x2A1974u);
    ctx->pc = 0x2A1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A196Cu;
    // 0x2a1970: 0x24842b20  addiu       $a0, $a0, 0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415878u, 0x2A196Cu, 0x2A1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1974u;
label_2a1974:
    // 0x2a1974: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a1974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a1978:
    // 0x2a1978: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a197c:
    // 0x2a197c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1980:
    // 0x2a1980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1984:
    // 0x2a1984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a1984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1988:
    // 0x2a1988: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a198c:
    // 0x2a198c: 0xc0b816a  jal         func_2E05A8
label_2a1990:
    if (ctx->pc == 0x2A1990u) {
        ctx->pc = 0x2A1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A198Cu;
        // 0x2a1990: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1994u;
        goto label_2a1994;
    }
    ctx->pc = 0x2A198Cu;
    SET_GPR_U32(ctx, 31, 0x2A1994u);
    ctx->pc = 0x2A1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A198Cu;
    // 0x2a1990: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E05A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E05A8u, 0x2A198Cu, 0x2A1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1994u;
label_2a1994:
    // 0x2a1994: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x2a1994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
label_2a1998:
    // 0x2a1998: 0x10000038  b           . + 4 + (0x38 << 2)
label_2a199c:
    if (ctx->pc == 0x2A199Cu) {
        ctx->pc = 0x2A199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1998u;
        // 0x2a199c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A19A0u;
        goto label_2a19a0;
    }
    ctx->pc = 0x2A1998u;
    {
        const bool branch_taken_0x2a1998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1998u;
        // 0x2a199c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1998) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A19A0u;
label_2a19a0:
    // 0x2a19a0: 0xc0a4e54  jal         func_293950
label_2a19a4:
    if (ctx->pc == 0x2A19A4u) {
        ctx->pc = 0x2A19A8u;
        goto label_2a19a8;
    }
    ctx->pc = 0x2A19A0u;
    SET_GPR_U32(ctx, 31, 0x2A19A8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A19A0u, 0x2A19A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19A8u;
label_2a19a8:
    // 0x2a19a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a19a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a19ac:
    // 0x2a19ac: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2a19b0:
    if (ctx->pc == 0x2A19B0u) {
        ctx->pc = 0x2A19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19ACu;
        // 0x2a19b0: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A19B4u;
        goto label_2a19b4;
    }
    ctx->pc = 0x2A19ACu;
    {
        const bool branch_taken_0x2a19ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19ACu;
        // 0x2a19b0: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a19ac) {
            ctx->pc = 0x2A19F0u;
            goto label_2a19f0;
        }
    }
    ctx->pc = 0x2A19B4u;
label_2a19b4:
    // 0x2a19b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a19b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a19b8:
    // 0x2a19b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a19b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2a19bc:
    // 0x2a19bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a19bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a19c0:
    // 0x2a19c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a19c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a19c4:
    // 0x2a19c4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a19c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a19c8:
    // 0x2a19c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a19c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a19cc:
    // 0x2a19cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a19ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a19d0:
    // 0x2a19d0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2a19d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2a19d4:
    // 0x2a19d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a19d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a19d8:
    // 0x2a19d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a19d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2a19dc:
    // 0x2a19dc: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2a19dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a19e0:
    // 0x2a19e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a19e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a19e4:
    // 0x2a19e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a19e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a19e8:
    // 0x2a19e8: 0xc0a8cc8  jal         func_2A3320
label_2a19ec:
    if (ctx->pc == 0x2A19ECu) {
        ctx->pc = 0x2A19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19E8u;
        // 0x2a19ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A19F0u;
        goto label_2a19f0;
    }
    ctx->pc = 0x2A19E8u;
    SET_GPR_U32(ctx, 31, 0x2A19F0u);
    ctx->pc = 0x2A19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19E8u;
    // 0x2a19ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3320u, 0x2A19E8u, 0x2A19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19F0u;
label_2a19f0:
    // 0x2a19f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a19f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a19f4:
    // 0x2a19f4: 0xc0a35d6  jal         func_28D758
label_2a19f8:
    if (ctx->pc == 0x2A19F8u) {
        ctx->pc = 0x2A19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A19F4u;
        // 0x2a19f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A19FCu;
        goto label_2a19fc;
    }
    ctx->pc = 0x2A19F4u;
    SET_GPR_U32(ctx, 31, 0x2A19FCu);
    ctx->pc = 0x2A19F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A19F4u;
    // 0x2a19f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A19F4u, 0x2A19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19FCu;
label_2a19fc:
    // 0x2a19fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2a19fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2a1a00:
    // 0x2a1a00: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x2a1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2a1a04:
    // 0x2a1a04: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a1a08:
    // 0x2a1a08: 0xa6510010  sh          $s1, 0x10($s2)
    ctx->pc = 0x2a1a08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 17));
label_2a1a0c:
    // 0x2a1a0c: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x2a1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_2a1a10:
    // 0x2a1a10: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2a1a14:
    if (ctx->pc == 0x2A1A14u) {
        ctx->pc = 0x2A1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A10u;
        // 0x2a1a14: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1A18u;
        goto label_2a1a18;
    }
    ctx->pc = 0x2A1A10u;
    {
        const bool branch_taken_0x2a1a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A10u;
        // 0x2a1a14: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a10) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A1A18u;
label_2a1a18:
    // 0x2a1a18: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a1a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a1a1c:
    // 0x2a1a1c: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x2a1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_2a1a20:
    // 0x2a1a20: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a1a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a1a24:
    // 0x2a1a24: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a1a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a1a28:
    // 0x2a1a28: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a1a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a1a2c:
    // 0x2a1a2c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2a1a30:
    if (ctx->pc == 0x2A1A30u) {
        ctx->pc = 0x2A1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A2Cu;
        // 0x2a1a30: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1A34u;
        goto label_2a1a34;
    }
    ctx->pc = 0x2A1A2Cu;
    {
        const bool branch_taken_0x2a1a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A2Cu;
        // 0x2a1a30: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a2c) {
            ctx->pc = 0x2A1A80u;
            goto label_2a1a80;
        }
    }
    ctx->pc = 0x2A1A34u;
label_2a1a34:
    // 0x2a1a34: 0x96420014  lhu         $v0, 0x14($s2)
    ctx->pc = 0x2a1a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_2a1a38:
    // 0x2a1a38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a1a3c:
    // 0x2a1a3c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2a1a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a1a40:
    // 0x2a1a40: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2a1a40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2a1a44:
    // 0x2a1a44: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x2a1a44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_2a1a48:
    // 0x2a1a48: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2a1a4c:
    if (ctx->pc == 0x2A1A4Cu) {
        ctx->pc = 0x2A1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A48u;
        // 0x2a1a4c: 0xa6420014  sh          $v0, 0x14($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1A50u;
        goto label_2a1a50;
    }
    ctx->pc = 0x2A1A48u;
    {
        const bool branch_taken_0x2a1a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A48u;
        // 0x2a1a4c: 0xa6420014  sh          $v0, 0x14($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a48) {
            ctx->pc = 0x2A1A54u;
            goto label_2a1a54;
        }
    }
    ctx->pc = 0x2A1A50u;
label_2a1a50:
    // 0x2a1a50: 0xa6400014  sh          $zero, 0x14($s2)
    ctx->pc = 0x2a1a50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 0));
label_2a1a54:
    // 0x2a1a54: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2a1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2a1a58:
    // 0x2a1a58: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a1a5c:
    if (ctx->pc == 0x2A1A5Cu) {
        ctx->pc = 0x2A1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A58u;
        // 0x2a1a5c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1A60u;
        goto label_2a1a60;
    }
    ctx->pc = 0x2A1A58u;
    {
        const bool branch_taken_0x2a1a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A58u;
        // 0x2a1a5c: 0xa6420010  sh          $v0, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1a58) {
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A1A60u;
label_2a1a60:
    // 0x2a1a60: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a1a64:
    // 0x2a1a64: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x2a1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_2a1a68:
    // 0x2a1a68: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a1a6c:
    // 0x2a1a6c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a1a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a1a70:
    // 0x2a1a70: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a1a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a1a74:
    // 0x2a1a74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2a1a78:
    if (ctx->pc == 0x2A1A78u) {
        ctx->pc = 0x2A1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1A74u;
        // 0x2a1a78: 0xa6510010  sh          $s1, 0x10($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1A7Cu;
        goto label_2a1a7c;
    }
    ctx->pc = 0x2A1A74u;
    {
        const bool branch_taken_0x2a1a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a74) {
            ctx->pc = 0x2A1A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1A74u;
            // 0x2a1a78: 0xa6510010  sh          $s1, 0x10($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1A7Cu;
            goto label_2a1a7c;
        }
    }
    ctx->pc = 0x2A1A7Cu;
label_2a1a7c:
    // 0x2a1a7c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2a1a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2a1a80:
    // 0x2a1a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a1a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1a84:
    // 0x2a1a84: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2a1a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a1a88:
    // 0x2a1a88: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2a1a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a1a8c:
    // 0x2a1a8c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2a1a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a1a90:
    // 0x2a1a90: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2a1a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a1a94:
    // 0x2a1a94: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2a1a94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a1a98:
    // 0x2a1a98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a1a98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a1a9c:
    // 0x2a1a9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a1a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a1aa0:
    // 0x2a1aa0: 0x3e00008  jr          $ra
label_2a1aa4:
    if (ctx->pc == 0x2A1AA4u) {
        ctx->pc = 0x2A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AA0u;
        // 0x2a1aa4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1AA8u;
        goto label_fallthrough_0x2a1aa0;
    }
    ctx->pc = 0x2A1AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AA0u;
        // 0x2a1aa4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a1aa0:
    ctx->pc = 0x2A1AA8u;
}
