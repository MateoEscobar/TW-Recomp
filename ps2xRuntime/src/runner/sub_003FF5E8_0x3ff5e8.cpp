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

// Function: sub_003FF5E8
// Address: 0x3ff5e8 - 0x3ff6c8
void sub_003FF5E8_0x3ff5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF5E8_0x3ff5e8");
#endif

    switch (ctx->pc) {
        case 0x3ff5e8u: goto label_3ff5e8;
        case 0x3ff5ecu: goto label_3ff5ec;
        case 0x3ff5f0u: goto label_3ff5f0;
        case 0x3ff5f4u: goto label_3ff5f4;
        case 0x3ff5f8u: goto label_3ff5f8;
        case 0x3ff5fcu: goto label_3ff5fc;
        case 0x3ff600u: goto label_3ff600;
        case 0x3ff604u: goto label_3ff604;
        case 0x3ff608u: goto label_3ff608;
        case 0x3ff60cu: goto label_3ff60c;
        case 0x3ff610u: goto label_3ff610;
        case 0x3ff614u: goto label_3ff614;
        case 0x3ff618u: goto label_3ff618;
        case 0x3ff61cu: goto label_3ff61c;
        case 0x3ff620u: goto label_3ff620;
        case 0x3ff624u: goto label_3ff624;
        case 0x3ff628u: goto label_3ff628;
        case 0x3ff62cu: goto label_3ff62c;
        case 0x3ff630u: goto label_3ff630;
        case 0x3ff634u: goto label_3ff634;
        case 0x3ff638u: goto label_3ff638;
        case 0x3ff63cu: goto label_3ff63c;
        case 0x3ff640u: goto label_3ff640;
        case 0x3ff644u: goto label_3ff644;
        case 0x3ff648u: goto label_3ff648;
        case 0x3ff64cu: goto label_3ff64c;
        case 0x3ff650u: goto label_3ff650;
        case 0x3ff654u: goto label_3ff654;
        case 0x3ff658u: goto label_3ff658;
        case 0x3ff65cu: goto label_3ff65c;
        case 0x3ff660u: goto label_3ff660;
        case 0x3ff664u: goto label_3ff664;
        case 0x3ff668u: goto label_3ff668;
        case 0x3ff66cu: goto label_3ff66c;
        case 0x3ff670u: goto label_3ff670;
        case 0x3ff674u: goto label_3ff674;
        case 0x3ff678u: goto label_3ff678;
        case 0x3ff67cu: goto label_3ff67c;
        case 0x3ff680u: goto label_3ff680;
        case 0x3ff684u: goto label_3ff684;
        case 0x3ff688u: goto label_3ff688;
        case 0x3ff68cu: goto label_3ff68c;
        case 0x3ff690u: goto label_3ff690;
        case 0x3ff694u: goto label_3ff694;
        case 0x3ff698u: goto label_3ff698;
        case 0x3ff69cu: goto label_3ff69c;
        case 0x3ff6a0u: goto label_3ff6a0;
        case 0x3ff6a4u: goto label_3ff6a4;
        case 0x3ff6a8u: goto label_3ff6a8;
        case 0x3ff6acu: goto label_3ff6ac;
        case 0x3ff6b0u: goto label_3ff6b0;
        case 0x3ff6b4u: goto label_3ff6b4;
        case 0x3ff6b8u: goto label_3ff6b8;
        case 0x3ff6bcu: goto label_3ff6bc;
        case 0x3ff6c0u: goto label_3ff6c0;
        case 0x3ff6c4u: goto label_3ff6c4;
        default: break;
    }

    ctx->pc = 0x3ff5e8u;

label_3ff5e8:
    // 0x3ff5e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ff5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ff5ec:
    // 0x3ff5ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ff5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ff5f0:
    // 0x3ff5f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ff5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ff5f4:
    // 0x3ff5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ff5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ff5f8:
    // 0x3ff5f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ff5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ff5fc:
    // 0x3ff5fc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ff5fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ff600:
    // 0x3ff600: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ff600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ff604:
    // 0x3ff604: 0x40f809  jalr        $v0
label_3ff608:
    if (ctx->pc == 0x3FF608u) {
        ctx->pc = 0x3FF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF604u;
        // 0x3ff608: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF60Cu;
        goto label_3ff60c;
    }
    ctx->pc = 0x3FF604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FF60Cu);
        ctx->pc = 0x3FF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF604u;
        // 0x3ff608: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF604u, 0x3FF60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FF60Cu;
label_3ff60c:
    // 0x3ff60c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3ff60cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ff610:
    // 0x3ff610: 0x3c03dcca  lui         $v1, 0xDCCA
    ctx->pc = 0x3ff610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56522 << 16));
label_3ff614:
    // 0x3ff614: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x3ff614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3ff618:
    // 0x3ff618: 0x3463ca34  ori         $v1, $v1, 0xCA34
    ctx->pc = 0x3ff618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51764);
label_3ff61c:
    // 0x3ff61c: 0x2407ff64  addiu       $a3, $zero, -0x9C
    ctx->pc = 0x3ff61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967140));
label_3ff620:
    // 0x3ff620: 0x3c026954  lui         $v0, 0x6954
    ctx->pc = 0x3ff620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26964 << 16));
