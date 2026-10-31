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

// Function: sub_0023A9B8
// Address: 0x23a9b8 - 0x23a9f8
void sub_0023A9B8_0x23a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A9B8_0x23a9b8");
#endif

    switch (ctx->pc) {
        case 0x23a9d0u: goto label_23a9d0;
        default: break;
    }

    ctx->pc = 0x23a9b8u;

    // 0x23a9b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x23a9bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23a9c0: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x23a9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x23a9c4: 0x24636710  addiu       $v1, $v1, 0x6710
    ctx->pc = 0x23a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26384));
    // 0x23a9c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a9cc: 0x0  nop
    ctx->pc = 0x23a9ccu;
    // NOP
label_23a9d0:
    // 0x23a9d0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x23a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x23a9d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23a9d8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x23a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x23a9dc: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x23a9dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x23a9e0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x23a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x23a9e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A9E4u;
    {
        const bool branch_taken_0x23a9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9E4u;
        // 0x23a9e8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9e4) {
            ctx->pc = 0x23A9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a9d0;
        }
    }
    ctx->pc = 0x23A9ECu;
    // 0x23a9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x23A9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A9F4u;
    // 0x23a9f4: 0x0  nop
    ctx->pc = 0x23a9f4u;
    // NOP
    ctx->pc = 0x23a9f8u;
}
