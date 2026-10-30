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

// Function: sub_0035EA90
// Address: 0x35ea90 - 0x35eb00
void sub_0035EA90_0x35ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EA90_0x35ea90");
#endif

    switch (ctx->pc) {
        case 0x35eab0u: goto label_35eab0;
        case 0x35eab8u: goto label_35eab8;
        case 0x35eaccu: goto label_35eacc;
        case 0x35ead8u: goto label_35ead8;
        case 0x35eae4u: goto label_35eae4;
        default: break;
    }

    ctx->pc = 0x35ea90u;

    // 0x35ea90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ea94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ea98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35ea98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35ea9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ea9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eaa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35eaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35eaa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35eaa8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EAA8u;
    SET_GPR_U32(ctx, 31, 0x35EAB0u);
    ctx->pc = 0x35EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EAA8u;
    // 0x35eaac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EAA8u, 0x35EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAB0u;
label_35eab0:
    // 0x35eab0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EAB0u;
    SET_GPR_U32(ctx, 31, 0x35EAB8u);
    ctx->pc = 0x35EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EAB0u;
    // 0x35eab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EAB0u, 0x35EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAB8u;
label_35eab8:
    // 0x35eab8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35eab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eabc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35eabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eac4: 0xc102488  jal         func_409220
    ctx->pc = 0x35EAC4u;
    SET_GPR_U32(ctx, 31, 0x35EACCu);
    ctx->pc = 0x35EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EAC4u;
    // 0x35eac8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35EAC4u, 0x35EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EACCu;
label_35eacc:
    // 0x35eacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35eaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ead0: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x35EAD0u;
    SET_GPR_U32(ctx, 31, 0x35EAD8u);
    ctx->pc = 0x35EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EAD0u;
    // 0x35ead4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AAB0u, 0x35EAD0u, 0x35EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAD8u;
label_35ead8:
    // 0x35ead8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ead8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eadc: 0xc102562  jal         func_409588
    ctx->pc = 0x35EADCu;
    SET_GPR_U32(ctx, 31, 0x35EAE4u);
    ctx->pc = 0x35EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EADCu;
    // 0x35eae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35EADCu, 0x35EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAE4u;
label_35eae4:
    // 0x35eae4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35eae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35eae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35eaec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35eaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35eaf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35eaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x35EAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAF4u;
        // 0x35eaf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EAFCu;
    // 0x35eafc: 0x0  nop
    ctx->pc = 0x35eafcu;
    // NOP
    ctx->pc = 0x35eb00u;
}
