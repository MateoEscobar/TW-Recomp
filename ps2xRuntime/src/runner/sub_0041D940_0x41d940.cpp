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

// Function: sub_0041D940
// Address: 0x41d940 - 0x41d968
void sub_0041D940_0x41d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D940_0x41d940");
#endif

    ctx->pc = 0x41d940u;

    // 0x41d940: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x41d940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x41d944: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x41d944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x41d948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41d948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41d94c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x41d950: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d954: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x41d954u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x41d958: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x41d958u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x41d95c: 0xe44d48b4  swc1        $f13, 0x48B4($v0)
    ctx->pc = 0x41d95cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5148B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5148B4u, _value); } while (0); }
    // 0x41d960: 0x3e00008  jr          $ra
    ctx->pc = 0x41D960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D960u;
        // 0x41d964: 0xe46c48b0  swc1        $f12, 0x48B0($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18608), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D968u;
}
