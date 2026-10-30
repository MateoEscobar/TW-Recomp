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

// Function: sub_0010A310
// Address: 0x10a310 - 0x10a4b0
void sub_0010A310_0x10a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A310_0x10a310");
#endif

    switch (ctx->pc) {
        case 0x10a310u: goto label_10a310;
        case 0x10a314u: goto label_10a314;
        case 0x10a318u: goto label_10a318;
        case 0x10a31cu: goto label_10a31c;
        case 0x10a320u: goto label_10a320;
        case 0x10a324u: goto label_10a324;
        case 0x10a328u: goto label_10a328;
        case 0x10a32cu: goto label_10a32c;
        case 0x10a330u: goto label_10a330;
        case 0x10a334u: goto label_10a334;
        case 0x10a338u: goto label_10a338;
        case 0x10a33cu: goto label_10a33c;
        case 0x10a340u: goto label_10a340;
        case 0x10a344u: goto label_10a344;
        case 0x10a348u: goto label_10a348;
        case 0x10a34cu: goto label_10a34c;
        case 0x10a350u: goto label_10a350;
        case 0x10a354u: goto label_10a354;
        case 0x10a358u: goto label_10a358;
        case 0x10a35cu: goto label_10a35c;
        case 0x10a360u: goto label_10a360;
        case 0x10a364u: goto label_10a364;
        case 0x10a368u: goto label_10a368;
        case 0x10a36cu: goto label_10a36c;
        case 0x10a370u: goto label_10a370;
        case 0x10a374u: goto label_10a374;
        case 0x10a378u: goto label_10a378;
        case 0x10a37cu: goto label_10a37c;
        case 0x10a380u: goto label_10a380;
        case 0x10a384u: goto label_10a384;
        case 0x10a388u: goto label_10a388;
        case 0x10a38cu: goto label_10a38c;
        case 0x10a390u: goto label_10a390;
        case 0x10a394u: goto label_10a394;
        case 0x10a398u: goto label_10a398;
        case 0x10a39cu: goto label_10a39c;
        case 0x10a3a0u: goto label_10a3a0;
        case 0x10a3a4u: goto label_10a3a4;
        case 0x10a3a8u: goto label_10a3a8;
        case 0x10a3acu: goto label_10a3ac;
        case 0x10a3b0u: goto label_10a3b0;
        case 0x10a3b4u: goto label_10a3b4;
        case 0x10a3b8u: goto label_10a3b8;
        case 0x10a3bcu: goto label_10a3bc;
        case 0x10a3c0u: goto label_10a3c0;
        case 0x10a3c4u: goto label_10a3c4;
        case 0x10a3c8u: goto label_10a3c8;
        case 0x10a3ccu: goto label_10a3cc;
        case 0x10a3d0u: goto label_10a3d0;
        case 0x10a3d4u: goto label_10a3d4;
        case 0x10a3d8u: goto label_10a3d8;
        case 0x10a3dcu: goto label_10a3dc;
        case 0x10a3e0u: goto label_10a3e0;
        case 0x10a3e4u: goto label_10a3e4;
        case 0x10a3e8u: goto label_10a3e8;
        case 0x10a3ecu: goto label_10a3ec;
        case 0x10a3f0u: goto label_10a3f0;
        case 0x10a3f4u: goto label_10a3f4;
        case 0x10a3f8u: goto label_10a3f8;
        case 0x10a3fcu: goto label_10a3fc;
        case 0x10a400u: goto label_10a400;
        case 0x10a404u: goto label_10a404;
        case 0x10a408u: goto label_10a408;
        case 0x10a40cu: goto label_10a40c;
        case 0x10a410u: goto label_10a410;
        case 0x10a414u: goto label_10a414;
        case 0x10a418u: goto label_10a418;
        case 0x10a41cu: goto label_10a41c;
        case 0x10a420u: goto label_10a420;
        case 0x10a424u: goto label_10a424;
        case 0x10a428u: goto label_10a428;
        case 0x10a42cu: goto label_10a42c;
        case 0x10a430u: goto label_10a430;
        case 0x10a434u: goto label_10a434;
        case 0x10a438u: goto label_10a438;
        case 0x10a43cu: goto label_10a43c;
        case 0x10a440u: goto label_10a440;
        case 0x10a444u: goto label_10a444;
        case 0x10a448u: goto label_10a448;
        case 0x10a44cu: goto label_10a44c;
        case 0x10a450u: goto label_10a450;
        case 0x10a454u: goto label_10a454;
        case 0x10a458u: goto label_10a458;
        case 0x10a45cu: goto label_10a45c;
        case 0x10a460u: goto label_10a460;
        case 0x10a464u: goto label_10a464;
        case 0x10a468u: goto label_10a468;
        case 0x10a46cu: goto label_10a46c;
        case 0x10a470u: goto label_10a470;
        case 0x10a474u: goto label_10a474;
        case 0x10a478u: goto label_10a478;
        case 0x10a47cu: goto label_10a47c;
        case 0x10a480u: goto label_10a480;
        case 0x10a484u: goto label_10a484;
        case 0x10a488u: goto label_10a488;
        case 0x10a48cu: goto label_10a48c;
        case 0x10a490u: goto label_10a490;
        case 0x10a494u: goto label_10a494;
        case 0x10a498u: goto label_10a498;
        case 0x10a49cu: goto label_10a49c;
        case 0x10a4a0u: goto label_10a4a0;
        case 0x10a4a4u: goto label_10a4a4;
        case 0x10a4a8u: goto label_10a4a8;
        case 0x10a4acu: goto label_10a4ac;
        default: break;
    }

    ctx->pc = 0x10a310u;

