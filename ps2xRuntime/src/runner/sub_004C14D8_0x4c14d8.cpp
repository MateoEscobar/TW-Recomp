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

// Function: sub_004C14D8
// Address: 0x4c14d8 - 0x4c1600
void sub_004C14D8_0x4c14d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C14D8_0x4c14d8");
#endif

    switch (ctx->pc) {
        case 0x4c14d8u: goto label_4c14d8;
        case 0x4c14dcu: goto label_4c14dc;
        case 0x4c14e0u: goto label_4c14e0;
        case 0x4c14e4u: goto label_4c14e4;
        case 0x4c14e8u: goto label_4c14e8;
        case 0x4c14ecu: goto label_4c14ec;
        case 0x4c14f0u: goto label_4c14f0;
        case 0x4c14f4u: goto label_4c14f4;
        case 0x4c14f8u: goto label_4c14f8;
        case 0x4c14fcu: goto label_4c14fc;
        case 0x4c1500u: goto label_4c1500;
        case 0x4c1504u: goto label_4c1504;
        case 0x4c1508u: goto label_4c1508;
        case 0x4c150cu: goto label_4c150c;
        case 0x4c1510u: goto label_4c1510;
        case 0x4c1514u: goto label_4c1514;
        case 0x4c1518u: goto label_4c1518;
        case 0x4c151cu: goto label_4c151c;
        case 0x4c1520u: goto label_4c1520;
        case 0x4c1524u: goto label_4c1524;
        case 0x4c1528u: goto label_4c1528;
        case 0x4c152cu: goto label_4c152c;
        case 0x4c1530u: goto label_4c1530;
        case 0x4c1534u: goto label_4c1534;
        case 0x4c1538u: goto label_4c1538;
        case 0x4c153cu: goto label_4c153c;
        case 0x4c1540u: goto label_4c1540;
        case 0x4c1544u: goto label_4c1544;
        case 0x4c1548u: goto label_4c1548;
        case 0x4c154cu: goto label_4c154c;
        case 0x4c1550u: goto label_4c1550;
        case 0x4c1554u: goto label_4c1554;
        case 0x4c1558u: goto label_4c1558;
        case 0x4c155cu: goto label_4c155c;
        case 0x4c1560u: goto label_4c1560;
        case 0x4c1564u: goto label_4c1564;
        case 0x4c1568u: goto label_4c1568;
        case 0x4c156cu: goto label_4c156c;
        case 0x4c1570u: goto label_4c1570;
        case 0x4c1574u: goto label_4c1574;
        case 0x4c1578u: goto label_4c1578;
        case 0x4c157cu: goto label_4c157c;
        case 0x4c1580u: goto label_4c1580;
        case 0x4c1584u: goto label_4c1584;
        case 0x4c1588u: goto label_4c1588;
        case 0x4c158cu: goto label_4c158c;
        case 0x4c1590u: goto label_4c1590;
        case 0x4c1594u: goto label_4c1594;
        case 0x4c1598u: goto label_4c1598;
        case 0x4c159cu: goto label_4c159c;
        case 0x4c15a0u: goto label_4c15a0;
        case 0x4c15a4u: goto label_4c15a4;
        case 0x4c15a8u: goto label_4c15a8;
        case 0x4c15acu: goto label_4c15ac;
        case 0x4c15b0u: goto label_4c15b0;
        case 0x4c15b4u: goto label_4c15b4;
        case 0x4c15b8u: goto label_4c15b8;
        case 0x4c15bcu: goto label_4c15bc;
        case 0x4c15c0u: goto label_4c15c0;
        case 0x4c15c4u: goto label_4c15c4;
        case 0x4c15c8u: goto label_4c15c8;
        case 0x4c15ccu: goto label_4c15cc;
        case 0x4c15d0u: goto label_4c15d0;
        case 0x4c15d4u: goto label_4c15d4;
        case 0x4c15d8u: goto label_4c15d8;
        case 0x4c15dcu: goto label_4c15dc;
        case 0x4c15e0u: goto label_4c15e0;
        case 0x4c15e4u: goto label_4c15e4;
        case 0x4c15e8u: goto label_4c15e8;
        case 0x4c15ecu: goto label_4c15ec;
        case 0x4c15f0u: goto label_4c15f0;
        case 0x4c15f4u: goto label_4c15f4;
        case 0x4c15f8u: goto label_4c15f8;
        case 0x4c15fcu: goto label_4c15fc;
        default: break;
    }

    ctx->pc = 0x4c14d8u;

