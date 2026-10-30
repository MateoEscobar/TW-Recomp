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

// Function: sub_001A1138
// Address: 0x1a1138 - 0x1a1be8
void sub_001A1138_0x1a1138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1138_0x1a1138");
#endif

    switch (ctx->pc) {
        case 0x1a1138u: goto label_1a1138;
        case 0x1a113cu: goto label_1a113c;
        case 0x1a1140u: goto label_1a1140;
        case 0x1a1144u: goto label_1a1144;
        case 0x1a1148u: goto label_1a1148;
        case 0x1a114cu: goto label_1a114c;
        case 0x1a1150u: goto label_1a1150;
        case 0x1a1154u: goto label_1a1154;
        case 0x1a1158u: goto label_1a1158;
        case 0x1a115cu: goto label_1a115c;
        case 0x1a1160u: goto label_1a1160;
        case 0x1a1164u: goto label_1a1164;
        case 0x1a1168u: goto label_1a1168;
        case 0x1a116cu: goto label_1a116c;
        case 0x1a1170u: goto label_1a1170;
        case 0x1a1174u: goto label_1a1174;
        case 0x1a1178u: goto label_1a1178;
        case 0x1a117cu: goto label_1a117c;
        case 0x1a1180u: goto label_1a1180;
        case 0x1a1184u: goto label_1a1184;
        case 0x1a1188u: goto label_1a1188;
        case 0x1a118cu: goto label_1a118c;
        case 0x1a1190u: goto label_1a1190;
        case 0x1a1194u: goto label_1a1194;
        case 0x1a1198u: goto label_1a1198;
        case 0x1a119cu: goto label_1a119c;
        case 0x1a11a0u: goto label_1a11a0;
        case 0x1a11a4u: goto label_1a11a4;
        case 0x1a11a8u: goto label_1a11a8;
        case 0x1a11acu: goto label_1a11ac;
        case 0x1a11b0u: goto label_1a11b0;
        case 0x1a11b4u: goto label_1a11b4;
        case 0x1a11b8u: goto label_1a11b8;
        case 0x1a11bcu: goto label_1a11bc;
        case 0x1a11c0u: goto label_1a11c0;
        case 0x1a11c4u: goto label_1a11c4;
        case 0x1a11c8u: goto label_1a11c8;
        case 0x1a11ccu: goto label_1a11cc;
        case 0x1a11d0u: goto label_1a11d0;
        case 0x1a11d4u: goto label_1a11d4;
        case 0x1a11d8u: goto label_1a11d8;
        case 0x1a11dcu: goto label_1a11dc;
        case 0x1a11e0u: goto label_1a11e0;
        case 0x1a11e4u: goto label_1a11e4;
        case 0x1a11e8u: goto label_1a11e8;
        case 0x1a11ecu: goto label_1a11ec;
        case 0x1a11f0u: goto label_1a11f0;
        case 0x1a11f4u: goto label_1a11f4;
        case 0x1a11f8u: goto label_1a11f8;
        case 0x1a11fcu: goto label_1a11fc;
        case 0x1a1200u: goto label_1a1200;
        case 0x1a1204u: goto label_1a1204;
        case 0x1a1208u: goto label_1a1208;
        case 0x1a120cu: goto label_1a120c;
        case 0x1a1210u: goto label_1a1210;
        case 0x1a1214u: goto label_1a1214;
        case 0x1a1218u: goto label_1a1218;
        case 0x1a121cu: goto label_1a121c;
        case 0x1a1220u: goto label_1a1220;
        case 0x1a1224u: goto label_1a1224;
        case 0x1a1228u: goto label_1a1228;
        case 0x1a122cu: goto label_1a122c;
        case 0x1a1230u: goto label_1a1230;
        case 0x1a1234u: goto label_1a1234;
        case 0x1a1238u: goto label_1a1238;
        case 0x1a123cu: goto label_1a123c;
        case 0x1a1240u: goto label_1a1240;
        case 0x1a1244u: goto label_1a1244;
        case 0x1a1248u: goto label_1a1248;
        case 0x1a124cu: goto label_1a124c;
        case 0x1a1250u: goto label_1a1250;
        case 0x1a1254u: goto label_1a1254;
        case 0x1a1258u: goto label_1a1258;
        case 0x1a125cu: goto label_1a125c;
        case 0x1a1260u: goto label_1a1260;
        case 0x1a1264u: goto label_1a1264;
        case 0x1a1268u: goto label_1a1268;
        case 0x1a126cu: goto label_1a126c;
        case 0x1a1270u: goto label_1a1270;
        case 0x1a1274u: goto label_1a1274;
        case 0x1a1278u: goto label_1a1278;
        case 0x1a127cu: goto label_1a127c;
        case 0x1a1280u: goto label_1a1280;
        case 0x1a1284u: goto label_1a1284;
        case 0x1a1288u: goto label_1a1288;
        case 0x1a128cu: goto label_1a128c;
        case 0x1a1290u: goto label_1a1290;
        case 0x1a1294u: goto label_1a1294;
        case 0x1a1298u: goto label_1a1298;
        case 0x1a129cu: goto label_1a129c;
        case 0x1a12a0u: goto label_1a12a0;
        case 0x1a12a4u: goto label_1a12a4;
        case 0x1a12a8u: goto label_1a12a8;
        case 0x1a12acu: goto label_1a12ac;
        case 0x1a12b0u: goto label_1a12b0;
        case 0x1a12b4u: goto label_1a12b4;
        case 0x1a12b8u: goto label_1a12b8;
        case 0x1a12bcu: goto label_1a12bc;
        case 0x1a12c0u: goto label_1a12c0;
        case 0x1a12c4u: goto label_1a12c4;
        case 0x1a12c8u: goto label_1a12c8;
        case 0x1a12ccu: goto label_1a12cc;
        case 0x1a12d0u: goto label_1a12d0;
        case 0x1a12d4u: goto label_1a12d4;
        case 0x1a12d8u: goto label_1a12d8;
        case 0x1a12dcu: goto label_1a12dc;
        case 0x1a12e0u: goto label_1a12e0;
        case 0x1a12e4u: goto label_1a12e4;
        case 0x1a12e8u: goto label_1a12e8;
        case 0x1a12ecu: goto label_1a12ec;
        case 0x1a12f0u: goto label_1a12f0;
        case 0x1a12f4u: goto label_1a12f4;
        case 0x1a12f8u: goto label_1a12f8;
        case 0x1a12fcu: goto label_1a12fc;
        case 0x1a1300u: goto label_1a1300;
        case 0x1a1304u: goto label_1a1304;
        case 0x1a1308u: goto label_1a1308;
        case 0x1a130cu: goto label_1a130c;
        case 0x1a1310u: goto label_1a1310;
        case 0x1a1314u: goto label_1a1314;
        case 0x1a1318u: goto label_1a1318;
        case 0x1a131cu: goto label_1a131c;
        case 0x1a1320u: goto label_1a1320;
        case 0x1a1324u: goto label_1a1324;
        case 0x1a1328u: goto label_1a1328;
        case 0x1a132cu: goto label_1a132c;
        case 0x1a1330u: goto label_1a1330;
        case 0x1a1334u: goto label_1a1334;
        case 0x1a1338u: goto label_1a1338;
        case 0x1a133cu: goto label_1a133c;
        case 0x1a1340u: goto label_1a1340;
        case 0x1a1344u: goto label_1a1344;
        case 0x1a1348u: goto label_1a1348;
        case 0x1a134cu: goto label_1a134c;
        case 0x1a1350u: goto label_1a1350;
        case 0x1a1354u: goto label_1a1354;
        case 0x1a1358u: goto label_1a1358;
        case 0x1a135cu: goto label_1a135c;
        case 0x1a1360u: goto label_1a1360;
        case 0x1a1364u: goto label_1a1364;
        case 0x1a1368u: goto label_1a1368;
        case 0x1a136cu: goto label_1a136c;
        case 0x1a1370u: goto label_1a1370;
        case 0x1a1374u: goto label_1a1374;
        case 0x1a1378u: goto label_1a1378;
        case 0x1a137cu: goto label_1a137c;
        case 0x1a1380u: goto label_1a1380;
        case 0x1a1384u: goto label_1a1384;
        case 0x1a1388u: goto label_1a1388;
        case 0x1a138cu: goto label_1a138c;
        case 0x1a1390u: goto label_1a1390;
        case 0x1a1394u: goto label_1a1394;
        case 0x1a1398u: goto label_1a1398;
        case 0x1a139cu: goto label_1a139c;
        case 0x1a13a0u: goto label_1a13a0;
        case 0x1a13a4u: goto label_1a13a4;
        case 0x1a13a8u: goto label_1a13a8;
        case 0x1a13acu: goto label_1a13ac;
        case 0x1a13b0u: goto label_1a13b0;
        case 0x1a13b4u: goto label_1a13b4;
        case 0x1a13b8u: goto label_1a13b8;
        case 0x1a13bcu: goto label_1a13bc;
        case 0x1a13c0u: goto label_1a13c0;
        case 0x1a13c4u: goto label_1a13c4;
        case 0x1a13c8u: goto label_1a13c8;
        case 0x1a13ccu: goto label_1a13cc;
        case 0x1a13d0u: goto label_1a13d0;
        case 0x1a13d4u: goto label_1a13d4;
        case 0x1a13d8u: goto label_1a13d8;
        case 0x1a13dcu: goto label_1a13dc;
        case 0x1a13e0u: goto label_1a13e0;
        case 0x1a13e4u: goto label_1a13e4;
        case 0x1a13e8u: goto label_1a13e8;
        case 0x1a13ecu: goto label_1a13ec;
        case 0x1a13f0u: goto label_1a13f0;
        case 0x1a13f4u: goto label_1a13f4;
        case 0x1a13f8u: goto label_1a13f8;
        case 0x1a13fcu: goto label_1a13fc;
        case 0x1a1400u: goto label_1a1400;
        case 0x1a1404u: goto label_1a1404;
        case 0x1a1408u: goto label_1a1408;
        case 0x1a140cu: goto label_1a140c;
        case 0x1a1410u: goto label_1a1410;
        case 0x1a1414u: goto label_1a1414;
        case 0x1a1418u: goto label_1a1418;
        case 0x1a141cu: goto label_1a141c;
        case 0x1a1420u: goto label_1a1420;
        case 0x1a1424u: goto label_1a1424;
        case 0x1a1428u: goto label_1a1428;
        case 0x1a142cu: goto label_1a142c;
        case 0x1a1430u: goto label_1a1430;
        case 0x1a1434u: goto label_1a1434;
        case 0x1a1438u: goto label_1a1438;
        case 0x1a143cu: goto label_1a143c;
        case 0x1a1440u: goto label_1a1440;
        case 0x1a1444u: goto label_1a1444;
        case 0x1a1448u: goto label_1a1448;
        case 0x1a144cu: goto label_1a144c;
        case 0x1a1450u: goto label_1a1450;
        case 0x1a1454u: goto label_1a1454;
        case 0x1a1458u: goto label_1a1458;
        case 0x1a145cu: goto label_1a145c;
        case 0x1a1460u: goto label_1a1460;
        case 0x1a1464u: goto label_1a1464;
        case 0x1a1468u: goto label_1a1468;
        case 0x1a146cu: goto label_1a146c;
        case 0x1a1470u: goto label_1a1470;
        case 0x1a1474u: goto label_1a1474;
        case 0x1a1478u: goto label_1a1478;
        case 0x1a147cu: goto label_1a147c;
        case 0x1a1480u: goto label_1a1480;
        case 0x1a1484u: goto label_1a1484;
        case 0x1a1488u: goto label_1a1488;
        case 0x1a148cu: goto label_1a148c;
        case 0x1a1490u: goto label_1a1490;
        case 0x1a1494u: goto label_1a1494;
        case 0x1a1498u: goto label_1a1498;
        case 0x1a149cu: goto label_1a149c;
        case 0x1a14a0u: goto label_1a14a0;
        case 0x1a14a4u: goto label_1a14a4;
        case 0x1a14a8u: goto label_1a14a8;
        case 0x1a14acu: goto label_1a14ac;
        case 0x1a14b0u: goto label_1a14b0;
        case 0x1a14b4u: goto label_1a14b4;
        case 0x1a14b8u: goto label_1a14b8;
        case 0x1a14bcu: goto label_1a14bc;
        case 0x1a14c0u: goto label_1a14c0;
        case 0x1a14c4u: goto label_1a14c4;
        case 0x1a14c8u: goto label_1a14c8;
        case 0x1a14ccu: goto label_1a14cc;
        case 0x1a14d0u: goto label_1a14d0;
        case 0x1a14d4u: goto label_1a14d4;
        case 0x1a14d8u: goto label_1a14d8;
        case 0x1a14dcu: goto label_1a14dc;
        case 0x1a14e0u: goto label_1a14e0;
        case 0x1a14e4u: goto label_1a14e4;
        case 0x1a14e8u: goto label_1a14e8;
        case 0x1a14ecu: goto label_1a14ec;
        case 0x1a14f0u: goto label_1a14f0;
        case 0x1a14f4u: goto label_1a14f4;
        case 0x1a14f8u: goto label_1a14f8;
        case 0x1a14fcu: goto label_1a14fc;
        case 0x1a1500u: goto label_1a1500;
        case 0x1a1504u: goto label_1a1504;
        case 0x1a1508u: goto label_1a1508;
        case 0x1a150cu: goto label_1a150c;
        case 0x1a1510u: goto label_1a1510;
        case 0x1a1514u: goto label_1a1514;
        case 0x1a1518u: goto label_1a1518;
        case 0x1a151cu: goto label_1a151c;
        case 0x1a1520u: goto label_1a1520;
        case 0x1a1524u: goto label_1a1524;
        case 0x1a1528u: goto label_1a1528;
        case 0x1a152cu: goto label_1a152c;
        case 0x1a1530u: goto label_1a1530;
        case 0x1a1534u: goto label_1a1534;
        case 0x1a1538u: goto label_1a1538;
        case 0x1a153cu: goto label_1a153c;
        case 0x1a1540u: goto label_1a1540;
        case 0x1a1544u: goto label_1a1544;
        case 0x1a1548u: goto label_1a1548;
        case 0x1a154cu: goto label_1a154c;
        case 0x1a1550u: goto label_1a1550;
        case 0x1a1554u: goto label_1a1554;
        case 0x1a1558u: goto label_1a1558;
        case 0x1a155cu: goto label_1a155c;
        case 0x1a1560u: goto label_1a1560;
        case 0x1a1564u: goto label_1a1564;
        case 0x1a1568u: goto label_1a1568;
        case 0x1a156cu: goto label_1a156c;
        case 0x1a1570u: goto label_1a1570;
        case 0x1a1574u: goto label_1a1574;
        case 0x1a1578u: goto label_1a1578;
        case 0x1a157cu: goto label_1a157c;
        case 0x1a1580u: goto label_1a1580;
        case 0x1a1584u: goto label_1a1584;
        case 0x1a1588u: goto label_1a1588;
        case 0x1a158cu: goto label_1a158c;
        case 0x1a1590u: goto label_1a1590;
        case 0x1a1594u: goto label_1a1594;
        case 0x1a1598u: goto label_1a1598;
        case 0x1a159cu: goto label_1a159c;
        case 0x1a15a0u: goto label_1a15a0;
        case 0x1a15a4u: goto label_1a15a4;
        case 0x1a15a8u: goto label_1a15a8;
        case 0x1a15acu: goto label_1a15ac;
        case 0x1a15b0u: goto label_1a15b0;
        case 0x1a15b4u: goto label_1a15b4;
        case 0x1a15b8u: goto label_1a15b8;
        case 0x1a15bcu: goto label_1a15bc;
        case 0x1a15c0u: goto label_1a15c0;
        case 0x1a15c4u: goto label_1a15c4;
        case 0x1a15c8u: goto label_1a15c8;
        case 0x1a15ccu: goto label_1a15cc;
        case 0x1a15d0u: goto label_1a15d0;
        case 0x1a15d4u: goto label_1a15d4;
        case 0x1a15d8u: goto label_1a15d8;
        case 0x1a15dcu: goto label_1a15dc;
        case 0x1a15e0u: goto label_1a15e0;
        case 0x1a15e4u: goto label_1a15e4;
        case 0x1a15e8u: goto label_1a15e8;
        case 0x1a15ecu: goto label_1a15ec;
        case 0x1a15f0u: goto label_1a15f0;
        case 0x1a15f4u: goto label_1a15f4;
        case 0x1a15f8u: goto label_1a15f8;
        case 0x1a15fcu: goto label_1a15fc;
        case 0x1a1600u: goto label_1a1600;
        case 0x1a1604u: goto label_1a1604;
        case 0x1a1608u: goto label_1a1608;
        case 0x1a160cu: goto label_1a160c;
        case 0x1a1610u: goto label_1a1610;
        case 0x1a1614u: goto label_1a1614;
        case 0x1a1618u: goto label_1a1618;
        case 0x1a161cu: goto label_1a161c;
        case 0x1a1620u: goto label_1a1620;
        case 0x1a1624u: goto label_1a1624;
        case 0x1a1628u: goto label_1a1628;
        case 0x1a162cu: goto label_1a162c;
        case 0x1a1630u: goto label_1a1630;
        case 0x1a1634u: goto label_1a1634;
        case 0x1a1638u: goto label_1a1638;
        case 0x1a163cu: goto label_1a163c;
        case 0x1a1640u: goto label_1a1640;
        case 0x1a1644u: goto label_1a1644;
        case 0x1a1648u: goto label_1a1648;
        case 0x1a164cu: goto label_1a164c;
        case 0x1a1650u: goto label_1a1650;
        case 0x1a1654u: goto label_1a1654;
        case 0x1a1658u: goto label_1a1658;
        case 0x1a165cu: goto label_1a165c;
        case 0x1a1660u: goto label_1a1660;
        case 0x1a1664u: goto label_1a1664;
        case 0x1a1668u: goto label_1a1668;
        case 0x1a166cu: goto label_1a166c;
        case 0x1a1670u: goto label_1a1670;
        case 0x1a1674u: goto label_1a1674;
        case 0x1a1678u: goto label_1a1678;
        case 0x1a167cu: goto label_1a167c;
        case 0x1a1680u: goto label_1a1680;
        case 0x1a1684u: goto label_1a1684;
        case 0x1a1688u: goto label_1a1688;
        case 0x1a168cu: goto label_1a168c;
        case 0x1a1690u: goto label_1a1690;
        case 0x1a1694u: goto label_1a1694;
        case 0x1a1698u: goto label_1a1698;
        case 0x1a169cu: goto label_1a169c;
        case 0x1a16a0u: goto label_1a16a0;
        case 0x1a16a4u: goto label_1a16a4;
        case 0x1a16a8u: goto label_1a16a8;
        case 0x1a16acu: goto label_1a16ac;
        case 0x1a16b0u: goto label_1a16b0;
        case 0x1a16b4u: goto label_1a16b4;
        case 0x1a16b8u: goto label_1a16b8;
        case 0x1a16bcu: goto label_1a16bc;
        case 0x1a16c0u: goto label_1a16c0;
        case 0x1a16c4u: goto label_1a16c4;
        case 0x1a16c8u: goto label_1a16c8;
        case 0x1a16ccu: goto label_1a16cc;
        case 0x1a16d0u: goto label_1a16d0;
        case 0x1a16d4u: goto label_1a16d4;
        case 0x1a16d8u: goto label_1a16d8;
        case 0x1a16dcu: goto label_1a16dc;
        case 0x1a16e0u: goto label_1a16e0;
        case 0x1a16e4u: goto label_1a16e4;
        case 0x1a16e8u: goto label_1a16e8;
        case 0x1a16ecu: goto label_1a16ec;
        case 0x1a16f0u: goto label_1a16f0;
        case 0x1a16f4u: goto label_1a16f4;
        case 0x1a16f8u: goto label_1a16f8;
        case 0x1a16fcu: goto label_1a16fc;
        case 0x1a1700u: goto label_1a1700;
        case 0x1a1704u: goto label_1a1704;
        case 0x1a1708u: goto label_1a1708;
        case 0x1a170cu: goto label_1a170c;
        case 0x1a1710u: goto label_1a1710;
        case 0x1a1714u: goto label_1a1714;
        case 0x1a1718u: goto label_1a1718;
        case 0x1a171cu: goto label_1a171c;
        case 0x1a1720u: goto label_1a1720;
        case 0x1a1724u: goto label_1a1724;
        case 0x1a1728u: goto label_1a1728;
        case 0x1a172cu: goto label_1a172c;
        case 0x1a1730u: goto label_1a1730;
        case 0x1a1734u: goto label_1a1734;
        case 0x1a1738u: goto label_1a1738;
        case 0x1a173cu: goto label_1a173c;
        case 0x1a1740u: goto label_1a1740;
        case 0x1a1744u: goto label_1a1744;
        case 0x1a1748u: goto label_1a1748;
        case 0x1a174cu: goto label_1a174c;
        case 0x1a1750u: goto label_1a1750;
        case 0x1a1754u: goto label_1a1754;
        case 0x1a1758u: goto label_1a1758;
        case 0x1a175cu: goto label_1a175c;
        case 0x1a1760u: goto label_1a1760;
        case 0x1a1764u: goto label_1a1764;
        case 0x1a1768u: goto label_1a1768;
        case 0x1a176cu: goto label_1a176c;
        case 0x1a1770u: goto label_1a1770;
        case 0x1a1774u: goto label_1a1774;
        case 0x1a1778u: goto label_1a1778;
        case 0x1a177cu: goto label_1a177c;
        case 0x1a1780u: goto label_1a1780;
        case 0x1a1784u: goto label_1a1784;
        case 0x1a1788u: goto label_1a1788;
        case 0x1a178cu: goto label_1a178c;
        case 0x1a1790u: goto label_1a1790;
        case 0x1a1794u: goto label_1a1794;
        case 0x1a1798u: goto label_1a1798;
        case 0x1a179cu: goto label_1a179c;
        case 0x1a17a0u: goto label_1a17a0;
        case 0x1a17a4u: goto label_1a17a4;
        case 0x1a17a8u: goto label_1a17a8;
        case 0x1a17acu: goto label_1a17ac;
        case 0x1a17b0u: goto label_1a17b0;
        case 0x1a17b4u: goto label_1a17b4;
        case 0x1a17b8u: goto label_1a17b8;
        case 0x1a17bcu: goto label_1a17bc;
        case 0x1a17c0u: goto label_1a17c0;
        case 0x1a17c4u: goto label_1a17c4;
        case 0x1a17c8u: goto label_1a17c8;
        case 0x1a17ccu: goto label_1a17cc;
        case 0x1a17d0u: goto label_1a17d0;
        case 0x1a17d4u: goto label_1a17d4;
        case 0x1a17d8u: goto label_1a17d8;
        case 0x1a17dcu: goto label_1a17dc;
        case 0x1a17e0u: goto label_1a17e0;
        case 0x1a17e4u: goto label_1a17e4;
        case 0x1a17e8u: goto label_1a17e8;
        case 0x1a17ecu: goto label_1a17ec;
        case 0x1a17f0u: goto label_1a17f0;
        case 0x1a17f4u: goto label_1a17f4;
        case 0x1a17f8u: goto label_1a17f8;
        case 0x1a17fcu: goto label_1a17fc;
        case 0x1a1800u: goto label_1a1800;
        case 0x1a1804u: goto label_1a1804;
        case 0x1a1808u: goto label_1a1808;
        case 0x1a180cu: goto label_1a180c;
        case 0x1a1810u: goto label_1a1810;
        case 0x1a1814u: goto label_1a1814;
        case 0x1a1818u: goto label_1a1818;
        case 0x1a181cu: goto label_1a181c;
        case 0x1a1820u: goto label_1a1820;
        case 0x1a1824u: goto label_1a1824;
        case 0x1a1828u: goto label_1a1828;
        case 0x1a182cu: goto label_1a182c;
        case 0x1a1830u: goto label_1a1830;
        case 0x1a1834u: goto label_1a1834;
        case 0x1a1838u: goto label_1a1838;
        case 0x1a183cu: goto label_1a183c;
        case 0x1a1840u: goto label_1a1840;
        case 0x1a1844u: goto label_1a1844;
        case 0x1a1848u: goto label_1a1848;
        case 0x1a184cu: goto label_1a184c;
        case 0x1a1850u: goto label_1a1850;
        case 0x1a1854u: goto label_1a1854;
        case 0x1a1858u: goto label_1a1858;
        case 0x1a185cu: goto label_1a185c;
        case 0x1a1860u: goto label_1a1860;
        case 0x1a1864u: goto label_1a1864;
        case 0x1a1868u: goto label_1a1868;
        case 0x1a186cu: goto label_1a186c;
        case 0x1a1870u: goto label_1a1870;
        case 0x1a1874u: goto label_1a1874;
        case 0x1a1878u: goto label_1a1878;
        case 0x1a187cu: goto label_1a187c;
        case 0x1a1880u: goto label_1a1880;
        case 0x1a1884u: goto label_1a1884;
        case 0x1a1888u: goto label_1a1888;
        case 0x1a188cu: goto label_1a188c;
        case 0x1a1890u: goto label_1a1890;
        case 0x1a1894u: goto label_1a1894;
        case 0x1a1898u: goto label_1a1898;
        case 0x1a189cu: goto label_1a189c;
        case 0x1a18a0u: goto label_1a18a0;
        case 0x1a18a4u: goto label_1a18a4;
        case 0x1a18a8u: goto label_1a18a8;
        case 0x1a18acu: goto label_1a18ac;
        case 0x1a18b0u: goto label_1a18b0;
        case 0x1a18b4u: goto label_1a18b4;
        case 0x1a18b8u: goto label_1a18b8;
        case 0x1a18bcu: goto label_1a18bc;
        case 0x1a18c0u: goto label_1a18c0;
        case 0x1a18c4u: goto label_1a18c4;
        case 0x1a18c8u: goto label_1a18c8;
        case 0x1a18ccu: goto label_1a18cc;
        case 0x1a18d0u: goto label_1a18d0;
        case 0x1a18d4u: goto label_1a18d4;
        case 0x1a18d8u: goto label_1a18d8;
        case 0x1a18dcu: goto label_1a18dc;
        case 0x1a18e0u: goto label_1a18e0;
        case 0x1a18e4u: goto label_1a18e4;
        case 0x1a18e8u: goto label_1a18e8;
        case 0x1a18ecu: goto label_1a18ec;
        case 0x1a18f0u: goto label_1a18f0;
        case 0x1a18f4u: goto label_1a18f4;
        case 0x1a18f8u: goto label_1a18f8;
        case 0x1a18fcu: goto label_1a18fc;
        case 0x1a1900u: goto label_1a1900;
        case 0x1a1904u: goto label_1a1904;
        case 0x1a1908u: goto label_1a1908;
        case 0x1a190cu: goto label_1a190c;
        case 0x1a1910u: goto label_1a1910;
        case 0x1a1914u: goto label_1a1914;
        case 0x1a1918u: goto label_1a1918;
        case 0x1a191cu: goto label_1a191c;
        case 0x1a1920u: goto label_1a1920;
        case 0x1a1924u: goto label_1a1924;
        case 0x1a1928u: goto label_1a1928;
        case 0x1a192cu: goto label_1a192c;
        case 0x1a1930u: goto label_1a1930;
        case 0x1a1934u: goto label_1a1934;
        case 0x1a1938u: goto label_1a1938;
        case 0x1a193cu: goto label_1a193c;
        case 0x1a1940u: goto label_1a1940;
        case 0x1a1944u: goto label_1a1944;
        case 0x1a1948u: goto label_1a1948;
        case 0x1a194cu: goto label_1a194c;
        case 0x1a1950u: goto label_1a1950;
        case 0x1a1954u: goto label_1a1954;
        case 0x1a1958u: goto label_1a1958;
        case 0x1a195cu: goto label_1a195c;
        case 0x1a1960u: goto label_1a1960;
        case 0x1a1964u: goto label_1a1964;
        case 0x1a1968u: goto label_1a1968;
        case 0x1a196cu: goto label_1a196c;
        case 0x1a1970u: goto label_1a1970;
        case 0x1a1974u: goto label_1a1974;
        case 0x1a1978u: goto label_1a1978;
        case 0x1a197cu: goto label_1a197c;
        case 0x1a1980u: goto label_1a1980;
        case 0x1a1984u: goto label_1a1984;
        case 0x1a1988u: goto label_1a1988;
        case 0x1a198cu: goto label_1a198c;
        case 0x1a1990u: goto label_1a1990;
        case 0x1a1994u: goto label_1a1994;
        case 0x1a1998u: goto label_1a1998;
        case 0x1a199cu: goto label_1a199c;
        case 0x1a19a0u: goto label_1a19a0;
        case 0x1a19a4u: goto label_1a19a4;
        case 0x1a19a8u: goto label_1a19a8;
        case 0x1a19acu: goto label_1a19ac;
        case 0x1a19b0u: goto label_1a19b0;
        case 0x1a19b4u: goto label_1a19b4;
        case 0x1a19b8u: goto label_1a19b8;
        case 0x1a19bcu: goto label_1a19bc;
        case 0x1a19c0u: goto label_1a19c0;
        case 0x1a19c4u: goto label_1a19c4;
        case 0x1a19c8u: goto label_1a19c8;
        case 0x1a19ccu: goto label_1a19cc;
        case 0x1a19d0u: goto label_1a19d0;
        case 0x1a19d4u: goto label_1a19d4;
        case 0x1a19d8u: goto label_1a19d8;
        case 0x1a19dcu: goto label_1a19dc;
        case 0x1a19e0u: goto label_1a19e0;
        case 0x1a19e4u: goto label_1a19e4;
        case 0x1a19e8u: goto label_1a19e8;
        case 0x1a19ecu: goto label_1a19ec;
        case 0x1a19f0u: goto label_1a19f0;
        case 0x1a19f4u: goto label_1a19f4;
        case 0x1a19f8u: goto label_1a19f8;
        case 0x1a19fcu: goto label_1a19fc;
        case 0x1a1a00u: goto label_1a1a00;
        case 0x1a1a04u: goto label_1a1a04;
        case 0x1a1a08u: goto label_1a1a08;
        case 0x1a1a0cu: goto label_1a1a0c;
        case 0x1a1a10u: goto label_1a1a10;
        case 0x1a1a14u: goto label_1a1a14;
        case 0x1a1a18u: goto label_1a1a18;
        case 0x1a1a1cu: goto label_1a1a1c;
        case 0x1a1a20u: goto label_1a1a20;
        case 0x1a1a24u: goto label_1a1a24;
        case 0x1a1a28u: goto label_1a1a28;
        case 0x1a1a2cu: goto label_1a1a2c;
        case 0x1a1a30u: goto label_1a1a30;
        case 0x1a1a34u: goto label_1a1a34;
        case 0x1a1a38u: goto label_1a1a38;
        case 0x1a1a3cu: goto label_1a1a3c;
        case 0x1a1a40u: goto label_1a1a40;
        case 0x1a1a44u: goto label_1a1a44;
        case 0x1a1a48u: goto label_1a1a48;
        case 0x1a1a4cu: goto label_1a1a4c;
        case 0x1a1a50u: goto label_1a1a50;
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a58u: goto label_1a1a58;
        case 0x1a1a5cu: goto label_1a1a5c;
        case 0x1a1a60u: goto label_1a1a60;
        case 0x1a1a64u: goto label_1a1a64;
        case 0x1a1a68u: goto label_1a1a68;
        case 0x1a1a6cu: goto label_1a1a6c;
        case 0x1a1a70u: goto label_1a1a70;
        case 0x1a1a74u: goto label_1a1a74;
        case 0x1a1a78u: goto label_1a1a78;
        case 0x1a1a7cu: goto label_1a1a7c;
        case 0x1a1a80u: goto label_1a1a80;
        case 0x1a1a84u: goto label_1a1a84;
        case 0x1a1a88u: goto label_1a1a88;
        case 0x1a1a8cu: goto label_1a1a8c;
        case 0x1a1a90u: goto label_1a1a90;
        case 0x1a1a94u: goto label_1a1a94;
        case 0x1a1a98u: goto label_1a1a98;
        case 0x1a1a9cu: goto label_1a1a9c;
        case 0x1a1aa0u: goto label_1a1aa0;
        case 0x1a1aa4u: goto label_1a1aa4;
        case 0x1a1aa8u: goto label_1a1aa8;
        case 0x1a1aacu: goto label_1a1aac;
        case 0x1a1ab0u: goto label_1a1ab0;
        case 0x1a1ab4u: goto label_1a1ab4;
        case 0x1a1ab8u: goto label_1a1ab8;
        case 0x1a1abcu: goto label_1a1abc;
        case 0x1a1ac0u: goto label_1a1ac0;
        case 0x1a1ac4u: goto label_1a1ac4;
        case 0x1a1ac8u: goto label_1a1ac8;
        case 0x1a1accu: goto label_1a1acc;
        case 0x1a1ad0u: goto label_1a1ad0;
        case 0x1a1ad4u: goto label_1a1ad4;
        case 0x1a1ad8u: goto label_1a1ad8;
        case 0x1a1adcu: goto label_1a1adc;
        case 0x1a1ae0u: goto label_1a1ae0;
        case 0x1a1ae4u: goto label_1a1ae4;
        case 0x1a1ae8u: goto label_1a1ae8;
        case 0x1a1aecu: goto label_1a1aec;
        case 0x1a1af0u: goto label_1a1af0;
        case 0x1a1af4u: goto label_1a1af4;
        case 0x1a1af8u: goto label_1a1af8;
        case 0x1a1afcu: goto label_1a1afc;
        case 0x1a1b00u: goto label_1a1b00;
        case 0x1a1b04u: goto label_1a1b04;
        case 0x1a1b08u: goto label_1a1b08;
        case 0x1a1b0cu: goto label_1a1b0c;
        case 0x1a1b10u: goto label_1a1b10;
        case 0x1a1b14u: goto label_1a1b14;
        case 0x1a1b18u: goto label_1a1b18;
        case 0x1a1b1cu: goto label_1a1b1c;
        case 0x1a1b20u: goto label_1a1b20;
        case 0x1a1b24u: goto label_1a1b24;
        case 0x1a1b28u: goto label_1a1b28;
        case 0x1a1b2cu: goto label_1a1b2c;
        case 0x1a1b30u: goto label_1a1b30;
        case 0x1a1b34u: goto label_1a1b34;
        case 0x1a1b38u: goto label_1a1b38;
        case 0x1a1b3cu: goto label_1a1b3c;
        case 0x1a1b40u: goto label_1a1b40;
        case 0x1a1b44u: goto label_1a1b44;
        case 0x1a1b48u: goto label_1a1b48;
        case 0x1a1b4cu: goto label_1a1b4c;
        case 0x1a1b50u: goto label_1a1b50;
        case 0x1a1b54u: goto label_1a1b54;
        case 0x1a1b58u: goto label_1a1b58;
        case 0x1a1b5cu: goto label_1a1b5c;
        case 0x1a1b60u: goto label_1a1b60;
        case 0x1a1b64u: goto label_1a1b64;
        case 0x1a1b68u: goto label_1a1b68;
        case 0x1a1b6cu: goto label_1a1b6c;
        case 0x1a1b70u: goto label_1a1b70;
        case 0x1a1b74u: goto label_1a1b74;
        case 0x1a1b78u: goto label_1a1b78;
        case 0x1a1b7cu: goto label_1a1b7c;
        case 0x1a1b80u: goto label_1a1b80;
        case 0x1a1b84u: goto label_1a1b84;
        case 0x1a1b88u: goto label_1a1b88;
        case 0x1a1b8cu: goto label_1a1b8c;
        case 0x1a1b90u: goto label_1a1b90;
        case 0x1a1b94u: goto label_1a1b94;
        case 0x1a1b98u: goto label_1a1b98;
        case 0x1a1b9cu: goto label_1a1b9c;
        case 0x1a1ba0u: goto label_1a1ba0;
        case 0x1a1ba4u: goto label_1a1ba4;
        case 0x1a1ba8u: goto label_1a1ba8;
        case 0x1a1bacu: goto label_1a1bac;
        case 0x1a1bb0u: goto label_1a1bb0;
        case 0x1a1bb4u: goto label_1a1bb4;
        case 0x1a1bb8u: goto label_1a1bb8;
        case 0x1a1bbcu: goto label_1a1bbc;
        case 0x1a1bc0u: goto label_1a1bc0;
        case 0x1a1bc4u: goto label_1a1bc4;
        case 0x1a1bc8u: goto label_1a1bc8;
        case 0x1a1bccu: goto label_1a1bcc;
        case 0x1a1bd0u: goto label_1a1bd0;
        case 0x1a1bd4u: goto label_1a1bd4;
        case 0x1a1bd8u: goto label_1a1bd8;
        case 0x1a1bdcu: goto label_1a1bdc;
        case 0x1a1be0u: goto label_1a1be0;
        case 0x1a1be4u: goto label_1a1be4;
        default: break;
    }

    ctx->pc = 0x1a1138u;

