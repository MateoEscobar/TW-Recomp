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

// Function: sub_002EC460
// Address: 0x2ec460 - 0x2ec4a0
void sub_002EC460_0x2ec460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC460_0x2ec460");
#endif

    ctx->pc = 0x2ec460u;

    // 0x2ec460: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ec460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec464: 0x90c20026  lbu         $v0, 0x26($a2)
    ctx->pc = 0x2ec464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x2ec468: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2ec468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ec46c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC46Cu;
    {
        const bool branch_taken_0x2ec46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC46Cu;
        // 0x2ec470: 0x2405f7ff  addiu       $a1, $zero, -0x801 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec46c) {
            ctx->pc = 0x2EC48Cu;
            goto label_2ec48c;
        }
    }
    ctx->pc = 0x2EC474u;
    // 0x2ec474: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ec474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ec478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ec478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec47c: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2ec47cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2ec480: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ec480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ec484: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2ec484u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x2ec488: 0xa0c00026  sb          $zero, 0x26($a2)
    ctx->pc = 0x2ec488u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 38), (uint8_t)GPR_U32(ctx, 0));
label_2ec48c:
    // 0x2ec48c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC494u;
    // 0x2ec494: 0x0  nop
    ctx->pc = 0x2ec494u;
    // NOP
    // 0x2ec498: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ec498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ec49c: 0x0  nop
    ctx->pc = 0x2ec49cu;
    // NOP
    ctx->pc = 0x2ec4a0u;
}
