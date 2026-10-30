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

// Function: sub_00442FC0
// Address: 0x442fc0 - 0x443008
void sub_00442FC0_0x442fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442FC0_0x442fc0");
#endif

    switch (ctx->pc) {
        case 0x442fd4u: goto label_442fd4;
        default: break;
    }

    ctx->pc = 0x442fc0u;

    // 0x442fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x442fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x442fc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x442fc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x442fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x442fcc: 0xc110b66  jal         func_442D98
    ctx->pc = 0x442FCCu;
    SET_GPR_U32(ctx, 31, 0x442FD4u);
    ctx->pc = 0x442FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442FCCu;
    // 0x442fd0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442D98u, 0x442FCCu, 0x442FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442FD4u;
label_442fd4:
    // 0x442fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x442fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x442fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x442FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442FD8u;
        // 0x442fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x442FE0u;
    // 0x442fe0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x442fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x442fe4: 0x0  nop
    ctx->pc = 0x442fe4u;
    // NOP
    // 0x442fe8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x442fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x442fec: 0x0  nop
    ctx->pc = 0x442fecu;
    // NOP
    // 0x442ff0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x442ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x442ff4: 0x0  nop
    ctx->pc = 0x442ff4u;
    // NOP
    // 0x442ff8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x442ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x442ffc: 0x0  nop
    ctx->pc = 0x442ffcu;
    // NOP
    // 0x443000: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x443000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x443004: 0x0  nop
    ctx->pc = 0x443004u;
    // NOP
    ctx->pc = 0x443008u;
}
