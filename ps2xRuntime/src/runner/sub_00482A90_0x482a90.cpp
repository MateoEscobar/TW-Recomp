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

// Function: sub_00482A90
// Address: 0x482a90 - 0x482b60
void sub_00482A90_0x482a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482A90_0x482a90");
#endif

    switch (ctx->pc) {
        case 0x482b48u: goto label_482b48;
        default: break;
    }

    ctx->pc = 0x482a90u;

    // 0x482a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482a94: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x482a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x482a98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x482a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x482a9c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x482a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x482aa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x482aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x482aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482aa8: 0xe60c0080  swc1        $f12, 0x80($s0)
    ctx->pc = 0x482aa8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x482aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x482aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x482ab0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x482ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x482ab4: 0xc446001c  lwc1        $f6, 0x1C($v0)
    ctx->pc = 0x482ab4u;
    { uint32_t bits = FAST_READ32(0x70AD34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x482ab8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x482AB8u;
    {
        const bool branch_taken_0x482ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x482ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482AB8u;
        // 0x482abc: 0xc4450018  lwc1        $f5, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482ab8) {
            ctx->pc = 0x482AD4u;
            goto label_482ad4;
        }
    }
    ctx->pc = 0x482AC0u;
    // 0x482ac0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x482ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x482ac4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x482AC4u;
    {
        const bool branch_taken_0x482ac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x482ac4) {
            ctx->pc = 0x482AD4u;
            goto label_482ad4;
        }
    }
    ctx->pc = 0x482ACCu;
    // 0x482acc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x482ACCu;
    {
        const bool branch_taken_0x482acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x482AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482ACCu;
        // 0x482ad0: 0xc6040084  lwc1        $f4, 0x84($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482acc) {
            ctx->pc = 0x482AECu;
            goto label_482aec;
        }
    }
    ctx->pc = 0x482AD4u;
label_482ad4:
    // 0x482ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x482ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x482ad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x482ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x482adc: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x482adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x482ae0: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x482ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x482ae4: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x482ae4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x482ae8: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x482ae8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_482aec:
    // 0x482aec: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x482aecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x482af0: 0xc7808290  lwc1        $f0, -0x7D70($gp)
    ctx->pc = 0x482af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x482af4: 0x460c2081  sub.s       $f2, $f4, $f12
    ctx->pc = 0x482af4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x482af8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x482af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x482afc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x482afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x482b00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x482b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x482b04: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x482b04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x482b08: 0x460c2080  add.s       $f2, $f4, $f12
    ctx->pc = 0x482b08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x482b0c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x482b0cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x482b10: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x482b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x482b14: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x482b14u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x482b18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x482b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x482b1c: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x482b1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x482b20: 0x46053000  add.s       $f0, $f6, $f5
    ctx->pc = 0x482b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x482b24: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x482b24u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x482b28: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x482b28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x482b2c: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x482b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x482b30: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x482b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x482b34: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x482b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x482b38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x482B38u;
    {
        const bool branch_taken_0x482b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x482B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482B38u;
        // 0x482b3c: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482b38) {
            ctx->pc = 0x482B48u;
            goto label_482b48;
        }
    }
    ctx->pc = 0x482B40u;
    // 0x482b40: 0xc12105a  jal         func_484168
    ctx->pc = 0x482B40u;
    SET_GPR_U32(ctx, 31, 0x482B48u);
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x482B40u, 0x482B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482B48u;
label_482b48:
    // 0x482b48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482b4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x482b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482b50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x482b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482b54: 0x3e00008  jr          $ra
    ctx->pc = 0x482B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x482B54u;
        // 0x482b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482B5Cu;
    // 0x482b5c: 0x0  nop
    ctx->pc = 0x482b5cu;
    // NOP
    ctx->pc = 0x482b60u;
}
