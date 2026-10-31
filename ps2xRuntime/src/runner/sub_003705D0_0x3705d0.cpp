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

// Function: sub_003705D0
// Address: 0x3705d0 - 0x370600
void sub_003705D0_0x3705d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003705D0_0x3705d0");
#endif

    switch (ctx->pc) {
        case 0x3705e4u: goto label_3705e4;
        case 0x3705ecu: goto label_3705ec;
        default: break;
    }

    ctx->pc = 0x3705d0u;

    // 0x3705d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3705d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3705d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3705d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3705d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3705d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3705dc: 0xc102488  jal         func_409220
    ctx->pc = 0x3705DCu;
    SET_GPR_U32(ctx, 31, 0x3705E4u);
    ctx->pc = 0x3705E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3705DCu;
    // 0x3705e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3705DCu, 0x3705E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3705E4u;
label_3705e4:
    // 0x3705e4: 0xc106b74  jal         func_41ADD0
    ctx->pc = 0x3705E4u;
    SET_GPR_U32(ctx, 31, 0x3705ECu);
    ctx->pc = 0x3705E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3705E4u;
    // 0x3705e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ADD0u, 0x3705E4u, 0x3705ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3705ECu;
label_3705ec:
    // 0x3705ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3705ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3705f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3705f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3705f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3705F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3705F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3705F4u;
        // 0x3705f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3705F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3705FCu;
    // 0x3705fc: 0x0  nop
    ctx->pc = 0x3705fcu;
    // NOP
    ctx->pc = 0x370600u;
}
