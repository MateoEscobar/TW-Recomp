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

// Function: sub_00337ED8
// Address: 0x337ed8 - 0x337f08
void sub_00337ED8_0x337ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337ED8_0x337ed8");
#endif

    ctx->pc = 0x337ed8u;

    // 0x337ed8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x337ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x337edc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x337edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x337ee0: 0xc4406a7c  lwc1        $f0, 0x6A7C($v0)
    ctx->pc = 0x337ee0u;
    { uint32_t bits = FAST_READ32(0x576A7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x337ee4: 0xc4616a80  lwc1        $f1, 0x6A80($v1)
    ctx->pc = 0x337ee4u;
    { uint32_t bits = FAST_READ32(0x576A80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x337ee8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x337ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337eec: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x337eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x337ef0: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x337ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x337ef4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x337ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x337ef8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x337ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x337efc: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x337efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x337f00: 0x3e00008  jr          $ra
    ctx->pc = 0x337F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F00u;
        // 0x337f04: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337F08u;
}
