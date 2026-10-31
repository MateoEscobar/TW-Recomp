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

// Function: sub_00417C58
// Address: 0x417c58 - 0x417ca0
void sub_00417C58_0x417c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417C58_0x417c58");
#endif

    ctx->pc = 0x417c58u;

    // 0x417c58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x417c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x417c5c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x417c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x417c60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x417C60u;
    {
        const bool branch_taken_0x417c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x417C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417C60u;
        // 0x417c64: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417c60) {
            ctx->pc = 0x417C70u;
            goto label_417c70;
        }
    }
    ctx->pc = 0x417C68u;
    // 0x417c68: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x417c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x417c6c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x417c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_417c70:
    // 0x417c70: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x417c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x417c74: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x417C74u;
    {
        const bool branch_taken_0x417c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x417c74) {
            ctx->pc = 0x417C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417C74u;
            // 0x417c78: 0x8c821c18  lw          $v0, 0x1C18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417C88u;
            goto label_417c88;
        }
    }
    ctx->pc = 0x417C7Cu;
    // 0x417c7c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x417c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x417c80: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x417c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x417c84: 0x8c821c18  lw          $v0, 0x1C18($a0)
    ctx->pc = 0x417c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7192)));
label_417c88:
    // 0x417c88: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x417c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x417c8c: 0x8c831c18  lw          $v1, 0x1C18($a0)
    ctx->pc = 0x417c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7192)));
    // 0x417c90: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x417c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x417c94: 0x3e00008  jr          $ra
    ctx->pc = 0x417C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417C94u;
        // 0x417c98: 0xac851c18  sw          $a1, 0x1C18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417C9Cu;
    // 0x417c9c: 0x0  nop
    ctx->pc = 0x417c9cu;
    // NOP
    ctx->pc = 0x417ca0u;
}
