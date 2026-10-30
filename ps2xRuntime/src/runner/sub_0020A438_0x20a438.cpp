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

// Function: sub_0020A438
// Address: 0x20a438 - 0x20a460
void sub_0020A438_0x20a438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A438_0x20a438");
#endif

    switch (ctx->pc) {
        case 0x20a438u: goto label_20a438;
        case 0x20a43cu: goto label_20a43c;
        case 0x20a440u: goto label_20a440;
        case 0x20a444u: goto label_20a444;
        case 0x20a448u: goto label_20a448;
        case 0x20a44cu: goto label_20a44c;
        case 0x20a450u: goto label_20a450;
        case 0x20a454u: goto label_20a454;
        case 0x20a458u: goto label_20a458;
        case 0x20a45cu: goto label_20a45c;
        default: break;
    }

    ctx->pc = 0x20a438u;

label_20a438:
    // 0x20a438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20a43c:
    // 0x20a43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a440:
    // 0x20a440: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20a444:
    // 0x20a444: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x20a444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20a448:
    // 0x20a448: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x20a448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20a44c:
    // 0x20a44c: 0xa0f809  jalr        $a1
label_20a450:
    if (ctx->pc == 0x20A450u) {
        ctx->pc = 0x20A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A44Cu;
        // 0x20a450: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A454u;
        goto label_20a454;
    }
    ctx->pc = 0x20A44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20A454u);
        ctx->pc = 0x20A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A44Cu;
        // 0x20a450: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A44Cu, 0x20A454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A454u;
label_20a454:
    // 0x20a454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a458:
    // 0x20a458: 0x3e00008  jr          $ra
label_20a45c:
    if (ctx->pc == 0x20A45Cu) {
        ctx->pc = 0x20A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A458u;
        // 0x20a45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A460u;
        goto label_fallthrough_0x20a458;
    }
    ctx->pc = 0x20A458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A458u;
        // 0x20a45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20a458:
    ctx->pc = 0x20A460u;
}
