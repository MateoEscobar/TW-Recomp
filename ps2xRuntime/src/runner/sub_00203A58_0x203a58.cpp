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

// Function: sub_00203A58
// Address: 0x203a58 - 0x203af8
void sub_00203A58_0x203a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203A58_0x203a58");
#endif

    switch (ctx->pc) {
        case 0x203a58u: goto label_203a58;
        case 0x203a5cu: goto label_203a5c;
        case 0x203a60u: goto label_203a60;
        case 0x203a64u: goto label_203a64;
        case 0x203a68u: goto label_203a68;
        case 0x203a6cu: goto label_203a6c;
        case 0x203a70u: goto label_203a70;
        case 0x203a74u: goto label_203a74;
        case 0x203a78u: goto label_203a78;
        case 0x203a7cu: goto label_203a7c;
        case 0x203a80u: goto label_203a80;
        case 0x203a84u: goto label_203a84;
        case 0x203a88u: goto label_203a88;
        case 0x203a8cu: goto label_203a8c;
        case 0x203a90u: goto label_203a90;
        case 0x203a94u: goto label_203a94;
        case 0x203a98u: goto label_203a98;
        case 0x203a9cu: goto label_203a9c;
        case 0x203aa0u: goto label_203aa0;
        case 0x203aa4u: goto label_203aa4;
        case 0x203aa8u: goto label_203aa8;
        case 0x203aacu: goto label_203aac;
        case 0x203ab0u: goto label_203ab0;
        case 0x203ab4u: goto label_203ab4;
        case 0x203ab8u: goto label_203ab8;
        case 0x203abcu: goto label_203abc;
        case 0x203ac0u: goto label_203ac0;
        case 0x203ac4u: goto label_203ac4;
        case 0x203ac8u: goto label_203ac8;
        case 0x203accu: goto label_203acc;
        case 0x203ad0u: goto label_203ad0;
        case 0x203ad4u: goto label_203ad4;
        case 0x203ad8u: goto label_203ad8;
        case 0x203adcu: goto label_203adc;
        case 0x203ae0u: goto label_203ae0;
        case 0x203ae4u: goto label_203ae4;
        case 0x203ae8u: goto label_203ae8;
        case 0x203aecu: goto label_203aec;
        case 0x203af0u: goto label_203af0;
        case 0x203af4u: goto label_203af4;
        default: break;
    }

    ctx->pc = 0x203a58u;

label_203a58:
    // 0x203a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_203a5c:
    // 0x203a5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x203a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_203a60:
    // 0x203a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203a64:
    // 0x203a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203a68:
    // 0x203a68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203a6c:
    // 0x203a6c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x203a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_203a70:
    // 0x203a70: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x203a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_203a74:
    // 0x203a74: 0x40f809  jalr        $v0
label_203a78:
    if (ctx->pc == 0x203A78u) {
        ctx->pc = 0x203A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A74u;
        // 0x203a78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A7Cu;
        goto label_203a7c;
    }
    ctx->pc = 0x203A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203A7Cu);
        ctx->pc = 0x203A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A74u;
        // 0x203a78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A74u, 0x203A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203A7Cu;
label_203a7c:
    // 0x203a7c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_203a80:
    if (ctx->pc == 0x203A80u) {
        ctx->pc = 0x203A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A7Cu;
        // 0x203a80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A84u;
        goto label_203a84;
    }
    ctx->pc = 0x203A7Cu;
    {
        const bool branch_taken_0x203a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203a7c) {
            ctx->pc = 0x203A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203A7Cu;
            // 0x203a80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203AECu;
            goto label_203aec;
        }
    }
    ctx->pc = 0x203A84u;
label_203a84:
    // 0x203a84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x203a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203a88:
    // 0x203a88: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x203a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_203a8c:
    // 0x203a8c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x203a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_203a90:
    // 0x203a90: 0x40f809  jalr        $v0
label_203a94:
    if (ctx->pc == 0x203A94u) {
        ctx->pc = 0x203A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A90u;
        // 0x203a94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A98u;
        goto label_203a98;
    }
    ctx->pc = 0x203A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203A98u);
        ctx->pc = 0x203A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A90u;
        // 0x203a94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A90u, 0x203A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203A98u;
label_203a98:
    // 0x203a98: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_203a9c:
    if (ctx->pc == 0x203A9Cu) {
        ctx->pc = 0x203A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A98u;
        // 0x203a9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AA0u;
        goto label_203aa0;
    }
    ctx->pc = 0x203A98u;
    {
        const bool branch_taken_0x203a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203a98) {
            ctx->pc = 0x203A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203A98u;
            // 0x203a9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203AECu;
            goto label_203aec;
        }
    }
    ctx->pc = 0x203AA0u;
label_203aa0:
    // 0x203aa0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x203aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_203aa4:
    // 0x203aa4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203aa8:
    // 0x203aa8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x203aa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_203aac:
    // 0x203aac: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x203aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_203ab0:
    // 0x203ab0: 0x60f809  jalr        $v1
label_203ab4:
    if (ctx->pc == 0x203AB4u) {
        ctx->pc = 0x203AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AB0u;
        // 0x203ab4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AB8u;
        goto label_203ab8;
    }
    ctx->pc = 0x203AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203AB8u);
        ctx->pc = 0x203AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AB0u;
        // 0x203ab4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AB0u, 0x203AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203AB8u;
label_203ab8:
    // 0x203ab8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x203ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_203abc:
    // 0x203abc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203ac0:
    // 0x203ac0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x203ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_203ac4:
    // 0x203ac4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x203ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_203ac8:
    // 0x203ac8: 0x60f809  jalr        $v1
label_203acc:
    if (ctx->pc == 0x203ACCu) {
        ctx->pc = 0x203ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AC8u;
        // 0x203acc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AD0u;
        goto label_203ad0;
    }
    ctx->pc = 0x203AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203AD0u);
        ctx->pc = 0x203ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AC8u;
        // 0x203acc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AC8u, 0x203AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203AD0u;
label_203ad0:
    // 0x203ad0: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x203ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_203ad4:
    // 0x203ad4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203ad8:
    // 0x203ad8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x203ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_203adc:
    // 0x203adc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x203adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_203ae0:
    // 0x203ae0: 0x60f809  jalr        $v1
label_203ae4:
    if (ctx->pc == 0x203AE4u) {
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE0u;
        // 0x203ae4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AE8u;
        goto label_203ae8;
    }
    ctx->pc = 0x203AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203AE8u);
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE0u;
        // 0x203ae4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AE0u, 0x203AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203AE8u;
label_203ae8:
    // 0x203ae8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x203ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203aec:
    // 0x203aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203af0:
    // 0x203af0: 0x3e00008  jr          $ra
label_203af4:
    if (ctx->pc == 0x203AF4u) {
        ctx->pc = 0x203AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF0u;
        // 0x203af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AF8u;
        goto label_fallthrough_0x203af0;
    }
    ctx->pc = 0x203AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF0u;
        // 0x203af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203af0:
    ctx->pc = 0x203AF8u;
}
