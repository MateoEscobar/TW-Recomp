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

// Function: sub_001C1D30
// Address: 0x1c1d30 - 0x1c1da0
void sub_001C1D30_0x1c1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1D30_0x1c1d30");
#endif

    switch (ctx->pc) {
        case 0x1c1d58u: goto label_1c1d58;
        case 0x1c1d64u: goto label_1c1d64;
        case 0x1c1d70u: goto label_1c1d70;
        case 0x1c1d88u: goto label_1c1d88;
        default: break;
    }

    ctx->pc = 0x1c1d30u;

    // 0x1c1d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1d34: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c1d38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c1d3c: 0x2442a628  addiu       $v0, $v0, -0x59D8
    ctx->pc = 0x1c1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944296));
    // 0x1c1d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c1d4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d50: 0xc07088a  jal         func_1C2228
    ctx->pc = 0x1C1D50u;
    SET_GPR_U32(ctx, 31, 0x1C1D58u);
    ctx->pc = 0x1C1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D50u;
    // 0x1c1d54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2228u, 0x1C1D50u, 0x1C1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D58u;
label_1c1d58:
    // 0x1c1d58: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x1c1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1c1d5c: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1C1D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D64u);
    ctx->pc = 0x1C1D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D5Cu;
    // 0x1c1d60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1C1D5Cu, 0x1C1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D64u;
label_1c1d64:
    // 0x1c1d64: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1c1d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1c1d68: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C1D68u;
    SET_GPR_U32(ctx, 31, 0x1C1D70u);
    ctx->pc = 0x1C1D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D68u;
    // 0x1c1d6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C1D68u, 0x1C1D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D70u;
label_1c1d70:
    // 0x1c1d70: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c1d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d78: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x1c1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x1c1d7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d80: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1C1D80u;
    SET_GPR_U32(ctx, 31, 0x1C1D88u);
    ctx->pc = 0x1C1D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D80u;
    // 0x1c1d84: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1C1D80u, 0x1C1D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D88u;
label_1c1d88:
    // 0x1c1d88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c1d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1d8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D94u;
        // 0x1c1d98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1D9Cu;
    // 0x1c1d9c: 0x0  nop
    ctx->pc = 0x1c1d9cu;
    // NOP
    ctx->pc = 0x1c1da0u;
}
