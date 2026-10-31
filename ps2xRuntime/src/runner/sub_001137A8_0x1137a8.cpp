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

// Function: sub_001137A8
// Address: 0x1137a8 - 0x1137e8
void sub_001137A8_0x1137a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001137A8_0x1137a8");
#endif

    switch (ctx->pc) {
        case 0x1137c0u: goto label_1137c0;
        case 0x1137dcu: goto label_1137dc;
        default: break;
    }

    ctx->pc = 0x1137a8u;

    // 0x1137a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1137a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1137acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1137b0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1137b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1137b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1137b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1137b8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1137B8u;
    SET_GPR_U32(ctx, 31, 0x1137C0u);
    ctx->pc = 0x1137BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137B8u;
    // 0x1137bc: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1137B8u, 0x1137C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137C0u;
label_1137c0:
    // 0x1137c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1137c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1137c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1137c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137c8: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1137c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1137cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1137ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1137d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137d4: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1137D4u;
    SET_GPR_U32(ctx, 31, 0x1137DCu);
    ctx->pc = 0x1137D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137D4u;
    // 0x1137d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1137D4u, 0x1137DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137DCu;
label_1137dc:
    // 0x1137dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1137dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1137e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1137E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1137E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137E0u;
        // 0x1137e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1137E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1137E8u;
}
