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

// Function: sub_0030C000
// Address: 0x30c000 - 0x30c040
void sub_0030C000_0x30c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C000_0x30c000");
#endif

    switch (ctx->pc) {
        case 0x30c014u: goto label_30c014;
        case 0x30c020u: goto label_30c020;
        case 0x30c028u: goto label_30c028;
        case 0x30c030u: goto label_30c030;
        default: break;
    }

    ctx->pc = 0x30c000u;

    // 0x30c000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c004: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30c004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30c008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c00c: 0xc0c2e04  jal         func_30B810
    ctx->pc = 0x30C00Cu;
    SET_GPR_U32(ctx, 31, 0x30C014u);
    ctx->pc = 0x30C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C00Cu;
    // 0x30c010: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B810u, 0x30C00Cu, 0x30C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C014u;
label_30c014:
    // 0x30c014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30c014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c018: 0xc0c2f18  jal         func_30BC60
    ctx->pc = 0x30C018u;
    SET_GPR_U32(ctx, 31, 0x30C020u);
    ctx->pc = 0x30C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C018u;
    // 0x30c01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BC60u, 0x30C018u, 0x30C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C020u;
label_30c020:
    // 0x30c020: 0xc05a53a  jal         func_1694E8
    ctx->pc = 0x30C020u;
    SET_GPR_U32(ctx, 31, 0x30C028u);
    ctx->pc = 0x30C024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C020u;
    // 0x30c024: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694E8u, 0x30C020u, 0x30C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C028u;
label_30c028:
    // 0x30c028: 0xc05a55c  jal         func_169570
    ctx->pc = 0x30C028u;
    SET_GPR_U32(ctx, 31, 0x30C030u);
    ctx->pc = 0x30C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C028u;
    // 0x30c02c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169570u, 0x30C028u, 0x30C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C030u;
label_30c030:
    // 0x30c030: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30c030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c038: 0x3e00008  jr          $ra
    ctx->pc = 0x30C038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C038u;
        // 0x30c03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C040u;
}
