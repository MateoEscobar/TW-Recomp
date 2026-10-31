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

// Function: sub_0018A5F0
// Address: 0x18a5f0 - 0x18a720
void sub_0018A5F0_0x18a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A5F0_0x18a5f0");
#endif

    switch (ctx->pc) {
        case 0x18a5f0u: goto label_18a5f0;
        case 0x18a5f4u: goto label_18a5f4;
        case 0x18a5f8u: goto label_18a5f8;
        case 0x18a5fcu: goto label_18a5fc;
        case 0x18a600u: goto label_18a600;
        case 0x18a604u: goto label_18a604;
        case 0x18a608u: goto label_18a608;
        case 0x18a60cu: goto label_18a60c;
        case 0x18a610u: goto label_18a610;
        case 0x18a614u: goto label_18a614;
        case 0x18a618u: goto label_18a618;
        case 0x18a61cu: goto label_18a61c;
        case 0x18a620u: goto label_18a620;
        case 0x18a624u: goto label_18a624;
        case 0x18a628u: goto label_18a628;
        case 0x18a62cu: goto label_18a62c;
        case 0x18a630u: goto label_18a630;
        case 0x18a634u: goto label_18a634;
        case 0x18a638u: goto label_18a638;
        case 0x18a63cu: goto label_18a63c;
        case 0x18a640u: goto label_18a640;
        case 0x18a644u: goto label_18a644;
        case 0x18a648u: goto label_18a648;
        case 0x18a64cu: goto label_18a64c;
        case 0x18a650u: goto label_18a650;
        case 0x18a654u: goto label_18a654;
        case 0x18a658u: goto label_18a658;
        case 0x18a65cu: goto label_18a65c;
        case 0x18a660u: goto label_18a660;
        case 0x18a664u: goto label_18a664;
        case 0x18a668u: goto label_18a668;
        case 0x18a66cu: goto label_18a66c;
        case 0x18a670u: goto label_18a670;
        case 0x18a674u: goto label_18a674;
        case 0x18a678u: goto label_18a678;
        case 0x18a67cu: goto label_18a67c;
        case 0x18a680u: goto label_18a680;
        case 0x18a684u: goto label_18a684;
        case 0x18a688u: goto label_18a688;
        case 0x18a68cu: goto label_18a68c;
        case 0x18a690u: goto label_18a690;
        case 0x18a694u: goto label_18a694;
        case 0x18a698u: goto label_18a698;
        case 0x18a69cu: goto label_18a69c;
        case 0x18a6a0u: goto label_18a6a0;
        case 0x18a6a4u: goto label_18a6a4;
        case 0x18a6a8u: goto label_18a6a8;
        case 0x18a6acu: goto label_18a6ac;
        case 0x18a6b0u: goto label_18a6b0;
        case 0x18a6b4u: goto label_18a6b4;
        case 0x18a6b8u: goto label_18a6b8;
        case 0x18a6bcu: goto label_18a6bc;
        case 0x18a6c0u: goto label_18a6c0;
        case 0x18a6c4u: goto label_18a6c4;
        case 0x18a6c8u: goto label_18a6c8;
        case 0x18a6ccu: goto label_18a6cc;
        case 0x18a6d0u: goto label_18a6d0;
        case 0x18a6d4u: goto label_18a6d4;
        case 0x18a6d8u: goto label_18a6d8;
        case 0x18a6dcu: goto label_18a6dc;
        case 0x18a6e0u: goto label_18a6e0;
        case 0x18a6e4u: goto label_18a6e4;
        case 0x18a6e8u: goto label_18a6e8;
        case 0x18a6ecu: goto label_18a6ec;
        case 0x18a6f0u: goto label_18a6f0;
        case 0x18a6f4u: goto label_18a6f4;
        case 0x18a6f8u: goto label_18a6f8;
        case 0x18a6fcu: goto label_18a6fc;
        case 0x18a700u: goto label_18a700;
        case 0x18a704u: goto label_18a704;
        case 0x18a708u: goto label_18a708;
        case 0x18a70cu: goto label_18a70c;
        case 0x18a710u: goto label_18a710;
        case 0x18a714u: goto label_18a714;
        case 0x18a718u: goto label_18a718;
        case 0x18a71cu: goto label_18a71c;
        default: break;
    }

    ctx->pc = 0x18a5f0u;

