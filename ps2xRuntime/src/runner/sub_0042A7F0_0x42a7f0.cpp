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

// Function: sub_0042A7F0
// Address: 0x42a7f0 - 0x42a820
void sub_0042A7F0_0x42a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042A7F0_0x42a7f0");
#endif

    switch (ctx->pc) {
        case 0x42a804u: goto label_42a804;
        case 0x42a810u: goto label_42a810;
        default: break;
    }

    ctx->pc = 0x42a7f0u;

    // 0x42a7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42a7f4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x42a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x42a7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42a7fc: 0xc072a54  jal         func_1CA950
    ctx->pc = 0x42A7FCu;
    SET_GPR_U32(ctx, 31, 0x42A804u);
    ctx->pc = 0x42A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A7FCu;
    // 0x42a800: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA950u, 0x42A7FCu, 0x42A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A804u;
label_42a804:
    // 0x42a804: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42a804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x42a808: 0xc061748  jal         func_185D20
    ctx->pc = 0x42A808u;
    SET_GPR_U32(ctx, 31, 0x42A810u);
    ctx->pc = 0x42A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A808u;
    // 0x42a80c: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x42A808u, 0x42A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A810u;
label_42a810:
    // 0x42a810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42a810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42a814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42a818: 0x3e00008  jr          $ra
    ctx->pc = 0x42A818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A818u;
        // 0x42a81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42A820u;
}
