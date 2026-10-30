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

// Function: sub_0039AEA0
// Address: 0x39aea0 - 0x39aef0
void sub_0039AEA0_0x39aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AEA0_0x39aea0");
#endif

    switch (ctx->pc) {
        case 0x39aeccu: goto label_39aecc;
        case 0x39aedcu: goto label_39aedc;
        default: break;
    }

    ctx->pc = 0x39aea0u;

    // 0x39aea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39aea4: 0x24060758  addiu       $a2, $zero, 0x758
    ctx->pc = 0x39aea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1880));
    // 0x39aea8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39aeac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39aeb0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x39aeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x39aeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39aeb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39aeb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aebc: 0x26101188  addiu       $s0, $s0, 0x1188
    ctx->pc = 0x39aebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4488));
    // 0x39aec0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x39aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x39aec4: 0xc13cef8  jal         func_4F3BE0
    ctx->pc = 0x39AEC4u;
    SET_GPR_U32(ctx, 31, 0x39AECCu);
    ctx->pc = 0x39AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AEC4u;
    // 0x39aec8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3BE0u, 0x39AEC4u, 0x39AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AECCu;
label_39aecc:
    // 0x39aecc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x39aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x39aed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aed4: 0xc13cf0a  jal         func_4F3C28
    ctx->pc = 0x39AED4u;
    SET_GPR_U32(ctx, 31, 0x39AEDCu);
    ctx->pc = 0x39AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AED4u;
    // 0x39aed8: 0x24060759  addiu       $a2, $zero, 0x759 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1881));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3C28u, 0x39AED4u, 0x39AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AEDCu;
label_39aedc:
    // 0x39aedc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39aedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39aee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39aee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39aee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39aee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39aee8: 0x3e00008  jr          $ra
    ctx->pc = 0x39AEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AEE8u;
        // 0x39aeec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AEF0u;
}
