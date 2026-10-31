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

// Function: sub_00288CB0
// Address: 0x288cb0 - 0x288cc8
void sub_00288CB0_0x288cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288CB0_0x288cb0");
#endif

    ctx->pc = 0x288cb0u;

    // 0x288cb0: 0xa4850032  sh          $a1, 0x32($a0)
    ctx->pc = 0x288cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 5));
    // 0x288cb4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x288cb4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x288cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x288CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CB8u;
        // 0x288cbc: 0xe48c0034  swc1        $f12, 0x34($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288CC0u;
    // 0x288cc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x288cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x288cc4: 0x0  nop
    ctx->pc = 0x288cc4u;
    // NOP
    ctx->pc = 0x288cc8u;
}
