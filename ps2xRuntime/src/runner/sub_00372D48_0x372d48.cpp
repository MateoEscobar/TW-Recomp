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

// Function: sub_00372D48
// Address: 0x372d48 - 0x372d80
void sub_00372D48_0x372d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372D48_0x372d48");
#endif

    switch (ctx->pc) {
        case 0x372d5cu: goto label_372d5c;
        case 0x372d64u: goto label_372d64;
        case 0x372d6cu: goto label_372d6c;
        default: break;
    }

    ctx->pc = 0x372d48u;

    // 0x372d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372d4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372d54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372D54u;
    SET_GPR_U32(ctx, 31, 0x372D5Cu);
    ctx->pc = 0x372D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D54u;
    // 0x372d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372D54u, 0x372D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D5Cu;
label_372d5c:
    // 0x372d5c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372D5Cu;
    SET_GPR_U32(ctx, 31, 0x372D64u);
    ctx->pc = 0x372D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D5Cu;
    // 0x372d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372D5Cu, 0x372D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D64u;
label_372d64:
    // 0x372d64: 0xc044f74  jal         func_113DD0
    ctx->pc = 0x372D64u;
    SET_GPR_U32(ctx, 31, 0x372D6Cu);
    ctx->pc = 0x372D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D64u;
    // 0x372d68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DD0u, 0x372D64u, 0x372D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D6Cu;
label_372d6c:
    // 0x372d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d74: 0x3e00008  jr          $ra
    ctx->pc = 0x372D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D74u;
        // 0x372d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372D7Cu;
    // 0x372d7c: 0x0  nop
    ctx->pc = 0x372d7cu;
    // NOP
    ctx->pc = 0x372d80u;
}
