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

// Function: sub_00196888
// Address: 0x196888 - 0x1968c0
void sub_00196888_0x196888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196888_0x196888");
#endif

    ctx->pc = 0x196888u;

    // 0x196888: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x196888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x19688c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x19688cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x196890: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x196890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x196894: 0x8c83ce98  lw          $v1, -0x3168($a0)
    ctx->pc = 0x196894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954648)));
    // 0x196898: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x196898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19689c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x19689cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1968a0: 0x8c82ce9c  lw          $v0, -0x3164($a0)
    ctx->pc = 0x1968a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50CE9Cu));
    // 0x1968a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1968a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1968a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1968a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1968ac: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1968acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1968b0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1968b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1968b4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1968b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1968b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1968B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1968BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968B8u;
        // 0x1968bc: 0xac82ce9c  sw          $v0, -0x3164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294954652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1968B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1968C0u;
}
