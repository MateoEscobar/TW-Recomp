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

// Function: sub_00150078
// Address: 0x150078 - 0x1500a8
void sub_00150078_0x150078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150078_0x150078");
#endif

    ctx->pc = 0x150078u;

    // 0x150078: 0x41300  sll         $v0, $a0, 12
    ctx->pc = 0x150078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x15007c: 0x3403bb80  ori         $v1, $zero, 0xBB80
    ctx->pc = 0x15007cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x150080: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x150080u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x150084: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x150084u;
    {
        const bool branch_taken_0x150084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150084) {
            ctx->pc = 0x150088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150084u;
            // 0x150088: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15008Cu;
            goto label_15008c;
        }
    }
    ctx->pc = 0x15008Cu;
label_15008c:
    // 0x15008c: 0x1012  mflo        $v0
    ctx->pc = 0x15008cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x150090: 0x3e00008  jr          $ra
    ctx->pc = 0x150090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150098u;
    // 0x150098: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15009c: 0x0  nop
    ctx->pc = 0x15009cu;
    // NOP
    // 0x1500a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1500a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1500a4: 0x0  nop
    ctx->pc = 0x1500a4u;
    // NOP
    ctx->pc = 0x1500a8u;
}
