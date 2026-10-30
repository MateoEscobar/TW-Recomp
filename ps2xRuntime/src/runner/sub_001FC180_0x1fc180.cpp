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

// Function: sub_001FC180
// Address: 0x1fc180 - 0x1fc1a8
void sub_001FC180_0x1fc180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC180_0x1fc180");
#endif

    switch (ctx->pc) {
        case 0x1fc180u: goto label_1fc180;
        case 0x1fc184u: goto label_1fc184;
        case 0x1fc188u: goto label_1fc188;
        case 0x1fc18cu: goto label_1fc18c;
        case 0x1fc190u: goto label_1fc190;
        case 0x1fc194u: goto label_1fc194;
        case 0x1fc198u: goto label_1fc198;
        case 0x1fc19cu: goto label_1fc19c;
        case 0x1fc1a0u: goto label_1fc1a0;
        case 0x1fc1a4u: goto label_1fc1a4;
        default: break;
    }

    ctx->pc = 0x1fc180u;

label_1fc180:
    // 0x1fc180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fc184:
    // 0x1fc184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc188:
    // 0x1fc188: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc18c:
    // 0x1fc18c: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1fc18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fc190:
    // 0x1fc190: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1fc190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fc194:
    // 0x1fc194: 0xa0f809  jalr        $a1
label_1fc198:
    if (ctx->pc == 0x1FC198u) {
        ctx->pc = 0x1FC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC194u;
        // 0x1fc198: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC19Cu;
        goto label_1fc19c;
    }
    ctx->pc = 0x1FC194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1FC19Cu);
        ctx->pc = 0x1FC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC194u;
        // 0x1fc198: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC194u, 0x1FC19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC19Cu;
label_1fc19c:
    // 0x1fc19c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc1a0:
    // 0x1fc1a0: 0x3e00008  jr          $ra
label_1fc1a4:
    if (ctx->pc == 0x1FC1A4u) {
        ctx->pc = 0x1FC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1A0u;
        // 0x1fc1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC1A8u;
        goto label_fallthrough_0x1fc1a0;
    }
    ctx->pc = 0x1FC1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1A0u;
        // 0x1fc1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fc1a0:
    ctx->pc = 0x1FC1A8u;
}
