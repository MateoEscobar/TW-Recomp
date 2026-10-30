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

// Function: sub_00205798
// Address: 0x205798 - 0x2057c0
void sub_00205798_0x205798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205798_0x205798");
#endif

    switch (ctx->pc) {
        case 0x205798u: goto label_205798;
        case 0x20579cu: goto label_20579c;
        case 0x2057a0u: goto label_2057a0;
        case 0x2057a4u: goto label_2057a4;
        case 0x2057a8u: goto label_2057a8;
        case 0x2057acu: goto label_2057ac;
        case 0x2057b0u: goto label_2057b0;
        case 0x2057b4u: goto label_2057b4;
        case 0x2057b8u: goto label_2057b8;
        case 0x2057bcu: goto label_2057bc;
        default: break;
    }

    ctx->pc = 0x205798u;

label_205798:
    // 0x205798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20579c:
    // 0x20579c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2057a0:
    // 0x2057a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2057a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2057a4:
    // 0x2057a4: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x2057a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2057a8:
    // 0x2057a8: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x2057a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2057ac:
    // 0x2057ac: 0xa0f809  jalr        $a1
label_2057b0:
    if (ctx->pc == 0x2057B0u) {
        ctx->pc = 0x2057B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057ACu;
        // 0x2057b0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057B4u;
        goto label_2057b4;
    }
    ctx->pc = 0x2057ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2057B4u);
        ctx->pc = 0x2057B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057ACu;
        // 0x2057b0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2057ACu, 0x2057B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2057B4u;
label_2057b4:
    // 0x2057b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2057b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2057b8:
    // 0x2057b8: 0x3e00008  jr          $ra
label_2057bc:
    if (ctx->pc == 0x2057BCu) {
        ctx->pc = 0x2057BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B8u;
        // 0x2057bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057C0u;
        goto label_fallthrough_0x2057b8;
    }
    ctx->pc = 0x2057B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2057BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B8u;
        // 0x2057bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2057B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2057b8:
    ctx->pc = 0x2057C0u;
}
