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

// Function: sub_001D1250
// Address: 0x1d1250 - 0x1d16e8
void sub_001D1250_0x1d1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1250_0x1d1250");
#endif

    switch (ctx->pc) {
        case 0x1d1250u: goto label_1d1250;
        case 0x1d1254u: goto label_1d1254;
        case 0x1d1258u: goto label_1d1258;
        case 0x1d125cu: goto label_1d125c;
        case 0x1d1260u: goto label_1d1260;
        case 0x1d1264u: goto label_1d1264;
        case 0x1d1268u: goto label_1d1268;
        case 0x1d126cu: goto label_1d126c;
        case 0x1d1270u: goto label_1d1270;
        case 0x1d1274u: goto label_1d1274;
        case 0x1d1278u: goto label_1d1278;
        case 0x1d127cu: goto label_1d127c;
        case 0x1d1280u: goto label_1d1280;
        case 0x1d1284u: goto label_1d1284;
        case 0x1d1288u: goto label_1d1288;
        case 0x1d128cu: goto label_1d128c;
        case 0x1d1290u: goto label_1d1290;
        case 0x1d1294u: goto label_1d1294;
        case 0x1d1298u: goto label_1d1298;
        case 0x1d129cu: goto label_1d129c;
        case 0x1d12a0u: goto label_1d12a0;
        case 0x1d12a4u: goto label_1d12a4;
        case 0x1d12a8u: goto label_1d12a8;
        case 0x1d12acu: goto label_1d12ac;
        case 0x1d12b0u: goto label_1d12b0;
        case 0x1d12b4u: goto label_1d12b4;
        case 0x1d12b8u: goto label_1d12b8;
        case 0x1d12bcu: goto label_1d12bc;
        case 0x1d12c0u: goto label_1d12c0;
        case 0x1d12c4u: goto label_1d12c4;
        case 0x1d12c8u: goto label_1d12c8;
        case 0x1d12ccu: goto label_1d12cc;
        case 0x1d12d0u: goto label_1d12d0;
        case 0x1d12d4u: goto label_1d12d4;
        case 0x1d12d8u: goto label_1d12d8;
        case 0x1d12dcu: goto label_1d12dc;
        case 0x1d12e0u: goto label_1d12e0;
        case 0x1d12e4u: goto label_1d12e4;
        case 0x1d12e8u: goto label_1d12e8;
        case 0x1d12ecu: goto label_1d12ec;
        case 0x1d12f0u: goto label_1d12f0;
        case 0x1d12f4u: goto label_1d12f4;
        case 0x1d12f8u: goto label_1d12f8;
        case 0x1d12fcu: goto label_1d12fc;
        case 0x1d1300u: goto label_1d1300;
        case 0x1d1304u: goto label_1d1304;
        case 0x1d1308u: goto label_1d1308;
        case 0x1d130cu: goto label_1d130c;
        case 0x1d1310u: goto label_1d1310;
        case 0x1d1314u: goto label_1d1314;
        case 0x1d1318u: goto label_1d1318;
        case 0x1d131cu: goto label_1d131c;
        case 0x1d1320u: goto label_1d1320;
        case 0x1d1324u: goto label_1d1324;
        case 0x1d1328u: goto label_1d1328;
        case 0x1d132cu: goto label_1d132c;
        case 0x1d1330u: goto label_1d1330;
        case 0x1d1334u: goto label_1d1334;
        case 0x1d1338u: goto label_1d1338;
        case 0x1d133cu: goto label_1d133c;
        case 0x1d1340u: goto label_1d1340;
        case 0x1d1344u: goto label_1d1344;
        case 0x1d1348u: goto label_1d1348;
        case 0x1d134cu: goto label_1d134c;
        case 0x1d1350u: goto label_1d1350;
        case 0x1d1354u: goto label_1d1354;
        case 0x1d1358u: goto label_1d1358;
        case 0x1d135cu: goto label_1d135c;
        case 0x1d1360u: goto label_1d1360;
        case 0x1d1364u: goto label_1d1364;
        case 0x1d1368u: goto label_1d1368;
        case 0x1d136cu: goto label_1d136c;
        case 0x1d1370u: goto label_1d1370;
        case 0x1d1374u: goto label_1d1374;
        case 0x1d1378u: goto label_1d1378;
        case 0x1d137cu: goto label_1d137c;
        case 0x1d1380u: goto label_1d1380;
        case 0x1d1384u: goto label_1d1384;
        case 0x1d1388u: goto label_1d1388;
        case 0x1d138cu: goto label_1d138c;
        case 0x1d1390u: goto label_1d1390;
        case 0x1d1394u: goto label_1d1394;
        case 0x1d1398u: goto label_1d1398;
        case 0x1d139cu: goto label_1d139c;
        case 0x1d13a0u: goto label_1d13a0;
        case 0x1d13a4u: goto label_1d13a4;
        case 0x1d13a8u: goto label_1d13a8;
        case 0x1d13acu: goto label_1d13ac;
        case 0x1d13b0u: goto label_1d13b0;
        case 0x1d13b4u: goto label_1d13b4;
        case 0x1d13b8u: goto label_1d13b8;
        case 0x1d13bcu: goto label_1d13bc;
        case 0x1d13c0u: goto label_1d13c0;
        case 0x1d13c4u: goto label_1d13c4;
        case 0x1d13c8u: goto label_1d13c8;
        case 0x1d13ccu: goto label_1d13cc;
        case 0x1d13d0u: goto label_1d13d0;
        case 0x1d13d4u: goto label_1d13d4;
        case 0x1d13d8u: goto label_1d13d8;
        case 0x1d13dcu: goto label_1d13dc;
        case 0x1d13e0u: goto label_1d13e0;
        case 0x1d13e4u: goto label_1d13e4;
        case 0x1d13e8u: goto label_1d13e8;
        case 0x1d13ecu: goto label_1d13ec;
        case 0x1d13f0u: goto label_1d13f0;
        case 0x1d13f4u: goto label_1d13f4;
        case 0x1d13f8u: goto label_1d13f8;
        case 0x1d13fcu: goto label_1d13fc;
        case 0x1d1400u: goto label_1d1400;
        case 0x1d1404u: goto label_1d1404;
        case 0x1d1408u: goto label_1d1408;
        case 0x1d140cu: goto label_1d140c;
        case 0x1d1410u: goto label_1d1410;
        case 0x1d1414u: goto label_1d1414;
        case 0x1d1418u: goto label_1d1418;
        case 0x1d141cu: goto label_1d141c;
        case 0x1d1420u: goto label_1d1420;
        case 0x1d1424u: goto label_1d1424;
        case 0x1d1428u: goto label_1d1428;
        case 0x1d142cu: goto label_1d142c;
        case 0x1d1430u: goto label_1d1430;
        case 0x1d1434u: goto label_1d1434;
        case 0x1d1438u: goto label_1d1438;
        case 0x1d143cu: goto label_1d143c;
        case 0x1d1440u: goto label_1d1440;
        case 0x1d1444u: goto label_1d1444;
        case 0x1d1448u: goto label_1d1448;
        case 0x1d144cu: goto label_1d144c;
        case 0x1d1450u: goto label_1d1450;
        case 0x1d1454u: goto label_1d1454;
        case 0x1d1458u: goto label_1d1458;
        case 0x1d145cu: goto label_1d145c;
        case 0x1d1460u: goto label_1d1460;
        case 0x1d1464u: goto label_1d1464;
        case 0x1d1468u: goto label_1d1468;
        case 0x1d146cu: goto label_1d146c;
        case 0x1d1470u: goto label_1d1470;
        case 0x1d1474u: goto label_1d1474;
        case 0x1d1478u: goto label_1d1478;
        case 0x1d147cu: goto label_1d147c;
        case 0x1d1480u: goto label_1d1480;
        case 0x1d1484u: goto label_1d1484;
        case 0x1d1488u: goto label_1d1488;
        case 0x1d148cu: goto label_1d148c;
        case 0x1d1490u: goto label_1d1490;
        case 0x1d1494u: goto label_1d1494;
        case 0x1d1498u: goto label_1d1498;
        case 0x1d149cu: goto label_1d149c;
        case 0x1d14a0u: goto label_1d14a0;
        case 0x1d14a4u: goto label_1d14a4;
        case 0x1d14a8u: goto label_1d14a8;
        case 0x1d14acu: goto label_1d14ac;
        case 0x1d14b0u: goto label_1d14b0;
        case 0x1d14b4u: goto label_1d14b4;
        case 0x1d14b8u: goto label_1d14b8;
        case 0x1d14bcu: goto label_1d14bc;
        case 0x1d14c0u: goto label_1d14c0;
        case 0x1d14c4u: goto label_1d14c4;
        case 0x1d14c8u: goto label_1d14c8;
        case 0x1d14ccu: goto label_1d14cc;
        case 0x1d14d0u: goto label_1d14d0;
        case 0x1d14d4u: goto label_1d14d4;
        case 0x1d14d8u: goto label_1d14d8;
        case 0x1d14dcu: goto label_1d14dc;
        case 0x1d14e0u: goto label_1d14e0;
        case 0x1d14e4u: goto label_1d14e4;
        case 0x1d14e8u: goto label_1d14e8;
        case 0x1d14ecu: goto label_1d14ec;
        case 0x1d14f0u: goto label_1d14f0;
        case 0x1d14f4u: goto label_1d14f4;
        case 0x1d14f8u: goto label_1d14f8;
        case 0x1d14fcu: goto label_1d14fc;
        case 0x1d1500u: goto label_1d1500;
        case 0x1d1504u: goto label_1d1504;
        case 0x1d1508u: goto label_1d1508;
        case 0x1d150cu: goto label_1d150c;
        case 0x1d1510u: goto label_1d1510;
        case 0x1d1514u: goto label_1d1514;
        case 0x1d1518u: goto label_1d1518;
        case 0x1d151cu: goto label_1d151c;
        case 0x1d1520u: goto label_1d1520;
        case 0x1d1524u: goto label_1d1524;
        case 0x1d1528u: goto label_1d1528;
        case 0x1d152cu: goto label_1d152c;
        case 0x1d1530u: goto label_1d1530;
        case 0x1d1534u: goto label_1d1534;
        case 0x1d1538u: goto label_1d1538;
        case 0x1d153cu: goto label_1d153c;
        case 0x1d1540u: goto label_1d1540;
        case 0x1d1544u: goto label_1d1544;
        case 0x1d1548u: goto label_1d1548;
        case 0x1d154cu: goto label_1d154c;
        case 0x1d1550u: goto label_1d1550;
        case 0x1d1554u: goto label_1d1554;
        case 0x1d1558u: goto label_1d1558;
        case 0x1d155cu: goto label_1d155c;
        case 0x1d1560u: goto label_1d1560;
        case 0x1d1564u: goto label_1d1564;
        case 0x1d1568u: goto label_1d1568;
        case 0x1d156cu: goto label_1d156c;
        case 0x1d1570u: goto label_1d1570;
        case 0x1d1574u: goto label_1d1574;
        case 0x1d1578u: goto label_1d1578;
        case 0x1d157cu: goto label_1d157c;
        case 0x1d1580u: goto label_1d1580;
        case 0x1d1584u: goto label_1d1584;
        case 0x1d1588u: goto label_1d1588;
        case 0x1d158cu: goto label_1d158c;
        case 0x1d1590u: goto label_1d1590;
        case 0x1d1594u: goto label_1d1594;
        case 0x1d1598u: goto label_1d1598;
        case 0x1d159cu: goto label_1d159c;
        case 0x1d15a0u: goto label_1d15a0;
        case 0x1d15a4u: goto label_1d15a4;
        case 0x1d15a8u: goto label_1d15a8;
        case 0x1d15acu: goto label_1d15ac;
        case 0x1d15b0u: goto label_1d15b0;
        case 0x1d15b4u: goto label_1d15b4;
        case 0x1d15b8u: goto label_1d15b8;
        case 0x1d15bcu: goto label_1d15bc;
        case 0x1d15c0u: goto label_1d15c0;
        case 0x1d15c4u: goto label_1d15c4;
        case 0x1d15c8u: goto label_1d15c8;
        case 0x1d15ccu: goto label_1d15cc;
        case 0x1d15d0u: goto label_1d15d0;
        case 0x1d15d4u: goto label_1d15d4;
        case 0x1d15d8u: goto label_1d15d8;
        case 0x1d15dcu: goto label_1d15dc;
        case 0x1d15e0u: goto label_1d15e0;
        case 0x1d15e4u: goto label_1d15e4;
        case 0x1d15e8u: goto label_1d15e8;
        case 0x1d15ecu: goto label_1d15ec;
        case 0x1d15f0u: goto label_1d15f0;
        case 0x1d15f4u: goto label_1d15f4;
        case 0x1d15f8u: goto label_1d15f8;
        case 0x1d15fcu: goto label_1d15fc;
        case 0x1d1600u: goto label_1d1600;
        case 0x1d1604u: goto label_1d1604;
        case 0x1d1608u: goto label_1d1608;
        case 0x1d160cu: goto label_1d160c;
        case 0x1d1610u: goto label_1d1610;
        case 0x1d1614u: goto label_1d1614;
        case 0x1d1618u: goto label_1d1618;
        case 0x1d161cu: goto label_1d161c;
        case 0x1d1620u: goto label_1d1620;
        case 0x1d1624u: goto label_1d1624;
        case 0x1d1628u: goto label_1d1628;
        case 0x1d162cu: goto label_1d162c;
        case 0x1d1630u: goto label_1d1630;
        case 0x1d1634u: goto label_1d1634;
        case 0x1d1638u: goto label_1d1638;
        case 0x1d163cu: goto label_1d163c;
        case 0x1d1640u: goto label_1d1640;
        case 0x1d1644u: goto label_1d1644;
        case 0x1d1648u: goto label_1d1648;
        case 0x1d164cu: goto label_1d164c;
        case 0x1d1650u: goto label_1d1650;
        case 0x1d1654u: goto label_1d1654;
        case 0x1d1658u: goto label_1d1658;
        case 0x1d165cu: goto label_1d165c;
        case 0x1d1660u: goto label_1d1660;
        case 0x1d1664u: goto label_1d1664;
        case 0x1d1668u: goto label_1d1668;
        case 0x1d166cu: goto label_1d166c;
        case 0x1d1670u: goto label_1d1670;
        case 0x1d1674u: goto label_1d1674;
        case 0x1d1678u: goto label_1d1678;
        case 0x1d167cu: goto label_1d167c;
        case 0x1d1680u: goto label_1d1680;
        case 0x1d1684u: goto label_1d1684;
        case 0x1d1688u: goto label_1d1688;
        case 0x1d168cu: goto label_1d168c;
        case 0x1d1690u: goto label_1d1690;
        case 0x1d1694u: goto label_1d1694;
        case 0x1d1698u: goto label_1d1698;
        case 0x1d169cu: goto label_1d169c;
        case 0x1d16a0u: goto label_1d16a0;
        case 0x1d16a4u: goto label_1d16a4;
        case 0x1d16a8u: goto label_1d16a8;
        case 0x1d16acu: goto label_1d16ac;
        case 0x1d16b0u: goto label_1d16b0;
        case 0x1d16b4u: goto label_1d16b4;
        case 0x1d16b8u: goto label_1d16b8;
        case 0x1d16bcu: goto label_1d16bc;
        case 0x1d16c0u: goto label_1d16c0;
        case 0x1d16c4u: goto label_1d16c4;
        case 0x1d16c8u: goto label_1d16c8;
        case 0x1d16ccu: goto label_1d16cc;
        case 0x1d16d0u: goto label_1d16d0;
        case 0x1d16d4u: goto label_1d16d4;
        case 0x1d16d8u: goto label_1d16d8;
        case 0x1d16dcu: goto label_1d16dc;
        case 0x1d16e0u: goto label_1d16e0;
        case 0x1d16e4u: goto label_1d16e4;
        default: break;
    }

    ctx->pc = 0x1d1250u;

