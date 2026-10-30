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

// Function: sub_002FC420
// Address: 0x2fc420 - 0x2fc560
void sub_002FC420_0x2fc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC420_0x2fc420");
#endif

    switch (ctx->pc) {
        case 0x2fc44cu: goto label_2fc44c;
        case 0x2fc478u: goto label_2fc478;
        case 0x2fc4fcu: goto label_2fc4fc;
        case 0x2fc534u: goto label_2fc534;
        default: break;
    }

    ctx->pc = 0x2fc420u;

    // 0x2fc420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fc424: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2fc424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2fc428: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2fc428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2fc42c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fc430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fc434: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2fc434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2fc438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc43c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc440: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2fc440u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fc444: 0xc088edc  jal         func_223B70
    ctx->pc = 0x2FC444u;
    SET_GPR_U32(ctx, 31, 0x2FC44Cu);
    ctx->pc = 0x2FC448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC444u;
    // 0x2fc448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2FC444u, 0x2FC44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC44Cu;
label_2fc44c:
    // 0x2fc44c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fc44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc450: 0x1043003a  beq         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2FC450u;
    {
        const bool branch_taken_0x2fc450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC450u;
        // 0x2fc454: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc450) {
            ctx->pc = 0x2FC53Cu;
            goto label_2fc53c;
        }
    }
    ctx->pc = 0x2FC458u;
    // 0x2fc458: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2fc458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2fc45c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2fc45cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2fc460: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2fc460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2fc464: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x2fc464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2fc468: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2fc468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2fc46c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fc46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc470: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2FC470u;
    SET_GPR_U32(ctx, 31, 0x2FC478u);
    ctx->pc = 0x2FC474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC470u;
    // 0x2fc474: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2FC470u, 0x2FC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC478u;
label_2fc478:
    // 0x2fc478: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2fc478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2fc47c: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2fc47cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x2fc480: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc484: 0x0  nop
    ctx->pc = 0x2fc484u;
    // NOP
    // 0x2fc488: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fc488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc48c: 0x0  nop
    ctx->pc = 0x2fc48cu;
    // NOP
    // 0x2fc490: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x2FC490u;
    {
        const bool branch_taken_0x2fc490 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC490u;
        // 0x2fc494: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc490) {
            ctx->pc = 0x2FC540u;
            goto label_2fc540;
        }
    }
    ctx->pc = 0x2FC498u;
    // 0x2fc498: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2fc498u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2fc49c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2fc49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2fc4a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc4a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2fc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2fc4a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fc4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc4ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2fc4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2fc4b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2fc4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc4b4: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2fc4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2fc4b8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2fc4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2fc4bc: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2fc4bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2fc4c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2fc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2fc4c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2fc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2fc4c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2fc4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc4cc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2fc4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2fc4d0: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2fc4d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2fc4d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2fc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2fc4d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2fc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2fc4dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2fc4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc4e0: 0xa200004e  sb          $zero, 0x4E($s0)
    ctx->pc = 0x2fc4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc4e4: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x2fc4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc4e8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2fc4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2fc4ec: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2fc4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2fc4f0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2fc4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2fc4f4: 0xc0a242a  jal         func_2890A8
    ctx->pc = 0x2FC4F4u;
    SET_GPR_U32(ctx, 31, 0x2FC4FCu);
    ctx->pc = 0x2FC4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC4F4u;
    // 0x2fc4f8: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2890A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2890A8u, 0x2FC4F4u, 0x2FC4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC4FCu;
label_2fc4fc:
    // 0x2fc4fc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x2fc4fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fc500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fc500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc504: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2fc504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc508: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2fc508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc50c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc510: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fc510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc514: 0x7c620090  sq          $v0, 0x90($v1)
    ctx->pc = 0x2fc514u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), GPR_VEC(ctx, 2));
    // 0x2fc518: 0xe4600118  swc1        $f0, 0x118($v1)
    ctx->pc = 0x2fc518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
    // 0x2fc51c: 0xe461009c  swc1        $f1, 0x9C($v1)
    ctx->pc = 0x2fc51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2fc520: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fc520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc524: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2fc524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc528: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fc528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc52c: 0xc0a6a30  jal         func_29A8C0
    ctx->pc = 0x2FC52Cu;
    SET_GPR_U32(ctx, 31, 0x2FC534u);
    ctx->pc = 0x2FC530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC52Cu;
    // 0x2fc530: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A8C0u, 0x2FC52Cu, 0x2FC534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC534u;
label_2fc534:
    // 0x2fc534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC534u;
    {
        const bool branch_taken_0x2fc534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC534u;
        // 0x2fc538: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc534) {
            ctx->pc = 0x2FC544u;
            goto label_2fc544;
        }
    }
    ctx->pc = 0x2FC53Cu;
label_2fc53c:
    // 0x2fc53c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fc53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fc540:
    // 0x2fc540: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2fc540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fc544:
    // 0x2fc544: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2fc544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fc548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fc548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc54c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2fc54cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc554: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC554u;
        // 0x2fc558: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC55Cu;
    // 0x2fc55c: 0x0  nop
    ctx->pc = 0x2fc55cu;
    // NOP
    ctx->pc = 0x2fc560u;
}
