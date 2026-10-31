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

// Function: sub_001D6738
// Address: 0x1d6738 - 0x1d6908
void sub_001D6738_0x1d6738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6738_0x1d6738");
#endif

    switch (ctx->pc) {
        case 0x1d67a4u: goto label_1d67a4;
        case 0x1d67dcu: goto label_1d67dc;
        case 0x1d67e4u: goto label_1d67e4;
        case 0x1d67f0u: goto label_1d67f0;
        case 0x1d6848u: goto label_1d6848;
        case 0x1d6858u: goto label_1d6858;
        case 0x1d68acu: goto label_1d68ac;
        case 0x1d68b4u: goto label_1d68b4;
        case 0x1d68c0u: goto label_1d68c0;
        default: break;
    }

    ctx->pc = 0x1d6738u;

    // 0x1d6738: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d6738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1d673c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d6740: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1d6740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1d6744: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1d6744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1d6748: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d6748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674c: 0xafaa0030  sw          $t2, 0x30($sp)
    ctx->pc = 0x1d674cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 10));
    // 0x1d6750: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1d6750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6754: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x1d6754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
    // 0x1d6758: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1d6758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1d675c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1d675cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d6760: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1d6760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1d6764: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1d6764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1d6768: 0x26510250  addiu       $s1, $s2, 0x250
    ctx->pc = 0x1d6768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x1d676c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1d6770: 0x265303f0  addiu       $s3, $s2, 0x3F0
    ctx->pc = 0x1d6770u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
    // 0x1d6774: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d6774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d6778: 0x26550040  addiu       $s5, $s2, 0x40
    ctx->pc = 0x1d6778u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1d677c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1d677cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1d6780: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1d6780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x1d6784: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x1d6784u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6788: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d6788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d678c: 0x265e0320  addiu       $fp, $s2, 0x320
    ctx->pc = 0x1d678cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    // 0x1d6790: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d6790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1d6794: 0xc44cecf4  lwc1        $f12, -0x130C($v0)
    ctx->pc = 0x1d6794u;
    { uint32_t bits = FAST_READ32(0x50ECF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d6798: 0xae4804c0  sw          $t0, 0x4C0($s2)
    ctx->pc = 0x1d6798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1216), GPR_U32(ctx, 8));
    // 0x1d679c: 0xc07592c  jal         func_1D64B0
    ctx->pc = 0x1D679Cu;
    SET_GPR_U32(ctx, 31, 0x1D67A4u);
    ctx->pc = 0x1D67A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D679Cu;
    // 0x1d67a0: 0xae4904c4  sw          $t1, 0x4C4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1220), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D64B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D64B0u, 0x1D679Cu, 0x1D67A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67A4u;
label_1d67a4:
    // 0x1d67a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d67a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d67a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d67a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d67ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d67acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d67b0: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1d67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x1d67b4: 0x8c56d310  lw          $s6, -0x2CF0($v0)
    ctx->pc = 0x1d67b4u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1d67b8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d67b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d67bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d67c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67c4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1d67c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d67c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67cc: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1d67ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d67d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d67d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67d4: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1D67D4u;
    SET_GPR_U32(ctx, 31, 0x1D67DCu);
    ctx->pc = 0x1D67D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67D4u;
    // 0x1d67d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1D67D4u, 0x1D67DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67DCu;
label_1d67dc:
    // 0x1d67dc: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D67DCu;
    SET_GPR_U32(ctx, 31, 0x1D67E4u);
    ctx->pc = 0x1D67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67DCu;
    // 0x1d67e0: 0x2404012b  addiu       $a0, $zero, 0x12B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D67DCu, 0x1D67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E4u;
label_1d67e4:
    // 0x1d67e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d67e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67e8: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D67E8u;
    SET_GPR_U32(ctx, 31, 0x1D67F0u);
    ctx->pc = 0x1D67ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E8u;
    // 0x1d67ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D67E8u, 0x1D67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67F0u;
label_1d67f0:
    // 0x1d67f0: 0x7a2200b0  lq          $v0, 0xB0($s1)
    ctx->pc = 0x1d67f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1d67f4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1d67f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d67f8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1d67f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d67fc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d67fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6800: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d6800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1d6804: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1d6804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d680c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d680cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6810: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d6810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6814: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d6814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6818: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x1d6818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d681c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d681cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6820: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d6820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d6824: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1d6824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d6828: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1d6828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x1d682c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1d682cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6830: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6834: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d6834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d6838: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1d6838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d683c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x1d683cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d6840: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1D6840u;
    SET_GPR_U32(ctx, 31, 0x1D6848u);
    ctx->pc = 0x1D6844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6840u;
    // 0x1d6844: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1D6840u, 0x1D6848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6848u;
label_1d6848:
    // 0x1d6848: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d6848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1d684c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d684cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6850: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D6850u;
    SET_GPR_U32(ctx, 31, 0x1D6858u);
    ctx->pc = 0x1D6854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6850u;
    // 0x1d6854: 0x24a560a0  addiu       $a1, $a1, 0x60A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D6850u, 0x1D6858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6858u;
label_1d6858:
    // 0x1d6858: 0x7a6200b0  lq          $v0, 0xB0($s3)
    ctx->pc = 0x1d6858u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x1d685c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d685cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6860: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d6860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6864: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1d6864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6868: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d6868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1d686c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d686cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6870: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x1d6870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d6874: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d6874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6878: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1d6878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d687c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d687cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6880: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d6884: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d6884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d6888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d688c: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1d688cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x1d6890: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1d6890u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6894: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1d6894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6898: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d6898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d689c: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x1d689cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d68a0: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1d68a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d68a4: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1D68A4u;
    SET_GPR_U32(ctx, 31, 0x1D68ACu);
    ctx->pc = 0x1D68A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68A4u;
    // 0x1d68a8: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1D68A4u, 0x1D68ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68ACu;
label_1d68ac:
    // 0x1d68ac: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1D68ACu;
    SET_GPR_U32(ctx, 31, 0x1D68B4u);
    ctx->pc = 0x1D68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68ACu;
    // 0x1d68b0: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D68ACu, 0x1D68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68B4u;
label_1d68b4:
    // 0x1d68b4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1d68b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d68b8: 0xc073478  jal         func_1CD1E0
    ctx->pc = 0x1D68B8u;
    SET_GPR_U32(ctx, 31, 0x1D68C0u);
    ctx->pc = 0x1D68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68B8u;
    // 0x1d68bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1D68B8u, 0x1D68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68C0u;
label_1d68c0:
    // 0x1d68c0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1d68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1d68c4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1d68c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d68c8: 0xae4204c8  sw          $v0, 0x4C8($s2)
    ctx->pc = 0x1d68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1224), GPR_U32(ctx, 2));
    // 0x1d68cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d68d0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1d68d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d68d4: 0xae420240  sw          $v0, 0x240($s2)
    ctx->pc = 0x1d68d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 2));
    // 0x1d68d8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1d68d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d68dc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1d68dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d68e0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1d68e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d68e4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d68e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d68e8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d68e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d68ec: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1d68ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d68f0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1d68f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d68f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d68f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d68f8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1d68f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d68fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D68FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68FCu;
        // 0x1d6900: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D68FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6904u;
    // 0x1d6904: 0x0  nop
    ctx->pc = 0x1d6904u;
    // NOP
    ctx->pc = 0x1d6908u;
}
