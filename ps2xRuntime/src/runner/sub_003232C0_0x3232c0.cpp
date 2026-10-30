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

// Function: sub_003232C0
// Address: 0x3232c0 - 0x323300
void sub_003232C0_0x3232c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003232C0_0x3232c0");
#endif

    ctx->pc = 0x3232c0u;

    // 0x3232c0: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3232C0u;
    {
        const bool branch_taken_0x3232c0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x3232c0) {
            ctx->pc = 0x3232C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3232C0u;
            // 0x3232c4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3232D8u;
            goto label_3232d8;
        }
    }
    ctx->pc = 0x3232C8u;
    // 0x3232c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3232c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3232cc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3232ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3232d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3232D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232D0u;
        // 0x3232d4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3232D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3232D8u;
label_3232d8:
    // 0x3232d8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3232d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3232dc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3232dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3232e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3232e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3232e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3232e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3232e8: 0x44202b  sltu        $a0, $v0, $a0
    ctx->pc = 0x3232e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3232ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3232ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3232F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232ECu;
        // 0x3232f0: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3232ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3232F4u;
    // 0x3232f4: 0x0  nop
    ctx->pc = 0x3232f4u;
    // NOP
    // 0x3232f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3232f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3232fc: 0x0  nop
    ctx->pc = 0x3232fcu;
    // NOP
    ctx->pc = 0x323300u;
}
