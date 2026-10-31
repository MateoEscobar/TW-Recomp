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

// Function: sub_0011B450
// Address: 0x11b450 - 0x11b498
void sub_0011B450_0x11b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B450_0x11b450");
#endif

    ctx->pc = 0x11b450u;

    // 0x11b450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b454: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B454u;
    {
        const bool branch_taken_0x11b454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B454u;
        // 0x11b458: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b454) {
            ctx->pc = 0x11B478u;
            goto label_11b478;
        }
    }
    ctx->pc = 0x11B45Cu;
    // 0x11b45c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B45Cu;
    {
        const bool branch_taken_0x11b45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x11b45c) {
            ctx->pc = 0x11B470u;
            goto label_11b470;
        }
    }
    ctx->pc = 0x11B464u;
    // 0x11b464: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x11b464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x11b468: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B468u;
    {
        const bool branch_taken_0x11b468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x11b468) {
            ctx->pc = 0x11B46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B468u;
            // 0x11b46c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B478u;
            goto label_11b478;
        }
    }
    ctx->pc = 0x11B470u;
label_11b470:
    // 0x11b470: 0x3e00008  jr          $ra
    ctx->pc = 0x11B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B470u;
        // 0x11b474: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B478u;
label_11b478:
    // 0x11b478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B478u;
    {
        const bool branch_taken_0x11b478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B478u;
        // 0x11b47c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b478) {
            ctx->pc = 0x11B490u;
            goto label_11b490;
        }
    }
    ctx->pc = 0x11B480u;
    // 0x11b480: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x11b480u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x11b484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b488: 0x3e00008  jr          $ra
    ctx->pc = 0x11B488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B488u;
        // 0x11b48c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B490u;
label_11b490:
    // 0x11b490: 0x3e00008  jr          $ra
    ctx->pc = 0x11B490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B490u;
        // 0x11b494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B498u;
}
