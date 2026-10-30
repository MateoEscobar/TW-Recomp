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

// Function: sub_0041EC60
// Address: 0x41ec60 - 0x41eca0
void sub_0041EC60_0x41ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EC60_0x41ec60");
#endif

    switch (ctx->pc) {
        case 0x41ec88u: goto label_41ec88;
        default: break;
    }

    ctx->pc = 0x41ec60u;

    // 0x41ec60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41ec64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41ec64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41ec68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41ec68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ec6c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x41ec6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41ec70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41EC70u;
    {
        const bool branch_taken_0x41ec70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC70u;
        // 0x41ec74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ec70) {
            ctx->pc = 0x41EC80u;
            goto label_41ec80;
        }
    }
    ctx->pc = 0x41EC78u;
    // 0x41ec78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x41EC78u;
    {
        const bool branch_taken_0x41ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC78u;
        // 0x41ec7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ec78) {
            ctx->pc = 0x41EC8Cu;
            goto label_41ec8c;
        }
    }
    ctx->pc = 0x41EC80u;
label_41ec80:
    // 0x41ec80: 0xc107886  jal         func_41E218
    ctx->pc = 0x41EC80u;
    SET_GPR_U32(ctx, 31, 0x41EC88u);
    ctx->pc = 0x41EC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EC80u;
    // 0x41ec84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E218u, 0x41EC80u, 0x41EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EC88u;
label_41ec88:
    // 0x41ec88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41ec88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ec8c:
    // 0x41ec8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41ec8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41ec90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ec90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ec94: 0x3e00008  jr          $ra
    ctx->pc = 0x41EC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EC94u;
        // 0x41ec98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EC9Cu;
    // 0x41ec9c: 0x0  nop
    ctx->pc = 0x41ec9cu;
    // NOP
    ctx->pc = 0x41eca0u;
}
