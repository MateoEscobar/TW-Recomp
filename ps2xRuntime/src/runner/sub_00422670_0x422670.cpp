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

// Function: sub_00422670
// Address: 0x422670 - 0x4226a0
void sub_00422670_0x422670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422670_0x422670");
#endif

    switch (ctx->pc) {
        case 0x42268cu: goto label_42268c;
        default: break;
    }

    ctx->pc = 0x422670u;

    // 0x422670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x422670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x422674: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x422674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422678: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x422678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x42267c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x422680: 0x24a5e490  addiu       $a1, $a1, -0x1B70
    ctx->pc = 0x422680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960272));
    // 0x422684: 0xc108c14  jal         func_423050
    ctx->pc = 0x422684u;
    SET_GPR_U32(ctx, 31, 0x42268Cu);
    ctx->pc = 0x422688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422684u;
    // 0x422688: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423050u, 0x422684u, 0x42268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42268Cu;
label_42268c:
    // 0x42268c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x42268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x422690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x422690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422694: 0x3e00008  jr          $ra
    ctx->pc = 0x422694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422694u;
        // 0x422698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42269Cu;
    // 0x42269c: 0x0  nop
    ctx->pc = 0x42269cu;
    // NOP
    ctx->pc = 0x4226a0u;
}
