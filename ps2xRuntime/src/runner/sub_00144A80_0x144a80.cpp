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

// Function: sub_00144A80
// Address: 0x144a80 - 0x144ad0
void sub_00144A80_0x144a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144A80_0x144a80");
#endif

    ctx->pc = 0x144a80u;

    // 0x144a80: 0x2ca60008  sltiu       $a2, $a1, 0x8
    ctx->pc = 0x144a80u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x144a84: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x144a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144a88: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x144a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x144a8c: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x144a8cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x144a90: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x144a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x144a94: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x144a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x144a98: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x144a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144a9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x144a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x144aa0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144aa4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x144aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x144aa8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144aac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x144aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144ab0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x144ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x144ab4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x144ab4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144ab8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x144ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144abc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x144abcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144ac0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x144ac0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x144ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x144AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AC4u;
        // 0x144ac8: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144ACCu;
    // 0x144acc: 0x0  nop
    ctx->pc = 0x144accu;
    // NOP
    ctx->pc = 0x144ad0u;
}
