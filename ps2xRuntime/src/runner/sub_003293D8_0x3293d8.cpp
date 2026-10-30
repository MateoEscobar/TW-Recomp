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

// Function: sub_003293D8
// Address: 0x3293d8 - 0x329428
void sub_003293D8_0x3293d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003293D8_0x3293d8");
#endif

    ctx->pc = 0x3293d8u;

    // 0x3293d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3293d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3293dc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3293dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3293e0: 0x84870032  lh          $a3, 0x32($a0)
    ctx->pc = 0x3293e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x3293e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3293e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3293e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3293e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3293ec: 0xe53818  mult        $a3, $a3, $a1
    ctx->pc = 0x3293ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3293f0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x3293f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3293f4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x3293f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3293f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3293f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3293fc: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x3293fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x329400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x329400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329404: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x329404u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x329408: 0x84830030  lh          $v1, 0x30($a0)
    ctx->pc = 0x329408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x32940c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x329410: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x329410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x329414: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x329414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x329418: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x329418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32941c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x32941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x329420: 0x3e00008  jr          $ra
    ctx->pc = 0x329420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329420u;
        // 0x329424: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329428u;
}
