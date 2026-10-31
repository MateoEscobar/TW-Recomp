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

// Function: sub_003F1388
// Address: 0x3f1388 - 0x3f1650
void sub_003F1388_0x3f1388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1388_0x3f1388");
#endif

    switch (ctx->pc) {
        case 0x3f1388u: goto label_3f1388;
        case 0x3f138cu: goto label_3f138c;
        case 0x3f1390u: goto label_3f1390;
        case 0x3f1394u: goto label_3f1394;
        case 0x3f1398u: goto label_3f1398;
        case 0x3f139cu: goto label_3f139c;
        case 0x3f13a0u: goto label_3f13a0;
        case 0x3f13a4u: goto label_3f13a4;
        case 0x3f13a8u: goto label_3f13a8;
        case 0x3f13acu: goto label_3f13ac;
        case 0x3f13b0u: goto label_3f13b0;
        case 0x3f13b4u: goto label_3f13b4;
        case 0x3f13b8u: goto label_3f13b8;
        case 0x3f13bcu: goto label_3f13bc;
        case 0x3f13c0u: goto label_3f13c0;
        case 0x3f13c4u: goto label_3f13c4;
        case 0x3f13c8u: goto label_3f13c8;
        case 0x3f13ccu: goto label_3f13cc;
        case 0x3f13d0u: goto label_3f13d0;
        case 0x3f13d4u: goto label_3f13d4;
        case 0x3f13d8u: goto label_3f13d8;
        case 0x3f13dcu: goto label_3f13dc;
        case 0x3f13e0u: goto label_3f13e0;
        case 0x3f13e4u: goto label_3f13e4;
        case 0x3f13e8u: goto label_3f13e8;
        case 0x3f13ecu: goto label_3f13ec;
        case 0x3f13f0u: goto label_3f13f0;
        case 0x3f13f4u: goto label_3f13f4;
        case 0x3f13f8u: goto label_3f13f8;
        case 0x3f13fcu: goto label_3f13fc;
        case 0x3f1400u: goto label_3f1400;
        case 0x3f1404u: goto label_3f1404;
        case 0x3f1408u: goto label_3f1408;
        case 0x3f140cu: goto label_3f140c;
        case 0x3f1410u: goto label_3f1410;
        case 0x3f1414u: goto label_3f1414;
        case 0x3f1418u: goto label_3f1418;
        case 0x3f141cu: goto label_3f141c;
        case 0x3f1420u: goto label_3f1420;
        case 0x3f1424u: goto label_3f1424;
        case 0x3f1428u: goto label_3f1428;
        case 0x3f142cu: goto label_3f142c;
        case 0x3f1430u: goto label_3f1430;
        case 0x3f1434u: goto label_3f1434;
        case 0x3f1438u: goto label_3f1438;
        case 0x3f143cu: goto label_3f143c;
        case 0x3f1440u: goto label_3f1440;
        case 0x3f1444u: goto label_3f1444;
        case 0x3f1448u: goto label_3f1448;
        case 0x3f144cu: goto label_3f144c;
        case 0x3f1450u: goto label_3f1450;
        case 0x3f1454u: goto label_3f1454;
        case 0x3f1458u: goto label_3f1458;
        case 0x3f145cu: goto label_3f145c;
        case 0x3f1460u: goto label_3f1460;
        case 0x3f1464u: goto label_3f1464;
        case 0x3f1468u: goto label_3f1468;
        case 0x3f146cu: goto label_3f146c;
        case 0x3f1470u: goto label_3f1470;
        case 0x3f1474u: goto label_3f1474;
        case 0x3f1478u: goto label_3f1478;
        case 0x3f147cu: goto label_3f147c;
        case 0x3f1480u: goto label_3f1480;
        case 0x3f1484u: goto label_3f1484;
        case 0x3f1488u: goto label_3f1488;
        case 0x3f148cu: goto label_3f148c;
        case 0x3f1490u: goto label_3f1490;
        case 0x3f1494u: goto label_3f1494;
        case 0x3f1498u: goto label_3f1498;
        case 0x3f149cu: goto label_3f149c;
        case 0x3f14a0u: goto label_3f14a0;
        case 0x3f14a4u: goto label_3f14a4;
        case 0x3f14a8u: goto label_3f14a8;
        case 0x3f14acu: goto label_3f14ac;
        case 0x3f14b0u: goto label_3f14b0;
        case 0x3f14b4u: goto label_3f14b4;
        case 0x3f14b8u: goto label_3f14b8;
        case 0x3f14bcu: goto label_3f14bc;
        case 0x3f14c0u: goto label_3f14c0;
        case 0x3f14c4u: goto label_3f14c4;
        case 0x3f14c8u: goto label_3f14c8;
        case 0x3f14ccu: goto label_3f14cc;
        case 0x3f14d0u: goto label_3f14d0;
        case 0x3f14d4u: goto label_3f14d4;
        case 0x3f14d8u: goto label_3f14d8;
        case 0x3f14dcu: goto label_3f14dc;
        case 0x3f14e0u: goto label_3f14e0;
        case 0x3f14e4u: goto label_3f14e4;
        case 0x3f14e8u: goto label_3f14e8;
        case 0x3f14ecu: goto label_3f14ec;
        case 0x3f14f0u: goto label_3f14f0;
        case 0x3f14f4u: goto label_3f14f4;
        case 0x3f14f8u: goto label_3f14f8;
        case 0x3f14fcu: goto label_3f14fc;
        case 0x3f1500u: goto label_3f1500;
        case 0x3f1504u: goto label_3f1504;
        case 0x3f1508u: goto label_3f1508;
        case 0x3f150cu: goto label_3f150c;
        case 0x3f1510u: goto label_3f1510;
        case 0x3f1514u: goto label_3f1514;
        case 0x3f1518u: goto label_3f1518;
        case 0x3f151cu: goto label_3f151c;
        case 0x3f1520u: goto label_3f1520;
        case 0x3f1524u: goto label_3f1524;
        case 0x3f1528u: goto label_3f1528;
        case 0x3f152cu: goto label_3f152c;
        case 0x3f1530u: goto label_3f1530;
        case 0x3f1534u: goto label_3f1534;
        case 0x3f1538u: goto label_3f1538;
        case 0x3f153cu: goto label_3f153c;
        case 0x3f1540u: goto label_3f1540;
        case 0x3f1544u: goto label_3f1544;
        case 0x3f1548u: goto label_3f1548;
        case 0x3f154cu: goto label_3f154c;
        case 0x3f1550u: goto label_3f1550;
        case 0x3f1554u: goto label_3f1554;
        case 0x3f1558u: goto label_3f1558;
        case 0x3f155cu: goto label_3f155c;
        case 0x3f1560u: goto label_3f1560;
        case 0x3f1564u: goto label_3f1564;
        case 0x3f1568u: goto label_3f1568;
        case 0x3f156cu: goto label_3f156c;
        case 0x3f1570u: goto label_3f1570;
        case 0x3f1574u: goto label_3f1574;
        case 0x3f1578u: goto label_3f1578;
        case 0x3f157cu: goto label_3f157c;
        case 0x3f1580u: goto label_3f1580;
        case 0x3f1584u: goto label_3f1584;
        case 0x3f1588u: goto label_3f1588;
        case 0x3f158cu: goto label_3f158c;
        case 0x3f1590u: goto label_3f1590;
        case 0x3f1594u: goto label_3f1594;
        case 0x3f1598u: goto label_3f1598;
        case 0x3f159cu: goto label_3f159c;
        case 0x3f15a0u: goto label_3f15a0;
        case 0x3f15a4u: goto label_3f15a4;
        case 0x3f15a8u: goto label_3f15a8;
        case 0x3f15acu: goto label_3f15ac;
        case 0x3f15b0u: goto label_3f15b0;
        case 0x3f15b4u: goto label_3f15b4;
        case 0x3f15b8u: goto label_3f15b8;
        case 0x3f15bcu: goto label_3f15bc;
        case 0x3f15c0u: goto label_3f15c0;
        case 0x3f15c4u: goto label_3f15c4;
        case 0x3f15c8u: goto label_3f15c8;
        case 0x3f15ccu: goto label_3f15cc;
        case 0x3f15d0u: goto label_3f15d0;
        case 0x3f15d4u: goto label_3f15d4;
        case 0x3f15d8u: goto label_3f15d8;
        case 0x3f15dcu: goto label_3f15dc;
        case 0x3f15e0u: goto label_3f15e0;
        case 0x3f15e4u: goto label_3f15e4;
        case 0x3f15e8u: goto label_3f15e8;
        case 0x3f15ecu: goto label_3f15ec;
        case 0x3f15f0u: goto label_3f15f0;
        case 0x3f15f4u: goto label_3f15f4;
        case 0x3f15f8u: goto label_3f15f8;
        case 0x3f15fcu: goto label_3f15fc;
        case 0x3f1600u: goto label_3f1600;
        case 0x3f1604u: goto label_3f1604;
        case 0x3f1608u: goto label_3f1608;
        case 0x3f160cu: goto label_3f160c;
        case 0x3f1610u: goto label_3f1610;
        case 0x3f1614u: goto label_3f1614;
        case 0x3f1618u: goto label_3f1618;
        case 0x3f161cu: goto label_3f161c;
        case 0x3f1620u: goto label_3f1620;
        case 0x3f1624u: goto label_3f1624;
        case 0x3f1628u: goto label_3f1628;
        case 0x3f162cu: goto label_3f162c;
        case 0x3f1630u: goto label_3f1630;
        case 0x3f1634u: goto label_3f1634;
        case 0x3f1638u: goto label_3f1638;
        case 0x3f163cu: goto label_3f163c;
        case 0x3f1640u: goto label_3f1640;
        case 0x3f1644u: goto label_3f1644;
        case 0x3f1648u: goto label_3f1648;
        case 0x3f164cu: goto label_3f164c;
        default: break;
    }

    ctx->pc = 0x3f1388u;

