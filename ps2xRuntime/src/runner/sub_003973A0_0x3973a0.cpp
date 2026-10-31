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

// Function: sub_003973A0
// Address: 0x3973a0 - 0x397400
void sub_003973A0_0x3973a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003973A0_0x3973a0");
#endif

    switch (ctx->pc) {
        case 0x3973b8u: goto label_3973b8;
        case 0x3973ccu: goto label_3973cc;
        case 0x3973e0u: goto label_3973e0;
        case 0x3973ecu: goto label_3973ec;
        default: break;
    }

    ctx->pc = 0x3973a0u;

    // 0x3973a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3973a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3973a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3973a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3973a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3973a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3973ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3973acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3973b0: 0xc0e4080  jal         func_390200
    ctx->pc = 0x3973B0u;
    SET_GPR_U32(ctx, 31, 0x3973B8u);
    ctx->pc = 0x3973B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3973B0u;
    // 0x3973b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3973B0u, 0x3973B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3973B8u;
label_3973b8:
    // 0x3973b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3973b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3973bc: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3973BCu;
    {
        const bool branch_taken_0x3973bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3973bc) {
            ctx->pc = 0x3973C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3973BCu;
            // 0x3973c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3973F0u;
            goto label_3973f0;
        }
    }
    ctx->pc = 0x3973C4u;
    // 0x3973c4: 0xc0e5408  jal         func_395020
    ctx->pc = 0x3973C4u;
    SET_GPR_U32(ctx, 31, 0x3973CCu);
    ctx->pc = 0x3973C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3973C4u;
    // 0x3973c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395020u, 0x3973C4u, 0x3973CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3973CCu;
label_3973cc:
    // 0x3973cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3973CCu;
    {
        const bool branch_taken_0x3973cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3973cc) {
            ctx->pc = 0x3973D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3973CCu;
            // 0x3973d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3973F0u;
            goto label_3973f0;
        }
    }
    ctx->pc = 0x3973D4u;
    // 0x3973d4: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3973d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x3973d8: 0xc0e9290  jal         func_3A4A40
    ctx->pc = 0x3973D8u;
    SET_GPR_U32(ctx, 31, 0x3973E0u);
    ctx->pc = 0x3973DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3973D8u;
    // 0x3973dc: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3973D8u, 0x3973E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3973E0u;
label_3973e0:
    // 0x3973e0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3973e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x3973e4: 0xc0e9290  jal         func_3A4A40
    ctx->pc = 0x3973E4u;
    SET_GPR_U32(ctx, 31, 0x3973ECu);
    ctx->pc = 0x3973E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3973E4u;
    // 0x3973e8: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3973E4u, 0x3973ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3973ECu;
label_3973ec:
    // 0x3973ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3973ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3973f0:
    // 0x3973f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3973f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3973f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3973F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3973F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973F4u;
        // 0x3973f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3973F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3973FCu;
    // 0x3973fc: 0x0  nop
    ctx->pc = 0x3973fcu;
    // NOP
    ctx->pc = 0x397400u;
}
