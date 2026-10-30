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

// Function: sub_0013B358
// Address: 0x13b358 - 0x13b508
void sub_0013B358_0x13b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B358_0x13b358");
#endif

    switch (ctx->pc) {
        case 0x13b358u: goto label_13b358;
        case 0x13b35cu: goto label_13b35c;
        case 0x13b360u: goto label_13b360;
        case 0x13b364u: goto label_13b364;
        case 0x13b368u: goto label_13b368;
        case 0x13b36cu: goto label_13b36c;
        case 0x13b370u: goto label_13b370;
        case 0x13b374u: goto label_13b374;
        case 0x13b378u: goto label_13b378;
        case 0x13b37cu: goto label_13b37c;
        case 0x13b380u: goto label_13b380;
        case 0x13b384u: goto label_13b384;
        case 0x13b388u: goto label_13b388;
        case 0x13b38cu: goto label_13b38c;
        case 0x13b390u: goto label_13b390;
        case 0x13b394u: goto label_13b394;
        case 0x13b398u: goto label_13b398;
        case 0x13b39cu: goto label_13b39c;
        case 0x13b3a0u: goto label_13b3a0;
        case 0x13b3a4u: goto label_13b3a4;
        case 0x13b3a8u: goto label_13b3a8;
        case 0x13b3acu: goto label_13b3ac;
        case 0x13b3b0u: goto label_13b3b0;
        case 0x13b3b4u: goto label_13b3b4;
        case 0x13b3b8u: goto label_13b3b8;
        case 0x13b3bcu: goto label_13b3bc;
        case 0x13b3c0u: goto label_13b3c0;
        case 0x13b3c4u: goto label_13b3c4;
        case 0x13b3c8u: goto label_13b3c8;
        case 0x13b3ccu: goto label_13b3cc;
        case 0x13b3d0u: goto label_13b3d0;
        case 0x13b3d4u: goto label_13b3d4;
        case 0x13b3d8u: goto label_13b3d8;
        case 0x13b3dcu: goto label_13b3dc;
        case 0x13b3e0u: goto label_13b3e0;
        case 0x13b3e4u: goto label_13b3e4;
        case 0x13b3e8u: goto label_13b3e8;
        case 0x13b3ecu: goto label_13b3ec;
        case 0x13b3f0u: goto label_13b3f0;
        case 0x13b3f4u: goto label_13b3f4;
        case 0x13b3f8u: goto label_13b3f8;
        case 0x13b3fcu: goto label_13b3fc;
        case 0x13b400u: goto label_13b400;
        case 0x13b404u: goto label_13b404;
        case 0x13b408u: goto label_13b408;
        case 0x13b40cu: goto label_13b40c;
        case 0x13b410u: goto label_13b410;
        case 0x13b414u: goto label_13b414;
        case 0x13b418u: goto label_13b418;
        case 0x13b41cu: goto label_13b41c;
        case 0x13b420u: goto label_13b420;
        case 0x13b424u: goto label_13b424;
        case 0x13b428u: goto label_13b428;
        case 0x13b42cu: goto label_13b42c;
        case 0x13b430u: goto label_13b430;
        case 0x13b434u: goto label_13b434;
        case 0x13b438u: goto label_13b438;
        case 0x13b43cu: goto label_13b43c;
        case 0x13b440u: goto label_13b440;
        case 0x13b444u: goto label_13b444;
        case 0x13b448u: goto label_13b448;
        case 0x13b44cu: goto label_13b44c;
        case 0x13b450u: goto label_13b450;
        case 0x13b454u: goto label_13b454;
        case 0x13b458u: goto label_13b458;
        case 0x13b45cu: goto label_13b45c;
        case 0x13b460u: goto label_13b460;
        case 0x13b464u: goto label_13b464;
        case 0x13b468u: goto label_13b468;
        case 0x13b46cu: goto label_13b46c;
        case 0x13b470u: goto label_13b470;
        case 0x13b474u: goto label_13b474;
        case 0x13b478u: goto label_13b478;
        case 0x13b47cu: goto label_13b47c;
        case 0x13b480u: goto label_13b480;
        case 0x13b484u: goto label_13b484;
        case 0x13b488u: goto label_13b488;
        case 0x13b48cu: goto label_13b48c;
        case 0x13b490u: goto label_13b490;
        case 0x13b494u: goto label_13b494;
        case 0x13b498u: goto label_13b498;
        case 0x13b49cu: goto label_13b49c;
        case 0x13b4a0u: goto label_13b4a0;
        case 0x13b4a4u: goto label_13b4a4;
        case 0x13b4a8u: goto label_13b4a8;
        case 0x13b4acu: goto label_13b4ac;
        case 0x13b4b0u: goto label_13b4b0;
        case 0x13b4b4u: goto label_13b4b4;
        case 0x13b4b8u: goto label_13b4b8;
        case 0x13b4bcu: goto label_13b4bc;
        case 0x13b4c0u: goto label_13b4c0;
        case 0x13b4c4u: goto label_13b4c4;
        case 0x13b4c8u: goto label_13b4c8;
        case 0x13b4ccu: goto label_13b4cc;
        case 0x13b4d0u: goto label_13b4d0;
        case 0x13b4d4u: goto label_13b4d4;
        case 0x13b4d8u: goto label_13b4d8;
        case 0x13b4dcu: goto label_13b4dc;
        case 0x13b4e0u: goto label_13b4e0;
        case 0x13b4e4u: goto label_13b4e4;
        case 0x13b4e8u: goto label_13b4e8;
        case 0x13b4ecu: goto label_13b4ec;
        case 0x13b4f0u: goto label_13b4f0;
        case 0x13b4f4u: goto label_13b4f4;
        case 0x13b4f8u: goto label_13b4f8;
        case 0x13b4fcu: goto label_13b4fc;
        case 0x13b500u: goto label_13b500;
        case 0x13b504u: goto label_13b504;
        default: break;
    }

    ctx->pc = 0x13b358u;

