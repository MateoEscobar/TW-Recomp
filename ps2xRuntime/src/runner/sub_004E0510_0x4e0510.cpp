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

// Function: sub_004E0510
// Address: 0x4e0510 - 0x4e0550
void sub_004E0510_0x4e0510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0510_0x4e0510");
#endif

    switch (ctx->pc) {
        case 0x4e0528u: goto label_4e0528;
        default: break;
    }

    ctx->pc = 0x4e0510u;

    // 0x4e0510: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e0510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0514: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e0514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0518: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E0518u;
    {
        const bool branch_taken_0x4e0518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0518) {
            ctx->pc = 0x4E051Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0518u;
            // 0x4e051c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0548u;
            goto label_4e0548;
        }
    }
    ctx->pc = 0x4E0520u;
    // 0x4e0520: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e0520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e0524: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e0524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e0528:
    // 0x4e0528: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4e0528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4e052c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E052Cu;
    {
        const bool branch_taken_0x4e052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e052c) {
            ctx->pc = 0x4E0530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E052Cu;
            // 0x4e0530: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E053Cu;
            goto label_4e053c;
        }
    }
    ctx->pc = 0x4E0534u;
    // 0x4e0534: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4e0534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0538: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e0538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e053c:
    // 0x4e053c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E053Cu;
    {
        const bool branch_taken_0x4e053c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e053c) {
            ctx->pc = 0x4E0540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E053Cu;
            // 0x4e0540: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0528;
        }
    }
    ctx->pc = 0x4E0544u;
    // 0x4e0544: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e0544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e0548:
    // 0x4e0548: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0548u;
        // 0x4e054c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E0550u;
}
