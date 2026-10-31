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

// Function: sub_00168E68
// Address: 0x168e68 - 0x168eb8
void sub_00168E68_0x168e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E68_0x168e68");
#endif

    switch (ctx->pc) {
        case 0x168e84u: goto label_168e84;
        default: break;
    }

    ctx->pc = 0x168e68u;

    // 0x168e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168e6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x168e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x168e70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168e7c: 0xc05a2a8  jal         func_168AA0
    ctx->pc = 0x168E7Cu;
    SET_GPR_U32(ctx, 31, 0x168E84u);
    ctx->pc = 0x168E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E7Cu;
    // 0x168e80: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168AA0u, 0x168E7Cu, 0x168E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E84u;
label_168e84:
    // 0x168e84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x168e84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168e8c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168E8Cu;
    {
        const bool branch_taken_0x168e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x168E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E8Cu;
        // 0x168e90: 0x24020130  addiu       $v0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e8c) {
            ctx->pc = 0x168EA0u;
            goto label_168ea0;
        }
    }
    ctx->pc = 0x168E94u;
    // 0x168e94: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x168e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x168e98: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x168e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x168e9c: 0xac5106cc  sw          $s1, 0x6CC($v0)
    ctx->pc = 0x168e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 17));
label_168ea0:
    // 0x168ea0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x168ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168eac: 0x3e00008  jr          $ra
    ctx->pc = 0x168EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EACu;
        // 0x168eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168EB4u;
    // 0x168eb4: 0x0  nop
    ctx->pc = 0x168eb4u;
    // NOP
    ctx->pc = 0x168eb8u;
}
