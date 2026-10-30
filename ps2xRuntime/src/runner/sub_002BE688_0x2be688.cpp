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

// Function: sub_002BE688
// Address: 0x2be688 - 0x2be6b0
void sub_002BE688_0x2be688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE688_0x2be688");
#endif

    switch (ctx->pc) {
        case 0x2be688u: goto label_2be688;
        case 0x2be68cu: goto label_2be68c;
        case 0x2be690u: goto label_2be690;
        case 0x2be694u: goto label_2be694;
        case 0x2be698u: goto label_2be698;
        case 0x2be69cu: goto label_2be69c;
        case 0x2be6a0u: goto label_2be6a0;
        case 0x2be6a4u: goto label_2be6a4;
        case 0x2be6a8u: goto label_2be6a8;
        case 0x2be6acu: goto label_2be6ac;
        default: break;
    }

    ctx->pc = 0x2be688u;

label_2be688:
    // 0x2be688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2be68c:
    // 0x2be68c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2be690:
    // 0x2be690: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2be690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2be694:
    // 0x2be694: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x2be694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2be698:
    // 0x2be698: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2be698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2be69c:
    // 0x2be69c: 0xa0f809  jalr        $a1
label_2be6a0:
    if (ctx->pc == 0x2BE6A0u) {
        ctx->pc = 0x2BE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE69Cu;
        // 0x2be6a0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE6A4u;
        goto label_2be6a4;
    }
    ctx->pc = 0x2BE69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2BE6A4u);
        ctx->pc = 0x2BE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE69Cu;
        // 0x2be6a0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE69Cu, 0x2BE6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE6A4u;
label_2be6a4:
    // 0x2be6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2be6a8:
    // 0x2be6a8: 0x3e00008  jr          $ra
label_2be6ac:
    if (ctx->pc == 0x2BE6ACu) {
        ctx->pc = 0x2BE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6A8u;
        // 0x2be6ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE6B0u;
        goto label_fallthrough_0x2be6a8;
    }
    ctx->pc = 0x2BE6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6A8u;
        // 0x2be6ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2be6a8:
    ctx->pc = 0x2BE6B0u;
}
