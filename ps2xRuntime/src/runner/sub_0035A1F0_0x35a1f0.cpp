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

// Function: sub_0035A1F0
// Address: 0x35a1f0 - 0x35a220
void sub_0035A1F0_0x35a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A1F0_0x35a1f0");
#endif

    switch (ctx->pc) {
        case 0x35a204u: goto label_35a204;
        case 0x35a20cu: goto label_35a20c;
        default: break;
    }

    ctx->pc = 0x35a1f0u;

    // 0x35a1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a1f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a1fc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35A1FCu;
    SET_GPR_U32(ctx, 31, 0x35A204u);
    ctx->pc = 0x35A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A1FCu;
    // 0x35a200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35A1FCu, 0x35A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A204u;
label_35a204:
    // 0x35a204: 0xc08d920  jal         func_236480
    ctx->pc = 0x35A204u;
    SET_GPR_U32(ctx, 31, 0x35A20Cu);
    ctx->pc = 0x35A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A204u;
    // 0x35a208: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236480u, 0x35A204u, 0x35A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A20Cu;
label_35a20c:
    // 0x35a20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a214: 0x3e00008  jr          $ra
    ctx->pc = 0x35A214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A214u;
        // 0x35a218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A21Cu;
    // 0x35a21c: 0x0  nop
    ctx->pc = 0x35a21cu;
    // NOP
    ctx->pc = 0x35a220u;
}
