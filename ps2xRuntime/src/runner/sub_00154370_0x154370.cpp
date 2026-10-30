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

// Function: sub_00154370
// Address: 0x154370 - 0x1543c8
void sub_00154370_0x154370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154370_0x154370");
#endif

    switch (ctx->pc) {
        case 0x154398u: goto label_154398;
        default: break;
    }

    ctx->pc = 0x154370u;

    // 0x154370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154374: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x154374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x154378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15437c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15437cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154388: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x154388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15438c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x15438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x154390: 0xc10c190  jal         func_430640
    ctx->pc = 0x154390u;
    SET_GPR_U32(ctx, 31, 0x154398u);
    ctx->pc = 0x154394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154390u;
    // 0x154394: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x154390u, 0x154398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154398u;
label_154398:
    // 0x154398: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x154398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15439c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1543a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1543a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1543a4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1543a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1543a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1543A8u;
    {
        const bool branch_taken_0x1543a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543A8u;
        // 0x1543ac: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543a8) {
            ctx->pc = 0x1543B4u;
            goto label_1543b4;
        }
    }
    ctx->pc = 0x1543B0u;
    // 0x1543b0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1543b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1543b4:
    // 0x1543b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1543b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1543b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1543b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1543bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1543bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1543c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1543C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1543C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543C0u;
        // 0x1543c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1543C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1543C8u;
}
