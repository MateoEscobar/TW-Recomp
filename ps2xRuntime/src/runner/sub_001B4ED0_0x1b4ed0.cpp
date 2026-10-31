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

// Function: sub_001B4ED0
// Address: 0x1b4ed0 - 0x1b4f00
void sub_001B4ED0_0x1b4ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4ED0_0x1b4ed0");
#endif

    switch (ctx->pc) {
        case 0x1b4ef0u: goto label_1b4ef0;
        default: break;
    }

    ctx->pc = 0x1b4ed0u;

    // 0x1b4ed0: 0x240303f0  addiu       $v1, $zero, 0x3F0
    ctx->pc = 0x1b4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x1b4ed4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b4ed8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1b4ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b4edc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4ee0: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x1b4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x1b4ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4ee8: 0xc07094c  jal         func_1C2530
    ctx->pc = 0x1B4EE8u;
    SET_GPR_U32(ctx, 31, 0x1B4EF0u);
    ctx->pc = 0x1B4EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EE8u;
    // 0x1b4eec: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2530u, 0x1B4EE8u, 0x1B4EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EF0u;
label_1b4ef0:
    // 0x1b4ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EF4u;
        // 0x1b4ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4EFCu;
    // 0x1b4efc: 0x0  nop
    ctx->pc = 0x1b4efcu;
    // NOP
    ctx->pc = 0x1b4f00u;
}
