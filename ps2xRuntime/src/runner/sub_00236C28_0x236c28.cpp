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

// Function: sub_00236C28
// Address: 0x236c28 - 0x236c48
void sub_00236C28_0x236c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C28_0x236c28");
#endif

    ctx->pc = 0x236c28u;

    // 0x236c28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x236c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x236c2c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x236c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x236c30: 0x244408e0  addiu       $a0, $v0, 0x8E0
    ctx->pc = 0x236c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
    // 0x236c34: 0xe46c08d8  swc1        $f12, 0x8D8($v1)
    ctx->pc = 0x236c34u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5108D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5108D8u, _value); } while (0); }
    // 0x236c38: 0xe44d08e0  swc1        $f13, 0x8E0($v0)
    ctx->pc = 0x236c38u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5108E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5108E0u, _value); } while (0); }
    // 0x236c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x236C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C3Cu;
        // 0x236c40: 0xe48e0004  swc1        $f14, 0x4($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C44u;
    // 0x236c44: 0x0  nop
    ctx->pc = 0x236c44u;
    // NOP
    ctx->pc = 0x236c48u;
}