label_1d1250:
    // 0x1d1250: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1d1250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1d1254:
    // 0x1d1254: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1d1254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1d1258:
    // 0x1d1258: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1d1258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1d125c:
    // 0x1d125c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d125cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1260:
    // 0x1d1260: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1d1260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1d1264:
    // 0x1d1264: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1d1264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1d1268:
    // 0x1d1268: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1d1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1d126c:
    // 0x1d126c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1d1270:
    // 0x1d1270: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d1270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1d1274:
    // 0x1d1274: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1d1274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1d1278:
    // 0x1d1278: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1d1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1d127c:
    // 0x1d127c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d1280:
    // 0x1d1280: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x1d1280u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1d1284:
    // 0x1d1284: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1d1284u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1d1288:
    // 0x1d1288: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d1288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1d128c:
    // 0x1d128c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d128cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1290:
    // 0x1d1290: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d1290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d1294:
    // 0x1d1294: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d1294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d1298:
    // 0x1d1298: 0x40f809  jalr        $v0
label_1d129c:
    if (ctx->pc == 0x1D129Cu) {
        ctx->pc = 0x1D129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1298u;
        // 0x1d129c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12A0u;
        goto label_1d12a0;
    }
    ctx->pc = 0x1D1298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D12A0u);
        ctx->pc = 0x1D129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1298u;
        // 0x1d129c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1298u, 0x1D12A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D12A0u;