label_4c14d8:
    // 0x4c14d8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4c14d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4c14dc:
    // 0x4c14dc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4c14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4c14e0:
    // 0x4c14e0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x4c14e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_4c14e4:
    // 0x4c14e4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x4c14e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_4c14e8:
    // 0x4c14e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4c14e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c14ec:
    // 0x4c14ec: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x4c14ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_4c14f0:
    // 0x4c14f0: 0x24424240  addiu       $v0, $v0, 0x4240
    ctx->pc = 0x4c14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
label_4c14f4:
    // 0x4c14f4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x4c14f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_4c14f8:
    // 0x4c14f8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x4c14f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_4c14fc:
    // 0x4c14fc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x4c14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_4c1500:
    // 0x4c1500: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x4c1500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_4c1504:
    // 0x4c1504: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4c1504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4c1508:
    // 0x4c1508: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4c1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4c150c:
    // 0x4c150c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_4c1510:
    if (ctx->pc == 0x4C1510u) {
        ctx->pc = 0x4C1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C150Cu;
        // 0x4c1510: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1514u;
        goto label_4c1514;
    }
    ctx->pc = 0x4C150Cu;
    {
        const bool branch_taken_0x4c150c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C150Cu;
        // 0x4c1510: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c150c) {
            ctx->pc = 0x4C15B0u;
            goto label_4c15b0;
        }
    }
    ctx->pc = 0x4C1514u;
label_4c1514:
    // 0x4c1514: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4c1514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1518:
    // 0x4c1518: 0x1000001b  b           . + 4 + (0x1B << 2)
label_4c151c:
    if (ctx->pc == 0x4C151Cu) {
        ctx->pc = 0x4C151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1518u;
        // 0x4c151c: 0x3c150071  lui         $s5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1520u;
        goto label_4c1520;
    }
    ctx->pc = 0x4C1518u;
    {
        const bool branch_taken_0x4c1518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1518u;
        // 0x4c151c: 0x3c150071  lui         $s5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1518) {
            ctx->pc = 0x4C1588u;
            goto label_4c1588;
        }
    }
    ctx->pc = 0x4C1520u;
label_4c1520:
    // 0x4c1520: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x4c1520u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c1524:
    // 0x4c1524: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x4c1524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_4c1528:
    // 0x4c1528: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_4c152c:
    if (ctx->pc == 0x4C152Cu) {
        ctx->pc = 0x4C152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1528u;
        // 0x4c152c: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1530u;
        goto label_4c1530;
    }
    ctx->pc = 0x4C1528u;
    {
        const bool branch_taken_0x4c1528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1528u;
        // 0x4c152c: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1528) {
            ctx->pc = 0x4C1584u;
            goto label_4c1584;
        }
    }
    ctx->pc = 0x4C1530u;
label_4c1530:
    // 0x4c1530: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4c1530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4c1534:
    // 0x4c1534: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c1534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c1538:
    // 0x4c1538: 0xc10c4de  jal         func_431378
label_4c153c:
    if (ctx->pc == 0x4C153Cu) {
        ctx->pc = 0x4C153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1538u;
        // 0x4c153c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1540u;
        goto label_4c1540;
    }
    ctx->pc = 0x4C1538u;
    SET_GPR_U32(ctx, 31, 0x4C1540u);
    ctx->pc = 0x4C153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1538u;
    // 0x4c153c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x4C1538u, 0x4C1540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1540u;
