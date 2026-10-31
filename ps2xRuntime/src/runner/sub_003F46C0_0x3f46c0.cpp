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

// Function: sub_003F46C0
// Address: 0x3f46c0 - 0x3f46e8
void sub_003F46C0_0x3f46c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F46C0_0x3f46c0");
#endif

    switch (ctx->pc) {
        case 0x3f46c0u: goto label_3f46c0;
        case 0x3f46c4u: goto label_3f46c4;
        case 0x3f46c8u: goto label_3f46c8;
        case 0x3f46ccu: goto label_3f46cc;
        case 0x3f46d0u: goto label_3f46d0;
        case 0x3f46d4u: goto label_3f46d4;
        case 0x3f46d8u: goto label_3f46d8;
        case 0x3f46dcu: goto label_3f46dc;
        case 0x3f46e0u: goto label_3f46e0;
        case 0x3f46e4u: goto label_3f46e4;
        default: break;
    }

    ctx->pc = 0x3f46c0u;

label_3f46c0:
    // 0x3f46c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f46c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f46c4:
    // 0x3f46c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f46c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f46c8:
    // 0x3f46c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f46c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f46cc:
    // 0x3f46cc: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f46ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f46d0:
    // 0x3f46d0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f46d4:
    // 0x3f46d4: 0x40f809  jalr        $v0
label_3f46d8:
    if (ctx->pc == 0x3F46D8u) {
        ctx->pc = 0x3F46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F46D4u;
        // 0x3f46d8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F46DCu;
        goto label_3f46dc;
    }
    ctx->pc = 0x3F46D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F46DCu);
        ctx->pc = 0x3F46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F46D4u;
        // 0x3f46d8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F46D4u, 0x3F46DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F46DCu;
label_3f46dc:
    // 0x3f46dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f46dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f46e0:
    // 0x3f46e0: 0x3e00008  jr          $ra
label_3f46e4:
    if (ctx->pc == 0x3F46E4u) {
        ctx->pc = 0x3F46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F46E0u;
        // 0x3f46e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F46E8u;
        goto label_fallthrough_0x3f46e0;
    }
    ctx->pc = 0x3F46E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F46E0u;
        // 0x3f46e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F46E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f46e0:
    ctx->pc = 0x3F46E8u;
}
