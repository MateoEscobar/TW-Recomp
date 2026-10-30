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

// Function: sub_0035A480
// Address: 0x35a480 - 0x35a4b0
void sub_0035A480_0x35a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A480_0x35a480");
#endif

    switch (ctx->pc) {
        case 0x35a494u: goto label_35a494;
        case 0x35a49cu: goto label_35a49c;
        default: break;
    }

    ctx->pc = 0x35a480u;

    // 0x35a480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a48c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35A48Cu;
    SET_GPR_U32(ctx, 31, 0x35A494u);
    ctx->pc = 0x35A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A48Cu;
    // 0x35a490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35A48Cu, 0x35A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A494u;
label_35a494:
    // 0x35a494: 0xc08ea64  jal         func_23A990
    ctx->pc = 0x35A494u;
    SET_GPR_U32(ctx, 31, 0x35A49Cu);
    ctx->pc = 0x35A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A494u;
    // 0x35a498: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A990u, 0x35A494u, 0x35A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A49Cu;
label_35a49c:
    // 0x35a49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a4a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a4a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A4A4u;
        // 0x35a4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A4ACu;
    // 0x35a4ac: 0x0  nop
    ctx->pc = 0x35a4acu;
    // NOP
    ctx->pc = 0x35a4b0u;
}