label_1a1138:
    // 0x1a1138: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1a1138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1a113c:
    // 0x1a113c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a113cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a1140:
    // 0x1a1140: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1a1140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_1a1144:
    // 0x1a1144: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1a1144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1a1148:
    // 0x1a1148: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1a1148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_1a114c:
    // 0x1a114c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_1a1150:
    // 0x1a1150: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1a1150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_1a1154:
    // 0x1a1154: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a1154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a1158:
    // 0x1a1158: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1a1158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_1a115c:
    // 0x1a115c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a115cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a1160:
    // 0x1a1160: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1a1160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_1a1164:
    // 0x1a1164: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1168:
    // 0x1a1168: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1a1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_1a116c:
    // 0x1a116c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a116cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1170:
    // 0x1a1170: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x1a1170u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1a1174:
    // 0x1a1174: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a1174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1178:
    // 0x1a1178: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1a1178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1a117c:
    // 0x1a117c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1a117cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_1a1180:
    // 0x1a1180: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1a1180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_1a1184:
    // 0x1a1184: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a1184u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a1188:
    // 0x1a1188: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1a118c:
    // 0x1a118c: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x1a118cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1a1190:
    // 0x1a1190: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1a1190u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1a1194:
    // 0x1a1194: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1a1194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1a1198:
    // 0x1a1198: 0x3c01bb23  lui         $at, 0xBB23
    ctx->pc = 0x1a1198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47907 << 16));
