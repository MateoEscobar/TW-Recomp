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

// Function: sub_00205818
// Address: 0x205818 - 0x2058b0
void sub_00205818_0x205818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205818_0x205818");
#endif

    switch (ctx->pc) {
        case 0x205818u: goto label_205818;
        case 0x20581cu: goto label_20581c;
        case 0x205820u: goto label_205820;
        case 0x205824u: goto label_205824;
        case 0x205828u: goto label_205828;
        case 0x20582cu: goto label_20582c;
        case 0x205830u: goto label_205830;
        case 0x205834u: goto label_205834;
        case 0x205838u: goto label_205838;
        case 0x20583cu: goto label_20583c;
        case 0x205840u: goto label_205840;
        case 0x205844u: goto label_205844;
        case 0x205848u: goto label_205848;
        case 0x20584cu: goto label_20584c;
        case 0x205850u: goto label_205850;
        case 0x205854u: goto label_205854;
        case 0x205858u: goto label_205858;
        case 0x20585cu: goto label_20585c;
        case 0x205860u: goto label_205860;
        case 0x205864u: goto label_205864;
        case 0x205868u: goto label_205868;
        case 0x20586cu: goto label_20586c;
        case 0x205870u: goto label_205870;
        case 0x205874u: goto label_205874;
        case 0x205878u: goto label_205878;
        case 0x20587cu: goto label_20587c;
        case 0x205880u: goto label_205880;
        case 0x205884u: goto label_205884;
        case 0x205888u: goto label_205888;
        case 0x20588cu: goto label_20588c;
        case 0x205890u: goto label_205890;
        case 0x205894u: goto label_205894;
        case 0x205898u: goto label_205898;
        case 0x20589cu: goto label_20589c;
        case 0x2058a0u: goto label_2058a0;
        case 0x2058a4u: goto label_2058a4;
        case 0x2058a8u: goto label_2058a8;
        case 0x2058acu: goto label_2058ac;
        default: break;
    }

    ctx->pc = 0x205818u;

label_205818:
    // 0x205818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20581c:
    // 0x20581c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_205820:
    // 0x205820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_205824:
    // 0x205824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205828:
    // 0x205828: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x205828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20582c:
    // 0x20582c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20582cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_205830:
    // 0x205830: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x205830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_205834:
    // 0x205834: 0x40f809  jalr        $v0
label_205838:
    if (ctx->pc == 0x205838u) {
        ctx->pc = 0x205838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205834u;
        // 0x205838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20583Cu;
        goto label_20583c;
    }
    ctx->pc = 0x205834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20583Cu);
        ctx->pc = 0x205838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205834u;
        // 0x205838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205834u, 0x20583Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20583Cu;
label_20583c:
    // 0x20583c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_205840:
    if (ctx->pc == 0x205840u) {
        ctx->pc = 0x205840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20583Cu;
        // 0x205840: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205844u;
        goto label_205844;
    }
    ctx->pc = 0x20583Cu;
    {
        const bool branch_taken_0x20583c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20583c) {
            ctx->pc = 0x205840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20583Cu;
            // 0x205840: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058A0u;
            goto label_2058a0;
        }
    }
    ctx->pc = 0x205844u;
label_205844:
    // 0x205844: 0xc080ffa  jal         func_203FE8
label_205848:
    if (ctx->pc == 0x205848u) {
        ctx->pc = 0x20584Cu;
        goto label_20584c;
    }
    ctx->pc = 0x205844u;
    SET_GPR_U32(ctx, 31, 0x20584Cu);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x205844u, 0x20584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20584Cu;
label_20584c:
    // 0x20584c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_205850:
    if (ctx->pc == 0x205850u) {
        ctx->pc = 0x205850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20584Cu;
        // 0x205850: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205854u;
        goto label_205854;
    }
    ctx->pc = 0x20584Cu;
    {
        const bool branch_taken_0x20584c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20584c) {
            ctx->pc = 0x205850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20584Cu;
            // 0x205850: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2058A0u;
            goto label_2058a0;
        }
    }
    ctx->pc = 0x205854u;
label_205854:
    // 0x205854: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x205854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_205858:
    // 0x205858: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x205858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20585c:
    // 0x20585c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20585cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_205860:
    // 0x205860: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x205860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_205864:
    // 0x205864: 0x60f809  jalr        $v1
label_205868:
    if (ctx->pc == 0x205868u) {
        ctx->pc = 0x205868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205864u;
        // 0x205868: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20586Cu;
        goto label_20586c;
    }
    ctx->pc = 0x205864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20586Cu);
        ctx->pc = 0x205868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205864u;
        // 0x205868: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205864u, 0x20586Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20586Cu;
label_20586c:
    // 0x20586c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_205870:
    // 0x205870: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x205870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205874:
    // 0x205874: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x205874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_205878:
    // 0x205878: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x205878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20587c:
    // 0x20587c: 0x60f809  jalr        $v1
label_205880:
    if (ctx->pc == 0x205880u) {
        ctx->pc = 0x205880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20587Cu;
        // 0x205880: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205884u;
        goto label_205884;
    }
    ctx->pc = 0x20587Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205884u);
        ctx->pc = 0x205880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20587Cu;
        // 0x205880: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20587Cu, 0x205884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205884u;
label_205884:
    // 0x205884: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x205884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_205888:
    // 0x205888: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x205888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20588c:
    // 0x20588c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20588cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_205890:
    // 0x205890: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x205890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_205894:
    // 0x205894: 0x60f809  jalr        $v1
label_205898:
    if (ctx->pc == 0x205898u) {
        ctx->pc = 0x205898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205894u;
        // 0x205898: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20589Cu;
        goto label_20589c;
    }
    ctx->pc = 0x205894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20589Cu);
        ctx->pc = 0x205898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205894u;
        // 0x205898: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205894u, 0x20589Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20589Cu;
label_20589c:
    // 0x20589c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20589cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2058a0:
    // 0x2058a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2058a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2058a4:
    // 0x2058a4: 0x3e00008  jr          $ra
label_2058a8:
    if (ctx->pc == 0x2058A8u) {
        ctx->pc = 0x2058A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058A4u;
        // 0x2058a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058ACu;
        goto label_2058ac;
    }
    ctx->pc = 0x2058A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2058A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058A4u;
        // 0x2058a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2058ACu;
label_2058ac:
    // 0x2058ac: 0x0  nop
    ctx->pc = 0x2058acu;
    // NOP
    ctx->pc = 0x2058b0u;
}
