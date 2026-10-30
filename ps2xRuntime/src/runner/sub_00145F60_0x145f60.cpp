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

// Function: sub_00145F60
// Address: 0x145f60 - 0x145fa0
void sub_00145F60_0x145f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145F60_0x145f60");
#endif

    switch (ctx->pc) {
        case 0x145f80u: goto label_145f80;
        default: break;
    }

    ctx->pc = 0x145f60u;

    // 0x145f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145f64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x145f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145f6c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x145F6Cu;
    {
        const bool branch_taken_0x145f6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x145F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F6Cu;
        // 0x145f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f6c) {
            ctx->pc = 0x145F88u;
            goto label_145f88;
        }
    }
    ctx->pc = 0x145F74u;
    // 0x145f74: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x145f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x145f78: 0xc0523f6  jal         func_148FD8
    ctx->pc = 0x145F78u;
    SET_GPR_U32(ctx, 31, 0x145F80u);
    ctx->pc = 0x145F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F78u;
    // 0x145f7c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FD8u, 0x145F78u, 0x145F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F80u;
label_145f80:
    // 0x145f80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145F80u;
    {
        const bool branch_taken_0x145f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F80u;
        // 0x145f84: 0xfe020020  sd          $v0, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f80) {
            ctx->pc = 0x145F90u;
            goto label_145f90;
        }
    }
    ctx->pc = 0x145F88u;
label_145f88:
    // 0x145f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145f8c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x145f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_145f90:
    // 0x145f90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145f98: 0x3e00008  jr          $ra
    ctx->pc = 0x145F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F98u;
        // 0x145f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145FA0u;
}