label_1a119c:
    // 0x1a119c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a119cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a11a0:
    // 0x1a11a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a11a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a11a4:
    // 0x1a11a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a11a8:
    // 0x1a11a8: 0xace0d024  sw          $zero, -0x2FDC($a3)
    ctx->pc = 0x1a11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294955044), GPR_U32(ctx, 0));
label_1a11ac:
    // 0x1a11ac: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1a11acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1a11b0:
    // 0x1a11b0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1a11b4:
    if (ctx->pc == 0x1A11B4u) {
        ctx->pc = 0x1A11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11B0u;
        // 0x1a11b4: 0xe501d02c  swc1        $f1, -0x2FD4($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294955052), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A11B8u;
        goto label_1a11b8;
    }
    ctx->pc = 0x1A11B0u;
    {
        const bool branch_taken_0x1a11b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11B0u;
        // 0x1a11b4: 0xe501d02c  swc1        $f1, -0x2FD4($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294955052), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11b0) {
            ctx->pc = 0x1A1224u;
            goto label_1a1224;
        }
    }
    ctx->pc = 0x1A11B8u;
label_1a11b8:
    // 0x1a11b8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1a11b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1a11bc:
    // 0x1a11bc: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_1a11c0:
    if (ctx->pc == 0x1A11C0u) {
        ctx->pc = 0x1A11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11BCu;
        // 0x1a11c0: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A11C4u;
        goto label_1a11c4;
    }
    ctx->pc = 0x1A11BCu;
    {
        const bool branch_taken_0x1a11bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a11bc) {
            ctx->pc = 0x1A11C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A11BCu;
            // 0x1a11c0: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1264u;
            goto label_1a1264;
        }
    }
    ctx->pc = 0x1A11C4u;
label_1a11c4:
    // 0x1a11c4: 0x9223005c  lbu         $v1, 0x5C($s1)
    ctx->pc = 0x1a11c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a11c8:
    // 0x1a11c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a11cc:
    // 0x1a11cc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1a11d0:
    if (ctx->pc == 0x1A11D0u) {
        ctx->pc = 0x1A11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11CCu;
        // 0x1a11d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A11D4u;
        goto label_1a11d4;
    }
    ctx->pc = 0x1A11CCu;
    {
        const bool branch_taken_0x1a11cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11CCu;
        // 0x1a11d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11cc) {
            ctx->pc = 0x1A1208u;
            goto label_1a1208;
        }
    }
    ctx->pc = 0x1A11D4u;
label_1a11d4:
    // 0x1a11d4: 0x3c01bbf5  lui         $at, 0xBBF5
    ctx->pc = 0x1a11d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48117 << 16));
label_1a11d8:
    // 0x1a11d8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1a11d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1a11dc:
    // 0x1a11dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a11dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a11e0:
    // 0x1a11e0: 0x3c01bc44  lui         $at, 0xBC44
    ctx->pc = 0x1a11e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48196 << 16));
label_1a11e4:
    // 0x1a11e4: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1a11e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1a11e8:
    // 0x1a11e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a11e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a11ec:
    // 0x1a11ec: 0x3c013c2c  lui         $at, 0x3C2C
    ctx->pc = 0x1a11ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15404 << 16));
label_1a11f0:
    // 0x1a11f0: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x1a11f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
label_1a11f4:
    // 0x1a11f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a11f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a11f8:
    // 0x1a11f8: 0xe442d028  swc1        $f2, -0x2FD8($v0)
    ctx->pc = 0x1a11f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955048), bits); }
label_1a11fc:
    // 0x1a11fc: 0xe640d02c  swc1        $f0, -0x2FD4($s2)
    ctx->pc = 0x1a11fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294955052), bits); }
label_1a1200:
    // 0x1a1200: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a1204:
    if (ctx->pc == 0x1A1204u) {
        ctx->pc = 0x1A1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1200u;
        // 0x1a1204: 0xe661d024  swc1        $f1, -0x2FDC($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294955044), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1208u;
        goto label_1a1208;
    }
    ctx->pc = 0x1A1200u;
    {
        const bool branch_taken_0x1a1200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1200u;
        // 0x1a1204: 0xe661d024  swc1        $f1, -0x2FDC($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294955044), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1200) {
            ctx->pc = 0x1A1260u;
            goto label_1a1260;
        }
    }
    ctx->pc = 0x1A1208u;
label_1a1208:
    // 0x1a1208: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1a1208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1a120c:
    // 0x1a120c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a120cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a1210:
    // 0x1a1210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1214:
    // 0x1a1214: 0xe641d02c  swc1        $f1, -0x2FD4($s2)
    ctx->pc = 0x1a1214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294955052), bits); }
label_1a1218:
    // 0x1a1218: 0xe440d028  swc1        $f0, -0x2FD8($v0)
    ctx->pc = 0x1a1218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955048), bits); }
label_1a121c:
    // 0x1a121c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a1220:
    if (ctx->pc == 0x1A1220u) {
        ctx->pc = 0x1A1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A121Cu;
        // 0x1a1220: 0xae60d024  sw          $zero, -0x2FDC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294955044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1224u;
        goto label_1a1224;
    }
    ctx->pc = 0x1A121Cu;
    {
        const bool branch_taken_0x1a121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A121Cu;
        // 0x1a1220: 0xae60d024  sw          $zero, -0x2FDC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294955044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a121c) {
            ctx->pc = 0x1A1260u;
            goto label_1a1260;
        }
    }
    ctx->pc = 0x1A1224u;
label_1a1224:
    // 0x1a1224: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1a1224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1a1228:
    // 0x1a1228: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a122c:
    if (ctx->pc == 0x1A122Cu) {
        ctx->pc = 0x1A122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1228u;
        // 0x1a122c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1230u;
        goto label_1a1230;
    }
    ctx->pc = 0x1A1228u;
    {
        const bool branch_taken_0x1a1228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1228u;
        // 0x1a122c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1228) {
            ctx->pc = 0x1A125Cu;
            goto label_1a125c;
        }
    }
    ctx->pc = 0x1A1230u;
label_1a1230:
    // 0x1a1230: 0x9223005c  lbu         $v1, 0x5C($s1)
    ctx->pc = 0x1a1230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a1234:
    // 0x1a1234: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1a1238:
    if (ctx->pc == 0x1A1238u) {
        ctx->pc = 0x1A1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1234u;
        // 0x1a1238: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A123Cu;
        goto label_1a123c;
    }
    ctx->pc = 0x1A1234u;
    {
        const bool branch_taken_0x1a1234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A1238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1234u;
        // 0x1a1238: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1234) {
            ctx->pc = 0x1A1250u;
            goto label_1a1250;
        }
    }
    ctx->pc = 0x1A123Cu;
