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

// Function: sub_0039A6B0
// Address: 0x39a6b0 - 0x39a7e0
void sub_0039A6B0_0x39a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A6B0_0x39a6b0");
#endif

    switch (ctx->pc) {
        case 0x39a6b0u: goto label_39a6b0;
        case 0x39a6b4u: goto label_39a6b4;
        case 0x39a6b8u: goto label_39a6b8;
        case 0x39a6bcu: goto label_39a6bc;
        case 0x39a6c0u: goto label_39a6c0;
        case 0x39a6c4u: goto label_39a6c4;
        case 0x39a6c8u: goto label_39a6c8;
        case 0x39a6ccu: goto label_39a6cc;
        case 0x39a6d0u: goto label_39a6d0;
        case 0x39a6d4u: goto label_39a6d4;
        case 0x39a6d8u: goto label_39a6d8;
        case 0x39a6dcu: goto label_39a6dc;
        case 0x39a6e0u: goto label_39a6e0;
        case 0x39a6e4u: goto label_39a6e4;
        case 0x39a6e8u: goto label_39a6e8;
        case 0x39a6ecu: goto label_39a6ec;
        case 0x39a6f0u: goto label_39a6f0;
        case 0x39a6f4u: goto label_39a6f4;
        case 0x39a6f8u: goto label_39a6f8;
        case 0x39a6fcu: goto label_39a6fc;
        case 0x39a700u: goto label_39a700;
        case 0x39a704u: goto label_39a704;
        case 0x39a708u: goto label_39a708;
        case 0x39a70cu: goto label_39a70c;
        case 0x39a710u: goto label_39a710;
        case 0x39a714u: goto label_39a714;
        case 0x39a718u: goto label_39a718;
        case 0x39a71cu: goto label_39a71c;
        case 0x39a720u: goto label_39a720;
        case 0x39a724u: goto label_39a724;
        case 0x39a728u: goto label_39a728;
        case 0x39a72cu: goto label_39a72c;
        case 0x39a730u: goto label_39a730;
        case 0x39a734u: goto label_39a734;
        case 0x39a738u: goto label_39a738;
        case 0x39a73cu: goto label_39a73c;
        case 0x39a740u: goto label_39a740;
        case 0x39a744u: goto label_39a744;
        case 0x39a748u: goto label_39a748;
        case 0x39a74cu: goto label_39a74c;
        case 0x39a750u: goto label_39a750;
        case 0x39a754u: goto label_39a754;
        case 0x39a758u: goto label_39a758;
        case 0x39a75cu: goto label_39a75c;
        case 0x39a760u: goto label_39a760;
        case 0x39a764u: goto label_39a764;
        case 0x39a768u: goto label_39a768;
        case 0x39a76cu: goto label_39a76c;
        case 0x39a770u: goto label_39a770;
        case 0x39a774u: goto label_39a774;
        case 0x39a778u: goto label_39a778;
        case 0x39a77cu: goto label_39a77c;
        case 0x39a780u: goto label_39a780;
        case 0x39a784u: goto label_39a784;
        case 0x39a788u: goto label_39a788;
        case 0x39a78cu: goto label_39a78c;
        case 0x39a790u: goto label_39a790;
        case 0x39a794u: goto label_39a794;
        case 0x39a798u: goto label_39a798;
        case 0x39a79cu: goto label_39a79c;
        case 0x39a7a0u: goto label_39a7a0;
        case 0x39a7a4u: goto label_39a7a4;
        case 0x39a7a8u: goto label_39a7a8;
        case 0x39a7acu: goto label_39a7ac;
        case 0x39a7b0u: goto label_39a7b0;
        case 0x39a7b4u: goto label_39a7b4;
        case 0x39a7b8u: goto label_39a7b8;
        case 0x39a7bcu: goto label_39a7bc;
        case 0x39a7c0u: goto label_39a7c0;
        case 0x39a7c4u: goto label_39a7c4;
        case 0x39a7c8u: goto label_39a7c8;
        case 0x39a7ccu: goto label_39a7cc;
        case 0x39a7d0u: goto label_39a7d0;
        case 0x39a7d4u: goto label_39a7d4;
        case 0x39a7d8u: goto label_39a7d8;
        case 0x39a7dcu: goto label_39a7dc;
        default: break;
    }

    ctx->pc = 0x39a6b0u;

