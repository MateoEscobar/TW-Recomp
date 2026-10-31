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

// Function: sub_002036D8
// Address: 0x2036d8 - 0x203788
void sub_002036D8_0x2036d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002036D8_0x2036d8");
#endif

    switch (ctx->pc) {
        case 0x2036d8u: goto label_2036d8;
        case 0x2036dcu: goto label_2036dc;
        case 0x2036e0u: goto label_2036e0;
        case 0x2036e4u: goto label_2036e4;
        case 0x2036e8u: goto label_2036e8;
        case 0x2036ecu: goto label_2036ec;
        case 0x2036f0u: goto label_2036f0;
        case 0x2036f4u: goto label_2036f4;
        case 0x2036f8u: goto label_2036f8;
        case 0x2036fcu: goto label_2036fc;
        case 0x203700u: goto label_203700;
        case 0x203704u: goto label_203704;
        case 0x203708u: goto label_203708;
        case 0x20370cu: goto label_20370c;
        case 0x203710u: goto label_203710;
        case 0x203714u: goto label_203714;
        case 0x203718u: goto label_203718;
        case 0x20371cu: goto label_20371c;
        case 0x203720u: goto label_203720;
        case 0x203724u: goto label_203724;
        case 0x203728u: goto label_203728;
        case 0x20372cu: goto label_20372c;
        case 0x203730u: goto label_203730;
        case 0x203734u: goto label_203734;
        case 0x203738u: goto label_203738;
        case 0x20373cu: goto label_20373c;
        case 0x203740u: goto label_203740;
        case 0x203744u: goto label_203744;
        case 0x203748u: goto label_203748;
        case 0x20374cu: goto label_20374c;
        case 0x203750u: goto label_203750;
        case 0x203754u: goto label_203754;
        case 0x203758u: goto label_203758;
        case 0x20375cu: goto label_20375c;
        case 0x203760u: goto label_203760;
        case 0x203764u: goto label_203764;
        case 0x203768u: goto label_203768;
        case 0x20376cu: goto label_20376c;
        case 0x203770u: goto label_203770;
        case 0x203774u: goto label_203774;
        case 0x203778u: goto label_203778;
        case 0x20377cu: goto label_20377c;
        case 0x203780u: goto label_203780;
        case 0x203784u: goto label_203784;
        default: break;
    }

    ctx->pc = 0x2036d8u;

label_2036d8:
    // 0x2036d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2036d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2036dc:
    // 0x2036dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2036dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2036e0:
    // 0x2036e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2036e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2036e4:
    // 0x2036e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2036e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2036e8:
    // 0x2036e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2036e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2036ec:
    // 0x2036ec: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2036ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2036f0:
    // 0x2036f0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2036f4:
    if (ctx->pc == 0x2036F4u) {
        ctx->pc = 0x2036F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F0u;
        // 0x2036f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036F8u;
        goto label_2036f8;
    }
    ctx->pc = 0x2036F0u;
    {
        const bool branch_taken_0x2036f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F0u;
        // 0x2036f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036f0) {
            ctx->pc = 0x203774u;
            goto label_203774;
        }
    }
    ctx->pc = 0x2036F8u;
label_2036f8:
    // 0x2036f8: 0xc073462  jal         func_1CD188
label_2036fc:
    if (ctx->pc == 0x2036FCu) {
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203700u;
        goto label_203700;
    }
    ctx->pc = 0x2036F8u;
    SET_GPR_U32(ctx, 31, 0x203700u);
    ctx->pc = 0x2036FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036F8u;
    // 0x2036fc: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x2036F8u, 0x203700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203700u;
label_203700:
    // 0x203700: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x203700u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_203704:
    // 0x203704: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x203704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_203708:
    // 0x203708: 0x261084a8  addiu       $s0, $s0, -0x7B58
    ctx->pc = 0x203708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935720));
label_20370c:
    // 0x20370c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x20370cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_203710:
    // 0x203710: 0xc139138  jal         func_4E44E0
label_203714:
    if (ctx->pc == 0x203714u) {
        ctx->pc = 0x203714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203710u;
        // 0x203714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203718u;
        goto label_203718;
    }
    ctx->pc = 0x203710u;
    SET_GPR_U32(ctx, 31, 0x203718u);
    ctx->pc = 0x203714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203710u;
    // 0x203714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x203710u, 0x203718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203718u;
label_203718:
    // 0x203718: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x203718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20371c:
    // 0x20371c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203720:
    // 0x203720: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x203720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_203724:
    // 0x203724: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x203724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_203728:
    // 0x203728: 0x60f809  jalr        $v1
label_20372c:
    if (ctx->pc == 0x20372Cu) {
        ctx->pc = 0x20372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203728u;
        // 0x20372c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203730u;
        goto label_203730;
    }
    ctx->pc = 0x203728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203730u);
        ctx->pc = 0x20372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203728u;
        // 0x20372c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203728u, 0x203730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203730u;
label_203730:
    // 0x203730: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x203730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_203734:
    // 0x203734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203738:
    // 0x203738: 0xc139fe8  jal         func_4E7FA0
label_20373c:
    if (ctx->pc == 0x20373Cu) {
        ctx->pc = 0x20373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203738u;
        // 0x20373c: 0x24060075  addiu       $a2, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203740u;
        goto label_203740;
    }
    ctx->pc = 0x203738u;
    SET_GPR_U32(ctx, 31, 0x203740u);
    ctx->pc = 0x20373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203738u;
    // 0x20373c: 0x24060075  addiu       $a2, $zero, 0x75 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x203738u, 0x203740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203740u;
label_203740:
    // 0x203740: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x203740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_203744:
    // 0x203744: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203748:
    // 0x203748: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20374c:
    // 0x20374c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_203750:
    // 0x203750: 0x60f809  jalr        $v1
label_203754:
    if (ctx->pc == 0x203754u) {
        ctx->pc = 0x203754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203750u;
        // 0x203754: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203758u;
        goto label_203758;
    }
    ctx->pc = 0x203750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203758u);
        ctx->pc = 0x203754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203750u;
        // 0x203754: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203750u, 0x203758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203758u;
label_203758:
    // 0x203758: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x203758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20375c:
    // 0x20375c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20375cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203760:
    // 0x203760: 0xc139fc8  jal         func_4E7F20
label_203764:
    if (ctx->pc == 0x203764u) {
        ctx->pc = 0x203764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203760u;
        // 0x203764: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203768u;
        goto label_203768;
    }
    ctx->pc = 0x203760u;
    SET_GPR_U32(ctx, 31, 0x203768u);
    ctx->pc = 0x203764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203760u;
    // 0x203764: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x203760u, 0x203768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203768u;
label_203768:
    // 0x203768: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x203768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20376c:
    // 0x20376c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x20376cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_203770:
    // 0x203770: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x203770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203774:
    // 0x203774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203778:
    // 0x203778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20377c:
    // 0x20377c: 0x3e00008  jr          $ra
label_203780:
    if (ctx->pc == 0x203780u) {
        ctx->pc = 0x203780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20377Cu;
        // 0x203780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203784u;
        goto label_203784;
    }
    ctx->pc = 0x20377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20377Cu;
        // 0x203780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20377Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203784u;
label_203784:
    // 0x203784: 0x0  nop
    ctx->pc = 0x203784u;
    // NOP
    ctx->pc = 0x203788u;
}
