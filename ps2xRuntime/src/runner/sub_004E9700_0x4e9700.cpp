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

// Function: sub_004E9700
// Address: 0x4e9700 - 0x4e97c0
void sub_004E9700_0x4e9700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9700_0x4e9700");
#endif

    switch (ctx->pc) {
        case 0x4e9700u: goto label_4e9700;
        case 0x4e9704u: goto label_4e9704;
        case 0x4e9708u: goto label_4e9708;
        case 0x4e970cu: goto label_4e970c;
        case 0x4e9710u: goto label_4e9710;
        case 0x4e9714u: goto label_4e9714;
        case 0x4e9718u: goto label_4e9718;
        case 0x4e971cu: goto label_4e971c;
        case 0x4e9720u: goto label_4e9720;
        case 0x4e9724u: goto label_4e9724;
        case 0x4e9728u: goto label_4e9728;
        case 0x4e972cu: goto label_4e972c;
        case 0x4e9730u: goto label_4e9730;
        case 0x4e9734u: goto label_4e9734;
        case 0x4e9738u: goto label_4e9738;
        case 0x4e973cu: goto label_4e973c;
        case 0x4e9740u: goto label_4e9740;
        case 0x4e9744u: goto label_4e9744;
        case 0x4e9748u: goto label_4e9748;
        case 0x4e974cu: goto label_4e974c;
        case 0x4e9750u: goto label_4e9750;
        case 0x4e9754u: goto label_4e9754;
        case 0x4e9758u: goto label_4e9758;
        case 0x4e975cu: goto label_4e975c;
        case 0x4e9760u: goto label_4e9760;
        case 0x4e9764u: goto label_4e9764;
        case 0x4e9768u: goto label_4e9768;
        case 0x4e976cu: goto label_4e976c;
        case 0x4e9770u: goto label_4e9770;
        case 0x4e9774u: goto label_4e9774;
        case 0x4e9778u: goto label_4e9778;
        case 0x4e977cu: goto label_4e977c;
        case 0x4e9780u: goto label_4e9780;
        case 0x4e9784u: goto label_4e9784;
        case 0x4e9788u: goto label_4e9788;
        case 0x4e978cu: goto label_4e978c;
        case 0x4e9790u: goto label_4e9790;
        case 0x4e9794u: goto label_4e9794;
        case 0x4e9798u: goto label_4e9798;
        case 0x4e979cu: goto label_4e979c;
        case 0x4e97a0u: goto label_4e97a0;
        case 0x4e97a4u: goto label_4e97a4;
        case 0x4e97a8u: goto label_4e97a8;
        case 0x4e97acu: goto label_4e97ac;
        case 0x4e97b0u: goto label_4e97b0;
        case 0x4e97b4u: goto label_4e97b4;
        case 0x4e97b8u: goto label_4e97b8;
        case 0x4e97bcu: goto label_4e97bc;
        default: break;
    }

    ctx->pc = 0x4e9700u;

label_4e9700:
    // 0x4e9700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e9700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e9704:
    // 0x4e9704: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e9704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4e9708:
    // 0x4e9708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e9708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e970c:
    // 0x4e970c: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x4e970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_4e9710:
    // 0x4e9710: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e9710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e9714:
    // 0x4e9714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e9714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9718:
    // 0x4e9718: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e9718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e971c:
    // 0x4e971c: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x4e971cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_4e9720:
    // 0x4e9720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9724:
    // 0x4e9724: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x4e9724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_4e9728:
    // 0x4e9728: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4e9728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4e972c:
    // 0x4e972c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4e9730:
    if (ctx->pc == 0x4E9730u) {
        ctx->pc = 0x4E9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E972Cu;
        // 0x4e9730: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9734u;
        goto label_4e9734;
    }
    ctx->pc = 0x4E972Cu;
    {
        const bool branch_taken_0x4e972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E972Cu;
        // 0x4e9730: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e972c) {
            ctx->pc = 0x4E9760u;
            goto label_4e9760;
        }
    }
    ctx->pc = 0x4E9734u;
label_4e9734:
    // 0x4e9734: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4e9734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e9738:
    // 0x4e9738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e9738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e973c:
    // 0x4e973c: 0xc1376d6  jal         func_4DDB58