label_3f1388:
    // 0x3f1388: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3f1388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3f138c:
    // 0x3f138c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3f138cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3f1390:
    // 0x3f1390: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3f1390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3f1394:
    // 0x3f1394: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3f1394u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3f1398:
    // 0x3f1398: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3f1398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3f139c:
    // 0x3f139c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f139cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f13a0:
    // 0x3f13a0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3f13a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3f13a4:
    // 0x3f13a4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3f13a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3f13a8:
    // 0x3f13a8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3f13a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3f13ac:
    // 0x3f13ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3f13acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f13b0:
    // 0x3f13b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3f13b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3f13b4:
    // 0x3f13b4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3f13b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3f13b8:
    // 0x3f13b8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3f13b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f13bc:
    // 0x3f13bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f13bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f13c0:
    // 0x3f13c0: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3f13c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3f13c4:
    // 0x3f13c4: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x3f13c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f13c8:
    // 0x3f13c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3f13c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f13cc:
    // 0x3f13cc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f13ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f13d0:
    // 0x3f13d0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f13d4:
    // 0x3f13d4: 0x40f809  jalr        $v0
label_3f13d8:
    if (ctx->pc == 0x3F13D8u) {
        ctx->pc = 0x3F13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F13D4u;
        // 0x3f13d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F13DCu;
        goto label_3f13dc;
    }
    ctx->pc = 0x3F13D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F13DCu);
        ctx->pc = 0x3F13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F13D4u;
        // 0x3f13d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F13D4u, 0x3F13DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F13DCu;
