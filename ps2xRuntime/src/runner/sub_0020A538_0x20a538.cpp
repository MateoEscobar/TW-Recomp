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

// Function: sub_0020A538
// Address: 0x20a538 - 0x20a5c0
void sub_0020A538_0x20a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A538_0x20a538");
#endif

    switch (ctx->pc) {
        case 0x20a538u: goto label_20a538;
        case 0x20a53cu: goto label_20a53c;
        case 0x20a540u: goto label_20a540;
        case 0x20a544u: goto label_20a544;
        case 0x20a548u: goto label_20a548;
        case 0x20a54cu: goto label_20a54c;
        case 0x20a550u: goto label_20a550;
        case 0x20a554u: goto label_20a554;
        case 0x20a558u: goto label_20a558;
        case 0x20a55cu: goto label_20a55c;
        case 0x20a560u: goto label_20a560;
        case 0x20a564u: goto label_20a564;
        case 0x20a568u: goto label_20a568;
        case 0x20a56cu: goto label_20a56c;
        case 0x20a570u: goto label_20a570;
        case 0x20a574u: goto label_20a574;
        case 0x20a578u: goto label_20a578;
        case 0x20a57cu: goto label_20a57c;
        case 0x20a580u: goto label_20a580;
        case 0x20a584u: goto label_20a584;
        case 0x20a588u: goto label_20a588;
        case 0x20a58cu: goto label_20a58c;
        case 0x20a590u: goto label_20a590;
        case 0x20a594u: goto label_20a594;
        case 0x20a598u: goto label_20a598;
        case 0x20a59cu: goto label_20a59c;
        case 0x20a5a0u: goto label_20a5a0;
        case 0x20a5a4u: goto label_20a5a4;
        case 0x20a5a8u: goto label_20a5a8;
        case 0x20a5acu: goto label_20a5ac;
        case 0x20a5b0u: goto label_20a5b0;
        case 0x20a5b4u: goto label_20a5b4;
        case 0x20a5b8u: goto label_20a5b8;
        case 0x20a5bcu: goto label_20a5bc;
        default: break;
    }

    ctx->pc = 0x20a538u;

label_20a538:
    // 0x20a538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20a53c:
    // 0x20a53c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20a540:
    // 0x20a540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a544:
    // 0x20a544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a548:
    // 0x20a548: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a54c:
    // 0x20a54c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20a54cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20a550:
    // 0x20a550: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20a554:
    // 0x20a554: 0x40f809  jalr        $v0
label_20a558:
    if (ctx->pc == 0x20A558u) {
        ctx->pc = 0x20A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A554u;
        // 0x20a558: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A55Cu;
        goto label_20a55c;
    }
    ctx->pc = 0x20A554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A55Cu);
        ctx->pc = 0x20A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A554u;
        // 0x20a558: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A554u, 0x20A55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A55Cu;
label_20a55c:
    // 0x20a55c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_20a560:
    if (ctx->pc == 0x20A560u) {
        ctx->pc = 0x20A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A55Cu;
        // 0x20a560: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A564u;
        goto label_20a564;
    }
    ctx->pc = 0x20A55Cu;
    {
        const bool branch_taken_0x20a55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a55c) {
            ctx->pc = 0x20A560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A55Cu;
            // 0x20a560: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A5B4u;
            goto label_20a5b4;
        }
    }
    ctx->pc = 0x20A564u;
label_20a564:
    // 0x20a564: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a568:
    // 0x20a568: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20a56c:
    // 0x20a56c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20a570:
    // 0x20a570: 0x40f809  jalr        $v0
label_20a574:
    if (ctx->pc == 0x20A574u) {
        ctx->pc = 0x20A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A570u;
        // 0x20a574: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A578u;
        goto label_20a578;
    }
    ctx->pc = 0x20A570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A578u);
        ctx->pc = 0x20A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A570u;
        // 0x20a574: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A570u, 0x20A578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A578u;
label_20a578:
    // 0x20a578: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_20a57c:
    if (ctx->pc == 0x20A57Cu) {
        ctx->pc = 0x20A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A578u;
        // 0x20a57c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A580u;
        goto label_20a580;
    }
    ctx->pc = 0x20A578u;
    {
        const bool branch_taken_0x20a578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a578) {
            ctx->pc = 0x20A57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A578u;
            // 0x20a57c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A5B4u;
            goto label_20a5b4;
        }
    }
    ctx->pc = 0x20A580u;
label_20a580:
    // 0x20a580: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20a580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20a584:
    // 0x20a584: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a588:
    // 0x20a588: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20a588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20a58c:
    // 0x20a58c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20a590:
    // 0x20a590: 0x60f809  jalr        $v1
label_20a594:
    if (ctx->pc == 0x20A594u) {
        ctx->pc = 0x20A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A590u;
        // 0x20a594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A598u;
        goto label_20a598;
    }
    ctx->pc = 0x20A590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A598u);
        ctx->pc = 0x20A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A590u;
        // 0x20a594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A590u, 0x20A598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A598u;
label_20a598:
    // 0x20a598: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x20a598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20a59c:
    // 0x20a59c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a5a0:
    // 0x20a5a0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20a5a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20a5a4:
    // 0x20a5a4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20a5a8:
    // 0x20a5a8: 0x60f809  jalr        $v1
label_20a5ac:
    if (ctx->pc == 0x20A5ACu) {
        ctx->pc = 0x20A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5A8u;
        // 0x20a5ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5B0u;
        goto label_20a5b0;
    }
    ctx->pc = 0x20A5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A5B0u);
        ctx->pc = 0x20A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5A8u;
        // 0x20a5ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A5A8u, 0x20A5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A5B0u;
label_20a5b0:
    // 0x20a5b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20a5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a5b4:
    // 0x20a5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a5b8:
    // 0x20a5b8: 0x3e00008  jr          $ra
label_20a5bc:
    if (ctx->pc == 0x20A5BCu) {
        ctx->pc = 0x20A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5B8u;
        // 0x20a5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5C0u;
        goto label_fallthrough_0x20a5b8;
    }
    ctx->pc = 0x20A5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5B8u;
        // 0x20a5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20a5b8:
    ctx->pc = 0x20A5C0u;
}
