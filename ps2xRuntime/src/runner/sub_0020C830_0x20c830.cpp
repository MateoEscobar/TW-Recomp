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

// Function: sub_0020C830
// Address: 0x20c830 - 0x20c8d0
void sub_0020C830_0x20c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C830_0x20c830");
#endif

    switch (ctx->pc) {
        case 0x20c830u: goto label_20c830;
        case 0x20c834u: goto label_20c834;
        case 0x20c838u: goto label_20c838;
        case 0x20c83cu: goto label_20c83c;
        case 0x20c840u: goto label_20c840;
        case 0x20c844u: goto label_20c844;
        case 0x20c848u: goto label_20c848;
        case 0x20c84cu: goto label_20c84c;
        case 0x20c850u: goto label_20c850;
        case 0x20c854u: goto label_20c854;
        case 0x20c858u: goto label_20c858;
        case 0x20c85cu: goto label_20c85c;
        case 0x20c860u: goto label_20c860;
        case 0x20c864u: goto label_20c864;
        case 0x20c868u: goto label_20c868;
        case 0x20c86cu: goto label_20c86c;
        case 0x20c870u: goto label_20c870;
        case 0x20c874u: goto label_20c874;
        case 0x20c878u: goto label_20c878;
        case 0x20c87cu: goto label_20c87c;
        case 0x20c880u: goto label_20c880;
        case 0x20c884u: goto label_20c884;
        case 0x20c888u: goto label_20c888;
        case 0x20c88cu: goto label_20c88c;
        case 0x20c890u: goto label_20c890;
        case 0x20c894u: goto label_20c894;
        case 0x20c898u: goto label_20c898;
        case 0x20c89cu: goto label_20c89c;
        case 0x20c8a0u: goto label_20c8a0;
        case 0x20c8a4u: goto label_20c8a4;
        case 0x20c8a8u: goto label_20c8a8;
        case 0x20c8acu: goto label_20c8ac;
        case 0x20c8b0u: goto label_20c8b0;
        case 0x20c8b4u: goto label_20c8b4;
        case 0x20c8b8u: goto label_20c8b8;
        case 0x20c8bcu: goto label_20c8bc;
        case 0x20c8c0u: goto label_20c8c0;
        case 0x20c8c4u: goto label_20c8c4;
        case 0x20c8c8u: goto label_20c8c8;
        case 0x20c8ccu: goto label_20c8cc;
        default: break;
    }

    ctx->pc = 0x20c830u;

label_20c830:
    // 0x20c830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20c834:
    // 0x20c834: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20c834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20c838:
    // 0x20c838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c83c:
    // 0x20c83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c840:
    // 0x20c840: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20c844:
    // 0x20c844: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20c844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20c848:
    // 0x20c848: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20c84c:
    // 0x20c84c: 0x40f809  jalr        $v0
label_20c850:
    if (ctx->pc == 0x20C850u) {
        ctx->pc = 0x20C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C84Cu;
        // 0x20c850: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C854u;
        goto label_20c854;
    }
    ctx->pc = 0x20C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C854u);
        ctx->pc = 0x20C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C84Cu;
        // 0x20c850: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C84Cu, 0x20C854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C854u;
label_20c854:
    // 0x20c854: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_20c858:
    if (ctx->pc == 0x20C858u) {
        ctx->pc = 0x20C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C854u;
        // 0x20c858: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C85Cu;
        goto label_20c85c;
    }
    ctx->pc = 0x20C854u;
    {
        const bool branch_taken_0x20c854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c854) {
            ctx->pc = 0x20C858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C854u;
            // 0x20c858: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C8C4u;
            goto label_20c8c4;
        }
    }
    ctx->pc = 0x20C85Cu;
label_20c85c:
    // 0x20c85c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20c860:
    // 0x20c860: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x20c860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20c864:
    // 0x20c864: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20c868:
    // 0x20c868: 0x40f809  jalr        $v0
label_20c86c:
    if (ctx->pc == 0x20C86Cu) {
        ctx->pc = 0x20C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C868u;
        // 0x20c86c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C870u;
        goto label_20c870;
    }
    ctx->pc = 0x20C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C870u);
        ctx->pc = 0x20C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C868u;
        // 0x20c86c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C868u, 0x20C870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C870u;
label_20c870:
    // 0x20c870: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_20c874:
    if (ctx->pc == 0x20C874u) {
        ctx->pc = 0x20C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C870u;
        // 0x20c874: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C878u;
        goto label_20c878;
    }
    ctx->pc = 0x20C870u;
    {
        const bool branch_taken_0x20c870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c870) {
            ctx->pc = 0x20C874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C870u;
            // 0x20c874: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C8C4u;
            goto label_20c8c4;
        }
    }
    ctx->pc = 0x20C878u;
label_20c878:
    // 0x20c878: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x20c878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20c87c:
    // 0x20c87c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c880:
    // 0x20c880: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20c880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20c884:
    // 0x20c884: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20c884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20c888:
    // 0x20c888: 0x60f809  jalr        $v1
label_20c88c:
    if (ctx->pc == 0x20C88Cu) {
        ctx->pc = 0x20C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C888u;
        // 0x20c88c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C890u;
        goto label_20c890;
    }
    ctx->pc = 0x20C888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C890u);
        ctx->pc = 0x20C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C888u;
        // 0x20c88c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C888u, 0x20C890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C890u;
label_20c890:
    // 0x20c890: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20c890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20c894:
    // 0x20c894: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c898:
    // 0x20c898: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20c898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20c89c:
    // 0x20c89c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20c8a0:
    // 0x20c8a0: 0x60f809  jalr        $v1
label_20c8a4:
    if (ctx->pc == 0x20C8A4u) {
        ctx->pc = 0x20C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8A0u;
        // 0x20c8a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8A8u;
        goto label_20c8a8;
    }
    ctx->pc = 0x20C8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C8A8u);
        ctx->pc = 0x20C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8A0u;
        // 0x20c8a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C8A0u, 0x20C8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C8A8u;
label_20c8a8:
    // 0x20c8a8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20c8ac:
    // 0x20c8ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c8b0:
    // 0x20c8b0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20c8b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20c8b4:
    // 0x20c8b4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20c8b8:
    // 0x20c8b8: 0x60f809  jalr        $v1
label_20c8bc:
    if (ctx->pc == 0x20C8BCu) {
        ctx->pc = 0x20C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B8u;
        // 0x20c8bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8C0u;
        goto label_20c8c0;
    }
    ctx->pc = 0x20C8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C8C0u);
        ctx->pc = 0x20C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B8u;
        // 0x20c8bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C8B8u, 0x20C8C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C8C0u;
label_20c8c0:
    // 0x20c8c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20c8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c8c4:
    // 0x20c8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c8c8:
    // 0x20c8c8: 0x3e00008  jr          $ra
label_20c8cc:
    if (ctx->pc == 0x20C8CCu) {
        ctx->pc = 0x20C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8C8u;
        // 0x20c8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8D0u;
        goto label_fallthrough_0x20c8c8;
    }
    ctx->pc = 0x20C8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8C8u;
        // 0x20c8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20c8c8:
    ctx->pc = 0x20C8D0u;
}
