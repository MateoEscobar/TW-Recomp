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

// Function: sub_002AC270
// Address: 0x2ac270 - 0x2ac2a8
void sub_002AC270_0x2ac270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC270_0x2ac270");
#endif

    switch (ctx->pc) {
        case 0x2ac298u: goto label_2ac298;
        default: break;
    }

    ctx->pc = 0x2ac270u;

    // 0x2ac270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac27c: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x2ac27cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2ac280: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ac280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ac284: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2ac284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2ac288: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ac288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ac28c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ac290: 0xc087612  jal         func_21D848
    ctx->pc = 0x2AC290u;
    SET_GPR_U32(ctx, 31, 0x2AC298u);
    ctx->pc = 0x2AC294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC290u;
    // 0x2ac294: 0xa0820284  sb          $v0, 0x284($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 644), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2AC290u, 0x2AC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC298u;
label_2ac298:
    // 0x2ac298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac29c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC29Cu;
        // 0x2ac2a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC2A4u;
    // 0x2ac2a4: 0x0  nop
    ctx->pc = 0x2ac2a4u;
    // NOP
    ctx->pc = 0x2ac2a8u;
}