label_1a123c:
    // 0x1a123c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1a123cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1a1240:
    // 0x1a1240: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a1240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a1244:
    // 0x1a1244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1248:
    // 0x1a1248: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a124c:
    if (ctx->pc == 0x1A124Cu) {
        ctx->pc = 0x1A124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1248u;
        // 0x1a124c: 0xe440d028  swc1        $f0, -0x2FD8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955048), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1250u;
        goto label_1a1250;
    }
    ctx->pc = 0x1A1248u;
    {
        const bool branch_taken_0x1a1248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1248u;
        // 0x1a124c: 0xe440d028  swc1        $f0, -0x2FD8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955048), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1248) {
            ctx->pc = 0x1A1260u;
            goto label_1a1260;
        }
    }
    ctx->pc = 0x1A1250u;
label_1a1250:
    // 0x1a1250: 0xae40d02c  sw          $zero, -0x2FD4($s2)
    ctx->pc = 0x1a1250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294955052), GPR_U32(ctx, 0));
label_1a1254:
    // 0x1a1254: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a1258:
    if (ctx->pc == 0x1A1258u) {
        ctx->pc = 0x1A1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1254u;
        // 0x1a1258: 0xac40d028  sw          $zero, -0x2FD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A125Cu;
        goto label_1a125c;
    }
    ctx->pc = 0x1A1254u;
    {
        const bool branch_taken_0x1a1254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1254u;
        // 0x1a1258: 0xac40d028  sw          $zero, -0x2FD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1254) {
            ctx->pc = 0x1A1260u;
            goto label_1a1260;
        }
    }
    ctx->pc = 0x1A125Cu;
label_1a125c:
    // 0x1a125c: 0xae40d02c  sw          $zero, -0x2FD4($s2)
    ctx->pc = 0x1a125cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294955052), GPR_U32(ctx, 0));
label_1a1260:
    // 0x1a1260: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1a1264:
    // 0x1a1264: 0x10400252  beqz        $v0, . + 4 + (0x252 << 2)
label_1a1268:
    if (ctx->pc == 0x1A1268u) {
        ctx->pc = 0x1A1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1264u;
        // 0x1a1268: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A126Cu;
        goto label_1a126c;
    }
    ctx->pc = 0x1A1264u;
    {
        const bool branch_taken_0x1a1264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1264u;
        // 0x1a1268: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1264) {
            ctx->pc = 0x1A1BB0u;
            goto label_1a1bb0;
        }
    }
    ctx->pc = 0x1A126Cu;
label_1a126c:
    // 0x1a126c: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1a126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1a1270:
    // 0x1a1270: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1a1274:
    if (ctx->pc == 0x1A1274u) {
        ctx->pc = 0x1A1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1270u;
        // 0x1a1274: 0xc6210040  lwc1        $f1, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1278u;
        goto label_1a1278;
    }
    ctx->pc = 0x1A1270u;
    {
        const bool branch_taken_0x1a1270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1270) {
            ctx->pc = 0x1A1274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1270u;
            // 0x1a1274: 0xc6210040  lwc1        $f1, 0x40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1290u;
            goto label_1a1290;
        }
    }
    ctx->pc = 0x1A1278u;
label_1a1278:
    // 0x1a1278: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1a1278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1a127c:
    // 0x1a127c: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x1a127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a1280:
    // 0x1a1280: 0xc05e896  jal         func_17A258
label_1a1284:
    if (ctx->pc == 0x1A1284u) {
        ctx->pc = 0x1A1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1280u;
        // 0x1a1284: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1288u;
        goto label_1a1288;
    }
    ctx->pc = 0x1A1280u;
    SET_GPR_U32(ctx, 31, 0x1A1288u);
    ctx->pc = 0x1A1284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1280u;
    // 0x1a1284: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x1A1280u, 0x1A1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1288u;
label_1a1288:
    // 0x1a1288: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1a1288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1a128c:
    // 0x1a128c: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x1a128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1290:
    // 0x1a1290: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1a1290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1294:
    // 0x1a1294: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a1294u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a1298:
    // 0x1a1298: 0x0  nop
    ctx->pc = 0x1a1298u;
    // NOP
label_1a129c:
    // 0x1a129c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1a12a0:
    if (ctx->pc == 0x1A12A0u) {
        ctx->pc = 0x1A12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A129Cu;
        // 0x1a12a0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12A4u;
        goto label_1a12a4;
    }
    ctx->pc = 0x1A129Cu;
    {
        const bool branch_taken_0x1a129c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A129Cu;
        // 0x1a12a0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a129c) {
            ctx->pc = 0x1A12A8u;
            goto label_1a12a8;
        }
    }
    ctx->pc = 0x1A12A4u;
label_1a12a4:
    // 0x1a12a4: 0xa2220064  sb          $v0, 0x64($s1)
    ctx->pc = 0x1a12a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 2));
label_1a12a8:
    // 0x1a12a8: 0x52c00012  beql        $s6, $zero, . + 4 + (0x12 << 2)
label_1a12ac:
    if (ctx->pc == 0x1A12ACu) {
        ctx->pc = 0x1A12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12A8u;
        // 0x1a12ac: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12B0u;
        goto label_1a12b0;
    }
    ctx->pc = 0x1A12A8u;
    {
        const bool branch_taken_0x1a12a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12a8) {
            ctx->pc = 0x1A12ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A12A8u;
            // 0x1a12ac: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A12F4u;
            goto label_1a12f4;
        }
    }
    ctx->pc = 0x1A12B0u;
label_1a12b0:
    // 0x1a12b0: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x1a12b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a12b4:
    // 0x1a12b4: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1a12b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a12b8:
    // 0x1a12b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a12b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a12bc:
    // 0x1a12bc: 0x0  nop
    ctx->pc = 0x1a12bcu;
    // NOP
label_1a12c0:
    // 0x1a12c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a12c4:
    if (ctx->pc == 0x1A12C4u) {
        ctx->pc = 0x1A12C8u;
        goto label_1a12c8;
    }
    ctx->pc = 0x1A12C0u;
    {
        const bool branch_taken_0x1a12c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a12c0) {
            ctx->pc = 0x1A12E4u;
            goto label_1a12e4;
        }
    }
    ctx->pc = 0x1A12C8u;
label_1a12c8:
    // 0x1a12c8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1a12cc:
    // 0x1a12cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a12d0:
    if (ctx->pc == 0x1A12D0u) {
        ctx->pc = 0x1A12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12CCu;
        // 0x1a12d0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12D4u;
        goto label_1a12d4;
    }
    ctx->pc = 0x1A12CCu;
    {
        const bool branch_taken_0x1a12cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12CCu;
        // 0x1a12d0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12cc) {
            ctx->pc = 0x1A12DCu;
            goto label_1a12dc;
        }
    }
    ctx->pc = 0x1A12D4u;
label_1a12d4:
    // 0x1a12d4: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x1a12d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a12d8:
    // 0x1a12d8: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x1a12d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_1a12dc:
    // 0x1a12dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a12e0:
    if (ctx->pc == 0x1A12E0u) {
        ctx->pc = 0x1A12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12DCu;
        // 0x1a12e0: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12E4u;
        goto label_1a12e4;
    }
    ctx->pc = 0x1A12DCu;
    {
        const bool branch_taken_0x1a12dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12DCu;
        // 0x1a12e0: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12dc) {
            ctx->pc = 0x1A12F4u;
            goto label_1a12f4;
        }
    }
    ctx->pc = 0x1A12E4u;
label_1a12e4:
    // 0x1a12e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a12e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a12e8:
    // 0x1a12e8: 0x0  nop
    ctx->pc = 0x1a12e8u;
    // NOP
label_1a12ec:
    // 0x1a12ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1a12f0:
    if (ctx->pc == 0x1A12F0u) {
        ctx->pc = 0x1A12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12ECu;
        // 0x1a12f0: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12F4u;
        goto label_1a12f4;
    }
    ctx->pc = 0x1A12ECu;
    {
        const bool branch_taken_0x1a12ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a12ec) {
            ctx->pc = 0x1A12F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A12ECu;
            // 0x1a12f0: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A12F4u;
            goto label_1a12f4;
        }
    }
    ctx->pc = 0x1A12F4u;
label_1a12f4:
    // 0x1a12f4: 0x5280000d  beql        $s4, $zero, . + 4 + (0xD << 2)
label_1a12f8:
    if (ctx->pc == 0x1A12F8u) {
        ctx->pc = 0x1A12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12F4u;
        // 0x1a12f8: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12FCu;
        goto label_1a12fc;
    }
    ctx->pc = 0x1A12F4u;
    {
        const bool branch_taken_0x1a12f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12f4) {
            ctx->pc = 0x1A12F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A12F4u;
            // 0x1a12f8: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A132Cu;
            goto label_1a132c;
        }
    }
    ctx->pc = 0x1A12FCu;
label_1a12fc:
    // 0x1a12fc: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1a12fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1300:
    // 0x1a1300: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x1a1300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a1304:
    // 0x1a1304: 0x0  nop
    ctx->pc = 0x1a1304u;
    // NOP
label_1a1308:
    // 0x1a1308: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_1a130c:
    if (ctx->pc == 0x1A130Cu) {
        ctx->pc = 0x1A130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1308u;
        // 0x1a130c: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1310u;
        goto label_1a1310;
    }
    ctx->pc = 0x1A1308u;
    {
        const bool branch_taken_0x1a1308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1308) {
            ctx->pc = 0x1A130Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1308u;
            // 0x1a130c: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A132Cu;
            goto label_1a132c;
        }
    }
    ctx->pc = 0x1A1310u;
label_1a1310:
    // 0x1a1310: 0x92220065  lbu         $v0, 0x65($s1)
    ctx->pc = 0x1a1310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 101)));
label_1a1314:
    // 0x1a1314: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1a1318:
    // 0x1a1318: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a1318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a131c:
    // 0x1a131c: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x1a131cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1a1320:
    // 0x1a1320: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a1324:
    if (ctx->pc == 0x1A1324u) {
        ctx->pc = 0x1A1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1320u;
        // 0x1a1324: 0xa2220065  sb          $v0, 0x65($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1328u;
        goto label_1a1328;
    }
    ctx->pc = 0x1A1320u;
    {
        const bool branch_taken_0x1a1320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1320u;
        // 0x1a1324: 0xa2220065  sb          $v0, 0x65($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1320) {
            ctx->pc = 0x1A1330u;
            goto label_1a1330;
        }
    }
    ctx->pc = 0x1A1328u;
label_1a1328:
    // 0x1a1328: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a132c:
    // 0x1a132c: 0xa2220065  sb          $v0, 0x65($s1)
    ctx->pc = 0x1a132cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 2));
label_1a1330:
    // 0x1a1330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a1334:
    // 0x1a1334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a1334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a1338:
    // 0x1a1338: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1a1338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a133c:
    // 0x1a133c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1a133cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1a1340:
    // 0x1a1340: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1a1340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a1344:
    // 0x1a1344: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1a1344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a1348:
    // 0x1a1348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a134c:
    // 0x1a134c: 0xe7b60000  swc1        $f22, 0x0($sp)
    ctx->pc = 0x1a134cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a1350:
    // 0x1a1350: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1a1350u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a1354:
    // 0x1a1354: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a1354u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a1358:
    // 0x1a1358: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x1a1358u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a135c:
    // 0x1a135c: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x1a135cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1a1360:
    // 0x1a1360: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x1a1360u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a1364:
    // 0x1a1364: 0x8ea6cdb4  lw          $a2, -0x324C($s5)
    ctx->pc = 0x1a1364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_1a1368:
    // 0x1a1368: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1a1368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_1a136c:
    // 0x1a136c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1a136cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1a1370:
    // 0x1a1370: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1a1370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1a1374:
    // 0x1a1374: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a1374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a1378:
    // 0x1a1378: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1a1378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1a137c:
    // 0x1a137c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1a137cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1a1380:
    // 0x1a1380: 0x60f809  jalr        $v1
label_1a1384:
    if (ctx->pc == 0x1A1384u) {
        ctx->pc = 0x1A1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1380u;
        // 0x1a1384: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1388u;
        goto label_1a1388;
    }
    ctx->pc = 0x1A1380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1388u);
        ctx->pc = 0x1A1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1380u;
        // 0x1a1384: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1380u, 0x1A1388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1388u;
label_1a1388:
    // 0x1a1388: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1a1388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a138c:
    // 0x1a138c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a1390:
    // 0x1a1390: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1a1390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a1394:
    // 0x1a1394: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a1394u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a1398:
    // 0x1a1398: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x1a1398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_1a139c:
    // 0x1a139c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1a139cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1a13a0:
    // 0x1a13a0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1a13a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a13a4:
    // 0x1a13a4: 0x9625002e  lhu         $a1, 0x2E($s1)
    ctx->pc = 0x1a13a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1a13a8:
    // 0x1a13a8: 0xc0616ac  jal         func_185AB0
label_1a13ac:
    if (ctx->pc == 0x1A13ACu) {
        ctx->pc = 0x1A13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13A8u;
        // 0x1a13ac: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13B0u;
        goto label_1a13b0;
    }
    ctx->pc = 0x1A13A8u;
    SET_GPR_U32(ctx, 31, 0x1A13B0u);
    ctx->pc = 0x1A13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13A8u;
    // 0x1a13ac: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1A13A8u, 0x1A13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13B0u;
label_1a13b0:
    // 0x1a13b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a13b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a13b4:
    // 0x1a13b4: 0x520001fe  beql        $s0, $zero, . + 4 + (0x1FE << 2)
label_1a13b8:
    if (ctx->pc == 0x1A13B8u) {
        ctx->pc = 0x1A13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13B4u;
        // 0x1a13b8: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13BCu;
        goto label_1a13bc;
    }
    ctx->pc = 0x1A13B4u;
    {
        const bool branch_taken_0x1a13b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a13b4) {
            ctx->pc = 0x1A13B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A13B4u;
            // 0x1a13b8: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BB0u;
            goto label_1a1bb0;
        }
    }
    ctx->pc = 0x1A13BCu;
label_1a13bc:
    // 0x1a13bc: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x1a13bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_1a13c0:
    // 0x1a13c0: 0x104001fa  beqz        $v0, . + 4 + (0x1FA << 2)
label_1a13c4:
    if (ctx->pc == 0x1A13C4u) {
        ctx->pc = 0x1A13C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13C0u;
        // 0x1a13c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13C8u;
        goto label_1a13c8;
    }
    ctx->pc = 0x1A13C0u;
    {
        const bool branch_taken_0x1a13c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A13C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13C0u;
        // 0x1a13c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13c0) {
            ctx->pc = 0x1A1BACu;
            goto label_1a1bac;
        }
    }
    ctx->pc = 0x1A13C8u;
label_1a13c8:
    // 0x1a13c8: 0xc060b58  jal         func_182D60
label_1a13cc:
    if (ctx->pc == 0x1A13CCu) {
        ctx->pc = 0x1A13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13C8u;
        // 0x1a13cc: 0xe7b60090  swc1        $f22, 0x90($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13D0u;
        goto label_1a13d0;
    }
    ctx->pc = 0x1A13C8u;
    SET_GPR_U32(ctx, 31, 0x1A13D0u);
    ctx->pc = 0x1A13CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13C8u;
    // 0x1a13cc: 0xe7b60090  swc1        $f22, 0x90($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A13C8u, 0x1A13D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13D0u;
label_1a13d0:
    // 0x1a13d0: 0xc060786  jal         func_181E18
