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

// Function: sub_001502D8
// Address: 0x1502d8 - 0x150310
void sub_001502D8_0x1502d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001502D8_0x1502d8");
#endif

    switch (ctx->pc) {
        case 0x1502e8u: goto label_1502e8;
        case 0x1502f0u: goto label_1502f0;
        case 0x1502f8u: goto label_1502f8;
        case 0x150300u: goto label_150300;
        default: break;
    }

    ctx->pc = 0x1502d8u;

    // 0x1502d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1502d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1502dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1502dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1502e0: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1502E0u;
    SET_GPR_U32(ctx, 31, 0x1502E8u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1502E0u, 0x1502E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502E8u;
label_1502e8:
    // 0x1502e8: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x1502E8u;
    SET_GPR_U32(ctx, 31, 0x1502F0u);
    ctx->pc = 0x1502ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502E8u;
    // 0x1502ec: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x1502E8u, 0x1502F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502F0u;
label_1502f0:
    // 0x1502f0: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x1502F0u;
    SET_GPR_U32(ctx, 31, 0x1502F8u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x1502F0u, 0x1502F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502F8u;
label_1502f8:
    // 0x1502f8: 0xc05471c  jal         func_151C70
    ctx->pc = 0x1502F8u;
    SET_GPR_U32(ctx, 31, 0x150300u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x1502F8u, 0x150300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150300u;
label_150300:
    // 0x150300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150304: 0x3e00008  jr          $ra
    ctx->pc = 0x150304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150304u;
        // 0x150308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15030Cu;
    // 0x15030c: 0x0  nop
    ctx->pc = 0x15030cu;
    // NOP
    ctx->pc = 0x150310u;
}
