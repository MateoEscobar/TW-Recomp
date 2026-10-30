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

// Function: sub_004177D8
// Address: 0x4177d8 - 0x417910
void sub_004177D8_0x4177d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004177D8_0x4177d8");
#endif

    switch (ctx->pc) {
        case 0x417830u: goto label_417830;
        case 0x417838u: goto label_417838;
        case 0x41786cu: goto label_41786c;
        case 0x417888u: goto label_417888;
        case 0x417898u: goto label_417898;
        case 0x4178a4u: goto label_4178a4;
        case 0x4178c4u: goto label_4178c4;
        default: break;
    }

    ctx->pc = 0x4177d8u;

    // 0x4177d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4177d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4177dc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x4177dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4177e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4177e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4177e4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4177e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4177e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4177e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4177ec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4177ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4177f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4177f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4177f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4177f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4177f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4177f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4177fc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4177fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x417800: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x417800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417804: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x417804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x417808: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x417808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41780c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x41780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x417810: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x417810u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417814: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x417814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x417818: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x417818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x41781c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x41781cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x417820: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x417820u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417824: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x417824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x417828: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x417828u;
    {
        const bool branch_taken_0x417828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417828u;
        // 0x41782c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417828) {
            ctx->pc = 0x4178BCu;
            goto label_4178bc;
        }
    }
    ctx->pc = 0x417830u;
label_417830:
    // 0x417830: 0xc105774  jal         func_415DD0
    ctx->pc = 0x417830u;
    SET_GPR_U32(ctx, 31, 0x417838u);
    ctx->pc = 0x417834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417830u;
    // 0x417834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x417830u, 0x417838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417838u;
label_417838:
    // 0x417838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41783c: 0x5215001f  beql        $s0, $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x41783Cu;
    {
        const bool branch_taken_0x41783c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x41783c) {
            ctx->pc = 0x417840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41783Cu;
            // 0x417840: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4178BCu;
            goto label_4178bc;
        }
    }
    ctx->pc = 0x417844u;
    // 0x417844: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x417844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x417848: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x417848u;
    {
        const bool branch_taken_0x417848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417848) {
            ctx->pc = 0x41784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417848u;
            // 0x41784c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4178BCu;
            goto label_4178bc;
        }
    }
    ctx->pc = 0x417850u;
    // 0x417850: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x417850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x417854: 0x54560019  bnel        $v0, $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x417854u;
    {
        const bool branch_taken_0x417854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x417854) {
            ctx->pc = 0x417858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417854u;
            // 0x417858: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4178BCu;
            goto label_4178bc;
        }
    }
    ctx->pc = 0x41785Cu;
    // 0x41785c: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x41785Cu;
    {
        const bool branch_taken_0x41785c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x41785c) {
            ctx->pc = 0x417890u;
            goto label_417890;
        }
    }
    ctx->pc = 0x417864u;
    // 0x417864: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x417864u;
    SET_GPR_U32(ctx, 31, 0x41786Cu);
    ctx->pc = 0x417868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417864u;
    // 0x417868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x417864u, 0x41786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41786Cu;
label_41786c:
    // 0x41786c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41786cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x417870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x417874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x417878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41787c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41787cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417880: 0xc09381e  jal         func_24E078
    ctx->pc = 0x417880u;
    SET_GPR_U32(ctx, 31, 0x417888u);
    ctx->pc = 0x417884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417880u;
    // 0x417884: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x417880u, 0x417888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417888u;
label_417888:
    // 0x417888: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x417888u;
    {
        const bool branch_taken_0x417888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417888) {
            ctx->pc = 0x41788Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417888u;
            // 0x41788c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4178BCu;
            goto label_4178bc;
        }
    }
    ctx->pc = 0x417890u;
label_417890:
    // 0x417890: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x417890u;
    SET_GPR_U32(ctx, 31, 0x417898u);
    ctx->pc = 0x417894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417890u;
    // 0x417894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x417890u, 0x417898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417898u;
label_417898:
    // 0x417898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x417898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41789c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x41789Cu;
    SET_GPR_U32(ctx, 31, 0x4178A4u);
    ctx->pc = 0x4178A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41789Cu;
    // 0x4178a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x41789Cu, 0x4178A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4178A4u;
label_4178a4:
    // 0x4178a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4178a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4178a8: 0x0  nop
    ctx->pc = 0x4178a8u;
    // NOP
    // 0x4178ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4178ACu;
    {
        const bool branch_taken_0x4178ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4178B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4178ACu;
        // 0x4178b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4178ac) {
            ctx->pc = 0x4178BCu;
            goto label_4178bc;
        }
    }
    ctx->pc = 0x4178B4u;
    // 0x4178b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4178b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4178b8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4178b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4178bc:
    // 0x4178bc: 0xc10574c  jal         func_415D30
    ctx->pc = 0x4178BCu;
    SET_GPR_U32(ctx, 31, 0x4178C4u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x4178BCu, 0x4178C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4178C4u;
label_4178c4:
    // 0x4178c4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4178c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4178c8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x4178C8u;
    {
        const bool branch_taken_0x4178c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4178c8) {
            ctx->pc = 0x417830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417830;
        }
    }
    ctx->pc = 0x4178D0u;
    // 0x4178d0: 0x56e00001  bnel        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4178D0u;
    {
        const bool branch_taken_0x4178d0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x4178d0) {
            ctx->pc = 0x4178D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4178D0u;
            // 0x4178d4: 0xe6f40000  swc1        $f20, 0x0($s7) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4178D8u;
            goto label_4178d8;
        }
    }
    ctx->pc = 0x4178D8u;
label_4178d8:
    // 0x4178d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4178d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4178dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4178dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4178e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4178e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4178e4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4178e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4178e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4178e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4178ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4178ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4178f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4178f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4178f4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4178f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4178f8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4178f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4178fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4178fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417900: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x417900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x417904: 0x3e00008  jr          $ra
    ctx->pc = 0x417904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417904u;
        // 0x417908: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41790Cu;
    // 0x41790c: 0x0  nop
    ctx->pc = 0x41790cu;
    // NOP
    ctx->pc = 0x417910u;
}