label_1a13d4:
    if (ctx->pc == 0x1A13D4u) {
        ctx->pc = 0x1A13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13D0u;
        // 0x1a13d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13D8u;
        goto label_1a13d8;
    }
    ctx->pc = 0x1A13D0u;
    SET_GPR_U32(ctx, 31, 0x1A13D8u);
    ctx->pc = 0x1A13D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13D0u;
    // 0x1a13d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E18u, 0x1A13D0u, 0x1A13D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13D8u;
label_1a13d8:
    // 0x1a13d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a13dc:
    if (ctx->pc == 0x1A13DCu) {
        ctx->pc = 0x1A13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13D8u;
        // 0x1a13dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13E0u;
        goto label_1a13e0;
    }
    ctx->pc = 0x1A13D8u;
    {
        const bool branch_taken_0x1a13d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13D8u;
        // 0x1a13dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13d8) {
            ctx->pc = 0x1A13F4u;
            goto label_1a13f4;
        }
    }
    ctx->pc = 0x1A13E0u;
label_1a13e0:
    // 0x1a13e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a13e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a13e4:
    // 0x1a13e4: 0x0  nop
    ctx->pc = 0x1a13e4u;
    // NOP
label_1a13e8:
    // 0x1a13e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a13e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a13ec:
    // 0x1a13ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a13f0:
    if (ctx->pc == 0x1A13F0u) {
        ctx->pc = 0x1A13F4u;
        goto label_1a13f4;
    }
    ctx->pc = 0x1A13ECu;
    {
        const bool branch_taken_0x1a13ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a13ec) {
            ctx->pc = 0x1A140Cu;
            goto label_1a140c;
        }
    }
    ctx->pc = 0x1A13F4u;
label_1a13f4:
    // 0x1a13f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a13f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a13f8:
    // 0x1a13f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a13f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a13fc:
    // 0x1a13fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a13fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a1400:
    // 0x1a1400: 0x0  nop
    ctx->pc = 0x1a1400u;
    // NOP
label_1a1404:
    // 0x1a1404: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a1404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a1408:
    // 0x1a1408: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a1408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a140c:
    // 0x1a140c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a140cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a1410:
    // 0x1a1410: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1414:
    // 0x1a1414: 0x0  nop
    ctx->pc = 0x1a1414u;
    // NOP
label_1a1418:
    // 0x1a1418: 0x0  nop
    ctx->pc = 0x1a1418u;
    // NOP
label_1a141c:
    // 0x1a141c: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x1a141cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1a1420:
    // 0x1a1420: 0xc060b58  jal         func_182D60
label_1a1424:
    if (ctx->pc == 0x1A1424u) {
        ctx->pc = 0x1A1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1420u;
        // 0x1a1424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1428u;
        goto label_1a1428;
    }
    ctx->pc = 0x1A1420u;
    SET_GPR_U32(ctx, 31, 0x1A1428u);
    ctx->pc = 0x1A1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1420u;
    // 0x1a1424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A1420u, 0x1A1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1428u;
label_1a1428:
    // 0x1a1428: 0x9625002c  lhu         $a1, 0x2C($s1)
    ctx->pc = 0x1a1428u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1a142c:
    // 0x1a142c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1430:
    // 0x1a1430: 0xc06078e  jal         func_181E38
label_1a1434:
    if (ctx->pc == 0x1A1434u) {
        ctx->pc = 0x1A1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1430u;
        // 0x1a1434: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1438u;
        goto label_1a1438;
    }
    ctx->pc = 0x1A1430u;
    SET_GPR_U32(ctx, 31, 0x1A1438u);
    ctx->pc = 0x1A1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1430u;
    // 0x1a1434: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1A1430u, 0x1A1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1438u;
label_1a1438:
    // 0x1a1438: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1a143c:
    // 0x1a143c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x1a143cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1a1440:
    // 0x1a1440: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1a1440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a1444:
    // 0x1a1444: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1a1444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a1448:
    // 0x1a1448: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1a1448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a144c:
    // 0x1a144c: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1a144cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a1450:
    // 0x1a1450: 0xb3a5009b  sdl         $a1, 0x9B($sp)
    ctx->pc = 0x1a1450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1454:
    // 0x1a1454: 0xb7a50094  sdr         $a1, 0x94($sp)
    ctx->pc = 0x1a1454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1458:
    // 0x1a1458: 0xb3a600a3  sdl         $a2, 0xA3($sp)
    ctx->pc = 0x1a1458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a145c:
    // 0x1a145c: 0xb7a6009c  sdr         $a2, 0x9C($sp)
    ctx->pc = 0x1a145cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1460:
    // 0x1a1460: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1a1464:
    if (ctx->pc == 0x1A1464u) {
        ctx->pc = 0x1A1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1460u;
        // 0x1a1464: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1468u;
        goto label_1a1468;
    }
    ctx->pc = 0x1A1460u;
    {
        const bool branch_taken_0x1a1460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1460u;
        // 0x1a1464: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1460) {
            ctx->pc = 0x1A1474u;
            goto label_1a1474;
        }
    }
    ctx->pc = 0x1A1468u;
label_1a1468:
    // 0x1a1468: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1a1468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1a146c:
    // 0x1a146c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a1470:
    if (ctx->pc == 0x1A1470u) {
        ctx->pc = 0x1A1474u;
        goto label_1a1474;
    }
    ctx->pc = 0x1A146Cu;
    {
        const bool branch_taken_0x1a146c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a146c) {
            ctx->pc = 0x1A1478u;
            goto label_1a1478;
        }
    }
    ctx->pc = 0x1A1474u;
label_1a1474:
    // 0x1a1474: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x1a1474u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
label_1a1478:
    // 0x1a1478: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_1a147c:
    if (ctx->pc == 0x1A147Cu) {
        ctx->pc = 0x1A147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1478u;
        // 0x1a147c: 0xc7a1009c  lwc1        $f1, 0x9C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1480u;
        goto label_1a1480;
    }
    ctx->pc = 0x1A1478u;
    {
        const bool branch_taken_0x1a1478 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1478u;
        // 0x1a147c: 0xc7a1009c  lwc1        $f1, 0x9C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1478) {
            ctx->pc = 0x1A14A8u;
            goto label_1a14a8;
        }
    }
    ctx->pc = 0x1A1480u;
label_1a1480:
    // 0x1a1480: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1a1480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1484:
    // 0x1a1484: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x1a1484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a1488:
    // 0x1a1488: 0x0  nop
    ctx->pc = 0x1a1488u;
    // NOP
label_1a148c:
    // 0x1a148c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1a1490:
    if (ctx->pc == 0x1A1490u) {
        ctx->pc = 0x1A1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A148Cu;
        // 0x1a1490: 0x93a300a4  lbu         $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1494u;
        goto label_1a1494;
    }
    ctx->pc = 0x1A148Cu;
    {
        const bool branch_taken_0x1a148c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A148Cu;
        // 0x1a1490: 0x93a300a4  lbu         $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a148c) {
            ctx->pc = 0x1A14A8u;
            goto label_1a14a8;
        }
    }
    ctx->pc = 0x1A1494u;
label_1a1494:
    // 0x1a1494: 0x92220065  lbu         $v0, 0x65($s1)
    ctx->pc = 0x1a1494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 101)));
label_1a1498:
    // 0x1a1498: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1a149c:
    // 0x1a149c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a149cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1a14a0:
    // 0x1a14a0: 0xa3a300a4  sb          $v1, 0xA4($sp)
    ctx->pc = 0x1a14a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 164), (uint8_t)GPR_U32(ctx, 3));
label_1a14a4:
    // 0x1a14a4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1a14a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a14a8:
    // 0x1a14a8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1a14a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a14ac:
    // 0x1a14ac: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1a14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a14b0:
    // 0x1a14b0: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x1a14b0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a14b4:
    // 0x1a14b4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1a14b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a14b8:
    // 0x1a14b8: 0x9223005c  lbu         $v1, 0x5C($s1)
    ctx->pc = 0x1a14b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a14bc:
    // 0x1a14bc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1a14bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1a14c0:
    // 0x1a14c0: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x1a14c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1a14c4:
    // 0x1a14c4: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x1a14c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_1a14c8:
    // 0x1a14c8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1a14cc:
    if (ctx->pc == 0x1A14CCu) {
        ctx->pc = 0x1A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14C8u;
        // 0x1a14cc: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14D0u;
        goto label_1a14d0;
    }
    ctx->pc = 0x1A14C8u;
    {
        const bool branch_taken_0x1a14c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14C8u;
        // 0x1a14cc: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14c8) {
            ctx->pc = 0x1A14F0u;
            goto label_1a14f0;
        }
    }
    ctx->pc = 0x1A14D0u;
label_1a14d0:
    // 0x1a14d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a14d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a14d4:
    // 0x1a14d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a14d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a14d8:
    // 0x1a14d8: 0xc642d02c  lwc1        $f2, -0x2FD4($s2)
    ctx->pc = 0x1a14d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294955052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a14dc:
    // 0x1a14dc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1a14dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a14e0:
    // 0x1a14e0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a14e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a14e4:
    // 0x1a14e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a14e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a14e8:
    // 0x1a14e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a14ec:
    if (ctx->pc == 0x1A14ECu) {
        ctx->pc = 0x1A14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14E8u;
        // 0x1a14ec: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14F0u;
        goto label_1a14f0;
    }
    ctx->pc = 0x1A14E8u;
    {
        const bool branch_taken_0x1a14e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14E8u;
        // 0x1a14ec: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14e8) {
            ctx->pc = 0x1A150Cu;
            goto label_1a150c;
        }
    }
    ctx->pc = 0x1A14F0u;
label_1a14f0:
    // 0x1a14f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a14f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a14f4:
    // 0x1a14f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a14f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a14f8:
    // 0x1a14f8: 0xc642d02c  lwc1        $f2, -0x2FD4($s2)
    ctx->pc = 0x1a14f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294955052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a14fc:
    // 0x1a14fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1a14fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a1500:
    // 0x1a1500: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a1500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1504:
    // 0x1a1504: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a1504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a1508:
    // 0x1a1508: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a1508u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a150c:
    // 0x1a150c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1a150cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a1510:
    // 0x1a1510: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a1510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a1514:
    // 0x1a1514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1518:
    // 0x1a1518: 0xc060b78  jal         func_182DE0
label_1a151c:
    if (ctx->pc == 0x1A151Cu) {
        ctx->pc = 0x1A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1518u;
        // 0x1a151c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1520u;
        goto label_1a1520;
    }
    ctx->pc = 0x1A1518u;
    SET_GPR_U32(ctx, 31, 0x1A1520u);
    ctx->pc = 0x1A151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1518u;
    // 0x1a151c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1A1518u, 0x1A1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1520u;
label_1a1520:
    // 0x1a1520: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1a1524:
    // 0x1a1524: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1a1524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1a1528:
    // 0x1a1528: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a152c:
    if (ctx->pc == 0x1A152Cu) {
        ctx->pc = 0x1A152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1528u;
        // 0x1a152c: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1530u;
        goto label_1a1530;
    }
    ctx->pc = 0x1A1528u;
    {
        const bool branch_taken_0x1a1528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1528u;
        // 0x1a152c: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1528) {
            ctx->pc = 0x1A1534u;
            goto label_1a1534;
        }
    }
    ctx->pc = 0x1A1530u;
label_1a1530:
    // 0x1a1530: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x1a1530u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
label_1a1534:
    // 0x1a1534: 0x5280000b  beql        $s4, $zero, . + 4 + (0xB << 2)
label_1a1538:
    if (ctx->pc == 0x1A1538u) {
        ctx->pc = 0x1A1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1534u;
        // 0x1a1538: 0x9222005c  lbu         $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A153Cu;
        goto label_1a153c;
    }
    ctx->pc = 0x1A1534u;
    {
        const bool branch_taken_0x1a1534 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1534) {
            ctx->pc = 0x1A1538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1534u;
            // 0x1a1538: 0x9222005c  lbu         $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1564u;
            goto label_1a1564;
        }
    }
    ctx->pc = 0x1A153Cu;
label_1a153c:
    // 0x1a153c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1a153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1540:
    // 0x1a1540: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x1a1540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a1544:
    // 0x1a1544: 0x0  nop
    ctx->pc = 0x1a1544u;
    // NOP
label_1a1548:
    // 0x1a1548: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1a154c:
    if (ctx->pc == 0x1A154Cu) {
        ctx->pc = 0x1A154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1548u;
        // 0x1a154c: 0x93a300a4  lbu         $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1550u;
        goto label_1a1550;
    }
    ctx->pc = 0x1A1548u;
    {
        const bool branch_taken_0x1a1548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1548u;
        // 0x1a154c: 0x93a300a4  lbu         $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1548) {
            ctx->pc = 0x1A1560u;
            goto label_1a1560;
        }
    }
    ctx->pc = 0x1A1550u;
label_1a1550:
    // 0x1a1550: 0x92220065  lbu         $v0, 0x65($s1)
    ctx->pc = 0x1a1550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 101)));
label_1a1554:
    // 0x1a1554: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1a1554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1a1558:
    // 0x1a1558: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a1558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1a155c:
    // 0x1a155c: 0xa3a300a4  sb          $v1, 0xA4($sp)
    ctx->pc = 0x1a155cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 164), (uint8_t)GPR_U32(ctx, 3));
label_1a1560:
    // 0x1a1560: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x1a1560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a1564:
    // 0x1a1564: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1a1568:
    if (ctx->pc == 0x1A1568u) {
        ctx->pc = 0x1A1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1564u;
        // 0x1a1568: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A156Cu;
        goto label_1a156c;
    }
    ctx->pc = 0x1A1564u;
    {
        const bool branch_taken_0x1a1564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1564u;
        // 0x1a1568: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1564) {
            ctx->pc = 0x1A1588u;
            goto label_1a1588;
        }
    }
    ctx->pc = 0x1A156Cu;
label_1a156c:
    // 0x1a156c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a156cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1570:
    // 0x1a1570: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a1570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a1574:
    // 0x1a1574: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a1574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1578:
    // 0x1a1578: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a1578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a157c:
    // 0x1a157c: 0xc663d024  lwc1        $f3, -0x2FDC($s3)
    ctx->pc = 0x1a157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a1580:
    // 0x1a1580: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a1584:
    if (ctx->pc == 0x1A1584u) {
        ctx->pc = 0x1A1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1580u;
        // 0x1a1584: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1588u;
        goto label_1a1588;
    }
    ctx->pc = 0x1A1580u;
    {
        const bool branch_taken_0x1a1580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1580u;
        // 0x1a1584: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1580) {
            ctx->pc = 0x1A15A0u;
            goto label_1a15a0;
        }
    }
    ctx->pc = 0x1A1588u;
label_1a1588:
    // 0x1a1588: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a158c:
    // 0x1a158c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a158cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a1590:
    // 0x1a1590: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a1590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1594:
    // 0x1a1594: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a1594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a1598:
    // 0x1a1598: 0xc663d024  lwc1        $f3, -0x2FDC($s3)
    ctx->pc = 0x1a1598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a159c:
    // 0x1a159c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a159cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a15a0:
    // 0x1a15a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a15a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a15a4:
    // 0x1a15a4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a15a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a15a8:
    // 0x1a15a8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a15a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a15ac:
    // 0x1a15ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a15acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a15b0:
    // 0x1a15b0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1a15b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1a15b4:
    // 0x1a15b4: 0xc060b58  jal         func_182D60