label_1d12a0:
    // 0x1d12a0: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
label_1d12a4:
    if (ctx->pc == 0x1D12A4u) {
        ctx->pc = 0x1D12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12A0u;
        // 0x1d12a4: 0x26300140  addiu       $s0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12A8u;
        goto label_1d12a8;
    }
    ctx->pc = 0x1D12A0u;
    {
        const bool branch_taken_0x1d12a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12A0u;
        // 0x1d12a4: 0x26300140  addiu       $s0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12a0) {
            ctx->pc = 0x1D16A8u;
            goto label_1d16a8;
        }
    }
    ctx->pc = 0x1D12A8u;
label_1d12a8:
    // 0x1d12a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d12a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d12ac:
    // 0x1d12ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d12acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d12b0:
    // 0x1d12b0: 0x26350060  addiu       $s5, $s1, 0x60
    ctx->pc = 0x1d12b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1d12b4:
    // 0x1d12b4: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1d12b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1d12b8:
    // 0x1d12b8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d12b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d12bc:
    // 0x1d12bc: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1d12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1d12c0:
    // 0x1d12c0: 0x40f809  jalr        $v0
label_1d12c4:
    if (ctx->pc == 0x1D12C4u) {
        ctx->pc = 0x1D12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12C0u;
        // 0x1d12c4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12C8u;
        goto label_1d12c8;
    }
    ctx->pc = 0x1D12C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D12C8u);
        ctx->pc = 0x1D12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12C0u;
        // 0x1d12c4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D12C0u, 0x1D12C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D12C8u;
