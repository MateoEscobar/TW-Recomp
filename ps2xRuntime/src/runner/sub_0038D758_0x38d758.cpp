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

// Function: sub_0038D758
// Address: 0x38d758 - 0x38d798
void sub_0038D758_0x38d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D758_0x38d758");
#endif

    switch (ctx->pc) {
        case 0x38d770u: goto label_38d770;
        case 0x38d788u: goto label_38d788;
        default: break;
    }

    ctx->pc = 0x38d758u;

    // 0x38d758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38d75c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38d760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d768: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x38D768u;
    SET_GPR_U32(ctx, 31, 0x38D770u);
    ctx->pc = 0x38D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D768u;
    // 0x38d76c: 0x260412fc  addiu       $a0, $s0, 0x12FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4860));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x38D768u, 0x38D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D770u;
label_38d770:
    // 0x38d770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38D770u;
    {
        const bool branch_taken_0x38d770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D770u;
        // 0x38d774: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d770) {
            ctx->pc = 0x38D788u;
            goto label_38d788;
        }
    }
    ctx->pc = 0x38D778u;
    // 0x38d778: 0x8e0512fc  lw          $a1, 0x12FC($s0)
    ctx->pc = 0x38d778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4860)));
    // 0x38d77c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x38d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x38d780: 0xc04410c  jal         func_110430
    ctx->pc = 0x38D780u;
    SET_GPR_U32(ctx, 31, 0x38D788u);
    ctx->pc = 0x38D784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D780u;
    // 0x38d784: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110430u, 0x38D780u, 0x38D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D788u;
label_38d788:
    // 0x38d788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38d788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d790: 0x3e00008  jr          $ra
    ctx->pc = 0x38D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D790u;
        // 0x38d794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D798u;
}
