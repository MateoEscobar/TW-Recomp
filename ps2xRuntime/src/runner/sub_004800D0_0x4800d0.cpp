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

// Function: sub_004800D0
// Address: 0x4800d0 - 0x480108
void sub_004800D0_0x4800d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004800D0_0x4800d0");
#endif

    ctx->pc = 0x4800d0u;

    // 0x4800d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4800d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4800d4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x4800d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4800d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4800d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4800dc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x4800dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4800e0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4800e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4800e4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4800e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4800e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4800e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4800ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4800ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4800f0: 0x46000004  c1          0x4
    ctx->pc = 0x4800f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x4800f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4800F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4800F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4800FCu;
    // 0x4800fc: 0x0  nop
    ctx->pc = 0x4800fcu;
    // NOP
    // 0x480100: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x480100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x480104: 0x0  nop
    ctx->pc = 0x480104u;
    // NOP
    ctx->pc = 0x480108u;
}
