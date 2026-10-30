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

// Function: sub_0022AEB0
// Address: 0x22aeb0 - 0x22af48
void sub_0022AEB0_0x22aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AEB0_0x22aeb0");
#endif

    switch (ctx->pc) {
        case 0x22aef8u: goto label_22aef8;
        case 0x22af04u: goto label_22af04;
        default: break;
    }

    ctx->pc = 0x22aeb0u;

    // 0x22aeb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22aeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22aeb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x22aeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22aeb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22aeb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aebc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22aebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22aec0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22aec0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22aec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22aec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22aec8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22aec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22aecc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22aeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22aed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22aed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22aed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aed8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22AED8u;
    {
        const bool branch_taken_0x22aed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AED8u;
        // 0x22aedc: 0xe7b50038  swc1        $f21, 0x38($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aed8) {
            ctx->pc = 0x22AEE8u;
            goto label_22aee8;
        }
    }
    ctx->pc = 0x22AEE0u;
    // 0x22aee0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22AEE0u;
    {
        const bool branch_taken_0x22aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEE0u;
        // 0x22aee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aee0) {
            ctx->pc = 0x22AF2Cu;
            goto label_22af2c;
        }
    }
    ctx->pc = 0x22AEE8u;
label_22aee8:
    // 0x22aee8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22aee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x22aeec: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22aeecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x22aef0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x22aef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22aef4: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x22aef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22aef8:
    // 0x22aef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22aef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aefc: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22AEFCu;
    SET_GPR_U32(ctx, 31, 0x22AF04u);
    ctx->pc = 0x22AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AEFCu;
    // 0x22af00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x22AEFCu, 0x22AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF04u;
label_22af04:
    // 0x22af04: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x22af04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x22af08: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22af08u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22af0c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x22af0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22af10: 0x0  nop
    ctx->pc = 0x22af10u;
    // NOP
    // 0x22af14: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22AF14u;
    {
        const bool branch_taken_0x22af14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF14u;
        // 0x22af18: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af14) {
            ctx->pc = 0x22AF2Cu;
            goto label_22af2c;
        }
    }
    ctx->pc = 0x22AF1Cu;
    // 0x22af1c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22af20: 0x1e00fff5  bgtz        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22AF20u;
    {
        const bool branch_taken_0x22af20 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x22AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF20u;
        // 0x22af24: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af20) {
            ctx->pc = 0x22AEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22aef8;
        }
    }
    ctx->pc = 0x22AF28u;
    // 0x22af28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22af2c:
    // 0x22af2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22af2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22af30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22af30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22af34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22af38: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x22af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22af3c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22af40: 0x3e00008  jr          $ra
    ctx->pc = 0x22AF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF40u;
        // 0x22af44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AF48u;
}