label_3f13dc:
    // 0x3f13dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f13dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f13e0:
    // 0x3f13e0: 0xc0ea14c  jal         func_3A8530
label_3f13e4:
    if (ctx->pc == 0x3F13E4u) {
        ctx->pc = 0x3F13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F13E0u;
        // 0x3f13e4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F13E8u;
        goto label_3f13e8;
    }
    ctx->pc = 0x3F13E0u;
    SET_GPR_U32(ctx, 31, 0x3F13E8u);
    ctx->pc = 0x3F13E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F13E0u;
    // 0x3f13e4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F13E0u, 0x3F13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F13E8u;
label_3f13e8:
    // 0x3f13e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f13ec:
    // 0x3f13ec: 0xc0ea12a  jal         func_3A84A8
label_3f13f0:
    if (ctx->pc == 0x3F13F0u) {
        ctx->pc = 0x3F13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F13ECu;
        // 0x3f13f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F13F4u;
        goto label_3f13f4;
    }
    ctx->pc = 0x3F13ECu;
    SET_GPR_U32(ctx, 31, 0x3F13F4u);
    ctx->pc = 0x3F13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F13ECu;
    // 0x3f13f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F13ECu, 0x3F13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F13F4u;
label_3f13f4:
    // 0x3f13f4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f13f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f13f8:
    // 0x3f13f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f13fc:
    // 0x3f13fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f13fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f1400:
    // 0x3f1400: 0xc0ea12a  jal         func_3A84A8
