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

// Function: sub_00198940
// Address: 0x198940 - 0x198960
void sub_00198940_0x198940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198940_0x198940");
#endif

    switch (ctx->pc) {
        case 0x198950u: goto label_198950;
        default: break;
    }

    ctx->pc = 0x198940u;

    // 0x198940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198948: 0xc1209ee  jal         func_4827B8
    ctx->pc = 0x198948u;
    SET_GPR_U32(ctx, 31, 0x198950u);
    ctx->pc = 0x19894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198948u;
    // 0x19894c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4827B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4827B8u, 0x198948u, 0x198950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198950u;
label_198950:
    // 0x198950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198954: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x198954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x198958: 0x3e00008  jr          $ra
    ctx->pc = 0x198958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198958u;
        // 0x19895c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198960u;
}
