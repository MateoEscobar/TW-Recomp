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

// Function: sub_001DFF40
// Address: 0x1dff40 - 0x1dffa8
void sub_001DFF40_0x1dff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFF40_0x1dff40");
#endif

    switch (ctx->pc) {
        case 0x1dff7cu: goto label_1dff7c;
        case 0x1dff88u: goto label_1dff88;
        case 0x1dff94u: goto label_1dff94;
        default: break;
    }

    ctx->pc = 0x1dff40u;

    // 0x1dff40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dff44: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1dff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1dff48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dff4c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1dff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1dff50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dff54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dff54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dff5c: 0x2442beb8  addiu       $v0, $v0, -0x4148
    ctx->pc = 0x1dff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950584));
    // 0x1dff60: 0x2463bee0  addiu       $v1, $v1, -0x4120
    ctx->pc = 0x1dff60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950624));
    // 0x1dff64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dff64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff68: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1dff68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1dff6c: 0x26040880  addiu       $a0, $s0, 0x880
    ctx->pc = 0x1dff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    // 0x1dff70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1dff70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1dff74: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1DFF74u;
    SET_GPR_U32(ctx, 31, 0x1DFF7Cu);
    ctx->pc = 0x1DFF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF74u;
    // 0x1dff78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1DFF74u, 0x1DFF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF7Cu;
label_1dff7c:
    // 0x1dff7c: 0x260407b0  addiu       $a0, $s0, 0x7B0
    ctx->pc = 0x1dff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1968));
    // 0x1dff80: 0xc074fde  jal         func_1D3F78
    ctx->pc = 0x1DFF80u;
    SET_GPR_U32(ctx, 31, 0x1DFF88u);
    ctx->pc = 0x1DFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF80u;
    // 0x1dff84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F78u, 0x1DFF80u, 0x1DFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF88u;
label_1dff88:
    // 0x1dff88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff8c: 0xc074636  jal         func_1D18D8
    ctx->pc = 0x1DFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF94u);
    ctx->pc = 0x1DFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF8Cu;
    // 0x1dff90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18D8u, 0x1DFF8Cu, 0x1DFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF94u;
label_1dff94:
    // 0x1dff94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dff94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dff98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dff98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dff9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dff9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dffa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFA0u;
        // 0x1dffa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFFA8u;
}