label_1d12c8:
    // 0x1d12c8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1d12c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d12cc:
    // 0x1d12cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d12ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d12d0:
    // 0x1d12d0: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x1d12d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d12d4:
    // 0x1d12d4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d12d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1d12d8:
    // 0x1d12d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d12d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1d12dc:
    // 0x1d12dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d12dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d12e0:
    // 0x1d12e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d12e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d12e4:
    // 0x1d12e4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1d12e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1d12e8:
    // 0x1d12e8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x1d12e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d12ec:
    // 0x1d12ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d12ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1d12f0:
    // 0x1d12f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d12f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d12f4:
    // 0x1d12f4: 0xc068818  jal         func_1A2060
label_1d12f8:
    if (ctx->pc == 0x1D12F8u) {
        ctx->pc = 0x1D12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12F4u;
        // 0x1d12f8: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12FCu;
        goto label_1d12fc;
    }
    ctx->pc = 0x1D12F4u;
    SET_GPR_U32(ctx, 31, 0x1D12FCu);
    ctx->pc = 0x1D12F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D12F4u;
    // 0x1d12f8: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1D12F4u, 0x1D12FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D12FCu;
label_1d12fc:
    // 0x1d12fc: 0xc06886e  jal         func_1A21B8
label_1d1300:
    if (ctx->pc == 0x1D1300u) {
        ctx->pc = 0x1D1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12FCu;
        // 0x1d1300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1304u;
        goto label_1d1304;
    }
    ctx->pc = 0x1D12FCu;
    SET_GPR_U32(ctx, 31, 0x1D1304u);
    ctx->pc = 0x1D1300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D12FCu;
    // 0x1d1300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1D12FCu, 0x1D1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1304u;
label_1d1304:
    // 0x1d1304: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1d1304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d1308:
    // 0x1d1308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d130c:
    // 0x1d130c: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x1d130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d1310:
    // 0x1d1310: 0xc068848  jal         func_1A2120
label_1d1314:
    if (ctx->pc == 0x1D1314u) {
        ctx->pc = 0x1D1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1310u;
        // 0x1d1314: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1318u;
        goto label_1d1318;
    }
    ctx->pc = 0x1D1310u;
    SET_GPR_U32(ctx, 31, 0x1D1318u);
    ctx->pc = 0x1D1314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1310u;
    // 0x1d1314: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D1310u, 0x1D1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1318u;
label_1d1318:
    // 0x1d1318: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d1318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d131c:
    // 0x1d131c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1d131cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1d1320:
    // 0x1d1320: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1d1320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1d1324:
    // 0x1d1324: 0x60f809  jalr        $v1
label_1d1328:
    if (ctx->pc == 0x1D1328u) {
        ctx->pc = 0x1D1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1324u;
        // 0x1d1328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D132Cu;
        goto label_1d132c;
    }
    ctx->pc = 0x1D1324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D132Cu);
        ctx->pc = 0x1D1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1324u;
        // 0x1d1328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1324u, 0x1D132Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D132Cu;
label_1d132c:
    // 0x1d132c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1d132cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1d1330:
    // 0x1d1330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d1330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1334:
    // 0x1d1334: 0x0  nop
    ctx->pc = 0x1d1334u;
    // NOP
label_1d1338:
    // 0x1d1338: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d1338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d133c:
    // 0x1d133c: 0x0  nop
    ctx->pc = 0x1d133cu;
    // NOP
label_1d1340:
    // 0x1d1340: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1d1344:
    if (ctx->pc == 0x1D1344u) {
        ctx->pc = 0x1D1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1340u;
        // 0x1d1344: 0xe6a000c0  swc1        $f0, 0xC0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1348u;
        goto label_1d1348;
    }
    ctx->pc = 0x1D1340u;
    {
        const bool branch_taken_0x1d1340 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1340) {
            ctx->pc = 0x1D1344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1340u;
            // 0x1d1344: 0xe6a000c0  swc1        $f0, 0xC0($s5) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D135Cu;
            goto label_1d135c;
        }
    }
    ctx->pc = 0x1D1348u;
label_1d1348:
    // 0x1d1348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d134c:
    // 0x1d134c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d134cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1350:
    // 0x1d1350: 0x0  nop
    ctx->pc = 0x1d1350u;
    // NOP
label_1d1354:
    // 0x1d1354: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x1d1354u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
label_1d1358:
    // 0x1d1358: 0xe6a000c0  swc1        $f0, 0xC0($s5)
    ctx->pc = 0x1d1358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
label_1d135c:
    // 0x1d135c: 0x263001e4  addiu       $s0, $s1, 0x1E4
    ctx->pc = 0x1d135cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 484));
