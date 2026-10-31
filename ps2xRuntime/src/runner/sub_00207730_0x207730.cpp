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

// Function: sub_00207730
// Address: 0x207730 - 0x2077b8
void sub_00207730_0x207730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207730_0x207730");
#endif

    switch (ctx->pc) {
        case 0x207730u: goto label_207730;
        case 0x207734u: goto label_207734;
        case 0x207738u: goto label_207738;
        case 0x20773cu: goto label_20773c;
        case 0x207740u: goto label_207740;
        case 0x207744u: goto label_207744;
        case 0x207748u: goto label_207748;
        case 0x20774cu: goto label_20774c;
        case 0x207750u: goto label_207750;
        case 0x207754u: goto label_207754;
        case 0x207758u: goto label_207758;
        case 0x20775cu: goto label_20775c;
        case 0x207760u: goto label_207760;
        case 0x207764u: goto label_207764;
        case 0x207768u: goto label_207768;
        case 0x20776cu: goto label_20776c;
        case 0x207770u: goto label_207770;
        case 0x207774u: goto label_207774;
        case 0x207778u: goto label_207778;
        case 0x20777cu: goto label_20777c;
        case 0x207780u: goto label_207780;
        case 0x207784u: goto label_207784;
        case 0x207788u: goto label_207788;
        case 0x20778cu: goto label_20778c;
        case 0x207790u: goto label_207790;
        case 0x207794u: goto label_207794;
        case 0x207798u: goto label_207798;
        case 0x20779cu: goto label_20779c;
        case 0x2077a0u: goto label_2077a0;
        case 0x2077a4u: goto label_2077a4;
        case 0x2077a8u: goto label_2077a8;
        case 0x2077acu: goto label_2077ac;
        case 0x2077b0u: goto label_2077b0;
        case 0x2077b4u: goto label_2077b4;
        default: break;
    }

    ctx->pc = 0x207730u;

label_207730:
    // 0x207730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_207734:
    // 0x207734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x207734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_207738:
    // 0x207738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20773c:
    // 0x20773c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20773cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207740:
    // 0x207740: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207744:
    // 0x207744: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x207744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_207748:
    // 0x207748: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20774c:
    // 0x20774c: 0x40f809  jalr        $v0
label_207750:
    if (ctx->pc == 0x207750u) {
        ctx->pc = 0x207750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20774Cu;
        // 0x207750: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207754u;
        goto label_207754;
    }
    ctx->pc = 0x20774Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207754u);
        ctx->pc = 0x207750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20774Cu;
        // 0x207750: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20774Cu, 0x207754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207754u;
label_207754:
    // 0x207754: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_207758:
    if (ctx->pc == 0x207758u) {
        ctx->pc = 0x207758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207754u;
        // 0x207758: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20775Cu;
        goto label_20775c;
    }
    ctx->pc = 0x207754u;
    {
        const bool branch_taken_0x207754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207754) {
            ctx->pc = 0x207758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207754u;
            // 0x207758: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2077ACu;
            goto label_2077ac;
        }
    }
    ctx->pc = 0x20775Cu;
label_20775c:
    // 0x20775c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207760:
    // 0x207760: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x207760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_207764:
    // 0x207764: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x207764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_207768:
    // 0x207768: 0x40f809  jalr        $v0
label_20776c:
    if (ctx->pc == 0x20776Cu) {
        ctx->pc = 0x20776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207768u;
        // 0x20776c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207770u;
        goto label_207770;
    }
    ctx->pc = 0x207768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207770u);
        ctx->pc = 0x20776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207768u;
        // 0x20776c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207768u, 0x207770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207770u;
label_207770:
    // 0x207770: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_207774:
    if (ctx->pc == 0x207774u) {
        ctx->pc = 0x207774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207770u;
        // 0x207774: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207778u;
        goto label_207778;
    }
    ctx->pc = 0x207770u;
    {
        const bool branch_taken_0x207770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207770) {
            ctx->pc = 0x207774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207770u;
            // 0x207774: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2077ACu;
            goto label_2077ac;
        }
    }
    ctx->pc = 0x207778u;
label_207778:
    // 0x207778: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x207778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20777c:
    // 0x20777c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207780:
    // 0x207780: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x207780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_207784:
    // 0x207784: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x207784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_207788:
    // 0x207788: 0x60f809  jalr        $v1
label_20778c:
    if (ctx->pc == 0x20778Cu) {
        ctx->pc = 0x20778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207788u;
        // 0x20778c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207790u;
        goto label_207790;
    }
    ctx->pc = 0x207788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207790u);
        ctx->pc = 0x20778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207788u;
        // 0x20778c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207788u, 0x207790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207790u;
label_207790:
    // 0x207790: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x207790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_207794:
    // 0x207794: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x207794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207798:
    // 0x207798: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x207798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20779c:
    // 0x20779c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2077a0:
    // 0x2077a0: 0x60f809  jalr        $v1
label_2077a4:
    if (ctx->pc == 0x2077A4u) {
        ctx->pc = 0x2077A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077A0u;
        // 0x2077a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077A8u;
        goto label_2077a8;
    }
    ctx->pc = 0x2077A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2077A8u);
        ctx->pc = 0x2077A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077A0u;
        // 0x2077a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077A0u, 0x2077A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2077A8u;
label_2077a8:
    // 0x2077a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2077a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2077ac:
    // 0x2077ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2077acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2077b0:
    // 0x2077b0: 0x3e00008  jr          $ra
label_2077b4:
    if (ctx->pc == 0x2077B4u) {
        ctx->pc = 0x2077B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077B0u;
        // 0x2077b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077B8u;
        goto label_fallthrough_0x2077b0;
    }
    ctx->pc = 0x2077B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2077B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077B0u;
        // 0x2077b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2077b0:
    ctx->pc = 0x2077B8u;
}
