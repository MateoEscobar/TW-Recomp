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

// Function: sub_002D7FE0
// Address: 0x2d7fe0 - 0x2d8028
void sub_002D7FE0_0x2d7fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7FE0_0x2d7fe0");
#endif

    switch (ctx->pc) {
        case 0x2d8018u: goto label_2d8018;
        default: break;
    }

    ctx->pc = 0x2d7fe0u;

    // 0x2d7fe0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2d7fe4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d7fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7fec: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2d7fecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2d7ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7ff4: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2d7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2d7ff8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2d7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2d7ffc: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2d7ffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d8000: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8000u;
    {
        const bool branch_taken_0x2d8000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8000u;
        // 0x2d8004: 0x24423e80  addiu       $v0, $v0, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8000) {
            ctx->pc = 0x2D8018u;
            goto label_2d8018;
        }
    }
    ctx->pc = 0x2D8008u;
    // 0x2d8008: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d8008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d800c: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x2d800cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
    // 0x2d8010: 0xc0b600a  jal         func_2D8028
    ctx->pc = 0x2D8010u;
    SET_GPR_U32(ctx, 31, 0x2D8018u);
    ctx->pc = 0x2D8014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8010u;
    // 0x2d8014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8028u, 0x2D8010u, 0x2D8018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8018u;
label_2d8018:
    // 0x2d8018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d801c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D801Cu;
        // 0x2d8020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8024u;
    // 0x2d8024: 0x0  nop
    ctx->pc = 0x2d8024u;
    // NOP
    ctx->pc = 0x2d8028u;
}
