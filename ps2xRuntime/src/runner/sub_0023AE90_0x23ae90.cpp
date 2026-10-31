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

// Function: sub_0023AE90
// Address: 0x23ae90 - 0x23aee0
void sub_0023AE90_0x23ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AE90_0x23ae90");
#endif

    switch (ctx->pc) {
        case 0x23aeacu: goto label_23aeac;
        case 0x23aeb4u: goto label_23aeb4;
        case 0x23aec4u: goto label_23aec4;
        default: break;
    }

    ctx->pc = 0x23ae90u;

    // 0x23ae90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ae94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23ae98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23ae9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23ae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aea0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23aea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23aea4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23AEA4u;
    SET_GPR_U32(ctx, 31, 0x23AEACu);
    ctx->pc = 0x23AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEA4u;
    // 0x23aea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23AEA4u, 0x23AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEACu;
label_23aeac:
    // 0x23aeac: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23AEACu;
    SET_GPR_U32(ctx, 31, 0x23AEB4u);
    ctx->pc = 0x23AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEACu;
    // 0x23aeb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23AEACu, 0x23AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEB4u;
label_23aeb4:
    // 0x23aeb4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AEB4u;
    {
        const bool branch_taken_0x23aeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aeb4) {
            ctx->pc = 0x23AEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AEB4u;
            // 0x23aeb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AED0u;
            goto label_23aed0;
        }
    }
    ctx->pc = 0x23AEBCu;
    // 0x23aebc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x23AEBCu;
    SET_GPR_U32(ctx, 31, 0x23AEC4u);
    ctx->pc = 0x23AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEBCu;
    // 0x23aec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x23AEBCu, 0x23AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEC4u;
label_23aec4:
    // 0x23aec4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23AEC4u;
    {
        const bool branch_taken_0x23aec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23aec4) {
            ctx->pc = 0x23AEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AEC4u;
            // 0x23aec8: 0xa050001f  sb          $s0, 0x1F($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 31), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AECCu;
            goto label_23aecc;
        }
    }
    ctx->pc = 0x23AECCu;
label_23aecc:
    // 0x23aecc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23aeccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23aed0:
    // 0x23aed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aed4: 0x3e00008  jr          $ra
    ctx->pc = 0x23AED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AED4u;
        // 0x23aed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AEDCu;
    // 0x23aedc: 0x0  nop
    ctx->pc = 0x23aedcu;
    // NOP
    ctx->pc = 0x23aee0u;
}
