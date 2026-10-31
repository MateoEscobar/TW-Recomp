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

// Function: sub_003E1578
// Address: 0x3e1578 - 0x3e1640
void sub_003E1578_0x3e1578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1578_0x3e1578");
#endif

    switch (ctx->pc) {
        case 0x3e1578u: goto label_3e1578;
        case 0x3e157cu: goto label_3e157c;
        case 0x3e1580u: goto label_3e1580;
        case 0x3e1584u: goto label_3e1584;
        case 0x3e1588u: goto label_3e1588;
        case 0x3e158cu: goto label_3e158c;
        case 0x3e1590u: goto label_3e1590;
        case 0x3e1594u: goto label_3e1594;
        case 0x3e1598u: goto label_3e1598;
        case 0x3e159cu: goto label_3e159c;
        case 0x3e15a0u: goto label_3e15a0;
        case 0x3e15a4u: goto label_3e15a4;
        case 0x3e15a8u: goto label_3e15a8;
        case 0x3e15acu: goto label_3e15ac;
        case 0x3e15b0u: goto label_3e15b0;
        case 0x3e15b4u: goto label_3e15b4;
        case 0x3e15b8u: goto label_3e15b8;
        case 0x3e15bcu: goto label_3e15bc;
        case 0x3e15c0u: goto label_3e15c0;
        case 0x3e15c4u: goto label_3e15c4;
        case 0x3e15c8u: goto label_3e15c8;
        case 0x3e15ccu: goto label_3e15cc;
        case 0x3e15d0u: goto label_3e15d0;
        case 0x3e15d4u: goto label_3e15d4;
        case 0x3e15d8u: goto label_3e15d8;
        case 0x3e15dcu: goto label_3e15dc;
        case 0x3e15e0u: goto label_3e15e0;
        case 0x3e15e4u: goto label_3e15e4;
        case 0x3e15e8u: goto label_3e15e8;
        case 0x3e15ecu: goto label_3e15ec;
        case 0x3e15f0u: goto label_3e15f0;
        case 0x3e15f4u: goto label_3e15f4;
        case 0x3e15f8u: goto label_3e15f8;
        case 0x3e15fcu: goto label_3e15fc;
        case 0x3e1600u: goto label_3e1600;
        case 0x3e1604u: goto label_3e1604;
        case 0x3e1608u: goto label_3e1608;
        case 0x3e160cu: goto label_3e160c;
        case 0x3e1610u: goto label_3e1610;
        case 0x3e1614u: goto label_3e1614;
        case 0x3e1618u: goto label_3e1618;
        case 0x3e161cu: goto label_3e161c;
        case 0x3e1620u: goto label_3e1620;
        case 0x3e1624u: goto label_3e1624;
        case 0x3e1628u: goto label_3e1628;
        case 0x3e162cu: goto label_3e162c;
        case 0x3e1630u: goto label_3e1630;
        case 0x3e1634u: goto label_3e1634;
        case 0x3e1638u: goto label_3e1638;
        case 0x3e163cu: goto label_3e163c;
        default: break;
    }

    ctx->pc = 0x3e1578u;

label_3e1578:
    // 0x3e1578: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e1578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e157c:
    // 0x3e157c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e1580:
    // 0x3e1580: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e1580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e1584:
    // 0x3e1584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1588:
    // 0x3e1588: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e1588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e158c:
    // 0x3e158c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e1590:
    // 0x3e1590: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e1590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e1594:
    // 0x3e1594: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e1594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e1598:
    // 0x3e1598: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e1598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e159c:
    // 0x3e159c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e15a0:
    // 0x3e15a0: 0x40f809  jalr        $v0
label_3e15a4:
    if (ctx->pc == 0x3E15A4u) {
        ctx->pc = 0x3E15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15A0u;
        // 0x3e15a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E15A8u;
        goto label_3e15a8;
    }
    ctx->pc = 0x3E15A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E15A8u);
        ctx->pc = 0x3E15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15A0u;
        // 0x3e15a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E15A0u, 0x3E15A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E15A8u;
label_3e15a8:
    // 0x3e15a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e15a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e15ac:
    // 0x3e15ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e15acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e15b0:
    // 0x3e15b0: 0xc0e858c  jal         func_3A1630
