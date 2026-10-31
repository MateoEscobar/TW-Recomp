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

// Function: sub_003C1450
// Address: 0x3c1450 - 0x3c1610
void sub_003C1450_0x3c1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1450_0x3c1450");
#endif

    switch (ctx->pc) {
        case 0x3c1450u: goto label_3c1450;
        case 0x3c1454u: goto label_3c1454;
        case 0x3c1458u: goto label_3c1458;
        case 0x3c145cu: goto label_3c145c;
        case 0x3c1460u: goto label_3c1460;
        case 0x3c1464u: goto label_3c1464;
        case 0x3c1468u: goto label_3c1468;
        case 0x3c146cu: goto label_3c146c;
        case 0x3c1470u: goto label_3c1470;
        case 0x3c1474u: goto label_3c1474;
        case 0x3c1478u: goto label_3c1478;
        case 0x3c147cu: goto label_3c147c;
        case 0x3c1480u: goto label_3c1480;
        case 0x3c1484u: goto label_3c1484;
        case 0x3c1488u: goto label_3c1488;
        case 0x3c148cu: goto label_3c148c;
        case 0x3c1490u: goto label_3c1490;
        case 0x3c1494u: goto label_3c1494;
        case 0x3c1498u: goto label_3c1498;
        case 0x3c149cu: goto label_3c149c;
        case 0x3c14a0u: goto label_3c14a0;
        case 0x3c14a4u: goto label_3c14a4;
        case 0x3c14a8u: goto label_3c14a8;
        case 0x3c14acu: goto label_3c14ac;
        case 0x3c14b0u: goto label_3c14b0;
        case 0x3c14b4u: goto label_3c14b4;
        case 0x3c14b8u: goto label_3c14b8;
        case 0x3c14bcu: goto label_3c14bc;
        case 0x3c14c0u: goto label_3c14c0;
        case 0x3c14c4u: goto label_3c14c4;
        case 0x3c14c8u: goto label_3c14c8;
        case 0x3c14ccu: goto label_3c14cc;
        case 0x3c14d0u: goto label_3c14d0;
        case 0x3c14d4u: goto label_3c14d4;
        case 0x3c14d8u: goto label_3c14d8;
        case 0x3c14dcu: goto label_3c14dc;
        case 0x3c14e0u: goto label_3c14e0;
        case 0x3c14e4u: goto label_3c14e4;
        case 0x3c14e8u: goto label_3c14e8;
        case 0x3c14ecu: goto label_3c14ec;
        case 0x3c14f0u: goto label_3c14f0;
        case 0x3c14f4u: goto label_3c14f4;
        case 0x3c14f8u: goto label_3c14f8;
        case 0x3c14fcu: goto label_3c14fc;
        case 0x3c1500u: goto label_3c1500;
        case 0x3c1504u: goto label_3c1504;
        case 0x3c1508u: goto label_3c1508;
        case 0x3c150cu: goto label_3c150c;
        case 0x3c1510u: goto label_3c1510;
        case 0x3c1514u: goto label_3c1514;
        case 0x3c1518u: goto label_3c1518;
        case 0x3c151cu: goto label_3c151c;
        case 0x3c1520u: goto label_3c1520;
        case 0x3c1524u: goto label_3c1524;
        case 0x3c1528u: goto label_3c1528;
        case 0x3c152cu: goto label_3c152c;
        case 0x3c1530u: goto label_3c1530;
        case 0x3c1534u: goto label_3c1534;
        case 0x3c1538u: goto label_3c1538;
        case 0x3c153cu: goto label_3c153c;
        case 0x3c1540u: goto label_3c1540;
        case 0x3c1544u: goto label_3c1544;
        case 0x3c1548u: goto label_3c1548;
        case 0x3c154cu: goto label_3c154c;
        case 0x3c1550u: goto label_3c1550;
        case 0x3c1554u: goto label_3c1554;
        case 0x3c1558u: goto label_3c1558;
        case 0x3c155cu: goto label_3c155c;
        case 0x3c1560u: goto label_3c1560;
        case 0x3c1564u: goto label_3c1564;
        case 0x3c1568u: goto label_3c1568;
        case 0x3c156cu: goto label_3c156c;
        case 0x3c1570u: goto label_3c1570;
        case 0x3c1574u: goto label_3c1574;
        case 0x3c1578u: goto label_3c1578;
        case 0x3c157cu: goto label_3c157c;
        case 0x3c1580u: goto label_3c1580;
        case 0x3c1584u: goto label_3c1584;
        case 0x3c1588u: goto label_3c1588;
        case 0x3c158cu: goto label_3c158c;
        case 0x3c1590u: goto label_3c1590;
        case 0x3c1594u: goto label_3c1594;
        case 0x3c1598u: goto label_3c1598;
        case 0x3c159cu: goto label_3c159c;
        case 0x3c15a0u: goto label_3c15a0;
        case 0x3c15a4u: goto label_3c15a4;
        case 0x3c15a8u: goto label_3c15a8;
        case 0x3c15acu: goto label_3c15ac;
        case 0x3c15b0u: goto label_3c15b0;
        case 0x3c15b4u: goto label_3c15b4;
        case 0x3c15b8u: goto label_3c15b8;
        case 0x3c15bcu: goto label_3c15bc;
        case 0x3c15c0u: goto label_3c15c0;
        case 0x3c15c4u: goto label_3c15c4;
        case 0x3c15c8u: goto label_3c15c8;
        case 0x3c15ccu: goto label_3c15cc;
        case 0x3c15d0u: goto label_3c15d0;
        case 0x3c15d4u: goto label_3c15d4;
        case 0x3c15d8u: goto label_3c15d8;
        case 0x3c15dcu: goto label_3c15dc;
        case 0x3c15e0u: goto label_3c15e0;
        case 0x3c15e4u: goto label_3c15e4;
        case 0x3c15e8u: goto label_3c15e8;
        case 0x3c15ecu: goto label_3c15ec;
        case 0x3c15f0u: goto label_3c15f0;
        case 0x3c15f4u: goto label_3c15f4;
        case 0x3c15f8u: goto label_3c15f8;
        case 0x3c15fcu: goto label_3c15fc;
        case 0x3c1600u: goto label_3c1600;
        case 0x3c1604u: goto label_3c1604;
        case 0x3c1608u: goto label_3c1608;
        case 0x3c160cu: goto label_3c160c;
        default: break;
    }

    ctx->pc = 0x3c1450u;

