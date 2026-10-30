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

// Function: sub_001D7DE8
// Address: 0x1d7de8 - 0x1d7e28
void sub_001D7DE8_0x1d7de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7DE8_0x1d7de8");
#endif

    switch (ctx->pc) {
        case 0x1d7dfcu: goto label_1d7dfc;
        case 0x1d7e04u: goto label_1d7e04;
        case 0x1d7e0cu: goto label_1d7e0c;
        case 0x1d7e14u: goto label_1d7e14;
        default: break;
    }

    ctx->pc = 0x1d7de8u;

    // 0x1d7de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7dec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7df4: 0xc075cd4  jal         func_1D7350
    ctx->pc = 0x1D7DF4u;
    SET_GPR_U32(ctx, 31, 0x1D7DFCu);
    ctx->pc = 0x1D7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DF4u;
    // 0x1d7df8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7350u, 0x1D7DF4u, 0x1D7DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DFCu;
label_1d7dfc:
    // 0x1d7dfc: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1D7DFCu;
    SET_GPR_U32(ctx, 31, 0x1D7E04u);
    ctx->pc = 0x1D7E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DFCu;
    // 0x1d7e00: 0x26040650  addiu       $a0, $s0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1D7DFCu, 0x1D7E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E04u;
label_1d7e04:
    // 0x1d7e04: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1D7E04u;
    SET_GPR_U32(ctx, 31, 0x1D7E0Cu);
    ctx->pc = 0x1D7E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E04u;
    // 0x1d7e08: 0x26040750  addiu       $a0, $s0, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1D7E04u, 0x1D7E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E0Cu;
label_1d7e0c:
    // 0x1d7e0c: 0xc06ec70  jal         func_1BB1C0
    ctx->pc = 0x1D7E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E14u);
    ctx->pc = 0x1D7E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E0Cu;
    // 0x1d7e10: 0x26040850  addiu       $a0, $s0, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1D7E0Cu, 0x1D7E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E14u;
label_1d7e14:
    // 0x1d7e14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E1Cu;
        // 0x1d7e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E24u;
    // 0x1d7e24: 0x0  nop
    ctx->pc = 0x1d7e24u;
    // NOP
    ctx->pc = 0x1d7e28u;
}
