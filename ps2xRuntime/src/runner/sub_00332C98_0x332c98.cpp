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

// Function: sub_00332C98
// Address: 0x332c98 - 0x332cc8
void sub_00332C98_0x332c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332C98_0x332c98");
#endif

    switch (ctx->pc) {
        case 0x332cb4u: goto label_332cb4;
        default: break;
    }

    ctx->pc = 0x332c98u;

    // 0x332c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332c9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x332c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ca0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x332ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x332ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x332ca8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x332ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332cac: 0xc0ccac4  jal         func_332B10
    ctx->pc = 0x332CACu;
    SET_GPR_U32(ctx, 31, 0x332CB4u);
    ctx->pc = 0x332CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CACu;
    // 0x332cb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332B10u, 0x332CACu, 0x332CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CB4u;
label_332cb4:
    // 0x332cb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x332cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x332cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x332CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332CBCu;
        // 0x332cc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332CC4u;
    // 0x332cc4: 0x0  nop
    ctx->pc = 0x332cc4u;
    // NOP
    ctx->pc = 0x332cc8u;
}