label_4e9740:
    if (ctx->pc == 0x4E9740u) {
        ctx->pc = 0x4E9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E973Cu;
        // 0x4e9740: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9744u;
        goto label_4e9744;
    }
    ctx->pc = 0x4E973Cu;
    SET_GPR_U32(ctx, 31, 0x4E9744u);
    ctx->pc = 0x4E9740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E973Cu;
    // 0x4e9740: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x4E973Cu, 0x4E9744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9744u;
label_4e9744:
    // 0x4e9744: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4e9744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e9748:
    // 0x4e9748: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x4e9748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_4e974c:
    // 0x4e974c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4e974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e9750:
    // 0x4e9750: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4e9750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_4e9754:
    // 0x4e9754: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4e9754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e9758:
    // 0x4e9758: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x4e9758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_4e975c:
    // 0x4e975c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4e975cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4e9760:
    // 0x4e9760: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4e9760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e9764:
    // 0x4e9764: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e9768:
    if (ctx->pc == 0x4E9768u) {
        ctx->pc = 0x4E9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9764u;
        // 0x4e9768: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E976Cu;
        goto label_4e976c;
    }
    ctx->pc = 0x4E9764u;
    {
        const bool branch_taken_0x4e9764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9764u;
        // 0x4e9768: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9764) {
            ctx->pc = 0x4E9790u;
            goto label_4e9790;
        }
    }
    ctx->pc = 0x4E976Cu;
label_4e976c:
    // 0x4e976c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e976cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e9770:
    // 0x4e9770: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e9770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e9774:
    // 0x4e9774: 0x24c669a8  addiu       $a2, $a2, 0x69A8
    ctx->pc = 0x4e9774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27048));
label_4e9778:
    // 0x4e9778: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e9778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e977c:
    // 0x4e977c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9780:
    // 0x4e9780: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9784:
    // 0x4e9784: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9788:
    // 0x4e9788: 0x60f809  jalr        $v1
label_4e978c:
    if (ctx->pc == 0x4E978Cu) {
        ctx->pc = 0x4E978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9788u;
        // 0x4e978c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9790u;
        goto label_4e9790;
    }
    ctx->pc = 0x4E9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9790u);
        ctx->pc = 0x4E978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9788u;
        // 0x4e978c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9788u, 0x4E9790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9790u;
label_4e9790:
    // 0x4e9790: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x4e9790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_4e9794:
    // 0x4e9794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4e9798:
    if (ctx->pc == 0x4E9798u) {
        ctx->pc = 0x4E9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9794u;
        // 0x4e9798: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E979Cu;
        goto label_4e979c;
    }
    ctx->pc = 0x4E9794u;
    {
        const bool branch_taken_0x4e9794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9794u;
        // 0x4e9798: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9794) {
            ctx->pc = 0x4E97A8u;
            goto label_4e97a8;
        }
    }
    ctx->pc = 0x4E979Cu;
label_4e979c:
    // 0x4e979c: 0xc10b208  jal         func_42C820
label_4e97a0:
    if (ctx->pc == 0x4E97A0u) {
        ctx->pc = 0x4E97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E979Cu;
        // 0x4e97a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E97A4u;
        goto label_4e97a4;
    }
    ctx->pc = 0x4E979Cu;
    SET_GPR_U32(ctx, 31, 0x4E97A4u);
    ctx->pc = 0x4E97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E979Cu;
    // 0x4e97a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4E979Cu, 0x4E97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E97A4u;
label_4e97a4:
    // 0x4e97a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e97a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e97a8:
    // 0x4e97a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e97a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e97ac:
    // 0x4e97ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e97acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e97b0:
    // 0x4e97b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e97b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e97b4:
    // 0x4e97b4: 0x3e00008  jr          $ra
label_4e97b8:
    if (ctx->pc == 0x4E97B8u) {
        ctx->pc = 0x4E97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E97B4u;
        // 0x4e97b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E97BCu;
        goto label_4e97bc;
    }
    ctx->pc = 0x4E97B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E97B4u;
        // 0x4e97b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E97B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E97BCu;
label_4e97bc:
    // 0x4e97bc: 0x0  nop
    ctx->pc = 0x4e97bcu;
    // NOP
    ctx->pc = 0x4e97c0u;
}
