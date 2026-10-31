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

// Function: sub_004AEC88
// Address: 0x4aec88 - 0x4aeca8
void sub_004AEC88_0x4aec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEC88_0x4aec88");
#endif

    switch (ctx->pc) {
        case 0x4aec9cu: goto label_4aec9c;
        default: break;
    }

    ctx->pc = 0x4aec88u;

    // 0x4aec88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aec88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aec8c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4aec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4aec90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aec94: 0xc12b324  jal         func_4ACC90
    ctx->pc = 0x4AEC94u;
    SET_GPR_U32(ctx, 31, 0x4AEC9Cu);
    ctx->pc = 0x4AEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEC94u;
    // 0x4aec98: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACC90u, 0x4AEC94u, 0x4AEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEC9Cu;
label_4aec9c:
    // 0x4aec9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aec9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aeca0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AECA0u;
        // 0x4aeca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AECA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AECA8u;
}
