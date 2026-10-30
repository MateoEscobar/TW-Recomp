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

// Function: sub_00429E20
// Address: 0x429e20 - 0x429e58
void sub_00429E20_0x429e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429E20_0x429e20");
#endif

    ctx->pc = 0x429e20u;

    // 0x429e20: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x429e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x429e24: 0x8c82545c  lw          $v0, 0x545C($a0)
    ctx->pc = 0x429e24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51545Cu));
    // 0x429e28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x429E28u;
    {
        const bool branch_taken_0x429e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x429E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429E28u;
        // 0x429e2c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429e28) {
            ctx->pc = 0x429E50u;
            goto label_429e50;
        }
    }
    ctx->pc = 0x429E30u;
    // 0x429e30: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x429e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x429e34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x429e34u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x429e38: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x429e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x429e3c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x429E3Cu;
    {
        const bool branch_taken_0x429e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x429e3c) {
            ctx->pc = 0x429E50u;
            goto label_429e50;
        }
    }
    ctx->pc = 0x429E44u;
    // 0x429e44: 0x8c82545c  lw          $v0, 0x545C($a0)
    ctx->pc = 0x429e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21596)));
    // 0x429e48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x429e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x429e4c: 0xac82545c  sw          $v0, 0x545C($a0)
    ctx->pc = 0x429e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 21596), GPR_U32(ctx, 2));
label_429e50:
    // 0x429e50: 0x3e00008  jr          $ra
    ctx->pc = 0x429E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429E58u;
}
