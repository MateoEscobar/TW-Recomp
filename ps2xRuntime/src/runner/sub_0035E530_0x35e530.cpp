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

// Function: sub_0035E530
// Address: 0x35e530 - 0x35e560
void sub_0035E530_0x35e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E530_0x35e530");
#endif

    switch (ctx->pc) {
        case 0x35e544u: goto label_35e544;
        case 0x35e54cu: goto label_35e54c;
        default: break;
    }

    ctx->pc = 0x35e530u;

    // 0x35e530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e53c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35E53Cu;
    SET_GPR_U32(ctx, 31, 0x35E544u);
    ctx->pc = 0x35E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E53Cu;
    // 0x35e540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35E53Cu, 0x35E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E544u;
label_35e544:
    // 0x35e544: 0xc10764c  jal         func_41D930
    ctx->pc = 0x35E544u;
    SET_GPR_U32(ctx, 31, 0x35E54Cu);
    ctx->pc = 0x35E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E544u;
    // 0x35e548: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D930u, 0x35E544u, 0x35E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E54Cu;
label_35e54c:
    // 0x35e54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e554: 0x3e00008  jr          $ra
    ctx->pc = 0x35E554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E554u;
        // 0x35e558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E55Cu;
    // 0x35e55c: 0x0  nop
    ctx->pc = 0x35e55cu;
    // NOP
    ctx->pc = 0x35e560u;
}
