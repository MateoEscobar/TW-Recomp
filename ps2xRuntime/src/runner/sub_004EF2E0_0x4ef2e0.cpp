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

// Function: sub_004EF2E0
// Address: 0x4ef2e0 - 0x4ef310
void sub_004EF2E0_0x4ef2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF2E0_0x4ef2e0");
#endif

    switch (ctx->pc) {
        case 0x4ef2e0u: goto label_4ef2e0;
        case 0x4ef2e4u: goto label_4ef2e4;
        case 0x4ef2e8u: goto label_4ef2e8;
        case 0x4ef2ecu: goto label_4ef2ec;
        case 0x4ef2f0u: goto label_4ef2f0;
        case 0x4ef2f4u: goto label_4ef2f4;
        case 0x4ef2f8u: goto label_4ef2f8;
        case 0x4ef2fcu: goto label_4ef2fc;
        case 0x4ef300u: goto label_4ef300;
        case 0x4ef304u: goto label_4ef304;
        case 0x4ef308u: goto label_4ef308;
        case 0x4ef30cu: goto label_4ef30c;
        default: break;
    }

    ctx->pc = 0x4ef2e0u;

label_4ef2e0:
    // 0x4ef2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef2e4:
    // 0x4ef2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef2e8:
    // 0x4ef2e8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef2ec:
    // 0x4ef2ec: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef2ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef2f0:
    // 0x4ef2f0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef2f4:
    // 0x4ef2f4: 0x40f809  jalr        $v0
label_4ef2f8:
    if (ctx->pc == 0x4EF2F8u) {
        ctx->pc = 0x4EF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF2F4u;
        // 0x4ef2f8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF2FCu;
        goto label_4ef2fc;
    }
    ctx->pc = 0x4EF2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF2FCu);
        ctx->pc = 0x4EF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF2F4u;
        // 0x4ef2f8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF2F4u, 0x4EF2FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF2FCu;
label_4ef2fc:
    // 0x4ef2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef300:
    // 0x4ef300: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef304:
    // 0x4ef304: 0x3e00008  jr          $ra
label_4ef308:
    if (ctx->pc == 0x4EF308u) {
        ctx->pc = 0x4EF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF304u;
        // 0x4ef308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF30Cu;
        goto label_4ef30c;
    }
    ctx->pc = 0x4EF304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF304u;
        // 0x4ef308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF30Cu;
label_4ef30c:
    // 0x4ef30c: 0x0  nop
    ctx->pc = 0x4ef30cu;
    // NOP
    ctx->pc = 0x4ef310u;
}
