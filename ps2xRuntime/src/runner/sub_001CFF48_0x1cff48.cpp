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

// Function: sub_001CFF48
// Address: 0x1cff48 - 0x1cff98
void sub_001CFF48_0x1cff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFF48_0x1cff48");
#endif

    switch (ctx->pc) {
        case 0x1cff5cu: goto label_1cff5c;
        case 0x1cff7cu: goto label_1cff7c;
        case 0x1cff84u: goto label_1cff84;
        default: break;
    }

    ctx->pc = 0x1cff48u;

    // 0x1cff48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cff50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cff54: 0xc076cf0  jal         func_1DB3C0
    ctx->pc = 0x1CFF54u;
    SET_GPR_U32(ctx, 31, 0x1CFF5Cu);
    ctx->pc = 0x1CFF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF54u;
    // 0x1cff58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB3C0u, 0x1CFF54u, 0x1CFF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF5Cu;
label_1cff5c:
    // 0x1cff5c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cff60: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1cff60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1cff64: 0x2463b270  addiu       $v1, $v1, -0x4D90
    ctx->pc = 0x1cff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947440));
    // 0x1cff68: 0x2442b298  addiu       $v0, $v0, -0x4D68
    ctx->pc = 0x1cff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x1cff6c: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1cff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1cff70: 0x26045930  addiu       $a0, $s0, 0x5930
    ctx->pc = 0x1cff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22832));
    // 0x1cff74: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1CFF74u;
    SET_GPR_U32(ctx, 31, 0x1CFF7Cu);
    ctx->pc = 0x1CFF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF74u;
    // 0x1cff78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1CFF74u, 0x1CFF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF7Cu;
label_1cff7c:
    // 0x1cff7c: 0xc074fbc  jal         func_1D3EF0
    ctx->pc = 0x1CFF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF84u);
    ctx->pc = 0x1CFF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF7Cu;
    // 0x1cff80: 0x26045a00  addiu       $a0, $s0, 0x5A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1CFF7Cu, 0x1CFF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF84u;
label_1cff84:
    // 0x1cff84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cff84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cff88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cff8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff90: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF90u;
        // 0x1cff94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF98u;
}
