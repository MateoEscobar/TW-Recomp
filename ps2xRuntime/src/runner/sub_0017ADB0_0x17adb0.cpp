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

// Function: sub_0017ADB0
// Address: 0x17adb0 - 0x17ae38
void sub_0017ADB0_0x17adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ADB0_0x17adb0");
#endif

    ctx->pc = 0x17adb0u;

    // 0x17adb0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x17adb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x17adb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17adb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17adb8: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x17adb8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x17adbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17adbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17adc0: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x17adc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x17adc4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17adc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17adc8: 0x0  nop
    ctx->pc = 0x17adc8u;
    // NOP
    // 0x17adcc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17adccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17add0: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x17add0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17add4: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x17add4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17add8: 0x0  nop
    ctx->pc = 0x17add8u;
    // NOP
    // 0x17addc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17addcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x17ade0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x17ade0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ade4: 0x0  nop
    ctx->pc = 0x17ade4u;
    // NOP
    // 0x17ade8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17ade8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17adec: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x17adecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x17adf0: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x17adf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x17adf4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x17adf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17adf8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x17adf8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17adfc: 0x0  nop
    ctx->pc = 0x17adfcu;
    // NOP
    // 0x17ae00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ae00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17ae04: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x17ae04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x17ae08: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x17ae08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x17ae0c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x17ae0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x17ae10: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x17ae10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x17ae14: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x17ae14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17ae18: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17ae18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17ae1c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17ae1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17ae20: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x17ae20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17ae24: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x17ae24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ae28: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x17ae28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x17ae2c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE2Cu;
        // 0x17ae30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE34u;
    // 0x17ae34: 0x0  nop
    ctx->pc = 0x17ae34u;
    // NOP
    ctx->pc = 0x17ae38u;
}
