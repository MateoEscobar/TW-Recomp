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

// Function: sub_0035E4F8
// Address: 0x35e4f8 - 0x35e530
void sub_0035E4F8_0x35e4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E4F8_0x35e4f8");
#endif

    switch (ctx->pc) {
        case 0x35e50cu: goto label_35e50c;
        case 0x35e514u: goto label_35e514;
        case 0x35e51cu: goto label_35e51c;
        default: break;
    }

    ctx->pc = 0x35e4f8u;

    // 0x35e4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e4fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e504: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E504u;
    SET_GPR_U32(ctx, 31, 0x35E50Cu);
    ctx->pc = 0x35E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E504u;
    // 0x35e508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E504u, 0x35E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E50Cu;
label_35e50c:
    // 0x35e50c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E50Cu;
    SET_GPR_U32(ctx, 31, 0x35E514u);
    ctx->pc = 0x35E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E50Cu;
    // 0x35e510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E50Cu, 0x35E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E514u;
label_35e514:
    // 0x35e514: 0xc107648  jal         func_41D920
    ctx->pc = 0x35E514u;
    SET_GPR_U32(ctx, 31, 0x35E51Cu);
    ctx->pc = 0x35E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E514u;
    // 0x35e518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D920u, 0x35E514u, 0x35E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E51Cu;
label_35e51c:
    // 0x35e51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e524: 0x3e00008  jr          $ra
    ctx->pc = 0x35E524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E524u;
        // 0x35e528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E52Cu;
    // 0x35e52c: 0x0  nop
    ctx->pc = 0x35e52cu;
    // NOP
    ctx->pc = 0x35e530u;
}
