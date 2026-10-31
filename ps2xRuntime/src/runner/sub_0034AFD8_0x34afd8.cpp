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

// Function: sub_0034AFD8
// Address: 0x34afd8 - 0x34b040
void sub_0034AFD8_0x34afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AFD8_0x34afd8");
#endif

    ctx->pc = 0x34afd8u;

    // 0x34afd8: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x34afd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x34afdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34afdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34afe0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34afe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34afe4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x34afe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34afe8: 0x460c7382  mul.s       $f14, $f14, $f12
    ctx->pc = 0x34afe8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x34afec: 0x460d7bc2  mul.s       $f15, $f15, $f13
    ctx->pc = 0x34afecu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[13]);
    // 0x34aff0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34aff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34aff4: 0x460f7380  add.s       $f14, $f14, $f15
    ctx->pc = 0x34aff4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
    // 0x34aff8: 0x46110001  sub.s       $f0, $f0, $f17
    ctx->pc = 0x34aff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[17]);
    // 0x34affc: 0x460e7042  mul.s       $f1, $f14, $f14
    ctx->pc = 0x34affcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x34b000: 0x46008402  mul.s       $f16, $f16, $f0
    ctx->pc = 0x34b000u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[0]);
    // 0x34b004: 0x46100841  sub.s       $f1, $f1, $f16
    ctx->pc = 0x34b004u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[16]);
    // 0x34b008: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x34b008u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x34b00c: 0x0  nop
    ctx->pc = 0x34b00cu;
    // NOP
    // 0x34b010: 0x0  nop
    ctx->pc = 0x34b010u;
    // NOP
    // 0x34b014: 0x46010044  c1          0x10044
    ctx->pc = 0x34b014u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x34b018: 0x0  nop
    ctx->pc = 0x34b018u;
    // NOP
    // 0x34b01c: 0x0  nop
    ctx->pc = 0x34b01cu;
    // NOP
    // 0x34b020: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x34b020u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x34b024: 0x46017382  mul.s       $f14, $f14, $f1
    ctx->pc = 0x34b024u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x34b028: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34b028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34b02c: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x34b02cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x34b030: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34b030u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34b034: 0x3e00008  jr          $ra
    ctx->pc = 0x34B034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B03Cu;
    // 0x34b03c: 0x0  nop
    ctx->pc = 0x34b03cu;
    // NOP
    ctx->pc = 0x34b040u;
}
