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

// Function: sub_00227D78
// Address: 0x227d78 - 0x227d98
void sub_00227D78_0x227d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227D78_0x227d78");
#endif

    ctx->pc = 0x227d78u;

    // 0x227d78: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x227d78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x227d7c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x227d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x227d80: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x227d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x227d84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x227d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x227d88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x227d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x227d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x227D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D8Cu;
        // 0x227d90: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227D94u;
    // 0x227d94: 0x0  nop
    ctx->pc = 0x227d94u;
    // NOP
    ctx->pc = 0x227d98u;
}
