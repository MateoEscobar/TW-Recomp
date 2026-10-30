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

// Function: sub_002F0318
// Address: 0x2f0318 - 0x2f04b8
void sub_002F0318_0x2f0318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0318_0x2f0318");
#endif

    switch (ctx->pc) {
        case 0x2f0364u: goto label_2f0364;
        case 0x2f0378u: goto label_2f0378;
        case 0x2f038cu: goto label_2f038c;
        case 0x2f0398u: goto label_2f0398;
        case 0x2f03a0u: goto label_2f03a0;
        case 0x2f03b4u: goto label_2f03b4;
        case 0x2f03c4u: goto label_2f03c4;
        case 0x2f03e4u: goto label_2f03e4;
        case 0x2f040cu: goto label_2f040c;
        case 0x2f0428u: goto label_2f0428;
        case 0x2f0444u: goto label_2f0444;
        case 0x2f0460u: goto label_2f0460;
        default: break;
    }

    ctx->pc = 0x2f0318u;

    // 0x2f0318: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f0318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f031c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2f031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2f0320: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2f0320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2f0324: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2f0324u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x2f0328: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f0328u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f032c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2f032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2f0330: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2f0330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2f0334: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2f0334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2f0338: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f0338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f033c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2f033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2f0340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f0344: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2f0344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2f0348: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x2f0348u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2f034c: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x2f034cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x2f0350: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2f0350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f0354: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0354u;
    {
        const bool branch_taken_0x2f0354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0354) {
            ctx->pc = 0x2F0358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0354u;
            // 0x2f0358: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F036Cu;
            goto label_2f036c;
        }
    }
    ctx->pc = 0x2F035Cu;
    // 0x2f035c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F035Cu;
    SET_GPR_U32(ctx, 31, 0x2F0364u);
    ctx->pc = 0x2F0360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F035Cu;
    // 0x2f0360: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F035Cu, 0x2F0364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0364u;
label_2f0364:
    // 0x2f0364: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2F0364u;
    {
        const bool branch_taken_0x2f0364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0364u;
        // 0x2f0368: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0364) {
            ctx->pc = 0x2F0490u;
            goto label_2f0490;
        }
    }
    ctx->pc = 0x2F036Cu;
label_2f036c:
    // 0x2f036c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f0370: 0xc0cd526  jal         func_335498
    ctx->pc = 0x2F0370u;
    SET_GPR_U32(ctx, 31, 0x2F0378u);
    ctx->pc = 0x2F0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0370u;
    // 0x2f0374: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2F0370u, 0x2F0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0378u;
label_2f0378:
    // 0x2f0378: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f0378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f037c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x2f037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x2f0380: 0x24420228  addiu       $v0, $v0, 0x228
    ctx->pc = 0x2f0380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
    // 0x2f0384: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F0384u;
    SET_GPR_U32(ctx, 31, 0x2F038Cu);
    ctx->pc = 0x2F0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0384u;
    // 0x2f0388: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F0384u, 0x2F038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F038Cu;
label_2f038c:
    // 0x2f038c: 0x26a4003c  addiu       $a0, $s5, 0x3C
    ctx->pc = 0x2f038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
    // 0x2f0390: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2F0390u;
    SET_GPR_U32(ctx, 31, 0x2F0398u);
    ctx->pc = 0x2F0394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0390u;
    // 0x2f0394: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2F0390u, 0x2F0398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0398u;
label_2f0398:
    // 0x2f0398: 0xc105e98  jal         func_417A60
    ctx->pc = 0x2F0398u;
    SET_GPR_U32(ctx, 31, 0x2F03A0u);
    ctx->pc = 0x2F039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0398u;
    // 0x2f039c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2F0398u, 0x2F03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03A0u;
label_2f03a0:
    // 0x2f03a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f03a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f03a4: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2F03A4u;
    {
        const bool branch_taken_0x2f03a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03A4u;
        // 0x2f03a8: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03a4) {
            ctx->pc = 0x2F0488u;
            goto label_2f0488;
        }
    }
    ctx->pc = 0x2F03ACu;
    // 0x2f03ac: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F03ACu;
    SET_GPR_U32(ctx, 31, 0x2F03B4u);
    ctx->pc = 0x2F03B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03ACu;
    // 0x2f03b0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F03ACu, 0x2F03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03B4u;
label_2f03b4:
    // 0x2f03b4: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x2f03b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x2f03b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f03b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f03bc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F03BCu;
    SET_GPR_U32(ctx, 31, 0x2F03C4u);
    ctx->pc = 0x2F03C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03BCu;
    // 0x2f03c0: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F03BCu, 0x2F03C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03C4u;
