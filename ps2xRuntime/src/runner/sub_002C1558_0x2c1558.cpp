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

// Function: sub_002C1558
// Address: 0x2c1558 - 0x2c1638
void sub_002C1558_0x2c1558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1558_0x2c1558");
#endif

    switch (ctx->pc) {
        case 0x2c1558u: goto label_2c1558;
        case 0x2c155cu: goto label_2c155c;
        case 0x2c1560u: goto label_2c1560;
        case 0x2c1564u: goto label_2c1564;
        case 0x2c1568u: goto label_2c1568;
        case 0x2c156cu: goto label_2c156c;
        case 0x2c1570u: goto label_2c1570;
        case 0x2c1574u: goto label_2c1574;
        case 0x2c1578u: goto label_2c1578;
        case 0x2c157cu: goto label_2c157c;
        case 0x2c1580u: goto label_2c1580;
        case 0x2c1584u: goto label_2c1584;
        case 0x2c1588u: goto label_2c1588;
        case 0x2c158cu: goto label_2c158c;
        case 0x2c1590u: goto label_2c1590;
        case 0x2c1594u: goto label_2c1594;
        case 0x2c1598u: goto label_2c1598;
        case 0x2c159cu: goto label_2c159c;
        case 0x2c15a0u: goto label_2c15a0;
        case 0x2c15a4u: goto label_2c15a4;
        case 0x2c15a8u: goto label_2c15a8;
        case 0x2c15acu: goto label_2c15ac;
        case 0x2c15b0u: goto label_2c15b0;
        case 0x2c15b4u: goto label_2c15b4;
        case 0x2c15b8u: goto label_2c15b8;
        case 0x2c15bcu: goto label_2c15bc;
        case 0x2c15c0u: goto label_2c15c0;
        case 0x2c15c4u: goto label_2c15c4;
        case 0x2c15c8u: goto label_2c15c8;
        case 0x2c15ccu: goto label_2c15cc;
        case 0x2c15d0u: goto label_2c15d0;
        case 0x2c15d4u: goto label_2c15d4;
        case 0x2c15d8u: goto label_2c15d8;
        case 0x2c15dcu: goto label_2c15dc;
        case 0x2c15e0u: goto label_2c15e0;
        case 0x2c15e4u: goto label_2c15e4;
        case 0x2c15e8u: goto label_2c15e8;
        case 0x2c15ecu: goto label_2c15ec;
        case 0x2c15f0u: goto label_2c15f0;
        case 0x2c15f4u: goto label_2c15f4;
        case 0x2c15f8u: goto label_2c15f8;
        case 0x2c15fcu: goto label_2c15fc;
        case 0x2c1600u: goto label_2c1600;
        case 0x2c1604u: goto label_2c1604;
        case 0x2c1608u: goto label_2c1608;
        case 0x2c160cu: goto label_2c160c;
        case 0x2c1610u: goto label_2c1610;
        case 0x2c1614u: goto label_2c1614;
        case 0x2c1618u: goto label_2c1618;
        case 0x2c161cu: goto label_2c161c;
        case 0x2c1620u: goto label_2c1620;
        case 0x2c1624u: goto label_2c1624;
        case 0x2c1628u: goto label_2c1628;
        case 0x2c162cu: goto label_2c162c;
        case 0x2c1630u: goto label_2c1630;
        case 0x2c1634u: goto label_2c1634;
        default: break;
    }

    ctx->pc = 0x2c1558u;

label_2c1558:
    // 0x2c1558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c155c:
    // 0x2c155c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2c1560:
    // 0x2c1560: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c1560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2c1564:
    // 0x2c1564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1568:
    // 0x2c1568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c156c:
    // 0x2c156c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c156cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c1570:
    // 0x2c1570: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2c1570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2c1574:
    // 0x2c1574: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c1574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c1578:
    // 0x2c1578: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c1578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c157c:
    // 0x2c157c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2c157cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c1580:
    // 0x2c1580: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c1580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c1584:
    // 0x2c1584: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c1584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c1588:
    // 0x2c1588: 0x40f809  jalr        $v0
label_2c158c:
    if (ctx->pc == 0x2C158Cu) {
        ctx->pc = 0x2C158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1588u;
        // 0x2c158c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1590u;
        goto label_2c1590;
    }
    ctx->pc = 0x2C1588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C1590u);
        ctx->pc = 0x2C158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1588u;
        // 0x2c158c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1588u, 0x2C1590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C1590u;
label_2c1590:
    // 0x2c1590: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c1590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c1594:
    // 0x2c1594: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c1594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1598:
    // 0x2c1598: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c1598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c159c:
    // 0x2c159c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c15a0:
    // 0x2c15a0: 0x40f809  jalr        $v0