label_3e15b4:
    if (ctx->pc == 0x3E15B4u) {
        ctx->pc = 0x3E15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15B0u;
        // 0x3e15b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E15B8u;
        goto label_3e15b8;
    }
    ctx->pc = 0x3E15B0u;
    SET_GPR_U32(ctx, 31, 0x3E15B8u);
    ctx->pc = 0x3E15B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E15B0u;
    // 0x3e15b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E15B0u, 0x3E15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E15B8u;
label_3e15b8:
    // 0x3e15b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e15b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e15bc:
    // 0x3e15bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e15bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e15c0:
    // 0x3e15c0: 0x24020804  addiu       $v0, $zero, 0x804
    ctx->pc = 0x3e15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
label_3e15c4:
    // 0x3e15c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e15c8:
    // 0x3e15c8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e15cc:
    // 0x3e15cc: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3e15ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3e15d0:
    // 0x3e15d0: 0xc0ea12a  jal         func_3A84A8
label_3e15d4:
    if (ctx->pc == 0x3E15D4u) {
        ctx->pc = 0x3E15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15D0u;
        // 0x3e15d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E15D8u;
        goto label_3e15d8;
    }
    ctx->pc = 0x3E15D0u;
    SET_GPR_U32(ctx, 31, 0x3E15D8u);
    ctx->pc = 0x3E15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E15D0u;
    // 0x3e15d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E15D0u, 0x3E15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E15D8u;
label_3e15d8:
    // 0x3e15d8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e15d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e15dc:
    // 0x3e15dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e15dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e15e0:
    // 0x3e15e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e15e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e15e4:
    // 0x3e15e4: 0xc0ea12a  jal         func_3A84A8
label_3e15e8:
    if (ctx->pc == 0x3E15E8u) {
        ctx->pc = 0x3E15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15E4u;
        // 0x3e15e8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E15ECu;
        goto label_3e15ec;
    }
    ctx->pc = 0x3E15E4u;
    SET_GPR_U32(ctx, 31, 0x3E15ECu);
    ctx->pc = 0x3E15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E15E4u;
    // 0x3e15e8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E15E4u, 0x3E15ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E15ECu;
label_3e15ec:
    // 0x3e15ec: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e15ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e15f0:
    // 0x3e15f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3e15f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3e15f4:
    // 0x3e15f4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3e15f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e15f8:
    // 0x3e15f8: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3e15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3e15fc:
    // 0x3e15fc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3e15fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3e1600:
    // 0x3e1600: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e1600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e1604:
    // 0x3e1604: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3e1604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3e1608:
    // 0x3e1608: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3e1608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_3e160c:
    // 0x3e160c: 0xc0cd4ee  jal         func_3353B8
label_3e1610:
    if (ctx->pc == 0x3E1610u) {
        ctx->pc = 0x3E1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E160Cu;
        // 0x3e1610: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1614u;
        goto label_3e1614;
    }
    ctx->pc = 0x3E160Cu;
    SET_GPR_U32(ctx, 31, 0x3E1614u);
    ctx->pc = 0x3E1610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E160Cu;
    // 0x3e1610: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E160Cu, 0x3E1614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1614u;
label_3e1614:
    // 0x3e1614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e1614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e1618:
    // 0x3e1618: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3e1618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3e161c:
    // 0x3e161c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3e161cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_3e1620:
    // 0x3e1620: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3e1620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3e1624:
    // 0x3e1624: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e1624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e1628:
    // 0x3e1628: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e1628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e162c:
    // 0x3e162c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e162cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e1630:
    // 0x3e1630: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e1630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e1634:
    // 0x3e1634: 0x3e00008  jr          $ra
label_3e1638:
    if (ctx->pc == 0x3E1638u) {
        ctx->pc = 0x3E1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1634u;
        // 0x3e1638: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E163Cu;
        goto label_3e163c;
    }
    ctx->pc = 0x3E1634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1634u;
        // 0x3e1638: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E163Cu;
label_3e163c:
    // 0x3e163c: 0x0  nop
    ctx->pc = 0x3e163cu;
    // NOP
    ctx->pc = 0x3e1640u;
}