label_3f1404:
    if (ctx->pc == 0x3F1404u) {
        ctx->pc = 0x3F1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1400u;
        // 0x3f1404: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1408u;
        goto label_3f1408;
    }
    ctx->pc = 0x3F1400u;
    SET_GPR_U32(ctx, 31, 0x3F1408u);
    ctx->pc = 0x3F1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1400u;
    // 0x3f1404: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F1400u, 0x3F1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1408u;
label_3f1408:
    // 0x3f1408: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f1408u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f140c:
    // 0x3f140c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3f140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f1410:
    // 0x3f1410: 0xae620124  sw          $v0, 0x124($s3)
    ctx->pc = 0x3f1410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 2));
label_3f1414:
    // 0x3f1414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1418:
    // 0x3f1418: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f1418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f141c:
    // 0x3f141c: 0xc0cd4ee  jal         func_3353B8
label_3f1420:
    if (ctx->pc == 0x3F1420u) {
        ctx->pc = 0x3F1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F141Cu;
        // 0x3f1420: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1424u;
        goto label_3f1424;
    }
    ctx->pc = 0x3F141Cu;
    SET_GPR_U32(ctx, 31, 0x3F1424u);
    ctx->pc = 0x3F1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F141Cu;
    // 0x3f1420: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F141Cu, 0x3F1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1424u;
label_3f1424:
    // 0x3f1424: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x3f1424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_3f1428:
    // 0x3f1428: 0xc0e858c  jal         func_3A1630
label_3f142c:
    if (ctx->pc == 0x3F142Cu) {
        ctx->pc = 0x3F142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1428u;
        // 0x3f142c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1430u;
        goto label_3f1430;
    }
    ctx->pc = 0x3F1428u;
    SET_GPR_U32(ctx, 31, 0x3F1430u);
    ctx->pc = 0x3F142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1428u;
    // 0x3f142c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F1428u, 0x3F1430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1430u;
label_3f1430:
    // 0x3f1430: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f1430u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1434:
    // 0x3f1434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f1434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f1438:
    // 0x3f1438: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3f1438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3f143c:
    // 0x3f143c: 0x265216c0  addiu       $s2, $s2, 0x16C0
    ctx->pc = 0x3f143cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_3f1440:
    // 0x3f1440: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x3f1440u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
label_3f1444:
    // 0x3f1444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1448:
    // 0x3f1448: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x3f1448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
label_3f144c:
    // 0x3f144c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f144cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f1450:
    // 0x3f1450: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3f1450u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3f1454:
    // 0x3f1454: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3f1454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3f1458:
    // 0x3f1458: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f1458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f145c:
    // 0x3f145c: 0xc0cd518  jal         func_335460
label_3f1460:
    if (ctx->pc == 0x3F1460u) {
        ctx->pc = 0x3F1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F145Cu;
        // 0x3f1460: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1464u;
        goto label_3f1464;
    }
    ctx->pc = 0x3F145Cu;
    SET_GPR_U32(ctx, 31, 0x3F1464u);
    ctx->pc = 0x3F1460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F145Cu;
    // 0x3f1460: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F145Cu, 0x3F1464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1464u;
label_3f1464:
    // 0x3f1464: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3f1464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3f1468:
    // 0x3f1468: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f1468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f146c:
    // 0x3f146c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1470:
    // 0x3f1470: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3f1470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3f1474:
    // 0x3f1474: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f1474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f1478:
    // 0x3f1478: 0xc0cd518  jal         func_335460
