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

// Function: sub_00235C88
// Address: 0x235c88 - 0x235ce8
void sub_00235C88_0x235c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235C88_0x235c88");
#endif

    switch (ctx->pc) {
        case 0x235ca4u: goto label_235ca4;
        case 0x235cacu: goto label_235cac;
        default: break;
    }

    ctx->pc = 0x235c88u;

    // 0x235c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235c8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235c90: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x235c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235c94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x235c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235c9c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x235C9Cu;
    SET_GPR_U32(ctx, 31, 0x235CA4u);
    ctx->pc = 0x235CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C9Cu;
    // 0x235ca0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x235C9Cu, 0x235CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CA4u;
label_235ca4:
    // 0x235ca4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235CA4u;
    SET_GPR_U32(ctx, 31, 0x235CACu);
    ctx->pc = 0x235CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CA4u;
    // 0x235ca8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235CA4u, 0x235CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CACu;
label_235cac:
    // 0x235cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cb0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235CB0u;
    {
        const bool branch_taken_0x235cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CB0u;
        // 0x235cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cb0) {
            ctx->pc = 0x235CD8u;
            goto label_235cd8;
        }
    }
    ctx->pc = 0x235CB8u;
    // 0x235cb8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235CB8u;
    {
        const bool branch_taken_0x235cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x235CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CB8u;
        // 0x235cbc: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cb8) {
            ctx->pc = 0x235CCCu;
            goto label_235ccc;
        }
    }
    ctx->pc = 0x235CC0u;
    // 0x235cc0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x235cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x235cc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235CC4u;
    {
        const bool branch_taken_0x235cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CC4u;
        // 0x235cc8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cc4) {
            ctx->pc = 0x235CD4u;
            goto label_235cd4;
        }
    }
    ctx->pc = 0x235CCCu;
label_235ccc:
    // 0x235ccc: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x235cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x235cd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235cd4:
    // 0x235cd4: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x235cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_235cd8:
    // 0x235cd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235cdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x235CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CE0u;
        // 0x235ce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235CE8u;
}
