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

// Function: sub_003ED718
// Address: 0x3ed718 - 0x3ed7b8
void sub_003ED718_0x3ed718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED718_0x3ed718");
#endif

    switch (ctx->pc) {
        case 0x3ed718u: goto label_3ed718;
        case 0x3ed71cu: goto label_3ed71c;
        case 0x3ed720u: goto label_3ed720;
        case 0x3ed724u: goto label_3ed724;
        case 0x3ed728u: goto label_3ed728;
        case 0x3ed72cu: goto label_3ed72c;
        case 0x3ed730u: goto label_3ed730;
        case 0x3ed734u: goto label_3ed734;
        case 0x3ed738u: goto label_3ed738;
        case 0x3ed73cu: goto label_3ed73c;
        case 0x3ed740u: goto label_3ed740;
        case 0x3ed744u: goto label_3ed744;
        case 0x3ed748u: goto label_3ed748;
        case 0x3ed74cu: goto label_3ed74c;
        case 0x3ed750u: goto label_3ed750;
        case 0x3ed754u: goto label_3ed754;
        case 0x3ed758u: goto label_3ed758;
        case 0x3ed75cu: goto label_3ed75c;
        case 0x3ed760u: goto label_3ed760;
        case 0x3ed764u: goto label_3ed764;
        case 0x3ed768u: goto label_3ed768;
        case 0x3ed76cu: goto label_3ed76c;
        case 0x3ed770u: goto label_3ed770;
        case 0x3ed774u: goto label_3ed774;
        case 0x3ed778u: goto label_3ed778;
        case 0x3ed77cu: goto label_3ed77c;
        case 0x3ed780u: goto label_3ed780;
        case 0x3ed784u: goto label_3ed784;
        case 0x3ed788u: goto label_3ed788;
        case 0x3ed78cu: goto label_3ed78c;
        case 0x3ed790u: goto label_3ed790;
        case 0x3ed794u: goto label_3ed794;
        case 0x3ed798u: goto label_3ed798;
        case 0x3ed79cu: goto label_3ed79c;
        case 0x3ed7a0u: goto label_3ed7a0;
        case 0x3ed7a4u: goto label_3ed7a4;
        case 0x3ed7a8u: goto label_3ed7a8;
        case 0x3ed7acu: goto label_3ed7ac;
        case 0x3ed7b0u: goto label_3ed7b0;
        case 0x3ed7b4u: goto label_3ed7b4;
        default: break;
    }

    ctx->pc = 0x3ed718u;

label_3ed718:
    // 0x3ed718: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ed718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ed71c:
    // 0x3ed71c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ed71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3ed720:
    // 0x3ed720: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ed720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3ed724:
    // 0x3ed724: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ed724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed728:
    // 0x3ed728: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ed728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ed72c:
    // 0x3ed72c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ed72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed730:
    // 0x3ed730: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ed730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ed734:
    // 0x3ed734: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ed734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ed738:
    // 0x3ed738: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ed738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ed73c:
    // 0x3ed73c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ed73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ed740:
    // 0x3ed740: 0x40f809  jalr        $v0
label_3ed744:
    if (ctx->pc == 0x3ED744u) {
        ctx->pc = 0x3ED744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED740u;
        // 0x3ed744: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED748u;
        goto label_3ed748;
    }
    ctx->pc = 0x3ED740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED748u);
        ctx->pc = 0x3ED744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED740u;
        // 0x3ed744: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED740u, 0x3ED748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED748u;
label_3ed748:
    // 0x3ed748: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ed748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed74c:
    // 0x3ed74c: 0xc0ea14c  jal         func_3A8530
label_3ed750:
    if (ctx->pc == 0x3ED750u) {
        ctx->pc = 0x3ED750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED74Cu;
        // 0x3ed750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED754u;
        goto label_3ed754;
    }
    ctx->pc = 0x3ED74Cu;
    SET_GPR_U32(ctx, 31, 0x3ED754u);
    ctx->pc = 0x3ED750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED74Cu;
    // 0x3ed750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3ED74Cu, 0x3ED754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED754u;
label_3ed754:
    // 0x3ed754: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ed754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ed758:
    // 0x3ed758: 0xc0ea12a  jal         func_3A84A8
label_3ed75c:
    if (ctx->pc == 0x3ED75Cu) {
        ctx->pc = 0x3ED75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED758u;
        // 0x3ed75c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED760u;
        goto label_3ed760;
    }
    ctx->pc = 0x3ED758u;
    SET_GPR_U32(ctx, 31, 0x3ED760u);
    ctx->pc = 0x3ED75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED758u;
    // 0x3ed75c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ED758u, 0x3ED760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED760u;
label_3ed760:
    // 0x3ed760: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ed760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed764:
    // 0x3ed764: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ed764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ed768:
    // 0x3ed768: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ed768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed76c:
    // 0x3ed76c: 0xc0ea12a  jal         func_3A84A8
label_3ed770:
    if (ctx->pc == 0x3ED770u) {
        ctx->pc = 0x3ED770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED76Cu;
        // 0x3ed770: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED774u;
        goto label_3ed774;
    }
    ctx->pc = 0x3ED76Cu;
    SET_GPR_U32(ctx, 31, 0x3ED774u);
    ctx->pc = 0x3ED770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED76Cu;
    // 0x3ed770: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3ED76Cu, 0x3ED774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED774u;
label_3ed774:
    // 0x3ed774: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3ed774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed778:
    // 0x3ed778: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ed778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ed77c:
    // 0x3ed77c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3ed77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3ed780:
    // 0x3ed780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ed780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed784:
    // 0x3ed784: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3ed784u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3ed788:
    // 0x3ed788: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ed788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ed78c:
    // 0x3ed78c: 0xc0e858c  jal         func_3A1630
label_3ed790:
    if (ctx->pc == 0x3ED790u) {
        ctx->pc = 0x3ED790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED78Cu;
        // 0x3ed790: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED794u;
        goto label_3ed794;
    }
    ctx->pc = 0x3ED78Cu;
    SET_GPR_U32(ctx, 31, 0x3ED794u);
    ctx->pc = 0x3ED790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED78Cu;
    // 0x3ed790: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ED78Cu, 0x3ED794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED794u;
label_3ed794:
    // 0x3ed794: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ed794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ed798:
    // 0x3ed798: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3ed798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3ed79c:
    // 0x3ed79c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3ed79cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3ed7a0:
    // 0x3ed7a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3ed7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ed7a4:
    // 0x3ed7a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3ed7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ed7a8:
    // 0x3ed7a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ed7a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ed7ac:
    // 0x3ed7ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ed7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ed7b0:
    // 0x3ed7b0: 0x3e00008  jr          $ra
label_3ed7b4:
    if (ctx->pc == 0x3ED7B4u) {
        ctx->pc = 0x3ED7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED7B0u;
        // 0x3ed7b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED7B8u;
        goto label_fallthrough_0x3ed7b0;
    }
    ctx->pc = 0x3ED7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED7B0u;
        // 0x3ed7b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ed7b0:
    ctx->pc = 0x3ED7B8u;
}
