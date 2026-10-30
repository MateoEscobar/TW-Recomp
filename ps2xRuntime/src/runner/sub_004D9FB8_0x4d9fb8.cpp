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

// Function: sub_004D9FB8
// Address: 0x4d9fb8 - 0x4d9fe8
void sub_004D9FB8_0x4d9fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D9FB8_0x4d9fb8");
#endif

    switch (ctx->pc) {
        case 0x4d9fdcu: goto label_4d9fdc;
        default: break;
    }

    ctx->pc = 0x4d9fb8u;

    // 0x4d9fb8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4d9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4d9fbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d9fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d9fc0: 0x2442c168  addiu       $v0, $v0, -0x3E98
    ctx->pc = 0x4d9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951272));
    // 0x4d9fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d9fc8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4d9fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d9fcc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D9FCCu;
    {
        const bool branch_taken_0x4d9fcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9FCCu;
        // 0x4d9fd0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9fcc) {
            ctx->pc = 0x4D9FDCu;
            goto label_4d9fdc;
        }
    }
    ctx->pc = 0x4D9FD4u;
    // 0x4d9fd4: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4D9FD4u;
    SET_GPR_U32(ctx, 31, 0x4D9FDCu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4D9FD4u, 0x4D9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9FDCu;
label_4d9fdc:
    // 0x4d9fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d9fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d9fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D9FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9FE0u;
        // 0x4d9fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D9FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D9FE8u;
}
