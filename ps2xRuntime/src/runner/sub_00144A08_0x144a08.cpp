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

// Function: sub_00144A08
// Address: 0x144a08 - 0x144a30
void sub_00144A08_0x144a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144A08_0x144a08");
#endif

    ctx->pc = 0x144a08u;

    // 0x144a08: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x144a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x144a0c: 0x2ca60008  sltiu       $a2, $a1, 0x8
    ctx->pc = 0x144a0cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x144a10: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x144a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144a14: 0xa6180b  movn        $v1, $a1, $a2
    ctx->pc = 0x144a14u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x144a18: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x144a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144a1c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144a20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144a24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x144a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144a28: 0x3e00008  jr          $ra
    ctx->pc = 0x144A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A28u;
        // 0x144a2c: 0x9482001c  lhu         $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144A30u;
}