label_18a5f0:
    // 0x18a5f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18a5f4:
    // 0x18a5f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18a5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_18a5f8:
    // 0x18a5f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18a5fc:
    // 0x18a5fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18a600:
    // 0x18a600: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_18a604:
    // 0x18a604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18a604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a608:
    // 0x18a608: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x18a608u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_18a60c:
    // 0x18a60c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18a60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18a610:
    // 0x18a610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18a614:
    // 0x18a614: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x18a614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_18a618:
    // 0x18a618: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x18a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_18a61c:
    // 0x18a61c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_18a620:
    if (ctx->pc == 0x18A620u) {
        ctx->pc = 0x18A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A61Cu;
        // 0x18a620: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A624u;
        goto label_18a624;
    }
    ctx->pc = 0x18A61Cu;
    {
        const bool branch_taken_0x18a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A61Cu;
        // 0x18a620: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a61c) {
            ctx->pc = 0x18A6FCu;
            goto label_18a6fc;
        }
    }
    ctx->pc = 0x18A624u;
label_18a624:
    // 0x18a624: 0x5240002a  beql        $s2, $zero, . + 4 + (0x2A << 2)
label_18a628:
    if (ctx->pc == 0x18A628u) {
        ctx->pc = 0x18A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A624u;
        // 0x18a628: 0xc6200bdc  lwc1        $f0, 0xBDC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A62Cu;
        goto label_18a62c;
    }
    ctx->pc = 0x18A624u;
    {
        const bool branch_taken_0x18a624 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a624) {
            ctx->pc = 0x18A628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A624u;
            // 0x18a628: 0xc6200bdc  lwc1        $f0, 0xBDC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A6D0u;
            goto label_18a6d0;
        }
    }
    ctx->pc = 0x18A62Cu;
label_18a62c:
    // 0x18a62c: 0xc047e6c  jal         func_11F9B0
label_18a630:
    if (ctx->pc == 0x18A630u) {
        ctx->pc = 0x18A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A62Cu;
        // 0x18a630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A634u;
        goto label_18a634;
    }
    ctx->pc = 0x18A62Cu;
    SET_GPR_U32(ctx, 31, 0x18A634u);
    ctx->pc = 0x18A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A62Cu;
    // 0x18a630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x18A62Cu, 0x18A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A634u;
label_18a634:
    // 0x18a634: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_18a638:
    if (ctx->pc == 0x18A638u) {
        ctx->pc = 0x18A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A634u;
        // 0x18a638: 0x9202010f  lbu         $v0, 0x10F($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 271)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A63Cu;
        goto label_18a63c;
    }
    ctx->pc = 0x18A634u;
    {
        const bool branch_taken_0x18a634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a634) {
            ctx->pc = 0x18A638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A634u;
            // 0x18a638: 0x9202010f  lbu         $v0, 0x10F($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 271)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A68Cu;
            goto label_18a68c;
        }
    }
    ctx->pc = 0x18A63Cu;
label_18a63c:
    // 0x18a63c: 0xc047e6c  jal         func_11F9B0
label_18a640:
    if (ctx->pc == 0x18A640u) {
        ctx->pc = 0x18A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A63Cu;
        // 0x18a640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A644u;
        goto label_18a644;
    }
    ctx->pc = 0x18A63Cu;
    SET_GPR_U32(ctx, 31, 0x18A644u);
    ctx->pc = 0x18A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A63Cu;
    // 0x18a640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x18A63Cu, 0x18A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A644u;
label_18a644:
    // 0x18a644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18a648:
    // 0x18a648: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x18a648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_18a64c:
    // 0x18a64c: 0x8c650214  lw          $a1, 0x214($v1)
    ctx->pc = 0x18a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_18a650:
    // 0x18a650: 0xa0f809  jalr        $a1