label_10a310:
    // 0x10a310: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10a314:
    // 0x10a314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10a314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10a318:
    // 0x10a318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10a31c:
    // 0x10a31c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10a31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_10a320:
    // 0x10a320: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x10a320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_10a324:
    // 0x10a324: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10a324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_10a328:
    // 0x10a328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a32c:
    // 0x10a32c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_10a330:
    // 0x10a330: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10a330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10a334:
    // 0x10a334: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10a334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10a338:
    // 0x10a338: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x10a338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10a33c:
    // 0x10a33c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x10a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_10a340:
    // 0x10a340: 0x24424790  addiu       $v0, $v0, 0x4790
    ctx->pc = 0x10a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18320));
label_10a344:
    // 0x10a344: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x10a344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_10a348:
    // 0x10a348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10a34c:
    // 0x10a34c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x10a34cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_10a350:
    // 0x10a350: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x10a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_10a354:
    // 0x10a354: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x10a354u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_10a358:
    // 0x10a358: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x10a358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_10a35c:
    // 0x10a35c: 0xae0b0040  sw          $t3, 0x40($s0)
    ctx->pc = 0x10a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 11));
label_10a360:
    // 0x10a360: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x10a360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_10a364:
    // 0x10a364: 0xae080028  sw          $t0, 0x28($s0)
    ctx->pc = 0x10a364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 8));
label_10a368:
    // 0x10a368: 0xae09002c  sw          $t1, 0x2C($s0)
    ctx->pc = 0x10a368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 9));
label_10a36c:
    // 0x10a36c: 0xae0a0030  sw          $t2, 0x30($s0)
    ctx->pc = 0x10a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 10));
label_10a370:
    // 0x10a370: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x10a370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_10a374:
    // 0x10a374: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x10a374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
label_10a378:
    // 0x10a378: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x10a378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
label_10a37c:
    // 0x10a37c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_10a380:
    // 0x10a380: 0xc042956  jal         func_10A558
label_10a384:
    if (ctx->pc == 0x10A384u) {
        ctx->pc = 0x10A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A380u;
        // 0x10a384: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A388u;
        goto label_10a388;
    }
    ctx->pc = 0x10A380u;
    SET_GPR_U32(ctx, 31, 0x10A388u);
    ctx->pc = 0x10A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A380u;
    // 0x10a384: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A558u, 0x10A380u, 0x10A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A388u;
