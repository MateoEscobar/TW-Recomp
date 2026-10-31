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

// Function: sub_0010AF58
// Address: 0x10af58 - 0x10afb0
void sub_0010AF58_0x10af58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AF58_0x10af58");
#endif

    switch (ctx->pc) {
        case 0x10af78u: goto label_10af78;
        case 0x10af88u: goto label_10af88;
        case 0x10af90u: goto label_10af90;
        case 0x10af98u: goto label_10af98;
        default: break;
    }

    ctx->pc = 0x10af58u;

    // 0x10af58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10af58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10af5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10af5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10af60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10af60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10af64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10af64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af68: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10af6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10af70: 0xc05d448  jal         func_175120
    ctx->pc = 0x10AF70u;
    SET_GPR_U32(ctx, 31, 0x10AF78u);
    ctx->pc = 0x10AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF70u;
    // 0x10af74: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10AF70u, 0x10AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF78u;
label_10af78:
    // 0x10af78: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10af7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10af80: 0xc05d448  jal         func_175120
    ctx->pc = 0x10AF80u;
    SET_GPR_U32(ctx, 31, 0x10AF88u);
    ctx->pc = 0x10AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF80u;
    // 0x10af84: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10AF80u, 0x10AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF88u;
label_10af88:
    // 0x10af88: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10AF88u;
    SET_GPR_U32(ctx, 31, 0x10AF90u);
    ctx->pc = 0x10AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF88u;
    // 0x10af8c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x10AF88u, 0x10AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF90u;
label_10af90:
    // 0x10af90: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10AF90u;
    SET_GPR_U32(ctx, 31, 0x10AF98u);
    ctx->pc = 0x10AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF90u;
    // 0x10af94: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x10AF90u, 0x10AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF98u;
label_10af98:
    // 0x10af98: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x10af98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x10af9c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10afa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10afa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10afa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10afa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10afa8: 0x3e00008  jr          $ra
    ctx->pc = 0x10AFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFA8u;
        // 0x10afac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AFB0u;
}
