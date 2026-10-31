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

// Function: sub_00366DD0
// Address: 0x366dd0 - 0x366e18
void sub_00366DD0_0x366dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366DD0_0x366dd0");
#endif

    switch (ctx->pc) {
        case 0x366decu: goto label_366dec;
        case 0x366df4u: goto label_366df4;
        case 0x366e00u: goto label_366e00;
        default: break;
    }

    ctx->pc = 0x366dd0u;

    // 0x366dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366dd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x366dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x366ddc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366de4: 0xc102488  jal         func_409220
    ctx->pc = 0x366DE4u;
    SET_GPR_U32(ctx, 31, 0x366DECu);
    ctx->pc = 0x366DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366DE4u;
    // 0x366de8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x366DE4u, 0x366DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DECu;
label_366dec:
    // 0x366dec: 0xc0472dc  jal         func_11CB70
    ctx->pc = 0x366DECu;
    SET_GPR_U32(ctx, 31, 0x366DF4u);
    ctx->pc = 0x366DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366DECu;
    // 0x366df0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CB70u, 0x366DECu, 0x366DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DF4u;
label_366df4:
    // 0x366df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x366df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366df8: 0xc102562  jal         func_409588
    ctx->pc = 0x366DF8u;
    SET_GPR_U32(ctx, 31, 0x366E00u);
    ctx->pc = 0x366DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366DF8u;
    // 0x366dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x366DF8u, 0x366E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E00u;
label_366e00:
    // 0x366e00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x366e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x366e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x366e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x366E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E0Cu;
        // 0x366e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366E14u;
    // 0x366e14: 0x0  nop
    ctx->pc = 0x366e14u;
    // NOP
    ctx->pc = 0x366e18u;
}
