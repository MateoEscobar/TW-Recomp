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

// Function: sub_0038DFE0
// Address: 0x38dfe0 - 0x38e030
void sub_0038DFE0_0x38dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DFE0_0x38dfe0");
#endif

    switch (ctx->pc) {
        case 0x38e004u: goto label_38e004;
        case 0x38e018u: goto label_38e018;
        default: break;
    }

    ctx->pc = 0x38dfe0u;

    // 0x38dfe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38dfe4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38dfe8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38dfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38dfec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38dfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dff0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38dff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38dff4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38dff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38dff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38dffc: 0xc0e4088  jal         func_390220
    ctx->pc = 0x38DFFCu;
    SET_GPR_U32(ctx, 31, 0x38E004u);
    ctx->pc = 0x38E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFFCu;
    // 0x38e000: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x38DFFCu, 0x38E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E004u;
label_38e004:
    // 0x38e004: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E004u;
    {
        const bool branch_taken_0x38e004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E004u;
        // 0x38e008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e004) {
            ctx->pc = 0x38E018u;
            goto label_38e018;
        }
    }
    ctx->pc = 0x38E00Cu;
    // 0x38e00c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e010: 0xc0e31f6  jal         func_38C7D8
    ctx->pc = 0x38E010u;
    SET_GPR_U32(ctx, 31, 0x38E018u);
    ctx->pc = 0x38E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E010u;
    // 0x38e014: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C7D8u, 0x38E010u, 0x38E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E018u;
label_38e018:
    // 0x38e018: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38e018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38e01c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38e01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e024: 0x3e00008  jr          $ra
    ctx->pc = 0x38E024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E024u;
        // 0x38e028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E02Cu;
    // 0x38e02c: 0x0  nop
    ctx->pc = 0x38e02cu;
    // NOP
    ctx->pc = 0x38e030u;
}