label_1d1360:
    // 0x1d1360: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1364:
    // 0x1d1364: 0xc614000c  lwc1        $f20, 0xC($s0)
    ctx->pc = 0x1d1364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d1368:
    // 0x1d1368: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d1368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d136c:
    // 0x1d136c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1d136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1370:
    // 0x1d1370: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1d1370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1d1374:
    // 0x1d1374: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1d1374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1d1378:
    // 0x1d1378: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1d1378u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1d137c:
    // 0x1d137c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1d137cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1d1380:
    // 0x1d1380: 0x40f809  jalr        $v0
label_1d1384:
    if (ctx->pc == 0x1D1384u) {
        ctx->pc = 0x1D1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1380u;
        // 0x1d1384: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1388u;
        goto label_1d1388;
    }
    ctx->pc = 0x1D1380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1388u);
        ctx->pc = 0x1D1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1380u;
        // 0x1d1384: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1380u, 0x1D1388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1388u;
label_1d1388:
    // 0x1d1388: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1d1388u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1d138c:
    // 0x1d138c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d138cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1390:
    // 0x1d1390: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1d1390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1394:
    // 0x1d1394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1398:
    // 0x1d1398: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1d1398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1d139c:
    // 0x1d139c: 0xc068864  jal         func_1A2190
label_1d13a0:
    if (ctx->pc == 0x1D13A0u) {
        ctx->pc = 0x1D13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D139Cu;
        // 0x1d13a0: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D13A4u;
        goto label_1d13a4;
    }
    ctx->pc = 0x1D139Cu;
    SET_GPR_U32(ctx, 31, 0x1D13A4u);
    ctx->pc = 0x1D13A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D139Cu;
    // 0x1d13a0: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x1D139Cu, 0x1D13A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13A4u;
label_1d13a4:
    // 0x1d13a4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1d13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d13a8:
    // 0x1d13a8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1d13a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d13ac:
    // 0x1d13ac: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1d13acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1d13b0:
    // 0x1d13b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d13b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1d13b4:
    // 0x1d13b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d13b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d13b8:
    // 0x1d13b8: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1d13b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d13bc:
    // 0x1d13bc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x1d13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d13c0:
    // 0x1d13c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d13c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d13c4:
    // 0x1d13c4: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x1d13c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d13c8:
    // 0x1d13c8: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x1d13c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d13cc:
    // 0x1d13cc: 0x8e2305f8  lw          $v1, 0x5F8($s1)
    ctx->pc = 0x1d13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
label_1d13d0:
    // 0x1d13d0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1d13d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_1d13d4:
    // 0x1d13d4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1d13d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1d13d8:
    // 0x1d13d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1d13d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d13dc:
    // 0x1d13dc: 0xe6220028  swc1        $f2, 0x28($s1)
    ctx->pc = 0x1d13dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_1d13e0:
    // 0x1d13e0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1d13e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_1d13e4:
    // 0x1d13e4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d13e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1d13e8:
    // 0x1d13e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d13e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d13ec:
    // 0x1d13ec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d13ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d13f0:
    // 0x1d13f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d13f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d13f4:
    // 0x1d13f4: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
label_1d13f8:
    if (ctx->pc == 0x1D13F8u) {
        ctx->pc = 0x1D13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13F4u;
        // 0x1d13f8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D13FCu;
        goto label_1d13fc;
    }
    ctx->pc = 0x1D13F4u;
    {
        const bool branch_taken_0x1d13f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13F4u;
        // 0x1d13f8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13f4) {
            ctx->pc = 0x1D1630u;
            goto label_1d1630;
        }
    }
    ctx->pc = 0x1D13FCu;
label_1d13fc:
    // 0x1d13fc: 0x8fb70030  lw          $s7, 0x30($sp)
    ctx->pc = 0x1d13fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1400:
    // 0x1d1400: 0x46002546  mov.s       $f21, $f4
    ctx->pc = 0x1d1400u;
    ctx->f[21] = FPU_MOV_S(ctx->f[4]);
label_1d1404:
    // 0x1d1404: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1d1404u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1d1408:
    // 0x1d1408: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1d1408u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1d140c:
    // 0x1d140c: 0x263302f4  addiu       $s3, $s1, 0x2F4
    ctx->pc = 0x1d140cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 756));
label_1d1410:
    // 0x1d1410: 0x26300250  addiu       $s0, $s1, 0x250
    ctx->pc = 0x1d1410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
label_1d1414:
    // 0x1d1414: 0x26320450  addiu       $s2, $s1, 0x450
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
label_1d1418:
    // 0x1d1418: 0xc7c0ec64  lwc1        $f0, -0x139C($fp)
    ctx->pc = 0x1d1418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d141c:
    // 0x1d141c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d141cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d1420:
    // 0x1d1420: 0xc62205f0  lwc1        $f2, 0x5F0($s1)
    ctx->pc = 0x1d1420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1424:
    // 0x1d1424: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d1424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1428:
    // 0x1d1428: 0x7a4200b0  lq          $v0, 0xB0($s2)
    ctx->pc = 0x1d1428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 176)));
label_1d142c:
    // 0x1d142c: 0x0  nop
    ctx->pc = 0x1d142cu;
    // NOP
label_1d1430:
    // 0x1d1430: 0x0  nop
    ctx->pc = 0x1d1430u;
    // NOP
label_1d1434:
    // 0x1d1434: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1d1434u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_1d1438:
    // 0x1d1438: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1d1438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d143c:
    // 0x1d143c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1d1440:
    // 0x1d1440: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d1440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1444:
    // 0x1d1444: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1d1444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d1448:
    // 0x1d1448: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d1448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1d144c:
    // 0x1d144c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d144cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d1450:
    // 0x1d1450: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d1450u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d1454:
    // 0x1d1454: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d1454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d1458:
    // 0x1d1458: 0x84e40008  lh          $a0, 0x8($a3)
    ctx->pc = 0x1d1458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1d145c:
    // 0x1d145c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1d145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1d1460:
    // 0x1d1460: 0x60f809  jalr        $v1
label_1d1464:
    if (ctx->pc == 0x1D1464u) {
        ctx->pc = 0x1D1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1460u;
        // 0x1d1464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1468u;
        goto label_1d1468;
    }
    ctx->pc = 0x1D1460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D1468u);
        ctx->pc = 0x1D1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1460u;
        // 0x1d1464: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1460u, 0x1D1468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1468u;
