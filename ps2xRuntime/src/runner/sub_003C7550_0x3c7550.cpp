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

// Function: sub_003C7550
// Address: 0x3c7550 - 0x3c7578
void sub_003C7550_0x3c7550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7550_0x3c7550");
#endif

    switch (ctx->pc) {
        case 0x3c7550u: goto label_3c7550;
        case 0x3c7554u: goto label_3c7554;
        case 0x3c7558u: goto label_3c7558;
        case 0x3c755cu: goto label_3c755c;
        case 0x3c7560u: goto label_3c7560;
        case 0x3c7564u: goto label_3c7564;
        case 0x3c7568u: goto label_3c7568;
        case 0x3c756cu: goto label_3c756c;
        case 0x3c7570u: goto label_3c7570;
        case 0x3c7574u: goto label_3c7574;
        default: break;
    }

    ctx->pc = 0x3c7550u;

label_3c7550:
    // 0x3c7550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c7550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c7554:
    // 0x3c7554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c7558:
    // 0x3c7558: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c7558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c755c:
    // 0x3c755c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3c755cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c7560:
    // 0x3c7560: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c7560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c7564:
    // 0x3c7564: 0x40f809  jalr        $v0
label_3c7568:
    if (ctx->pc == 0x3C7568u) {
        ctx->pc = 0x3C7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7564u;
        // 0x3c7568: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C756Cu;
        goto label_3c756c;
    }
    ctx->pc = 0x3C7564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C756Cu);
        ctx->pc = 0x3C7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7564u;
        // 0x3c7568: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7564u, 0x3C756Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C756Cu;
label_3c756c:
    // 0x3c756c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c756cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c7570:
    // 0x3c7570: 0x3e00008  jr          $ra
label_3c7574:
    if (ctx->pc == 0x3C7574u) {
        ctx->pc = 0x3C7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7570u;
        // 0x3c7574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7578u;
        goto label_fallthrough_0x3c7570;
    }
    ctx->pc = 0x3C7570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7570u;
        // 0x3c7574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c7570:
    ctx->pc = 0x3C7578u;
}
