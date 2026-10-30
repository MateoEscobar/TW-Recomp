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

// Function: sub_0023CD00
// Address: 0x23cd00 - 0x23cd30
void sub_0023CD00_0x23cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CD00_0x23cd00");
#endif

    ctx->pc = 0x23cd00u;

    // 0x23cd00: 0x84a60092  lh          $a2, 0x92($a1)
    ctx->pc = 0x23cd00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x23cd04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23cd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd08: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x23cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x23cd0c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x23cd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x23cd10: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x23cd10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x23cd14: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x23cd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x23cd18: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x23cd18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23cd1c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x23cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x23cd20: 0x78c50010  lq          $a1, 0x10($a2)
    ctx->pc = 0x23cd20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x23cd24: 0x3e00008  jr          $ra
    ctx->pc = 0x23CD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD24u;
        // 0x23cd28: 0x7c850010  sq          $a1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CD2Cu;
    // 0x23cd2c: 0x0  nop
    ctx->pc = 0x23cd2cu;
    // NOP
    ctx->pc = 0x23cd30u;
}
