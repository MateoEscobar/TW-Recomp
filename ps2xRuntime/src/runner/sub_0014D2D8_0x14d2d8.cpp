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

// Function: sub_0014D2D8
// Address: 0x14d2d8 - 0x14d338
void sub_0014D2D8_0x14d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D2D8_0x14d2d8");
#endif

    ctx->pc = 0x14d2d8u;

    // 0x14d2d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x14d2d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d2dc: 0x0  nop
    ctx->pc = 0x14d2dcu;
    // NOP
    // 0x14d2e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d2e4: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x14d2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x14d2e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d2ec: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x14d2f0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x14d2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x14d2f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14d2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14d2f8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14D2F8u;
    {
        const bool branch_taken_0x14d2f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d2f8) {
            ctx->pc = 0x14D2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D2F8u;
            // 0x14d2fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D300u;
            goto label_14d300;
        }
    }
    ctx->pc = 0x14D300u;
label_14d300:
    // 0x14d300: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d304: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14d308: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14d308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14d30c: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x14d30cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14d310: 0x1012  mflo        $v0
    ctx->pc = 0x14d310u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14d314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d318: 0x0  nop
    ctx->pc = 0x14d318u;
    // NOP
    // 0x14d31c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14d31cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14d320: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14d320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14d324: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14d328: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14d328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14d32c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D334u;
    // 0x14d334: 0x0  nop
    ctx->pc = 0x14d334u;
    // NOP
    ctx->pc = 0x14d338u;
}
