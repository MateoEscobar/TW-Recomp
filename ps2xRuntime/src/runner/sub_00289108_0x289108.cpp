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

// Function: sub_00289108
// Address: 0x289108 - 0x289138
void sub_00289108_0x289108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289108_0x289108");
#endif

    switch (ctx->pc) {
        case 0x289120u: goto label_289120;
        default: break;
    }

    ctx->pc = 0x289108u;

    // 0x289108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28910c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289110: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x289110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x289114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289118: 0xc0a22dc  jal         func_288B70
    ctx->pc = 0x289118u;
    SET_GPR_U32(ctx, 31, 0x289120u);
    ctx->pc = 0x28911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289118u;
    // 0x28911c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B70u, 0x289118u, 0x289120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289120u;
label_289120:
    // 0x289120: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x289120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x289124: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x289124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28912c: 0x3e00008  jr          $ra
    ctx->pc = 0x28912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28912Cu;
        // 0x289130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289134u;
    // 0x289134: 0x0  nop
    ctx->pc = 0x289134u;
    // NOP
    ctx->pc = 0x289138u;
}