label_3f147c:
    if (ctx->pc == 0x3F147Cu) {
        ctx->pc = 0x3F147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1478u;
        // 0x3f147c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1480u;
        goto label_3f1480;
    }
    ctx->pc = 0x3F1478u;
    SET_GPR_U32(ctx, 31, 0x3F1480u);
    ctx->pc = 0x3F147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1478u;
    // 0x3f147c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F1478u, 0x3F1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1480u;
label_3f1480:
    // 0x3f1480: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3f1480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3f1484:
    // 0x3f1484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1488:
    // 0x3f1488: 0xc0cd4ee  jal         func_3353B8
label_3f148c:
    if (ctx->pc == 0x3F148Cu) {
        ctx->pc = 0x3F148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1488u;
        // 0x3f148c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1490u;
        goto label_3f1490;
    }
    ctx->pc = 0x3F1488u;
    SET_GPR_U32(ctx, 31, 0x3F1490u);
    ctx->pc = 0x3F148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1488u;
    // 0x3f148c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F1488u, 0x3F1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1490u;
label_3f1490:
    // 0x3f1490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3f1490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1494:
    // 0x3f1494: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x3f1494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3f1498:
    // 0x3f1498: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3f149c:
    if (ctx->pc == 0x3F149Cu) {
        ctx->pc = 0x3F149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1498u;
        // 0x3f149c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F14A0u;
        goto label_3f14a0;
    }
    ctx->pc = 0x3F1498u;
    {
        const bool branch_taken_0x3f1498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1498u;
        // 0x3f149c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1498) {
            ctx->pc = 0x3F1524u;
            goto label_3f1524;
        }
    }
    ctx->pc = 0x3F14A0u;
label_3f14a0:
    // 0x3f14a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3f14a4:
    // 0x3f14a4: 0x24425f00  addiu       $v0, $v0, 0x5F00
    ctx->pc = 0x3f14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24320));
label_3f14a8:
    // 0x3f14a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f14a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3f14ac:
    // 0x3f14ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f14acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f14b0:
    // 0x3f14b0: 0x800008  jr          $a0
label_3f14b4:
    if (ctx->pc == 0x3F14B4u) {
        ctx->pc = 0x3F14B8u;
        goto label_3f14b8;
    }
    ctx->pc = 0x3F14B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F14B8u: goto label_3f14b8;
            case 0x3F14C8u: goto label_3f14c8;
            case 0x3F1514u: goto label_3f1514;
            case 0x3F1524u: goto label_3f1524;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F14B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F14B8u;
label_3f14b8:
    // 0x3f14b8: 0x3c05db22  lui         $a1, 0xDB22
    ctx->pc = 0x3f14b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56098 << 16));
label_3f14bc:
    // 0x3f14bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f14bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f14c0:
    // 0x3f14c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f14c4:
    if (ctx->pc == 0x3F14C4u) {
        ctx->pc = 0x3F14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F14C0u;
        // 0x3f14c4: 0x34a52c02  ori         $a1, $a1, 0x2C02 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11266);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F14C8u;
        goto label_3f14c8;
    }
    ctx->pc = 0x3F14C0u;
    {
        const bool branch_taken_0x3f14c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F14C0u;
        // 0x3f14c4: 0x34a52c02  ori         $a1, $a1, 0x2C02 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11266);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f14c0) {
            ctx->pc = 0x3F14D4u;
            goto label_3f14d4;
        }
    }
    ctx->pc = 0x3F14C8u;
label_3f14c8:
    // 0x3f14c8: 0x3c05422b  lui         $a1, 0x422B
    ctx->pc = 0x3f14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16939 << 16));
label_3f14cc:
    // 0x3f14cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f14ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f14d0:
    // 0x3f14d0: 0x34a57db8  ori         $a1, $a1, 0x7DB8
    ctx->pc = 0x3f14d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32184);
label_3f14d4:
    // 0x3f14d4: 0xc0e9132  jal         func_3A44C8
