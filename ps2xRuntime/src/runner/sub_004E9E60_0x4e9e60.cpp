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

// Function: sub_004E9E60
// Address: 0x4e9e60 - 0x4e9ea0
void sub_004E9E60_0x4e9e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9E60_0x4e9e60");
#endif

    switch (ctx->pc) {
        case 0x4e9e78u: goto label_4e9e78;
        default: break;
    }

    ctx->pc = 0x4e9e60u;

    // 0x4e9e60: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e9e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e9e64: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4e9e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e9e68: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4E9E68u;
    {
        const bool branch_taken_0x4e9e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9e68) {
            ctx->pc = 0x4E9E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9E68u;
            // 0x4e9e6c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9E98u;
            goto label_4e9e98;
        }
    }
    ctx->pc = 0x4E9E70u;
    // 0x4e9e70: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x4e9e70u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9e74: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x4e9e74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_4e9e78:
    // 0x4e9e78: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4e9e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4e9e7c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E9E7Cu;
    {
        const bool branch_taken_0x4e9e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9e7c) {
            ctx->pc = 0x4E9E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9E7Cu;
            // 0x4e9e80: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9E8Cu;
            goto label_4e9e8c;
        }
    }
    ctx->pc = 0x4E9E84u;
    // 0x4e9e84: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4e9e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9e88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4e9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e9e8c:
    // 0x4e9e8c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E9E8Cu;
    {
        const bool branch_taken_0x4e9e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9e8c) {
            ctx->pc = 0x4E9E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9E8Cu;
            // 0x4e9e90: 0x94620010  lhu         $v0, 0x10($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e9e78;
        }
    }
    ctx->pc = 0x4E9E94u;
    // 0x4e9e94: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e9e98:
    // 0x4e9e98: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E98u;
        // 0x4e9e9c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9EA0u;
}
