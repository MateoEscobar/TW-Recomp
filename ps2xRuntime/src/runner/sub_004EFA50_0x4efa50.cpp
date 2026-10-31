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

// Function: sub_004EFA50
// Address: 0x4efa50 - 0x4efa80
void sub_004EFA50_0x4efa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFA50_0x4efa50");
#endif

    switch (ctx->pc) {
        case 0x4efa50u: goto label_4efa50;
        case 0x4efa54u: goto label_4efa54;
        case 0x4efa58u: goto label_4efa58;
        case 0x4efa5cu: goto label_4efa5c;
        case 0x4efa60u: goto label_4efa60;
        case 0x4efa64u: goto label_4efa64;
        case 0x4efa68u: goto label_4efa68;
        case 0x4efa6cu: goto label_4efa6c;
        case 0x4efa70u: goto label_4efa70;
        case 0x4efa74u: goto label_4efa74;
        case 0x4efa78u: goto label_4efa78;
        case 0x4efa7cu: goto label_4efa7c;
        default: break;
    }

    ctx->pc = 0x4efa50u;

label_4efa50:
    // 0x4efa50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4efa54:
    // 0x4efa54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4efa58:
    // 0x4efa58: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4efa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4efa5c:
    // 0x4efa5c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4efa5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4efa60:
    // 0x4efa60: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4efa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4efa64:
    // 0x4efa64: 0x40f809  jalr        $v0
label_4efa68:
    if (ctx->pc == 0x4EFA68u) {
        ctx->pc = 0x4EFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFA64u;
        // 0x4efa68: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFA6Cu;
        goto label_4efa6c;
    }
    ctx->pc = 0x4EFA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFA6Cu);
        ctx->pc = 0x4EFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFA64u;
        // 0x4efa68: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFA64u, 0x4EFA6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFA6Cu;
label_4efa6c:
    // 0x4efa6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efa70:
    // 0x4efa70: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4efa70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4efa74:
    // 0x4efa74: 0x3e00008  jr          $ra
label_4efa78:
    if (ctx->pc == 0x4EFA78u) {
        ctx->pc = 0x4EFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFA74u;
        // 0x4efa78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFA7Cu;
        goto label_4efa7c;
    }
    ctx->pc = 0x4EFA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFA74u;
        // 0x4efa78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFA7Cu;
label_4efa7c:
    // 0x4efa7c: 0x0  nop
    ctx->pc = 0x4efa7cu;
    // NOP
    ctx->pc = 0x4efa80u;
}