label_3f14d8:
    if (ctx->pc == 0x3F14D8u) {
        ctx->pc = 0x3F14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F14D4u;
        // 0x3f14d8: 0x26b0b8b8  addiu       $s0, $s5, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F14DCu;
        goto label_3f14dc;
    }
    ctx->pc = 0x3F14D4u;
    SET_GPR_U32(ctx, 31, 0x3F14DCu);
    ctx->pc = 0x3F14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F14D4u;
    // 0x3f14d8: 0x26b0b8b8  addiu       $s0, $s5, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F14D4u, 0x3F14DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F14DCu;
label_3f14dc:
    // 0x3f14dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f14dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f14e0:
    // 0x3f14e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f14e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f14e4:
    // 0x3f14e4: 0xc0cd4ee  jal         func_3353B8
label_3f14e8:
    if (ctx->pc == 0x3F14E8u) {
        ctx->pc = 0x3F14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F14E4u;
        // 0x3f14e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F14ECu;
        goto label_3f14ec;
    }
    ctx->pc = 0x3F14E4u;
    SET_GPR_U32(ctx, 31, 0x3F14ECu);
    ctx->pc = 0x3F14E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F14E4u;
    // 0x3f14e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F14E4u, 0x3F14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F14ECu;
label_3f14ec:
    // 0x3f14ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3f14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3f14f0:
    // 0x3f14f0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x3f14f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_3f14f4:
    // 0x3f14f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f14f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f14f8:
    // 0x3f14f8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3f14f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3f14fc:
    // 0x3f14fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f14fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f1500:
    // 0x3f1500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1504:
    // 0x3f1504: 0xc0cd518  jal         func_335460
label_3f1508:
    if (ctx->pc == 0x3F1508u) {
        ctx->pc = 0x3F1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1504u;
        // 0x3f1508: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F150Cu;
        goto label_3f150c;
    }
    ctx->pc = 0x3F1504u;
    SET_GPR_U32(ctx, 31, 0x3F150Cu);
    ctx->pc = 0x3F1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1504u;
    // 0x3f1508: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F1504u, 0x3F150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F150Cu;
label_3f150c:
    // 0x3f150c: 0x10000010  b           . + 4 + (0x10 << 2)
label_3f1510:
    if (ctx->pc == 0x3F1510u) {
        ctx->pc = 0x3F1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F150Cu;
        // 0x3f1510: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1514u;
        goto label_3f1514;
    }
    ctx->pc = 0x3F150Cu;
    {
        const bool branch_taken_0x3f150c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F150Cu;
        // 0x3f1510: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f150c) {
            ctx->pc = 0x3F1550u;
            goto label_3f1550;
        }
    }
    ctx->pc = 0x3F1514u;
label_3f1514:
    // 0x3f1514: 0x3c05352c  lui         $a1, 0x352C
    ctx->pc = 0x3f1514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13612 << 16));
label_3f1518:
    // 0x3f1518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f1518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f151c:
    // 0x3f151c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f1520:
    if (ctx->pc == 0x3F1520u) {
        ctx->pc = 0x3F1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F151Cu;
        // 0x3f1520: 0x34a54d2e  ori         $a1, $a1, 0x4D2E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19758);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1524u;
        goto label_3f1524;
    }
    ctx->pc = 0x3F151Cu;
    {
        const bool branch_taken_0x3f151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F151Cu;
        // 0x3f1520: 0x34a54d2e  ori         $a1, $a1, 0x4D2E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19758);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f151c) {
            ctx->pc = 0x3F1530u;
            goto label_3f1530;
        }
    }
    ctx->pc = 0x3F1524u;
label_3f1524:
    // 0x3f1524: 0x3c05ab48  lui         $a1, 0xAB48
    ctx->pc = 0x3f1524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43848 << 16));
label_3f1528:
    // 0x3f1528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f1528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f152c:
    // 0x3f152c: 0x34a5d88d  ori         $a1, $a1, 0xD88D
    ctx->pc = 0x3f152cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55437);
label_3f1530:
    // 0x3f1530: 0xc0e9132  jal         func_3A44C8
