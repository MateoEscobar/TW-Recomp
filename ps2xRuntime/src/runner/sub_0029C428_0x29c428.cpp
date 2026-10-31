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

// Function: sub_0029C428
// Address: 0x29c428 - 0x29c498
void sub_0029C428_0x29c428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C428_0x29c428");
#endif

    switch (ctx->pc) {
        case 0x29c44cu: goto label_29c44c;
        case 0x29c468u: goto label_29c468;
        case 0x29c478u: goto label_29c478;
        default: break;
    }

    ctx->pc = 0x29c428u;

    // 0x29c428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29c428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29c42c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29c42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29c430: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29c430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29c434: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29c434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c438: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c43c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29c43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x29c440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c444: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C444u;
    SET_GPR_U32(ctx, 31, 0x29C44Cu);
    ctx->pc = 0x29C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C444u;
    // 0x29c448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C444u, 0x29C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C44Cu;
label_29c44c:
    // 0x29c44c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29c450: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29c450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29c454: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C454u;
    {
        const bool branch_taken_0x29c454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C454u;
        // 0x29c458: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c454) {
            ctx->pc = 0x29C47Cu;
            goto label_29c47c;
        }
    }
    ctx->pc = 0x29C45Cu;
    // 0x29c45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c460: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x29C460u;
    SET_GPR_U32(ctx, 31, 0x29C468u);
    ctx->pc = 0x29C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C460u;
    // 0x29c464: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x29C460u, 0x29C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C468u;
label_29c468:
    // 0x29c468: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C468u;
    {
        const bool branch_taken_0x29c468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C468u;
        // 0x29c46c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c468) {
            ctx->pc = 0x29C480u;
            goto label_29c480;
        }
    }
    ctx->pc = 0x29C470u;
    // 0x29c470: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x29C470u;
    SET_GPR_U32(ctx, 31, 0x29C478u);
    ctx->pc = 0x29C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C470u;
    // 0x29c474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x29C470u, 0x29C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C478u;
label_29c478:
    // 0x29c478: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x29c478u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29c47c:
    // 0x29c47c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29c47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29c480:
    // 0x29c480: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29c480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c484: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29c484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c488: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29c488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c490: 0x3e00008  jr          $ra
    ctx->pc = 0x29C490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C490u;
        // 0x29c494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C498u;
}
