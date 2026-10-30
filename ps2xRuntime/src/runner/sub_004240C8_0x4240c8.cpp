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

// Function: sub_004240C8
// Address: 0x4240c8 - 0x4240f8
void sub_004240C8_0x4240c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004240C8_0x4240c8");
#endif

    ctx->pc = 0x4240c8u;

    // 0x4240c8: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x4240c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x4240cc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x4240ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x4240d0: 0x2442e948  addiu       $v0, $v0, -0x16B8
    ctx->pc = 0x4240d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961480));
    // 0x4240d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4240d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4240d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4240d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4240dc: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x4240dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x4240e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4240e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4240e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4240e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4240e8: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x4240e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x4240ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4240ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4240f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4240F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4240F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4240F0u;
        // 0x4240f4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4240F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4240F8u;
}
