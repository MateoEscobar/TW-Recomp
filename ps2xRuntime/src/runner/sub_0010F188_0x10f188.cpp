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

// Function: sub_0010F188
// Address: 0x10f188 - 0x10f1b0
void sub_0010F188_0x10f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F188_0x10f188");
#endif

    ctx->pc = 0x10f188u;

    // 0x10f188: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10f188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f18c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x10f18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x10f190: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x10f190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x10f194: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10f198: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x10f198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x10f19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10f19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f1a0: 0x0  nop
    ctx->pc = 0x10f1a0u;
    // NOP
    // 0x10f1a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10f1a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10f1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1A8u;
        // 0x10f1ac: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1B0u;
}
