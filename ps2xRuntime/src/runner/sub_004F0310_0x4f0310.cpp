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

// Function: sub_004F0310
// Address: 0x4f0310 - 0x4f0340
void sub_004F0310_0x4f0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0310_0x4f0310");
#endif

    switch (ctx->pc) {
        case 0x4f0310u: goto label_4f0310;
        case 0x4f0314u: goto label_4f0314;
        case 0x4f0318u: goto label_4f0318;
        case 0x4f031cu: goto label_4f031c;
        case 0x4f0320u: goto label_4f0320;
        case 0x4f0324u: goto label_4f0324;
        case 0x4f0328u: goto label_4f0328;
        case 0x4f032cu: goto label_4f032c;
        case 0x4f0330u: goto label_4f0330;
        case 0x4f0334u: goto label_4f0334;
        case 0x4f0338u: goto label_4f0338;
        case 0x4f033cu: goto label_4f033c;
        default: break;
    }

    ctx->pc = 0x4f0310u;

label_4f0310:
    // 0x4f0310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f0314:
    // 0x4f0314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f0318:
    // 0x4f0318: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4f0318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4f031c:
    // 0x4f031c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4f031cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4f0320:
    // 0x4f0320: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4f0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f0324:
    // 0x4f0324: 0x40f809  jalr        $v0
label_4f0328:
    if (ctx->pc == 0x4F0328u) {
        ctx->pc = 0x4F0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0324u;
        // 0x4f0328: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F032Cu;
        goto label_4f032c;
    }
    ctx->pc = 0x4F0324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F032Cu);
        ctx->pc = 0x4F0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0324u;
        // 0x4f0328: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0324u, 0x4F032Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F032Cu;
label_4f032c:
    // 0x4f032c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f032cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0330:
    // 0x4f0330: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4f0330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4f0334:
    // 0x4f0334: 0x3e00008  jr          $ra
label_4f0338:
    if (ctx->pc == 0x4F0338u) {
        ctx->pc = 0x4F0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0334u;
        // 0x4f0338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F033Cu;
        goto label_4f033c;
    }
    ctx->pc = 0x4F0334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0334u;
        // 0x4f0338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F033Cu;
label_4f033c:
    // 0x4f033c: 0x0  nop
    ctx->pc = 0x4f033cu;
    // NOP
    ctx->pc = 0x4f0340u;
}
