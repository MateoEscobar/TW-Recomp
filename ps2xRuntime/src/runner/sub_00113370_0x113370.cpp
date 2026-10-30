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

// Function: sub_00113370
// Address: 0x113370 - 0x113390
void sub_00113370_0x113370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113370_0x113370");
#endif

    ctx->pc = 0x113370u;

    // 0x113370: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113374: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x113374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x113378: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113378u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x11337c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x11337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x113380: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x113380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x113384: 0x3e00008  jr          $ra
    ctx->pc = 0x113384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113384u;
        // 0x113388: 0xe48c7a5c  swc1        $f12, 0x7A5C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 31324), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11338Cu;
    // 0x11338c: 0x0  nop
    ctx->pc = 0x11338cu;
    // NOP
    ctx->pc = 0x113390u;
}
