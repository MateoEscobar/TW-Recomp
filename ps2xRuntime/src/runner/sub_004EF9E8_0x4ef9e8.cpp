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

// Function: sub_004EF9E8
// Address: 0x4ef9e8 - 0x4efa18
void sub_004EF9E8_0x4ef9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF9E8_0x4ef9e8");
#endif

    switch (ctx->pc) {
        case 0x4ef9e8u: goto label_4ef9e8;
        case 0x4ef9ecu: goto label_4ef9ec;
        case 0x4ef9f0u: goto label_4ef9f0;
        case 0x4ef9f4u: goto label_4ef9f4;
        case 0x4ef9f8u: goto label_4ef9f8;
        case 0x4ef9fcu: goto label_4ef9fc;
        case 0x4efa00u: goto label_4efa00;
        case 0x4efa04u: goto label_4efa04;
        case 0x4efa08u: goto label_4efa08;
        case 0x4efa0cu: goto label_4efa0c;
        case 0x4efa10u: goto label_4efa10;
        case 0x4efa14u: goto label_4efa14;
        default: break;
    }

    ctx->pc = 0x4ef9e8u;

label_4ef9e8:
    // 0x4ef9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef9ec:
    // 0x4ef9ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef9f0:
    // 0x4ef9f0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef9f4:
    // 0x4ef9f4: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef9f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef9f8:
    // 0x4ef9f8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef9fc:
    // 0x4ef9fc: 0x40f809  jalr        $v0
label_4efa00:
    if (ctx->pc == 0x4EFA00u) {
        ctx->pc = 0x4EFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF9FCu;
        // 0x4efa00: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFA04u;
        goto label_4efa04;
    }
    ctx->pc = 0x4EF9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFA04u);
        ctx->pc = 0x4EFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF9FCu;
        // 0x4efa00: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF9FCu, 0x4EFA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFA04u;
label_4efa04:
    // 0x4efa04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efa08:
    // 0x4efa08: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4efa08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4efa0c:
    // 0x4efa0c: 0x3e00008  jr          $ra
label_4efa10:
    if (ctx->pc == 0x4EFA10u) {
        ctx->pc = 0x4EFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFA0Cu;
        // 0x4efa10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFA14u;
        goto label_4efa14;
    }
    ctx->pc = 0x4EFA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFA0Cu;
        // 0x4efa10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFA14u;
label_4efa14:
    // 0x4efa14: 0x0  nop
    ctx->pc = 0x4efa14u;
    // NOP
    ctx->pc = 0x4efa18u;
}
