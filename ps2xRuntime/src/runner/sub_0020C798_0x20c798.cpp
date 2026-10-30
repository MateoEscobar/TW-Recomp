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

// Function: sub_0020C798
// Address: 0x20c798 - 0x20c830
void sub_0020C798_0x20c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C798_0x20c798");
#endif

    switch (ctx->pc) {
        case 0x20c798u: goto label_20c798;
        case 0x20c79cu: goto label_20c79c;
        case 0x20c7a0u: goto label_20c7a0;
        case 0x20c7a4u: goto label_20c7a4;
        case 0x20c7a8u: goto label_20c7a8;
        case 0x20c7acu: goto label_20c7ac;
        case 0x20c7b0u: goto label_20c7b0;
        case 0x20c7b4u: goto label_20c7b4;
        case 0x20c7b8u: goto label_20c7b8;
        case 0x20c7bcu: goto label_20c7bc;
        case 0x20c7c0u: goto label_20c7c0;
        case 0x20c7c4u: goto label_20c7c4;
        case 0x20c7c8u: goto label_20c7c8;
        case 0x20c7ccu: goto label_20c7cc;
        case 0x20c7d0u: goto label_20c7d0;
        case 0x20c7d4u: goto label_20c7d4;
        case 0x20c7d8u: goto label_20c7d8;
        case 0x20c7dcu: goto label_20c7dc;
        case 0x20c7e0u: goto label_20c7e0;
        case 0x20c7e4u: goto label_20c7e4;
        case 0x20c7e8u: goto label_20c7e8;
        case 0x20c7ecu: goto label_20c7ec;
        case 0x20c7f0u: goto label_20c7f0;
        case 0x20c7f4u: goto label_20c7f4;
        case 0x20c7f8u: goto label_20c7f8;
        case 0x20c7fcu: goto label_20c7fc;
        case 0x20c800u: goto label_20c800;
        case 0x20c804u: goto label_20c804;
        case 0x20c808u: goto label_20c808;
        case 0x20c80cu: goto label_20c80c;
        case 0x20c810u: goto label_20c810;
        case 0x20c814u: goto label_20c814;
        case 0x20c818u: goto label_20c818;
        case 0x20c81cu: goto label_20c81c;
        case 0x20c820u: goto label_20c820;
        case 0x20c824u: goto label_20c824;
        case 0x20c828u: goto label_20c828;
        case 0x20c82cu: goto label_20c82c;
        default: break;
    }

    ctx->pc = 0x20c798u;

label_20c798:
    // 0x20c798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20c79c:
    // 0x20c79c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20c7a0:
    // 0x20c7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c7a4:
    // 0x20c7a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c7a8:
    // 0x20c7a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20c7ac:
    // 0x20c7ac: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20c7acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20c7b0:
    // 0x20c7b0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20c7b4:
    // 0x20c7b4: 0x40f809  jalr        $v0
label_20c7b8:
    if (ctx->pc == 0x20C7B8u) {
        ctx->pc = 0x20C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7B4u;
        // 0x20c7b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7BCu;
        goto label_20c7bc;
    }
    ctx->pc = 0x20C7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C7BCu);
        ctx->pc = 0x20C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7B4u;
        // 0x20c7b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C7B4u, 0x20C7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C7BCu;
label_20c7bc:
    // 0x20c7bc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_20c7c0:
    if (ctx->pc == 0x20C7C0u) {
        ctx->pc = 0x20C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7BCu;
        // 0x20c7c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7C4u;
        goto label_20c7c4;
    }
    ctx->pc = 0x20C7BCu;
    {
        const bool branch_taken_0x20c7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7bc) {
            ctx->pc = 0x20C7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7BCu;
            // 0x20c7c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C820u;
            goto label_20c820;
        }
    }
    ctx->pc = 0x20C7C4u;
label_20c7c4:
    // 0x20c7c4: 0xc080ffa  jal         func_203FE8
label_20c7c8:
    if (ctx->pc == 0x20C7C8u) {
        ctx->pc = 0x20C7CCu;
        goto label_20c7cc;
    }
    ctx->pc = 0x20C7C4u;
    SET_GPR_U32(ctx, 31, 0x20C7CCu);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x20C7C4u, 0x20C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7CCu;
label_20c7cc:
    // 0x20c7cc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_20c7d0:
    if (ctx->pc == 0x20C7D0u) {
        ctx->pc = 0x20C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7CCu;
        // 0x20c7d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7D4u;
        goto label_20c7d4;
    }
    ctx->pc = 0x20C7CCu;
    {
        const bool branch_taken_0x20c7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c7cc) {
            ctx->pc = 0x20C7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7CCu;
            // 0x20c7d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C820u;
            goto label_20c820;
        }
    }
    ctx->pc = 0x20C7D4u;
label_20c7d4:
    // 0x20c7d4: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x20c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20c7d8:
    // 0x20c7d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c7dc:
    // 0x20c7dc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20c7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20c7e0:
    // 0x20c7e0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20c7e4:
    // 0x20c7e4: 0x60f809  jalr        $v1
label_20c7e8:
    if (ctx->pc == 0x20C7E8u) {
        ctx->pc = 0x20C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7E4u;
        // 0x20c7e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7ECu;
        goto label_20c7ec;
    }
    ctx->pc = 0x20C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C7ECu);
        ctx->pc = 0x20C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7E4u;
        // 0x20c7e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C7E4u, 0x20C7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C7ECu;
label_20c7ec:
    // 0x20c7ec: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20c7f0:
    // 0x20c7f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c7f4:
    // 0x20c7f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20c7f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20c7f8:
    // 0x20c7f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20c7fc:
    // 0x20c7fc: 0x60f809  jalr        $v1
label_20c800:
    if (ctx->pc == 0x20C800u) {
        ctx->pc = 0x20C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7FCu;
        // 0x20c800: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C804u;
        goto label_20c804;
    }
    ctx->pc = 0x20C7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C804u);
        ctx->pc = 0x20C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7FCu;
        // 0x20c800: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C7FCu, 0x20C804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C804u;
label_20c804:
    // 0x20c804: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20c804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20c808:
    // 0x20c808: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c80c:
    // 0x20c80c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20c80cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20c810:
    // 0x20c810: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20c814:
    // 0x20c814: 0x60f809  jalr        $v1
label_20c818:
    if (ctx->pc == 0x20C818u) {
        ctx->pc = 0x20C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C814u;
        // 0x20c818: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C81Cu;
        goto label_20c81c;
    }
    ctx->pc = 0x20C814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C81Cu);
        ctx->pc = 0x20C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C814u;
        // 0x20c818: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C814u, 0x20C81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C81Cu;
label_20c81c:
    // 0x20c81c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20c81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c820:
    // 0x20c820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c824:
    // 0x20c824: 0x3e00008  jr          $ra
label_20c828:
    if (ctx->pc == 0x20C828u) {
        ctx->pc = 0x20C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C824u;
        // 0x20c828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C82Cu;
        goto label_20c82c;
    }
    ctx->pc = 0x20C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C824u;
        // 0x20c828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C82Cu;
label_20c82c:
    // 0x20c82c: 0x0  nop
    ctx->pc = 0x20c82cu;
    // NOP
    ctx->pc = 0x20c830u;
}