label_1d1468:
    // 0x1d1468: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d1468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d146c:
    // 0x1d146c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1d146cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1d1470:
    // 0x1d1470: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1d1470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1d1474:
    // 0x1d1474: 0x60f809  jalr        $v1
label_1d1478:
    if (ctx->pc == 0x1D1478u) {
        ctx->pc = 0x1D1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1474u;
        // 0x1d1478: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D147Cu;
        goto label_1d147c;
    }
    ctx->pc = 0x1D1474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D147Cu);
        ctx->pc = 0x1D1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1474u;
        // 0x1d1478: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1474u, 0x1D147Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D147Cu;
label_1d147c:
    // 0x1d147c: 0x7a4200b0  lq          $v0, 0xB0($s2)
    ctx->pc = 0x1d147cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 176)));
label_1d1480:
    // 0x1d1480: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1d1480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1484:
    // 0x1d1484: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d1484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1d1488:
    // 0x1d1488: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d1488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d148c:
    // 0x1d148c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1490:
    // 0x1d1490: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1d1490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1d1494:
    // 0x1d1494: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d1494u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d1498:
    // 0x1d1498: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1d1498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d149c:
    // 0x1d149c: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1d149cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1d14a0:
    // 0x1d14a0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1d14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1d14a4:
    // 0x1d14a4: 0x40f809  jalr        $v0
label_1d14a8:
    if (ctx->pc == 0x1D14A8u) {
        ctx->pc = 0x1D14A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14A4u;
        // 0x1d14a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D14ACu;
        goto label_1d14ac;
    }
    ctx->pc = 0x1D14A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D14ACu);
        ctx->pc = 0x1D14A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14A4u;
        // 0x1d14a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D14A4u, 0x1D14ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D14ACu;
label_1d14ac:
    // 0x1d14ac: 0xc62105f4  lwc1        $f1, 0x5F4($s1)
    ctx->pc = 0x1d14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d14b0:
    // 0x1d14b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d14b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d14b4:
    // 0x1d14b4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d14b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d14b8:
    // 0x1d14b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d14b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d14bc:
    // 0x1d14bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d14bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d14c0:
    // 0x1d14c0: 0xc6c3ec68  lwc1        $f3, -0x1398($s6)
    ctx->pc = 0x1d14c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294962280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d14c4:
    // 0x1d14c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d14c8:
    // 0x1d14c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d14c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d14cc:
    // 0x1d14cc: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1d14ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1d14d0:
    // 0x1d14d0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1d14d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1d14d4:
    // 0x1d14d4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d14d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d14d8:
    // 0x1d14d8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1d14d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d14dc:
    // 0x1d14dc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1d14dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1d14e0:
    // 0x1d14e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1d14e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d14e4:
    // 0x1d14e4: 0x60f809  jalr        $v1
label_1d14e8:
    if (ctx->pc == 0x1D14E8u) {
        ctx->pc = 0x1D14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14E4u;
        // 0x1d14e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D14ECu;
        goto label_1d14ec;
    }
    ctx->pc = 0x1D14E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D14ECu);
        ctx->pc = 0x1D14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14E4u;
        // 0x1d14e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D14E4u, 0x1D14ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D14ECu;
label_1d14ec:
    // 0x1d14ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d14f0:
    // 0x1d14f0: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1d14f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1d14f4:
    // 0x1d14f4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1d14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1d14f8:
    // 0x1d14f8: 0x60f809  jalr        $v1
label_1d14fc:
    if (ctx->pc == 0x1D14FCu) {
        ctx->pc = 0x1D14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14F8u;
        // 0x1d14fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1500u;
        goto label_1d1500;
    }
    ctx->pc = 0x1D14F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D1500u);
        ctx->pc = 0x1D14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14F8u;
        // 0x1d14fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D14F8u, 0x1D1500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1500u;
label_1d1500:
    // 0x1d1500: 0xc62105f4  lwc1        $f1, 0x5F4($s1)
    ctx->pc = 0x1d1500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1504:
    // 0x1d1504: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d1504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1508:
    // 0x1d1508: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d1508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d150c:
    // 0x1d150c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d150cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1510:
    // 0x1d1510: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d1510u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d1514:
    // 0x1d1514: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1d1514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1d1518:
    // 0x1d1518: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1d1518u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1d151c:
    // 0x1d151c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1d151cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d1520:
    // 0x1d1520: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d1520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d1524:
    // 0x1d1524: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d1524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d1528:
    // 0x1d1528: 0x40f809  jalr        $v0
label_1d152c:
    if (ctx->pc == 0x1D152Cu) {
        ctx->pc = 0x1D152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1528u;
        // 0x1d152c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1530u;
        goto label_1d1530;
    }
    ctx->pc = 0x1D1528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1530u);
        ctx->pc = 0x1D152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1528u;
        // 0x1d152c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1528u, 0x1D1530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1530u;
label_1d1530:
    // 0x1d1530: 0xc62105f0  lwc1        $f1, 0x5F0($s1)
    ctx->pc = 0x1d1530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d1534:
    // 0x1d1534: 0xc7c3ec64  lwc1        $f3, -0x139C($fp)
    ctx->pc = 0x1d1534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294962276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d1538:
    // 0x1d1538: 0x46150902  mul.s       $f4, $f1, $f21
    ctx->pc = 0x1d1538u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1d153c:
    // 0x1d153c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1d153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d1540:
    // 0x1d1540: 0x0  nop
    ctx->pc = 0x1d1540u;
    // NOP
label_1d1544:
    // 0x1d1544: 0x0  nop
    ctx->pc = 0x1d1544u;
    // NOP
label_1d1548:
    // 0x1d1548: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1d1548u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
