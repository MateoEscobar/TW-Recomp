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

// Function: sub_001B6F60
// Address: 0x1b6f60 - 0x1b6fb0
void sub_001B6F60_0x1b6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6F60_0x1b6f60");
#endif

    switch (ctx->pc) {
        case 0x1b6f84u: goto label_1b6f84;
        case 0x1b6f94u: goto label_1b6f94;
        case 0x1b6f9cu: goto label_1b6f9c;
        default: break;
    }

    ctx->pc = 0x1b6f60u;

    // 0x1b6f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6f64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b6f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f70: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x1b6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x1b6f74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6F74u;
    {
        const bool branch_taken_0x1b6f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f74) {
            ctx->pc = 0x1B6F8Cu;
            goto label_1b6f8c;
        }
    }
    ctx->pc = 0x1B6F7Cu;
    // 0x1b6f7c: 0xc06e552  jal         func_1B9548
    ctx->pc = 0x1B6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F84u);
    ctx->pc = 0x1B6F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F7Cu;
    // 0x1b6f80: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1B6F7Cu, 0x1B6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F84u;
label_1b6f84:
    // 0x1b6f84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6F84u;
    {
        const bool branch_taken_0x1b6f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f84) {
            ctx->pc = 0x1B6F94u;
            goto label_1b6f94;
        }
    }
    ctx->pc = 0x1B6F8Cu;
label_1b6f8c:
    // 0x1b6f8c: 0xc0734a0  jal         func_1CD280
    ctx->pc = 0x1B6F8Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F94u);
    ctx->pc = 0x1B6F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F8Cu;
    // 0x1b6f90: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1B6F8Cu, 0x1B6F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F94u;
label_1b6f94:
    // 0x1b6f94: 0xc06886e  jal         func_1A21B8
    ctx->pc = 0x1B6F94u;
    SET_GPR_U32(ctx, 31, 0x1B6F9Cu);
    ctx->pc = 0x1B6F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F94u;
    // 0x1b6f98: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1B6F94u, 0x1B6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F9Cu;
label_1b6f9c:
    // 0x1b6f9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b6f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FA4u;
        // 0x1b6fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6FACu;
    // 0x1b6fac: 0x0  nop
    ctx->pc = 0x1b6facu;
    // NOP
    ctx->pc = 0x1b6fb0u;
}
