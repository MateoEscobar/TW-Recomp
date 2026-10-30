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

// Function: sub_001980A0
// Address: 0x1980a0 - 0x1980d8
void sub_001980A0_0x1980a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001980A0_0x1980a0");
#endif

    switch (ctx->pc) {
        case 0x1980b8u: goto label_1980b8;
        case 0x1980c8u: goto label_1980c8;
        default: break;
    }

    ctx->pc = 0x1980a0u;

    // 0x1980a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1980a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1980a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1980a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980a8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1980A8u;
    {
        const bool branch_taken_0x1980a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1980ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980A8u;
        // 0x1980ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980a8) {
            ctx->pc = 0x1980C0u;
            goto label_1980c0;
        }
    }
    ctx->pc = 0x1980B0u;
    // 0x1980b0: 0xc1223e4  jal         func_488F90
    ctx->pc = 0x1980B0u;
    SET_GPR_U32(ctx, 31, 0x1980B8u);
    ctx->pc = 0x1980B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980B0u;
    // 0x1980b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488F90u, 0x1980B0u, 0x1980B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980B8u;
label_1980b8:
    // 0x1980b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1980B8u;
    {
        const bool branch_taken_0x1980b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980B8u;
        // 0x1980bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980b8) {
            ctx->pc = 0x1980CCu;
            goto label_1980cc;
        }
    }
    ctx->pc = 0x1980C0u;
label_1980c0:
    // 0x1980c0: 0xc1223e4  jal         func_488F90
    ctx->pc = 0x1980C0u;
    SET_GPR_U32(ctx, 31, 0x1980C8u);
    ctx->pc = 0x488F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488F90u, 0x1980C0u, 0x1980C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980C8u;
label_1980c8:
    // 0x1980c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1980c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1980cc:
    // 0x1980cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1980CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1980D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980CCu;
        // 0x1980d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1980CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1980D4u;
    // 0x1980d4: 0x0  nop
    ctx->pc = 0x1980d4u;
    // NOP
    ctx->pc = 0x1980d8u;
}
