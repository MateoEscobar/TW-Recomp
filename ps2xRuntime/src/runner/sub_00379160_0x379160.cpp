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

// Function: sub_00379160
// Address: 0x379160 - 0x379198
void sub_00379160_0x379160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379160_0x379160");
#endif

    switch (ctx->pc) {
        case 0x379174u: goto label_379174;
        case 0x37917cu: goto label_37917c;
        case 0x379184u: goto label_379184;
        default: break;
    }

    ctx->pc = 0x379160u;

    // 0x379160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x379160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x379164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37916c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37916Cu;
    SET_GPR_U32(ctx, 31, 0x379174u);
    ctx->pc = 0x379170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37916Cu;
    // 0x379170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37916Cu, 0x379174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379174u;
label_379174:
    // 0x379174: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379174u;
    SET_GPR_U32(ctx, 31, 0x37917Cu);
    ctx->pc = 0x379178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379174u;
    // 0x379178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379174u, 0x37917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37917Cu;
label_37917c:
    // 0x37917c: 0xc0e5d84  jal         func_397610
    ctx->pc = 0x37917Cu;
    SET_GPR_U32(ctx, 31, 0x379184u);
    ctx->pc = 0x379180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37917Cu;
    // 0x379180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397610u, 0x37917Cu, 0x379184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379184u;
label_379184:
    // 0x379184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37918c: 0x3e00008  jr          $ra
    ctx->pc = 0x37918Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37918Cu;
        // 0x379190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37918Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379194u;
    // 0x379194: 0x0  nop
    ctx->pc = 0x379194u;
    // NOP
    ctx->pc = 0x379198u;
}
