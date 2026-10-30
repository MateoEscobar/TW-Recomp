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

// Function: sub_00174200
// Address: 0x174200 - 0x174238
void sub_00174200_0x174200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174200_0x174200");
#endif

    ctx->pc = 0x174200u;

    // 0x174200: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x174200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x174204: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x174204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x174208: 0xc440cc58  lwc1        $f0, -0x33A8($v0)
    ctx->pc = 0x174208u;
    { uint32_t bits = FAST_READ32(0x50CC58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17420c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x17420cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x174210: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x174210u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x174214: 0xc481cc5c  lwc1        $f1, -0x33A4($a0)
    ctx->pc = 0x174214u;
    { uint32_t bits = FAST_READ32(0x50CC5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174218: 0xc460cc68  lwc1        $f0, -0x3398($v1)
    ctx->pc = 0x174218u;
    { uint32_t bits = FAST_READ32(0x50CC68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17421c: 0x46016328  max.s       $f12, $f12, $f1
    ctx->pc = 0x17421cu;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[1]);
    // 0x174220: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x174220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x174224: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x174224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x174228: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x174228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x17422c: 0xe44ccc60  swc1        $f12, -0x33A0($v0)
    ctx->pc = 0x17422cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50CC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50CC60u, _value); } while (0); }
    // 0x174230: 0x3e00008  jr          $ra
    ctx->pc = 0x174230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174230u;
        // 0x174234: 0xe460cc64  swc1        $f0, -0x339C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954084), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174238u;
}
