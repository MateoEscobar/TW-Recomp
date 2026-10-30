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

// Function: sub_0032A190
// Address: 0x32a190 - 0x32a1c0
void sub_0032A190_0x32a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A190_0x32a190");
#endif

    switch (ctx->pc) {
        case 0x32a1b4u: goto label_32a1b4;
        default: break;
    }

    ctx->pc = 0x32a190u;

    // 0x32a190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a198: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x32a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x32a19c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x32a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x32a1a0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x32a1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32a1a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A1A4u;
    {
        const bool branch_taken_0x32a1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1A4u;
        // 0x32a1a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a1a4) {
            ctx->pc = 0x32A1B8u;
            goto label_32a1b8;
        }
    }
    ctx->pc = 0x32A1ACu;
    // 0x32a1ac: 0xc0ca846  jal         func_32A118
    ctx->pc = 0x32A1ACu;
    SET_GPR_U32(ctx, 31, 0x32A1B4u);
    ctx->pc = 0x32A118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A118u, 0x32A1ACu, 0x32A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1B4u;
label_32a1b4:
    // 0x32a1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32a1b8:
    // 0x32a1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x32A1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1B8u;
        // 0x32a1bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A1C0u;
}
