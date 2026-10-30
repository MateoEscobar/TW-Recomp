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

// Function: sub_0023A1B0
// Address: 0x23a1b0 - 0x23a210
void sub_0023A1B0_0x23a1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A1B0_0x23a1b0");
#endif

    switch (ctx->pc) {
        case 0x23a1ccu: goto label_23a1cc;
        case 0x23a1d4u: goto label_23a1d4;
        case 0x23a1f0u: goto label_23a1f0;
        case 0x23a200u: goto label_23a200;
        default: break;
    }

    ctx->pc = 0x23a1b0u;

    // 0x23a1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a1b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23a1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23a1b8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23a1bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23a1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a1c4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A1C4u;
    SET_GPR_U32(ctx, 31, 0x23A1CCu);
    ctx->pc = 0x23A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1C4u;
    // 0x23a1c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A1C4u, 0x23A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A1CCu;
label_23a1cc:
    // 0x23a1cc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23A1CCu;
    SET_GPR_U32(ctx, 31, 0x23A1D4u);
    ctx->pc = 0x23A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1CCu;
    // 0x23a1d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23A1CCu, 0x23A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A1D4u;
label_23a1d4:
    // 0x23a1d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1d8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A1D8u;
    {
        const bool branch_taken_0x23a1d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1D8u;
        // 0x23a1dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1d8) {
            ctx->pc = 0x23A200u;
            goto label_23a200;
        }
    }
    ctx->pc = 0x23A1E0u;
    // 0x23a1e0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A1E0u;
    {
        const bool branch_taken_0x23a1e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a1e0) {
            ctx->pc = 0x23A1F8u;
            goto label_23a1f8;
        }
    }
    ctx->pc = 0x23A1E8u;
    // 0x23a1e8: 0xc08bfa0  jal         func_22FE80
    ctx->pc = 0x23A1E8u;
    SET_GPR_U32(ctx, 31, 0x23A1F0u);
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x23A1E8u, 0x23A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A1F0u;
label_23a1f0:
    // 0x23a1f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A1F0u;
    {
        const bool branch_taken_0x23a1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1F0u;
        // 0x23a1f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1f0) {
            ctx->pc = 0x23A204u;
            goto label_23a204;
        }
    }
    ctx->pc = 0x23A1F8u;
label_23a1f8:
    // 0x23a1f8: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x23A1F8u;
    SET_GPR_U32(ctx, 31, 0x23A200u);
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x23A1F8u, 0x23A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A200u;
label_23a200:
    // 0x23a200: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23a200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a204:
    // 0x23a204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a208: 0x3e00008  jr          $ra
    ctx->pc = 0x23A208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A208u;
        // 0x23a20c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A210u;
}
