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

// Function: sub_001DD178
// Address: 0x1dd178 - 0x1dd1a0
void sub_001DD178_0x1dd178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD178_0x1dd178");
#endif

    switch (ctx->pc) {
        case 0x1dd194u: goto label_1dd194;
        default: break;
    }

    ctx->pc = 0x1dd178u;

    // 0x1dd178: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x1dd178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x1dd17c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd180: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x1dd180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1dd184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd188: 0x24c620d0  addiu       $a2, $a2, 0x20D0
    ctx->pc = 0x1dd188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8400));
    // 0x1dd18c: 0xc0693da  jal         func_1A4F68
    ctx->pc = 0x1DD18Cu;
    SET_GPR_U32(ctx, 31, 0x1DD194u);
    ctx->pc = 0x1DD190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD18Cu;
    // 0x1dd190: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F68u, 0x1DD18Cu, 0x1DD194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD194u;
label_1dd194:
    // 0x1dd194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd198: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD198u;
        // 0x1dd19c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD1A0u;
}
