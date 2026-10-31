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

// Function: sub_0038E5F8
// Address: 0x38e5f8 - 0x38e6c0
void sub_0038E5F8_0x38e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E5F8_0x38e5f8");
#endif

    switch (ctx->pc) {
        case 0x38e5f8u: goto label_38e5f8;
        case 0x38e5fcu: goto label_38e5fc;
        case 0x38e600u: goto label_38e600;
        case 0x38e604u: goto label_38e604;
        case 0x38e608u: goto label_38e608;
        case 0x38e60cu: goto label_38e60c;
        case 0x38e610u: goto label_38e610;
        case 0x38e614u: goto label_38e614;
        case 0x38e618u: goto label_38e618;
        case 0x38e61cu: goto label_38e61c;
        case 0x38e620u: goto label_38e620;
        case 0x38e624u: goto label_38e624;
        case 0x38e628u: goto label_38e628;
        case 0x38e62cu: goto label_38e62c;
        case 0x38e630u: goto label_38e630;
        case 0x38e634u: goto label_38e634;
        case 0x38e638u: goto label_38e638;
        case 0x38e63cu: goto label_38e63c;
        case 0x38e640u: goto label_38e640;
        case 0x38e644u: goto label_38e644;
        case 0x38e648u: goto label_38e648;
        case 0x38e64cu: goto label_38e64c;
        case 0x38e650u: goto label_38e650;
        case 0x38e654u: goto label_38e654;
        case 0x38e658u: goto label_38e658;
        case 0x38e65cu: goto label_38e65c;
        case 0x38e660u: goto label_38e660;
        case 0x38e664u: goto label_38e664;
        case 0x38e668u: goto label_38e668;
        case 0x38e66cu: goto label_38e66c;
        case 0x38e670u: goto label_38e670;
        case 0x38e674u: goto label_38e674;
        case 0x38e678u: goto label_38e678;
        case 0x38e67cu: goto label_38e67c;
        case 0x38e680u: goto label_38e680;
        case 0x38e684u: goto label_38e684;
        case 0x38e688u: goto label_38e688;
        case 0x38e68cu: goto label_38e68c;
        case 0x38e690u: goto label_38e690;
        case 0x38e694u: goto label_38e694;
        case 0x38e698u: goto label_38e698;
        case 0x38e69cu: goto label_38e69c;
        case 0x38e6a0u: goto label_38e6a0;
        case 0x38e6a4u: goto label_38e6a4;
        case 0x38e6a8u: goto label_38e6a8;
        case 0x38e6acu: goto label_38e6ac;
        case 0x38e6b0u: goto label_38e6b0;
        case 0x38e6b4u: goto label_38e6b4;
        case 0x38e6b8u: goto label_38e6b8;
        case 0x38e6bcu: goto label_38e6bc;
        default: break;
    }

    ctx->pc = 0x38e5f8u;

label_38e5f8:
    // 0x38e5f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_38e5fc:
    // 0x38e5fc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x38e5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_38e600:
    // 0x38e600: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x38e600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_38e604:
    // 0x38e604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38e604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38e608:
    // 0x38e608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38e60c:
    // 0x38e60c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x38e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_38e610:
    // 0x38e610: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38e610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38e614:
    // 0x38e614: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38e614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_38e618:
    // 0x38e618: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38e618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e61c:
    // 0x38e61c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x38e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_38e620:
    // 0x38e620: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38e620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e624:
    // 0x38e624: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x38e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_38e628:
    // 0x38e628: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x38e628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e62c:
    // 0x38e62c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_38e630:
    // 0x38e630: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x38e630u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38e634:
    // 0x38e634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38e638:
    // 0x38e638: 0x1000000f  b           . + 4 + (0xF << 2)
