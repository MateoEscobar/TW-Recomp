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

// Function: sub_0034AF50
// Address: 0x34af50 - 0x34afd8
void sub_0034AF50_0x34af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AF50_0x34af50");
#endif

    ctx->pc = 0x34af50u;

    // 0x34af50: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x34af50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x34af54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34af54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34af58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34af58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34af5c: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x34af5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34af60: 0x460f6302  mul.s       $f12, $f12, $f15
    ctx->pc = 0x34af60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
    // 0x34af64: 0x46106b42  mul.s       $f13, $f13, $f16
    ctx->pc = 0x34af64u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[16]);
    // 0x34af68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34af68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34af6c: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x34af6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x34af70: 0x460f7bc2  mul.s       $f15, $f15, $f15
    ctx->pc = 0x34af70u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x34af74: 0x46108402  mul.s       $f16, $f16, $f16
    ctx->pc = 0x34af74u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x34af78: 0x46117382  mul.s       $f14, $f14, $f17
    ctx->pc = 0x34af78u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[17]);
    // 0x34af7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34af7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34af80: 0x460d6300  add.s       $f12, $f12, $f13
    ctx->pc = 0x34af80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x34af84: 0x46107bc0  add.s       $f15, $f15, $f16
    ctx->pc = 0x34af84u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[16]);
    // 0x34af88: 0x46118c42  mul.s       $f17, $f17, $f17
    ctx->pc = 0x34af88u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
    // 0x34af8c: 0x46120001  sub.s       $f0, $f0, $f18
    ctx->pc = 0x34af8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[18]);
    // 0x34af90: 0x460e6300  add.s       $f12, $f12, $f14
    ctx->pc = 0x34af90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x34af94: 0x46117bc0  add.s       $f15, $f15, $f17
    ctx->pc = 0x34af94u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[17]);
    // 0x34af98: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x34af98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34af9c: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x34af9cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x34afa0: 0x460f0841  sub.s       $f1, $f1, $f15
    ctx->pc = 0x34afa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[15]);
    // 0x34afa4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x34afa4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x34afa8: 0x0  nop
    ctx->pc = 0x34afa8u;
    // NOP
    // 0x34afac: 0x0  nop
    ctx->pc = 0x34afacu;
    // NOP
    // 0x34afb0: 0x46010044  c1          0x10044
    ctx->pc = 0x34afb0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x34afb4: 0x0  nop
    ctx->pc = 0x34afb4u;
    // NOP
    // 0x34afb8: 0x0  nop
    ctx->pc = 0x34afb8u;
    // NOP
    // 0x34afbc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x34afbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x34afc0: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x34afc0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x34afc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34afc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34afc8: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x34afc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x34afcc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34afccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34afd0: 0x3e00008  jr          $ra
    ctx->pc = 0x34AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AFD8u;
}