label_1d154c:
    // 0x1d154c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1d154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d1550:
    // 0x1d1550: 0xc6c3ec68  lwc1        $f3, -0x1398($s6)
    ctx->pc = 0x1d1550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294962280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d1554:
    // 0x1d1554: 0x46041580  add.s       $f22, $f2, $f4
    ctx->pc = 0x1d1554u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1d1558:
    // 0x1d1558: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d1558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d155c:
    // 0x1d155c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1d155cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1d1560:
    // 0x1d1560: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1d1560u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1d1564:
    // 0x1d1564: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1d1564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d1568:
    // 0x1d1568: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1d1568u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d156c:
    // 0x1d156c: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1d156cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1d1570:
    // 0x1d1570: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1d1570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1d1574:
    // 0x1d1574: 0x40f809  jalr        $v0
label_1d1578:
    if (ctx->pc == 0x1D1578u) {
        ctx->pc = 0x1D1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1574u;
        // 0x1d1578: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D157Cu;
        goto label_1d157c;
    }
    ctx->pc = 0x1D1574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D157Cu);
        ctx->pc = 0x1D1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1574u;
        // 0x1d1578: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1574u, 0x1D157Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D157Cu;
label_1d157c:
    // 0x1d157c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1d157cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1d1580:
    // 0x1d1580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d1580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1584:
    // 0x1d1584: 0x0  nop
    ctx->pc = 0x1d1584u;
    // NOP
label_1d1588:
    // 0x1d1588: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d1588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d158c:
    // 0x1d158c: 0x0  nop
    ctx->pc = 0x1d158cu;
    // NOP
label_1d1590:
    // 0x1d1590: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1d1594:
    if (ctx->pc == 0x1D1594u) {
        ctx->pc = 0x1D1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1590u;
        // 0x1d1594: 0xe64000c0  swc1        $f0, 0xC0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1598u;
        goto label_1d1598;
    }
    ctx->pc = 0x1D1590u;
    {
        const bool branch_taken_0x1d1590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1590) {
            ctx->pc = 0x1D1594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1590u;
            // 0x1d1594: 0xe64000c0  swc1        $f0, 0xC0($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D15ACu;
            goto label_1d15ac;
        }
    }
    ctx->pc = 0x1D1598u;
label_1d1598:
    // 0x1d1598: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d159c:
    // 0x1d159c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d159cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d15a0:
    // 0x1d15a0: 0x0  nop
    ctx->pc = 0x1d15a0u;
    // NOP
label_1d15a4:
    // 0x1d15a4: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x1d15a4u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
label_1d15a8:
    // 0x1d15a8: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x1d15a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_1d15ac:
    // 0x1d15ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d15acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d15b0:
    // 0x1d15b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d15b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d15b4:
    // 0x1d15b4: 0x265200d0  addiu       $s2, $s2, 0xD0
    ctx->pc = 0x1d15b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_1d15b8:
    // 0x1d15b8: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1d15b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1d15bc:
    // 0x1d15bc: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1d15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1d15c0:
    // 0x1d15c0: 0x40f809  jalr        $v0
label_1d15c4:
    if (ctx->pc == 0x1D15C4u) {
        ctx->pc = 0x1D15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15C0u;
        // 0x1d15c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D15C8u;
        goto label_1d15c8;
    }
    ctx->pc = 0x1D15C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D15C8u);
        ctx->pc = 0x1D15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15C0u;
        // 0x1d15c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D15C0u, 0x1D15C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D15C8u;
label_1d15c8:
    // 0x1d15c8: 0xc62d05f4  lwc1        $f13, 0x5F4($s1)
    ctx->pc = 0x1d15c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d15cc:
    // 0x1d15cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d15ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d15d0:
    // 0x1d15d0: 0xc62c05f0  lwc1        $f12, 0x5F0($s1)
    ctx->pc = 0x1d15d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d15d4:
    // 0x1d15d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d15d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d15d8:
    // 0x1d15d8: 0xc068848  jal         func_1A2120
label_1d15dc:
    if (ctx->pc == 0x1D15DCu) {
        ctx->pc = 0x1D15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15D8u;
        // 0x1d15dc: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D15E0u;
        goto label_1d15e0;
    }
    ctx->pc = 0x1D15D8u;
    SET_GPR_U32(ctx, 31, 0x1D15E0u);
    ctx->pc = 0x1D15DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15D8u;
    // 0x1d15dc: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D15D8u, 0x1D15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15E0u;
label_1d15e0:
    // 0x1d15e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d15e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d15e4:
    // 0x1d15e4: 0xc61400b0  lwc1        $f20, 0xB0($s0)
    ctx->pc = 0x1d15e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d15e8:
    // 0x1d15e8: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x1d15e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d15ec:
    // 0x1d15ec: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1d15f0:
    // 0x1d15f0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1d15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1d15f4:
    // 0x1d15f4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1d15f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1d15f8:
    // 0x1d15f8: 0x40f809  jalr        $v0
label_1d15fc:
    if (ctx->pc == 0x1D15FCu) {
        ctx->pc = 0x1D15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15F8u;
        // 0x1d15fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1600u;
        goto label_1d1600;
    }
    ctx->pc = 0x1D15F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1600u);
        ctx->pc = 0x1D15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15F8u;
        // 0x1d15fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D15F8u, 0x1D1600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1600u;
label_1d1600:
    // 0x1d1600: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1d1600u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1d1604:
    // 0x1d1604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1608:
    // 0x1d1608: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x1d1608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d160c:
    // 0x1d160c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d160cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1610:
    // 0x1d1610: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x1d1610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_1d1614:
    // 0x1d1614: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1d1614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1d1618:
    // 0x1d1618: 0xc068864  jal         func_1A2190
label_1d161c:
    if (ctx->pc == 0x1D161Cu) {
        ctx->pc = 0x1D161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1618u;
        // 0x1d161c: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1620u;
        goto label_1d1620;
    }
    ctx->pc = 0x1D1618u;
    SET_GPR_U32(ctx, 31, 0x1D1620u);
    ctx->pc = 0x1D161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1618u;
    // 0x1d161c: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x1D1618u, 0x1D1620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1620u;
label_1d1620:
    // 0x1d1620: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x1d1620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