label_39a6b0:
    // 0x39a6b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x39a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_39a6b4:
    // 0x39a6b4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x39a6b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_39a6b8:
    // 0x39a6b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x39a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_39a6bc:
    // 0x39a6bc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x39a6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_39a6c0:
    // 0x39a6c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39a6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a6c4:
    // 0x39a6c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x39a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_39a6c8:
    // 0x39a6c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39a6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a6cc:
    // 0x39a6cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39a6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39a6d0:
    // 0x39a6d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39a6d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a6d4:
    // 0x39a6d4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x39a6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_39a6d8:
    // 0x39a6d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39a6d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39a6dc:
    // 0x39a6dc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x39a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_39a6e0:
    // 0x39a6e0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x39a6e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_39a6e4:
    // 0x39a6e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x39a6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39a6e8:
    // 0x39a6e8: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x39a6e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
label_39a6ec:
    // 0x39a6ec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x39a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_39a6f0:
    // 0x39a6f0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_39a6f4:
    if (ctx->pc == 0x39A6F4u) {
        ctx->pc = 0x39A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6F0u;
        // 0x39a6f4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A6F8u;
        goto label_39a6f8;
    }
    ctx->pc = 0x39A6F0u;
    {
        const bool branch_taken_0x39a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6F0u;
        // 0x39a6f4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a6f0) {
            ctx->pc = 0x39A770u;
            goto label_39a770;
        }
    }
    ctx->pc = 0x39A6F8u;
label_39a6f8:
    // 0x39a6f8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x39a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_39a6fc:
    // 0x39a6fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39a700:
    // 0x39a700: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39a700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39a704:
    // 0x39a704: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_39a708:
    if (ctx->pc == 0x39A708u) {
        ctx->pc = 0x39A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A704u;
        // 0x39a708: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A70Cu;
        goto label_39a70c;
    }
    ctx->pc = 0x39A704u;
    {
        const bool branch_taken_0x39a704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a704) {
            ctx->pc = 0x39A708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A704u;
            // 0x39a708: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A770u;
            goto label_39a770;
        }
    }
    ctx->pc = 0x39A70Cu;
label_39a70c:
    // 0x39a70c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39a710:
    // 0x39a710: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39a710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39a714:
    // 0x39a714: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39a718:
    // 0x39a718: 0x40f809  jalr        $v0
label_39a71c:
    if (ctx->pc == 0x39A71Cu) {
        ctx->pc = 0x39A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A718u;
        // 0x39a71c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A720u;
        goto label_39a720;
    }
    ctx->pc = 0x39A718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A720u);
        ctx->pc = 0x39A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A718u;
        // 0x39a71c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A718u, 0x39A720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A720u;
label_39a720:
    // 0x39a720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39a720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a724:
    // 0x39a724: 0xc10d74c  jal         func_435D30
label_39a728:
    if (ctx->pc == 0x39A728u) {
        ctx->pc = 0x39A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A724u;
        // 0x39a728: 0x26a51250  addiu       $a1, $s5, 0x1250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A72Cu;
        goto label_39a72c;
    }
    ctx->pc = 0x39A724u;
    SET_GPR_U32(ctx, 31, 0x39A72Cu);
    ctx->pc = 0x39A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A724u;
    // 0x39a728: 0x26a51250  addiu       $a1, $s5, 0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x39A724u, 0x39A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A72Cu;
label_39a72c:
    // 0x39a72c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_39a730:
    if (ctx->pc == 0x39A730u) {
        ctx->pc = 0x39A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A72Cu;
        // 0x39a730: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A734u;
        goto label_39a734;
    }
    ctx->pc = 0x39A72Cu;
    {
        const bool branch_taken_0x39a72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a72c) {
            ctx->pc = 0x39A730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A72Cu;
            // 0x39a730: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A770u;
            goto label_39a770;
        }
    }
    ctx->pc = 0x39A734u;
label_39a734:
    // 0x39a734: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39a738:
    // 0x39a738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39a738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39a73c:
    // 0x39a73c: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x39a73cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_39a740:
    // 0x39a740: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x39a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_39a744:
    // 0x39a744: 0x60f809  jalr        $v1
label_39a748:
    if (ctx->pc == 0x39A748u) {
        ctx->pc = 0x39A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A744u;
        // 0x39a748: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A74Cu;
        goto label_39a74c;
    }
    ctx->pc = 0x39A744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39A74Cu);
        ctx->pc = 0x39A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A744u;
        // 0x39a748: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A744u, 0x39A74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A74Cu;
label_39a74c:
    // 0x39a74c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39a750:
    // 0x39a750: 0xc0cdb38  jal         func_336CE0
label_39a754:
    if (ctx->pc == 0x39A754u) {
        ctx->pc = 0x39A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A750u;
        // 0x39a754: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A758u;
        goto label_39a758;
    }
    ctx->pc = 0x39A750u;
    SET_GPR_U32(ctx, 31, 0x39A758u);
    ctx->pc = 0x39A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A750u;
    // 0x39a754: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x39A750u, 0x39A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A758u;
