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

// Function: sub_00295538
// Address: 0x295538 - 0x2956d0
void sub_00295538_0x295538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295538_0x295538");
#endif

    switch (ctx->pc) {
        case 0x295584u: goto label_295584;
        case 0x295590u: goto label_295590;
        case 0x295598u: goto label_295598;
        case 0x2955c8u: goto label_2955c8;
        case 0x2955d4u: goto label_2955d4;
        case 0x295608u: goto label_295608;
        case 0x295614u: goto label_295614;
        default: break;
    }

    ctx->pc = 0x295538u;

    // 0x295538: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x295538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x29553c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29553cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295540: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x295540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x295544: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x295544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x295548: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x295548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29554c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x295550: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x295550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x295554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x295554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295558: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x295558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x29555c: 0x267e01b4  addiu       $fp, $s3, 0x1B4
    ctx->pc = 0x29555cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x295560: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x295560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x295564: 0x267701b0  addiu       $s7, $s3, 0x1B0
    ctx->pc = 0x295564u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 432));
    // 0x295568: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x295568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x29556c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x29556cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x295570: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x295570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x295574: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x295574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x295578: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x295578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29557c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x29557Cu;
    SET_GPR_U32(ctx, 31, 0x295584u);
    ctx->pc = 0x295580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29557Cu;
    // 0x295580: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x29557Cu, 0x295584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295584u;
label_295584:
    // 0x295584: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x295584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x295588: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x295588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x29558c: 0x0  nop
    ctx->pc = 0x29558cu;
    // NOP
label_295590:
    // 0x295590: 0xc0e409a  jal         func_390268
    ctx->pc = 0x295590u;
    SET_GPR_U32(ctx, 31, 0x295598u);
    ctx->pc = 0x295594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295590u;
    // 0x295594: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x295590u, 0x295598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295598u;
label_295598:
    // 0x295598: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x295598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29559c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x29559Cu;
    {
        const bool branch_taken_0x29559c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29559Cu;
        // 0x2955a0: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29559c) {
            ctx->pc = 0x295678u;
            goto label_295678;
        }
    }
    ctx->pc = 0x2955A4u;
    // 0x2955a4: 0x92620271  lbu         $v0, 0x271($s3)
    ctx->pc = 0x2955a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x2955a8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2955a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2955ac: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2955acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2955b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2955b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2955b4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2955B4u;
    {
        const bool branch_taken_0x2955b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955B4u;
        // 0x2955b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955b4) {
            ctx->pc = 0x295640u;
            goto label_295640;
        }
    }
    ctx->pc = 0x2955BCu;
    // 0x2955bc: 0x24760090  addiu       $s6, $v1, 0x90
    ctx->pc = 0x2955bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x2955c0: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x2955c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2955c4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2955c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2955c8:
    // 0x2955c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2955c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955cc: 0xc0a584c  jal         func_296130
    ctx->pc = 0x2955CCu;
    SET_GPR_U32(ctx, 31, 0x2955D4u);
    ctx->pc = 0x2955D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2955CCu;
    // 0x2955d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296130u, 0x2955CCu, 0x2955D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2955D4u;
label_2955d4:
    // 0x2955d4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2955D4u;
    {
        const bool branch_taken_0x2955d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955D4u;
        // 0x2955d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955d4) {
            ctx->pc = 0x29562Cu;
            goto label_29562c;
        }
    }
    ctx->pc = 0x2955DCu;
    // 0x2955dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2955dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2955e0: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2955E0u;
    {
        const bool branch_taken_0x2955e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2955E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955E0u;
        // 0x2955e4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955e0) {
            ctx->pc = 0x29562Cu;
            goto label_29562c;
        }
    }
    ctx->pc = 0x2955E8u;
    // 0x2955e8: 0x86d00002  lh          $s0, 0x2($s6)
    ctx->pc = 0x2955e8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x2955ec: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2955ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2955f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2955f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955f4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2955f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2955f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2955f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2955fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2955fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x295600: 0xc0a5904  jal         func_296410
    ctx->pc = 0x295600u;
    SET_GPR_U32(ctx, 31, 0x295608u);
    ctx->pc = 0x295604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295600u;
    // 0x295604: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x295600u, 0x295608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295608u;
label_295608:
    // 0x295608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29560c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x29560Cu;
    SET_GPR_U32(ctx, 31, 0x295614u);
    ctx->pc = 0x295610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29560Cu;
    // 0x295610: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29560Cu, 0x295614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295614u;
label_295614:
    // 0x295614: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x295614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295618: 0x0  nop
    ctx->pc = 0x295618u;
    // NOP
    // 0x29561c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x29561Cu;
    {
        const bool branch_taken_0x29561c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29561c) {
            ctx->pc = 0x295620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29561Cu;
            // 0x295620: 0x92620271  lbu         $v0, 0x271($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295630u;
            goto label_295630;
        }
    }
    ctx->pc = 0x295624u;
    // 0x295624: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x295624u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x295628: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x295628u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29562c:
    // 0x29562c: 0x92620271  lbu         $v0, 0x271($s3)
    ctx->pc = 0x29562cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
label_295630:
    // 0x295630: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x295630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x295634: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x295634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295638: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x295638u;
    {
        const bool branch_taken_0x295638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295638u;
        // 0x29563c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295638) {
            ctx->pc = 0x2955C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2955c8;
        }
    }
    ctx->pc = 0x295640u;
label_295640:
    // 0x295640: 0x6a0000d  bltz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x295640u;
    {
        const bool branch_taken_0x295640 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x295644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295640u;
        // 0x295644: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295640) {
            ctx->pc = 0x295678u;
            goto label_295678;
        }
    }
    ctx->pc = 0x295648u;
    // 0x295648: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x295648u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
    // 0x29564c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x29564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x295650: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x295650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295654: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x295654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x295658: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x295658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x29565c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295660: 0x92620272  lbu         $v0, 0x272($s3)
    ctx->pc = 0x295660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 626)));
    // 0x295664: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x295664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x295668: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x295668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29566c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29566cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x295670: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295670u;
    {
        const bool branch_taken_0x295670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295670u;
        // 0x295674: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295670) {
            ctx->pc = 0x295698u;
            goto label_295698;
        }
    }
    ctx->pc = 0x295678u;
label_295678:
    // 0x295678: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x295678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x29567c: 0x27de000c  addiu       $fp, $fp, 0xC
    ctx->pc = 0x29567cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x295680: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x295680u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x295684: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x295684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x295688: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x295688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x29568c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x29568Cu;
    {
        const bool branch_taken_0x29568c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29568Cu;
        // 0x295690: 0xafa40044  sw          $a0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29568c) {
            ctx->pc = 0x295590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295590;
        }
    }
    ctx->pc = 0x295694u;
    // 0x295694: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x295694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_295698:
    // 0x295698: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x295698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29569c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x29569cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2956a0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2956a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2956a4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2956a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2956a8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2956a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2956ac: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2956acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2956b0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2956b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2956b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2956b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2956b8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2956b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2956bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2956bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2956c0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2956c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2956c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2956C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2956C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956C4u;
        // 0x2956c8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2956C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2956CCu;
    // 0x2956cc: 0x0  nop
    ctx->pc = 0x2956ccu;
    // NOP
    ctx->pc = 0x2956d0u;
}