label_10a388:
    // 0x10a388: 0x8e2202b8  lw          $v0, 0x2B8($s1)
    ctx->pc = 0x10a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_10a38c:
    // 0x10a38c: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x10a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10a390:
    // 0x10a390: 0xc44003a4  lwc1        $f0, 0x3A4($v0)
    ctx->pc = 0x10a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10a394:
    // 0x10a394: 0xe614003c  swc1        $f20, 0x3C($s0)
    ctx->pc = 0x10a394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_10a398:
    // 0x10a398: 0xc0428a8  jal         func_10A2A0
label_10a39c:
    if (ctx->pc == 0x10A39Cu) {
        ctx->pc = 0x10A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A398u;
        // 0x10a39c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3A0u;
        goto label_10a3a0;
    }
    ctx->pc = 0x10A398u;
    SET_GPR_U32(ctx, 31, 0x10A3A0u);
    ctx->pc = 0x10A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A398u;
    // 0x10a39c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A2A0u, 0x10A398u, 0x10A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3A0u;
label_10a3a0:
    // 0x10a3a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a3a4:
    // 0x10a3a4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x10a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_10a3a8:
    // 0x10a3a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10a3ac:
    // 0x10a3ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_10a3b0:
    // 0x10a3b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a3b4:
    // 0x10a3b4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x10a3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10a3b8:
    // 0x10a3b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10a3bc:
    // 0x10a3bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a3c0:
    // 0x10a3c0: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x10a3c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10a3c4:
    // 0x10a3c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10a3c8:
    // 0x10a3c8: 0xc05d420  jal         func_175080
label_10a3cc:
    if (ctx->pc == 0x10A3CCu) {
        ctx->pc = 0x10A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3C8u;
        // 0x10a3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3D0u;
        goto label_10a3d0;
    }
    ctx->pc = 0x10A3C8u;
    SET_GPR_U32(ctx, 31, 0x10A3D0u);
    ctx->pc = 0x10A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3C8u;
    // 0x10a3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x10A3C8u, 0x10A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3D0u;
label_10a3d0:
    // 0x10a3d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a3d4:
    // 0x10a3d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10a3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10a3d8:
    // 0x10a3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a3dc:
    // 0x10a3dc: 0xc05d420  jal         func_175080
label_10a3e0:
    if (ctx->pc == 0x10A3E0u) {
        ctx->pc = 0x10A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3DCu;
        // 0x10a3e0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3E4u;
        goto label_10a3e4;
    }
    ctx->pc = 0x10A3DCu;
    SET_GPR_U32(ctx, 31, 0x10A3E4u);
    ctx->pc = 0x10A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3DCu;
    // 0x10a3e0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x10A3DCu, 0x10A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3E4u;
label_10a3e4:
    // 0x10a3e4: 0x8e2502b8  lw          $a1, 0x2B8($s1)
    ctx->pc = 0x10a3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_10a3e8:
    // 0x10a3e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x10a3e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a3ec:
    // 0x10a3ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10a3f0:
    // 0x10a3f0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_10a3f4:
    // 0x10a3f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x10a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_10a3f8:
    // 0x10a3f8: 0x40f809  jalr        $v0
label_10a3fc:
    if (ctx->pc == 0x10A3FCu) {
        ctx->pc = 0x10A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3F8u;
        // 0x10a3fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A400u;
        goto label_10a400;
    }
    ctx->pc = 0x10A3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A400u);
        ctx->pc = 0x10A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3F8u;
        // 0x10a3fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A3F8u, 0x10A400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A400u;
label_10a400:
    // 0x10a400: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10a400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10a404:
    // 0x10a404: 0xc042ed8  jal         func_10BB60
label_10a408:
    if (ctx->pc == 0x10A408u) {
        ctx->pc = 0x10A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A404u;
        // 0x10a408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A40Cu;
        goto label_10a40c;
    }
    ctx->pc = 0x10A404u;
    SET_GPR_U32(ctx, 31, 0x10A40Cu);
    ctx->pc = 0x10A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A404u;
    // 0x10a408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x10A404u, 0x10A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A40Cu;
