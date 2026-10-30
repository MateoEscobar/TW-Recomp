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

// Function: sub_00338528
// Address: 0x338528 - 0x338578
void sub_00338528_0x338528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338528_0x338528");
#endif

    ctx->pc = 0x338528u;

    // 0x338528: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x338528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33852c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33852Cu;
    {
        const bool branch_taken_0x33852c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x33852c) {
            ctx->pc = 0x338530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33852Cu;
            // 0x338530: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x338534u;
            goto label_338534;
        }
    }
    ctx->pc = 0x338534u;
label_338534:
    // 0x338534: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x338534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x338538: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x338538u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x33853c: 0x1010  mfhi        $v0
    ctx->pc = 0x33853cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x338540: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x338540u;
    {
        const bool branch_taken_0x338540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338540) {
            ctx->pc = 0x338544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338540u;
            // 0x338544: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338558u;
            goto label_338558;
        }
    }
    ctx->pc = 0x338548u;
    // 0x338548: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x338548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33854c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x338550: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x338550u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x338554: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x338554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_338558:
    // 0x338558: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x338558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x33855c: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x33855cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x338560: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x338560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x338564: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x338564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x338568: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x338568u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x33856c: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x33856cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x338570: 0x3e00008  jr          $ra
    ctx->pc = 0x338570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338570u;
        // 0x338574: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338578u;
}
