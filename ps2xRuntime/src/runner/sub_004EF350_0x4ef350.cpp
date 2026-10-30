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

// Function: sub_004EF350
// Address: 0x4ef350 - 0x4ef380
void sub_004EF350_0x4ef350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF350_0x4ef350");
#endif

    switch (ctx->pc) {
        case 0x4ef350u: goto label_4ef350;
        case 0x4ef354u: goto label_4ef354;
        case 0x4ef358u: goto label_4ef358;
        case 0x4ef35cu: goto label_4ef35c;
        case 0x4ef360u: goto label_4ef360;
        case 0x4ef364u: goto label_4ef364;
        case 0x4ef368u: goto label_4ef368;
        case 0x4ef36cu: goto label_4ef36c;
        case 0x4ef370u: goto label_4ef370;
        case 0x4ef374u: goto label_4ef374;
        case 0x4ef378u: goto label_4ef378;
        case 0x4ef37cu: goto label_4ef37c;
        default: break;
    }

    ctx->pc = 0x4ef350u;

label_4ef350:
    // 0x4ef350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef354:
    // 0x4ef354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef358:
    // 0x4ef358: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef35c:
    // 0x4ef35c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef35cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef360:
    // 0x4ef360: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef364:
    // 0x4ef364: 0x40f809  jalr        $v0
label_4ef368:
    if (ctx->pc == 0x4EF368u) {
        ctx->pc = 0x4EF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF364u;
        // 0x4ef368: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF36Cu;
        goto label_4ef36c;
    }
    ctx->pc = 0x4EF364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF36Cu);
        ctx->pc = 0x4EF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF364u;
        // 0x4ef368: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF364u, 0x4EF36Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF36Cu;
label_4ef36c:
    // 0x4ef36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef370:
    // 0x4ef370: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef374:
    // 0x4ef374: 0x3e00008  jr          $ra
label_4ef378:
    if (ctx->pc == 0x4EF378u) {
        ctx->pc = 0x4EF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF374u;
        // 0x4ef378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF37Cu;
        goto label_4ef37c;
    }
    ctx->pc = 0x4EF374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF374u;
        // 0x4ef378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF37Cu;
label_4ef37c:
    // 0x4ef37c: 0x0  nop
    ctx->pc = 0x4ef37cu;
    // NOP
    ctx->pc = 0x4ef380u;
}
