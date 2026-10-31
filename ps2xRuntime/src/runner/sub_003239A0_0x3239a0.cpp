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

// Function: sub_003239A0
// Address: 0x3239a0 - 0x3239f8
void sub_003239A0_0x3239a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003239A0_0x3239a0");
#endif

    switch (ctx->pc) {
        case 0x3239c4u: goto label_3239c4;
        case 0x3239d4u: goto label_3239d4;
        case 0x3239e4u: goto label_3239e4;
        default: break;
    }

    ctx->pc = 0x3239a0u;

    // 0x3239a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3239a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3239a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3239a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3239a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3239a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3239ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3239acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3239b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3239b4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3239B4u;
    {
        const bool branch_taken_0x3239b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3239B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239B4u;
        // 0x3239b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3239b4) {
            ctx->pc = 0x3239CCu;
            goto label_3239cc;
        }
    }
    ctx->pc = 0x3239BCu;
    // 0x3239bc: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x3239BCu;
    SET_GPR_U32(ctx, 31, 0x3239C4u);
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3239BCu, 0x3239C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239C4u;
label_3239c4:
    // 0x3239c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3239C4u;
    {
        const bool branch_taken_0x3239c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3239C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239C4u;
        // 0x3239c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3239c4) {
            ctx->pc = 0x3239E8u;
            goto label_3239e8;
        }
    }
    ctx->pc = 0x3239CCu;
label_3239cc:
    // 0x3239cc: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x3239CCu;
    SET_GPR_U32(ctx, 31, 0x3239D4u);
    ctx->pc = 0x3239D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239CCu;
    // 0x3239d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x3239CCu, 0x3239D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239D4u;
label_3239d4:
    // 0x3239d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3239d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3239d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239dc: 0xc0c8e50  jal         func_323940
    ctx->pc = 0x3239DCu;
    SET_GPR_U32(ctx, 31, 0x3239E4u);
    ctx->pc = 0x3239E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239DCu;
    // 0x3239e0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323940u, 0x3239DCu, 0x3239E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239E4u;
label_3239e4:
    // 0x3239e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3239e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3239e8:
    // 0x3239e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3239e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3239ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3239ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3239f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3239F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3239F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239F0u;
        // 0x3239f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3239F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3239F8u;
}
