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

// Function: sub_0017F708
// Address: 0x17f708 - 0x17f7a0
void sub_0017F708_0x17f708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F708_0x17f708");
#endif

    switch (ctx->pc) {
        case 0x17f708u: goto label_17f708;
        case 0x17f70cu: goto label_17f70c;
        case 0x17f710u: goto label_17f710;
        case 0x17f714u: goto label_17f714;
        case 0x17f718u: goto label_17f718;
        case 0x17f71cu: goto label_17f71c;
        case 0x17f720u: goto label_17f720;
        case 0x17f724u: goto label_17f724;
        case 0x17f728u: goto label_17f728;
        case 0x17f72cu: goto label_17f72c;
        case 0x17f730u: goto label_17f730;
        case 0x17f734u: goto label_17f734;
        case 0x17f738u: goto label_17f738;
        case 0x17f73cu: goto label_17f73c;
        case 0x17f740u: goto label_17f740;
        case 0x17f744u: goto label_17f744;
        case 0x17f748u: goto label_17f748;
        case 0x17f74cu: goto label_17f74c;
        case 0x17f750u: goto label_17f750;
        case 0x17f754u: goto label_17f754;
        case 0x17f758u: goto label_17f758;
        case 0x17f75cu: goto label_17f75c;
        case 0x17f760u: goto label_17f760;
        case 0x17f764u: goto label_17f764;
        case 0x17f768u: goto label_17f768;
        case 0x17f76cu: goto label_17f76c;
        case 0x17f770u: goto label_17f770;
        case 0x17f774u: goto label_17f774;
        case 0x17f778u: goto label_17f778;
        case 0x17f77cu: goto label_17f77c;
        case 0x17f780u: goto label_17f780;
        case 0x17f784u: goto label_17f784;
        case 0x17f788u: goto label_17f788;
        case 0x17f78cu: goto label_17f78c;
        case 0x17f790u: goto label_17f790;
        case 0x17f794u: goto label_17f794;
        case 0x17f798u: goto label_17f798;
        case 0x17f79cu: goto label_17f79c;
        default: break;
    }

    ctx->pc = 0x17f708u;

label_17f708:
    // 0x17f708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17f708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17f70c:
    // 0x17f70c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_17f710:
    // 0x17f710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17f710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17f714:
    // 0x17f714: 0x24428ce0  addiu       $v0, $v0, -0x7320
    ctx->pc = 0x17f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937824));
label_17f718:
    // 0x17f718: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17f718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_17f71c:
    // 0x17f71c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f720:
    // 0x17f720: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17f720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_17f724:
    // 0x17f724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17f728:
    // 0x17f728: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17f728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17f72c:
    // 0x17f72c: 0xc05fdf2  jal         func_17F7C8
label_17f730:
    if (ctx->pc == 0x17F730u) {
        ctx->pc = 0x17F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F72Cu;
        // 0x17f730: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F734u;
        goto label_17f734;
    }
    ctx->pc = 0x17F72Cu;
    SET_GPR_U32(ctx, 31, 0x17F734u);
    ctx->pc = 0x17F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F72Cu;
    // 0x17f730: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7C8u, 0x17F72Cu, 0x17F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F734u;
label_17f734:
    // 0x17f734: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x17f734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_17f738:
    // 0x17f738: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_17f73c:
    if (ctx->pc == 0x17F73Cu) {
        ctx->pc = 0x17F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F738u;
        // 0x17f73c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F740u;
        goto label_17f740;
    }
    ctx->pc = 0x17F738u;
    {
        const bool branch_taken_0x17f738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F738u;
        // 0x17f73c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f738) {
            ctx->pc = 0x17F768u;
            goto label_17f768;
        }
    }
    ctx->pc = 0x17F740u;
label_17f740:
    // 0x17f740: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17f744:
    // 0x17f744: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x17f744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_17f748:
    // 0x17f748: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17f74c:
    // 0x17f74c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_17f750:
    // 0x17f750: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f754:
    // 0x17f754: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17f754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17f758:
    // 0x17f758: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17f75c:
    // 0x17f75c: 0x40f809  jalr        $v0
label_17f760:
    if (ctx->pc == 0x17F760u) {
        ctx->pc = 0x17F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F75Cu;
        // 0x17f760: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F764u;
        goto label_17f764;
    }
    ctx->pc = 0x17F75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F764u);
        ctx->pc = 0x17F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F75Cu;
        // 0x17f760: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F75Cu, 0x17F764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F764u;
label_17f764:
    // 0x17f764: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17f768:
    // 0x17f768: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_17f76c:
    // 0x17f76c: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x17f76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_17f770:
    // 0x17f770: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x17f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_17f774:
    // 0x17f774: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x17f774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_17f778:
    // 0x17f778: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17f77c:
    if (ctx->pc == 0x17F77Cu) {
        ctx->pc = 0x17F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F778u;
        // 0x17f77c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F780u;
        goto label_17f780;
    }
    ctx->pc = 0x17F778u;
    {
        const bool branch_taken_0x17f778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F778u;
        // 0x17f77c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f778) {
            ctx->pc = 0x17F788u;
            goto label_17f788;
        }
    }
    ctx->pc = 0x17F780u;
label_17f780:
    // 0x17f780: 0xc10b208  jal         func_42C820
label_17f784:
    if (ctx->pc == 0x17F784u) {
        ctx->pc = 0x17F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F780u;
        // 0x17f784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F788u;
        goto label_17f788;
    }
    ctx->pc = 0x17F780u;
    SET_GPR_U32(ctx, 31, 0x17F788u);
    ctx->pc = 0x17F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F780u;
    // 0x17f784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x17F780u, 0x17F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F788u;
label_17f788:
    // 0x17f788: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17f788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17f78c:
    // 0x17f78c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17f78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f790:
    // 0x17f790: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17f790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f794:
    // 0x17f794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f798:
    // 0x17f798: 0x3e00008  jr          $ra
label_17f79c:
    if (ctx->pc == 0x17F79Cu) {
        ctx->pc = 0x17F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F798u;
        // 0x17f79c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F7A0u;
        goto label_fallthrough_0x17f798;
    }
    ctx->pc = 0x17F798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F798u;
        // 0x17f79c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17f798:
    ctx->pc = 0x17F7A0u;
}