label_2c15a4:
    if (ctx->pc == 0x2C15A4u) {
        ctx->pc = 0x2C15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15A0u;
        // 0x2c15a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C15A8u;
        goto label_2c15a8;
    }
    ctx->pc = 0x2C15A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C15A8u);
        ctx->pc = 0x2C15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15A0u;
        // 0x2c15a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C15A0u, 0x2C15A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C15A8u;
label_2c15a8:
    // 0x2c15a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c15a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c15ac:
    // 0x2c15ac: 0xc0a9d6e  jal         func_2A75B8
label_2c15b0:
    if (ctx->pc == 0x2C15B0u) {
        ctx->pc = 0x2C15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15ACu;
        // 0x2c15b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C15B4u;
        goto label_2c15b4;
    }
    ctx->pc = 0x2C15ACu;
    SET_GPR_U32(ctx, 31, 0x2C15B4u);
    ctx->pc = 0x2C15B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C15ACu;
    // 0x2c15b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A75B8u, 0x2C15ACu, 0x2C15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C15B4u;
label_2c15b4:
    // 0x2c15b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c15b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c15b8:
    // 0x2c15b8: 0xc0e40a2  jal         func_390288
label_2c15bc:
    if (ctx->pc == 0x2C15BCu) {
        ctx->pc = 0x2C15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15B8u;
        // 0x2c15bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C15C0u;
        goto label_2c15c0;
    }
    ctx->pc = 0x2C15B8u;
    SET_GPR_U32(ctx, 31, 0x2C15C0u);
    ctx->pc = 0x2C15BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C15B8u;
    // 0x2c15bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C15B8u, 0x2C15C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C15C0u;
label_2c15c0:
    // 0x2c15c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c15c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c15c4:
    // 0x2c15c4: 0xc10587a  jal         func_4161E8
label_2c15c8:
    if (ctx->pc == 0x2C15C8u) {
        ctx->pc = 0x2C15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15C4u;
        // 0x2c15c8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C15CCu;
        goto label_2c15cc;
    }
    ctx->pc = 0x2C15C4u;
    SET_GPR_U32(ctx, 31, 0x2C15CCu);
    ctx->pc = 0x2C15C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C15C4u;
    // 0x2c15c8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C15C4u, 0x2C15CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C15CCu;
label_2c15cc:
    // 0x2c15cc: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x2c15ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_2c15d0:
    // 0x2c15d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c15d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c15d4:
    // 0x2c15d4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2c15d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2c15d8:
    // 0x2c15d8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2c15d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2c15dc:
    // 0x2c15dc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c15dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2c15e0:
    // 0x2c15e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c15e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2c15e4:
    // 0x2c15e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c15e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c15e8:
    // 0x2c15e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c15e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c15ec:
    // 0x2c15ec: 0xc0a7cf2  jal         func_29F3C8
label_2c15f0:
    if (ctx->pc == 0x2C15F0u) {
        ctx->pc = 0x2C15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15ECu;
        // 0x2c15f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C15F4u;
        goto label_2c15f4;
    }
    ctx->pc = 0x2C15ECu;
    SET_GPR_U32(ctx, 31, 0x2C15F4u);
    ctx->pc = 0x2C15F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C15ECu;
    // 0x2c15f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2C15ECu, 0x2C15F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C15F4u;
label_2c15f4:
    // 0x2c15f4: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2c15f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2c15f8:
    // 0x2c15f8: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2c15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2c15fc:
    // 0x2c15fc: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2c15fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2c1600:
    // 0x2c1600: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2c1600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c1604:
    // 0x2c1604: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c1604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c1608:
    // 0x2c1608: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c1608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2c160c:
    // 0x2c160c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c1610:
    // 0x2c1610: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c1610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c1614:
    // 0x2c1614: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c1614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c1618:
    // 0x2c1618: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c161c:
    // 0x2c161c: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x2c161cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_2c1620:
    // 0x2c1620: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c1620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c1624:
    // 0x2c1624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c1624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1628:
    // 0x2c1628: 0xa4c500f4  sh          $a1, 0xF4($a2)
    ctx->pc = 0x2c1628u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 244), (uint16_t)GPR_U32(ctx, 5));
label_2c162c:
    // 0x2c162c: 0x3e00008  jr          $ra
label_2c1630:
    if (ctx->pc == 0x2C1630u) {
        ctx->pc = 0x2C1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C162Cu;
        // 0x2c1630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1634u;
        goto label_2c1634;
    }
    ctx->pc = 0x2C162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C162Cu;
        // 0x2c1630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C162Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1634u;
label_2c1634:
    // 0x2c1634: 0x0  nop
    ctx->pc = 0x2c1634u;
    // NOP
    ctx->pc = 0x2c1638u;
}
