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

// Function: sub_00208C18
// Address: 0x208c18 - 0x208cc0
void sub_00208C18_0x208c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208C18_0x208c18");
#endif

    switch (ctx->pc) {
        case 0x208ca0u: goto label_208ca0;
        default: break;
    }

    ctx->pc = 0x208c18u;

    // 0x208c18: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x208c18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x208c1c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208c20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x208c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x208c24: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x208c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208c2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x208C2Cu;
    {
        const bool branch_taken_0x208c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C2Cu;
        // 0x208c30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c2c) {
            ctx->pc = 0x208C38u;
            goto label_208c38;
        }
    }
    ctx->pc = 0x208C34u;
    // 0x208c34: 0x46001b06  mov.s       $f12, $f3
    ctx->pc = 0x208c34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
label_208c38:
    // 0x208c38: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x208c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x208c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x208c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208c40: 0x0  nop
    ctx->pc = 0x208c40u;
    // NOP
    // 0x208c44: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x208c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208c48: 0x0  nop
    ctx->pc = 0x208c48u;
    // NOP
    // 0x208c4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x208C4Cu;
    {
        const bool branch_taken_0x208c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208c4c) {
            ctx->pc = 0x208C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C4Cu;
            // 0x208c50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x208C54u;
            goto label_208c54;
        }
    }
    ctx->pc = 0x208C54u;
label_208c54:
    // 0x208c54: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x208c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x208c58: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x208c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x208c5c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x208c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x208c60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x208c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x208c64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x208c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208c68: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x208c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x208c6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x208c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x208c70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x208c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x208c74: 0xa204009c  sb          $a0, 0x9C($s0)
    ctx->pc = 0x208c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 4));
    // 0x208c78: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x208c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x208c7c: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x208c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x208c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208c84: 0x0  nop
    ctx->pc = 0x208c84u;
    // NOP
    // 0x208c88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x208c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x208c8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x208c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x208c90: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x208c90u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x208c94: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x208c94u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x208c98: 0xc06d20e  jal         func_1B4838
    ctx->pc = 0x208C98u;
    SET_GPR_U32(ctx, 31, 0x208CA0u);
    ctx->pc = 0x208C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C98u;
    // 0x208c9c: 0xe4600038  swc1        $f0, 0x38($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4838u, 0x208C98u, 0x208CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CA0u;
label_208ca0:
    // 0x208ca0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x208ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x208ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208ca8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x208ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x208cac: 0x906457a4  lbu         $a0, 0x57A4($v1)
    ctx->pc = 0x208cacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22436)));
    // 0x208cb0: 0xa204009c  sb          $a0, 0x9C($s0)
    ctx->pc = 0x208cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 4));
    // 0x208cb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x208cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x208CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CB8u;
        // 0x208cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208CC0u;
}
