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

// Function: sub_002267A0
// Address: 0x2267a0 - 0x2267c8
void sub_002267A0_0x2267a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267A0_0x2267a0");
#endif

    switch (ctx->pc) {
        case 0x2267bcu: goto label_2267bc;
        default: break;
    }

    ctx->pc = 0x2267a0u;

    // 0x2267a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2267a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2267a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2267a8: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x2267a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2267ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2267ACu;
    {
        const bool branch_taken_0x2267ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2267B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267ACu;
        // 0x2267b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267ac) {
            ctx->pc = 0x2267BCu;
            goto label_2267bc;
        }
    }
    ctx->pc = 0x2267B4u;
    // 0x2267b4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2267B4u;
    SET_GPR_U32(ctx, 31, 0x2267BCu);
    ctx->pc = 0x2267B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267B4u;
    // 0x2267b8: 0x248400cc  addiu       $a0, $a0, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2267B4u, 0x2267BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267BCu;
label_2267bc:
    // 0x2267bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2267bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2267c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2267C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2267C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267C0u;
        // 0x2267c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2267C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2267C8u;
}