label_3c1450:
    // 0x3c1450: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x3c1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_3c1454:
    // 0x3c1454: 0x7fb004e0  sq          $s0, 0x4E0($sp)
    ctx->pc = 0x3c1454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 16));
label_3c1458:
    // 0x3c1458: 0x7fb104d0  sq          $s1, 0x4D0($sp)
    ctx->pc = 0x3c1458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 17));
label_3c145c:
    // 0x3c145c: 0x7fb204c0  sq          $s2, 0x4C0($sp)
    ctx->pc = 0x3c145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 18));
label_3c1460:
    // 0x3c1460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c1460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1464:
    // 0x3c1464: 0x7fb304b0  sq          $s3, 0x4B0($sp)
    ctx->pc = 0x3c1464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 19));
label_3c1468:
    // 0x3c1468: 0x7fb404a0  sq          $s4, 0x4A0($sp)
    ctx->pc = 0x3c1468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 20));
label_3c146c:
    // 0x3c146c: 0x7fb50490  sq          $s5, 0x490($sp)
    ctx->pc = 0x3c146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 21));
label_3c1470:
    // 0x3c1470: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3c1470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1474:
    // 0x3c1474: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x3c1474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_3c1478:
    // 0x3c1478: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c1478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c147c:
    // 0x3c147c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c147cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c1480:
    // 0x3c1480: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c1480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c1484:
    // 0x3c1484: 0x40f809  jalr        $v0
