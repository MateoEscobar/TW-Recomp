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

// Function: sub_00332CC8
// Address: 0x332cc8 - 0x332cf8
void sub_00332CC8_0x332cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332CC8_0x332cc8");
#endif

    switch (ctx->pc) {
        case 0x332ce4u: goto label_332ce4;
        default: break;
    }

    ctx->pc = 0x332cc8u;

    // 0x332cc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332ccc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x332cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332cd0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x332cd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x332cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x332cd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x332cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332cdc: 0xc0ccac4  jal         func_332B10
    ctx->pc = 0x332CDCu;
    SET_GPR_U32(ctx, 31, 0x332CE4u);
    ctx->pc = 0x332CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CDCu;
    // 0x332ce0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332B10u, 0x332CDCu, 0x332CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CE4u;
label_332ce4:
    // 0x332ce4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x332ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332ce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x332ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332cec: 0x3e00008  jr          $ra
    ctx->pc = 0x332CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332CECu;
        // 0x332cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332CF4u;
    // 0x332cf4: 0x0  nop
    ctx->pc = 0x332cf4u;
    // NOP
    ctx->pc = 0x332cf8u;
}