label_1a15b8:
    if (ctx->pc == 0x1A15B8u) {
        ctx->pc = 0x1A15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15B4u;
        // 0x1a15b8: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15BCu;
        goto label_1a15bc;
    }
    ctx->pc = 0x1A15B4u;
    SET_GPR_U32(ctx, 31, 0x1A15BCu);
    ctx->pc = 0x1A15B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15B4u;
    // 0x1a15b8: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A15B4u, 0x1A15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15BCu;
label_1a15bc:
    // 0x1a15bc: 0x9625002c  lhu         $a1, 0x2C($s1)
    ctx->pc = 0x1a15bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1a15c0:
    // 0x1a15c0: 0xc06078e  jal         func_181E38
label_1a15c4:
    if (ctx->pc == 0x1A15C4u) {
        ctx->pc = 0x1A15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15C0u;
        // 0x1a15c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15C8u;
        goto label_1a15c8;
    }
    ctx->pc = 0x1A15C0u;
    SET_GPR_U32(ctx, 31, 0x1A15C8u);
    ctx->pc = 0x1A15C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15C0u;
    // 0x1a15c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1A15C0u, 0x1A15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15C8u;
label_1a15c8:
    // 0x1a15c8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a15c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a15cc:
    // 0x1a15cc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a15ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a15d0:
    // 0x1a15d0: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x1a15d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a15d4:
    // 0x1a15d4: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x1a15d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a15d8:
    // 0x1a15d8: 0xb3a3009b  sdl         $v1, 0x9B($sp)
    ctx->pc = 0x1a15d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a15dc:
    // 0x1a15dc: 0xb7a30094  sdr         $v1, 0x94($sp)
    ctx->pc = 0x1a15dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a15e0:
    // 0x1a15e0: 0xb3a400a3  sdl         $a0, 0xA3($sp)
    ctx->pc = 0x1a15e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a15e4:
    // 0x1a15e4: 0xb7a4009c  sdr         $a0, 0x9C($sp)
    ctx->pc = 0x1a15e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a15e8:
    // 0x1a15e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a15e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a15ec:
    // 0x1a15ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a15ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a15f0:
    // 0x1a15f0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1a15f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a15f4:
    // 0x1a15f4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1a15f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a15f8:
    // 0x1a15f8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1a15f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1a15fc:
    // 0x1a15fc: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x1a15fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1a1600:
    // 0x1a1600: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1a1600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1a1604:
    // 0x1a1604: 0xc060b78  jal         func_182DE0
label_1a1608:
    if (ctx->pc == 0x1A1608u) {
        ctx->pc = 0x1A1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1604u;
        // 0x1a1608: 0xe7a1009c  swc1        $f1, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A160Cu;
        goto label_1a160c;
    }
    ctx->pc = 0x1A1604u;
    SET_GPR_U32(ctx, 31, 0x1A160Cu);
    ctx->pc = 0x1A1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1604u;
    // 0x1a1608: 0xe7a1009c  swc1        $f1, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1A1604u, 0x1A160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A160Cu;
label_1a160c:
    // 0x1a160c: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x1a160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1610:
    // 0x1a1610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a1610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1614:
    // 0x1a1614: 0x0  nop
    ctx->pc = 0x1a1614u;
    // NOP
label_1a1618:
    // 0x1a1618: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a1618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a161c:
    // 0x1a161c: 0x0  nop
    ctx->pc = 0x1a161cu;
    // NOP
label_1a1620:
    // 0x1a1620: 0x45020067  bc1fl       . + 4 + (0x67 << 2)
label_1a1624:
    if (ctx->pc == 0x1A1624u) {
        ctx->pc = 0x1A1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1620u;
        // 0x1a1624: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1628u;
        goto label_1a1628;
    }
    ctx->pc = 0x1A1620u;
    {
        const bool branch_taken_0x1a1620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1620) {
            ctx->pc = 0x1A1624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1620u;
            // 0x1a1624: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A17C0u;
            goto label_1a17c0;
        }
    }
    ctx->pc = 0x1A1628u;
label_1a1628:
    // 0x1a1628: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1a1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1a162c:
    // 0x1a162c: 0x9223005c  lbu         $v1, 0x5C($s1)
    ctx->pc = 0x1a162cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a1630:
    // 0x1a1630: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1a1634:
    if (ctx->pc == 0x1A1634u) {
        ctx->pc = 0x1A1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1630u;
        // 0x1a1634: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1638u;
        goto label_1a1638;
    }
    ctx->pc = 0x1A1630u;
    {
        const bool branch_taken_0x1a1630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1630u;
        // 0x1a1634: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1630) {
            ctx->pc = 0x1A1654u;
            goto label_1a1654;
        }
    }
    ctx->pc = 0x1A1638u;
label_1a1638:
    // 0x1a1638: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a163c:
    // 0x1a163c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a163cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1640:
    // 0x1a1640: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a1640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1644:
    // 0x1a1644: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1a1644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a1648:
    // 0x1a1648: 0xc662d024  lwc1        $f2, -0x2FDC($s3)
    ctx->pc = 0x1a1648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a164c:
    // 0x1a164c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a1650:
    if (ctx->pc == 0x1A1650u) {
        ctx->pc = 0x1A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A164Cu;
        // 0x1a1650: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1654u;
        goto label_1a1654;
    }
    ctx->pc = 0x1A164Cu;
    {
        const bool branch_taken_0x1a164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A164Cu;
        // 0x1a1650: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a164c) {
            ctx->pc = 0x1A166Cu;
            goto label_1a166c;
        }
    }
    ctx->pc = 0x1A1654u;
label_1a1654:
    // 0x1a1654: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1658:
    // 0x1a1658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a165c:
    // 0x1a165c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1660:
    // 0x1a1660: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1a1660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a1664:
    // 0x1a1664: 0xc662d024  lwc1        $f2, -0x2FDC($s3)
    ctx->pc = 0x1a1664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a1668:
    // 0x1a1668: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a1668u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a166c:
    // 0x1a166c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a166cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a1670:
    // 0x1a1670: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1a1670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a1674:
    // 0x1a1674: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1a1674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a1678:
    // 0x1a1678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a167c:
    // 0x1a167c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a167cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1680:
    // 0x1a1680: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a1680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a1684:
    // 0x1a1684: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1a1684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1688:
    // 0x1a1688: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a1688u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1a168c:
    // 0x1a168c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1a168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1690:
    // 0x1a1690: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a1690u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a1694:
    // 0x1a1694: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1a1694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a1698:
    // 0x1a1698: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a1698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a169c:
    // 0x1a169c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1a169cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a16a0:
    // 0x1a16a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a16a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a16a4:
    // 0x1a16a4: 0xc060b58  jal         func_182D60
label_1a16a8:
    if (ctx->pc == 0x1A16A8u) {
        ctx->pc = 0x1A16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16A4u;
        // 0x1a16a8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16ACu;
        goto label_1a16ac;
    }
    ctx->pc = 0x1A16A4u;
    SET_GPR_U32(ctx, 31, 0x1A16ACu);
    ctx->pc = 0x1A16A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16A4u;
    // 0x1a16a8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A16A4u, 0x1A16ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16ACu;
label_1a16ac:
    // 0x1a16ac: 0x9625002c  lhu         $a1, 0x2C($s1)
    ctx->pc = 0x1a16acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1a16b0:
    // 0x1a16b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a16b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a16b4:
    // 0x1a16b4: 0xc06078e  jal         func_181E38
label_1a16b8:
    if (ctx->pc == 0x1A16B8u) {
        ctx->pc = 0x1A16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16B4u;
        // 0x1a16b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16BCu;
        goto label_1a16bc;
    }
    ctx->pc = 0x1A16B4u;
    SET_GPR_U32(ctx, 31, 0x1A16BCu);
    ctx->pc = 0x1A16B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16B4u;
    // 0x1a16b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1A16B4u, 0x1A16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16BCu;
label_1a16bc:
    // 0x1a16bc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a16c0:
    // 0x1a16c0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1a16c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a16c4:
    // 0x1a16c4: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1a16c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1a16c8:
    // 0x1a16c8: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1a16c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a16cc:
    // 0x1a16cc: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1a16ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a16d0:
    // 0x1a16d0: 0x6848000f  ldl         $t0, 0xF($v0)
    ctx->pc = 0x1a16d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a16d4:
    // 0x1a16d4: 0x6c480008  ldr         $t0, 0x8($v0)
    ctx->pc = 0x1a16d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a16d8:
    // 0x1a16d8: 0xb3a7009b  sdl         $a3, 0x9B($sp)
    ctx->pc = 0x1a16d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a16dc:
    // 0x1a16dc: 0xb7a70094  sdr         $a3, 0x94($sp)
    ctx->pc = 0x1a16dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a16e0:
    // 0x1a16e0: 0xb3a800a3  sdl         $t0, 0xA3($sp)
    ctx->pc = 0x1a16e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a16e4:
    // 0x1a16e4: 0xb7a8009c  sdr         $t0, 0x9C($sp)
    ctx->pc = 0x1a16e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a16e8:
    // 0x1a16e8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1a16e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1a16ec:
    // 0x1a16ec: 0xc623003c  lwc1        $f3, 0x3C($s1)
    ctx->pc = 0x1a16ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a16f0:
    // 0x1a16f0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1a16f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a16f4:
    // 0x1a16f4: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x1a16f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a16f8:
    // 0x1a16f8: 0x46030502  mul.s       $f20, $f0, $f3
    ctx->pc = 0x1a16f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a16fc:
    // 0x1a16fc: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x1a16fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_1a1700:
    // 0x1a1700: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x1a1700u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
label_1a1704:
    // 0x1a1704: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a1704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1a1708:
    // 0x1a1708: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1a1708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1a170c:
    // 0x1a170c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1a1710:
    if (ctx->pc == 0x1A1710u) {
        ctx->pc = 0x1A1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A170Cu;
        // 0x1a1710: 0xe7a2009c  swc1        $f2, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1714u;
        goto label_1a1714;
    }
    ctx->pc = 0x1A170Cu;
    {
        const bool branch_taken_0x1a170c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A170Cu;
        // 0x1a1710: 0xe7a2009c  swc1        $f2, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a170c) {
            ctx->pc = 0x1A1724u;
            goto label_1a1724;
        }
    }
    ctx->pc = 0x1A1714u;
label_1a1714:
    // 0x1a1714: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1a1714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1718:
    // 0x1a1718: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a1718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1a171c:
    // 0x1a171c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a1720:
    if (ctx->pc == 0x1A1720u) {
        ctx->pc = 0x1A1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A171Cu;
        // 0x1a1720: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1724u;
        goto label_1a1724;
    }
    ctx->pc = 0x1A171Cu;
    {
        const bool branch_taken_0x1a171c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A171Cu;
        // 0x1a1720: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a171c) {
            ctx->pc = 0x1A1738u;
            goto label_1a1738;
        }
    }
    ctx->pc = 0x1A1724u;
label_1a1724:
    // 0x1a1724: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
label_1a1728:
    if (ctx->pc == 0x1A1728u) {
        ctx->pc = 0x1A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1724u;
        // 0x1a1728: 0x9222005c  lbu         $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A172Cu;
        goto label_1a172c;
    }
    ctx->pc = 0x1A1724u;
    {
        const bool branch_taken_0x1a1724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1724) {
            ctx->pc = 0x1A1728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1724u;
            // 0x1a1728: 0x9222005c  lbu         $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A173Cu;
            goto label_1a173c;
        }
    }
    ctx->pc = 0x1A172Cu;
label_1a172c:
    // 0x1a172c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1a172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1730:
    // 0x1a1730: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a1730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1a1734:
    // 0x1a1734: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x1a1734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_1a1738:
    // 0x1a1738: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x1a1738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a173c:
    // 0x1a173c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a1740:
    if (ctx->pc == 0x1A1740u) {
        ctx->pc = 0x1A1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A173Cu;
        // 0x1a1740: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1744u;
        goto label_1a1744;
    }
    ctx->pc = 0x1A173Cu;
    {
        const bool branch_taken_0x1a173c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A173Cu;
        // 0x1a1740: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a173c) {
            ctx->pc = 0x1A175Cu;
            goto label_1a175c;
        }
    }
    ctx->pc = 0x1A1744u;
label_1a1744:
    // 0x1a1744: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1748:
    // 0x1a1748: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a1748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a174c:
    // 0x1a174c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1750:
    // 0x1a1750: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a1750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a1754:
    // 0x1a1754: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a1758:
    if (ctx->pc == 0x1A1758u) {
        ctx->pc = 0x1A1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1754u;
        // 0x1a1758: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A175Cu;
        goto label_1a175c;
    }
    ctx->pc = 0x1A1754u;
    {
        const bool branch_taken_0x1a1754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1754u;
        // 0x1a1758: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1754) {
            ctx->pc = 0x1A1770u;
            goto label_1a1770;
        }
    }
    ctx->pc = 0x1A175Cu;
label_1a175c:
    // 0x1a175c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1760:
    // 0x1a1760: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a1760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a1764:
    // 0x1a1764: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a1764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1768:
    // 0x1a1768: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a1768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a176c:
    // 0x1a176c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a176cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a1770:
    // 0x1a1770: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1a1770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a1774:
    // 0x1a1774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1778:
    // 0x1a1778: 0xc060b78  jal         func_182DE0
label_1a177c:
    if (ctx->pc == 0x1A177Cu) {
        ctx->pc = 0x1A177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1778u;
        // 0x1a177c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1780u;
        goto label_1a1780;
    }
    ctx->pc = 0x1A1778u;
    SET_GPR_U32(ctx, 31, 0x1A1780u);
    ctx->pc = 0x1A177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1778u;
    // 0x1a177c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1A1778u, 0x1A1780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1780u;
label_1a1780:
    // 0x1a1780: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1a1780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a1784:
    // 0x1a1784: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1788:
    // 0x1a1788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a178c:
    // 0x1a178c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1a178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1790:
    // 0x1a1790: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1a1790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a1794:
    // 0x1a1794: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1a1794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a1798:
    // 0x1a1798: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a1798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a179c:
    // 0x1a179c: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x1a179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a17a0:
    // 0x1a17a0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1a17a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a17a4:
    // 0x1a17a4: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1a17a4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_1a17a8:
    // 0x1a17a8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1a17a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1a17ac:
    // 0x1a17ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a17acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1a17b0:
    // 0x1a17b0: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1a17b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a17b4:
    // 0x1a17b4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1a17b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a17b8:
    // 0x1a17b8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a17b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a17bc:
    // 0x1a17bc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1a17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1a17c0:
    // 0x1a17c0: 0x9223005c  lbu         $v1, 0x5C($s1)
    ctx->pc = 0x1a17c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a17c4:
    // 0x1a17c4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1a17c8:
    if (ctx->pc == 0x1A17C8u) {
        ctx->pc = 0x1A17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17C4u;
        // 0x1a17c8: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A17CCu;
        goto label_1a17cc;
    }
    ctx->pc = 0x1A17C4u;
    {
        const bool branch_taken_0x1a17c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17C4u;
        // 0x1a17c8: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17c4) {
            ctx->pc = 0x1A17F0u;
            goto label_1a17f0;
        }
    }
    ctx->pc = 0x1A17CCu;