label_3c1488:
    if (ctx->pc == 0x3C1488u) {
        ctx->pc = 0x3C1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1484u;
        // 0x3c1488: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C148Cu;
        goto label_3c148c;
    }
    ctx->pc = 0x3C1484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C148Cu);
        ctx->pc = 0x3C1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1484u;
        // 0x3c1488: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1484u, 0x3C148Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C148Cu;
label_3c148c:
    // 0x3c148c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c148cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1490:
    // 0x3c1490: 0xc0ea14c  jal         func_3A8530
label_3c1494:
    if (ctx->pc == 0x3C1494u) {
        ctx->pc = 0x3C1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1490u;
        // 0x3c1494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1498u;
        goto label_3c1498;
    }
    ctx->pc = 0x3C1490u;
    SET_GPR_U32(ctx, 31, 0x3C1498u);
    ctx->pc = 0x3C1494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1490u;
    // 0x3c1494: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C1490u, 0x3C1498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1498u;
label_3c1498:
    // 0x3c1498: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c1498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c149c:
    // 0x3c149c: 0xc0ea12a  jal         func_3A84A8
label_3c14a0:
    if (ctx->pc == 0x3C14A0u) {
        ctx->pc = 0x3C14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C149Cu;
        // 0x3c14a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14A4u;
        goto label_3c14a4;
    }
    ctx->pc = 0x3C149Cu;
    SET_GPR_U32(ctx, 31, 0x3C14A4u);
    ctx->pc = 0x3C14A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C149Cu;
    // 0x3c14a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C149Cu, 0x3C14A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C14A4u;
label_3c14a4:
    // 0x3c14a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c14a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c14a8:
    // 0x3c14a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c14ac:
    // 0x3c14ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c14acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c14b0:
    // 0x3c14b0: 0xc0ea12a  jal         func_3A84A8
label_3c14b4:
    if (ctx->pc == 0x3C14B4u) {
        ctx->pc = 0x3C14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14B0u;
        // 0x3c14b4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14B8u;
        goto label_3c14b8;
    }
    ctx->pc = 0x3C14B0u;
    SET_GPR_U32(ctx, 31, 0x3C14B8u);
    ctx->pc = 0x3C14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C14B0u;
    // 0x3c14b4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C14B0u, 0x3C14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C14B8u;
label_3c14b8:
    // 0x3c14b8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3c14b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c14bc:
    // 0x3c14bc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3c14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_3c14c0:
    // 0x3c14c0: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x3c14c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_3c14c4:
    // 0x3c14c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c14c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c14c8:
    // 0x3c14c8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c14c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c14cc:
    // 0x3c14cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c14ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c14d0:
    // 0x3c14d0: 0xc0e858c  jal         func_3A1630
label_3c14d4:
    if (ctx->pc == 0x3C14D4u) {
        ctx->pc = 0x3C14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14D0u;
        // 0x3c14d4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14D8u;
        goto label_3c14d8;
    }
    ctx->pc = 0x3C14D0u;
    SET_GPR_U32(ctx, 31, 0x3C14D8u);
    ctx->pc = 0x3C14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C14D0u;
    // 0x3c14d4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C14D0u, 0x3C14D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C14D8u;
label_3c14d8:
    // 0x3c14d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c14d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c14dc:
    // 0x3c14dc: 0xc0e9132  jal         func_3A44C8
label_3c14e0:
    if (ctx->pc == 0x3C14E0u) {
        ctx->pc = 0x3C14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14DCu;
        // 0x3c14e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C14E4u;
        goto label_3c14e4;
    }
    ctx->pc = 0x3C14DCu;
    SET_GPR_U32(ctx, 31, 0x3C14E4u);
    ctx->pc = 0x3C14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C14DCu;
    // 0x3c14e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3C14DCu, 0x3C14E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C14E4u;
label_3c14e4:
    // 0x3c14e4: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3c14e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c14e8:
    // 0x3c14e8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x3c14e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c14ec:
    // 0x3c14ec: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c14ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c14f0:
    // 0x3c14f0: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x3c14f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3c14f4:
    // 0x3c14f4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x3c14f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