label_18a654:
    if (ctx->pc == 0x18A654u) {
        ctx->pc = 0x18A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A650u;
        // 0x18a654: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A658u;
        goto label_18a658;
    }
    ctx->pc = 0x18A650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x18A658u);
        ctx->pc = 0x18A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A650u;
        // 0x18a654: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A650u, 0x18A658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A658u;
label_18a658:
    // 0x18a658: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x18a658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_18a65c:
    // 0x18a65c: 0xc060216  jal         func_180858
label_18a660:
    if (ctx->pc == 0x18A660u) {
        ctx->pc = 0x18A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A65Cu;
        // 0x18a660: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A664u;
        goto label_18a664;
    }
    ctx->pc = 0x18A65Cu;
    SET_GPR_U32(ctx, 31, 0x18A664u);
    ctx->pc = 0x18A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A65Cu;
    // 0x18a660: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x180858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180858u, 0x18A65Cu, 0x18A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A664u;
label_18a664:
    // 0x18a664: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18a664u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_18a668:
    // 0x18a668: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x18a668u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_18a66c:
    // 0x18a66c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x18a66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a670:
    // 0x18a670: 0x0  nop
    ctx->pc = 0x18a670u;
    // NOP
label_18a674:
    // 0x18a674: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18a678:
    if (ctx->pc == 0x18A678u) {
        ctx->pc = 0x18A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A674u;
        // 0x18a678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A67Cu;
        goto label_18a67c;
    }
    ctx->pc = 0x18A674u;
    {
        const bool branch_taken_0x18a674 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A674u;
        // 0x18a678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a674) {
            ctx->pc = 0x18A680u;
            goto label_18a680;
        }
    }
    ctx->pc = 0x18A67Cu;
label_18a67c:
    // 0x18a67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a680:
    // 0x18a680: 0xc05fe7a  jal         func_17F9E8
label_18a684:
    if (ctx->pc == 0x18A684u) {
        ctx->pc = 0x18A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A680u;
        // 0x18a684: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A688u;
        goto label_18a688;
    }
    ctx->pc = 0x18A680u;
    SET_GPR_U32(ctx, 31, 0x18A688u);
    ctx->pc = 0x18A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A680u;
    // 0x18a684: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9E8u, 0x18A680u, 0x18A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A688u;
label_18a688:
    // 0x18a688: 0x9202010f  lbu         $v0, 0x10F($s0)
    ctx->pc = 0x18a688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 271)));
label_18a68c:
    // 0x18a68c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_18a690:
    if (ctx->pc == 0x18A690u) {
        ctx->pc = 0x18A694u;
        goto label_18a694;
    }
    ctx->pc = 0x18A68Cu;
    {
        const bool branch_taken_0x18a68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a68c) {
            ctx->pc = 0x18A6C4u;
            goto label_18a6c4;
        }
    }
    ctx->pc = 0x18A694u;
label_18a694:
    // 0x18a694: 0xc6200bd8  lwc1        $f0, 0xBD8($s1)
    ctx->pc = 0x18a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a698:
    // 0x18a698: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x18a698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a69c:
    // 0x18a69c: 0x0  nop
    ctx->pc = 0x18a69cu;
    // NOP
label_18a6a0:
    // 0x18a6a0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_18a6a4:
    if (ctx->pc == 0x18A6A4u) {
        ctx->pc = 0x18A6A8u;
        goto label_18a6a8;
    }
    ctx->pc = 0x18A6A0u;
    {
        const bool branch_taken_0x18a6a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a6a0) {
            ctx->pc = 0x18A6C4u;
            goto label_18a6c4;
        }
    }
    ctx->pc = 0x18A6A8u;
label_18a6a8:
    // 0x18a6a8: 0xe6350bd8  swc1        $f21, 0xBD8($s1)
    ctx->pc = 0x18a6a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3032), bits); }
label_18a6ac:
    // 0x18a6ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a6b0:
    // 0x18a6b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x18a6b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_18a6b4:
    // 0x18a6b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18a6b8:
    // 0x18a6b8: 0x40f809  jalr        $v0
