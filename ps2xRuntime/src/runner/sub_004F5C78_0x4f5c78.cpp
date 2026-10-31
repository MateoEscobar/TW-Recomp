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

// Function: sub_004F5C78
// Address: 0x4f5c78 - 0x4f5c98
void sub_004F5C78_0x4f5c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5C78_0x4f5c78");
#endif

    switch (ctx->pc) {
        case 0x4f5c8cu: goto label_4f5c8c;
        default: break;
    }

    ctx->pc = 0x4f5c78u;

    // 0x4f5c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f5c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f5c7c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x4f5c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4f5c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f5c84: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4F5C84u;
    SET_GPR_U32(ctx, 31, 0x4F5C8Cu);
    ctx->pc = 0x4F5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5C84u;
    // 0x4f5c88: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4F5C84u, 0x4F5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5C8Cu;
label_4f5c8c:
    // 0x4f5c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5c90: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5C90u;
        // 0x4f5c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5C98u;
}
