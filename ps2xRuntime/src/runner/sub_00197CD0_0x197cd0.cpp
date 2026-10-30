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

// Function: sub_00197CD0
// Address: 0x197cd0 - 0x197d00
void sub_00197CD0_0x197cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197CD0_0x197cd0");
#endif

    switch (ctx->pc) {
        case 0x197cecu: goto label_197cec;
        default: break;
    }

    ctx->pc = 0x197cd0u;

    // 0x197cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197cd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x197cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x197cd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197ce0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x197ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ce4: 0xc11cc14  jal         func_473050
    ctx->pc = 0x197CE4u;
    SET_GPR_U32(ctx, 31, 0x197CECu);
    ctx->pc = 0x197CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CE4u;
    // 0x197ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473050u, 0x197CE4u, 0x197CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CECu;
label_197cec:
    // 0x197cec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x197cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197cf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x197cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x197CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CF8u;
        // 0x197cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197D00u;
}
