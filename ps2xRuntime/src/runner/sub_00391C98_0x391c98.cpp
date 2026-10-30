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

// Function: sub_00391C98
// Address: 0x391c98 - 0x391ce8
void sub_00391C98_0x391c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391C98_0x391c98");
#endif

    switch (ctx->pc) {
        case 0x391cd0u: goto label_391cd0;
        default: break;
    }

    ctx->pc = 0x391c98u;

    // 0x391c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x391c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x391c9c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x391c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391ca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x391ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x391ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x391ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x391ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x391ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cac: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x391cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x391cb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x391CB0u;
    {
        const bool branch_taken_0x391cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391CB0u;
        // 0x391cb4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391cb0) {
            ctx->pc = 0x391CD4u;
            goto label_391cd4;
        }
    }
    ctx->pc = 0x391CB8u;
    // 0x391cb8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x391cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x391cbc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x391cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cc0: 0x8c44719c  lw          $a0, 0x719C($v0)
    ctx->pc = 0x391cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x59719Cu));
    // 0x391cc4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x391cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cc8: 0xc105f28  jal         func_417CA0
    ctx->pc = 0x391CC8u;
    SET_GPR_U32(ctx, 31, 0x391CD0u);
    ctx->pc = 0x391CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391CC8u;
    // 0x391ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417CA0u, 0x391CC8u, 0x391CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391CD0u;
label_391cd0:
    // 0x391cd0: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x391cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
label_391cd4:
    // 0x391cd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x391cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x391cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x391CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391CDCu;
        // 0x391ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391CE4u;
    // 0x391ce4: 0x0  nop
    ctx->pc = 0x391ce4u;
    // NOP
    ctx->pc = 0x391ce8u;
}
