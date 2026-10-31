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

// Function: sub_00378298
// Address: 0x378298 - 0x3782d0
void sub_00378298_0x378298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378298_0x378298");
#endif

    switch (ctx->pc) {
        case 0x3782acu: goto label_3782ac;
        case 0x3782b4u: goto label_3782b4;
        case 0x3782bcu: goto label_3782bc;
        default: break;
    }

    ctx->pc = 0x378298u;

    // 0x378298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x378298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37829c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37829cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3782a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3782a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3782a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3782A4u;
    SET_GPR_U32(ctx, 31, 0x3782ACu);
    ctx->pc = 0x3782A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3782A4u;
    // 0x3782a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3782A4u, 0x3782ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3782ACu;
label_3782ac:
    // 0x3782ac: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3782ACu;
    SET_GPR_U32(ctx, 31, 0x3782B4u);
    ctx->pc = 0x3782B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3782ACu;
    // 0x3782b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3782ACu, 0x3782B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3782B4u;
label_3782b4:
    // 0x3782b4: 0xc0e5dea  jal         func_3977A8
    ctx->pc = 0x3782B4u;
    SET_GPR_U32(ctx, 31, 0x3782BCu);
    ctx->pc = 0x3782B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3782B4u;
    // 0x3782b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3977A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3977A8u, 0x3782B4u, 0x3782BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3782BCu;
label_3782bc:
    // 0x3782bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3782bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3782c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3782c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3782c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3782C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3782C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3782C4u;
        // 0x3782c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3782C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3782CCu;
    // 0x3782cc: 0x0  nop
    ctx->pc = 0x3782ccu;
    // NOP
    ctx->pc = 0x3782d0u;
}