label_1d1624:
    // 0x1d1624: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1d1624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d1628:
    // 0x1d1628: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
label_1d162c:
    if (ctx->pc == 0x1D162Cu) {
        ctx->pc = 0x1D162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1628u;
        // 0x1d162c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1630u;
        goto label_1d1630;
    }
    ctx->pc = 0x1D1628u;
    {
        const bool branch_taken_0x1d1628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1628u;
        // 0x1d162c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1628) {
            ctx->pc = 0x1D1418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1418;
        }
    }
    ctx->pc = 0x1D1630u;
label_1d1630:
    // 0x1d1630: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x1d1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
label_1d1634:
    // 0x1d1634: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1d1638:
    if (ctx->pc == 0x1D1638u) {
        ctx->pc = 0x1D1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1634u;
        // 0x1d1638: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D163Cu;
        goto label_1d163c;
    }
    ctx->pc = 0x1D1634u;
    {
        const bool branch_taken_0x1d1634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1634) {
            ctx->pc = 0x1D1638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1634u;
            // 0x1d1638: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D164Cu;
            goto label_1d164c;
        }
    }
    ctx->pc = 0x1D163Cu;
label_1d163c:
    // 0x1d163c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1d163cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_1d1640:
    // 0x1d1640: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1d1640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1d1644:
    // 0x1d1644: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x1d1644u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d1648:
    // 0x1d1648: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1d1648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d164c:
    // 0x1d164c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d164cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1650:
    // 0x1d1650: 0xc073464  jal         func_1CD190
label_1d1654:
    if (ctx->pc == 0x1D1654u) {
        ctx->pc = 0x1D1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1650u;
        // 0x1d1654: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1658u;
        goto label_1d1658;
    }
    ctx->pc = 0x1D1650u;
    SET_GPR_U32(ctx, 31, 0x1D1658u);
    ctx->pc = 0x1D1654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1650u;
    // 0x1d1654: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1D1650u, 0x1D1658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1658u;
label_1d1658:
    // 0x1d1658: 0xc0734a0  jal         func_1CD280
label_1d165c:
    if (ctx->pc == 0x1D165Cu) {
        ctx->pc = 0x1D165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1658u;
        // 0x1d165c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1660u;
        goto label_1d1660;
    }
    ctx->pc = 0x1D1658u;
    SET_GPR_U32(ctx, 31, 0x1D1660u);
    ctx->pc = 0x1D165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1658u;
    // 0x1d165c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1D1658u, 0x1D1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1660u;
label_1d1660:
    // 0x1d1660: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d1660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1664:
    // 0x1d1664: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x1d1664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1d1668:
    // 0x1d1668: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1d1668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1d166c:
    // 0x1d166c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1d166cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1d1670:
    // 0x1d1670: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x1d1670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1d1674:
    // 0x1d1674: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1d1674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1d1678:
    // 0x1d1678: 0xa0f809  jalr        $a1
label_1d167c:
    if (ctx->pc == 0x1D167Cu) {
        ctx->pc = 0x1D167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1678u;
        // 0x1d167c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1680u;
        goto label_1d1680;
    }
    ctx->pc = 0x1D1678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1D1680u);
        ctx->pc = 0x1D167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1678u;
        // 0x1d167c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1678u, 0x1D1680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1680u;
label_1d1680:
    // 0x1d1680: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d1680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1684:
    // 0x1d1684: 0x0  nop
    ctx->pc = 0x1d1684u;
    // NOP
label_1d1688:
    // 0x1d1688: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d1688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d168c:
    // 0x1d168c: 0x0  nop
    ctx->pc = 0x1d168cu;
    // NOP
label_1d1690:
    // 0x1d1690: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1d1694:
    if (ctx->pc == 0x1D1694u) {
        ctx->pc = 0x1D1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1690u;
        // 0x1d1694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1698u;
        goto label_1d1698;
    }
    ctx->pc = 0x1D1690u;
    {
        const bool branch_taken_0x1d1690 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1690u;
        // 0x1d1694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1690) {
            ctx->pc = 0x1D169Cu;
            goto label_1d169c;
        }
    }
    ctx->pc = 0x1D1698u;
label_1d1698:
    // 0x1d1698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d169c:
    // 0x1d169c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d16a0:
    // 0x1d16a0: 0x40f809  jalr        $v0
label_1d16a4:
    if (ctx->pc == 0x1D16A4u) {
        ctx->pc = 0x1D16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16A0u;
        // 0x1d16a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D16A8u;
        goto label_1d16a8;
    }
    ctx->pc = 0x1D16A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D16A8u);
        ctx->pc = 0x1D16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16A0u;
        // 0x1d16a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D16A0u, 0x1D16A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D16A8u;
label_1d16a8:
    // 0x1d16a8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1d16a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1d16ac:
    // 0x1d16ac: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1d16acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d16b0:
    // 0x1d16b0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1d16b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d16b4:
    // 0x1d16b4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1d16b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d16b8:
    // 0x1d16b8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1d16b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d16bc:
    // 0x1d16bc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d16bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d16c0:
    // 0x1d16c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d16c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d16c4:
    // 0x1d16c4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1d16c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d16c8:
    // 0x1d16c8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1d16c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d16cc:
    // 0x1d16cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d16ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d16d0:
    // 0x1d16d0: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x1d16d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1d16d4:
    // 0x1d16d4: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1d16d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d16d8:
    // 0x1d16d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d16d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d16dc:
    // 0x1d16dc: 0x3e00008  jr          $ra
label_1d16e0:
    if (ctx->pc == 0x1D16E0u) {
        ctx->pc = 0x1D16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16DCu;
        // 0x1d16e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D16E4u;
        goto label_1d16e4;
    }
    ctx->pc = 0x1D16DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16DCu;
        // 0x1d16e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D16DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D16E4u;
label_1d16e4:
    // 0x1d16e4: 0x0  nop
    ctx->pc = 0x1d16e4u;
    // NOP
    ctx->pc = 0x1d16e8u;
}
