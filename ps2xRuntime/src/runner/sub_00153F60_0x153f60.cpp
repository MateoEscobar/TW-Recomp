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

// Function: sub_00153F60
// Address: 0x153f60 - 0x153fa8
void sub_00153F60_0x153f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153F60_0x153f60");
#endif

    switch (ctx->pc) {
        case 0x153f88u: goto label_153f88;
        default: break;
    }

    ctx->pc = 0x153f60u;

    // 0x153f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153f64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x153f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x153f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153f74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x153f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f78: 0xa2000047  sb          $zero, 0x47($s0)
    ctx->pc = 0x153f78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x153f7c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x153f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x153f80: 0xc10c4de  jal         func_431378
    ctx->pc = 0x153F80u;
    SET_GPR_U32(ctx, 31, 0x153F88u);
    ctx->pc = 0x153F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F80u;
    // 0x153f84: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x153F80u, 0x153F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F88u;
label_153f88:
    // 0x153f88: 0xae110048  sw          $s1, 0x48($s0)
    ctx->pc = 0x153f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
    // 0x153f8c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x153f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x153f90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x153f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x153F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F9Cu;
        // 0x153fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153FA4u;
    // 0x153fa4: 0x0  nop
    ctx->pc = 0x153fa4u;
    // NOP
    ctx->pc = 0x153fa8u;
}
