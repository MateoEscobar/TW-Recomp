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

// Function: sub_001A5BA8
// Address: 0x1a5ba8 - 0x1a5bd8
void sub_001A5BA8_0x1a5ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5BA8_0x1a5ba8");
#endif

    switch (ctx->pc) {
        case 0x1a5ba8u: goto label_1a5ba8;
        case 0x1a5bacu: goto label_1a5bac;
        case 0x1a5bb0u: goto label_1a5bb0;
        case 0x1a5bb4u: goto label_1a5bb4;
        case 0x1a5bb8u: goto label_1a5bb8;
        case 0x1a5bbcu: goto label_1a5bbc;
        case 0x1a5bc0u: goto label_1a5bc0;
        case 0x1a5bc4u: goto label_1a5bc4;
        case 0x1a5bc8u: goto label_1a5bc8;
        case 0x1a5bccu: goto label_1a5bcc;
        case 0x1a5bd0u: goto label_1a5bd0;
        case 0x1a5bd4u: goto label_1a5bd4;
        default: break;
    }

    ctx->pc = 0x1a5ba8u;

label_1a5ba8:
    // 0x1a5ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a5bac:
    // 0x1a5bac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1a5bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1a5bb0:
    // 0x1a5bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a5bb4:
    // 0x1a5bb4: 0x24a5d310  addiu       $a1, $a1, -0x2CF0
    ctx->pc = 0x1a5bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
label_1a5bb8:
    // 0x1a5bb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a5bbc:
    // 0x1a5bbc: 0x84430078  lh          $v1, 0x78($v0)
    ctx->pc = 0x1a5bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1a5bc0:
    // 0x1a5bc0: 0x8c46007c  lw          $a2, 0x7C($v0)
    ctx->pc = 0x1a5bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1a5bc4:
    // 0x1a5bc4: 0xc0f809  jalr        $a2
label_1a5bc8:
    if (ctx->pc == 0x1A5BC8u) {
        ctx->pc = 0x1A5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BC4u;
        // 0x1a5bc8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BCCu;
        goto label_1a5bcc;
    }
    ctx->pc = 0x1A5BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A5BCCu);
        ctx->pc = 0x1A5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BC4u;
        // 0x1a5bc8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5BC4u, 0x1A5BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5BCCu;
label_1a5bcc:
    // 0x1a5bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5bd0:
    // 0x1a5bd0: 0x3e00008  jr          $ra
label_1a5bd4:
    if (ctx->pc == 0x1A5BD4u) {
        ctx->pc = 0x1A5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BD0u;
        // 0x1a5bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BD8u;
        goto label_fallthrough_0x1a5bd0;
    }
    ctx->pc = 0x1A5BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BD0u;
        // 0x1a5bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5bd0:
    ctx->pc = 0x1A5BD8u;
}