label_3ff624:
    // 0x3ff624: 0x38c50001  xori        $a1, $a2, 0x1
    ctx->pc = 0x3ff624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_3ff628:
    // 0x3ff628: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3ff628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3ff62c:
    // 0x3ff62c: 0x65380a  movz        $a3, $v1, $a1
    ctx->pc = 0x3ff62cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_3ff630:
    // 0x3ff630: 0x34423574  ori         $v0, $v0, 0x3574
    ctx->pc = 0x3ff630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13684);
label_3ff634:
    // 0x3ff634: 0x38c50002  xori        $a1, $a2, 0x2
    ctx->pc = 0x3ff634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
label_3ff638:
    // 0x3ff638: 0x3c03bd59  lui         $v1, 0xBD59
    ctx->pc = 0x3ff638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48473 << 16));
label_3ff63c:
    // 0x3ff63c: 0x45380a  movz        $a3, $v0, $a1
    ctx->pc = 0x3ff63cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_3ff640:
    // 0x3ff640: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ff640u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ff644:
    // 0x3ff644: 0x0  nop
    ctx->pc = 0x3ff644u;
    // NOP
label_3ff648:
    // 0x3ff648: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ff648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ff64c:
    // 0x3ff64c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3ff64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3ff650:
    // 0x3ff650: 0x38c60003  xori        $a2, $a2, 0x3
    ctx->pc = 0x3ff650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
label_3ff654:
    // 0x3ff654: 0x34632e34  ori         $v1, $v1, 0x2E34
    ctx->pc = 0x3ff654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11828);
label_3ff658:
    // 0x3ff658: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ff658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ff65c:
    // 0x3ff65c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3ff65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3ff660:
    // 0x3ff660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ff660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ff664:
    // 0x3ff664: 0x66380a  movz        $a3, $v1, $a2
    ctx->pc = 0x3ff664u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_3ff668:
    // 0x3ff668: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ff668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3ff66c:
    // 0x3ff66c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3ff66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3ff670:
    // 0x3ff670: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3ff670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ff674:
    // 0x3ff674: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ff674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ff678:
    // 0x3ff678: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_3ff67c:
    if (ctx->pc == 0x3FF67Cu) {
        ctx->pc = 0x3FF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF678u;
        // 0x3ff67c: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF680u;
        goto label_3ff680;
    }
    ctx->pc = 0x3FF678u;
    {
        const bool branch_taken_0x3ff678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF678u;
        // 0x3ff67c: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff678) {
            ctx->pc = 0x3FF6B0u;
            goto label_3ff6b0;
        }
    }
    ctx->pc = 0x3FF680u;
label_3ff680:
    // 0x3ff680: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3ff680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3ff684:
    // 0x3ff684: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3ff684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ff688:
    // 0x3ff688: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff68c:
    // 0x3ff68c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ff68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ff690:
    // 0x3ff690: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3ff690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ff694:
    // 0x3ff694: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3ff694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3ff698:
    // 0x3ff698: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3ff698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3ff69c:
    // 0x3ff69c: 0xc50c0008  lwc1        $f12, 0x8($t0)
    ctx->pc = 0x3ff69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ff6a0:
    // 0x3ff6a0: 0xc0f15f6  jal         func_3C57D8
label_3ff6a4:
    if (ctx->pc == 0x3FF6A4u) {
        ctx->pc = 0x3FF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6A0u;
        // 0x3ff6a4: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF6A8u;
        goto label_3ff6a8;
    }
    ctx->pc = 0x3FF6A0u;
    SET_GPR_U32(ctx, 31, 0x3FF6A8u);
    ctx->pc = 0x3FF6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF6A0u;
    // 0x3ff6a4: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3FF6A0u, 0x3FF6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF6A8u;
label_3ff6a8:
    // 0x3ff6a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ff6ac:
    if (ctx->pc == 0x3FF6ACu) {
        ctx->pc = 0x3FF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6A8u;
        // 0x3ff6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF6B0u;
        goto label_3ff6b0;
    }
    ctx->pc = 0x3FF6A8u;
    {
        const bool branch_taken_0x3ff6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6A8u;
        // 0x3ff6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff6a8) {
            ctx->pc = 0x3FF6B4u;
            goto label_3ff6b4;
        }
    }
    ctx->pc = 0x3FF6B0u;
label_3ff6b0:
    // 0x3ff6b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ff6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ff6b4:
    // 0x3ff6b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ff6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ff6b8:
    // 0x3ff6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ff6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ff6bc:
    // 0x3ff6bc: 0x3e00008  jr          $ra
label_3ff6c0:
    if (ctx->pc == 0x3FF6C0u) {
        ctx->pc = 0x3FF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6BCu;
        // 0x3ff6c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF6C4u;
        goto label_3ff6c4;
    }
    ctx->pc = 0x3FF6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6BCu;
        // 0x3ff6c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FF6C4u;
label_3ff6c4:
    // 0x3ff6c4: 0x0  nop
    ctx->pc = 0x3ff6c4u;
    // NOP
    ctx->pc = 0x3ff6c8u;
}
