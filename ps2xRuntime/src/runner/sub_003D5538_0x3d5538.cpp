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

// Function: sub_003D5538
// Address: 0x3d5538 - 0x3d5618
void sub_003D5538_0x3d5538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5538_0x3d5538");
#endif

    switch (ctx->pc) {
        case 0x3d5538u: goto label_3d5538;
        case 0x3d553cu: goto label_3d553c;
        case 0x3d5540u: goto label_3d5540;
        case 0x3d5544u: goto label_3d5544;
        case 0x3d5548u: goto label_3d5548;
        case 0x3d554cu: goto label_3d554c;
        case 0x3d5550u: goto label_3d5550;
        case 0x3d5554u: goto label_3d5554;
        case 0x3d5558u: goto label_3d5558;
        case 0x3d555cu: goto label_3d555c;
        case 0x3d5560u: goto label_3d5560;
        case 0x3d5564u: goto label_3d5564;
        case 0x3d5568u: goto label_3d5568;
        case 0x3d556cu: goto label_3d556c;
        case 0x3d5570u: goto label_3d5570;
        case 0x3d5574u: goto label_3d5574;
        case 0x3d5578u: goto label_3d5578;
        case 0x3d557cu: goto label_3d557c;
        case 0x3d5580u: goto label_3d5580;
        case 0x3d5584u: goto label_3d5584;
        case 0x3d5588u: goto label_3d5588;
        case 0x3d558cu: goto label_3d558c;
        case 0x3d5590u: goto label_3d5590;
        case 0x3d5594u: goto label_3d5594;
        case 0x3d5598u: goto label_3d5598;
        case 0x3d559cu: goto label_3d559c;
        case 0x3d55a0u: goto label_3d55a0;
        case 0x3d55a4u: goto label_3d55a4;
        case 0x3d55a8u: goto label_3d55a8;
        case 0x3d55acu: goto label_3d55ac;
        case 0x3d55b0u: goto label_3d55b0;
        case 0x3d55b4u: goto label_3d55b4;
        case 0x3d55b8u: goto label_3d55b8;
        case 0x3d55bcu: goto label_3d55bc;
        case 0x3d55c0u: goto label_3d55c0;
        case 0x3d55c4u: goto label_3d55c4;
        case 0x3d55c8u: goto label_3d55c8;
        case 0x3d55ccu: goto label_3d55cc;
        case 0x3d55d0u: goto label_3d55d0;
        case 0x3d55d4u: goto label_3d55d4;
        case 0x3d55d8u: goto label_3d55d8;
        case 0x3d55dcu: goto label_3d55dc;
        case 0x3d55e0u: goto label_3d55e0;
        case 0x3d55e4u: goto label_3d55e4;
        case 0x3d55e8u: goto label_3d55e8;
        case 0x3d55ecu: goto label_3d55ec;
        case 0x3d55f0u: goto label_3d55f0;
        case 0x3d55f4u: goto label_3d55f4;
        case 0x3d55f8u: goto label_3d55f8;
        case 0x3d55fcu: goto label_3d55fc;
        case 0x3d5600u: goto label_3d5600;
        case 0x3d5604u: goto label_3d5604;
        case 0x3d5608u: goto label_3d5608;
        case 0x3d560cu: goto label_3d560c;
        case 0x3d5610u: goto label_3d5610;
        case 0x3d5614u: goto label_3d5614;
        default: break;
    }

    ctx->pc = 0x3d5538u;

label_3d5538:
    // 0x3d5538: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3d5538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3d553c:
    // 0x3d553c: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3d553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3d5540:
    // 0x3d5540: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3d5540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3d5544:
    // 0x3d5544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d5544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d5548:
    // 0x3d5548: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3d5548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3d554c:
    // 0x3d554c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d5550:
    // 0x3d5550: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d5550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d5554:
    // 0x3d5554: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d5554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d5558:
    // 0x3d5558: 0x40f809  jalr        $v0
label_3d555c:
    if (ctx->pc == 0x3D555Cu) {
        ctx->pc = 0x3D555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5558u;
        // 0x3d555c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5560u;
        goto label_3d5560;
    }
    ctx->pc = 0x3D5558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5560u);
        ctx->pc = 0x3D555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5558u;
        // 0x3d555c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5558u, 0x3D5560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5560u;
label_3d5560:
    // 0x3d5560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d5560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5564:
    // 0x3d5564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d5564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d5568:
    // 0x3d5568: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d5568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d556c:
    // 0x3d556c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d5570:
    // 0x3d5570: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d5570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d5574:
    // 0x3d5574: 0x0  nop
    ctx->pc = 0x3d5574u;
    // NOP
label_3d5578:
    // 0x3d5578: 0x0  nop
    ctx->pc = 0x3d5578u;
    // NOP
label_3d557c:
    // 0x3d557c: 0x0  nop
    ctx->pc = 0x3d557cu;
    // NOP
label_3d5580:
    // 0x3d5580: 0x0  nop
    ctx->pc = 0x3d5580u;
    // NOP
