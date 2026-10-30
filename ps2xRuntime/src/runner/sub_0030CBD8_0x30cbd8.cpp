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

// Function: sub_0030CBD8
// Address: 0x30cbd8 - 0x30ccd8
void sub_0030CBD8_0x30cbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CBD8_0x30cbd8");
#endif

    switch (ctx->pc) {
        case 0x30cc40u: goto label_30cc40;
        case 0x30cc58u: goto label_30cc58;
        case 0x30cc98u: goto label_30cc98;
        case 0x30cca4u: goto label_30cca4;
        default: break;
    }

    ctx->pc = 0x30cbd8u;

    // 0x30cbd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30cbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30cbdc: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x30cbdcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x30cbe0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30cbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30cbe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30cbe8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x30cbec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30cbecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbf0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30cbf4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30cbf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbf8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30cbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x30cbfc: 0x3114ffff  andi        $s4, $t0, 0xFFFF
    ctx->pc = 0x30cbfcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x30cc00: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30cc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x30cc04: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x30cc04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc08: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x30cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x30cc0c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x30cc0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc10: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x30cc10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30cc14: 0x9bc03  sra         $s7, $t1, 16
    ctx->pc = 0x30cc14u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 9), 16));
    // 0x30cc18: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x30cc18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30cc1c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x30cc1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x30cc20: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x30cc24: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30cc24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30cc28: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x30cc2c: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x30CC2Cu;
    {
        const bool branch_taken_0x30cc2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC2Cu;
        // 0x30cc30: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc2c) {
            ctx->pc = 0x30CCA4u;
            goto label_30cca4;
        }
    }
    ctx->pc = 0x30CC34u;
    // 0x30cc34: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x30cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30cc38: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30CC38u;
    SET_GPR_U32(ctx, 31, 0x30CC40u);
    ctx->pc = 0x30CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC38u;
    // 0x30cc3c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30CC38u, 0x30CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC40u;
label_30cc40:
    // 0x30cc40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30cc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc44: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x30cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x30cc48: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30CC48u;
    {
        const bool branch_taken_0x30cc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC48u;
        // 0x30cc4c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc48) {
            ctx->pc = 0x30CCA8u;
            goto label_30cca8;
        }
    }
    ctx->pc = 0x30CC50u;
    // 0x30cc50: 0xc0c1956  jal         func_306558
    ctx->pc = 0x30CC50u;
    SET_GPR_U32(ctx, 31, 0x30CC58u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x30CC50u, 0x30CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC58u;
label_30cc58:
    // 0x30cc58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30cc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc5c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x30CC5Cu;
    {
        const bool branch_taken_0x30cc5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC5Cu;
        // 0x30cc60: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc5c) {
            ctx->pc = 0x30CC98u;
            goto label_30cc98;
        }
    }
    ctx->pc = 0x30CC64u;
    // 0x30cc64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x30cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x30cc68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30cc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30cc6c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x30cc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc70: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x30cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x30cc74: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x30cc74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30cc78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30cc7c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x30cc7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x30cc80: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x30cc80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc84: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x30cc84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc88: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x30cc88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30cc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc90: 0xc0c3336  jal         func_30CCD8
    ctx->pc = 0x30CC90u;
    SET_GPR_U32(ctx, 31, 0x30CC98u);
    ctx->pc = 0x30CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC90u;
    // 0x30cc94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CCD8u, 0x30CC90u, 0x30CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC98u;
label_30cc98:
    // 0x30cc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30cc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc9c: 0xc059590  jal         func_165640
    ctx->pc = 0x30CC9Cu;
    SET_GPR_U32(ctx, 31, 0x30CCA4u);
    ctx->pc = 0x30CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC9Cu;
    // 0x30cca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x30CC9Cu, 0x30CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCA4u;
label_30cca4:
    // 0x30cca4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30cca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_30cca8:
    // 0x30cca8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30cca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30ccac: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30ccacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30ccb0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30ccb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30ccb4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30ccb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ccb8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x30ccb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ccbc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x30ccbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ccc0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x30ccc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ccc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ccc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ccc8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x30ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30cccc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x30ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30ccd0: 0x3e00008  jr          $ra
    ctx->pc = 0x30CCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCD0u;
        // 0x30ccd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CCD8u;
}
