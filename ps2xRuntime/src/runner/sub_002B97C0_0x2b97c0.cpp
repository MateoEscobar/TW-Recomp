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

// Function: sub_002B97C0
// Address: 0x2b97c0 - 0x2b98f0
void sub_002B97C0_0x2b97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B97C0_0x2b97c0");
#endif

    switch (ctx->pc) {
        case 0x2b97f0u: goto label_2b97f0;
        case 0x2b9810u: goto label_2b9810;
        case 0x2b981cu: goto label_2b981c;
        case 0x2b9858u: goto label_2b9858;
        case 0x2b9868u: goto label_2b9868;
        case 0x2b9870u: goto label_2b9870;
        case 0x2b9880u: goto label_2b9880;
        case 0x2b98c8u: goto label_2b98c8;
        default: break;
    }

    ctx->pc = 0x2b97c0u;

    // 0x2b97c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b97c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b97c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b97c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b97cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2b97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2b97d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b97d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97d4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2b97d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b97d8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2b97d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2b97dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b97dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b97e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b97e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b97e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b97e8: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2B97E8u;
    SET_GPR_U32(ctx, 31, 0x2B97F0u);
    ctx->pc = 0x2B97ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B97E8u;
    // 0x2b97ec: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2B97E8u, 0x2B97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B97F0u;
label_2b97f0:
    // 0x2b97f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b97f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97f4: 0x86300092  lh          $s0, 0x92($s1)
    ctx->pc = 0x2b97f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2b97f8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2b97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2b97fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b97fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9800: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2b9800u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2b9804: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b9804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b9808: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2B9808u;
    SET_GPR_U32(ctx, 31, 0x2B9810u);
    ctx->pc = 0x2B980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9808u;
    // 0x2b980c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2B9808u, 0x2B9810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9810u;
label_2b9810:
    // 0x2b9810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9814: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B9814u;
    SET_GPR_U32(ctx, 31, 0x2B981Cu);
    ctx->pc = 0x2B9818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9814u;
    // 0x2b9818: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B9814u, 0x2B981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B981Cu;
label_2b981c:
    // 0x2b981c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b981cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b9820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b9820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b9824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9828: 0x0  nop
    ctx->pc = 0x2b9828u;
    // NOP
    // 0x2b982c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2b982cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9830: 0x0  nop
    ctx->pc = 0x2b9830u;
    // NOP
    // 0x2b9834: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2B9834u;
    {
        const bool branch_taken_0x2b9834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9834u;
        // 0x2b9838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9834) {
            ctx->pc = 0x2B98CCu;
            goto label_2b98cc;
        }
    }
    ctx->pc = 0x2B983Cu;
    // 0x2b983c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9840: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b9840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9844: 0x0  nop
    ctx->pc = 0x2b9844u;
    // NOP
    // 0x2b9848: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9848u;
    {
        const bool branch_taken_0x2b9848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9848) {
            ctx->pc = 0x2B9860u;
            goto label_2b9860;
        }
    }
    ctx->pc = 0x2B9850u;
    // 0x2b9850: 0xc08bfa0  jal         func_22FE80
    ctx->pc = 0x2B9850u;
    SET_GPR_U32(ctx, 31, 0x2B9858u);
    ctx->pc = 0x2B9854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9850u;
    // 0x2b9854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2B9850u, 0x2B9858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9858u;
label_2b9858:
    // 0x2b9858: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9858u;
    {
        const bool branch_taken_0x2b9858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9858) {
            ctx->pc = 0x2B9868u;
            goto label_2b9868;
        }
    }
    ctx->pc = 0x2B9860u;
label_2b9860:
    // 0x2b9860: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2B9860u;
    SET_GPR_U32(ctx, 31, 0x2B9868u);
    ctx->pc = 0x2B9864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9860u;
    // 0x2b9864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B9860u, 0x2B9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9868u;
label_2b9868:
    // 0x2b9868: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B9868u;
    SET_GPR_U32(ctx, 31, 0x2B9870u);
    ctx->pc = 0x2B986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9868u;
    // 0x2b986c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B9868u, 0x2B9870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9870u;
label_2b9870:
    // 0x2b9870: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B9870u;
    {
        const bool branch_taken_0x2b9870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9870u;
        // 0x2b9874: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9870) {
            ctx->pc = 0x2B98C8u;
            goto label_2b98c8;
        }
    }
    ctx->pc = 0x2B9878u;
    // 0x2b9878: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2B9878u;
    SET_GPR_U32(ctx, 31, 0x2B9880u);
    ctx->pc = 0x2B987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9878u;
    // 0x2b987c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2B9878u, 0x2B9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9880u;
label_2b9880:
    // 0x2b9880: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b9880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9884: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b9884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9888: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b9888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b988c: 0x0  nop
    ctx->pc = 0x2b988cu;
    // NOP
    // 0x2b9890: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9890u;
    {
        const bool branch_taken_0x2b9890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9890u;
        // 0x2b9894: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9890) {
            ctx->pc = 0x2B989Cu;
            goto label_2b989c;
        }
    }
    ctx->pc = 0x2B9898u;
    // 0x2b9898: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2b9898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b989c:
    // 0x2b989c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b989cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2b98a0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b98a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b98a4: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2b98a4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2b98a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b98a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b98ac: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x2b98acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
    // 0x2b98b0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2b98b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2b98b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b98b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b98b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b98b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b98bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b98bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b98c0: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2B98C0u;
    SET_GPR_U32(ctx, 31, 0x2B98C8u);
    ctx->pc = 0x2B98C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B98C0u;
    // 0x2b98c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2B98C0u, 0x2B98C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B98C8u;
label_2b98c8:
    // 0x2b98c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b98cc:
    // 0x2b98cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b98ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b98d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b98d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b98d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b98d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b98d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2b98d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b98dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b98dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b98e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2b98e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b98e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B98E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98E4u;
        // 0x2b98e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B98E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B98ECu;
    // 0x2b98ec: 0x0  nop
    ctx->pc = 0x2b98ecu;
    // NOP
    ctx->pc = 0x2b98f0u;
}
