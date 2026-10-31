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

// Function: sub_002219B8
// Address: 0x2219b8 - 0x221a00
void sub_002219B8_0x2219b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002219B8_0x2219b8");
#endif

    switch (ctx->pc) {
        case 0x2219c0u: goto label_2219c0;
        default: break;
    }

    ctx->pc = 0x2219b8u;

    // 0x2219b8: 0x248403c8  addiu       $a0, $a0, 0x3C8
    ctx->pc = 0x2219b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 968));
    // 0x2219bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2219bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2219c0:
    // 0x2219c0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2219c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2219c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2219C4u;
    {
        const bool branch_taken_0x2219c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219C4u;
        // 0x2219c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219c4) {
            ctx->pc = 0x2219ECu;
            goto label_2219ec;
        }
    }
    ctx->pc = 0x2219CCu;
    // 0x2219cc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2219ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2219d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2219D0u;
    {
        const bool branch_taken_0x2219d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2219d0) {
            ctx->pc = 0x2219ECu;
            goto label_2219ec;
        }
    }
    ctx->pc = 0x2219D8u;
    // 0x2219d8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2219d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2219dc: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2219DCu;
    {
        const bool branch_taken_0x2219dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2219E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219DCu;
        // 0x2219e0: 0x2c620007  sltiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219dc) {
            ctx->pc = 0x2219F0u;
            goto label_2219f0;
        }
    }
    ctx->pc = 0x2219E4u;
    // 0x2219e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2219E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2219E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219E4u;
        // 0x2219e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2219E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2219ECu;
label_2219ec:
    // 0x2219ec: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2219ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2219f0:
    // 0x2219f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2219F0u;
    {
        const bool branch_taken_0x2219f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2219F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219F0u;
        // 0x2219f4: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219f0) {
            ctx->pc = 0x2219C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2219c0;
        }
    }
    ctx->pc = 0x2219F8u;
    // 0x2219f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2219F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2219FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219F8u;
        // 0x2219fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2219F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221A00u;
}
