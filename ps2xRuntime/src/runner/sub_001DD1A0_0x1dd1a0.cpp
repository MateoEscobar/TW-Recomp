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

// Function: sub_001DD1A0
// Address: 0x1dd1a0 - 0x1dd1d0
void sub_001DD1A0_0x1dd1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD1A0_0x1dd1a0");
#endif

    switch (ctx->pc) {
        case 0x1dd1c0u: goto label_1dd1c0;
        default: break;
    }

    ctx->pc = 0x1dd1a0u;

    // 0x1dd1a0: 0x24030360  addiu       $v1, $zero, 0x360
    ctx->pc = 0x1dd1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x1dd1a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd1a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd1a8: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x1dd1a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1dd1ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd1b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd1b4: 0x244220d0  addiu       $v0, $v0, 0x20D0
    ctx->pc = 0x1dd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8400));
    // 0x1dd1b8: 0xc06941c  jal         func_1A5070
    ctx->pc = 0x1DD1B8u;
    SET_GPR_U32(ctx, 31, 0x1DD1C0u);
    ctx->pc = 0x1DD1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1B8u;
    // 0x1dd1bc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5070u, 0x1DD1B8u, 0x1DD1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1C0u;
label_1dd1c0:
    // 0x1dd1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1C4u;
        // 0x1dd1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD1CCu;
    // 0x1dd1cc: 0x0  nop
    ctx->pc = 0x1dd1ccu;
    // NOP
    ctx->pc = 0x1dd1d0u;
}
