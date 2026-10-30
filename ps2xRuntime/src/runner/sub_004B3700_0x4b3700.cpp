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

// Function: sub_004B3700
// Address: 0x4b3700 - 0x4b3730
void sub_004B3700_0x4b3700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3700_0x4b3700");
#endif

    switch (ctx->pc) {
        case 0x4b3714u: goto label_4b3714;
        default: break;
    }

    ctx->pc = 0x4b3700u;

    // 0x4b3700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b3700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b3704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b3708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b3708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b370c: 0xc12db8e  jal         func_4B6E38
    ctx->pc = 0x4B370Cu;
    SET_GPR_U32(ctx, 31, 0x4B3714u);
    ctx->pc = 0x4B3710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B370Cu;
    // 0x4b3710: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6E38u, 0x4B370Cu, 0x4B3714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3714u;
label_4b3714:
    // 0x4b3714: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x4b3714u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4b3718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b3718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b371c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b371cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3724: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3724u;
        // 0x4b3728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B372Cu;
    // 0x4b372c: 0x0  nop
    ctx->pc = 0x4b372cu;
    // NOP
    ctx->pc = 0x4b3730u;
}
