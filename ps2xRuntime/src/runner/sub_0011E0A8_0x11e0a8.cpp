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

// Function: sub_0011E0A8
// Address: 0x11e0a8 - 0x11e0e0
void sub_0011E0A8_0x11e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E0A8_0x11e0a8");
#endif

    switch (ctx->pc) {
        case 0x11e0d0u: goto label_11e0d0;
        default: break;
    }

    ctx->pc = 0x11e0a8u;

    // 0x11e0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e0ac: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x11e0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11e0b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E0B0u;
    {
        const bool branch_taken_0x11e0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0B0u;
        // 0x11e0b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0b0) {
            ctx->pc = 0x11E0D0u;
            goto label_11e0d0;
        }
    }
    ctx->pc = 0x11E0B8u;
    // 0x11e0b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x11e0bc: 0x8c62b1a0  lw          $v0, -0x4E60($v1)
    ctx->pc = 0x11e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B1A0u));
    // 0x11e0c0: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E0C0u;
    {
        const bool branch_taken_0x11e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0C0u;
        // 0x11e0c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0c0) {
            ctx->pc = 0x11E0D4u;
            goto label_11e0d4;
        }
    }
    ctx->pc = 0x11E0C8u;
    // 0x11e0c8: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x11E0C8u;
    SET_GPR_U32(ctx, 31, 0x11E0D0u);
    ctx->pc = 0x11E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E0C8u;
    // 0x11e0cc: 0xac64b1a0  sw          $a0, -0x4E60($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947232), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x11E0C8u, 0x11E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0D0u;
label_11e0d0:
    // 0x11e0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e0d4:
    // 0x11e0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0D4u;
        // 0x11e0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E0DCu;
    // 0x11e0dc: 0x0  nop
    ctx->pc = 0x11e0dcu;
    // NOP
    ctx->pc = 0x11e0e0u;
}
