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

// Function: sub_0015F180
// Address: 0x15f180 - 0x15f1a0
void sub_0015F180_0x15f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F180_0x15f180");
#endif

    switch (ctx->pc) {
        case 0x15f194u: goto label_15f194;
        default: break;
    }

    ctx->pc = 0x15f180u;

    // 0x15f180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f184: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f18c: 0xc057c36  jal         func_15F0D8
    ctx->pc = 0x15F18Cu;
    SET_GPR_U32(ctx, 31, 0x15F194u);
    ctx->pc = 0x15F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F18Cu;
    // 0x15f190: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F0D8u, 0x15F18Cu, 0x15F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F194u;
label_15f194:
    // 0x15f194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f198: 0x3e00008  jr          $ra
    ctx->pc = 0x15F198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F198u;
        // 0x15f19c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F1A0u;
}
