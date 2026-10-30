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

// Function: sub_002EA9B8
// Address: 0x2ea9b8 - 0x2ea9f0
void sub_002EA9B8_0x2ea9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA9B8_0x2ea9b8");
#endif

    ctx->pc = 0x2ea9b8u;

    // 0x2ea9b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ea9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9bc: 0x90c2002e  lbu         $v0, 0x2E($a2)
    ctx->pc = 0x2ea9bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 46)));
    // 0x2ea9c0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2ea9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ea9c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA9C4u;
    {
        const bool branch_taken_0x2ea9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9C4u;
        // 0x2ea9c8: 0x2405f7ff  addiu       $a1, $zero, -0x801 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9c4) {
            ctx->pc = 0x2EA9E4u;
            goto label_2ea9e4;
        }
    }
    ctx->pc = 0x2EA9CCu;
    // 0x2ea9cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ea9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ea9d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ea9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea9d4: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2ea9d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2ea9d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ea9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ea9dc: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2ea9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x2ea9e0: 0xa0c0002e  sb          $zero, 0x2E($a2)
    ctx->pc = 0x2ea9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 46), (uint8_t)GPR_U32(ctx, 0));
label_2ea9e4:
    // 0x2ea9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA9ECu;
    // 0x2ea9ec: 0x0  nop
    ctx->pc = 0x2ea9ecu;
    // NOP
    ctx->pc = 0x2ea9f0u;
}
