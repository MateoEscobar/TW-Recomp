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

// Function: sub_0038DFA0
// Address: 0x38dfa0 - 0x38dfe0
void sub_0038DFA0_0x38dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DFA0_0x38dfa0");
#endif

    switch (ctx->pc) {
        case 0x38dfbcu: goto label_38dfbc;
        case 0x38dfccu: goto label_38dfcc;
        default: break;
    }

    ctx->pc = 0x38dfa0u;

    // 0x38dfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38dfa4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38dfa8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38dfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38dfac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dfb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38dfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38dfb4: 0xc0e4088  jal         func_390220
    ctx->pc = 0x38DFB4u;
    SET_GPR_U32(ctx, 31, 0x38DFBCu);
    ctx->pc = 0x38DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFB4u;
    // 0x38dfb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x38DFB4u, 0x38DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFBCu;
label_38dfbc:
    // 0x38dfbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38DFBCu;
    {
        const bool branch_taken_0x38dfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFBCu;
        // 0x38dfc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dfbc) {
            ctx->pc = 0x38DFCCu;
            goto label_38dfcc;
        }
    }
    ctx->pc = 0x38DFC4u;
    // 0x38dfc4: 0xc0e2ac6  jal         func_38AB18
    ctx->pc = 0x38DFC4u;
    SET_GPR_U32(ctx, 31, 0x38DFCCu);
    ctx->pc = 0x38DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFC4u;
    // 0x38dfc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AB18u, 0x38DFC4u, 0x38DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFCCu;
label_38dfcc:
    // 0x38dfcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38dfccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38dfd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38dfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38dfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x38DFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFD4u;
        // 0x38dfd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DFDCu;
    // 0x38dfdc: 0x0  nop
    ctx->pc = 0x38dfdcu;
    // NOP
    ctx->pc = 0x38dfe0u;
}
