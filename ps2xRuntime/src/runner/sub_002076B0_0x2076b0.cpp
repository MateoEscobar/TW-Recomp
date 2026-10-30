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

// Function: sub_002076B0
// Address: 0x2076b0 - 0x207730
void sub_002076B0_0x2076b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002076B0_0x2076b0");
#endif

    switch (ctx->pc) {
        case 0x2076b0u: goto label_2076b0;
        case 0x2076b4u: goto label_2076b4;
        case 0x2076b8u: goto label_2076b8;
        case 0x2076bcu: goto label_2076bc;
        case 0x2076c0u: goto label_2076c0;
        case 0x2076c4u: goto label_2076c4;
        case 0x2076c8u: goto label_2076c8;
        case 0x2076ccu: goto label_2076cc;
        case 0x2076d0u: goto label_2076d0;
        case 0x2076d4u: goto label_2076d4;
        case 0x2076d8u: goto label_2076d8;
        case 0x2076dcu: goto label_2076dc;
        case 0x2076e0u: goto label_2076e0;
        case 0x2076e4u: goto label_2076e4;
        case 0x2076e8u: goto label_2076e8;
        case 0x2076ecu: goto label_2076ec;
        case 0x2076f0u: goto label_2076f0;
        case 0x2076f4u: goto label_2076f4;
        case 0x2076f8u: goto label_2076f8;
        case 0x2076fcu: goto label_2076fc;
        case 0x207700u: goto label_207700;
        case 0x207704u: goto label_207704;
        case 0x207708u: goto label_207708;
        case 0x20770cu: goto label_20770c;
        case 0x207710u: goto label_207710;
        case 0x207714u: goto label_207714;
        case 0x207718u: goto label_207718;
        case 0x20771cu: goto label_20771c;
        case 0x207720u: goto label_207720;
        case 0x207724u: goto label_207724;
        case 0x207728u: goto label_207728;
        case 0x20772cu: goto label_20772c;
        default: break;
    }

    ctx->pc = 0x2076b0u;

label_2076b0:
    // 0x2076b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2076b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2076b4:
    // 0x2076b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2076b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2076b8:
    // 0x2076b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2076b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2076bc:
    // 0x2076bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2076bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2076c0:
    // 0x2076c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2076c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2076c4:
    // 0x2076c4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2076c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2076c8:
    // 0x2076c8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2076c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2076cc:
    // 0x2076cc: 0x40f809  jalr        $v0
label_2076d0:
    if (ctx->pc == 0x2076D0u) {
        ctx->pc = 0x2076D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076CCu;
        // 0x2076d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2076D4u;
        goto label_2076d4;
    }
    ctx->pc = 0x2076CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2076D4u);
        ctx->pc = 0x2076D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076CCu;
        // 0x2076d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2076CCu, 0x2076D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2076D4u;
label_2076d4:
    // 0x2076d4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2076d8:
    if (ctx->pc == 0x2076D8u) {
        ctx->pc = 0x2076D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076D4u;
        // 0x2076d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2076DCu;
        goto label_2076dc;
    }
    ctx->pc = 0x2076D4u;
    {
        const bool branch_taken_0x2076d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2076d4) {
            ctx->pc = 0x2076D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2076D4u;
            // 0x2076d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207720u;
            goto label_207720;
        }
    }
    ctx->pc = 0x2076DCu;
label_2076dc:
    // 0x2076dc: 0xc080ffa  jal         func_203FE8
label_2076e0:
    if (ctx->pc == 0x2076E0u) {
        ctx->pc = 0x2076E4u;
        goto label_2076e4;
    }
    ctx->pc = 0x2076DCu;
    SET_GPR_U32(ctx, 31, 0x2076E4u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x2076DCu, 0x2076E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2076E4u;
label_2076e4:
    // 0x2076e4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2076e8:
    if (ctx->pc == 0x2076E8u) {
        ctx->pc = 0x2076E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076E4u;
        // 0x2076e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2076ECu;
        goto label_2076ec;
    }
    ctx->pc = 0x2076E4u;
    {
        const bool branch_taken_0x2076e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2076e4) {
            ctx->pc = 0x2076E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2076E4u;
            // 0x2076e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207720u;
            goto label_207720;
        }
    }
    ctx->pc = 0x2076ECu;
label_2076ec:
    // 0x2076ec: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2076ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2076f0:
    // 0x2076f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2076f4:
    // 0x2076f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2076f8:
    // 0x2076f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2076f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2076fc:
    // 0x2076fc: 0x60f809  jalr        $v1
label_207700:
    if (ctx->pc == 0x207700u) {
        ctx->pc = 0x207700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076FCu;
        // 0x207700: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207704u;
        goto label_207704;
    }
    ctx->pc = 0x2076FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207704u);
        ctx->pc = 0x207700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076FCu;
        // 0x207700: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2076FCu, 0x207704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207704u;
label_207704:
    // 0x207704: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x207704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_207708:
    // 0x207708: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x207708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20770c:
    // 0x20770c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20770cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_207710:
    // 0x207710: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x207710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_207714:
    // 0x207714: 0x60f809  jalr        $v1
label_207718:
    if (ctx->pc == 0x207718u) {
        ctx->pc = 0x207718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207714u;
        // 0x207718: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20771Cu;
        goto label_20771c;
    }
    ctx->pc = 0x207714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20771Cu);
        ctx->pc = 0x207718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207714u;
        // 0x207718: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207714u, 0x20771Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20771Cu;
label_20771c:
    // 0x20771c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20771cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207720:
    // 0x207720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207724:
    // 0x207724: 0x3e00008  jr          $ra
label_207728:
    if (ctx->pc == 0x207728u) {
        ctx->pc = 0x207728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207724u;
        // 0x207728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20772Cu;
        goto label_20772c;
    }
    ctx->pc = 0x207724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207724u;
        // 0x207728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20772Cu;
label_20772c:
    // 0x20772c: 0x0  nop
    ctx->pc = 0x20772cu;
    // NOP
    ctx->pc = 0x207730u;
}
