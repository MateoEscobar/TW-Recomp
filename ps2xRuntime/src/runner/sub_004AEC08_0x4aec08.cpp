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

// Function: sub_004AEC08
// Address: 0x4aec08 - 0x4aec28
void sub_004AEC08_0x4aec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEC08_0x4aec08");
#endif

    switch (ctx->pc) {
        case 0x4aec1cu: goto label_4aec1c;
        default: break;
    }

    ctx->pc = 0x4aec08u;

    // 0x4aec08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aec0c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4aec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4aec10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aec14: 0xc12b438  jal         func_4AD0E0
    ctx->pc = 0x4AEC14u;
    SET_GPR_U32(ctx, 31, 0x4AEC1Cu);
    ctx->pc = 0x4AEC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEC14u;
    // 0x4aec18: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD0E0u, 0x4AEC14u, 0x4AEC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEC1Cu;
label_4aec1c:
    // 0x4aec1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aec20: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEC20u;
        // 0x4aec24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEC28u;
}
