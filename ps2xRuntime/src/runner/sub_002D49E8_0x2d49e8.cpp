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

// Function: sub_002D49E8
// Address: 0x2d49e8 - 0x2d4a10
void sub_002D49E8_0x2d49e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D49E8_0x2d49e8");
#endif

    switch (ctx->pc) {
        case 0x2d49e8u: goto label_2d49e8;
        case 0x2d49ecu: goto label_2d49ec;
        case 0x2d49f0u: goto label_2d49f0;
        case 0x2d49f4u: goto label_2d49f4;
        case 0x2d49f8u: goto label_2d49f8;
        case 0x2d49fcu: goto label_2d49fc;
        case 0x2d4a00u: goto label_2d4a00;
        case 0x2d4a04u: goto label_2d4a04;
        case 0x2d4a08u: goto label_2d4a08;
        case 0x2d4a0cu: goto label_2d4a0c;
        default: break;
    }

    ctx->pc = 0x2d49e8u;

label_2d49e8:
    // 0x2d49e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d49e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d49ec:
    // 0x2d49ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d49ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d49f0:
    // 0x2d49f0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2d49f4:
    // 0x2d49f4: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x2d49f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2d49f8:
    // 0x2d49f8: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2d49f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2d49fc:
    // 0x2d49fc: 0xa0f809  jalr        $a1
label_2d4a00:
    if (ctx->pc == 0x2D4A00u) {
        ctx->pc = 0x2D4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49FCu;
        // 0x2d4a00: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4A04u;
        goto label_2d4a04;
    }
    ctx->pc = 0x2D49FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2D4A04u);
        ctx->pc = 0x2D4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49FCu;
        // 0x2d4a00: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D49FCu, 0x2D4A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4A04u;
label_2d4a04:
    // 0x2d4a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4a08:
    // 0x2d4a08: 0x3e00008  jr          $ra
label_2d4a0c:
    if (ctx->pc == 0x2D4A0Cu) {
        ctx->pc = 0x2D4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A08u;
        // 0x2d4a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4A10u;
        goto label_fallthrough_0x2d4a08;
    }
    ctx->pc = 0x2D4A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A08u;
        // 0x2d4a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d4a08:
    ctx->pc = 0x2D4A10u;
}
