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

// Function: sub_004AF790
// Address: 0x4af790 - 0x4af7b8
void sub_004AF790_0x4af790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF790_0x4af790");
#endif

    switch (ctx->pc) {
        case 0x4af790u: goto label_4af790;
        case 0x4af794u: goto label_4af794;
        case 0x4af798u: goto label_4af798;
        case 0x4af79cu: goto label_4af79c;
        case 0x4af7a0u: goto label_4af7a0;
        case 0x4af7a4u: goto label_4af7a4;
        case 0x4af7a8u: goto label_4af7a8;
        case 0x4af7acu: goto label_4af7ac;
        case 0x4af7b0u: goto label_4af7b0;
        case 0x4af7b4u: goto label_4af7b4;
        default: break;
    }

    ctx->pc = 0x4af790u;

label_4af790:
    // 0x4af790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4af790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4af794:
    // 0x4af794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4af798:
    // 0x4af798: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x4af798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4af79c:
    // 0x4af79c: 0x84660010  lh          $a2, 0x10($v1)
    ctx->pc = 0x4af79cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_4af7a0:
    // 0x4af7a0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4af7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4af7a4:
    // 0x4af7a4: 0x40f809  jalr        $v0
label_4af7a8:
    if (ctx->pc == 0x4AF7A8u) {
        ctx->pc = 0x4AF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF7A4u;
        // 0x4af7a8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF7ACu;
        goto label_4af7ac;
    }
    ctx->pc = 0x4AF7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AF7ACu);
        ctx->pc = 0x4AF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF7A4u;
        // 0x4af7a8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF7A4u, 0x4AF7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AF7ACu;
label_4af7ac:
    // 0x4af7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4af7b0:
    // 0x4af7b0: 0x3e00008  jr          $ra
label_4af7b4:
    if (ctx->pc == 0x4AF7B4u) {
        ctx->pc = 0x4AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF7B0u;
        // 0x4af7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF7B8u;
        goto label_fallthrough_0x4af7b0;
    }
    ctx->pc = 0x4AF7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF7B0u;
        // 0x4af7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4af7b0:
    ctx->pc = 0x4AF7B8u;
}
