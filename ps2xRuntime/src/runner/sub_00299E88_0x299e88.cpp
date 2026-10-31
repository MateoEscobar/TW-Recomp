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

// Function: sub_00299E88
// Address: 0x299e88 - 0x299ea8
void sub_00299E88_0x299e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299E88_0x299e88");
#endif

    ctx->pc = 0x299e88u;

    // 0x299e88: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x299e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x299e8c: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x299e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x299e90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x299e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299e98: 0x0  nop
    ctx->pc = 0x299e98u;
    // NOP
    // 0x299e9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x299EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EA0u;
        // 0x299ea4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299EA8u;
}
