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

// Function: sub_001B9548
// Address: 0x1b9548 - 0x1b9600
void sub_001B9548_0x1b9548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9548_0x1b9548");
#endif

    switch (ctx->pc) {
        case 0x1b9548u: goto label_1b9548;
        case 0x1b954cu: goto label_1b954c;
        case 0x1b9550u: goto label_1b9550;
        case 0x1b9554u: goto label_1b9554;
        case 0x1b9558u: goto label_1b9558;
        case 0x1b955cu: goto label_1b955c;
        case 0x1b9560u: goto label_1b9560;
        case 0x1b9564u: goto label_1b9564;
        case 0x1b9568u: goto label_1b9568;
        case 0x1b956cu: goto label_1b956c;
        case 0x1b9570u: goto label_1b9570;
        case 0x1b9574u: goto label_1b9574;
        case 0x1b9578u: goto label_1b9578;
        case 0x1b957cu: goto label_1b957c;
        case 0x1b9580u: goto label_1b9580;
        case 0x1b9584u: goto label_1b9584;
        case 0x1b9588u: goto label_1b9588;
        case 0x1b958cu: goto label_1b958c;
        case 0x1b9590u: goto label_1b9590;
        case 0x1b9594u: goto label_1b9594;
        case 0x1b9598u: goto label_1b9598;
        case 0x1b959cu: goto label_1b959c;
        case 0x1b95a0u: goto label_1b95a0;
        case 0x1b95a4u: goto label_1b95a4;
        case 0x1b95a8u: goto label_1b95a8;
        case 0x1b95acu: goto label_1b95ac;
        case 0x1b95b0u: goto label_1b95b0;
        case 0x1b95b4u: goto label_1b95b4;
        case 0x1b95b8u: goto label_1b95b8;
        case 0x1b95bcu: goto label_1b95bc;
        case 0x1b95c0u: goto label_1b95c0;
        case 0x1b95c4u: goto label_1b95c4;
        case 0x1b95c8u: goto label_1b95c8;
        case 0x1b95ccu: goto label_1b95cc;
        case 0x1b95d0u: goto label_1b95d0;
        case 0x1b95d4u: goto label_1b95d4;
        case 0x1b95d8u: goto label_1b95d8;
        case 0x1b95dcu: goto label_1b95dc;
        case 0x1b95e0u: goto label_1b95e0;
        case 0x1b95e4u: goto label_1b95e4;
        case 0x1b95e8u: goto label_1b95e8;
        case 0x1b95ecu: goto label_1b95ec;
        case 0x1b95f0u: goto label_1b95f0;
        case 0x1b95f4u: goto label_1b95f4;
        case 0x1b95f8u: goto label_1b95f8;
        case 0x1b95fcu: goto label_1b95fc;
        default: break;
    }

    ctx->pc = 0x1b9548u;

label_1b9548:
    // 0x1b9548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b954c:
    // 0x1b954c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1b9550:
    // 0x1b9550: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b9554:
    // 0x1b9554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9558:
    // 0x1b9558: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b9558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1b955c:
    // 0x1b955c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b9560:
    // 0x1b9560: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b9560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b9564:
    // 0x1b9564: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1b9564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1b9568:
    // 0x1b9568: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1b9568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1b956c:
    // 0x1b956c: 0x40f809  jalr        $v0
label_1b9570:
    if (ctx->pc == 0x1B9570u) {
        ctx->pc = 0x1B9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B956Cu;
        // 0x1b9570: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9574u;
        goto label_1b9574;
    }
    ctx->pc = 0x1B956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9574u);
        ctx->pc = 0x1B9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B956Cu;
        // 0x1b9570: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B956Cu, 0x1B9574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9574u;
label_1b9574:
    // 0x1b9574: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1b9578:
    if (ctx->pc == 0x1B9578u) {
        ctx->pc = 0x1B9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9574u;
        // 0x1b9578: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B957Cu;
        goto label_1b957c;
    }
    ctx->pc = 0x1B9574u;
    {
        const bool branch_taken_0x1b9574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9574) {
            ctx->pc = 0x1B9578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9574u;
            // 0x1b9578: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9594u;
            goto label_1b9594;
        }
    }
    ctx->pc = 0x1B957Cu;
label_1b957c:
    // 0x1b957c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1b957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_1b9580:
    // 0x1b9580: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1b9584:
    if (ctx->pc == 0x1B9584u) {
        ctx->pc = 0x1B9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9580u;
        // 0x1b9584: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9588u;
        goto label_1b9588;
    }
    ctx->pc = 0x1B9580u;
    {
        const bool branch_taken_0x1b9580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9580) {
            ctx->pc = 0x1B9584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9580u;
            // 0x1b9584: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9594u;
            goto label_1b9594;
        }
    }
    ctx->pc = 0x1B9588u;