label_4c1540:
    // 0x4c1540: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x4c1540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_4c1544:
    // 0x4c1544: 0x8ed04240  lw          $s0, 0x4240($s6)
    ctx->pc = 0x4c1544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16960)));
label_4c1548:
    // 0x4c1548: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x4c1548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4c154c:
    // 0x4c154c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_4c1550:
    if (ctx->pc == 0x4C1550u) {
        ctx->pc = 0x4C1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C154Cu;
        // 0x4c1550: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1554u;
        goto label_4c1554;
    }
    ctx->pc = 0x4C154Cu;
    {
        const bool branch_taken_0x4c154c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C154Cu;
        // 0x4c1550: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c154c) {
            ctx->pc = 0x4C1578u;
            goto label_4c1578;
        }
    }
    ctx->pc = 0x4C1554u;
label_4c1554:
    // 0x4c1554: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x4c1554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_4c1558:
    // 0x4c1558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c1558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c155c:
    // 0x4c155c: 0x40f809  jalr        $v0
label_4c1560:
    if (ctx->pc == 0x4C1560u) {
        ctx->pc = 0x4C1560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C155Cu;
        // 0x4c1560: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1564u;
        goto label_4c1564;
    }
    ctx->pc = 0x4C155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1564u);
        ctx->pc = 0x4C1560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C155Cu;
        // 0x4c1560: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C155Cu, 0x4C1564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1564u;
label_4c1564:
    // 0x4c1564: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c1568:
    if (ctx->pc == 0x4C1568u) {
        ctx->pc = 0x4C1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1564u;
        // 0x4c1568: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C156Cu;
        goto label_4c156c;
    }
    ctx->pc = 0x4C1564u;
    {
        const bool branch_taken_0x4c1564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1564u;
        // 0x4c1568: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1564) {
            ctx->pc = 0x4C157Cu;
            goto label_4c157c;
        }
    }
    ctx->pc = 0x4C156Cu;
label_4c156c:
    // 0x4c156c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4c156cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c1570:
    // 0x4c1570: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_4c1574:
    if (ctx->pc == 0x4C1574u) {
        ctx->pc = 0x4C1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1570u;
        // 0x4c1574: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1578u;
        goto label_4c1578;
    }
    ctx->pc = 0x4C1570u;
    {
        const bool branch_taken_0x4c1570 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c1570) {
            ctx->pc = 0x4C1574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1570u;
            // 0x4c1574: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1558;
        }
    }
    ctx->pc = 0x4C1578u;
label_4c1578:
    // 0x4c1578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4c1578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c157c:
    // 0x4c157c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_4c1580:
    if (ctx->pc == 0x4C1580u) {
        ctx->pc = 0x4C1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C157Cu;
        // 0x4c1580: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1584u;
        goto label_4c1584;
    }
    ctx->pc = 0x4C157Cu;
    {
        const bool branch_taken_0x4c157c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C157Cu;
        // 0x4c1580: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c157c) {
            ctx->pc = 0x4C15D0u;
            goto label_4c15d0;
        }
    }
    ctx->pc = 0x4C1584u;
label_4c1584:
    // 0x4c1584: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4c1584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c1588:
    // 0x4c1588: 0x26b3ad18  addiu       $s3, $s5, -0x52E8
    ctx->pc = 0x4c1588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_4c158c:
    // 0x4c158c: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x4c158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_4c1590:
    // 0x4c1590: 0x40f809  jalr        $v0
label_4c1594:
    if (ctx->pc == 0x4C1594u) {
        ctx->pc = 0x4C1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1590u;
        // 0x4c1594: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1598u;
        goto label_4c1598;
    }
    ctx->pc = 0x4C1590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1598u);
        ctx->pc = 0x4C1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1590u;
        // 0x4c1594: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1590u, 0x4C1598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1598u;
