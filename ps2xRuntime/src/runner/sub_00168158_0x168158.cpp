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

// Function: sub_00168158
// Address: 0x168158 - 0x1681a0
void sub_00168158_0x168158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168158_0x168158");
#endif

    ctx->pc = 0x168158u;

    // 0x168158: 0x24070130  addiu       $a3, $zero, 0x130
    ctx->pc = 0x168158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x16815c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x16815cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168160: 0xa71818  mult        $v1, $a1, $a3
    ctx->pc = 0x168160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168164: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x168164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168168: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x168168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x16816c: 0x84430692  lh          $v1, 0x692($v0)
    ctx->pc = 0x16816cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1682)));
    // 0x168170: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x168170u;
    {
        const bool branch_taken_0x168170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x168174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168170u;
        // 0x168174: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168170) {
            ctx->pc = 0x16817Cu;
            goto label_16817c;
        }
    }
    ctx->pc = 0x168178u;
    // 0x168178: 0x8c4606a0  lw          $a2, 0x6A0($v0)
    ctx->pc = 0x168178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1696)));
label_16817c:
    // 0x16817c: 0xa71018  mult        $v0, $a1, $a3
    ctx->pc = 0x16817cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x168180: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x168180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x168184: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x168184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x168188: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x168188u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x16818c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x16818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x168190: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x168190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x168194: 0x3e00008  jr          $ra
    ctx->pc = 0x168194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168194u;
        // 0x168198: 0xaca606a4  sw          $a2, 0x6A4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1700), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16819Cu;
    // 0x16819c: 0x0  nop
    ctx->pc = 0x16819cu;
    // NOP
    ctx->pc = 0x1681a0u;
}
