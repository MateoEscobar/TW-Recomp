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

// Function: sub_003326A0
// Address: 0x3326a0 - 0x3326e0
void sub_003326A0_0x3326a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003326A0_0x3326a0");
#endif

    switch (ctx->pc) {
        case 0x3326d0u: goto label_3326d0;
        default: break;
    }

    ctx->pc = 0x3326a0u;

    // 0x3326a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3326a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3326a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3326a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3326a8: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x3326a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x3326ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3326ACu;
    {
        const bool branch_taken_0x3326ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3326B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3326ACu;
        // 0x3326b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326ac) {
            ctx->pc = 0x3326C4u;
            goto label_3326c4;
        }
    }
    ctx->pc = 0x3326B4u;
    // 0x3326b4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3326b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3326b8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x3326b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3326bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3326BCu;
    {
        const bool branch_taken_0x3326bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3326C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3326BCu;
        // 0x3326c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3326bc) {
            ctx->pc = 0x3326D4u;
            goto label_3326d4;
        }
    }
    ctx->pc = 0x3326C4u;
label_3326c4:
    // 0x3326c4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3326c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3326c8: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x3326C8u;
    SET_GPR_U32(ctx, 31, 0x3326D0u);
    ctx->pc = 0x3326CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3326C8u;
    // 0x3326cc: 0x24a56550  addiu       $a1, $a1, 0x6550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x3326C8u, 0x3326D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3326D0u;
label_3326d0:
    // 0x3326d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3326d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3326d4:
    // 0x3326d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3326D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3326D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3326D4u;
        // 0x3326d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3326D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3326DCu;
    // 0x3326dc: 0x0  nop
    ctx->pc = 0x3326dcu;
    // NOP
    ctx->pc = 0x3326e0u;
}