label_38e63c:
    if (ctx->pc == 0x38E63Cu) {
        ctx->pc = 0x38E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E638u;
        // 0x38e63c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E640u;
        goto label_38e640;
    }
    ctx->pc = 0x38E638u;
    {
        const bool branch_taken_0x38e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E638u;
        // 0x38e63c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e638) {
            ctx->pc = 0x38E678u;
            goto label_38e678;
        }
    }
    ctx->pc = 0x38E640u;
label_38e640:
    // 0x38e640: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x38e640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_38e644:
    // 0x38e644: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38e644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38e648:
    // 0x38e648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38e648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38e64c:
    // 0x38e64c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x38e64cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38e650:
    // 0x38e650: 0xc0cdb38  jal         func_336CE0
label_38e654:
    if (ctx->pc == 0x38E654u) {
        ctx->pc = 0x38E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E650u;
        // 0x38e654: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E658u;
        goto label_38e658;
    }
    ctx->pc = 0x38E650u;
    SET_GPR_U32(ctx, 31, 0x38E658u);
    ctx->pc = 0x38E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E650u;
    // 0x38e654: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x38E650u, 0x38E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E658u;
label_38e658:
    // 0x38e658: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x38e658u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_38e65c:
    // 0x38e65c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x38e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38e660:
    // 0x38e660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38e660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38e664:
    // 0x38e664: 0x0  nop
    ctx->pc = 0x38e664u;
    // NOP
label_38e668:
    // 0x38e668: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_38e66c:
    if (ctx->pc == 0x38E66Cu) {
        ctx->pc = 0x38E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E668u;
        // 0x38e66c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E670u;
        goto label_38e670;
    }
    ctx->pc = 0x38E668u;
    {
        const bool branch_taken_0x38e668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E668u;
        // 0x38e66c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e668) {
            ctx->pc = 0x38E678u;
            goto label_38e678;
        }
    }
    ctx->pc = 0x38E670u;
label_38e670:
    // 0x38e670: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x38e670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_38e674:
    // 0x38e674: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x38e674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e678:
    // 0x38e678: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38e67c:
    // 0x38e67c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x38e67cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_38e680:
    // 0x38e680: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38e684:
    // 0x38e684: 0x40f809  jalr        $v0
label_38e688:
    if (ctx->pc == 0x38E688u) {
        ctx->pc = 0x38E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E684u;
        // 0x38e688: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E68Cu;
        goto label_38e68c;
    }
    ctx->pc = 0x38E684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E68Cu);
        ctx->pc = 0x38E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E684u;
        // 0x38e688: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E684u, 0x38E68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E68Cu;
label_38e68c:
    // 0x38e68c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x38e68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38e690:
    // 0x38e690: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_38e694:
    if (ctx->pc == 0x38E694u) {
        ctx->pc = 0x38E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E690u;
        // 0x38e694: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E698u;
        goto label_38e698;
    }
    ctx->pc = 0x38E690u;
    {
        const bool branch_taken_0x38e690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e690) {
            ctx->pc = 0x38E694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E690u;
            // 0x38e694: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e640;
        }
    }
    ctx->pc = 0x38E698u;
label_38e698:
    // 0x38e698: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x38e698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38e69c:
    // 0x38e69c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x38e69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38e6a0:
    // 0x38e6a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38e6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38e6a4:
    // 0x38e6a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x38e6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38e6a8:
    // 0x38e6a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38e6a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38e6ac:
    // 0x38e6ac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x38e6acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e6b0:
    // 0x38e6b0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x38e6b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e6b4:
    // 0x38e6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e6b8:
    // 0x38e6b8: 0x3e00008  jr          $ra
label_38e6bc:
    if (ctx->pc == 0x38E6BCu) {
        ctx->pc = 0x38E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6B8u;
        // 0x38e6bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6C0u;
        goto label_fallthrough_0x38e6b8;
    }
    ctx->pc = 0x38E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6B8u;
        // 0x38e6bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38e6b8:
    ctx->pc = 0x38E6C0u;
}