label_13b358:
    // 0x13b358: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13b35c:
    // 0x13b35c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_13b360:
    // 0x13b360: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_13b364:
    // 0x13b364: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13b364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13b368:
    // 0x13b368: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13b368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_13b36c:
    // 0x13b36c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13b36cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13b370:
    // 0x13b370: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13b370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_13b374:
    // 0x13b374: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13b374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_13b378:
    // 0x13b378: 0x1240005a  beqz        $s2, . + 4 + (0x5A << 2)
label_13b37c:
    if (ctx->pc == 0x13B37Cu) {
        ctx->pc = 0x13B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B378u;
        // 0x13b37c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B380u;
        goto label_13b380;
    }
    ctx->pc = 0x13B378u;
    {
        const bool branch_taken_0x13b378 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B378u;
        // 0x13b37c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b378) {
            ctx->pc = 0x13B4E4u;
            goto label_13b4e4;
        }
    }
    ctx->pc = 0x13B380u;
label_13b380:
    // 0x13b380: 0xc04eddc  jal         func_13B770
label_13b384:
    if (ctx->pc == 0x13B384u) {
        ctx->pc = 0x13B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B380u;
        // 0x13b384: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B388u;
        goto label_13b388;
    }
    ctx->pc = 0x13B380u;
    SET_GPR_U32(ctx, 31, 0x13B388u);
    ctx->pc = 0x13B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B380u;
    // 0x13b384: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B770u, 0x13B380u, 0x13B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B388u;
label_13b388:
    // 0x13b388: 0x86420350  lh          $v0, 0x350($s2)
    ctx->pc = 0x13b388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 848)));
label_13b38c:
    // 0x13b38c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_13b390:
    if (ctx->pc == 0x13B390u) {
        ctx->pc = 0x13B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B38Cu;
        // 0x13b390: 0x26540320  addiu       $s4, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B394u;
        goto label_13b394;
    }
    ctx->pc = 0x13B38Cu;
    {
        const bool branch_taken_0x13b38c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B38Cu;
        // 0x13b390: 0x26540320  addiu       $s4, $s2, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b38c) {
            ctx->pc = 0x13B3B8u;
            goto label_13b3b8;
        }
    }
    ctx->pc = 0x13B394u;
label_13b394:
    // 0x13b394: 0x265001e0  addiu       $s0, $s2, 0x1E0
    ctx->pc = 0x13b394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_13b398:
    // 0x13b398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b39c:
    // 0x13b39c: 0xc04ede0  jal         func_13B780
label_13b3a0:
    if (ctx->pc == 0x13B3A0u) {
        ctx->pc = 0x13B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B39Cu;
        // 0x13b3a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B3A4u;
        goto label_13b3a4;
    }
    ctx->pc = 0x13B39Cu;
    SET_GPR_U32(ctx, 31, 0x13B3A4u);
    ctx->pc = 0x13B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B39Cu;
    // 0x13b3a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B780u, 0x13B39Cu, 0x13B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3A4u;
