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

// Function: sub_0023BC80
// Address: 0x23bc80 - 0x23bca0
void sub_0023BC80_0x23bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BC80_0x23bc80");
#endif

    switch (ctx->pc) {
        case 0x23bc94u: goto label_23bc94;
        default: break;
    }

    ctx->pc = 0x23bc80u;

    // 0x23bc80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bc84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bc88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bc8c: 0xc08ee0e  jal         func_23B838
    ctx->pc = 0x23BC8Cu;
    SET_GPR_U32(ctx, 31, 0x23BC94u);
    ctx->pc = 0x23BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BC8Cu;
    // 0x23bc90: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B838u, 0x23BC8Cu, 0x23BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC94u;
label_23bc94:
    // 0x23bc94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bc98: 0x3e00008  jr          $ra
    ctx->pc = 0x23BC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BC98u;
        // 0x23bc9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BCA0u;
}