label_10a40c:
    // 0x10a40c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_10a410:
    // 0x10a410: 0x8e2502b8  lw          $a1, 0x2B8($s1)
    ctx->pc = 0x10a410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_10a414:
    // 0x10a414: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10a414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10a418:
    // 0x10a418: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x10a418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_10a41c:
    // 0x10a41c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x10a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_10a420:
    // 0x10a420: 0x40f809  jalr        $v0
label_10a424:
    if (ctx->pc == 0x10A424u) {
        ctx->pc = 0x10A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A420u;
        // 0x10a424: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A428u;
        goto label_10a428;
    }
    ctx->pc = 0x10A420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A428u);
        ctx->pc = 0x10A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A420u;
        // 0x10a424: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A420u, 0x10A428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A428u;
label_10a428:
    // 0x10a428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10a428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a42c:
    // 0x10a42c: 0xc042ed8  jal         func_10BB60
label_10a430:
    if (ctx->pc == 0x10A430u) {
        ctx->pc = 0x10A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A42Cu;
        // 0x10a430: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A434u;
        goto label_10a434;
    }
    ctx->pc = 0x10A42Cu;
    SET_GPR_U32(ctx, 31, 0x10A434u);
    ctx->pc = 0x10A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A42Cu;
    // 0x10a430: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x10A42Cu, 0x10A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A434u;
label_10a434:
    // 0x10a434: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x10a434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_10a438:
    // 0x10a438: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10a43c:
    // 0x10a43c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10a440:
    // 0x10a440: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10a440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a444:
    // 0x10a444: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10a444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a448:
    // 0x10a448: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10a448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_10a44c:
    // 0x10a44c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10a44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_10a450:
    // 0x10a450: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x10a450u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_10a454:
    // 0x10a454: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10a454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a458:
    // 0x10a458: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10a458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_10a45c:
    // 0x10a45c: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x10a45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_10a460:
    // 0x10a460: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10a460u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_10a464:
    // 0x10a464: 0xc041164  jal         func_104590
label_10a468:
    if (ctx->pc == 0x10A468u) {
        ctx->pc = 0x10A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A464u;
        // 0x10a468: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A46Cu;
        goto label_10a46c;
    }
    ctx->pc = 0x10A464u;
    SET_GPR_U32(ctx, 31, 0x10A46Cu);
    ctx->pc = 0x10A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A464u;
    // 0x10a468: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10A464u, 0x10A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A46Cu;
label_10a46c:
    // 0x10a46c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a470:
    // 0x10a470: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10a470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10a474:
    // 0x10a474: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10a474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a478:
    // 0x10a478: 0xc041164  jal         func_104590
label_10a47c:
    if (ctx->pc == 0x10A47Cu) {
        ctx->pc = 0x10A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A478u;
        // 0x10a47c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A480u;
        goto label_10a480;
    }
    ctx->pc = 0x10A478u;
    SET_GPR_U32(ctx, 31, 0x10A480u);
    ctx->pc = 0x10A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A478u;
    // 0x10a47c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10A478u, 0x10A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A480u;
label_10a480:
    // 0x10a480: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10a480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a484:
    // 0x10a484: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10a484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10a488:
    // 0x10a488: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10a488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10a48c:
    // 0x10a48c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10a48cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10a490:
    // 0x10a490: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10a490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10a494:
    // 0x10a494: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10a494u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10a498:
    // 0x10a498: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x10a498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10a49c:
    // 0x10a49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a4a0:
    // 0x10a4a0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x10a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10a4a4:
    // 0x10a4a4: 0x3e00008  jr          $ra
label_10a4a8:
    if (ctx->pc == 0x10A4A8u) {
        ctx->pc = 0x10A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4A4u;
        // 0x10a4a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A4ACu;
        goto label_10a4ac;
    }
    ctx->pc = 0x10A4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4A4u;
        // 0x10a4a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4ACu;
label_10a4ac:
    // 0x10a4ac: 0x0  nop
    ctx->pc = 0x10a4acu;
    // NOP
    ctx->pc = 0x10a4b0u;
}
