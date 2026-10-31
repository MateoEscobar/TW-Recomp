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

// Function: sub_0041C338
// Address: 0x41c338 - 0x41c4c8
void sub_0041C338_0x41c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C338_0x41c338");
#endif

    switch (ctx->pc) {
        case 0x41c388u: goto label_41c388;
        case 0x41c398u: goto label_41c398;
        case 0x41c3c8u: goto label_41c3c8;
        case 0x41c408u: goto label_41c408;
        case 0x41c41cu: goto label_41c41c;
        case 0x41c424u: goto label_41c424;
        case 0x41c438u: goto label_41c438;
        case 0x41c448u: goto label_41c448;
        case 0x41c47cu: goto label_41c47c;
        default: break;
    }

    ctx->pc = 0x41c338u;

    // 0x41c338: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x41c338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x41c33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41c340: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x41c340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x41c344: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x41c344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x41c348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41c348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c34c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x41c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x41c350: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x41c350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c354: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x41c358: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x41c358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c35c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x41c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x41c360: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x41c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x41c364: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x41c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x41c368: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x41c368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x41c36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41c370: 0x924303ac  lbu         $v1, 0x3AC($s2)
    ctx->pc = 0x41c370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 940)));
    // 0x41c374: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x41C374u;
    {
        const bool branch_taken_0x41c374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x41C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C374u;
        // 0x41c378: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c374) {
            ctx->pc = 0x41C3A0u;
            goto label_41c3a0;
        }
    }
    ctx->pc = 0x41C37Cu;
    // 0x41c37c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c380: 0xc087502  jal         func_21D408
    ctx->pc = 0x41C380u;
    SET_GPR_U32(ctx, 31, 0x41C388u);
    ctx->pc = 0x41C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C380u;
    // 0x41c384: 0x825701b0  lb          $s7, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41C380u, 0x41C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C388u;
label_41c388:
    // 0x41c388: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x41c388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x41c38c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c390: 0xc05b01e  jal         func_16C078
    ctx->pc = 0x41C390u;
    SET_GPR_U32(ctx, 31, 0x41C398u);
    ctx->pc = 0x41C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C390u;
    // 0x41c394: 0x86040030  lh          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C078u, 0x41C390u, 0x41C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C398u;
label_41c398:
    // 0x41c398: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x41C398u;
    {
        const bool branch_taken_0x41c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c398) {
            ctx->pc = 0x41C39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C398u;
            // 0x41c39c: 0x84450092  lh          $a1, 0x92($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C3A8u;
            goto label_41c3a8;
        }
    }
    ctx->pc = 0x41C3A0u;
label_41c3a0:
    // 0x41c3a0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x41C3A0u;
    {
        const bool branch_taken_0x41c3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C3A0u;
        // 0x41c3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c3a0) {
            ctx->pc = 0x41C498u;
            goto label_41c498;
        }
    }
    ctx->pc = 0x41C3A8u;
label_41c3a8:
    // 0x41c3a8: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x41c3a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x41c3ac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x41c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x41c3b0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x41c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x41c3b4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x41c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x41c3b8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x41c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x41c3bc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x41c3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x41c3c0: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x41C3C0u;
    SET_GPR_U32(ctx, 31, 0x41C3C8u);
    ctx->pc = 0x41C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C3C0u;
    // 0x41c3c4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x41C3C0u, 0x41C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C3C8u;
label_41c3c8:
    // 0x41c3c8: 0x3c01451c  lui         $at, 0x451C
    ctx->pc = 0x41c3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17692 << 16));
    // 0x41c3cc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x41c3ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x41c3d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x41c3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41c3d4: 0x0  nop
    ctx->pc = 0x41c3d4u;
    // NOP
    // 0x41c3d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41c3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41c3dc: 0x0  nop
    ctx->pc = 0x41c3dcu;
    // NOP
    // 0x41c3e0: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x41C3E0u;
    {
        const bool branch_taken_0x41c3e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C3E0u;
        // 0x41c3e4: 0x2371821  addu        $v1, $s1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c3e0) {
            ctx->pc = 0x41C490u;
            goto label_41c490;
        }
    }
    ctx->pc = 0x41C3E8u;
    // 0x41c3e8: 0x16600024  bnez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x41C3E8u;
    {
        const bool branch_taken_0x41c3e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C3E8u;
        // 0x41c3ec: 0x26360414  addiu       $s6, $s1, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1044));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c3e8) {
            ctx->pc = 0x41C47Cu;
            goto label_41c47c;
        }
    }
    ctx->pc = 0x41C3F0u;
    // 0x41c3f0: 0x16800023  bnez        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x41C3F0u;
    {
        const bool branch_taken_0x41c3f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C3F0u;
        // 0x41c3f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c3f0) {
            ctx->pc = 0x41C480u;
            goto label_41c480;
        }
    }
    ctx->pc = 0x41C3F8u;
    // 0x41c3f8: 0x26140048  addiu       $s4, $s0, 0x48
    ctx->pc = 0x41c3f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x41c3fc: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x41c3fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x41c400: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41c400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c404: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x41c404u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_41c408:
    // 0x41c408: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x41c408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x41c40c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x41C40Cu;
    {
        const bool branch_taken_0x41c40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C40Cu;
        // 0x41c410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c40c) {
            ctx->pc = 0x41C454u;
            goto label_41c454;
        }
    }
    ctx->pc = 0x41C414u;
    // 0x41c414: 0xc137826  jal         func_4DE098
    ctx->pc = 0x41C414u;
    SET_GPR_U32(ctx, 31, 0x41C41Cu);
    ctx->pc = 0x41C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C414u;
    // 0x41c418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x41C414u, 0x41C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C41Cu;
