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

// Function: sub_004EE2F0
// Address: 0x4ee2f0 - 0x4ee310
void sub_004EE2F0_0x4ee2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE2F0_0x4ee2f0");
#endif

    ctx->pc = 0x4ee2f0u;

    // 0x4ee2f0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE2F4u;
        // 0x4ee2f8: 0x24423838  addiu       $v0, $v0, 0x3838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE2FCu;
    // 0x4ee2fc: 0x0  nop
    ctx->pc = 0x4ee2fcu;
    // NOP
    // 0x4ee300: 0xe48c0030  swc1        $f12, 0x30($a0)
    ctx->pc = 0x4ee300u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x4ee304: 0x0  nop
    ctx->pc = 0x4ee304u;
    // NOP
    // 0x4ee308: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x4ee308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x4ee30c: 0x0  nop
    ctx->pc = 0x4ee30cu;
    // NOP
    ctx->pc = 0x4ee310u;
}
