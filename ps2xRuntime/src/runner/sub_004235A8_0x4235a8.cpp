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

// Function: sub_004235A8
// Address: 0x4235a8 - 0x4235e0
void sub_004235A8_0x4235a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004235A8_0x4235a8");
#endif

    switch (ctx->pc) {
        case 0x4235c8u: goto label_4235c8;
        default: break;
    }

    ctx->pc = 0x4235a8u;

    // 0x4235a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4235a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4235ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4235acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4235b0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4235B0u;
    {
        const bool branch_taken_0x4235b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4235B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235B0u;
        // 0x4235b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4235b0) {
            ctx->pc = 0x4235D0u;
            goto label_4235d0;
        }
    }
    ctx->pc = 0x4235B8u;
    // 0x4235b8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x4235b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4235bc: 0xa040003f  sb          $zero, 0x3F($v0)
    ctx->pc = 0x4235bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x4235c0: 0xc10c4de  jal         func_431378
    ctx->pc = 0x4235C0u;
    SET_GPR_U32(ctx, 31, 0x4235C8u);
    ctx->pc = 0x4235C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4235C0u;
    // 0x4235c4: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x4235C0u, 0x4235C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4235C8u;
label_4235c8:
    // 0x4235c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4235C8u;
    {
        const bool branch_taken_0x4235c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4235CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235C8u;
        // 0x4235cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4235c8) {
            ctx->pc = 0x4235D8u;
            goto label_4235d8;
        }
    }
    ctx->pc = 0x4235D0u;
label_4235d0:
    // 0x4235d0: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x4235d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x4235d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4235d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4235d8:
    // 0x4235d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4235D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4235DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235D8u;
        // 0x4235dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4235D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4235E0u;
}