label_3f1534:
    if (ctx->pc == 0x3F1534u) {
        ctx->pc = 0x3F1538u;
        goto label_3f1538;
    }
    ctx->pc = 0x3F1530u;
    SET_GPR_U32(ctx, 31, 0x3F1538u);
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F1530u, 0x3F1538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1538u;
label_3f1538:
    // 0x3f1538: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f1538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f153c:
    // 0x3f153c: 0x26a4b8b8  addiu       $a0, $s5, -0x4748
    ctx->pc = 0x3f153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
label_3f1540:
    // 0x3f1540: 0xc0cd4ee  jal         func_3353B8
label_3f1544:
    if (ctx->pc == 0x3F1544u) {
        ctx->pc = 0x3F1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1540u;
        // 0x3f1544: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1548u;
        goto label_3f1548;
    }
    ctx->pc = 0x3F1540u;
    SET_GPR_U32(ctx, 31, 0x3F1548u);
    ctx->pc = 0x3F1544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1540u;
    // 0x3f1544: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F1540u, 0x3F1548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1548u;
label_3f1548:
    // 0x3f1548: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x3f1548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_3f154c:
    // 0x3f154c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3f154cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3f1550:
    // 0x3f1550: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f1550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f1554:
    // 0x3f1554: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f1554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f1558:
    // 0x3f1558: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3f1558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3f155c:
    // 0x3f155c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3f155cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3f1560:
    // 0x3f1560: 0xae7100c4  sw          $s1, 0xC4($s3)
    ctx->pc = 0x3f1560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 17));
label_3f1564:
    // 0x3f1564: 0x26c516c0  addiu       $a1, $s6, 0x16C0
    ctx->pc = 0x3f1564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 5824));
label_3f1568:
    // 0x3f1568: 0xae6300cc  sw          $v1, 0xCC($s3)
    ctx->pc = 0x3f1568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 3));
label_3f156c:
    // 0x3f156c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f156cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1570:
    // 0x3f1570: 0xae6200c8  sw          $v0, 0xC8($s3)
    ctx->pc = 0x3f1570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 2));
label_3f1574:
    // 0x3f1574: 0x26b1b8b8  addiu       $s1, $s5, -0x4748
    ctx->pc = 0x3f1574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949048));
label_3f1578:
    // 0x3f1578: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3f1578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3f157c:
    // 0x3f157c: 0xc047e6c  jal         func_11F9B0
label_3f1580:
    if (ctx->pc == 0x3F1580u) {
        ctx->pc = 0x3F1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F157Cu;
        // 0x3f1580: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1584u;
        goto label_3f1584;
    }
    ctx->pc = 0x3F157Cu;
    SET_GPR_U32(ctx, 31, 0x3F1584u);
    ctx->pc = 0x3F1580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F157Cu;
    // 0x3f1580: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3F157Cu, 0x3F1584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1584u;
label_3f1584:
    // 0x3f1584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3f1584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f1588:
    // 0x3f1588: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3f1588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3f158c:
    // 0x3f158c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3f158cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3f1590:
    // 0x3f1590: 0xa0f809  jalr        $a1
label_3f1594:
    if (ctx->pc == 0x3F1594u) {
        ctx->pc = 0x3F1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1590u;
        // 0x3f1594: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1598u;
        goto label_3f1598;
    }
    ctx->pc = 0x3F1590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3F1598u);
        ctx->pc = 0x3F1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1590u;
        // 0x3f1594: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1590u, 0x3F1598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1598u;
label_3f1598:
    // 0x3f1598: 0x3c01c2a0  lui         $at, 0xC2A0
    ctx->pc = 0x3f1598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49824 << 16));
label_3f159c:
    // 0x3f159c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f159cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f15a0:
    // 0x3f15a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f15a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f15a4:
    // 0x3f15a4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x3f15a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_3f15a8:
    // 0x3f15a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f15a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f15ac:
    // 0x3f15ac: 0xc0cd518  jal         func_335460
label_3f15b0:
    if (ctx->pc == 0x3F15B0u) {
        ctx->pc = 0x3F15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F15ACu;
        // 0x3f15b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F15B4u;
        goto label_3f15b4;
    }
    ctx->pc = 0x3F15ACu;
    SET_GPR_U32(ctx, 31, 0x3F15B4u);
    ctx->pc = 0x3F15B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F15ACu;
    // 0x3f15b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F15ACu, 0x3F15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F15B4u;
