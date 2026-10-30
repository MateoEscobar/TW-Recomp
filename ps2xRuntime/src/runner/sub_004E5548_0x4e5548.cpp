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

// Function: sub_004E5548
// Address: 0x4e5548 - 0x4e5670
void sub_004E5548_0x4e5548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5548_0x4e5548");
#endif

    switch (ctx->pc) {
        case 0x4e5580u: goto label_4e5580;
        case 0x4e5588u: goto label_4e5588;
        case 0x4e55a0u: goto label_4e55a0;
        case 0x4e55b0u: goto label_4e55b0;
        case 0x4e55d8u: goto label_4e55d8;
        case 0x4e55f0u: goto label_4e55f0;
        case 0x4e5600u: goto label_4e5600;
        default: break;
    }

    ctx->pc = 0x4e5548u;

    // 0x4e5548: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4e5548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4e554c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4e554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4e5550: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e5550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4e5554: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e5554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5558: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4e5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4e555c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e555cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5560: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4e5560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4e5564: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4e5564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5568: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4e5568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4e556c: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x4e556cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x4e5570: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4e5570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4e5574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e5574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e5578: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x4e5578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x4e557c: 0x0  nop
    ctx->pc = 0x4e557cu;
    // NOP
label_4e5580:
    // 0x4e5580: 0x2651fffc  addiu       $s1, $s2, -0x4
    ctx->pc = 0x4e5580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4e5584: 0x0  nop
    ctx->pc = 0x4e5584u;
    // NOP
label_4e5588:
    // 0x4e5588: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e5588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e558c: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e558cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e5590: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e5590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5594: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e5598: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5598u;
    SET_GPR_U32(ctx, 31, 0x4E55A0u);
    ctx->pc = 0x4E559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5598u;
    // 0x4e559c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5598u, 0x4E55A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E55A0u;
label_4e55a0:
    // 0x4e55a0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e55a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e55a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e55a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e55a8: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E55A8u;
    SET_GPR_U32(ctx, 31, 0x4E55B0u);
    ctx->pc = 0x4E55ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E55A8u;
    // 0x4e55ac: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E55A8u, 0x4E55B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E55B0u;
label_4e55b0:
    // 0x4e55b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e55b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e55b4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e55b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e55b8: 0x0  nop
    ctx->pc = 0x4e55b8u;
    // NOP
    // 0x4e55bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E55BCu;
    {
        const bool branch_taken_0x4e55bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E55BCu;
        // 0x4e55c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e55bc) {
            ctx->pc = 0x4E55C8u;
            goto label_4e55c8;
        }
    }
    ctx->pc = 0x4E55C4u;
    // 0x4e55c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e55c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e55c8:
    // 0x4e55c8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4E55C8u;
    {
        const bool branch_taken_0x4e55c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e55c8) {
            ctx->pc = 0x4E55CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E55C8u;
            // 0x4e55cc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5588;
        }
    }
    ctx->pc = 0x4E55D0u;
    // 0x4e55d0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4e55d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e55d4: 0x0  nop
    ctx->pc = 0x4e55d4u;
    // NOP
label_4e55d8:
    // 0x4e55d8: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e55d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e55dc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e55dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e55e0: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e55e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e55e4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x4e55e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e55e8: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E55E8u;
    SET_GPR_U32(ctx, 31, 0x4E55F0u);
    ctx->pc = 0x4E55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E55E8u;
    // 0x4e55ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E55E8u, 0x4E55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E55F0u;
label_4e55f0:
    // 0x4e55f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e55f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e55f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e55f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e55f8: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E55F8u;
    SET_GPR_U32(ctx, 31, 0x4E5600u);
    ctx->pc = 0x4E55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E55F8u;
    // 0x4e55fc: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E55F8u, 0x4E5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5600u;
label_4e5600:
    // 0x4e5600: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e5600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e5604: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e5604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e5608: 0x0  nop
    ctx->pc = 0x4e5608u;
    // NOP
    // 0x4e560c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E560Cu;
    {
        const bool branch_taken_0x4e560c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E560Cu;
        // 0x4e5610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e560c) {
            ctx->pc = 0x4E5618u;
            goto label_4e5618;
        }
    }
    ctx->pc = 0x4E5614u;
    // 0x4e5614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e5614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5618:
    // 0x4e5618: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4E5618u;
    {
        const bool branch_taken_0x4e5618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e5618) {
            ctx->pc = 0x4E561Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5618u;
            // 0x4e561c: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E55D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e55d8;
        }
    }
    ctx->pc = 0x4E5620u;
    // 0x4e5620: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x4e5620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4e5624: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4E5624u;
    {
        const bool branch_taken_0x4e5624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5624) {
            ctx->pc = 0x4E5628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5624u;
            // 0x4e5628: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5644u;
            goto label_4e5644;
        }
    }
    ctx->pc = 0x4E562Cu;
    // 0x4e562c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5630: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4e5630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5634: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e5634u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e5638: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e5638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e563c: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x4E563Cu;
    {
        const bool branch_taken_0x4e563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E563Cu;
        // 0x4e5640: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e563c) {
            ctx->pc = 0x4E5580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5580;
        }
    }
    ctx->pc = 0x4E5644u;
label_4e5644:
    // 0x4e5644: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4e5644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e5648: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4e5648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e564c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4e564cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5650: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e5650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5654: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4e5654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5658: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4e5658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e565c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e565cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5660: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x4e5660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e5664: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5664u;
        // 0x4e5668: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E566Cu;
    // 0x4e566c: 0x0  nop
    ctx->pc = 0x4e566cu;
    // NOP
    ctx->pc = 0x4e5670u;
}
