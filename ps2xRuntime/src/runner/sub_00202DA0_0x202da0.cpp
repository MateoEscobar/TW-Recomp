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

// Function: sub_00202DA0
// Address: 0x202da0 - 0x202dd0
void sub_00202DA0_0x202da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202DA0_0x202da0");
#endif

    ctx->pc = 0x202da0u;

    // 0x202da0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x202da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x202da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202da8: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x202da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x202dac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x202dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x202db0: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x202db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x202db4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x202db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202db8: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x202db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x202dbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x202dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202dc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x202dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x202DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DC4u;
        // 0x202dc8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202DCCu;
    // 0x202dcc: 0x0  nop
    ctx->pc = 0x202dccu;
    // NOP
    ctx->pc = 0x202dd0u;
}
