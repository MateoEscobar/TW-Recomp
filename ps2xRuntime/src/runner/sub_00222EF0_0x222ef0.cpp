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

// Function: sub_00222EF0
// Address: 0x222ef0 - 0x222f48
void sub_00222EF0_0x222ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222EF0_0x222ef0");
#endif

    switch (ctx->pc) {
        case 0x222f04u: goto label_222f04;
        default: break;
    }

    ctx->pc = 0x222ef0u;

    // 0x222ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222ef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x222ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222efc: 0xc088b98  jal         func_222E60
    ctx->pc = 0x222EFCu;
    SET_GPR_U32(ctx, 31, 0x222F04u);
    ctx->pc = 0x222F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222EFCu;
    // 0x222f00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x222EFCu, 0x222F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F04u;
label_222f04:
    // 0x222f04: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x222f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x222f08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x222f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222f0c: 0x0  nop
    ctx->pc = 0x222f0cu;
    // NOP
    // 0x222f10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x222f14: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x222f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x222f18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222f1c: 0x84620144  lh          $v0, 0x144($v1)
    ctx->pc = 0x222f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x222f20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x222f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222f28: 0x0  nop
    ctx->pc = 0x222f28u;
    // NOP
    // 0x222f2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222f34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x222f34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x222f38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x222f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x222f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x222F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F3Cu;
        // 0x222f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222F44u;
    // 0x222f44: 0x0  nop
    ctx->pc = 0x222f44u;
    // NOP
    ctx->pc = 0x222f48u;
}
