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

// Function: sub_00315EE8
// Address: 0x315ee8 - 0x315fc8
void sub_00315EE8_0x315ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315EE8_0x315ee8");
#endif

    switch (ctx->pc) {
        case 0x315f3cu: goto label_315f3c;
        case 0x315f50u: goto label_315f50;
        case 0x315f88u: goto label_315f88;
        case 0x315f94u: goto label_315f94;
        default: break;
    }

    ctx->pc = 0x315ee8u;

    // 0x315ee8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x315ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x315eec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x315eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x315ef0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x315ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x315ef4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x315ef4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x315ef8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x315ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x315efc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x315efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x315f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x315f04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x315f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f08: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x315f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x315f0c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x315f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f10: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x315f10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x315f14: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x315f14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f18: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x315f18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x315f1c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x315f1cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x315f20: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x315f20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x315f24: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x315f24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x315f28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x315f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x315f2c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x315f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x315f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x315f34: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x315F34u;
    SET_GPR_U32(ctx, 31, 0x315F3Cu);
    ctx->pc = 0x315F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F34u;
    // 0x315f38: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x315F34u, 0x315F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F3Cu;
label_315f3c:
    // 0x315f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x315f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f40: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x315F40u;
    {
        const bool branch_taken_0x315f40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F40u;
        // 0x315f44: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f40) {
            ctx->pc = 0x315F98u;
            goto label_315f98;
        }
    }
    ctx->pc = 0x315F48u;
    // 0x315f48: 0xc0c1956  jal         func_306558
    ctx->pc = 0x315F48u;
    SET_GPR_U32(ctx, 31, 0x315F50u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x315F48u, 0x315F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F50u;
label_315f50:
    // 0x315f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f54: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x315F54u;
    {
        const bool branch_taken_0x315f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F54u;
        // 0x315f58: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f54) {
            ctx->pc = 0x315F88u;
            goto label_315f88;
        }
    }
    ctx->pc = 0x315F5Cu;
    // 0x315f5c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x315f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x315f60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x315f60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x315f64: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x315f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f68: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x315f68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x315f6c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x315f6cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x315f70: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x315f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f74: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x315f74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x315f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f80: 0xc0c5f10  jal         func_317C40
    ctx->pc = 0x315F80u;
    SET_GPR_U32(ctx, 31, 0x315F88u);
    ctx->pc = 0x315F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F80u;
    // 0x315f84: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x317C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317C40u, 0x315F80u, 0x315F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F88u;
label_315f88:
    // 0x315f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f8c: 0xc059590  jal         func_165640
    ctx->pc = 0x315F8Cu;
    SET_GPR_U32(ctx, 31, 0x315F94u);
    ctx->pc = 0x315F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F8Cu;
    // 0x315f90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x315F8Cu, 0x315F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F94u;
label_315f94:
    // 0x315f94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x315f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_315f98:
    // 0x315f98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x315f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x315f9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x315f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x315fa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x315fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315fa4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x315fa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315fa8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x315fa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315fb0: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x315fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x315fb4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x315fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x315fb8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x315fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x315fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x315FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FBCu;
        // 0x315fc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315FC4u;
    // 0x315fc4: 0x0  nop
    ctx->pc = 0x315fc4u;
    // NOP
    ctx->pc = 0x315fc8u;
}
