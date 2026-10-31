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

// Function: sub_001133B0
// Address: 0x1133b0 - 0x1133d0
void sub_001133B0_0x1133b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001133B0_0x1133b0");
#endif

    ctx->pc = 0x1133b0u;

    // 0x1133b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1133b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1133b4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1133b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1133b8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1133b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1133bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1133bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1133c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1133c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1133c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1133C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1133C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133C4u;
        // 0x1133c8: 0xe48c7aac  swc1        $f12, 0x7AAC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 31404), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1133C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1133CCu;
    // 0x1133cc: 0x0  nop
    ctx->pc = 0x1133ccu;
    // NOP
    ctx->pc = 0x1133d0u;
}
