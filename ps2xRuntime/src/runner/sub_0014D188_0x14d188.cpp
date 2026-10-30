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

// Function: sub_0014D188
// Address: 0x14d188 - 0x14d1b0
void sub_0014D188_0x14d188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D188_0x14d188");
#endif

    ctx->pc = 0x14d188u;

    // 0x14d188: 0x3c01467f  lui         $at, 0x467F
    ctx->pc = 0x14d188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18047 << 16));
    // 0x14d18c: 0x3421fc00  ori         $at, $at, 0xFC00
    ctx->pc = 0x14d18cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64512);
    // 0x14d190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d194: 0x0  nop
    ctx->pc = 0x14d194u;
    // NOP
    // 0x14d198: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x14d198u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x14d19c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d19cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d1a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14d1a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14d1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1A4u;
        // 0x14d1a8: 0x30427fff  andi        $v0, $v0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D1ACu;
    // 0x14d1ac: 0x0  nop
    ctx->pc = 0x14d1acu;
    // NOP
    ctx->pc = 0x14d1b0u;
}
