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

// Function: sub_002D1080
// Address: 0x2d1080 - 0x2d10c0
void sub_002D1080_0x2d1080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1080_0x2d1080");
#endif

    switch (ctx->pc) {
        case 0x2d1080u: goto label_2d1080;
        case 0x2d1084u: goto label_2d1084;
        case 0x2d1088u: goto label_2d1088;
        case 0x2d108cu: goto label_2d108c;
        case 0x2d1090u: goto label_2d1090;
        case 0x2d1094u: goto label_2d1094;
        case 0x2d1098u: goto label_2d1098;
        case 0x2d109cu: goto label_2d109c;
        case 0x2d10a0u: goto label_2d10a0;
        case 0x2d10a4u: goto label_2d10a4;
        case 0x2d10a8u: goto label_2d10a8;
        case 0x2d10acu: goto label_2d10ac;
        case 0x2d10b0u: goto label_2d10b0;
        case 0x2d10b4u: goto label_2d10b4;
        case 0x2d10b8u: goto label_2d10b8;
        case 0x2d10bcu: goto label_2d10bc;
        default: break;
    }

    ctx->pc = 0x2d1080u;

label_2d1080:
    // 0x2d1080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d1084:
    // 0x2d1084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d1088:
    // 0x2d1088: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d1088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d108c:
    // 0x2d108c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x2d108cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2d1090:
    // 0x2d1090: 0x8ca3021c  lw          $v1, 0x21C($a1)
    ctx->pc = 0x2d1090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_2d1094:
    // 0x2d1094: 0xa0830030  sb          $v1, 0x30($a0)
    ctx->pc = 0x2d1094u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 3));
label_2d1098:
    // 0x2d1098: 0x90a2028d  lbu         $v0, 0x28D($a1)
    ctx->pc = 0x2d1098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 653)));
label_2d109c:
    // 0x2d109c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d109cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d10a0:
    // 0x2d10a0: 0xa0820031  sb          $v0, 0x31($a0)
    ctx->pc = 0x2d10a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 2));
label_2d10a4:
    // 0x2d10a4: 0x84c30030  lh          $v1, 0x30($a2)
    ctx->pc = 0x2d10a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
label_2d10a8:
    // 0x2d10a8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2d10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_2d10ac:
    // 0x2d10ac: 0x40f809  jalr        $v0
label_2d10b0:
    if (ctx->pc == 0x2D10B0u) {
        ctx->pc = 0x2D10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10ACu;
        // 0x2d10b0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D10B4u;
        goto label_2d10b4;
    }
    ctx->pc = 0x2D10ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D10B4u);
        ctx->pc = 0x2D10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10ACu;
        // 0x2d10b0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D10ACu, 0x2D10B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D10B4u;
label_2d10b4:
    // 0x2d10b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d10b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d10b8:
    // 0x2d10b8: 0x3e00008  jr          $ra
label_2d10bc:
    if (ctx->pc == 0x2D10BCu) {
        ctx->pc = 0x2D10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10B8u;
        // 0x2d10bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D10C0u;
        goto label_fallthrough_0x2d10b8;
    }
    ctx->pc = 0x2D10B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10B8u;
        // 0x2d10bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D10B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d10b8:
    ctx->pc = 0x2D10C0u;
}