label_3d5584:
    // 0x3d5584: 0x0  nop
    ctx->pc = 0x3d5584u;
    // NOP
label_3d5588:
    // 0x3d5588: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d558c:
    if (ctx->pc == 0x3D558Cu) {
        ctx->pc = 0x3D558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5588u;
        // 0x3d558c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5590u;
        goto label_3d5590;
    }
    ctx->pc = 0x3D5588u;
    {
        const bool branch_taken_0x3d5588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5588u;
        // 0x3d558c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5588) {
            ctx->pc = 0x3D5578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5578;
        }
    }
    ctx->pc = 0x3D5590u;
label_3d5590:
    // 0x3d5590: 0xc138ddc  jal         func_4E3770
label_3d5594:
    if (ctx->pc == 0x3D5594u) {
        ctx->pc = 0x3D5598u;
        goto label_3d5598;
    }
    ctx->pc = 0x3D5590u;
    SET_GPR_U32(ctx, 31, 0x3D5598u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D5590u, 0x3D5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5598u;
label_3d5598:
    // 0x3d5598: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d559c:
    // 0x3d559c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3d559cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3d55a0:
    // 0x3d55a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d55a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d55a4:
    // 0x3d55a4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3d55a8:
    if (ctx->pc == 0x3D55A8u) {
        ctx->pc = 0x3D55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55A4u;
        // 0x3d55a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D55ACu;
        goto label_3d55ac;
    }
    ctx->pc = 0x3D55A4u;
    {
        const bool branch_taken_0x3d55a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55A4u;
        // 0x3d55a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d55a4) {
            ctx->pc = 0x3D5600u;
            goto label_3d5600;
        }
    }
    ctx->pc = 0x3D55ACu;
label_3d55ac:
    // 0x3d55ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3d55acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3d55b0:
    // 0x3d55b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3d55b4:
    if (ctx->pc == 0x3D55B4u) {
        ctx->pc = 0x3D55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55B0u;
        // 0x3d55b4: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D55B8u;
        goto label_3d55b8;
    }
    ctx->pc = 0x3D55B0u;
    {
        const bool branch_taken_0x3d55b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d55b0) {
            ctx->pc = 0x3D55B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D55B0u;
            // 0x3d55b4: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D55C8u;
            goto label_3d55c8;
        }
    }
    ctx->pc = 0x3D55B8u;
label_3d55b8:
    // 0x3d55b8: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_3d55bc:
    if (ctx->pc == 0x3D55BCu) {
        ctx->pc = 0x3D55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55B8u;
        // 0x3d55bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D55C0u;
        goto label_3d55c0;
    }
    ctx->pc = 0x3D55B8u;
    {
        const bool branch_taken_0x3d55b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55B8u;
        // 0x3d55bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d55b8) {
            ctx->pc = 0x3D55F0u;
            goto label_3d55f0;
        }
    }
    ctx->pc = 0x3D55C0u;
label_3d55c0:
    // 0x3d55c0: 0x10000010  b           . + 4 + (0x10 << 2)
label_3d55c4:
    if (ctx->pc == 0x3D55C4u) {
        ctx->pc = 0x3D55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55C0u;
        // 0x3d55c4: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D55C8u;
        goto label_3d55c8;
    }
    ctx->pc = 0x3D55C0u;
    {
        const bool branch_taken_0x3d55c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55C0u;
        // 0x3d55c4: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d55c0) {
            ctx->pc = 0x3D5604u;
            goto label_3d5604;
        }
    }
    ctx->pc = 0x3D55C8u;
label_3d55c8:
    // 0x3d55c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d55cc:
    // 0x3d55cc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3d55ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3d55d0:
    // 0x3d55d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d55d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d55d4:
    // 0x3d55d4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3d55d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3d55d8:
    // 0x3d55d8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3d55d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3d55dc:
    // 0x3d55dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d55dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d55e0:
    // 0x3d55e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d55e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d55e4:
    // 0x3d55e4: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3d55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3d55e8:
    // 0x3d55e8: 0xe60100bc  swc1        $f1, 0xBC($s0)
    ctx->pc = 0x3d55e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3d55ec:
    // 0x3d55ec: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3d55ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3d55f0:
    // 0x3d55f0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3d55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3d55f4:
    // 0x3d55f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d55f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d55f8:
    // 0x3d55f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d55fc:
    // 0x3d55fc: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3d55fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_3d5600:
    // 0x3d5600: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3d5600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d5604:
    // 0x3d5604: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3d5604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d5608:
    // 0x3d5608: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3d5608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3d560c:
    // 0x3d560c: 0x3e00008  jr          $ra
label_3d5610:
    if (ctx->pc == 0x3D5610u) {
        ctx->pc = 0x3D5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D560Cu;
        // 0x3d5610: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5614u;
        goto label_3d5614;
    }
    ctx->pc = 0x3D560Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D560Cu;
        // 0x3d5610: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D560Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5614u;
label_3d5614:
    // 0x3d5614: 0x0  nop
    ctx->pc = 0x3d5614u;
    // NOP
    ctx->pc = 0x3d5618u;
}