label_1a17cc:
    // 0x1a17cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a17ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a17d0:
    // 0x1a17d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a17d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a17d4:
    // 0x1a17d4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a17d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a17d8:
    // 0x1a17d8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1a17d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_1a17dc:
    // 0x1a17dc: 0xc662d024  lwc1        $f2, -0x2FDC($s3)
    ctx->pc = 0x1a17dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a17e0:
    // 0x1a17e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a17e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a17e4:
    // 0x1a17e4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a17e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a17e8:
    // 0x1a17e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a17ec:
    if (ctx->pc == 0x1A17ECu) {
        ctx->pc = 0x1A17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17E8u;
        // 0x1a17ec: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A17F0u;
        goto label_1a17f0;
    }
    ctx->pc = 0x1A17E8u;
    {
        const bool branch_taken_0x1a17e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17E8u;
        // 0x1a17ec: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17e8) {
            ctx->pc = 0x1A1818u;
            goto label_1a1818;
        }
    }
    ctx->pc = 0x1A17F0u;
label_1a17f0:
    // 0x1a17f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a17f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a17f4:
    // 0x1a17f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a17f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a17f8:
    // 0x1a17f8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a17f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a17fc:
    // 0x1a17fc: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x1a17fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_1a1800:
    // 0x1a1800: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1a1800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a1804:
    // 0x1a1804: 0xc663d024  lwc1        $f3, -0x2FDC($s3)
    ctx->pc = 0x1a1804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a1808:
    // 0x1a1808: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a1808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a180c:
    // 0x1a180c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a180cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1a1810:
    // 0x1a1810: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a1810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1a1814:
    // 0x1a1814: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a1814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a1818:
    // 0x1a1818: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1a1818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a181c:
    // 0x1a181c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1820:
    // 0x1a1820: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1824:
    // 0x1a1824: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a1824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a1828:
    // 0x1a1828: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1a1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a182c:
    // 0x1a182c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a182cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1a1830:
    // 0x1a1830: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1a1830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1834:
    // 0x1a1834: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a1834u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a1838:
    // 0x1a1838: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1a1838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a183c:
    // 0x1a183c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a183cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a1840:
    // 0x1a1840: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1a1840u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a1844:
    // 0x1a1844: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a1844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a1848:
    // 0x1a1848: 0xc060b58  jal         func_182D60
label_1a184c:
    if (ctx->pc == 0x1A184Cu) {
        ctx->pc = 0x1A184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1848u;
        // 0x1a184c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1850u;
        goto label_1a1850;
    }
    ctx->pc = 0x1A1848u;
    SET_GPR_U32(ctx, 31, 0x1A1850u);
    ctx->pc = 0x1A184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1848u;
    // 0x1a184c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A1848u, 0x1A1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1850u;
label_1a1850:
    // 0x1a1850: 0x9625002c  lhu         $a1, 0x2C($s1)
    ctx->pc = 0x1a1850u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1a1854:
    // 0x1a1854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1858:
    // 0x1a1858: 0xc06078e  jal         func_181E38
label_1a185c:
    if (ctx->pc == 0x1A185Cu) {
        ctx->pc = 0x1A185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1858u;
        // 0x1a185c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1860u;
        goto label_1a1860;
    }
    ctx->pc = 0x1A1858u;
    SET_GPR_U32(ctx, 31, 0x1A1860u);
    ctx->pc = 0x1A185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1858u;
    // 0x1a185c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1A1858u, 0x1A1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1860u;
label_1a1860:
    // 0x1a1860: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1864:
    // 0x1a1864: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1a1864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a1868:
    // 0x1a1868: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1a1868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1a186c:
    // 0x1a186c: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1a186cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a1870:
    // 0x1a1870: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1a1870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a1874:
    // 0x1a1874: 0x6848000f  ldl         $t0, 0xF($v0)
    ctx->pc = 0x1a1874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a1878:
    // 0x1a1878: 0x6c480008  ldr         $t0, 0x8($v0)
    ctx->pc = 0x1a1878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a187c:
    // 0x1a187c: 0xb3a7009b  sdl         $a3, 0x9B($sp)
    ctx->pc = 0x1a187cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1880:
    // 0x1a1880: 0xb7a70094  sdr         $a3, 0x94($sp)
    ctx->pc = 0x1a1880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1884:
    // 0x1a1884: 0xb3a800a3  sdl         $t0, 0xA3($sp)
    ctx->pc = 0x1a1884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1888:
    // 0x1a1888: 0xb7a8009c  sdr         $t0, 0x9C($sp)
    ctx->pc = 0x1a1888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a188c:
    // 0x1a188c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1a188cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_1a1890:
    // 0x1a1890: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x1a1890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a1894:
    // 0x1a1894: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1a1894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1898:
    // 0x1a1898: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x1a1898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a189c:
    // 0x1a189c: 0x46030502  mul.s       $f20, $f0, $f3
    ctx->pc = 0x1a189cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a18a0:
    // 0x1a18a0: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x1a18a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_1a18a4:
    // 0x1a18a4: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x1a18a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
label_1a18a8:
    // 0x1a18a8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a18a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1a18ac:
    // 0x1a18ac: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1a18acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1a18b0:
    // 0x1a18b0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1a18b4:
    if (ctx->pc == 0x1A18B4u) {
        ctx->pc = 0x1A18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18B0u;
        // 0x1a18b4: 0xe7a2009c  swc1        $f2, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18B8u;
        goto label_1a18b8;
    }
    ctx->pc = 0x1A18B0u;
    {
        const bool branch_taken_0x1a18b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18B0u;
        // 0x1a18b4: 0xe7a2009c  swc1        $f2, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18b0) {
            ctx->pc = 0x1A18C8u;
            goto label_1a18c8;
        }
    }
    ctx->pc = 0x1A18B8u;
label_1a18b8:
    // 0x1a18b8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1a18b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a18bc:
    // 0x1a18bc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a18bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1a18c0:
    // 0x1a18c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a18c4:
    if (ctx->pc == 0x1A18C4u) {
        ctx->pc = 0x1A18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18C0u;
        // 0x1a18c4: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18C8u;
        goto label_1a18c8;
    }
    ctx->pc = 0x1A18C0u;
    {
        const bool branch_taken_0x1a18c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18C0u;
        // 0x1a18c4: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18c0) {
            ctx->pc = 0x1A18D8u;
            goto label_1a18d8;
        }
    }
    ctx->pc = 0x1A18C8u;
label_1a18c8:
    // 0x1a18c8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1a18cc:
    if (ctx->pc == 0x1A18CCu) {
        ctx->pc = 0x1A18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18C8u;
        // 0x1a18cc: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18D0u;
        goto label_1a18d0;
    }
    ctx->pc = 0x1A18C8u;
    {
        const bool branch_taken_0x1a18c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18C8u;
        // 0x1a18cc: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18c8) {
            ctx->pc = 0x1A18D8u;
            goto label_1a18d8;
        }
    }
    ctx->pc = 0x1A18D0u;
label_1a18d0:
    // 0x1a18d0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a18d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1a18d4:
    // 0x1a18d4: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x1a18d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_1a18d8:
    // 0x1a18d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a18d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a18dc:
    // 0x1a18dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a18dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a18e0:
    // 0x1a18e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a18e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a18e4:
    // 0x1a18e4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1a18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a18e8:
    // 0x1a18e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a18e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a18ec:
    // 0x1a18ec: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1a18ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a18f0:
    // 0x1a18f0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a18f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1a18f4:
    // 0x1a18f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a18f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a18f8:
    // 0x1a18f8: 0xc060b78  jal         func_182DE0
label_1a18fc:
    if (ctx->pc == 0x1A18FCu) {
        ctx->pc = 0x1A18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18F8u;
        // 0x1a18fc: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1900u;
        goto label_1a1900;
    }
    ctx->pc = 0x1A18F8u;
    SET_GPR_U32(ctx, 31, 0x1A1900u);
    ctx->pc = 0x1A18FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18F8u;
    // 0x1a18fc: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1A18F8u, 0x1A1900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1900u;
label_1a1900:
    // 0x1a1900: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1a1900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1904:
    // 0x1a1904: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1a1904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1908:
    // 0x1a1908: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a1908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1a190c:
    // 0x1a190c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x1a190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a1910:
    // 0x1a1910: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a1910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a1914:
    // 0x1a1914: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x1a1914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a1918:
    // 0x1a1918: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1a1918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a191c:
    // 0x1a191c: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1a191cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_1a1920:
    // 0x1a1920: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1a1920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1a1924:
    // 0x1a1924: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a1924u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1a1928:
    // 0x1a1928: 0x9223005c  lbu         $v1, 0x5C($s1)
    ctx->pc = 0x1a1928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a192c:
    // 0x1a192c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1a192cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1a1930:
    // 0x1a1930: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1a1930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_1a1934:
    // 0x1a1934: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1a1934u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a1938:
    // 0x1a1938: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1a1938u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a193c:
    // 0x1a193c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1a1940:
    if (ctx->pc == 0x1A1940u) {
        ctx->pc = 0x1A1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A193Cu;
        // 0x1a1940: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1944u;
        goto label_1a1944;
    }
    ctx->pc = 0x1A193Cu;
    {
        const bool branch_taken_0x1a193c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A193Cu;
        // 0x1a1940: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a193c) {
            ctx->pc = 0x1A1958u;
            goto label_1a1958;
        }
    }
    ctx->pc = 0x1A1944u;
label_1a1944:
    // 0x1a1944: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a1944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1948:
    // 0x1a1948: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a1948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a194c:
    // 0x1a194c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a194cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a1950:
    // 0x1a1950: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a1954:
    if (ctx->pc == 0x1A1954u) {
        ctx->pc = 0x1A1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1950u;
        // 0x1a1954: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1958u;
        goto label_1a1958;
    }
    ctx->pc = 0x1A1950u;
    {
        const bool branch_taken_0x1a1950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1950u;
        // 0x1a1954: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1950) {
            ctx->pc = 0x1A1968u;
            goto label_1a1968;
        }
    }
    ctx->pc = 0x1A1958u;
label_1a1958:
    // 0x1a1958: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a1958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a195c:
    // 0x1a195c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1960:
    // 0x1a1960: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a1960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a1964:
    // 0x1a1964: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a1964u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a1968:
    // 0x1a1968: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1a1968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a196c:
    // 0x1a196c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1970:
    // 0x1a1970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1974:
    // 0x1a1974: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1a1974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_1a1978:
    // 0x1a1978: 0xc060b58  jal         func_182D60
label_1a197c:
    if (ctx->pc == 0x1A197Cu) {
        ctx->pc = 0x1A197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1978u;
        // 0x1a197c: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1980u;
        goto label_1a1980;
    }
    ctx->pc = 0x1A1978u;
    SET_GPR_U32(ctx, 31, 0x1A1980u);
    ctx->pc = 0x1A197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1978u;
    // 0x1a197c: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A1978u, 0x1A1980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1980u;
label_1a1980:
    // 0x1a1980: 0x9625002c  lhu         $a1, 0x2C($s1)
    ctx->pc = 0x1a1980u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1a1984:
    // 0x1a1984: 0xc06078e  jal         func_181E38
label_1a1988:
    if (ctx->pc == 0x1A1988u) {
        ctx->pc = 0x1A1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1984u;
        // 0x1a1988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A198Cu;
        goto label_1a198c;
    }
    ctx->pc = 0x1A1984u;
    SET_GPR_U32(ctx, 31, 0x1A198Cu);
    ctx->pc = 0x1A1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1984u;
    // 0x1a1988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1A1984u, 0x1A198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A198Cu;
label_1a198c:
    // 0x1a198c: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1a198cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a1990:
    // 0x1a1990: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1a1990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a1994:
    // 0x1a1994: 0x6848000f  ldl         $t0, 0xF($v0)
    ctx->pc = 0x1a1994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a1998:
    // 0x1a1998: 0x6c480008  ldr         $t0, 0x8($v0)
    ctx->pc = 0x1a1998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a199c:
    // 0x1a199c: 0xb3a7009b  sdl         $a3, 0x9B($sp)
    ctx->pc = 0x1a199cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a19a0:
    // 0x1a19a0: 0xb7a70094  sdr         $a3, 0x94($sp)
    ctx->pc = 0x1a19a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a19a4:
    // 0x1a19a4: 0xb3a800a3  sdl         $t0, 0xA3($sp)
    ctx->pc = 0x1a19a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a19a8:
    // 0x1a19a8: 0xb7a8009c  sdr         $t0, 0x9C($sp)
    ctx->pc = 0x1a19a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a19ac:
    // 0x1a19ac: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1a19acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1a19b0:
    // 0x1a19b0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1a19b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a19b4:
    // 0x1a19b4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1a19b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a19b8:
    // 0x1a19b8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1a19b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1a19bc:
    // 0x1a19bc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1a19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1a19c0:
    // 0x1a19c0: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x1a19c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1a19c4:
    // 0x1a19c4: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1a19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_1a19c8:
    // 0x1a19c8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1a19c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1a19cc:
    // 0x1a19cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a19d0:
    if (ctx->pc == 0x1A19D0u) {
        ctx->pc = 0x1A19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19CCu;
        // 0x1a19d0: 0xe7a1009c  swc1        $f1, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A19D4u;
        goto label_1a19d4;
    }
    ctx->pc = 0x1A19CCu;
    {
        const bool branch_taken_0x1a19cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19CCu;
        // 0x1a19d0: 0xe7a1009c  swc1        $f1, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19cc) {
            ctx->pc = 0x1A19E0u;
            goto label_1a19e0;
        }
    }
    ctx->pc = 0x1A19D4u;
label_1a19d4:
    // 0x1a19d4: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1a19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1a19d8:
    // 0x1a19d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a19dc:
    if (ctx->pc == 0x1A19DCu) {
        ctx->pc = 0x1A19E0u;
        goto label_1a19e0;
    }
    ctx->pc = 0x1A19D8u;
    {
        const bool branch_taken_0x1a19d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a19d8) {
            ctx->pc = 0x1A19E4u;
            goto label_1a19e4;
        }
    }
    ctx->pc = 0x1A19E0u;
label_1a19e0:
    // 0x1a19e0: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x1a19e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
label_1a19e4:
    // 0x1a19e4: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_1a19e8:
    if (ctx->pc == 0x1A19E8u) {
        ctx->pc = 0x1A19ECu;
        goto label_1a19ec;
    }
    ctx->pc = 0x1A19E4u;
    {
        const bool branch_taken_0x1a19e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a19e4) {
            ctx->pc = 0x1A1A10u;
            goto label_1a1a10;
        }
    }
    ctx->pc = 0x1A19ECu;
label_1a19ec:
    // 0x1a19ec: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1a19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a19f0:
    // 0x1a19f0: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x1a19f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a19f4:
    // 0x1a19f4: 0x0  nop
    ctx->pc = 0x1a19f4u;
    // NOP
