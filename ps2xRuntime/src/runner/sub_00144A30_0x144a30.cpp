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

// Function: sub_00144A30
// Address: 0x144a30 - 0x144a80
void sub_00144A30_0x144a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144A30_0x144a30");
#endif

    ctx->pc = 0x144a30u;

    // 0x144a30: 0x2ca60008  sltiu       $a2, $a1, 0x8
    ctx->pc = 0x144a30u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x144a34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x144a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144a38: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x144a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x144a3c: 0xa6180b  movn        $v1, $a1, $a2
    ctx->pc = 0x144a3cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x144a40: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x144a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x144a44: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x144a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x144a48: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x144a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144a4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x144a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x144a50: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x144a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x144a54: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x144a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x144a58: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144a5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x144a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144a60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144a64: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x144a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144a68: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x144a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144a6c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x144a6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144a70: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x144a70u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x144a74: 0x3e00008  jr          $ra
    ctx->pc = 0x144A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A74u;
        // 0x144a78: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144A7Cu;
    // 0x144a7c: 0x0  nop
    ctx->pc = 0x144a7cu;
    // NOP
    ctx->pc = 0x144a80u;
}
