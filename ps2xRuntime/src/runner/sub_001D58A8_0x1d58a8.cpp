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

// Function: sub_001D58A8
// Address: 0x1d58a8 - 0x1d5900
void sub_001D58A8_0x1d58a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D58A8_0x1d58a8");
#endif

    switch (ctx->pc) {
        case 0x1d58ccu: goto label_1d58cc;
        case 0x1d58d8u: goto label_1d58d8;
        case 0x1d58ecu: goto label_1d58ec;
        default: break;
    }

    ctx->pc = 0x1d58a8u;

    // 0x1d58a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d58a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d58ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d58acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d58b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d58b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d58b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d58b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d58b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d58bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d58c0: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x1d58c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x1d58c4: 0xc0759b4  jal         func_1D66D0
    ctx->pc = 0x1D58C4u;
    SET_GPR_U32(ctx, 31, 0x1D58CCu);
    ctx->pc = 0x1D58C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58C4u;
    // 0x1d58c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66D0u, 0x1D58C4u, 0x1D58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58CCu;
label_1d58cc:
    // 0x1d58cc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d58d0: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1D58D0u;
    SET_GPR_U32(ctx, 31, 0x1D58D8u);
    ctx->pc = 0x1D58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58D0u;
    // 0x1d58d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1D58D0u, 0x1D58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58D8u;
label_1d58d8:
    // 0x1d58d8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1d58d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1d58dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D58DCu;
    {
        const bool branch_taken_0x1d58dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58DCu;
        // 0x1d58e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58dc) {
            ctx->pc = 0x1D58F0u;
            goto label_1d58f0;
        }
    }
    ctx->pc = 0x1D58E4u;
    // 0x1d58e4: 0xc10b208  jal         func_42C820
    ctx->pc = 0x1D58E4u;
    SET_GPR_U32(ctx, 31, 0x1D58ECu);
    ctx->pc = 0x1D58E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58E4u;
    // 0x1d58e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x1D58E4u, 0x1D58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58ECu;
label_1d58ec:
    // 0x1d58ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d58ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d58f0:
    // 0x1d58f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d58f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d58f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d58f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d58f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D58F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58F8u;
        // 0x1d58fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D58F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5900u;
}
