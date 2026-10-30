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

// Function: sub_001B3C00
// Address: 0x1b3c00 - 0x1b3c30
void sub_001B3C00_0x1b3c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3C00_0x1b3c00");
#endif

    switch (ctx->pc) {
        case 0x1b3c20u: goto label_1b3c20;
        default: break;
    }

    ctx->pc = 0x1b3c00u;

    // 0x1b3c00: 0x24020b10  addiu       $v0, $zero, 0xB10
    ctx->pc = 0x1b3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
    // 0x1b3c04: 0x3403fea0  ori         $v1, $zero, 0xFEA0
    ctx->pc = 0x1b3c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65184);
    // 0x1b3c08: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1b3c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b3c0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3c18: 0xc072846  jal         func_1CA118
    ctx->pc = 0x1B3C18u;
    SET_GPR_U32(ctx, 31, 0x1B3C20u);
    ctx->pc = 0x1B3C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C18u;
    // 0x1b3c1c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA118u, 0x1B3C18u, 0x1B3C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C20u;
label_1b3c20:
    // 0x1b3c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3c24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C24u;
        // 0x1b3c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3C2Cu;
    // 0x1b3c2c: 0x0  nop
    ctx->pc = 0x1b3c2cu;
    // NOP
    ctx->pc = 0x1b3c30u;
}
