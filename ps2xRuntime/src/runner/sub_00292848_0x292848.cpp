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

// Function: sub_00292848
// Address: 0x292848 - 0x292890
void sub_00292848_0x292848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292848_0x292848");
#endif

    switch (ctx->pc) {
        case 0x292864u: goto label_292864;
        case 0x29286cu: goto label_29286c;
        case 0x29287cu: goto label_29287c;
        default: break;
    }

    ctx->pc = 0x292848u;

    // 0x292848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29284c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29284cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292850: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29285c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x29285Cu;
    SET_GPR_U32(ctx, 31, 0x292864u);
    ctx->pc = 0x292860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29285Cu;
    // 0x292860: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x29285Cu, 0x292864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292864u;
label_292864:
    // 0x292864: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292864u;
    SET_GPR_U32(ctx, 31, 0x29286Cu);
    ctx->pc = 0x292868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292864u;
    // 0x292868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292864u, 0x29286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29286Cu;
label_29286c:
    // 0x29286c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29286Cu;
    {
        const bool branch_taken_0x29286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29286c) {
            ctx->pc = 0x292870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29286Cu;
            // 0x292870: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292884u;
            goto label_292884;
        }
    }
    ctx->pc = 0x292874u;
    // 0x292874: 0xc087502  jal         func_21D408
    ctx->pc = 0x292874u;
    SET_GPR_U32(ctx, 31, 0x29287Cu);
    ctx->pc = 0x292878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292874u;
    // 0x292878: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292874u, 0x29287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29287Cu;
label_29287c:
    // 0x29287c: 0xa0500265  sb          $s0, 0x265($v0)
    ctx->pc = 0x29287cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 16));
    // 0x292880: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292884:
    // 0x292884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292888: 0x3e00008  jr          $ra
    ctx->pc = 0x292888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292888u;
        // 0x29288c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292890u;
}
