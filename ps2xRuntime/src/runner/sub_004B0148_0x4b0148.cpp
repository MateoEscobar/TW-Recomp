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

// Function: sub_004B0148
// Address: 0x4b0148 - 0x4b0168
void sub_004B0148_0x4b0148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0148_0x4b0148");
#endif

    switch (ctx->pc) {
        case 0x4b015cu: goto label_4b015c;
        default: break;
    }

    ctx->pc = 0x4b0148u;

    // 0x4b0148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b014c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4b014cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4b0150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0154: 0xc12ca06  jal         func_4B2818
    ctx->pc = 0x4B0154u;
    SET_GPR_U32(ctx, 31, 0x4B015Cu);
    ctx->pc = 0x4B0158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0154u;
    // 0x4b0158: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4B0154u, 0x4B015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B015Cu;
label_4b015c:
    // 0x4b015c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b015cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0160: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0160u;
        // 0x4b0164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0168u;
}
