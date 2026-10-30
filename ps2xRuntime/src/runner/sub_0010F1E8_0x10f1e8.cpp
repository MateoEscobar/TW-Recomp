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

// Function: sub_0010F1E8
// Address: 0x10f1e8 - 0x10f228
void sub_0010F1E8_0x10f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F1E8_0x10f1e8");
#endif

    ctx->pc = 0x10f1e8u;

    // 0x10f1e8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f1ec: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f1f0: 0x8c448670  lw          $a0, -0x7990($v0)
    ctx->pc = 0x10f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x598670u));
    // 0x10f1f4: 0x90a3000f  lbu         $v1, 0xF($a1)
    ctx->pc = 0x10f1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x10f1f8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10f1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10f1fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10f200: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10f200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10f204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10f208: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10f208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10f20c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x10f20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x10f210: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10f210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f214: 0x0  nop
    ctx->pc = 0x10f214u;
    // NOP
    // 0x10f218: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10f218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10f21c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F21Cu;
        // 0x10f220: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F224u;
    // 0x10f224: 0x0  nop
    ctx->pc = 0x10f224u;
    // NOP
    ctx->pc = 0x10f228u;
}
