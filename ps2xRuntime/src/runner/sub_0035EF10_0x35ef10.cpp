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

// Function: sub_0035EF10
// Address: 0x35ef10 - 0x35ef48
void sub_0035EF10_0x35ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EF10_0x35ef10");
#endif

    switch (ctx->pc) {
        case 0x35ef24u: goto label_35ef24;
        case 0x35ef2cu: goto label_35ef2c;
        case 0x35ef34u: goto label_35ef34;
        default: break;
    }

    ctx->pc = 0x35ef10u;

    // 0x35ef10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ef14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ef18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ef1c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EF1Cu;
    SET_GPR_U32(ctx, 31, 0x35EF24u);
    ctx->pc = 0x35EF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF1Cu;
    // 0x35ef20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EF1Cu, 0x35EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF24u;
label_35ef24:
    // 0x35ef24: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EF24u;
    SET_GPR_U32(ctx, 31, 0x35EF2Cu);
    ctx->pc = 0x35EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF24u;
    // 0x35ef28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EF24u, 0x35EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF2Cu;
label_35ef2c:
    // 0x35ef2c: 0xc0a49aa  jal         func_2926A8
    ctx->pc = 0x35EF2Cu;
    SET_GPR_U32(ctx, 31, 0x35EF34u);
    ctx->pc = 0x35EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF2Cu;
    // 0x35ef30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2926A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2926A8u, 0x35EF2Cu, 0x35EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF34u;
label_35ef34:
    // 0x35ef34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ef34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ef38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ef38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef3c: 0x3e00008  jr          $ra
    ctx->pc = 0x35EF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF3Cu;
        // 0x35ef40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EF44u;
    // 0x35ef44: 0x0  nop
    ctx->pc = 0x35ef44u;
    // NOP
    ctx->pc = 0x35ef48u;
}
