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

// Function: sub_00222F48
// Address: 0x222f48 - 0x222fa0
void sub_00222F48_0x222f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222F48_0x222f48");
#endif

    switch (ctx->pc) {
        case 0x222f5cu: goto label_222f5c;
        default: break;
    }

    ctx->pc = 0x222f48u;

    // 0x222f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222f4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x222f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222f54: 0xc088c1a  jal         func_223068
    ctx->pc = 0x222F54u;
    SET_GPR_U32(ctx, 31, 0x222F5Cu);
    ctx->pc = 0x222F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F54u;
    // 0x222f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x222F54u, 0x222F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F5Cu;
label_222f5c:
    // 0x222f5c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x222f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x222f60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x222f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222f64: 0x0  nop
    ctx->pc = 0x222f64u;
    // NOP
    // 0x222f68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222f6c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x222f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x222f70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222f74: 0x84620148  lh          $v0, 0x148($v1)
    ctx->pc = 0x222f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x222f78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x222f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222f80: 0x0  nop
    ctx->pc = 0x222f80u;
    // NOP
    // 0x222f84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222f8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x222f8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x222f90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x222f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x222f94: 0x3e00008  jr          $ra
    ctx->pc = 0x222F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F94u;
        // 0x222f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222F9Cu;
    // 0x222f9c: 0x0  nop
    ctx->pc = 0x222f9cu;
    // NOP
    ctx->pc = 0x222fa0u;
}
