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

// Function: sub_0040C908
// Address: 0x40c908 - 0x40c938
void sub_0040C908_0x40c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C908_0x40c908");
#endif

    switch (ctx->pc) {
        case 0x40c908u: goto label_40c908;
        case 0x40c90cu: goto label_40c90c;
        case 0x40c910u: goto label_40c910;
        case 0x40c914u: goto label_40c914;
        case 0x40c918u: goto label_40c918;
        case 0x40c91cu: goto label_40c91c;
        case 0x40c920u: goto label_40c920;
        case 0x40c924u: goto label_40c924;
        case 0x40c928u: goto label_40c928;
        case 0x40c92cu: goto label_40c92c;
        case 0x40c930u: goto label_40c930;
        case 0x40c934u: goto label_40c934;
        default: break;
    }

    ctx->pc = 0x40c908u;

label_40c908:
    // 0x40c908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40c908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40c90c:
    // 0x40c90c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40c910:
    // 0x40c910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40c914:
    // 0x40c914: 0x8c65cdb4  lw          $a1, -0x324C($v1)
    ctx->pc = 0x40c914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_40c918:
    // 0x40c918: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x40c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_40c91c:
    // 0x40c91c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x40c91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_40c920:
    // 0x40c920: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x40c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_40c924:
    // 0x40c924: 0x60f809  jalr        $v1
label_40c928:
    if (ctx->pc == 0x40C928u) {
        ctx->pc = 0x40C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C924u;
        // 0x40c928: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C92Cu;
        goto label_40c92c;
    }
    ctx->pc = 0x40C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40C92Cu);
        ctx->pc = 0x40C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C924u;
        // 0x40c928: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C924u, 0x40C92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C92Cu;
label_40c92c:
    // 0x40c92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40c930:
    // 0x40c930: 0x3e00008  jr          $ra
label_40c934:
    if (ctx->pc == 0x40C934u) {
        ctx->pc = 0x40C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C930u;
        // 0x40c934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C938u;
        goto label_fallthrough_0x40c930;
    }
    ctx->pc = 0x40C930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C930u;
        // 0x40c934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40c930:
    ctx->pc = 0x40C938u;
}
