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

// Function: sub_00167370
// Address: 0x167370 - 0x1673b8
void sub_00167370_0x167370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167370_0x167370");
#endif

    ctx->pc = 0x167370u;

    // 0x167370: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x167370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x167374: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x167374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167378: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x167378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x16737c: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x16737cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x167380: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x167380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x167384: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x167384u;
    {
        const bool branch_taken_0x167384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167384) {
            ctx->pc = 0x1673B0u;
            goto label_1673b0;
        }
    }
    ctx->pc = 0x16738Cu;
    // 0x16738c: 0x80a300e1  lb          $v1, 0xE1($a1)
    ctx->pc = 0x16738cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 225)));
    // 0x167390: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x167390u;
    {
        const bool branch_taken_0x167390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167390) {
            ctx->pc = 0x167394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167390u;
            // 0x167394: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167398u;
            goto label_167398;
        }
    }
    ctx->pc = 0x167398u;
label_167398:
    // 0x167398: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x167398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16739c: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x16739cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1673a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1673a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1673a4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1673a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1673a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1673A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1673ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673A8u;
        // 0x1673ac: 0x21603  sra         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1673A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1673B0u;
label_1673b0:
    // 0x1673b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1673B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1673B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673B0u;
        // 0x1673b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1673B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1673B8u;
}
