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

// Function: sub_004DF430
// Address: 0x4df430 - 0x4df470
void sub_004DF430_0x4df430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF430_0x4df430");
#endif

    switch (ctx->pc) {
        case 0x4df448u: goto label_4df448;
        default: break;
    }

    ctx->pc = 0x4df430u;

    // 0x4df430: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4df430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4df434: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4df434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4df438: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4DF438u;
    {
        const bool branch_taken_0x4df438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df438) {
            ctx->pc = 0x4DF43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF438u;
            // 0x4df43c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF468u;
            goto label_4df468;
        }
    }
    ctx->pc = 0x4DF440u;
    // 0x4df440: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4df440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4df444: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4df444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4df448:
    // 0x4df448: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4df448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4df44c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DF44Cu;
    {
        const bool branch_taken_0x4df44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df44c) {
            ctx->pc = 0x4DF450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF44Cu;
            // 0x4df450: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF45Cu;
            goto label_4df45c;
        }
    }
    ctx->pc = 0x4DF454u;
    // 0x4df454: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4df454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df458: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4df458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4df45c:
    // 0x4df45c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DF45Cu;
    {
        const bool branch_taken_0x4df45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df45c) {
            ctx->pc = 0x4DF460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF45Cu;
            // 0x4df460: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4df448;
        }
    }
    ctx->pc = 0x4DF464u;
    // 0x4df464: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4df464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4df468:
    // 0x4df468: 0x3e00008  jr          $ra
    ctx->pc = 0x4DF468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF468u;
        // 0x4df46c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF470u;
}
