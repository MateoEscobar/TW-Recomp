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

// Function: sub_001B3B68
// Address: 0x1b3b68 - 0x1b3ba8
void sub_001B3B68_0x1b3b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3B68_0x1b3b68");
#endif

    switch (ctx->pc) {
        case 0x1b3b98u: goto label_1b3b98;
        default: break;
    }

    ctx->pc = 0x1b3b68u;

    // 0x1b3b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3b6c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b3b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b70: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b3b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3b74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3B74u;
    {
        const bool branch_taken_0x1b3b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B74u;
        // 0x1b3b78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b74) {
            ctx->pc = 0x1B3B98u;
            goto label_1b3b98;
        }
    }
    ctx->pc = 0x1B3B7Cu;
    // 0x1b3b7c: 0x24040430  addiu       $a0, $zero, 0x430
    ctx->pc = 0x1b3b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
    // 0x1b3b80: 0x3402ebc0  ori         $v0, $zero, 0xEBC0
    ctx->pc = 0x1b3b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60352);
    // 0x1b3b84: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1b3b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b3b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3b8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3b90: 0xc068cc4  jal         func_1A3310
    ctx->pc = 0x1B3B90u;
    SET_GPR_U32(ctx, 31, 0x1B3B98u);
    ctx->pc = 0x1B3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3B90u;
    // 0x1b3b94: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3310u, 0x1B3B90u, 0x1B3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B98u;
label_1b3b98:
    // 0x1b3b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B9Cu;
        // 0x1b3ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3BA4u;
    // 0x1b3ba4: 0x0  nop
    ctx->pc = 0x1b3ba4u;
    // NOP
    ctx->pc = 0x1b3ba8u;
}