label_1a19f8:
    // 0x1a19f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1a19fc:
    if (ctx->pc == 0x1A19FCu) {
        ctx->pc = 0x1A19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19F8u;
        // 0x1a19fc: 0x93a300a4  lbu         $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A00u;
        goto label_1a1a00;
    }
    ctx->pc = 0x1A19F8u;
    {
        const bool branch_taken_0x1a19f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19F8u;
        // 0x1a19fc: 0x93a300a4  lbu         $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19f8) {
            ctx->pc = 0x1A1A10u;
            goto label_1a1a10;
        }
    }
    ctx->pc = 0x1A1A00u;
label_1a1a00:
    // 0x1a1a00: 0x92220065  lbu         $v0, 0x65($s1)
    ctx->pc = 0x1a1a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 101)));
label_1a1a04:
    // 0x1a1a04: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1a1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1a1a08:
    // 0x1a1a08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a1a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1a1a0c:
    // 0x1a1a0c: 0xa3a300a4  sb          $v1, 0xA4($sp)
    ctx->pc = 0x1a1a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 164), (uint8_t)GPR_U32(ctx, 3));
label_1a1a10:
    // 0x1a1a10: 0xc060b58  jal         func_182D60
label_1a1a14:
    if (ctx->pc == 0x1A1A14u) {
        ctx->pc = 0x1A1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A10u;
        // 0x1a1a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A18u;
        goto label_1a1a18;
    }
    ctx->pc = 0x1A1A10u;
    SET_GPR_U32(ctx, 31, 0x1A1A18u);
    ctx->pc = 0x1A1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A10u;
    // 0x1a1a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A1A10u, 0x1A1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A18u;
label_1a1a18:
    // 0x1a1a18: 0x9625002c  lhu         $a1, 0x2C($s1)
    ctx->pc = 0x1a1a18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1a1a1c:
    // 0x1a1a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a20:
    // 0x1a1a20: 0xc06078e  jal         func_181E38
label_1a1a24:
    if (ctx->pc == 0x1A1A24u) {
        ctx->pc = 0x1A1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A20u;
        // 0x1a1a24: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A28u;
        goto label_1a1a28;
    }
    ctx->pc = 0x1A1A20u;
    SET_GPR_U32(ctx, 31, 0x1A1A28u);
    ctx->pc = 0x1A1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A20u;
    // 0x1a1a24: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1A1A20u, 0x1A1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A28u;
label_1a1a28:
    // 0x1a1a28: 0x9223005c  lbu         $v1, 0x5C($s1)
    ctx->pc = 0x1a1a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a1a2c:
    // 0x1a1a2c: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1a1a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a1a30:
    // 0x1a1a30: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1a1a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a1a34:
    // 0x1a1a34: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1a1a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a1a38:
    // 0x1a1a38: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1a1a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a1a3c:
    // 0x1a1a3c: 0xb3a5009b  sdl         $a1, 0x9B($sp)
    ctx->pc = 0x1a1a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1a40:
    // 0x1a1a40: 0xb7a50094  sdr         $a1, 0x94($sp)
    ctx->pc = 0x1a1a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1a44:
    // 0x1a1a44: 0xb3a600a3  sdl         $a2, 0xA3($sp)
    ctx->pc = 0x1a1a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1a48:
    // 0x1a1a48: 0xb7a6009c  sdr         $a2, 0x9C($sp)
    ctx->pc = 0x1a1a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1a4c:
    // 0x1a1a4c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1a1a50:
    if (ctx->pc == 0x1A1A50u) {
        ctx->pc = 0x1A1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A4Cu;
        // 0x1a1a50: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A54u;
        goto label_1a1a54;
    }
    ctx->pc = 0x1A1A4Cu;
    {
        const bool branch_taken_0x1a1a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A4Cu;
        // 0x1a1a50: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a4c) {
            ctx->pc = 0x1A1A74u;
            goto label_1a1a74;
        }
    }
    ctx->pc = 0x1A1A54u;
label_1a1a54:
    // 0x1a1a54: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1a1a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1a58:
    // 0x1a1a58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1a5c:
    // 0x1a1a5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a1a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a1a60:
    // 0x1a1a60: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a1a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1a64:
    // 0x1a1a64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a1a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a1a68:
    // 0x1a1a68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a1a68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a1a6c:
    // 0x1a1a6c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a1a70:
    if (ctx->pc == 0x1A1A70u) {
        ctx->pc = 0x1A1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A6Cu;
        // 0x1a1a70: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A74u;
        goto label_1a1a74;
    }
    ctx->pc = 0x1A1A6Cu;
    {
        const bool branch_taken_0x1a1a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A6Cu;
        // 0x1a1a70: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a6c) {
            ctx->pc = 0x1A1A98u;
            goto label_1a1a98;
        }
    }
    ctx->pc = 0x1A1A74u;
label_1a1a74:
    // 0x1a1a74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a1a78:
    // 0x1a1a78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1a7c:
    // 0x1a1a7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a1a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a1a80:
    // 0x1a1a80: 0xc443d028  lwc1        $f3, -0x2FD8($v0)
    ctx->pc = 0x1a1a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a1a84:
    // 0x1a1a84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a1a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a1a88:
    // 0x1a1a88: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1a1a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1a8c:
    // 0x1a1a8c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a1a8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a1a90:
    // 0x1a1a90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a1a90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a1a94:
    // 0x1a1a94: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a1a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a1a98:
    // 0x1a1a98: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1a1a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1a9c:
    // 0x1a1a9c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1a1a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1aa0:
    // 0x1a1aa0: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x1a1aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
label_1a1aa4:
    // 0x1a1aa4: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x1a1aa4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a1aa8:
    // 0x1a1aa8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1a1aac:
    if (ctx->pc == 0x1A1AACu) {
        ctx->pc = 0x1A1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AA8u;
        // 0x1a1aac: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AB0u;
        goto label_1a1ab0;
    }
    ctx->pc = 0x1A1AA8u;
    {
        const bool branch_taken_0x1a1aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AA8u;
        // 0x1a1aac: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1aa8) {
            ctx->pc = 0x1A1AD0u;
            goto label_1a1ad0;
        }
    }
    ctx->pc = 0x1A1AB0u;
label_1a1ab0:
    // 0x1a1ab0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1ab4:
    // 0x1a1ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a1ab8:
    // 0x1a1ab8: 0xc662d024  lwc1        $f2, -0x2FDC($s3)
    ctx->pc = 0x1a1ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294955044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a1abc:
    // 0x1a1abc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1a1abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a1ac0:
    // 0x1a1ac0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1a1ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1ac4:
    // 0x1a1ac4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a1ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a1ac8:
    // 0x1a1ac8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a1ac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a1acc:
    // 0x1a1acc: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1a1accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a1ad0:
    // 0x1a1ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ad4:
    // 0x1a1ad4: 0xc060b78  jal         func_182DE0
label_1a1ad8:
    if (ctx->pc == 0x1A1AD8u) {
        ctx->pc = 0x1A1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD4u;
        // 0x1a1ad8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1ADCu;
        goto label_1a1adc;
    }
    ctx->pc = 0x1A1AD4u;
    SET_GPR_U32(ctx, 31, 0x1A1ADCu);
    ctx->pc = 0x1A1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1AD4u;
    // 0x1a1ad8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1A1AD4u, 0x1A1ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1ADCu;
label_1a1adc:
    // 0x1a1adc: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1a1adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1a1ae0:
    // 0x1a1ae0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_1a1ae4:
    if (ctx->pc == 0x1A1AE4u) {
        ctx->pc = 0x1A1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AE0u;
        // 0x1a1ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AE8u;
        goto label_1a1ae8;
    }
    ctx->pc = 0x1A1AE0u;
    {
        const bool branch_taken_0x1a1ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AE0u;
        // 0x1a1ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ae0) {
            ctx->pc = 0x1A1B84u;
            goto label_1a1b84;
        }
    }
    ctx->pc = 0x1A1AE8u;
label_1a1ae8:
    // 0x1a1ae8: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x1a1ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1aec:
    // 0x1a1aec: 0xc060b58  jal         func_182D60
label_1a1af0:
    if (ctx->pc == 0x1A1AF0u) {
        ctx->pc = 0x1A1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AECu;
        // 0x1a1af0: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AF4u;
        goto label_1a1af4;
    }
    ctx->pc = 0x1A1AECu;
    SET_GPR_U32(ctx, 31, 0x1A1AF4u);
    ctx->pc = 0x1A1AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1AECu;
    // 0x1a1af0: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A1AECu, 0x1A1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1AF4u;
label_1a1af4:
    // 0x1a1af4: 0x9625002c  lhu         $a1, 0x2C($s1)
    ctx->pc = 0x1a1af4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1a1af8:
    // 0x1a1af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1afc:
    // 0x1a1afc: 0xc06078e  jal         func_181E38
label_1a1b00:
    if (ctx->pc == 0x1A1B00u) {
        ctx->pc = 0x1A1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AFCu;
        // 0x1a1b00: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B04u;
        goto label_1a1b04;
    }
    ctx->pc = 0x1A1AFCu;
    SET_GPR_U32(ctx, 31, 0x1A1B04u);
    ctx->pc = 0x1A1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1AFCu;
    // 0x1a1b00: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1A1AFCu, 0x1A1B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B04u;
label_1a1b04:
    // 0x1a1b04: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x1a1b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1b08:
    // 0x1a1b08: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x1a1b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1a1b0c:
    // 0x1a1b0c: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x1a1b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a1b10:
    // 0x1a1b10: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1a1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1a1b14:
    // 0x1a1b14: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x1a1b14u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1a1b18:
    // 0x1a1b18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a1b1c:
    // 0x1a1b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a1b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a1b20:
    // 0x1a1b20: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1a1b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a1b24:
    // 0x1a1b24: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1a1b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a1b28:
    // 0x1a1b28: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1a1b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a1b2c:
    // 0x1a1b2c: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1a1b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a1b30:
    // 0x1a1b30: 0xb3a5009b  sdl         $a1, 0x9B($sp)
    ctx->pc = 0x1a1b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1b34:
    // 0x1a1b34: 0xb7a50094  sdr         $a1, 0x94($sp)
    ctx->pc = 0x1a1b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1b38:
    // 0x1a1b38: 0xb3a600a3  sdl         $a2, 0xA3($sp)
    ctx->pc = 0x1a1b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1b3c:
    // 0x1a1b3c: 0xb7a6009c  sdr         $a2, 0x9C($sp)
    ctx->pc = 0x1a1b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a1b40:
    // 0x1a1b40: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1a1b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1a1b44:
    // 0x1a1b44: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a1b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a1b48:
    // 0x1a1b48: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1a1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1a1b4c:
    // 0x1a1b4c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1a1b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1a1b50:
    // 0x1a1b50: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1a1b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1b54:
    // 0x1a1b54: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1a1b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_1a1b58:
    // 0x1a1b58: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a1b58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1a1b5c:
    // 0x1a1b5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a1b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a1b60:
    // 0x1a1b60: 0xa3a300a7  sb          $v1, 0xA7($sp)
    ctx->pc = 0x1a1b60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 3));
label_1a1b64:
    // 0x1a1b64: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_1a1b68:
    if (ctx->pc == 0x1A1B68u) {
        ctx->pc = 0x1A1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B64u;
        // 0x1a1b68: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B6Cu;
        goto label_1a1b6c;
    }
    ctx->pc = 0x1A1B64u;
    {
        const bool branch_taken_0x1a1b64 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B64u;
        // 0x1a1b68: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b64) {
            ctx->pc = 0x1A1B78u;
            goto label_1a1b78;
        }
    }
    ctx->pc = 0x1A1B6Cu;
label_1a1b6c:
    // 0x1a1b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b70:
    // 0x1a1b70: 0xc060b78  jal         func_182DE0
label_1a1b74:
    if (ctx->pc == 0x1A1B74u) {
        ctx->pc = 0x1A1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B70u;
        // 0x1a1b74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B78u;
        goto label_1a1b78;
    }
    ctx->pc = 0x1A1B70u;
    SET_GPR_U32(ctx, 31, 0x1A1B78u);
    ctx->pc = 0x1A1B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B70u;
    // 0x1a1b74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1A1B70u, 0x1A1B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B78u;
label_1a1b78:
    // 0x1a1b78: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1a1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1a1b7c:
    // 0x1a1b7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a1b80:
    // 0x1a1b80: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1a1b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_1a1b84:
    // 0x1a1b84: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1a1b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1b88:
    // 0x1a1b88: 0x92230064  lbu         $v1, 0x64($s1)
    ctx->pc = 0x1a1b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
label_1a1b8c:
    // 0x1a1b8c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1a1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1a1b90:
    // 0x1a1b90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a1b94:
    if (ctx->pc == 0x1A1B94u) {
        ctx->pc = 0x1A1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B90u;
        // 0x1a1b94: 0xe6200040  swc1        $f0, 0x40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B98u;
        goto label_1a1b98;
    }
    ctx->pc = 0x1A1B90u;
    {
        const bool branch_taken_0x1a1b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B90u;
        // 0x1a1b94: 0xe6200040  swc1        $f0, 0x40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b90) {
            ctx->pc = 0x1A1BACu;
            goto label_1a1bac;
        }
    }
    ctx->pc = 0x1A1B98u;
label_1a1b98:
    // 0x1a1b98: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1a1b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a1b9c:
    // 0x1a1b9c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a1ba0:
    if (ctx->pc == 0x1A1BA0u) {
        ctx->pc = 0x1A1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B9Cu;
        // 0x1a1ba0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BA4u;
        goto label_1a1ba4;
    }
    ctx->pc = 0x1A1B9Cu;
    {
        const bool branch_taken_0x1a1b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B9Cu;
        // 0x1a1ba0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b9c) {
            ctx->pc = 0x1A1BA8u;
            goto label_1a1ba8;
        }
    }
    ctx->pc = 0x1A1BA4u;
label_1a1ba4:
    // 0x1a1ba4: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x1a1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1a1ba8:
    // 0x1a1ba8: 0xa2220064  sb          $v0, 0x64($s1)
    ctx->pc = 0x1a1ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 2));
label_1a1bac:
    // 0x1a1bac: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1a1bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1a1bb0:
    // 0x1a1bb0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1a1bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a1bb4:
    // 0x1a1bb4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1a1bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a1bb8:
    // 0x1a1bb8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1a1bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a1bbc:
    // 0x1a1bbc: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1a1bbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a1bc0:
    // 0x1a1bc0: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1a1bc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a1bc4:
    // 0x1a1bc4: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1a1bc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a1bc8:
    // 0x1a1bc8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a1bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a1bcc:
    // 0x1a1bcc: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x1a1bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1a1bd0:
    // 0x1a1bd0: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x1a1bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a1bd4:
    // 0x1a1bd4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1a1bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a1bd8:
    // 0x1a1bd8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1a1bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a1bdc:
    // 0x1a1bdc: 0x3e00008  jr          $ra
label_1a1be0:
    if (ctx->pc == 0x1A1BE0u) {
        ctx->pc = 0x1A1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BDCu;
        // 0x1a1be0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BE4u;
        goto label_1a1be4;
    }
    ctx->pc = 0x1A1BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BDCu;
        // 0x1a1be0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1BE4u;
label_1a1be4:
    // 0x1a1be4: 0x0  nop
    ctx->pc = 0x1a1be4u;
    // NOP
    ctx->pc = 0x1a1be8u;
}
