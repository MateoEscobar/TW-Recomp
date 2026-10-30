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

// Function: sub_00319688
// Address: 0x319688 - 0x3198a0
void sub_00319688_0x319688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319688_0x319688");
#endif

    switch (ctx->pc) {
        case 0x3196c8u: goto label_3196c8;
        case 0x3196e4u: goto label_3196e4;
        case 0x3196f0u: goto label_3196f0;
        case 0x319750u: goto label_319750;
        case 0x319758u: goto label_319758;
        case 0x319770u: goto label_319770;
        case 0x319788u: goto label_319788;
        case 0x3197d8u: goto label_3197d8;
        case 0x3197fcu: goto label_3197fc;
        case 0x31982cu: goto label_31982c;
        case 0x319848u: goto label_319848;
        default: break;
    }

    ctx->pc = 0x319688u;

    // 0x319688: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x319688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x31968c: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x31968cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x319690: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x319690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x319694: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x319694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x319698: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x319698u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31969c: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x31969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x3196a0: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x3196a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x3196a4: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x3196a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x3196a8: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x3196a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x3196ac: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x3196acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x3196b0: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x3196b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x3196b4: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x3196b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x3196b8: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x3196b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x3196bc: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x3196bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x3196c0: 0xc05959e  jal         func_165678
    ctx->pc = 0x3196C0u;
    SET_GPR_U32(ctx, 31, 0x3196C8u);
    ctx->pc = 0x3196C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3196C0u;
    // 0x3196c4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3196C0u, 0x3196C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3196C8u;
label_3196c8:
    // 0x3196c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3196c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3196cc: 0x12400066  beqz        $s2, . + 4 + (0x66 << 2)
    ctx->pc = 0x3196CCu;
    {
        const bool branch_taken_0x3196cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3196D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196CCu;
        // 0x3196d0: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196cc) {
            ctx->pc = 0x319868u;
            goto label_319868;
        }
    }
    ctx->pc = 0x3196D4u;
    // 0x3196d4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3196d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3196d8: 0x8e71489c  lw          $s1, 0x489C($s3)
    ctx->pc = 0x3196d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x3196dc: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x3196DCu;
    SET_GPR_U32(ctx, 31, 0x3196E4u);
    ctx->pc = 0x3196E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3196DCu;
    // 0x3196e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x3196DCu, 0x3196E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3196E4u;
label_3196e4:
    // 0x3196e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3196e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3196e8: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x3196E8u;
    SET_GPR_U32(ctx, 31, 0x3196F0u);
    ctx->pc = 0x3196ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3196E8u;
    // 0x3196ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x3196E8u, 0x3196F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3196F0u;
label_3196f0:
    // 0x3196f0: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x3196f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x3196f4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x3196f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3196f8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3196f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3196fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3196fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x319700: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x319700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x319704: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319704u;
    {
        const bool branch_taken_0x319704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x319704) {
            ctx->pc = 0x319708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319704u;
            // 0x319708: 0x86430092  lh          $v1, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319720u;
            goto label_319720;
        }
    }
    ctx->pc = 0x31970Cu;
    // 0x31970c: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x31970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x319710: 0x8462033a  lh          $v0, 0x33A($v1)
    ctx->pc = 0x319710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 826)));
    // 0x319714: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x319714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x319718: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x319718u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31971c: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x31971cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_319720:
    // 0x319720: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x319720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x319724: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x319724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x319728: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x319728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x31972c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x31972cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x319730: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x319730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x319734: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x319734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319738: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x319738u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31973c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31973cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319740: 0x241e0021  addiu       $fp, $zero, 0x21
    ctx->pc = 0x319740u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x319744: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x319744u;
    {
        const bool branch_taken_0x319744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319744u;
        // 0x319748: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319744) {
            ctx->pc = 0x3197F4u;
            goto label_3197f4;
        }
    }
    ctx->pc = 0x31974Cu;
    // 0x31974c: 0x0  nop
    ctx->pc = 0x31974cu;
    // NOP
label_319750:
    // 0x319750: 0xc105774  jal         func_415DD0
    ctx->pc = 0x319750u;
    SET_GPR_U32(ctx, 31, 0x319758u);
    ctx->pc = 0x319754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319750u;
    // 0x319754: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x319750u, 0x319758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319758u;
label_319758:
    // 0x319758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31975c: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x31975cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x319760: 0x545e0024  bnel        $v0, $fp, . + 4 + (0x24 << 2)
    ctx->pc = 0x319760u;
    {
        const bool branch_taken_0x319760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x319760) {
            ctx->pc = 0x319764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319760u;
            // 0x319764: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3197F4u;
            goto label_3197f4;
        }
    }
    ctx->pc = 0x319768u;
    // 0x319768: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x319768u;
    SET_GPR_U32(ctx, 31, 0x319770u);
    ctx->pc = 0x31976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319768u;
    // 0x31976c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x319768u, 0x319770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319770u;
label_319770:
    // 0x319770: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x319770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319774: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x319774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x319778: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x319778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31977c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31977cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319780: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x319780u;
    SET_GPR_U32(ctx, 31, 0x319788u);
    ctx->pc = 0x319784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319780u;
    // 0x319784: 0x7fa30100  sq          $v1, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x319780u, 0x319788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319788u;
