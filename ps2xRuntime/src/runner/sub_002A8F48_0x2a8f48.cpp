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

// Function: sub_002A8F48
// Address: 0x2a8f48 - 0x2a8f78
void sub_002A8F48_0x2a8f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8F48_0x2a8f48");
#endif

    switch (ctx->pc) {
        case 0x2a8f48u: goto label_2a8f48;
        case 0x2a8f4cu: goto label_2a8f4c;
        case 0x2a8f50u: goto label_2a8f50;
        case 0x2a8f54u: goto label_2a8f54;
        case 0x2a8f58u: goto label_2a8f58;
        case 0x2a8f5cu: goto label_2a8f5c;
        case 0x2a8f60u: goto label_2a8f60;
        case 0x2a8f64u: goto label_2a8f64;
        case 0x2a8f68u: goto label_2a8f68;
        case 0x2a8f6cu: goto label_2a8f6c;
        case 0x2a8f70u: goto label_2a8f70;
        case 0x2a8f74u: goto label_2a8f74;
        default: break;
    }

    ctx->pc = 0x2a8f48u;

label_2a8f48:
    // 0x2a8f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a8f4c:
    // 0x2a8f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a8f50:
    // 0x2a8f50: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x2a8f50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
label_2a8f54:
    // 0x2a8f54: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2a8f58:
    // 0x2a8f58: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x2a8f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2a8f5c:
    // 0x2a8f5c: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2a8f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2a8f60:
    // 0x2a8f60: 0xa0f809  jalr        $a1
label_2a8f64:
    if (ctx->pc == 0x2A8F64u) {
        ctx->pc = 0x2A8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F60u;
        // 0x2a8f64: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8F68u;
        goto label_2a8f68;
    }
    ctx->pc = 0x2A8F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A8F68u);
        ctx->pc = 0x2A8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F60u;
        // 0x2a8f64: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8F60u, 0x2A8F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8F68u;
label_2a8f68:
    // 0x2a8f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8f6c:
    // 0x2a8f6c: 0x3e00008  jr          $ra
label_2a8f70:
    if (ctx->pc == 0x2A8F70u) {
        ctx->pc = 0x2A8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F6Cu;
        // 0x2a8f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8F74u;
        goto label_2a8f74;
    }
    ctx->pc = 0x2A8F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F6Cu;
        // 0x2a8f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8F74u;
label_2a8f74:
    // 0x2a8f74: 0x0  nop
    ctx->pc = 0x2a8f74u;
    // NOP
    ctx->pc = 0x2a8f78u;
}