label_13b3a4:
    // 0x13b3a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13b3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13b3a8:
    // 0x13b3a8: 0x86420350  lh          $v0, 0x350($s2)
    ctx->pc = 0x13b3a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 848)));
label_13b3ac:
    // 0x13b3ac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x13b3acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13b3b0:
    // 0x13b3b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_13b3b4:
    if (ctx->pc == 0x13B3B4u) {
        ctx->pc = 0x13B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3B0u;
        // 0x13b3b4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B3B8u;
        goto label_13b3b8;
    }
    ctx->pc = 0x13B3B0u;
    {
        const bool branch_taken_0x13b3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3B0u;
        // 0x13b3b4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3b0) {
            ctx->pc = 0x13B398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b398;
        }
    }
    ctx->pc = 0x13B3B8u;
label_13b3b8:
    // 0x13b3b8: 0x7a420320  lq          $v0, 0x320($s2)
    ctx->pc = 0x13b3b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 800)));
label_13b3bc:
    // 0x13b3bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13b3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13b3c0:
    // 0x13b3c0: 0x7e620320  sq          $v0, 0x320($s3)
    ctx->pc = 0x13b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 800), GPR_VEC(ctx, 2));
label_13b3c4:
    // 0x13b3c4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x13b3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b3c8:
    // 0x13b3c8: 0xe6600398  swc1        $f0, 0x398($s3)
    ctx->pc = 0x13b3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 920), bits); }
label_13b3cc:
    // 0x13b3cc: 0x7a420330  lq          $v0, 0x330($s2)
    ctx->pc = 0x13b3ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 816)));
label_13b3d0:
    // 0x13b3d0: 0x7e620330  sq          $v0, 0x330($s3)
    ctx->pc = 0x13b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 816), GPR_VEC(ctx, 2));
label_13b3d4:
    // 0x13b3d4: 0xc6400358  lwc1        $f0, 0x358($s2)
    ctx->pc = 0x13b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b3d8:
    // 0x13b3d8: 0xe6600358  swc1        $f0, 0x358($s3)
    ctx->pc = 0x13b3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 856), bits); }
label_13b3dc:
    // 0x13b3dc: 0xc641035c  lwc1        $f1, 0x35C($s2)
    ctx->pc = 0x13b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b3e0:
    // 0x13b3e0: 0xe661035c  swc1        $f1, 0x35C($s3)
    ctx->pc = 0x13b3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 860), bits); }
label_13b3e4:
    // 0x13b3e4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x13b3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13b3e8:
    // 0x13b3e8: 0xc6400370  lwc1        $f0, 0x370($s2)
    ctx->pc = 0x13b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b3ec:
    // 0x13b3ec: 0xe6600370  swc1        $f0, 0x370($s3)
    ctx->pc = 0x13b3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 880), bits); }
label_13b3f0:
    // 0x13b3f0: 0xc641039c  lwc1        $f1, 0x39C($s2)
    ctx->pc = 0x13b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b3f4:
    // 0x13b3f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13b3f8:
    if (ctx->pc == 0x13B3F8u) {
        ctx->pc = 0x13B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3F4u;
        // 0x13b3f8: 0xe661039c  swc1        $f1, 0x39C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 924), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B3FCu;
        goto label_13b3fc;
    }
    ctx->pc = 0x13B3F4u;
    {
        const bool branch_taken_0x13b3f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3F4u;
        // 0x13b3f8: 0xe661039c  swc1        $f1, 0x39C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3f4) {
            ctx->pc = 0x13B400u;
            goto label_13b400;
        }
    }
    ctx->pc = 0x13B3FCu;
label_13b3fc:
    // 0x13b3fc: 0xe662039c  swc1        $f2, 0x39C($s3)
    ctx->pc = 0x13b3fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 924), bits); }
label_13b400:
    // 0x13b400: 0xc6410374  lwc1        $f1, 0x374($s2)
    ctx->pc = 0x13b400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b404:
    // 0x13b404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13b408:
    // 0x13b408: 0xe6610374  swc1        $f1, 0x374($s3)
    ctx->pc = 0x13b408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 884), bits); }
label_13b40c:
    // 0x13b40c: 0xc64003a0  lwc1        $f0, 0x3A0($s2)
    ctx->pc = 0x13b40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b410:
    // 0x13b410: 0xe66003a0  swc1        $f0, 0x3A0($s3)
    ctx->pc = 0x13b410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 928), bits); }