label_1b9588:
    // 0x1b9588: 0xc06886e  jal         func_1A21B8
label_1b958c:
    if (ctx->pc == 0x1B958Cu) {
        ctx->pc = 0x1B958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9588u;
        // 0x1b958c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9590u;
        goto label_1b9590;
    }
    ctx->pc = 0x1B9588u;
    SET_GPR_U32(ctx, 31, 0x1B9590u);
    ctx->pc = 0x1B958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9588u;
    // 0x1b958c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1B9588u, 0x1B9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9590u;
label_1b9590:
    // 0x1b9590: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1b9590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1b9594:
    // 0x1b9594: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1b9598:
    if (ctx->pc == 0x1B9598u) {
        ctx->pc = 0x1B9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9594u;
        // 0x1b9598: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B959Cu;
        goto label_1b959c;
    }
    ctx->pc = 0x1B9594u;
    {
        const bool branch_taken_0x1b9594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9594) {
            ctx->pc = 0x1B9598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9594u;
            // 0x1b9598: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B95E8u;
            goto label_1b95e8;
        }
    }
    ctx->pc = 0x1B959Cu;
label_1b959c:
    // 0x1b959c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b95a0:
    // 0x1b95a0: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x1b95a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1b95a4:
    // 0x1b95a4: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1b95a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1b95a8:
    // 0x1b95a8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1b95a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1b95ac:
    // 0x1b95ac: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x1b95acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1b95b0:
    // 0x1b95b0: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x1b95b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1b95b4:
    // 0x1b95b4: 0xa0f809  jalr        $a1
label_1b95b8:
    if (ctx->pc == 0x1B95B8u) {
        ctx->pc = 0x1B95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95B4u;
        // 0x1b95b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B95BCu;
        goto label_1b95bc;
    }
    ctx->pc = 0x1B95B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B95BCu);
        ctx->pc = 0x1B95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95B4u;
        // 0x1b95b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B95B4u, 0x1B95BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B95BCu;
label_1b95bc:
    // 0x1b95bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b95bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b95c0:
    // 0x1b95c0: 0x0  nop
    ctx->pc = 0x1b95c0u;
    // NOP
label_1b95c4:
    // 0x1b95c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b95c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b95c8:
    // 0x1b95c8: 0x0  nop
    ctx->pc = 0x1b95c8u;
    // NOP
label_1b95cc:
    // 0x1b95cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1b95d0:
    if (ctx->pc == 0x1B95D0u) {
        ctx->pc = 0x1B95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95CCu;
        // 0x1b95d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B95D4u;
        goto label_1b95d4;
    }
    ctx->pc = 0x1B95CCu;
    {
        const bool branch_taken_0x1b95cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95CCu;
        // 0x1b95d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95cc) {
            ctx->pc = 0x1B95D8u;
            goto label_1b95d8;
        }
    }
    ctx->pc = 0x1B95D4u;
label_1b95d4:
    // 0x1b95d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b95d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b95d8:
    // 0x1b95d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1b95dc:
    // 0x1b95dc: 0x40f809  jalr        $v0
label_1b95e0:
    if (ctx->pc == 0x1B95E0u) {
        ctx->pc = 0x1B95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95DCu;
        // 0x1b95e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B95E4u;
        goto label_1b95e4;
    }
    ctx->pc = 0x1B95DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B95E4u);
        ctx->pc = 0x1B95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95DCu;
        // 0x1b95e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B95DCu, 0x1B95E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B95E4u;
label_1b95e4:
    // 0x1b95e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b95e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b95e8:
    // 0x1b95e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b95e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b95ec:
    // 0x1b95ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b95ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b95f0:
    // 0x1b95f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b95f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b95f4:
    // 0x1b95f4: 0x3e00008  jr          $ra
label_1b95f8:
    if (ctx->pc == 0x1B95F8u) {
        ctx->pc = 0x1B95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95F4u;
        // 0x1b95f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B95FCu;
        goto label_1b95fc;
    }
    ctx->pc = 0x1B95F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95F4u;
        // 0x1b95f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B95F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B95FCu;
label_1b95fc:
    // 0x1b95fc: 0x0  nop
    ctx->pc = 0x1b95fcu;
    // NOP
    ctx->pc = 0x1b9600u;
}
