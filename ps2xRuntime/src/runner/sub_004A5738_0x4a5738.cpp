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

// Function: sub_004A5738
// Address: 0x4a5738 - 0x4a57c8
void sub_004A5738_0x4a5738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5738_0x4a5738");
#endif

    switch (ctx->pc) {
        case 0x4a5738u: goto label_4a5738;
        case 0x4a573cu: goto label_4a573c;
        case 0x4a5740u: goto label_4a5740;
        case 0x4a5744u: goto label_4a5744;
        case 0x4a5748u: goto label_4a5748;
        case 0x4a574cu: goto label_4a574c;
        case 0x4a5750u: goto label_4a5750;
        case 0x4a5754u: goto label_4a5754;
        case 0x4a5758u: goto label_4a5758;
        case 0x4a575cu: goto label_4a575c;
        case 0x4a5760u: goto label_4a5760;
        case 0x4a5764u: goto label_4a5764;
        case 0x4a5768u: goto label_4a5768;
        case 0x4a576cu: goto label_4a576c;
        case 0x4a5770u: goto label_4a5770;
        case 0x4a5774u: goto label_4a5774;
        case 0x4a5778u: goto label_4a5778;
        case 0x4a577cu: goto label_4a577c;
        case 0x4a5780u: goto label_4a5780;
        case 0x4a5784u: goto label_4a5784;
        case 0x4a5788u: goto label_4a5788;
        case 0x4a578cu: goto label_4a578c;
        case 0x4a5790u: goto label_4a5790;
        case 0x4a5794u: goto label_4a5794;
        case 0x4a5798u: goto label_4a5798;
        case 0x4a579cu: goto label_4a579c;
        case 0x4a57a0u: goto label_4a57a0;
        case 0x4a57a4u: goto label_4a57a4;
        case 0x4a57a8u: goto label_4a57a8;
        case 0x4a57acu: goto label_4a57ac;
        case 0x4a57b0u: goto label_4a57b0;
        case 0x4a57b4u: goto label_4a57b4;
        case 0x4a57b8u: goto label_4a57b8;
        case 0x4a57bcu: goto label_4a57bc;
        case 0x4a57c0u: goto label_4a57c0;
        case 0x4a57c4u: goto label_4a57c4;
        default: break;
    }

    ctx->pc = 0x4a5738u;

label_4a5738:
    // 0x4a5738: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a5738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a573c:
    // 0x4a573c: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4a5740:
    // 0x4a5740: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a5740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4a5744:
    // 0x4a5744: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4a5744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4a5748:
    // 0x4a5748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a5748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a574c:
    // 0x4a574c: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x4a574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_4a5750:
    // 0x4a5750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a5754:
    // 0x4a5754: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a5754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a5758:
    // 0x4a5758: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x4a5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_4a575c:
    // 0x4a575c: 0x34a50409  ori         $a1, $a1, 0x409
    ctx->pc = 0x4a575cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
label_4a5760:
    // 0x4a5760: 0x40f809  jalr        $v0
label_4a5764:
    if (ctx->pc == 0x4A5764u) {
        ctx->pc = 0x4A5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5760u;
        // 0x4a5764: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5768u;
        goto label_4a5768;
    }
    ctx->pc = 0x4A5760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A5768u);
        ctx->pc = 0x4A5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5760u;
        // 0x4a5764: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5760u, 0x4A5768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A5768u;
label_4a5768:
    // 0x4a5768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a5768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a576c:
    // 0x4a576c: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_4a5770:
    if (ctx->pc == 0x4A5770u) {
        ctx->pc = 0x4A5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A576Cu;
        // 0x4a5770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5774u;
        goto label_4a5774;
    }
    ctx->pc = 0x4A576Cu;
    {
        const bool branch_taken_0x4a576c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A576Cu;
        // 0x4a5770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a576c) {
            ctx->pc = 0x4A57A0u;
            goto label_4a57a0;
        }
    }
    ctx->pc = 0x4A5774u;
label_4a5774:
    // 0x4a5774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a5774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a5778:
    // 0x4a5778: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a5778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a577c:
    // 0x4a577c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a577cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a5780:
    // 0x4a5780: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x4a5780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_4a5784:
    // 0x4a5784: 0xc11eff2  jal         func_47BFC8
label_4a5788:
    if (ctx->pc == 0x4A5788u) {
        ctx->pc = 0x4A5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5784u;
        // 0x4a5788: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A578Cu;
        goto label_4a578c;
    }
    ctx->pc = 0x4A5784u;
    SET_GPR_U32(ctx, 31, 0x4A578Cu);
    ctx->pc = 0x4A5788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5784u;
    // 0x4a5788: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A5784u, 0x4A578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A578Cu;
label_4a578c:
    // 0x4a578c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a5790:
    // 0x4a5790: 0xc11f024  jal         func_47C090
label_4a5794:
    if (ctx->pc == 0x4A5794u) {
        ctx->pc = 0x4A5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5790u;
        // 0x4a5794: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5798u;
        goto label_4a5798;
    }
    ctx->pc = 0x4A5790u;
    SET_GPR_U32(ctx, 31, 0x4A5798u);
    ctx->pc = 0x4A5794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5790u;
    // 0x4a5794: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A5790u, 0x4A5798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5798u;
label_4a5798:
    // 0x4a5798: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a579c:
    if (ctx->pc == 0x4A579Cu) {
        ctx->pc = 0x4A579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5798u;
        // 0x4a579c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A57A0u;
        goto label_4a57a0;
    }
    ctx->pc = 0x4A5798u;
    {
        const bool branch_taken_0x4a5798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5798u;
        // 0x4a579c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5798) {
            ctx->pc = 0x4A57B8u;
            goto label_4a57b8;
        }
    }
    ctx->pc = 0x4A57A0u;
label_4a57a0:
    // 0x4a57a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a57a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a57a4:
    // 0x4a57a4: 0xc10c1fa  jal         func_4307E8
label_4a57a8:
    if (ctx->pc == 0x4A57A8u) {
        ctx->pc = 0x4A57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57A4u;
        // 0x4a57a8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A57ACu;
        goto label_4a57ac;
    }
    ctx->pc = 0x4A57A4u;
    SET_GPR_U32(ctx, 31, 0x4A57ACu);
    ctx->pc = 0x4A57A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A57A4u;
    // 0x4a57a8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4A57A4u, 0x4A57ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A57ACu;
label_4a57ac:
    // 0x4a57ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4a57acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4a57b0:
    // 0x4a57b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a57b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a57b4:
    // 0x4a57b4: 0x0  nop
    ctx->pc = 0x4a57b4u;
    // NOP
label_4a57b8:
    // 0x4a57b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a57b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a57bc:
    // 0x4a57bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a57c0:
    // 0x4a57c0: 0x3e00008  jr          $ra
label_4a57c4:
    if (ctx->pc == 0x4A57C4u) {
        ctx->pc = 0x4A57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57C0u;
        // 0x4a57c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A57C8u;
        goto label_fallthrough_0x4a57c0;
    }
    ctx->pc = 0x4A57C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A57C0u;
        // 0x4a57c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A57C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a57c0:
    ctx->pc = 0x4A57C8u;
}
