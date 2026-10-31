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

// Function: sub_004CD0F0
// Address: 0x4cd0f0 - 0x4cd120
void sub_004CD0F0_0x4cd0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD0F0_0x4cd0f0");
#endif

    ctx->pc = 0x4cd0f0u;

    // 0x4cd0f0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4cd0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4cd0f4: 0x24051bb7  addiu       $a1, $zero, 0x1BB7
    ctx->pc = 0x4cd0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7095));
    // 0x4cd0f8: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x4cd0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x4cd0fc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4cd0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4cd100: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x4cd100u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x4cd104: 0x24061bb8  addiu       $a2, $zero, 0x1BB8
    ctx->pc = 0x4cd104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7096));
    // 0x4cd108: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x4cd108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x4cd10c: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x4cd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x4cd110: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x4cd110u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4cd114: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD114u;
        // 0x4cd118: 0xc5100a  movz        $v0, $a2, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CD11Cu;
    // 0x4cd11c: 0x0  nop
    ctx->pc = 0x4cd11cu;
    // NOP
    ctx->pc = 0x4cd120u;
}
