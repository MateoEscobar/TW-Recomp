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

// Function: sub_001B3B38
// Address: 0x1b3b38 - 0x1b3b68
void sub_001B3B38_0x1b3b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3B38_0x1b3b38");
#endif

    switch (ctx->pc) {
        case 0x1b3b5cu: goto label_1b3b5c;
        default: break;
    }

    ctx->pc = 0x1b3b38u;

    // 0x1b3b38: 0x24030540  addiu       $v1, $zero, 0x540
    ctx->pc = 0x1b3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    // 0x1b3b3c: 0x3406f420  ori         $a2, $zero, 0xF420
    ctx->pc = 0x1b3b3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62496);
    // 0x1b3b40: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1b3b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b3b44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1b3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1b3b54: 0xc06e10a  jal         func_1B8428
    ctx->pc = 0x1B3B54u;
    SET_GPR_U32(ctx, 31, 0x1B3B5Cu);
    ctx->pc = 0x1B3B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3B54u;
    // 0x1b3b58: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8428u, 0x1B3B54u, 0x1B3B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B5Cu;
label_1b3b5c:
    // 0x1b3b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3b60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B60u;
        // 0x1b3b64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3B68u;
}
