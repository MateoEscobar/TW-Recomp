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

// Function: sub_001C2838
// Address: 0x1c2838 - 0x1c28c8
void sub_001C2838_0x1c2838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2838_0x1c2838");
#endif

    switch (ctx->pc) {
        case 0x1c287cu: goto label_1c287c;
        case 0x1c288cu: goto label_1c288c;
        case 0x1c28a0u: goto label_1c28a0;
        case 0x1c28b0u: goto label_1c28b0;
        default: break;
    }

    ctx->pc = 0x1c2838u;

    // 0x1c2838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c283c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c284c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1c284cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x1c2850: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x1c2850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1c2854: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C2854u;
    {
        const bool branch_taken_0x1c2854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2854) {
            ctx->pc = 0x1C2858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2854u;
            // 0x1c2858: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C28B8u;
            goto label_1c28b8;
        }
    }
    ctx->pc = 0x1C285Cu;
    // 0x1c285c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1c285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1c2860: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2860u;
    {
        const bool branch_taken_0x1c2860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2860u;
        // 0x1c2864: 0x26110070  addiu       $s1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2860) {
            ctx->pc = 0x1C2898u;
            goto label_1c2898;
        }
    }
    ctx->pc = 0x1C2868u;
    // 0x1c2868: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1c286c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C286Cu;
    {
        const bool branch_taken_0x1c286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c286c) {
            ctx->pc = 0x1C2898u;
            goto label_1c2898;
        }
    }
    ctx->pc = 0x1C2874u;
    // 0x1c2874: 0xc06d850  jal         func_1B6140
    ctx->pc = 0x1C2874u;
    SET_GPR_U32(ctx, 31, 0x1C287Cu);
    ctx->pc = 0x1C2878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2874u;
    // 0x1c2878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6140u, 0x1C2874u, 0x1C287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C287Cu;
label_1c287c:
    // 0x1c287c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C287Cu;
    {
        const bool branch_taken_0x1c287c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C287Cu;
        // 0x1c2880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c287c) {
            ctx->pc = 0x1C2890u;
            goto label_1c2890;
        }
    }
    ctx->pc = 0x1C2884u;
    // 0x1c2884: 0xc06d840  jal         func_1B6100
    ctx->pc = 0x1C2884u;
    SET_GPR_U32(ctx, 31, 0x1C288Cu);
    ctx->pc = 0x1C2888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2884u;
    // 0x1c2888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6100u, 0x1C2884u, 0x1C288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C288Cu;
label_1c288c:
    // 0x1c288c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2890:
    // 0x1c2890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2890u;
    {
        const bool branch_taken_0x1c2890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2890u;
        // 0x1c2894: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2890) {
            ctx->pc = 0x1C28B4u;
            goto label_1c28b4;
        }
    }
    ctx->pc = 0x1C2898u;
label_1c2898:
    // 0x1c2898: 0xc06d850  jal         func_1B6140
    ctx->pc = 0x1C2898u;
    SET_GPR_U32(ctx, 31, 0x1C28A0u);
    ctx->pc = 0x1C289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2898u;
    // 0x1c289c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6140u, 0x1C2898u, 0x1C28A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28A0u;
label_1c28a0:
    // 0x1c28a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C28A0u;
    {
        const bool branch_taken_0x1c28a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c28a0) {
            ctx->pc = 0x1C28A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C28A0u;
            // 0x1c28a4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C28B4u;
            goto label_1c28b4;
        }
    }
    ctx->pc = 0x1C28A8u;
    // 0x1c28a8: 0xc06d848  jal         func_1B6120
    ctx->pc = 0x1C28A8u;
    SET_GPR_U32(ctx, 31, 0x1C28B0u);
    ctx->pc = 0x1C28ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28A8u;
    // 0x1c28ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6120u, 0x1C28A8u, 0x1C28B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28B0u;
label_1c28b0:
    // 0x1c28b0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1c28b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_1c28b4:
    // 0x1c28b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c28b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c28b8:
    // 0x1c28b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c28b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c28bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c28bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c28c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C28C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28C0u;
        // 0x1c28c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C28C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C28C8u;
}
