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

// Function: sub_0032CC48
// Address: 0x32cc48 - 0x32cc78
void sub_0032CC48_0x32cc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CC48_0x32cc48");
#endif

    switch (ctx->pc) {
        case 0x32cc60u: goto label_32cc60;
        default: break;
    }

    ctx->pc = 0x32cc48u;

    // 0x32cc48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32cc4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32cc50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32cc50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cc58: 0xc0cacd0  jal         func_32B340
    ctx->pc = 0x32CC58u;
    SET_GPR_U32(ctx, 31, 0x32CC60u);
    ctx->pc = 0x32CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CC58u;
    // 0x32cc5c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B340u, 0x32CC58u, 0x32CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC60u;
label_32cc60:
    // 0x32cc60: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x32cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x32cc64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32cc64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cc68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x32CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC6Cu;
        // 0x32cc70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CC74u;
    // 0x32cc74: 0x0  nop
    ctx->pc = 0x32cc74u;
    // NOP
    ctx->pc = 0x32cc78u;
}