label_13b414:
    // 0x13b414: 0xc6410378  lwc1        $f1, 0x378($s2)
    ctx->pc = 0x13b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b418:
    // 0x13b418: 0xe6610378  swc1        $f1, 0x378($s3)
    ctx->pc = 0x13b418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 888), bits); }
label_13b41c:
    // 0x13b41c: 0xc64003a8  lwc1        $f0, 0x3A8($s2)
    ctx->pc = 0x13b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b420:
    // 0x13b420: 0xe66003a8  swc1        $f0, 0x3A8($s3)
    ctx->pc = 0x13b420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 936), bits); }
label_13b424:
    // 0x13b424: 0xc641037c  lwc1        $f1, 0x37C($s2)
    ctx->pc = 0x13b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b428:
    // 0x13b428: 0xe661037c  swc1        $f1, 0x37C($s3)
    ctx->pc = 0x13b428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 892), bits); }
label_13b42c:
    // 0x13b42c: 0xc64003a4  lwc1        $f0, 0x3A4($s2)
    ctx->pc = 0x13b42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b430:
    // 0x13b430: 0xe66003a4  swc1        $f0, 0x3A4($s3)
    ctx->pc = 0x13b430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 932), bits); }
label_13b434:
    // 0x13b434: 0xc64103c8  lwc1        $f1, 0x3C8($s2)
    ctx->pc = 0x13b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b438:
    // 0x13b438: 0xe66103c8  swc1        $f1, 0x3C8($s3)
    ctx->pc = 0x13b438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 968), bits); }
label_13b43c:
    // 0x13b43c: 0xc6400360  lwc1        $f0, 0x360($s2)
    ctx->pc = 0x13b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b440:
    // 0x13b440: 0xe6600360  swc1        $f0, 0x360($s3)
    ctx->pc = 0x13b440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 864), bits); }
label_13b444:
    // 0x13b444: 0xc6410380  lwc1        $f1, 0x380($s2)
    ctx->pc = 0x13b444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b448:
    // 0x13b448: 0xe6610380  swc1        $f1, 0x380($s3)
    ctx->pc = 0x13b448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 896), bits); }
label_13b44c:
    // 0x13b44c: 0xc64003ac  lwc1        $f0, 0x3AC($s2)
    ctx->pc = 0x13b44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b450:
    // 0x13b450: 0xe66003ac  swc1        $f0, 0x3AC($s3)
    ctx->pc = 0x13b450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 940), bits); }
label_13b454:
    // 0x13b454: 0xc6410364  lwc1        $f1, 0x364($s2)
    ctx->pc = 0x13b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b458:
    // 0x13b458: 0xe6610364  swc1        $f1, 0x364($s3)
    ctx->pc = 0x13b458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 868), bits); }
label_13b45c:
    // 0x13b45c: 0xc6400384  lwc1        $f0, 0x384($s2)
    ctx->pc = 0x13b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b460:
    // 0x13b460: 0xe6600384  swc1        $f0, 0x384($s3)
    ctx->pc = 0x13b460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 900), bits); }
label_13b464:
    // 0x13b464: 0xc64103b0  lwc1        $f1, 0x3B0($s2)
    ctx->pc = 0x13b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b468:
    // 0x13b468: 0xe66103b0  swc1        $f1, 0x3B0($s3)
    ctx->pc = 0x13b468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 944), bits); }
label_13b46c:
    // 0x13b46c: 0xc04feb2  jal         func_13FAC8
label_13b470:
    if (ctx->pc == 0x13B470u) {
        ctx->pc = 0x13B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B46Cu;
        // 0x13b470: 0xc64c0388  lwc1        $f12, 0x388($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B474u;
        goto label_13b474;
    }
    ctx->pc = 0x13B46Cu;
    SET_GPR_U32(ctx, 31, 0x13B474u);
    ctx->pc = 0x13B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B46Cu;
    // 0x13b470: 0xc64c0388  lwc1        $f12, 0x388($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAC8u, 0x13B46Cu, 0x13B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B474u;
label_13b474:
    // 0x13b474: 0xc64003b4  lwc1        $f0, 0x3B4($s2)
    ctx->pc = 0x13b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b478:
    // 0x13b478: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13b47c:
    // 0x13b47c: 0xe66003b4  swc1        $f0, 0x3B4($s3)
    ctx->pc = 0x13b47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 948), bits); }
label_13b480:
    // 0x13b480: 0xc04fecc  jal         func_13FB30