label_4c1598:
    // 0x4c1598: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4c1598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c159c:
    // 0x4c159c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_4c15a0:
    if (ctx->pc == 0x4C15A0u) {
        ctx->pc = 0x4C15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C159Cu;
        // 0x4c15a0: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C15A4u;
        goto label_4c15a4;
    }
    ctx->pc = 0x4C159Cu;
    {
        const bool branch_taken_0x4c159c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C159Cu;
        // 0x4c15a0: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c159c) {
            ctx->pc = 0x4C1520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1520;
        }
    }
    ctx->pc = 0x4C15A4u;
label_4c15a4:
    // 0x4c15a4: 0x8f828aa4  lw          $v0, -0x755C($gp)
    ctx->pc = 0x4c15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937252)));
label_4c15a8:
    // 0x4c15a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4c15ac:
    if (ctx->pc == 0x4C15ACu) {
        ctx->pc = 0x4C15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C15A8u;
        // 0x4c15ac: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C15B0u;
        goto label_4c15b0;
    }
    ctx->pc = 0x4C15A8u;
    {
        const bool branch_taken_0x4c15a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C15A8u;
        // 0x4c15ac: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c15a8) {
            ctx->pc = 0x4C15D0u;
            goto label_4c15d0;
        }
    }
    ctx->pc = 0x4C15B0u;
label_4c15b0:
    // 0x4c15b0: 0x26c24240  addiu       $v0, $s6, 0x4240
    ctx->pc = 0x4c15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16960));
label_4c15b4:
    // 0x4c15b4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4c15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4c15b8:
    // 0x4c15b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4c15bc:
    if (ctx->pc == 0x4C15BCu) {
        ctx->pc = 0x4C15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C15B8u;
        // 0x4c15bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C15C0u;
        goto label_4c15c0;
    }
    ctx->pc = 0x4C15B8u;
    {
        const bool branch_taken_0x4c15b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c15b8) {
            ctx->pc = 0x4C15BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C15B8u;
            // 0x4c15bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C15CCu;
            goto label_4c15cc;
        }
    }
    ctx->pc = 0x4C15C0u;
label_4c15c0:
    // 0x4c15c0: 0x40f809  jalr        $v0
label_4c15c4:
    if (ctx->pc == 0x4C15C4u) {
        ctx->pc = 0x4C15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C15C0u;
        // 0x4c15c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C15C8u;
        goto label_4c15c8;
    }
    ctx->pc = 0x4C15C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C15C8u);
        ctx->pc = 0x4C15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C15C0u;
        // 0x4c15c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C15C0u, 0x4C15C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C15C8u;
label_4c15c8:
    // 0x4c15c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4c15c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c15cc:
    // 0x4c15cc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x4c15ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4c15d0:
    // 0x4c15d0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x4c15d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4c15d4:
    // 0x4c15d4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x4c15d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4c15d8:
    // 0x4c15d8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x4c15d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4c15dc:
    // 0x4c15dc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x4c15dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4c15e0:
    // 0x4c15e0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x4c15e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4c15e4:
    // 0x4c15e4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4c15e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4c15e8:
    // 0x4c15e8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4c15e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4c15ec:
    // 0x4c15ec: 0x3e00008  jr          $ra
label_4c15f0:
    if (ctx->pc == 0x4C15F0u) {
        ctx->pc = 0x4C15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C15ECu;
        // 0x4c15f0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C15F4u;
        goto label_4c15f4;
    }
    ctx->pc = 0x4C15ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C15ECu;
        // 0x4c15f0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C15ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C15F4u;
label_4c15f4:
    // 0x4c15f4: 0x0  nop
    ctx->pc = 0x4c15f4u;
    // NOP
label_4c15f8:
    // 0x4c15f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x4c15f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4c15fc:
    // 0x4c15fc: 0x0  nop
    ctx->pc = 0x4c15fcu;
    // NOP
    ctx->pc = 0x4c1600u;
}
