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

// Function: sub_001DFEF0
// Address: 0x1dfef0 - 0x1dff40
void sub_001DFEF0_0x1dfef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFEF0_0x1dfef0");
#endif

    switch (ctx->pc) {
        case 0x1dff04u: goto label_1dff04;
        case 0x1dff24u: goto label_1dff24;
        case 0x1dff2cu: goto label_1dff2c;
        default: break;
    }

    ctx->pc = 0x1dfef0u;

    // 0x1dfef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dfef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dfef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfefc: 0xc074612  jal         func_1D1848
    ctx->pc = 0x1DFEFCu;
    SET_GPR_U32(ctx, 31, 0x1DFF04u);
    ctx->pc = 0x1DFF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEFCu;
    // 0x1dff00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1848u, 0x1DFEFCu, 0x1DFF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF04u;
label_1dff04:
    // 0x1dff04: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1dff04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1dff08: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1dff08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1dff0c: 0x2463beb8  addiu       $v1, $v1, -0x4148
    ctx->pc = 0x1dff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950584));
    // 0x1dff10: 0x2442bee0  addiu       $v0, $v0, -0x4120
    ctx->pc = 0x1dff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950624));
    // 0x1dff14: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1dff14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1dff18: 0x260407b0  addiu       $a0, $s0, 0x7B0
    ctx->pc = 0x1dff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1968));
    // 0x1dff1c: 0xc074fbc  jal         func_1D3EF0
    ctx->pc = 0x1DFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF24u);
    ctx->pc = 0x1DFF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF1Cu;
    // 0x1dff20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1DFF1Cu, 0x1DFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF24u;
label_1dff24:
    // 0x1dff24: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1DFF24u;
    SET_GPR_U32(ctx, 31, 0x1DFF2Cu);
    ctx->pc = 0x1DFF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF24u;
    // 0x1dff28: 0x26040880  addiu       $a0, $s0, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1DFF24u, 0x1DFF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF2Cu;
label_1dff2c:
    // 0x1dff2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dff2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dff30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dff34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dff38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF38u;
        // 0x1dff3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFF40u;
}
