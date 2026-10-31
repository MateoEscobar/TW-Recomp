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

// Function: sub_00222E80
// Address: 0x222e80 - 0x222ef0
void sub_00222E80_0x222e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222E80_0x222e80");
#endif

    switch (ctx->pc) {
        case 0x222e9cu: goto label_222e9c;
        default: break;
    }

    ctx->pc = 0x222e80u;

    // 0x222e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222e84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x222e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222e88: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x222e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x222e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222e94: 0xc088b98  jal         func_222E60
    ctx->pc = 0x222E94u;
    SET_GPR_U32(ctx, 31, 0x222E9Cu);
    ctx->pc = 0x222E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E94u;
    // 0x222e98: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x222E94u, 0x222E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E9Cu;
label_222e9c:
    // 0x222e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222ea0: 0x0  nop
    ctx->pc = 0x222ea0u;
    // NOP
    // 0x222ea4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x222ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x222ea8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x222ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x222eac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x222eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x222eb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x222eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x222eb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x222eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x222eb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x222ebc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x222ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x222ec0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x222ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x222ec4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x222ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222ecc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x222eccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x222ed0: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x222ed0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x222ed4: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x222ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x222ed8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x222ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x222edc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x222edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x222ee0: 0xa4620144  sh          $v0, 0x144($v1)
    ctx->pc = 0x222ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 2));
    // 0x222ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x222EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EE4u;
        // 0x222ee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222EECu;
    // 0x222eec: 0x0  nop
    ctx->pc = 0x222eecu;
    // NOP
    ctx->pc = 0x222ef0u;
}
