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

// Function: sub_003A65A8
// Address: 0x3a65a8 - 0x3a65e0
void sub_003A65A8_0x3a65a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A65A8_0x3a65a8");
#endif

    switch (ctx->pc) {
        case 0x3a65bcu: goto label_3a65bc;
        case 0x3a65ccu: goto label_3a65cc;
        default: break;
    }

    ctx->pc = 0x3a65a8u;

    // 0x3a65a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a65a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a65ac: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A65ACu;
    {
        const bool branch_taken_0x3a65ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65ACu;
        // 0x3a65b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65ac) {
            ctx->pc = 0x3A65CCu;
            goto label_3a65cc;
        }
    }
    ctx->pc = 0x3A65B4u;
    // 0x3a65b4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x3A65B4u;
    SET_GPR_U32(ctx, 31, 0x3A65BCu);
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3A65B4u, 0x3A65BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A65BCu;
label_3a65bc:
    // 0x3a65bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A65BCu;
    {
        const bool branch_taken_0x3a65bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65BCu;
        // 0x3a65c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65bc) {
            ctx->pc = 0x3A65CCu;
            goto label_3a65cc;
        }
    }
    ctx->pc = 0x3A65C4u;
    // 0x3a65c4: 0xc0864c8  jal         func_219320
    ctx->pc = 0x3A65C4u;
    SET_GPR_U32(ctx, 31, 0x3A65CCu);
    ctx->pc = 0x3A65C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A65C4u;
    // 0x3a65c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219320u, 0x3A65C4u, 0x3A65CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A65CCu;
label_3a65cc:
    // 0x3a65cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a65ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a65d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a65d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a65d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A65D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65D4u;
        // 0x3a65d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A65D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A65DCu;
    // 0x3a65dc: 0x0  nop
    ctx->pc = 0x3a65dcu;
    // NOP
    ctx->pc = 0x3a65e0u;
}
