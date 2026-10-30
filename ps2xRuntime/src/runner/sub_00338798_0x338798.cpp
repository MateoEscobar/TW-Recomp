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

// Function: sub_00338798
// Address: 0x338798 - 0x3387d0
void sub_00338798_0x338798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338798_0x338798");
#endif

    switch (ctx->pc) {
        case 0x338798u: goto label_338798;
        case 0x33879cu: goto label_33879c;
        case 0x3387a0u: goto label_3387a0;
        case 0x3387a4u: goto label_3387a4;
        case 0x3387a8u: goto label_3387a8;
        case 0x3387acu: goto label_3387ac;
        case 0x3387b0u: goto label_3387b0;
        case 0x3387b4u: goto label_3387b4;
        case 0x3387b8u: goto label_3387b8;
        case 0x3387bcu: goto label_3387bc;
        case 0x3387c0u: goto label_3387c0;
        case 0x3387c4u: goto label_3387c4;
        case 0x3387c8u: goto label_3387c8;
        case 0x3387ccu: goto label_3387cc;
        default: break;
    }

    ctx->pc = 0x338798u;

label_338798:
    // 0x338798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33879c:
    // 0x33879c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3387a0:
    // 0x3387a0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3387a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3387a4:
    // 0x3387a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3387a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3387a8:
    // 0x3387a8: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x3387a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_3387ac:
    // 0x3387ac: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x3387acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_3387b0:
    // 0x3387b0: 0x60f809  jalr        $v1
label_3387b4:
    if (ctx->pc == 0x3387B4u) {
        ctx->pc = 0x3387B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387B0u;
        // 0x3387b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3387B8u;
        goto label_3387b8;
    }
    ctx->pc = 0x3387B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3387B8u);
        ctx->pc = 0x3387B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387B0u;
        // 0x3387b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3387B0u, 0x3387B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3387B8u;
label_3387b8:
    // 0x3387b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3387b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3387bc:
    // 0x3387bc: 0x3e00008  jr          $ra
label_3387c0:
    if (ctx->pc == 0x3387C0u) {
        ctx->pc = 0x3387C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387BCu;
        // 0x3387c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3387C4u;
        goto label_3387c4;
    }
    ctx->pc = 0x3387BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3387C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387BCu;
        // 0x3387c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3387BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3387C4u;
label_3387c4:
    // 0x3387c4: 0x0  nop
    ctx->pc = 0x3387c4u;
    // NOP
label_3387c8:
    // 0x3387c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3387c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3387cc:
    // 0x3387cc: 0x0  nop
    ctx->pc = 0x3387ccu;
    // NOP
    ctx->pc = 0x3387d0u;
}
