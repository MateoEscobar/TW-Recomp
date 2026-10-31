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

// Function: sub_003979F8
// Address: 0x3979f8 - 0x397a20
void sub_003979F8_0x3979f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003979F8_0x3979f8");
#endif

    ctx->pc = 0x3979f8u;

    // 0x3979f8: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x3979f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x3979fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3979fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397a00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x397a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x397a04: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x397a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x397a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x397a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x397a0c: 0xa63004  sllv        $a2, $a2, $a1
    ctx->pc = 0x397a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x397a10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x397a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x397a14: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x397a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x397a18: 0x3e00008  jr          $ra
    ctx->pc = 0x397A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A18u;
        // 0x397a1c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397A20u;
}
