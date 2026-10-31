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

// Function: sub_00424098
// Address: 0x424098 - 0x4240c8
void sub_00424098_0x424098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424098_0x424098");
#endif

    ctx->pc = 0x424098u;

    // 0x424098: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x424098u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x42409c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x42409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x4240a0: 0x2442e8f8  addiu       $v0, $v0, -0x1708
    ctx->pc = 0x4240a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961400));
    // 0x4240a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4240a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4240a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4240a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4240ac: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x4240acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x4240b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4240b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4240b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4240b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4240b8: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x4240b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x4240bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4240bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4240c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4240C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4240C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4240C0u;
        // 0x4240c4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4240C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4240C8u;
}
