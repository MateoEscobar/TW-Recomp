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

// Function: sub_0034F718
// Address: 0x34f718 - 0x34f740
void sub_0034F718_0x34f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F718_0x34f718");
#endif

    switch (ctx->pc) {
        case 0x34f72cu: goto label_34f72c;
        default: break;
    }

    ctx->pc = 0x34f718u;

    // 0x34f718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34f718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34f71c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34f720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34f724: 0xc0d3db0  jal         func_34F6C0
    ctx->pc = 0x34F724u;
    SET_GPR_U32(ctx, 31, 0x34F72Cu);
    ctx->pc = 0x34F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F724u;
    // 0x34f728: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F6C0u, 0x34F724u, 0x34F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F72Cu;
label_34f72c:
    // 0x34f72c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f730: 0x3e00008  jr          $ra
    ctx->pc = 0x34F730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F730u;
        // 0x34f734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F738u;
    // 0x34f738: 0x0  nop
    ctx->pc = 0x34f738u;
    // NOP
    // 0x34f73c: 0x0  nop
    ctx->pc = 0x34f73cu;
    // NOP
    ctx->pc = 0x34f740u;
}
