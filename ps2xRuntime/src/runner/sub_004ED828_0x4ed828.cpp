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

// Function: sub_004ED828
// Address: 0x4ed828 - 0x4ed860
void sub_004ED828_0x4ed828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED828_0x4ed828");
#endif

    ctx->pc = 0x4ed828u;

    // 0x4ed828: 0x84a60092  lh          $a2, 0x92($a1)
    ctx->pc = 0x4ed828u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x4ed82c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ed82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed830: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4ed830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x4ed834: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x4ed834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x4ed838: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x4ed838u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x4ed83c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x4ed83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4ed840: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x4ed840u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ed844: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x4ed844u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x4ed848: 0x78c50010  lq          $a1, 0x10($a2)
    ctx->pc = 0x4ed848u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4ed84c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED84Cu;
        // 0x4ed850: 0x7c850010  sq          $a1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED854u;
    // 0x4ed854: 0x0  nop
    ctx->pc = 0x4ed854u;
    // NOP
    // 0x4ed858: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x4ed858u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x4ed85c: 0x0  nop
    ctx->pc = 0x4ed85cu;
    // NOP
    ctx->pc = 0x4ed860u;
}
