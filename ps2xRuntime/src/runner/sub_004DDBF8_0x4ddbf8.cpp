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

// Function: sub_004DDBF8
// Address: 0x4ddbf8 - 0x4ddc20
void sub_004DDBF8_0x4ddbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDBF8_0x4ddbf8");
#endif

    switch (ctx->pc) {
        case 0x4ddc14u: goto label_4ddc14;
        default: break;
    }

    ctx->pc = 0x4ddbf8u;

    // 0x4ddbf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ddbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ddbfc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ddbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ddc00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ddc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ddc04: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4ddc04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddc08: 0x24428360  addiu       $v0, $v0, -0x7CA0
    ctx->pc = 0x4ddc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935392));
    // 0x4ddc0c: 0xc0557d2  jal         func_155F48
    ctx->pc = 0x4DDC0Cu;
    SET_GPR_U32(ctx, 31, 0x4DDC14u);
    ctx->pc = 0x4DDC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDC0Cu;
    // 0x4ddc10: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F48u, 0x4DDC0Cu, 0x4DDC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDC14u;
label_4ddc14:
    // 0x4ddc14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddc18: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC18u;
        // 0x4ddc1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDC20u;
}
