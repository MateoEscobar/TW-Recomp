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

// Function: sub_001DFE88
// Address: 0x1dfe88 - 0x1dfef0
void sub_001DFE88_0x1dfe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFE88_0x1dfe88");
#endif

    switch (ctx->pc) {
        case 0x1dfeb8u: goto label_1dfeb8;
        case 0x1dfec8u: goto label_1dfec8;
        case 0x1dfed8u: goto label_1dfed8;
        default: break;
    }

    ctx->pc = 0x1dfe88u;

    // 0x1dfe88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dfe8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dfe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dfe90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfe94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfe94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dfe98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe9c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFE9Cu;
    {
        const bool branch_taken_0x1dfe9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE9Cu;
        // 0x1dfea0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe9c) {
            ctx->pc = 0x1DFEACu;
            goto label_1dfeac;
        }
    }
    ctx->pc = 0x1DFEA4u;
    // 0x1dfea4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DFEA4u;
    {
        const bool branch_taken_0x1dfea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEA4u;
        // 0x1dfea8: 0xa2000a70  sb          $zero, 0xA70($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2672), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfea4) {
            ctx->pc = 0x1DFED8u;
            goto label_1dfed8;
        }
    }
    ctx->pc = 0x1DFEACu;
label_1dfeac:
    // 0x1dfeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfeb0: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1DFEB0u;
    SET_GPR_U32(ctx, 31, 0x1DFEB8u);
    ctx->pc = 0x1DFEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEB0u;
    // 0x1dfeb4: 0x26100a70  addiu       $s0, $s0, 0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1DFEB0u, 0x1DFEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEB8u;
label_1dfeb8:
    // 0x1dfeb8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dfebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfec0: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1DFEC0u;
    SET_GPR_U32(ctx, 31, 0x1DFEC8u);
    ctx->pc = 0x1DFEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEC0u;
    // 0x1dfec4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1DFEC0u, 0x1DFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEC8u;
label_1dfec8:
    // 0x1dfec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dfeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfed0: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DFED0u;
    SET_GPR_U32(ctx, 31, 0x1DFED8u);
    ctx->pc = 0x1DFED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFED0u;
    // 0x1dfed4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DFED0u, 0x1DFED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFED8u;
label_1dfed8:
    // 0x1dfed8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dfed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfedc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfedcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEE4u;
        // 0x1dfee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFEECu;
    // 0x1dfeec: 0x0  nop
    ctx->pc = 0x1dfeecu;
    // NOP
    ctx->pc = 0x1dfef0u;
}
