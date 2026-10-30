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

// Function: sub_004E2888
// Address: 0x4e2888 - 0x4e28c8
void sub_004E2888_0x4e2888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2888_0x4e2888");
#endif

    switch (ctx->pc) {
        case 0x4e28a0u: goto label_4e28a0;
        default: break;
    }

    ctx->pc = 0x4e2888u;

    // 0x4e2888: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e2888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e288c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e2890: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E2890u;
    {
        const bool branch_taken_0x4e2890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2890) {
            ctx->pc = 0x4E2894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2890u;
            // 0x4e2894: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E28C0u;
            goto label_4e28c0;
        }
    }
    ctx->pc = 0x4E2898u;
    // 0x4e2898: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e2898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e289c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e28a0:
    // 0x4e28a0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4e28a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4e28a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E28A4u;
    {
        const bool branch_taken_0x4e28a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e28a4) {
            ctx->pc = 0x4E28A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E28A4u;
            // 0x4e28a8: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E28B4u;
            goto label_4e28b4;
        }
    }
    ctx->pc = 0x4E28ACu;
    // 0x4e28ac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4e28acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e28b0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e28b4:
    // 0x4e28b4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E28B4u;
    {
        const bool branch_taken_0x4e28b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e28b4) {
            ctx->pc = 0x4E28B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E28B4u;
            // 0x4e28b8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E28A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e28a0;
        }
    }
    ctx->pc = 0x4E28BCu;
    // 0x4e28bc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e28c0:
    // 0x4e28c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E28C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E28C0u;
        // 0x4e28c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E28C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E28C8u;
}