label_13b484:
    if (ctx->pc == 0x13B484u) {
        ctx->pc = 0x13B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B480u;
        // 0x13b484: 0xc64c0394  lwc1        $f12, 0x394($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B488u;
        goto label_13b488;
    }
    ctx->pc = 0x13B480u;
    SET_GPR_U32(ctx, 31, 0x13B488u);
    ctx->pc = 0x13B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B480u;
    // 0x13b484: 0xc64c0394  lwc1        $f12, 0x394($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB30u, 0x13B480u, 0x13B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B488u;
label_13b488:
    // 0x13b488: 0xc64003c0  lwc1        $f0, 0x3C0($s2)
    ctx->pc = 0x13b488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b48c:
    // 0x13b48c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x13b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13b490:
    // 0x13b490: 0xe66003c0  swc1        $f0, 0x3C0($s3)
    ctx->pc = 0x13b490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 960), bits); }
label_13b494:
    // 0x13b494: 0x24910190  addiu       $s1, $a0, 0x190
    ctx->pc = 0x13b494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
label_13b498:
    // 0x13b498: 0x924203e4  lbu         $v0, 0x3E4($s2)
    ctx->pc = 0x13b498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 996)));
label_13b49c:
    // 0x13b49c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13b49cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13b4a0:
    // 0x13b4a0: 0xa26203e4  sb          $v0, 0x3E4($s3)
    ctx->pc = 0x13b4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 996), (uint8_t)GPR_U32(ctx, 2));
label_13b4a4:
    // 0x13b4a4: 0x924303e6  lbu         $v1, 0x3E6($s2)
    ctx->pc = 0x13b4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 998)));
label_13b4a8:
    // 0x13b4a8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x13b4a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_13b4ac:
    // 0x13b4ac: 0xa26303e6  sb          $v1, 0x3E6($s3)
    ctx->pc = 0x13b4acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 998), (uint8_t)GPR_U32(ctx, 3));
label_13b4b0:
    // 0x13b4b0: 0x924203ed  lbu         $v0, 0x3ED($s2)
    ctx->pc = 0x13b4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1005)));
label_13b4b4:
    // 0x13b4b4: 0xa26203ed  sb          $v0, 0x3ED($s3)
    ctx->pc = 0x13b4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1005), (uint8_t)GPR_U32(ctx, 2));
label_13b4b8:
    // 0x13b4b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13b4bc:
    // 0x13b4bc: 0x84900190  lh          $s0, 0x190($a0)
    ctx->pc = 0x13b4bcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 400)));
label_13b4c0:
    // 0x13b4c0: 0x846401f0  lh          $a0, 0x1F0($v1)
    ctx->pc = 0x13b4c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 496)));
label_13b4c4:
    // 0x13b4c4: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x13b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_13b4c8:
    // 0x13b4c8: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x13b4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_13b4cc:
    // 0x13b4cc: 0x40f809  jalr        $v0
label_13b4d0:
    if (ctx->pc == 0x13B4D0u) {
        ctx->pc = 0x13B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4CCu;
        // 0x13b4d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B4D4u;
        goto label_13b4d4;
    }
    ctx->pc = 0x13B4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B4D4u);
        ctx->pc = 0x13B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4CCu;
        // 0x13b4d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B4CCu, 0x13B4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B4D4u;
label_13b4d4:
    // 0x13b4d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13b4d8:
    // 0x13b4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b4dc:
    // 0x13b4dc: 0x60f809  jalr        $v1
label_13b4e0:
    if (ctx->pc == 0x13B4E0u) {
        ctx->pc = 0x13B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4DCu;
        // 0x13b4e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B4E4u;
        goto label_13b4e4;
    }
    ctx->pc = 0x13B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13B4E4u);
        ctx->pc = 0x13B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4DCu;
        // 0x13b4e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B4DCu, 0x13B4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B4E4u;
label_13b4e4:
    // 0x13b4e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13b4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13b4e8:
    // 0x13b4e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13b4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13b4ec:
    // 0x13b4ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13b4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13b4f0:
    // 0x13b4f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13b4f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13b4f4:
    // 0x13b4f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13b4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13b4f8:
    // 0x13b4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b4fc:
    // 0x13b4fc: 0x3e00008  jr          $ra
label_13b500:
    if (ctx->pc == 0x13B500u) {
        ctx->pc = 0x13B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4FCu;
        // 0x13b500: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B504u;
        goto label_13b504;
    }
    ctx->pc = 0x13B4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4FCu;
        // 0x13b500: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B504u;
label_13b504:
    // 0x13b504: 0x0  nop
    ctx->pc = 0x13b504u;
    // NOP
    ctx->pc = 0x13b508u;
}
