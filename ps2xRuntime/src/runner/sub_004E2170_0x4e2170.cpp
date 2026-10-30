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

// Function: sub_004E2170
// Address: 0x4e2170 - 0x4e21b0
void sub_004E2170_0x4e2170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2170_0x4e2170");
#endif

    switch (ctx->pc) {
        case 0x4e2188u: goto label_4e2188;
        default: break;
    }

    ctx->pc = 0x4e2170u;

    // 0x4e2170: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e2170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e2174: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e2174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e2178: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E2178u;
    {
        const bool branch_taken_0x4e2178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2178) {
            ctx->pc = 0x4E217Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2178u;
            // 0x4e217c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E21A8u;
            goto label_4e21a8;
        }
    }
    ctx->pc = 0x4E2180u;
    // 0x4e2180: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e2180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e2184: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e2188:
    // 0x4e2188: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4e2188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4e218c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E218Cu;
    {
        const bool branch_taken_0x4e218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e218c) {
            ctx->pc = 0x4E2190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E218Cu;
            // 0x4e2190: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E219Cu;
            goto label_4e219c;
        }
    }
    ctx->pc = 0x4E2194u;
    // 0x4e2194: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4e2194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2198: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e2198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e219c:
    // 0x4e219c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E219Cu;
    {
        const bool branch_taken_0x4e219c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e219c) {
            ctx->pc = 0x4E21A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E219Cu;
            // 0x4e21a0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2188;
        }
    }
    ctx->pc = 0x4E21A4u;
    // 0x4e21a4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e21a8:
    // 0x4e21a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4E21A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E21A8u;
        // 0x4e21ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E21A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E21B0u;
}