label_3f15b4:
    // 0x3f15b4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3f15b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f15b8:
    // 0x3f15b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f15b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f15bc:
    // 0x3f15bc: 0x3c01c3a9  lui         $at, 0xC3A9
    ctx->pc = 0x3f15bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50089 << 16));
label_3f15c0:
    // 0x3f15c0: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x3f15c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_3f15c4:
    // 0x3f15c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f15c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f15c8:
    // 0x3f15c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3f15c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f15cc:
    // 0x3f15cc: 0x3c01c3cc  lui         $at, 0xC3CC
    ctx->pc = 0x3f15ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50124 << 16));
label_3f15d0:
    // 0x3f15d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f15d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f15d4:
    // 0x3f15d4: 0xc0cd518  jal         func_335460
label_3f15d8:
    if (ctx->pc == 0x3F15D8u) {
        ctx->pc = 0x3F15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F15D4u;
        // 0x3f15d8: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F15DCu;
        goto label_3f15dc;
    }
    ctx->pc = 0x3F15D4u;
    SET_GPR_U32(ctx, 31, 0x3F15DCu);
    ctx->pc = 0x3F15D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F15D4u;
    // 0x3f15d8: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F15D4u, 0x3F15DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F15DCu;
label_3f15dc:
    // 0x3f15dc: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x3f15dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
label_3f15e0:
    // 0x3f15e0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3f15e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3f15e4:
    // 0x3f15e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f15e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f15e8:
    // 0x3f15e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f15e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f15ec:
    // 0x3f15ec: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x3f15ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_3f15f0:
    // 0x3f15f0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3f15f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3f15f4:
    // 0x3f15f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f15f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f15f8:
    // 0x3f15f8: 0xc0cd518  jal         func_335460
label_3f15fc:
    if (ctx->pc == 0x3F15FCu) {
        ctx->pc = 0x3F15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F15F8u;
        // 0x3f15fc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1600u;
        goto label_3f1600;
    }
    ctx->pc = 0x3F15F8u;
    SET_GPR_U32(ctx, 31, 0x3F1600u);
    ctx->pc = 0x3F15FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F15F8u;
    // 0x3f15fc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F15F8u, 0x3F1600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1600u;
label_3f1600:
    // 0x3f1600: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3f1600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3f1604:
    // 0x3f1604: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f1604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f1608:
    // 0x3f1608: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f1608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f160c:
    // 0x3f160c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3f160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f1610:
    // 0x3f1610: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3f1610u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3f1614:
    // 0x3f1614: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3f1614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3f1618:
    // 0x3f1618: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3f1618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3f161c:
    // 0x3f161c: 0x40f809  jalr        $v0
label_3f1620:
    if (ctx->pc == 0x3F1620u) {
        ctx->pc = 0x3F1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F161Cu;
        // 0x3f1620: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1624u;
        goto label_3f1624;
    }
    ctx->pc = 0x3F161Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F1624u);
        ctx->pc = 0x3F1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F161Cu;
        // 0x3f1620: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F161Cu, 0x3F1624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1624u;
label_3f1624:
    // 0x3f1624: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3f1624u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3f1628:
    // 0x3f1628: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3f1628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3f162c:
    // 0x3f162c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3f162cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3f1630:
    // 0x3f1630: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3f1630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f1634:
    // 0x3f1634: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3f1634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f1638:
    // 0x3f1638: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3f1638u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f163c:
    // 0x3f163c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3f163cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f1640:
    // 0x3f1640: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3f1640u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f1644:
    // 0x3f1644: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f1644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1648:
    // 0x3f1648: 0x3e00008  jr          $ra
label_3f164c:
    if (ctx->pc == 0x3F164Cu) {
        ctx->pc = 0x3F164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1648u;
        // 0x3f164c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1650u;
        goto label_fallthrough_0x3f1648;
    }
    ctx->pc = 0x3F1648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1648u;
        // 0x3f164c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f1648:
    ctx->pc = 0x3F1650u;
}