label_41c41c:
    // 0x41c41c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x41C41Cu;
    SET_GPR_U32(ctx, 31, 0x41C424u);
    ctx->pc = 0x41C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C41Cu;
    // 0x41c420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41C41Cu, 0x41C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C424u;
label_41c424:
    // 0x41c424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41c424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c428: 0x5200fff7  beql        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x41C428u;
    {
        const bool branch_taken_0x41c428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c428) {
            ctx->pc = 0x41C42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C428u;
            // 0x41c42c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41c408;
        }
    }
    ctx->pc = 0x41C430u;
    // 0x41c430: 0xc088edc  jal         func_223B70
    ctx->pc = 0x41C430u;
    SET_GPR_U32(ctx, 31, 0x41C438u);
    ctx->pc = 0x41C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C430u;
    // 0x41c434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x41C430u, 0x41C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C438u;
label_41c438:
    // 0x41c438: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x41C438u;
    {
        const bool branch_taken_0x41c438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c438) {
            ctx->pc = 0x41C43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41C438u;
            // 0x41c43c: 0x2413005c  addiu       $s3, $zero, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41C454u;
            goto label_41c454;
        }
    }
    ctx->pc = 0x41C440u;
    // 0x41c440: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x41C440u;
    SET_GPR_U32(ctx, 31, 0x41C448u);
    ctx->pc = 0x41C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C440u;
    // 0x41c444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x41C440u, 0x41C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C448u;
label_41c448:
    // 0x41c448: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x41C448u;
    {
        const bool branch_taken_0x41c448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C448u;
        // 0x41c44c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c448) {
            ctx->pc = 0x41C408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41c408;
        }
    }
    ctx->pc = 0x41C450u;
    // 0x41c450: 0x2413005c  addiu       $s3, $zero, 0x5C
    ctx->pc = 0x41c450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_41c454:
    // 0x41c454: 0x8ea9bd30  lw          $t1, -0x42D0($s5)
    ctx->pc = 0x41c454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950192)));
    // 0x41c458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c45c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41c45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41c460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41c460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41c464: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41c464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41c468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c46c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41c46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c470: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x41c470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41c474: 0xc088178  jal         func_2205E0
    ctx->pc = 0x41C474u;
    SET_GPR_U32(ctx, 31, 0x41C47Cu);
    ctx->pc = 0x41C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C474u;
    // 0x41c478: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x41C474u, 0x41C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C47Cu;
label_41c47c:
    // 0x41c47c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c480:
    // 0x41c480: 0x2d71821  addu        $v1, $s6, $s7
    ctx->pc = 0x41c480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x41c484: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x41c484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x41c488: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41C488u;
    {
        const bool branch_taken_0x41c488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C488u;
        // 0x41c48c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c488) {
            ctx->pc = 0x41C498u;
            goto label_41c498;
        }
    }
    ctx->pc = 0x41C490u;
label_41c490:
    // 0x41c490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41c490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c494: 0xa0600414  sb          $zero, 0x414($v1)
    ctx->pc = 0x41c494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1044), (uint8_t)GPR_U32(ctx, 0));
label_41c498:
    // 0x41c498: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x41c498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41c49c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x41c49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41c4a0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x41c4a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41c4a4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x41c4a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41c4a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x41c4a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41c4ac: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x41c4acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41c4b0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x41c4b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41c4b4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x41c4b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41c4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x41C4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C4BCu;
        // 0x41c4c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C4C4u;
    // 0x41c4c4: 0x0  nop
    ctx->pc = 0x41c4c4u;
    // NOP
    ctx->pc = 0x41c4c8u;
}
