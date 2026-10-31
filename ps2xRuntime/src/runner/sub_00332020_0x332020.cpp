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

// Function: sub_00332020
// Address: 0x332020 - 0x332088
void sub_00332020_0x332020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332020_0x332020");
#endif

    switch (ctx->pc) {
        case 0x332060u: goto label_332060;
        case 0x332070u: goto label_332070;
        default: break;
    }

    ctx->pc = 0x332020u;

    // 0x332020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x332024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x332024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332028: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x332028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33202c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x332030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332038: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x332038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33203c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x33203cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x332040: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x332040u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x332044: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x332044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x332048: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x332048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33204c: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x33204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x332050: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x332050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332054: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x332054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x332058: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x332058u;
    SET_GPR_U32(ctx, 31, 0x332060u);
    ctx->pc = 0x33205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332058u;
    // 0x33205c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x332058u, 0x332060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332060u;
label_332060:
    // 0x332060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332068: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x332068u;
    SET_GPR_U32(ctx, 31, 0x332070u);
    ctx->pc = 0x33206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332068u;
    // 0x33206c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x332068u, 0x332070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332070u;
label_332070:
    // 0x332070: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x332070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x332074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33207c: 0x3e00008  jr          $ra
    ctx->pc = 0x33207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33207Cu;
        // 0x332080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332084u;
    // 0x332084: 0x0  nop
    ctx->pc = 0x332084u;
    // NOP
    ctx->pc = 0x332088u;
}
