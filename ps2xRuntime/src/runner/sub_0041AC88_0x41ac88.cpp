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

// Function: sub_0041AC88
// Address: 0x41ac88 - 0x41acd8
void sub_0041AC88_0x41ac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AC88_0x41ac88");
#endif

    ctx->pc = 0x41ac88u;

    // 0x41ac88: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x41ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41ac8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x41ac8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41ac90: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x41ac90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x41ac94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ac98: 0xc5302a  slt         $a2, $a2, $a1
    ctx->pc = 0x41ac98u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41ac9c: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x41ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x41aca0: 0xa6180b  movn        $v1, $a1, $a2
    ctx->pc = 0x41aca0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x41aca4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x41aca4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x41aca8: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x41aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x41acac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41acacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x41acb0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x41acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x41acb4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x41acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x41acb8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x41acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41acbc: 0x8c83572c  lw          $v1, 0x572C($a0)
    ctx->pc = 0x41acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22316)));
    // 0x41acc0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x41acc0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x41acc4: 0xa22804  sllv        $a1, $v0, $a1
    ctx->pc = 0x41acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x41acc8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x41acc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x41accc: 0x3e00008  jr          $ra
    ctx->pc = 0x41ACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACCCu;
        // 0x41acd0: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ACCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41ACD4u;
    // 0x41acd4: 0x0  nop
    ctx->pc = 0x41acd4u;
    // NOP
    ctx->pc = 0x41acd8u;
}
