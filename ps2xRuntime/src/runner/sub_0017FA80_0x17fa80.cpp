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

// Function: sub_0017FA80
// Address: 0x17fa80 - 0x17faf8
void sub_0017FA80_0x17fa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FA80_0x17fa80");
#endif

    ctx->pc = 0x17fa80u;

    // 0x17fa80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17fa80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17fa84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17fa84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fa88: 0x0  nop
    ctx->pc = 0x17fa88u;
    // NOP
    // 0x17fa8c: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x17fa8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x17fa90: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x17fa90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x17fa94: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x17fa94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fa98: 0x0  nop
    ctx->pc = 0x17fa98u;
    // NOP
    // 0x17fa9c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x17FA9Cu;
    {
        const bool branch_taken_0x17fa9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fa9c) {
            ctx->pc = 0x17FAF0u;
            goto label_17faf0;
        }
    }
    ctx->pc = 0x17FAA4u;
    // 0x17faa4: 0x0  nop
    ctx->pc = 0x17faa4u;
    // NOP
    // 0x17faa8: 0x0  nop
    ctx->pc = 0x17faa8u;
    // NOP
    // 0x17faac: 0x460c0044  c1          0xC0044
    ctx->pc = 0x17faacu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x17fab0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x17fab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x17fab4: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x17fab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x17fab8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x17fab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x17fabc: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x17fabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x17fac0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17fac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17fac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fac8: 0x0  nop
    ctx->pc = 0x17fac8u;
    // NOP
    // 0x17facc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17faccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17fad0: 0x3c0142ff  lui         $at, 0x42FF
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17151 << 16));
    // 0x17fad4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17fad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17fad8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17fad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17fadc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17fadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17fae0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x17fae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x17fae4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17fae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17fae8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x17fae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17faec: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x17faecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_17faf0:
    // 0x17faf0: 0x3e00008  jr          $ra
    ctx->pc = 0x17FAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FAF8u;
}
