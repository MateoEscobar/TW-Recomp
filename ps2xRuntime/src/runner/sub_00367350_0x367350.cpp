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

// Function: sub_00367350
// Address: 0x367350 - 0x367388
void sub_00367350_0x367350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367350_0x367350");
#endif

    switch (ctx->pc) {
        case 0x367364u: goto label_367364;
        case 0x36736cu: goto label_36736c;
        case 0x367374u: goto label_367374;
        default: break;
    }

    ctx->pc = 0x367350u;

    // 0x367350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x367350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x367354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36735c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36735Cu;
    SET_GPR_U32(ctx, 31, 0x367364u);
    ctx->pc = 0x367360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36735Cu;
    // 0x367360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36735Cu, 0x367364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367364u;
label_367364:
    // 0x367364: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x367364u;
    SET_GPR_U32(ctx, 31, 0x36736Cu);
    ctx->pc = 0x367368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367364u;
    // 0x367368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x367364u, 0x36736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36736Cu;
label_36736c:
    // 0x36736c: 0xc047848  jal         func_11E120
    ctx->pc = 0x36736Cu;
    SET_GPR_U32(ctx, 31, 0x367374u);
    ctx->pc = 0x367370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36736Cu;
    // 0x367370: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x36736Cu, 0x367374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367374u;
label_367374:
    // 0x367374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36737c: 0x3e00008  jr          $ra
    ctx->pc = 0x36737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36737Cu;
        // 0x367380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36737Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367384u;
    // 0x367384: 0x0  nop
    ctx->pc = 0x367384u;
    // NOP
    ctx->pc = 0x367388u;
}
