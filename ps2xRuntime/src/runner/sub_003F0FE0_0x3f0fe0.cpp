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

// Function: sub_003F0FE0
// Address: 0x3f0fe0 - 0x3f1008
void sub_003F0FE0_0x3f0fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0FE0_0x3f0fe0");
#endif

    switch (ctx->pc) {
        case 0x3f0fe0u: goto label_3f0fe0;
        case 0x3f0fe4u: goto label_3f0fe4;
        case 0x3f0fe8u: goto label_3f0fe8;
        case 0x3f0fecu: goto label_3f0fec;
        case 0x3f0ff0u: goto label_3f0ff0;
        case 0x3f0ff4u: goto label_3f0ff4;
        case 0x3f0ff8u: goto label_3f0ff8;
        case 0x3f0ffcu: goto label_3f0ffc;
        case 0x3f1000u: goto label_3f1000;
        case 0x3f1004u: goto label_3f1004;
        default: break;
    }

    ctx->pc = 0x3f0fe0u;

label_3f0fe0:
    // 0x3f0fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f0fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f0fe4:
    // 0x3f0fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f0fe8:
    // 0x3f0fe8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f0fec:
    // 0x3f0fec: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f0fecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f0ff0:
    // 0x3f0ff0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f0ff4:
    // 0x3f0ff4: 0x40f809  jalr        $v0
label_3f0ff8:
    if (ctx->pc == 0x3F0FF8u) {
        ctx->pc = 0x3F0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0FF4u;
        // 0x3f0ff8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0FFCu;
        goto label_3f0ffc;
    }
    ctx->pc = 0x3F0FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F0FFCu);
        ctx->pc = 0x3F0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0FF4u;
        // 0x3f0ff8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0FF4u, 0x3F0FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0FFCu;
label_3f0ffc:
    // 0x3f0ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f0ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1000:
    // 0x3f1000: 0x3e00008  jr          $ra
label_3f1004:
    if (ctx->pc == 0x3F1004u) {
        ctx->pc = 0x3F1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1000u;
        // 0x3f1004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1008u;
        goto label_fallthrough_0x3f1000;
    }
    ctx->pc = 0x3F1000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1000u;
        // 0x3f1004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f1000:
    ctx->pc = 0x3F1008u;
}
