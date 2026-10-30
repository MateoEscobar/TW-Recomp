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

// Function: sub_002E8F38
// Address: 0x2e8f38 - 0x2e8f78
void sub_002E8F38_0x2e8f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8F38_0x2e8f38");
#endif

    switch (ctx->pc) {
        case 0x2e8f54u: goto label_2e8f54;
        default: break;
    }

    ctx->pc = 0x2e8f38u;

    // 0x2e8f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8f3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e8f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8f4c: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2E8F4Cu;
    SET_GPR_U32(ctx, 31, 0x2E8F54u);
    ctx->pc = 0x2E8F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F4Cu;
    // 0x2e8f50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2E8F4Cu, 0x2E8F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F54u;
label_2e8f54:
    // 0x2e8f54: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2e8f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2e8f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8f5c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2e8f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2e8f60: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2e8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2e8f64: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x2e8f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8f68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8f70: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F70u;
        // 0x2e8f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8F78u;
}
