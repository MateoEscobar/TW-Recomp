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

// Function: sub_00240800
// Address: 0x240800 - 0x240850
void sub_00240800_0x240800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240800_0x240800");
#endif

    switch (ctx->pc) {
        case 0x240838u: goto label_240838;
        default: break;
    }

    ctx->pc = 0x240800u;

    // 0x240800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240804: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x240804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240808: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x240808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24080c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240814: 0x8e020664  lw          $v0, 0x664($s0)
    ctx->pc = 0x240814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x240818: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240818u;
    {
        const bool branch_taken_0x240818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240818u;
        // 0x24081c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240818) {
            ctx->pc = 0x24083Cu;
            goto label_24083c;
        }
    }
    ctx->pc = 0x240820u;
    // 0x240820: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x240820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x240824: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x240824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240828: 0x8c44719c  lw          $a0, 0x719C($v0)
    ctx->pc = 0x240828u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x59719Cu));
    // 0x24082c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x24082cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240830: 0xc105f28  jal         func_417CA0
    ctx->pc = 0x240830u;
    SET_GPR_U32(ctx, 31, 0x240838u);
    ctx->pc = 0x240834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240830u;
    // 0x240834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417CA0u, 0x240830u, 0x240838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240838u;
label_240838:
    // 0x240838: 0xae020664  sw          $v0, 0x664($s0)
    ctx->pc = 0x240838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 2));
label_24083c:
    // 0x24083c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24083cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240844: 0x3e00008  jr          $ra
    ctx->pc = 0x240844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240844u;
        // 0x240848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24084Cu;
    // 0x24084c: 0x0  nop
    ctx->pc = 0x24084cu;
    // NOP
    ctx->pc = 0x240850u;
}
