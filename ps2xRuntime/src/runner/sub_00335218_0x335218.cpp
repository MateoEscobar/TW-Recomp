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

// Function: sub_00335218
// Address: 0x335218 - 0x335250
void sub_00335218_0x335218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335218_0x335218");
#endif

    ctx->pc = 0x335218u;

    // 0x335218: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x335218u;
    {
        const bool branch_taken_0x335218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335218u;
        // 0x33521c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335218) {
            ctx->pc = 0x335244u;
            goto label_335244;
        }
    }
    ctx->pc = 0x335220u;
    // 0x335220: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x335220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x335224: 0x244251b0  addiu       $v0, $v0, 0x51B0
    ctx->pc = 0x335224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20912));
    // 0x335228: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x335228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x33522c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33522cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x335230: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x335230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335234: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x335234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x335238: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x335238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x33523c: 0x3e00008  jr          $ra
    ctx->pc = 0x33523Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33523Cu;
        // 0x335240: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33523Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335244u;
label_335244:
    // 0x335244: 0x3e00008  jr          $ra
    ctx->pc = 0x335244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335244u;
        // 0x335248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33524Cu;
    // 0x33524c: 0x0  nop
    ctx->pc = 0x33524cu;
    // NOP
    ctx->pc = 0x335250u;
}
