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

// Function: sub_00262A38
// Address: 0x262a38 - 0x262ac8
void sub_00262A38_0x262a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262A38_0x262a38");
#endif

    switch (ctx->pc) {
        case 0x262a58u: goto label_262a58;
        case 0x262a68u: goto label_262a68;
        case 0x262a70u: goto label_262a70;
        case 0x262a80u: goto label_262a80;
        case 0x262a88u: goto label_262a88;
        case 0x262a98u: goto label_262a98;
        case 0x262aa4u: goto label_262aa4;
        case 0x262ab4u: goto label_262ab4;
        default: break;
    }

    ctx->pc = 0x262a38u;

    // 0x262a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x262a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x262a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x262a48: 0x263000c4  addiu       $s0, $s1, 0xC4
    ctx->pc = 0x262a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x262a4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262a50: 0xc0e409a  jal         func_390268
    ctx->pc = 0x262A50u;
    SET_GPR_U32(ctx, 31, 0x262A58u);
    ctx->pc = 0x262A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A50u;
    // 0x262a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x262A50u, 0x262A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A58u;
label_262a58:
    // 0x262a58: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x262A58u;
    {
        const bool branch_taken_0x262a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A58u;
        // 0x262a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a58) {
            ctx->pc = 0x262AACu;
            goto label_262aac;
        }
    }
    ctx->pc = 0x262A60u;
    // 0x262a60: 0xc0e409a  jal         func_390268
    ctx->pc = 0x262A60u;
    SET_GPR_U32(ctx, 31, 0x262A68u);
    ctx->pc = 0x262A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A60u;
    // 0x262a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x262A60u, 0x262A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A68u;
label_262a68:
    // 0x262a68: 0xc0e409a  jal         func_390268
    ctx->pc = 0x262A68u;
    SET_GPR_U32(ctx, 31, 0x262A70u);
    ctx->pc = 0x262A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A68u;
    // 0x262a6c: 0x244400c4  addiu       $a0, $v0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x262A68u, 0x262A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A70u;
label_262a70:
    // 0x262a70: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x262A70u;
    {
        const bool branch_taken_0x262a70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x262A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A70u;
        // 0x262a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a70) {
            ctx->pc = 0x262AACu;
            goto label_262aac;
        }
    }
    ctx->pc = 0x262A78u;
    // 0x262a78: 0xc0e409a  jal         func_390268
    ctx->pc = 0x262A78u;
    SET_GPR_U32(ctx, 31, 0x262A80u);
    ctx->pc = 0x262A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A78u;
    // 0x262a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x262A78u, 0x262A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A80u;
label_262a80:
    // 0x262a80: 0xc088e78  jal         func_2239E0
    ctx->pc = 0x262A80u;
    SET_GPR_U32(ctx, 31, 0x262A88u);
    ctx->pc = 0x262A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A80u;
    // 0x262a84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x262A80u, 0x262A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A88u;
label_262a88:
    // 0x262a88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x262A88u;
    {
        const bool branch_taken_0x262a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A88u;
        // 0x262a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a88) {
            ctx->pc = 0x262AACu;
            goto label_262aac;
        }
    }
    ctx->pc = 0x262A90u;
    // 0x262a90: 0xc0e409a  jal         func_390268
    ctx->pc = 0x262A90u;
    SET_GPR_U32(ctx, 31, 0x262A98u);
    ctx->pc = 0x262A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A90u;
    // 0x262a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x262A90u, 0x262A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A98u;
label_262a98:
    // 0x262a98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x262a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a9c: 0xc08af38  jal         func_22BCE0
    ctx->pc = 0x262A9Cu;
    SET_GPR_U32(ctx, 31, 0x262AA4u);
    ctx->pc = 0x262AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A9Cu;
    // 0x262aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCE0u, 0x262A9Cu, 0x262AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AA4u;
label_262aa4:
    // 0x262aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262AA4u;
    {
        const bool branch_taken_0x262aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AA4u;
        // 0x262aa8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262aa4) {
            ctx->pc = 0x262AB8u;
            goto label_262ab8;
        }
    }
    ctx->pc = 0x262AACu;
label_262aac:
    // 0x262aac: 0xc08af70  jal         func_22BDC0
    ctx->pc = 0x262AACu;
    SET_GPR_U32(ctx, 31, 0x262AB4u);
    ctx->pc = 0x262AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262AACu;
    // 0x262ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDC0u, 0x262AACu, 0x262AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AB4u;
label_262ab4:
    // 0x262ab4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x262ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_262ab8:
    // 0x262ab8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x262AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AC0u;
        // 0x262ac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262AC8u;
}
