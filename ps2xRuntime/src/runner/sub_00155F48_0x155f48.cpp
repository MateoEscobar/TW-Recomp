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

// Function: sub_00155F48
// Address: 0x155f48 - 0x155f78
void sub_00155F48_0x155f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155F48_0x155f48");
#endif

    switch (ctx->pc) {
        case 0x155f6cu: goto label_155f6c;
        default: break;
    }

    ctx->pc = 0x155f48u;

    // 0x155f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155f4c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x155f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x155f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155f54: 0x244283a8  addiu       $v0, $v0, -0x7C58
    ctx->pc = 0x155f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935464));
    // 0x155f58: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x155f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x155f5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155F5Cu;
    {
        const bool branch_taken_0x155f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F5Cu;
        // 0x155f60: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f5c) {
            ctx->pc = 0x155F6Cu;
            goto label_155f6c;
        }
    }
    ctx->pc = 0x155F64u;
    // 0x155f64: 0xc10b208  jal         func_42C820
    ctx->pc = 0x155F64u;
    SET_GPR_U32(ctx, 31, 0x155F6Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x155F64u, 0x155F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F6Cu;
label_155f6c:
    // 0x155f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155f70: 0x3e00008  jr          $ra
    ctx->pc = 0x155F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F70u;
        // 0x155f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155F78u;
}
