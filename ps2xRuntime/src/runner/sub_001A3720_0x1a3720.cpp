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

// Function: sub_001A3720
// Address: 0x1a3720 - 0x1a38d8
void sub_001A3720_0x1a3720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3720_0x1a3720");
#endif

    switch (ctx->pc) {
        case 0x1a37b0u: goto label_1a37b0;
        case 0x1a3824u: goto label_1a3824;
        case 0x1a388cu: goto label_1a388c;
        default: break;
    }

    ctx->pc = 0x1a3720u;

    // 0x1a3720: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a3720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a3724: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1a3724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3728: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1a3728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1a372c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1a372cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1a3730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3734: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1a3734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1a3738: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1a3738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1a373c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1a373cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x1a3740: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1a3740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1a3744: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a3744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3748: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a3748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a374c: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x1a374cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a3750: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1a3750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1a3754: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a3754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3758: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a3758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a375c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1a375cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3760: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x1a3760u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1a3764: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1a3764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a3768: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1a3768u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1a376c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1a376cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1a3770: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a3770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1a3774: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a3774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a3778: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a3778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a377c: 0xe62d0348  swc1        $f13, 0x348($s1)
    ctx->pc = 0x1a377cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
    // 0x1a3780: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a3780u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a3784: 0xe62e0340  swc1        $f14, 0x340($s1)
    ctx->pc = 0x1a3784u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
    // 0x1a3788: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x1a3788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x1a378c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a378cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a3790: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a3790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3794: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1a3794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1a3798: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1a3798u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1a379c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a379cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a37a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a37a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37a4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a37a8: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1A37A8u;
    SET_GPR_U32(ctx, 31, 0x1A37B0u);
    ctx->pc = 0x1A37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A37A8u;
    // 0x1a37ac: 0x4614a5c0  add.s       $f23, $f20, $f20 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1A37A8u, 0x1A37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A37B0u;
label_1a37b0:
    // 0x1a37b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a37b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a37b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a37b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1a37b8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1a37b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a37bc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1a37bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a37c0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1a37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a37c4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1a37c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1a37c8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1a37c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a37cc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1a37ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x1a37d0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a37d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a37d4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1a37d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37d8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a37d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a37dc: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x1a37dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x1a37e0: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1a37e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a37e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a37e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37e8: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1a37e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1a37ec: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1a37ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1a37f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a37f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a37f4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1a37f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1a37f8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1a37f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1a37fc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a37fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1a3800: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a3800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a3804: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1a3804u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1a3808: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a3808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a380c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a380cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3810: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x1a3810u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1a3814: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a3814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3818: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1a3818u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1a381c: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1A381Cu;
    SET_GPR_U32(ctx, 31, 0x1A3824u);
    ctx->pc = 0x1A3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A381Cu;
    // 0x1a3820: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1A381Cu, 0x1A3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3824u;
label_1a3824:
    // 0x1a3824: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a3824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1a3828: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1a3828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a382c: 0xc442d15c  lwc1        $f2, -0x2EA4($v0)
    ctx->pc = 0x1a382cu;
    { uint32_t bits = FAST_READ32(0x50D15Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3830: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1a3830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1a3834: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1a3834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a3838: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1a3838u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x1a383c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a383cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a3840: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1a3840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3844: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1a3844u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a3848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a384c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a384cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a3850: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1a3850u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1a3854: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a3854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a3858: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1a3858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a385c: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x1a385cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1a3860: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1a3860u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1a3864: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1a3864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1a3868: 0x26240240  addiu       $a0, $s1, 0x240
    ctx->pc = 0x1a3868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x1a386c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a386cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a3870: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a3870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1a3874: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a3874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a3878: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a3878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a387c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a387cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3880: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1a3880u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1a3884: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1A3884u;
    SET_GPR_U32(ctx, 31, 0x1A388Cu);
    ctx->pc = 0x1A3888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3884u;
    // 0x1a3888: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1A3884u, 0x1A388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A388Cu;
label_1a388c:
    // 0x1a388c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3890: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1a3890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1a3894: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1a3894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1a3898: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1a3898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a389c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1a389cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a38a0: 0xe6340360  swc1        $f20, 0x360($s1)
    ctx->pc = 0x1a38a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 864), bits); }
    // 0x1a38a4: 0x7e220350  sq          $v0, 0x350($s1)
    ctx->pc = 0x1a38a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 848), GPR_VEC(ctx, 2));
    // 0x1a38a8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1a38a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a38ac: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1a38acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a38b0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1a38b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a38b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a38b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a38b8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1a38b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a38bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a38bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a38c0: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x1a38c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a38c4: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x1a38c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a38c8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1a38c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a38cc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1a38ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a38d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38D0u;
        // 0x1a38d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A38D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A38D8u;
}
