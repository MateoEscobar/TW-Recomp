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

// Function: sub_0035E8A8
// Address: 0x35e8a8 - 0x35e8e0
void sub_0035E8A8_0x35e8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E8A8_0x35e8a8");
#endif

    switch (ctx->pc) {
        case 0x35e8bcu: goto label_35e8bc;
        case 0x35e8c4u: goto label_35e8c4;
        case 0x35e8ccu: goto label_35e8cc;
        default: break;
    }

    ctx->pc = 0x35e8a8u;

    // 0x35e8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e8ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e8b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E8B4u;
    SET_GPR_U32(ctx, 31, 0x35E8BCu);
    ctx->pc = 0x35E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8B4u;
    // 0x35e8b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E8B4u, 0x35E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8BCu;
label_35e8bc:
    // 0x35e8bc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35E8BCu;
    SET_GPR_U32(ctx, 31, 0x35E8C4u);
    ctx->pc = 0x35E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8BCu;
    // 0x35e8c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35E8BCu, 0x35E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8C4u;
label_35e8c4:
    // 0x35e8c4: 0xc0a5218  jal         func_294860
    ctx->pc = 0x35E8C4u;
    SET_GPR_U32(ctx, 31, 0x35E8CCu);
    ctx->pc = 0x35E8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8C4u;
    // 0x35e8c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294860u, 0x35E8C4u, 0x35E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8CCu;
label_35e8cc:
    // 0x35e8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e8d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x35E8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E8D4u;
        // 0x35e8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E8DCu;
    // 0x35e8dc: 0x0  nop
    ctx->pc = 0x35e8dcu;
    // NOP
    ctx->pc = 0x35e8e0u;
}
