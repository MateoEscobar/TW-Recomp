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

// Function: sub_00339CB8
// Address: 0x339cb8 - 0x339cf0
void sub_00339CB8_0x339cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339CB8_0x339cb8");
#endif

    switch (ctx->pc) {
        case 0x339cd8u: goto label_339cd8;
        default: break;
    }

    ctx->pc = 0x339cb8u;

    // 0x339cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339cbc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x339cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339cc0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x339cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x339cc4: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x339cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x339cc8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x339cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ccc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339cd0: 0xc0ce512  jal         func_339448
    ctx->pc = 0x339CD0u;
    SET_GPR_U32(ctx, 31, 0x339CD8u);
    ctx->pc = 0x339CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339CD0u;
    // 0x339cd4: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339448u, 0x339CD0u, 0x339CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339CD8u;
label_339cd8:
    // 0x339cd8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339CD8u;
    {
        const bool branch_taken_0x339cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CD8u;
        // 0x339cdc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339cd8) {
            ctx->pc = 0x339CE4u;
            goto label_339ce4;
        }
    }
    ctx->pc = 0x339CE0u;
    // 0x339ce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x339ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339ce4:
    // 0x339ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x339CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CE8u;
        // 0x339cec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339CF0u;
}
