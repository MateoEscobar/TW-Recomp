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

// Function: sub_002FA770
// Address: 0x2fa770 - 0x2fa800
void sub_002FA770_0x2fa770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA770_0x2fa770");
#endif

    switch (ctx->pc) {
        case 0x2fa7a4u: goto label_2fa7a4;
        case 0x2fa7b4u: goto label_2fa7b4;
        case 0x2fa7ccu: goto label_2fa7cc;
        case 0x2fa7dcu: goto label_2fa7dc;
        default: break;
    }

    ctx->pc = 0x2fa770u;

    // 0x2fa770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fa770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa774: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fa774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fa778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa77c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FA77Cu;
    {
        const bool branch_taken_0x2fa77c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA77Cu;
        // 0x2fa780: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa77c) {
            ctx->pc = 0x2FA7E8u;
            goto label_2fa7e8;
        }
    }
    ctx->pc = 0x2FA784u;
    // 0x2fa784: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fa784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa788: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2fa788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa78c: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x2fa78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fa790: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FA790u;
    {
        const bool branch_taken_0x2fa790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2FA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA790u;
        // 0x2fa794: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa790) {
            ctx->pc = 0x2FA7BCu;
            goto label_2fa7bc;
        }
    }
    ctx->pc = 0x2FA798u;
    // 0x2fa798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fa798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa79c: 0xc089998  jal         func_226660
    ctx->pc = 0x2FA79Cu;
    SET_GPR_U32(ctx, 31, 0x2FA7A4u);
    ctx->pc = 0x2FA7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA79Cu;
    // 0x2fa7a0: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FA79Cu, 0x2FA7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7A4u;
label_2fa7a4:
    // 0x2fa7a4: 0x14510011  bne         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FA7A4u;
    {
        const bool branch_taken_0x2fa7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2FA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7A4u;
        // 0x2fa7a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7a4) {
            ctx->pc = 0x2FA7ECu;
            goto label_2fa7ec;
        }
    }
    ctx->pc = 0x2FA7ACu;
    // 0x2fa7ac: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x2FA7ACu;
    SET_GPR_U32(ctx, 31, 0x2FA7B4u);
    ctx->pc = 0x2FA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA7ACu;
    // 0x2fa7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x2FA7ACu, 0x2FA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7B4u;
label_2fa7b4:
    // 0x2fa7b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FA7B4u;
    {
        const bool branch_taken_0x2fa7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7B4u;
        // 0x2fa7b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7b4) {
            ctx->pc = 0x2FA7ECu;
            goto label_2fa7ec;
        }
    }
    ctx->pc = 0x2FA7BCu;
label_2fa7bc:
    // 0x2fa7bc: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2fa7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2fa7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fa7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa7c4: 0xc089998  jal         func_226660
    ctx->pc = 0x2FA7C4u;
    SET_GPR_U32(ctx, 31, 0x2FA7CCu);
    ctx->pc = 0x2FA7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA7C4u;
    // 0x2fa7c8: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FA7C4u, 0x2FA7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7CCu;
label_2fa7cc:
    // 0x2fa7cc: 0x54510007  bnel        $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA7CCu;
    {
        const bool branch_taken_0x2fa7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2fa7cc) {
            ctx->pc = 0x2FA7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA7CCu;
            // 0x2fa7d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA7ECu;
            goto label_2fa7ec;
        }
    }
    ctx->pc = 0x2FA7D4u;
    // 0x2fa7d4: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2FA7D4u;
    SET_GPR_U32(ctx, 31, 0x2FA7DCu);
    ctx->pc = 0x2FA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA7D4u;
    // 0x2fa7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2FA7D4u, 0x2FA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7DCu;
label_2fa7dc:
    // 0x2fa7dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fa7dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa7e0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA7E0u;
    {
        const bool branch_taken_0x2fa7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7E0u;
        // 0x2fa7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7e0) {
            ctx->pc = 0x2FA7ECu;
            goto label_2fa7ec;
        }
    }
    ctx->pc = 0x2FA7E8u;
label_2fa7e8:
    // 0x2fa7e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa7ec:
    // 0x2fa7ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fa7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa7f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7F8u;
        // 0x2fa7fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA800u;
}
