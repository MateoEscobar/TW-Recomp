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

// Function: sub_0010F2F0
// Address: 0x10f2f0 - 0x10f320
void sub_0010F2F0_0x10f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F2F0_0x10f2f0");
#endif

    ctx->pc = 0x10f2f0u;

    // 0x10f2f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10f2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f2f4: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f2f8: 0x8c468670  lw          $a2, -0x7990($v0)
    ctx->pc = 0x10f2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x598670u));
    // 0x10f2fc: 0x90a4000f  lbu         $a0, 0xF($a1)
    ctx->pc = 0x10f2fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x10f300: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10f300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10f304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10f308: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x10f308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10f30c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x10f30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x10f310: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x10f310u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x10f314: 0x3e00008  jr          $ra
    ctx->pc = 0x10F314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F314u;
        // 0x10f318: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F31Cu;
    // 0x10f31c: 0x0  nop
    ctx->pc = 0x10f31cu;
    // NOP
    ctx->pc = 0x10f320u;
}
