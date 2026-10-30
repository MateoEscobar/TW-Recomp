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

// Function: sub_00236420
// Address: 0x236420 - 0x236450
void sub_00236420_0x236420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236420_0x236420");
#endif

    ctx->pc = 0x236420u;

    // 0x236420: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x236424: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x236424u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x236428: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x236428u;
    {
        const bool branch_taken_0x236428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236428u;
        // 0x23642c: 0x2445b708  addiu       $a1, $v0, -0x48F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236428) {
            ctx->pc = 0x236444u;
            goto label_236444;
        }
    }
    ctx->pc = 0x236430u;
    // 0x236430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236434: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x236434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x236438: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x236438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x23643c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23643Cu;
    {
        const bool branch_taken_0x23643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23643Cu;
        // 0x236440: 0x62200a  movz        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23643c) {
            ctx->pc = 0x236448u;
            goto label_236448;
        }
    }
    ctx->pc = 0x236444u;
label_236444:
    // 0x236444: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x236444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_236448:
    // 0x236448: 0x3e00008  jr          $ra
    ctx->pc = 0x236448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236448u;
        // 0x23644c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236450u;
}
