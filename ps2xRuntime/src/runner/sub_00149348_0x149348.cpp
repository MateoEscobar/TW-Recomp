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

// Function: sub_00149348
// Address: 0x149348 - 0x149370
void sub_00149348_0x149348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149348_0x149348");
#endif

    switch (ctx->pc) {
        case 0x149360u: goto label_149360;
        default: break;
    }

    ctx->pc = 0x149348u;

    // 0x149348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14934c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x149354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149358: 0xc110746  jal         func_441D18
    ctx->pc = 0x149358u;
    SET_GPR_U32(ctx, 31, 0x149360u);
    ctx->pc = 0x14935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149358u;
    // 0x14935c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441D18u, 0x149358u, 0x149360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149360u;
label_149360:
    // 0x149360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149364: 0x3e00008  jr          $ra
    ctx->pc = 0x149364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149364u;
        // 0x149368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14936Cu;
    // 0x14936c: 0x0  nop
    ctx->pc = 0x14936cu;
    // NOP
    ctx->pc = 0x149370u;
}
