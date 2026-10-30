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

// Function: sub_0017C468
// Address: 0x17c468 - 0x17c488
void sub_0017C468_0x17c468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C468_0x17c468");
#endif

    switch (ctx->pc) {
        case 0x17c47cu: goto label_17c47c;
        default: break;
    }

    ctx->pc = 0x17c468u;

    // 0x17c468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c46c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c474: 0xc05f0f2  jal         func_17C3C8
    ctx->pc = 0x17C474u;
    SET_GPR_U32(ctx, 31, 0x17C47Cu);
    ctx->pc = 0x17C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C474u;
    // 0x17c478: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C3C8u, 0x17C474u, 0x17C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C47Cu;
label_17c47c:
    // 0x17c47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c480: 0x3e00008  jr          $ra
    ctx->pc = 0x17C480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C480u;
        // 0x17c484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C488u;
}
