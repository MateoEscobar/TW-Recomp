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

// Function: sub_004E3DC8
// Address: 0x4e3dc8 - 0x4e3e10
void sub_004E3DC8_0x4e3dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3DC8_0x4e3dc8");
#endif

    switch (ctx->pc) {
        case 0x4e3decu: goto label_4e3dec;
        case 0x4e3df8u: goto label_4e3df8;
        default: break;
    }

    ctx->pc = 0x4e3dc8u;

    // 0x4e3dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e3dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e3dcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e3dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e3dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e3dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3dd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e3dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e3de0: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x4e3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x4e3de4: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4E3DE4u;
    SET_GPR_U32(ctx, 31, 0x4E3DECu);
    ctx->pc = 0x4E3DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3DE4u;
    // 0x4e3de8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E3DE4u, 0x4E3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3DECu;
label_4e3dec:
    // 0x4e3dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3df0: 0xc079bbc  jal         func_1E6EF0
    ctx->pc = 0x4E3DF0u;
    SET_GPR_U32(ctx, 31, 0x4E3DF8u);
    ctx->pc = 0x4E3DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3DF0u;
    // 0x4e3df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6EF0u, 0x4E3DF0u, 0x4E3DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3DF8u;
label_4e3df8:
    // 0x4e3df8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e3df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e3dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e3dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e3e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3e04: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3E04u;
        // 0x4e3e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3E0Cu;
    // 0x4e3e0c: 0x0  nop
    ctx->pc = 0x4e3e0cu;
    // NOP
    ctx->pc = 0x4e3e10u;
}
