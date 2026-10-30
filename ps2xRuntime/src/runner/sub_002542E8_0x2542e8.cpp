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

// Function: sub_002542E8
// Address: 0x2542e8 - 0x254310
void sub_002542E8_0x2542e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002542E8_0x2542e8");
#endif

    ctx->pc = 0x2542e8u;

    // 0x2542e8: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2542e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2542ec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2542ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2542f0: 0x8c620160  lw          $v0, 0x160($v1)
    ctx->pc = 0x2542f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2542f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2542f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2542f8: 0x84a3000a  lh          $v1, 0xA($a1)
    ctx->pc = 0x2542f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2542fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2542fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254300: 0x0  nop
    ctx->pc = 0x254300u;
    // NOP
    // 0x254304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x254304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x254308: 0x3e00008  jr          $ra
    ctx->pc = 0x254308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254310u;
}
