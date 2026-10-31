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

// Function: sub_002723A8
// Address: 0x2723a8 - 0x2723e8
void sub_002723A8_0x2723a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002723A8_0x2723a8");
#endif

    switch (ctx->pc) {
        case 0x2723c0u: goto label_2723c0;
        case 0x2723d4u: goto label_2723d4;
        default: break;
    }

    ctx->pc = 0x2723a8u;

    // 0x2723a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2723a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2723ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2723acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2723b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2723b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2723b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2723b8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2723B8u;
    SET_GPR_U32(ctx, 31, 0x2723C0u);
    ctx->pc = 0x2723BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2723B8u;
    // 0x2723bc: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2723B8u, 0x2723C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723C0u;
label_2723c0:
    // 0x2723c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2723C0u;
    {
        const bool branch_taken_0x2723c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2723c0) {
            ctx->pc = 0x2723C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2723C0u;
            // 0x2723c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2723D8u;
            goto label_2723d8;
        }
    }
    ctx->pc = 0x2723C8u;
    // 0x2723c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2723c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723cc: 0xc08af70  jal         func_22BDC0
    ctx->pc = 0x2723CCu;
    SET_GPR_U32(ctx, 31, 0x2723D4u);
    ctx->pc = 0x2723D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2723CCu;
    // 0x2723d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDC0u, 0x2723CCu, 0x2723D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723D4u;
label_2723d4:
    // 0x2723d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2723d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2723d8:
    // 0x2723d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2723d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2723dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2723DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2723E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723DCu;
        // 0x2723e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2723DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2723E4u;
    // 0x2723e4: 0x0  nop
    ctx->pc = 0x2723e4u;
    // NOP
    ctx->pc = 0x2723e8u;
}
