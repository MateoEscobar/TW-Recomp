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

// Function: sub_00443530
// Address: 0x443530 - 0x443588
void sub_00443530_0x443530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443530_0x443530");
#endif

    switch (ctx->pc) {
        case 0x443540u: goto label_443540;
        case 0x443548u: goto label_443548;
        case 0x443550u: goto label_443550;
        case 0x443558u: goto label_443558;
        case 0x443560u: goto label_443560;
        case 0x443568u: goto label_443568;
        case 0x443570u: goto label_443570;
        case 0x443578u: goto label_443578;
        default: break;
    }

    ctx->pc = 0x443530u;

    // 0x443530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x443530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x443534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x443534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x443538: 0xc110cca  jal         func_443328
    ctx->pc = 0x443538u;
    SET_GPR_U32(ctx, 31, 0x443540u);
    ctx->pc = 0x443328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443328u, 0x443538u, 0x443540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443540u;
label_443540:
    // 0x443540: 0xc110d08  jal         func_443420
    ctx->pc = 0x443540u;
    SET_GPR_U32(ctx, 31, 0x443548u);
    ctx->pc = 0x443420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443420u, 0x443540u, 0x443548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443548u;
label_443548:
    // 0x443548: 0xc110df6  jal         func_4437D8
    ctx->pc = 0x443548u;
    SET_GPR_U32(ctx, 31, 0x443550u);
    ctx->pc = 0x4437D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4437D8u, 0x443548u, 0x443550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443550u;
label_443550:
    // 0x443550: 0xc110e54  jal         func_443950
    ctx->pc = 0x443550u;
    SET_GPR_U32(ctx, 31, 0x443558u);
    ctx->pc = 0x443554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443550u;
    // 0x443554: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443950u, 0x443550u, 0x443558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443558u;
label_443558:
    // 0x443558: 0xc110eac  jal         func_443AB0
    ctx->pc = 0x443558u;
    SET_GPR_U32(ctx, 31, 0x443560u);
    ctx->pc = 0x443AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443AB0u, 0x443558u, 0x443560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443560u;
label_443560:
    // 0x443560: 0xc10f754  jal         func_43DD50
    ctx->pc = 0x443560u;
    SET_GPR_U32(ctx, 31, 0x443568u);
    ctx->pc = 0x43DD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DD50u, 0x443560u, 0x443568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443568u;
label_443568:
    // 0x443568: 0xc110d96  jal         func_443658
    ctx->pc = 0x443568u;
    SET_GPR_U32(ctx, 31, 0x443570u);
    ctx->pc = 0x443658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443658u, 0x443568u, 0x443570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443570u;
label_443570:
    // 0x443570: 0xc111280  jal         func_444A00
    ctx->pc = 0x443570u;
    SET_GPR_U32(ctx, 31, 0x443578u);
    ctx->pc = 0x444A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444A00u, 0x443570u, 0x443578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443578u;
label_443578:
    // 0x443578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x443578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44357c: 0x81111d6  j           func_444758
    ctx->pc = 0x44357Cu;
    ctx->pc = 0x443580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44357Cu;
    // 0x443580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444758u, 0x44357Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x443584u;
    // 0x443584: 0x0  nop
    ctx->pc = 0x443584u;
    // NOP
    ctx->pc = 0x443588u;
}
