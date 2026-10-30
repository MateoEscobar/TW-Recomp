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

// Function: sub_001017A0
// Address: 0x1017a0 - 0x1018b8
void sub_001017A0_0x1017a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001017A0_0x1017a0");
#endif

    switch (ctx->pc) {
        case 0x1017d0u: goto label_1017d0;
        case 0x1017e4u: goto label_1017e4;
        case 0x1017f8u: goto label_1017f8;
        case 0x101818u: goto label_101818;
        case 0x10181cu: goto label_10181c;
        case 0x101880u: goto label_101880;
        default: break;
    }

    ctx->pc = 0x1017a0u;

    // 0x1017a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1017a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1017a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1017a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1017a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1017a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1017ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1017acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1017b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1017b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1017b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1017b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1017bc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1017bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1017c0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1017c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1017c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1017c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1017c8: 0xc040680  jal         func_101A00
    ctx->pc = 0x1017C8u;
    SET_GPR_U32(ctx, 31, 0x1017D0u);
    ctx->pc = 0x1017CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017C8u;
    // 0x1017cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x1017C8u, 0x1017D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017D0u;
label_1017d0:
    // 0x1017d0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1017d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1017d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1017d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1017d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1017d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017dc: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x1017DCu;
    SET_GPR_U32(ctx, 31, 0x1017E4u);
    ctx->pc = 0x1017E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017DCu;
    // 0x1017e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x1017DCu, 0x1017E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017E4u;
label_1017e4:
    // 0x1017e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1017e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017e8: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1017E8u;
    {
        const bool branch_taken_0x1017e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1017ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017E8u;
        // 0x1017ec: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1017e8) {
            ctx->pc = 0x10188Cu;
            goto label_10188c;
        }
    }
    ctx->pc = 0x1017F0u;
    // 0x1017f0: 0xc040494  jal         func_101250
    ctx->pc = 0x1017F0u;
    SET_GPR_U32(ctx, 31, 0x1017F8u);
    ctx->pc = 0x1017F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1017F0u;
    // 0x1017f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x1017F0u, 0x1017F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1017F8u;
label_1017f8:
    // 0x1017f8: 0x9604001a  lhu         $a0, 0x1A($s0)
    ctx->pc = 0x1017f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1017fc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1017fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x101800: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x101800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x101804: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x101804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x101808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x101808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10180c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x10180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x101810: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x101810u;
    {
        const bool branch_taken_0x101810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101810u;
        // 0x101814: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101810) {
            ctx->pc = 0x10181Cu;
            goto label_10181c;
        }
    }
    ctx->pc = 0x101818u;
label_101818:
    // 0x101818: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x101818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_10181c:
    // 0x10181c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10181cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101820: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x101820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x101824: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x101824u;
    {
        const bool branch_taken_0x101824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101824u;
        // 0x101828: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101824) {
            ctx->pc = 0x101874u;
            goto label_101874;
        }
    }
    ctx->pc = 0x10182Cu;
    // 0x10182c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x10182cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x101830: 0x14460008  bne         $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x101830u;
    {
        const bool branch_taken_0x101830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x101830) {
            ctx->pc = 0x101854u;
            goto label_101854;
        }
    }
    ctx->pc = 0x101838u;
    // 0x101838: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x101838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10183c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x101840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101844: 0x0  nop
    ctx->pc = 0x101844u;
    // NOP
    // 0x101848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x101848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10184c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x10184Cu;
    {
        const bool branch_taken_0x10184c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10184Cu;
        // 0x101850: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10184c) {
            ctx->pc = 0x101818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101818;
        }
    }
    ctx->pc = 0x101854u;
label_101854:
    // 0x101854: 0x5445fff1  bnel        $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x101854u;
    {
        const bool branch_taken_0x101854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x101854) {
            ctx->pc = 0x101858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101854u;
            // 0x101858: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10181Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10181c;
        }
    }
    ctx->pc = 0x10185Cu;
    // 0x10185c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x10185cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x101860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x101864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101868: 0x0  nop
    ctx->pc = 0x101868u;
    // NOP
    // 0x10186c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10186cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x101870: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x101870u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_101874:
    // 0x101874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101878: 0xc04128e  jal         func_104A38
    ctx->pc = 0x101878u;
    SET_GPR_U32(ctx, 31, 0x101880u);
    ctx->pc = 0x10187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101878u;
    // 0x10187c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x101878u, 0x101880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101880u;
label_101880:
    // 0x101880: 0x4614a840  add.s       $f1, $f21, $f20
    ctx->pc = 0x101880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x101884: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x101884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x101888: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x101888u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10188c:
    // 0x10188c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10188cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101890: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x101890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101894: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101898: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x101898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10189c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10189cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1018a0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1018a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1018a4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1018a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1018a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1018A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1018ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018A8u;
        // 0x1018ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1018A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1018B0u;
    // 0x1018b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1018b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1018b4: 0x0  nop
    ctx->pc = 0x1018b4u;
    // NOP
    ctx->pc = 0x1018b8u;
}