label_39a758:
    // 0x39a758: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x39a758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39a75c:
    // 0x39a75c: 0x0  nop
    ctx->pc = 0x39a75cu;
    // NOP
label_39a760:
    // 0x39a760: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_39a764:
    if (ctx->pc == 0x39A764u) {
        ctx->pc = 0x39A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A760u;
        // 0x39a764: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A768u;
        goto label_39a768;
    }
    ctx->pc = 0x39A760u;
    {
        const bool branch_taken_0x39a760 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A760u;
        // 0x39a764: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a760) {
            ctx->pc = 0x39A770u;
            goto label_39a770;
        }
    }
    ctx->pc = 0x39A768u;
label_39a768:
    // 0x39a768: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x39a768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a76c:
    // 0x39a76c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39a76cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39a770:
    // 0x39a770: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x39a770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39a774:
    // 0x39a774: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x39a774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_39a778:
    // 0x39a778: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x39a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39a77c:
    // 0x39a77c: 0x40f809  jalr        $v0
label_39a780:
    if (ctx->pc == 0x39A780u) {
        ctx->pc = 0x39A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A77Cu;
        // 0x39a780: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A784u;
        goto label_39a784;
    }
    ctx->pc = 0x39A77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A784u);
        ctx->pc = 0x39A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A77Cu;
        // 0x39a780: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A77Cu, 0x39A784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A784u;
label_39a784:
    // 0x39a784: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x39a784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39a788:
    // 0x39a788: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_39a78c:
    if (ctx->pc == 0x39A78Cu) {
        ctx->pc = 0x39A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A788u;
        // 0x39a78c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A790u;
        goto label_39a790;
    }
    ctx->pc = 0x39A788u;
    {
        const bool branch_taken_0x39a788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a788) {
            ctx->pc = 0x39A78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A788u;
            // 0x39a78c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a6f8;
        }
    }
    ctx->pc = 0x39A790u;
label_39a790:
    // 0x39a790: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
label_39a794:
    if (ctx->pc == 0x39A794u) {
        ctx->pc = 0x39A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A790u;
        // 0x39a794: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A798u;
        goto label_39a798;
    }
    ctx->pc = 0x39A790u;
    {
        const bool branch_taken_0x39a790 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a790) {
            ctx->pc = 0x39A794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A790u;
            // 0x39a794: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A7A4u;
            goto label_39a7a4;
        }
    }
    ctx->pc = 0x39A798u;
label_39a798:
    // 0x39a798: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39a798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39a79c:
    // 0x39a79c: 0x10000005  b           . + 4 + (0x5 << 2)
label_39a7a0:
    if (ctx->pc == 0x39A7A0u) {
        ctx->pc = 0x39A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A79Cu;
        // 0x39a7a0: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7A4u;
        goto label_39a7a4;
    }
    ctx->pc = 0x39A79Cu;
    {
        const bool branch_taken_0x39a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A79Cu;
        // 0x39a7a0: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a79c) {
            ctx->pc = 0x39A7B4u;
            goto label_39a7b4;
        }
    }
    ctx->pc = 0x39A7A4u;
label_39a7a4:
    // 0x39a7a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39a7a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_39a7a8:
    // 0x39a7a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39a7ac:
    // 0x39a7ac: 0x40f809  jalr        $v0
label_39a7b0:
    if (ctx->pc == 0x39A7B0u) {
        ctx->pc = 0x39A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7ACu;
        // 0x39a7b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7B4u;
        goto label_39a7b4;
    }
    ctx->pc = 0x39A7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A7B4u);
        ctx->pc = 0x39A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7ACu;
        // 0x39a7b0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A7ACu, 0x39A7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A7B4u;
label_39a7b4:
    // 0x39a7b4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x39a7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39a7b8:
    // 0x39a7b8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x39a7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39a7bc:
    // 0x39a7bc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x39a7bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39a7c0:
    // 0x39a7c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x39a7c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39a7c4:
    // 0x39a7c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39a7c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39a7c8:
    // 0x39a7c8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x39a7c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a7cc:
    // 0x39a7cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39a7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39a7d0:
    // 0x39a7d0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x39a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39a7d4:
    // 0x39a7d4: 0x3e00008  jr          $ra
label_39a7d8:
    if (ctx->pc == 0x39A7D8u) {
        ctx->pc = 0x39A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7D4u;
        // 0x39a7d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7DCu;
        goto label_39a7dc;
    }
    ctx->pc = 0x39A7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7D4u;
        // 0x39a7d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A7DCu;
label_39a7dc:
    // 0x39a7dc: 0x0  nop
    ctx->pc = 0x39a7dcu;
    // NOP
    ctx->pc = 0x39a7e0u;
}
