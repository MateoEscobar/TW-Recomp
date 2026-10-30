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

// Function: sub_004183D8
// Address: 0x4183d8 - 0x418408
void sub_004183D8_0x4183d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004183D8_0x4183d8");
#endif

    ctx->pc = 0x4183d8u;

    // 0x4183d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4183d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4183dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4183dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4183e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4183e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4183e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4183e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4183e8: 0xa083000b  sb          $v1, 0xB($a0)
    ctx->pc = 0x4183e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x4183ec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4183ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4183f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4183f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4183f4: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x4183f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x4183f8: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x4183f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x4183fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4183FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4183FCu;
        // 0x418400: 0xa080000a  sb          $zero, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4183FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418404u;
    // 0x418404: 0x0  nop
    ctx->pc = 0x418404u;
    // NOP
    ctx->pc = 0x418408u;
}