label_18a6bc:
    if (ctx->pc == 0x18A6BCu) {
        ctx->pc = 0x18A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6B8u;
        // 0x18a6bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A6C0u;
        goto label_18a6c0;
    }
    ctx->pc = 0x18A6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A6C0u);
        ctx->pc = 0x18A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6B8u;
        // 0x18a6bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A6B8u, 0x18A6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A6C0u;
label_18a6c0:
    // 0x18a6c0: 0xae220bd0  sw          $v0, 0xBD0($s1)
    ctx->pc = 0x18a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3024), GPR_U32(ctx, 2));
label_18a6c4:
    // 0x18a6c4: 0x5640000e  bnel        $s2, $zero, . + 4 + (0xE << 2)
label_18a6c8:
    if (ctx->pc == 0x18A6C8u) {
        ctx->pc = 0x18A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6C4u;
        // 0x18a6c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A6CCu;
        goto label_18a6cc;
    }
    ctx->pc = 0x18A6C4u;
    {
        const bool branch_taken_0x18a6c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a6c4) {
            ctx->pc = 0x18A6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A6C4u;
            // 0x18a6c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A700u;
            goto label_18a700;
        }
    }
    ctx->pc = 0x18A6CCu;
label_18a6cc:
    // 0x18a6cc: 0xc6200bdc  lwc1        $f0, 0xBDC($s1)
    ctx->pc = 0x18a6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a6d0:
    // 0x18a6d0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x18a6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a6d4:
    // 0x18a6d4: 0x0  nop
    ctx->pc = 0x18a6d4u;
    // NOP
label_18a6d8:
    // 0x18a6d8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_18a6dc:
    if (ctx->pc == 0x18A6DCu) {
        ctx->pc = 0x18A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6D8u;
        // 0x18a6dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A6E0u;
        goto label_18a6e0;
    }
    ctx->pc = 0x18A6D8u;
    {
        const bool branch_taken_0x18a6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a6d8) {
            ctx->pc = 0x18A6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A6D8u;
            // 0x18a6dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A700u;
            goto label_18a700;
        }
    }
    ctx->pc = 0x18A6E0u;
label_18a6e0:
    // 0x18a6e0: 0xe6350bdc  swc1        $f21, 0xBDC($s1)
    ctx->pc = 0x18a6e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3036), bits); }
label_18a6e4:
    // 0x18a6e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18a6e8:
    // 0x18a6e8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x18a6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_18a6ec:
    // 0x18a6ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x18a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18a6f0:
    // 0x18a6f0: 0x40f809  jalr        $v0
label_18a6f4:
    if (ctx->pc == 0x18A6F4u) {
        ctx->pc = 0x18A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6F0u;
        // 0x18a6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A6F8u;
        goto label_18a6f8;
    }
    ctx->pc = 0x18A6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A6F8u);
        ctx->pc = 0x18A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6F0u;
        // 0x18a6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A6F0u, 0x18A6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A6F8u;
label_18a6f8:
    // 0x18a6f8: 0xae220bd4  sw          $v0, 0xBD4($s1)
    ctx->pc = 0x18a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3028), GPR_U32(ctx, 2));
label_18a6fc:
    // 0x18a6fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18a6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18a700:
    // 0x18a700: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18a700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a704:
    // 0x18a704: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18a704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18a708:
    // 0x18a708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a70c:
    // 0x18a70c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x18a70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18a710:
    // 0x18a710: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x18a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18a714:
    // 0x18a714: 0x3e00008  jr          $ra
label_18a718:
    if (ctx->pc == 0x18A718u) {
        ctx->pc = 0x18A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A714u;
        // 0x18a718: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A71Cu;
        goto label_18a71c;
    }
    ctx->pc = 0x18A714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A714u;
        // 0x18a718: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A71Cu;
label_18a71c:
    // 0x18a71c: 0x0  nop
    ctx->pc = 0x18a71cu;
    // NOP
    ctx->pc = 0x18a720u;
}
