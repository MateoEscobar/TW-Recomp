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

// Function: sub_002F6180
// Address: 0x2f6180 - 0x2f61a0
void sub_002F6180_0x2f6180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6180_0x2f6180");
#endif

    switch (ctx->pc) {
        case 0x2f6194u: goto label_2f6194;
        default: break;
    }

    ctx->pc = 0x2f6180u;

    // 0x2f6180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6184: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f6184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2f6188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f618c: 0xc0a7c8c  jal         func_29F230
    ctx->pc = 0x2F618Cu;
    SET_GPR_U32(ctx, 31, 0x2F6194u);
    ctx->pc = 0x2F6190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F618Cu;
    // 0x2f6190: 0x34a5fbf9  ori         $a1, $a1, 0xFBF9 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2F618Cu, 0x2F6194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6194u;
label_2f6194:
    // 0x2f6194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6198: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6198u;
        // 0x2f619c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F61A0u;
}
