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

// Function: sub_00335498
// Address: 0x335498 - 0x3354e0
void sub_00335498_0x335498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335498_0x335498");
#endif

    switch (ctx->pc) {
        case 0x3354b4u: goto label_3354b4;
        default: break;
    }

    ctx->pc = 0x335498u;

    // 0x335498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33549c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3354a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3354a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354a4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3354A4u;
    {
        const bool branch_taken_0x3354a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3354A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354A4u;
        // 0x3354a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3354a4) {
            ctx->pc = 0x3354CCu;
            goto label_3354cc;
        }
    }
    ctx->pc = 0x3354ACu;
    // 0x3354ac: 0xc0cd4e4  jal         func_335390
    ctx->pc = 0x3354ACu;
    SET_GPR_U32(ctx, 31, 0x3354B4u);
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x3354ACu, 0x3354B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354B4u;
label_3354b4:
    // 0x3354b4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x3354b4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3354b8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3354B8u;
    {
        const bool branch_taken_0x3354b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3354b8) {
            ctx->pc = 0x3354BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3354B8u;
            // 0x3354bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3354C0u;
            goto label_3354c0;
        }
    }
    ctx->pc = 0x3354C0u;
label_3354c0:
    // 0x3354c0: 0x1010  mfhi        $v0
    ctx->pc = 0x3354c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3354c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3354C4u;
    {
        const bool branch_taken_0x3354c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3354C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354C4u;
        // 0x3354c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3354c4) {
            ctx->pc = 0x3354D4u;
            goto label_3354d4;
        }
    }
    ctx->pc = 0x3354CCu;
label_3354cc:
    // 0x3354cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3354ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3354d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3354d4:
    // 0x3354d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3354d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3354d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3354D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3354DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354D8u;
        // 0x3354dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3354D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3354E0u;
}
