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

// Function: sub_001B1640
// Address: 0x1b1640 - 0x1b1688
void sub_001B1640_0x1b1640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1640_0x1b1640");
#endif

    switch (ctx->pc) {
        case 0x1b166cu: goto label_1b166c;
        default: break;
    }

    ctx->pc = 0x1b1640u;

    // 0x1b1640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1644: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b1644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1b1648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b164c: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x1b164cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1b1650: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1b1650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1b1654: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b1654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b1658: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b1658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b165c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B165Cu;
    {
        const bool branch_taken_0x1b165c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B165Cu;
        // 0x1b1660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b165c) {
            ctx->pc = 0x1B1674u;
            goto label_1b1674;
        }
    }
    ctx->pc = 0x1B1664u;
    // 0x1b1664: 0xc047ab8  jal         func_11EAE0
    ctx->pc = 0x1B1664u;
    SET_GPR_U32(ctx, 31, 0x1B166Cu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1B1664u, 0x1B166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B166Cu;
label_1b166c:
    // 0x1b166c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b166cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b1670: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x1b1670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b1674:
    // 0x1b1674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1678: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b1678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b167c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B167Cu;
        // 0x1b1680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B167Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1684u;
    // 0x1b1684: 0x0  nop
    ctx->pc = 0x1b1684u;
    // NOP
    ctx->pc = 0x1b1688u;
}
