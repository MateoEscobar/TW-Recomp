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

// Function: sub_002AD580
// Address: 0x2ad580 - 0x2ad5a8
void sub_002AD580_0x2ad580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD580_0x2ad580");
#endif

    ctx->pc = 0x2ad580u;

    // 0x2ad580: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ad580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad584: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ad584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad588: 0x8c620438  lw          $v0, 0x438($v1)
    ctx->pc = 0x2ad588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1080)));
    // 0x2ad58c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD58Cu;
    {
        const bool branch_taken_0x2ad58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD58Cu;
        // 0x2ad590: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad58c) {
            ctx->pc = 0x2AD59Cu;
            goto label_2ad59c;
        }
    }
    ctx->pc = 0x2AD594u;
    // 0x2ad594: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x2ad594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x2ad598: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2ad598u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ad59c:
    // 0x2ad59c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD59Cu;
        // 0x2ad5a0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD5A4u;
    // 0x2ad5a4: 0x0  nop
    ctx->pc = 0x2ad5a4u;
    // NOP
    ctx->pc = 0x2ad5a8u;
}
