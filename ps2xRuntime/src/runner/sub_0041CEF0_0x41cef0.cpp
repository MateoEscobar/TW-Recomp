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

// Function: sub_0041CEF0
// Address: 0x41cef0 - 0x41cf20
void sub_0041CEF0_0x41cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CEF0_0x41cef0");
#endif

    switch (ctx->pc) {
        case 0x41cf14u: goto label_41cf14;
        default: break;
    }

    ctx->pc = 0x41cef0u;

    // 0x41cef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41cef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41cef4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41cef8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x41cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41cefc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41cefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41cf00: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x41cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x41cf04: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x41cf04u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x41cf08: 0xa485033a  sh          $a1, 0x33A($a0)
    ctx->pc = 0x41cf08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 826), (uint16_t)GPR_U32(ctx, 5));
    // 0x41cf0c: 0xc0e5fca  jal         func_397F28
    ctx->pc = 0x41CF0Cu;
    SET_GPR_U32(ctx, 31, 0x41CF14u);
    ctx->pc = 0x41CF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CF0Cu;
    // 0x41cf10: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F28u, 0x41CF0Cu, 0x41CF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CF14u;
label_41cf14:
    // 0x41cf14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41cf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41cf18: 0x3e00008  jr          $ra
    ctx->pc = 0x41CF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF18u;
        // 0x41cf1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CF20u;
}
