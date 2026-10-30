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

// Function: sub_002AD508
// Address: 0x2ad508 - 0x2ad530
void sub_002AD508_0x2ad508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD508_0x2ad508");
#endif

    switch (ctx->pc) {
        case 0x2ad508u: goto label_2ad508;
        case 0x2ad50cu: goto label_2ad50c;
        case 0x2ad510u: goto label_2ad510;
        case 0x2ad514u: goto label_2ad514;
        case 0x2ad518u: goto label_2ad518;
        case 0x2ad51cu: goto label_2ad51c;
        case 0x2ad520u: goto label_2ad520;
        case 0x2ad524u: goto label_2ad524;
        case 0x2ad528u: goto label_2ad528;
        case 0x2ad52cu: goto label_2ad52c;
        default: break;
    }

    ctx->pc = 0x2ad508u;

label_2ad508:
    // 0x2ad508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ad50c:
    // 0x2ad50c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad510:
    // 0x2ad510: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ad510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ad514:
    // 0x2ad514: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x2ad514u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2ad518:
    // 0x2ad518: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2ad518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2ad51c:
    // 0x2ad51c: 0xa0f809  jalr        $a1
label_2ad520:
    if (ctx->pc == 0x2AD520u) {
        ctx->pc = 0x2AD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD51Cu;
        // 0x2ad520: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD524u;
        goto label_2ad524;
    }
    ctx->pc = 0x2AD51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2AD524u);
        ctx->pc = 0x2AD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD51Cu;
        // 0x2ad520: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD51Cu, 0x2AD524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD524u;
label_2ad524:
    // 0x2ad524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad528:
    // 0x2ad528: 0x3e00008  jr          $ra
label_2ad52c:
    if (ctx->pc == 0x2AD52Cu) {
        ctx->pc = 0x2AD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD528u;
        // 0x2ad52c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD530u;
        goto label_fallthrough_0x2ad528;
    }
    ctx->pc = 0x2AD528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD528u;
        // 0x2ad52c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ad528:
    ctx->pc = 0x2AD530u;
}