label_2f03c4:
    // 0x2f03c4: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x2F03C4u;
    {
        const bool branch_taken_0x2f03c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03C4u;
        // 0x2f03c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03c4) {
            ctx->pc = 0x2F0488u;
            goto label_2f0488;
        }
    }
    ctx->pc = 0x2F03CCu;
    // 0x2f03cc: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2F03CCu;
    {
        const bool branch_taken_0x2f03cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F03CCu;
        // 0x2f03d0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f03cc) {
            ctx->pc = 0x2F048Cu;
            goto label_2f048c;
        }
    }
    ctx->pc = 0x2F03D4u;
    // 0x2f03d4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2f03d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2f03d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f03d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f03dc: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2F03DCu;
    SET_GPR_U32(ctx, 31, 0x2F03E4u);
    ctx->pc = 0x2F03E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F03DCu;
    // 0x2f03e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2F03DCu, 0x2F03E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F03E4u;
label_2f03e4:
    // 0x2f03e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f03e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f03e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f03e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f03ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f03ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f03f0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f03f4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f03f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2f03f8: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x2f03f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2f03fc: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2f03fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2f0400: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f0400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f0404: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2F0404u;
    SET_GPR_U32(ctx, 31, 0x2F040Cu);
    ctx->pc = 0x2F0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0404u;
    // 0x2f0408: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F0404u, 0x2F040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F040Cu;
label_2f040c:
    // 0x2f040c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2f040cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0410: 0x0  nop
    ctx->pc = 0x2f0410u;
    // NOP
    // 0x2f0414: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0414u;
    {
        const bool branch_taken_0x2f0414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0414) {
            ctx->pc = 0x2F0418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0414u;
            // 0x2f0418: 0x86240092  lh          $a0, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0430u;
            goto label_2f0430;
        }
    }
    ctx->pc = 0x2F041Cu;
    // 0x2f041c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2f041cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f0420: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2F0420u;
    SET_GPR_U32(ctx, 31, 0x2F0428u);
    ctx->pc = 0x2F0424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0420u;
    // 0x2f0424: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F0420u, 0x2F0428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0428u;
label_2f0428:
    // 0x2f0428: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x2f0428u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f042c: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2f042cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2f0430:
    // 0x2f0430: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f0430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0434: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f0434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0438: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f0438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f043c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2F043Cu;
    SET_GPR_U32(ctx, 31, 0x2F0444u);
    ctx->pc = 0x2F0440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F043Cu;
    // 0x2f0440: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F043Cu, 0x2F0444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0444u;
label_2f0444:
    // 0x2f0444: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2f0444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0448: 0x0  nop
    ctx->pc = 0x2f0448u;
    // NOP
    // 0x2f044c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F044Cu;
    {
        const bool branch_taken_0x2f044c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f044c) {
            ctx->pc = 0x2F0464u;
            goto label_2f0464;
        }
    }
    ctx->pc = 0x2F0454u;
    // 0x2f0454: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2f0454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f0458: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2F0458u;
    SET_GPR_U32(ctx, 31, 0x2F0460u);
    ctx->pc = 0x2F045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0458u;
    // 0x2f045c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2F0458u, 0x2F0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0460u;
label_2f0460:
    // 0x2f0460: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2f0460u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f0464:
    // 0x2f0464: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0464u;
    {
        const bool branch_taken_0x2f0464 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0464) {
            ctx->pc = 0x2F047Cu;
            goto label_2f047c;
        }
    }
    ctx->pc = 0x2F046Cu;
    // 0x2f046c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F046Cu;
    {
        const bool branch_taken_0x2f046c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F046Cu;
        // 0x2f0470: 0x234980a  movz        $s3, $s1, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f046c) {
            ctx->pc = 0x2F0488u;
            goto label_2f0488;
        }
    }
    ctx->pc = 0x2F0474u;
    // 0x2f0474: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0474u;
    {
        const bool branch_taken_0x2f0474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0474u;
        // 0x2f0478: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0474) {
            ctx->pc = 0x2F0488u;
            goto label_2f0488;
        }
    }
    ctx->pc = 0x2F047Cu;
label_2f047c:
    // 0x2f047c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F047Cu;
    {
        const bool branch_taken_0x2f047c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F047Cu;
        // 0x2f0480: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f047c) {
            ctx->pc = 0x2F048Cu;
            goto label_2f048c;
        }
    }
    ctx->pc = 0x2F0484u;
    // 0x2f0484: 0x234980a  movz        $s3, $s1, $s4
    ctx->pc = 0x2f0484u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
label_2f0488:
    // 0x2f0488: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f0488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f048c:
    // 0x2f048c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2f048cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f0490:
    // 0x2f0490: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2f0490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f0494: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2f0494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f0498: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2f0498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f049c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f049cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f04a0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2f04a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f04a4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2f04a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f04a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f04a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f04ac: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2f04acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f04b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F04B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04B0u;
        // 0x2f04b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F04B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F04B8u;
}
