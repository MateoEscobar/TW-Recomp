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

// Function: sub_0029C498
// Address: 0x29c498 - 0x29c4f8
void sub_0029C498_0x29c498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C498_0x29c498");
#endif

    switch (ctx->pc) {
        case 0x29c4b8u: goto label_29c4b8;
        case 0x29c4c8u: goto label_29c4c8;
        case 0x29c4d8u: goto label_29c4d8;
        default: break;
    }

    ctx->pc = 0x29c498u;

    // 0x29c498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29c49c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29c4a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29c4a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29c4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c4ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29c4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4b0: 0xc088edc  jal         func_223B70
    ctx->pc = 0x29C4B0u;
    SET_GPR_U32(ctx, 31, 0x29C4B8u);
    ctx->pc = 0x29C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4B0u;
    // 0x29c4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x29C4B0u, 0x29C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4B8u;
label_29c4b8:
    // 0x29c4b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C4B8u;
    {
        const bool branch_taken_0x29c4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4B8u;
        // 0x29c4bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4b8) {
            ctx->pc = 0x29C4E0u;
            goto label_29c4e0;
        }
    }
    ctx->pc = 0x29C4C0u;
    // 0x29c4c0: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x29C4C0u;
    SET_GPR_U32(ctx, 31, 0x29C4C8u);
    ctx->pc = 0x29C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4C0u;
    // 0x29c4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x29C4C0u, 0x29C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4C8u;
label_29c4c8:
    // 0x29c4c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C4C8u;
    {
        const bool branch_taken_0x29c4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4C8u;
        // 0x29c4cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4c8) {
            ctx->pc = 0x29C4E0u;
            goto label_29c4e0;
        }
    }
    ctx->pc = 0x29C4D0u;
    // 0x29c4d0: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x29C4D0u;
    SET_GPR_U32(ctx, 31, 0x29C4D8u);
    ctx->pc = 0x29C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4D0u;
    // 0x29c4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x29C4D0u, 0x29C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4D8u;
label_29c4d8:
    // 0x29c4d8: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x29c4d8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29c4dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29c4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c4e0:
    // 0x29c4e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29c4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c4e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x29C4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4ECu;
        // 0x29c4f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C4F4u;
    // 0x29c4f4: 0x0  nop
    ctx->pc = 0x29c4f4u;
    // NOP
    ctx->pc = 0x29c4f8u;
}