label_3c14f8:
    // 0x3c14f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c14f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c14fc:
    // 0x3c14fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c14fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c1500:
    // 0x3c1500: 0x700434a9  por         $a2, $zero, $a0
    ctx->pc = 0x3c1500u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_3c1504:
    // 0x3c1504: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3c1504u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3c1508:
    // 0x3c1508: 0x27b20460  addiu       $s2, $sp, 0x460
    ctx->pc = 0x3c1508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3c150c:
    // 0x3c150c: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3c150cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3c1510:
    // 0x3c1510: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x3c1510u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_3c1514:
    // 0x3c1514: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x3c1514u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
label_3c1518:
    // 0x3c1518: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x3c1518u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c151c:
    // 0x3c151c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x3c151cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_3c1520:
    // 0x3c1520: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c1520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c1524:
    // 0x3c1524: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x3c1524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_3c1528:
    // 0x3c1528: 0x26732b80  addiu       $s3, $s3, 0x2B80
    ctx->pc = 0x3c1528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 11136));
label_3c152c:
    // 0x3c152c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x3c152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_3c1530:
    // 0x3c1530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1534:
    // 0x3c1534: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x3c1534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
label_3c1538:
    // 0x3c1538: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x3c1538u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
label_3c153c:
    // 0x3c153c: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x3c153cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_3c1540:
    // 0x3c1540: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3c1540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3c1544:
    // 0x3c1544: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3c1544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3c1548:
    // 0x3c1548: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3c1548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3c154c:
    // 0x3c154c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3c154cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3c1550:
    // 0x3c1550: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c1550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1554:
    // 0x3c1554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c1554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c1558:
    // 0x3c1558: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c1558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c155c:
    // 0x3c155c: 0xafa00460  sw          $zero, 0x460($sp)
    ctx->pc = 0x3c155cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 0));
label_3c1560:
    // 0x3c1560: 0xafa00464  sw          $zero, 0x464($sp)
    ctx->pc = 0x3c1560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 0));
label_3c1564:
    // 0x3c1564: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x3c1564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3c1568:
    // 0x3c1568: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x3c1568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3c156c:
    // 0x3c156c: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3c156cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3c1570:
    // 0x3c1570: 0xc136afa  jal         func_4DABE8
label_3c1574:
    if (ctx->pc == 0x3C1574u) {
        ctx->pc = 0x3C1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1570u;
        // 0x3c1574: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1578u;
        goto label_3c1578;
    }
    ctx->pc = 0x3C1570u;
    SET_GPR_U32(ctx, 31, 0x3C1578u);
    ctx->pc = 0x3C1574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1570u;
    // 0x3c1574: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3C1570u, 0x3C1578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1578u;
label_3c1578:
    // 0x3c1578: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3c1578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3c157c:
    // 0x3c157c: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3c157cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3c1580:
    // 0x3c1580: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3c1580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3c1584:
    // 0x3c1584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c1584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c1588:
    // 0x3c1588: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c1588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c158c:
    // 0x3c158c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c158cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1590:
    // 0x3c1590: 0xafb10470  sw          $s1, 0x470($sp)
    ctx->pc = 0x3c1590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 17));
label_3c1594:
    // 0x3c1594: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c1594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c1598:
    // 0x3c1598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c1598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c159c:
    // 0x3c159c: 0xe7a00460  swc1        $f0, 0x460($sp)
    ctx->pc = 0x3c159cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3c15a0:
    // 0x3c15a0: 0xc0e9fa6  jal         func_3A7E98
label_3c15a4:
    if (ctx->pc == 0x3C15A4u) {
        ctx->pc = 0x3C15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15A0u;
        // 0x3c15a4: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15A8u;
        goto label_3c15a8;
    }
    ctx->pc = 0x3C15A0u;
    SET_GPR_U32(ctx, 31, 0x3C15A8u);
    ctx->pc = 0x3C15A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C15A0u;
    // 0x3c15a4: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C15A0u, 0x3C15A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C15A8u;
