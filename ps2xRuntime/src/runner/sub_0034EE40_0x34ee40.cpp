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

// Function: sub_0034EE40
// Address: 0x34ee40 - 0x34ee60
void sub_0034EE40_0x34ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EE40_0x34ee40");
#endif

    switch (ctx->pc) {
        case 0x34ee54u: goto label_34ee54;
        default: break;
    }

    ctx->pc = 0x34ee40u;

    // 0x34ee40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34ee44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34ee48: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x34ee48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee4c: 0xc0d3b98  jal         func_34EE60
    ctx->pc = 0x34EE4Cu;
    SET_GPR_U32(ctx, 31, 0x34EE54u);
    ctx->pc = 0x34EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EE4Cu;
    // 0x34ee50: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EE60u, 0x34EE4Cu, 0x34EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE54u;
label_34ee54:
    // 0x34ee54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34ee54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ee58: 0x3e00008  jr          $ra
    ctx->pc = 0x34EE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE58u;
        // 0x34ee5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EE60u;
}
