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

// Function: sub_003E0708
// Address: 0x3e0708 - 0x3e07a0
void sub_003E0708_0x3e0708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0708_0x3e0708");
#endif

    switch (ctx->pc) {
        case 0x3e0708u: goto label_3e0708;
        case 0x3e070cu: goto label_3e070c;
        case 0x3e0710u: goto label_3e0710;
        case 0x3e0714u: goto label_3e0714;
        case 0x3e0718u: goto label_3e0718;
        case 0x3e071cu: goto label_3e071c;
        case 0x3e0720u: goto label_3e0720;
        case 0x3e0724u: goto label_3e0724;
        case 0x3e0728u: goto label_3e0728;
        case 0x3e072cu: goto label_3e072c;
        case 0x3e0730u: goto label_3e0730;
        case 0x3e0734u: goto label_3e0734;
        case 0x3e0738u: goto label_3e0738;
        case 0x3e073cu: goto label_3e073c;
        case 0x3e0740u: goto label_3e0740;
        case 0x3e0744u: goto label_3e0744;
        case 0x3e0748u: goto label_3e0748;
        case 0x3e074cu: goto label_3e074c;
        case 0x3e0750u: goto label_3e0750;
        case 0x3e0754u: goto label_3e0754;
        case 0x3e0758u: goto label_3e0758;
        case 0x3e075cu: goto label_3e075c;
        case 0x3e0760u: goto label_3e0760;
        case 0x3e0764u: goto label_3e0764;
        case 0x3e0768u: goto label_3e0768;
        case 0x3e076cu: goto label_3e076c;
        case 0x3e0770u: goto label_3e0770;
        case 0x3e0774u: goto label_3e0774;
        case 0x3e0778u: goto label_3e0778;
        case 0x3e077cu: goto label_3e077c;
        case 0x3e0780u: goto label_3e0780;
        case 0x3e0784u: goto label_3e0784;
        case 0x3e0788u: goto label_3e0788;
        case 0x3e078cu: goto label_3e078c;
        case 0x3e0790u: goto label_3e0790;
        case 0x3e0794u: goto label_3e0794;
        case 0x3e0798u: goto label_3e0798;
        case 0x3e079cu: goto label_3e079c;
        default: break;
    }

    ctx->pc = 0x3e0708u;

label_3e0708:
    // 0x3e0708: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3e0708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3e070c:
    // 0x3e070c: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3e070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3e0710:
    // 0x3e0710: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3e0710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3e0714:
    // 0x3e0714: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3e0714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3e0718:
    // 0x3e0718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e0718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e071c:
    // 0x3e071c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e0720:
    // 0x3e0720: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e0720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e0724:
    // 0x3e0724: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e0724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e0728:
    // 0x3e0728: 0x40f809  jalr        $v0
label_3e072c:
    if (ctx->pc == 0x3E072Cu) {
        ctx->pc = 0x3E072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0728u;
        // 0x3e072c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0730u;
        goto label_3e0730;
    }
    ctx->pc = 0x3E0728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0730u);
        ctx->pc = 0x3E072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0728u;
        // 0x3e072c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0728u, 0x3E0730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0730u;
label_3e0730:
    // 0x3e0730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e0730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0734:
    // 0x3e0734: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e0734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e0738:
    // 0x3e0738: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e0738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e073c:
    // 0x3e073c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e0740:
    // 0x3e0740: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e0744:
    // 0x3e0744: 0x0  nop
    ctx->pc = 0x3e0744u;
    // NOP
label_3e0748:
    // 0x3e0748: 0x0  nop
    ctx->pc = 0x3e0748u;
    // NOP
label_3e074c:
    // 0x3e074c: 0x0  nop
    ctx->pc = 0x3e074cu;
    // NOP
label_3e0750:
    // 0x3e0750: 0x0  nop
    ctx->pc = 0x3e0750u;
    // NOP
label_3e0754:
    // 0x3e0754: 0x0  nop
    ctx->pc = 0x3e0754u;
    // NOP
label_3e0758:
    // 0x3e0758: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e075c:
    if (ctx->pc == 0x3E075Cu) {
        ctx->pc = 0x3E075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0758u;
        // 0x3e075c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0760u;
        goto label_3e0760;
    }
    ctx->pc = 0x3E0758u;
    {
        const bool branch_taken_0x3e0758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0758u;
        // 0x3e075c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0758) {
            ctx->pc = 0x3E0748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0748;
        }
    }
    ctx->pc = 0x3E0760u;
label_3e0760:
    // 0x3e0760: 0xc138ddc  jal         func_4E3770
label_3e0764:
    if (ctx->pc == 0x3E0764u) {
        ctx->pc = 0x3E0768u;
        goto label_3e0768;
    }
    ctx->pc = 0x3E0760u;
    SET_GPR_U32(ctx, 31, 0x3E0768u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E0760u, 0x3E0768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0768u;
label_3e0768:
    // 0x3e0768: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e0768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e076c:
    // 0x3e076c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0770:
    // 0x3e0770: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3e0774:
    if (ctx->pc == 0x3E0774u) {
        ctx->pc = 0x3E0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0770u;
        // 0x3e0774: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0778u;
        goto label_3e0778;
    }
    ctx->pc = 0x3E0770u;
    {
        const bool branch_taken_0x3e0770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e0770) {
            ctx->pc = 0x3E0774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0770u;
            // 0x3e0774: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0788u;
            goto label_3e0788;
        }
    }
    ctx->pc = 0x3E0778u;
label_3e0778:
    // 0x3e0778: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3e0778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e077c:
    // 0x3e077c: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x3e077cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_3e0780:
    // 0x3e0780: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3e0780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3e0784:
    // 0x3e0784: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3e0784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e0788:
    // 0x3e0788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e0788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e078c:
    // 0x3e078c: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3e078cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3e0790:
    // 0x3e0790: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3e0790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3e0794:
    // 0x3e0794: 0x3e00008  jr          $ra
label_3e0798:
    if (ctx->pc == 0x3E0798u) {
        ctx->pc = 0x3E0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0794u;
        // 0x3e0798: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E079Cu;
        goto label_3e079c;
    }
    ctx->pc = 0x3E0794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0794u;
        // 0x3e0798: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E079Cu;
label_3e079c:
    // 0x3e079c: 0x0  nop
    ctx->pc = 0x3e079cu;
    // NOP
    ctx->pc = 0x3e07a0u;
}