label_319788:
    // 0x319788: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x319788u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x31978c: 0xc6c00038  lwc1        $f0, 0x38($s6)
    ctx->pc = 0x31978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319790: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x319790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x319794: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x319794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319798: 0x0  nop
    ctx->pc = 0x319798u;
    // NOP
    // 0x31979c: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
    ctx->pc = 0x31979Cu;
    {
        const bool branch_taken_0x31979c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31979c) {
            ctx->pc = 0x3197A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31979Cu;
            // 0x3197a0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3197F4u;
            goto label_3197f4;
        }
    }
    ctx->pc = 0x3197A4u;
    // 0x3197a4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x3197a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3197a8: 0x0  nop
    ctx->pc = 0x3197a8u;
    // NOP
    // 0x3197ac: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
    ctx->pc = 0x3197ACu;
    {
        const bool branch_taken_0x3197ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3197ac) {
            ctx->pc = 0x3197B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3197ACu;
            // 0x3197b0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3197F4u;
            goto label_3197f4;
        }
    }
    ctx->pc = 0x3197B4u;
    // 0x3197b4: 0x56e0000b  bnel        $s7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3197B4u;
    {
        const bool branch_taken_0x3197b4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3197b4) {
            ctx->pc = 0x3197B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3197B4u;
            // 0x3197b8: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3197E4u;
            goto label_3197e4;
        }
    }
    ctx->pc = 0x3197BCu;
    // 0x3197bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3197bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3197c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3197c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3197c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3197c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3197c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3197c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3197cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3197ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3197d0: 0xc09381e  jal         func_24E078
    ctx->pc = 0x3197D0u;
    SET_GPR_U32(ctx, 31, 0x3197D8u);
    ctx->pc = 0x3197D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3197D0u;
    // 0x3197d4: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x3197D0u, 0x3197D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3197D8u;
label_3197d8:
    // 0x3197d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3197D8u;
    {
        const bool branch_taken_0x3197d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3197d8) {
            ctx->pc = 0x3197DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3197D8u;
            // 0x3197dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3197F4u;
            goto label_3197f4;
        }
    }
    ctx->pc = 0x3197E0u;
    // 0x3197e0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3197e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_3197e4:
    // 0x3197e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3197e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3197e8: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x3197e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x3197ec: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3197ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3197f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3197f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3197f4:
    // 0x3197f4: 0xc10574c  jal         func_415D30
    ctx->pc = 0x3197F4u;
    SET_GPR_U32(ctx, 31, 0x3197FCu);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x3197F4u, 0x3197FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3197FCu;
label_3197fc:
    // 0x3197fc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x3197fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x319800: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319800u;
    {
        const bool branch_taken_0x319800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319800u;
        // 0x319804: 0x2e620020  sltiu       $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319800) {
            ctx->pc = 0x319810u;
            goto label_319810;
        }
    }
    ctx->pc = 0x319808u;
    // 0x319808: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x319808u;
    {
        const bool branch_taken_0x319808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319808) {
            ctx->pc = 0x319750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319750;
        }
    }
    ctx->pc = 0x319810u;
label_319810:
    // 0x319810: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x319810u;
    {
        const bool branch_taken_0x319810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x319814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319810u;
        // 0x319814: 0x2e620002  sltiu       $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319810) {
            ctx->pc = 0x319868u;
            goto label_319868;
        }
    }
    ctx->pc = 0x319818u;
    // 0x319818: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319818u;
    {
        const bool branch_taken_0x319818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319818u;
        // 0x31981c: 0x2e630007  sltiu       $v1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319818) {
            ctx->pc = 0x319830u;
            goto label_319830;
        }
    }
    ctx->pc = 0x319820u;
    // 0x319820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x319820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319824: 0xc0e1a34  jal         func_3868D0
    ctx->pc = 0x319824u;
    SET_GPR_U32(ctx, 31, 0x31982Cu);
    ctx->pc = 0x319828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319824u;
    // 0x319828: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x319824u, 0x31982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31982Cu;
label_31982c:
    // 0x31982c: 0x2e630007  sltiu       $v1, $s3, 0x7
    ctx->pc = 0x31982cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_319830:
    // 0x319830: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x319830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x319834: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x319834u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x319838: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x319838u;
    {
        const bool branch_taken_0x319838 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319838u;
        // 0x31983c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319838) {
            ctx->pc = 0x319864u;
            goto label_319864;
        }
    }
    ctx->pc = 0x319840u;
    // 0x319840: 0x26c50020  addiu       $a1, $s6, 0x20
    ctx->pc = 0x319840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x319844: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x319844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_319848:
    // 0x319848: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x319848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31984c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31984cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x319850: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x319850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x319854: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x319854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x319858: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x319858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x31985c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31985Cu;
    {
        const bool branch_taken_0x31985c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31985Cu;
        // 0x319860: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31985c) {
            ctx->pc = 0x319848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319848;
        }
    }
    ctx->pc = 0x319864u;
label_319864:
    // 0x319864: 0xa2d3003c  sb          $s3, 0x3C($s6)
    ctx->pc = 0x319864u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 60), (uint8_t)GPR_U32(ctx, 19));
label_319868:
    // 0x319868: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x319868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x31986c: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x31986cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x319870: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x319870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x319874: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x319874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x319878: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x319878u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x31987c: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x31987cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x319880: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x319880u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x319884: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x319884u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x319888: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x319888u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31988c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x31988cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x319890: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x319890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x319894: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x319894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x319898: 0x3e00008  jr          $ra
    ctx->pc = 0x319898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319898u;
        // 0x31989c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3198A0u;
}