label_3c15a8:
    // 0x3c15a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c15a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c15ac:
    // 0x3c15ac: 0xc0f15bc  jal         func_3C56F0
label_3c15b0:
    if (ctx->pc == 0x3C15B0u) {
        ctx->pc = 0x3C15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15ACu;
        // 0x3c15b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15B4u;
        goto label_3c15b4;
    }
    ctx->pc = 0x3C15ACu;
    SET_GPR_U32(ctx, 31, 0x3C15B4u);
    ctx->pc = 0x3C15B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C15ACu;
    // 0x3c15b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C15ACu, 0x3C15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C15B4u;
label_3c15b4:
    // 0x3c15b4: 0x3c05d3a7  lui         $a1, 0xD3A7
    ctx->pc = 0x3c15b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54183 << 16));
label_3c15b8:
    // 0x3c15b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c15b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c15bc:
    // 0x3c15bc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3c15bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_3c15c0:
    // 0x3c15c0: 0xc0ea16a  jal         func_3A85A8
label_3c15c4:
    if (ctx->pc == 0x3C15C4u) {
        ctx->pc = 0x3C15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15C0u;
        // 0x3c15c4: 0x34a545ff  ori         $a1, $a1, 0x45FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17919);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15C8u;
        goto label_3c15c8;
    }
    ctx->pc = 0x3C15C0u;
    SET_GPR_U32(ctx, 31, 0x3C15C8u);
    ctx->pc = 0x3C15C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C15C0u;
    // 0x3c15c4: 0x34a545ff  ori         $a1, $a1, 0x45FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17919);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3C15C0u, 0x3C15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C15C8u;
label_3c15c8:
    // 0x3c15c8: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x3c15c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3c15cc:
    // 0x3c15cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c15ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c15d0:
    // 0x3c15d0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3c15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3c15d4:
    // 0x3c15d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3c15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3c15d8:
    // 0x3c15d8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3c15d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3c15dc:
    // 0x3c15dc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3c15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3c15e0:
    // 0x3c15e0: 0x60f809  jalr        $v1
label_3c15e4:
    if (ctx->pc == 0x3C15E4u) {
        ctx->pc = 0x3C15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15E0u;
        // 0x3c15e4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C15E8u;
        goto label_3c15e8;
    }
    ctx->pc = 0x3C15E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C15E8u);
        ctx->pc = 0x3C15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15E0u;
        // 0x3c15e4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C15E0u, 0x3C15E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C15E8u;
label_3c15e8:
    // 0x3c15e8: 0x7bb004e0  lq          $s0, 0x4E0($sp)
    ctx->pc = 0x3c15e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3c15ec:
    // 0x3c15ec: 0x7bb104d0  lq          $s1, 0x4D0($sp)
    ctx->pc = 0x3c15ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3c15f0:
    // 0x3c15f0: 0x7bb204c0  lq          $s2, 0x4C0($sp)
    ctx->pc = 0x3c15f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3c15f4:
    // 0x3c15f4: 0x7bb304b0  lq          $s3, 0x4B0($sp)
    ctx->pc = 0x3c15f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3c15f8:
    // 0x3c15f8: 0x7bb404a0  lq          $s4, 0x4A0($sp)
    ctx->pc = 0x3c15f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c15fc:
    // 0x3c15fc: 0x7bb50490  lq          $s5, 0x490($sp)
    ctx->pc = 0x3c15fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c1600:
    // 0x3c1600: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x3c1600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c1604:
    // 0x3c1604: 0x3e00008  jr          $ra
label_3c1608:
    if (ctx->pc == 0x3C1608u) {
        ctx->pc = 0x3C1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1604u;
        // 0x3c1608: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C160Cu;
        goto label_3c160c;
    }
    ctx->pc = 0x3C1604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1604u;
        // 0x3c1608: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C160Cu;
label_3c160c:
    // 0x3c160c: 0x0  nop
    ctx->pc = 0x3c160cu;
    // NOP
    ctx->pc = 0x3c1610u;
}
