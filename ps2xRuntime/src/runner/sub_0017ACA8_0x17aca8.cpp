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

// Function: sub_0017ACA8
// Address: 0x17aca8 - 0x17ad30
void sub_0017ACA8_0x17aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ACA8_0x17aca8");
#endif

    switch (ctx->pc) {
        case 0x17ace4u: goto label_17ace4;
        case 0x17acf0u: goto label_17acf0;
        case 0x17acfcu: goto label_17acfc;
        case 0x17ad08u: goto label_17ad08;
        default: break;
    }

    ctx->pc = 0x17aca8u;

    // 0x17aca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17aca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17acac: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x17acacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17acb0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x17acb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x17acb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17acb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17acb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17acbc: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x17acbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x17acc0: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x17acc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17acc4: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x17acc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17acc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17acc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17accc: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x17acccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17acd0: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x17acd0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x17acd4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x17acd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x17acd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17acdc: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17ACDCu;
    SET_GPR_U32(ctx, 31, 0x17ACE4u);
    ctx->pc = 0x17ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACDCu;
    // 0x17ace0: 0x46007dc6  mov.s       $f23, $f15 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17ACDCu, 0x17ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACE4u;
label_17ace4:
    // 0x17ace4: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x17ace4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x17ace8: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17ACE8u;
    SET_GPR_U32(ctx, 31, 0x17ACF0u);
    ctx->pc = 0x17ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACE8u;
    // 0x17acec: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17ACE8u, 0x17ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACF0u;
label_17acf0:
    // 0x17acf0: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x17acf0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x17acf4: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17ACF4u;
    SET_GPR_U32(ctx, 31, 0x17ACFCu);
    ctx->pc = 0x17ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACF4u;
    // 0x17acf8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17ACF4u, 0x17ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACFCu;
label_17acfc:
    // 0x17acfc: 0x4614bb02  mul.s       $f12, $f23, $f20
    ctx->pc = 0x17acfcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x17ad00: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17AD00u;
    SET_GPR_U32(ctx, 31, 0x17AD08u);
    ctx->pc = 0x17AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD00u;
    // 0x17ad04: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17AD00u, 0x17AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD08u;
label_17ad08:
    // 0x17ad08: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x17ad08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ad0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ad0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ad10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ad14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ad14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ad18: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x17ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17ad1c: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x17ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17ad20: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x17ad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17ad24: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x17ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ad28: 0x3e00008  jr          $ra
    ctx->pc = 0x17AD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD28u;
        // 0x17ad2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AD30u;
}
