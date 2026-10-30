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

// Function: sub_0014E890
// Address: 0x14e890 - 0x14e8c8
void sub_0014E890_0x14e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E890_0x14e890");
#endif

    switch (ctx->pc) {
        case 0x14e8a0u: goto label_14e8a0;
        case 0x14e8a8u: goto label_14e8a8;
        case 0x14e8b0u: goto label_14e8b0;
        case 0x14e8b8u: goto label_14e8b8;
        default: break;
    }

    ctx->pc = 0x14e890u;

    // 0x14e890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e898: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E898u;
    SET_GPR_U32(ctx, 31, 0x14E8A0u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E898u, 0x14E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8A0u;
label_14e8a0:
    // 0x14e8a0: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E8A0u;
    SET_GPR_U32(ctx, 31, 0x14E8A8u);
    ctx->pc = 0x14E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8A0u;
    // 0x14e8a4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E8A0u, 0x14E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8A8u;
label_14e8a8:
    // 0x14e8a8: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E8A8u;
    SET_GPR_U32(ctx, 31, 0x14E8B0u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E8A8u, 0x14E8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8B0u;
label_14e8b0:
    // 0x14e8b0: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E8B0u;
    SET_GPR_U32(ctx, 31, 0x14E8B8u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E8B0u, 0x14E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8B8u;
label_14e8b8:
    // 0x14e8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14E8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8BCu;
        // 0x14e8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E8C4u;
    // 0x14e8c4: 0x0  nop
    ctx->pc = 0x14e8c4u;
    // NOP
    ctx->pc = 0x14e8c8u;
}
