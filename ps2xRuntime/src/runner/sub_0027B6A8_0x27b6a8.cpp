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

// Function: sub_0027B6A8
// Address: 0x27b6a8 - 0x27b700
void sub_0027B6A8_0x27b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B6A8_0x27b6a8");
#endif

    switch (ctx->pc) {
        case 0x27b6c0u: goto label_27b6c0;
        case 0x27b6d4u: goto label_27b6d4;
        default: break;
    }

    ctx->pc = 0x27b6a8u;

    // 0x27b6a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27b6ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27b6b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b6b8: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27B6B8u;
    SET_GPR_U32(ctx, 31, 0x27B6C0u);
    ctx->pc = 0x27B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B6B8u;
    // 0x27b6bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27B6B8u, 0x27B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6C0u;
label_27b6c0:
    // 0x27b6c0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x27b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27b6c4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B6C4u;
    {
        const bool branch_taken_0x27b6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6C4u;
        // 0x27b6c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b6c4) {
            ctx->pc = 0x27B6E0u;
            goto label_27b6e0;
        }
    }
    ctx->pc = 0x27B6CCu;
    // 0x27b6cc: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27B6CCu;
    SET_GPR_U32(ctx, 31, 0x27B6D4u);
    ctx->pc = 0x27B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B6CCu;
    // 0x27b6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27B6CCu, 0x27B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6D4u;
label_27b6d4:
    // 0x27b6d4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x27b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x27b6d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B6D8u;
    {
        const bool branch_taken_0x27b6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6D8u;
        // 0x27b6dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b6d8) {
            ctx->pc = 0x27B6E8u;
            goto label_27b6e8;
        }
    }
    ctx->pc = 0x27B6E0u;
label_27b6e0:
    // 0x27b6e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x27b6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b6e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27b6e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b6e8:
    // 0x27b6e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27b6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b6ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x27B6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6F4u;
        // 0x27b6f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B6FCu;
    // 0x27b6fc: 0x0  nop
    ctx->pc = 0x27b6fcu;
    // NOP
    ctx->pc = 0x27b700u;
}
