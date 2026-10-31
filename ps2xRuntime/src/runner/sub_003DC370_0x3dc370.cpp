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

// Function: sub_003DC370
// Address: 0x3dc370 - 0x3dc4e0
void sub_003DC370_0x3dc370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC370_0x3dc370");
#endif

    switch (ctx->pc) {
        case 0x3dc370u: goto label_3dc370;
        case 0x3dc374u: goto label_3dc374;
        case 0x3dc378u: goto label_3dc378;
        case 0x3dc37cu: goto label_3dc37c;
        case 0x3dc380u: goto label_3dc380;
        case 0x3dc384u: goto label_3dc384;
        case 0x3dc388u: goto label_3dc388;
        case 0x3dc38cu: goto label_3dc38c;
        case 0x3dc390u: goto label_3dc390;
        case 0x3dc394u: goto label_3dc394;
        case 0x3dc398u: goto label_3dc398;
        case 0x3dc39cu: goto label_3dc39c;
        case 0x3dc3a0u: goto label_3dc3a0;
        case 0x3dc3a4u: goto label_3dc3a4;
        case 0x3dc3a8u: goto label_3dc3a8;
        case 0x3dc3acu: goto label_3dc3ac;
        case 0x3dc3b0u: goto label_3dc3b0;
        case 0x3dc3b4u: goto label_3dc3b4;
        case 0x3dc3b8u: goto label_3dc3b8;
        case 0x3dc3bcu: goto label_3dc3bc;
        case 0x3dc3c0u: goto label_3dc3c0;
        case 0x3dc3c4u: goto label_3dc3c4;
        case 0x3dc3c8u: goto label_3dc3c8;
        case 0x3dc3ccu: goto label_3dc3cc;
        case 0x3dc3d0u: goto label_3dc3d0;
        case 0x3dc3d4u: goto label_3dc3d4;
        case 0x3dc3d8u: goto label_3dc3d8;
        case 0x3dc3dcu: goto label_3dc3dc;
        case 0x3dc3e0u: goto label_3dc3e0;
        case 0x3dc3e4u: goto label_3dc3e4;
        case 0x3dc3e8u: goto label_3dc3e8;
        case 0x3dc3ecu: goto label_3dc3ec;
        case 0x3dc3f0u: goto label_3dc3f0;
        case 0x3dc3f4u: goto label_3dc3f4;
        case 0x3dc3f8u: goto label_3dc3f8;
        case 0x3dc3fcu: goto label_3dc3fc;
        case 0x3dc400u: goto label_3dc400;
        case 0x3dc404u: goto label_3dc404;
        case 0x3dc408u: goto label_3dc408;
        case 0x3dc40cu: goto label_3dc40c;
        case 0x3dc410u: goto label_3dc410;
        case 0x3dc414u: goto label_3dc414;
        case 0x3dc418u: goto label_3dc418;
        case 0x3dc41cu: goto label_3dc41c;
        case 0x3dc420u: goto label_3dc420;
        case 0x3dc424u: goto label_3dc424;
        case 0x3dc428u: goto label_3dc428;
        case 0x3dc42cu: goto label_3dc42c;
        case 0x3dc430u: goto label_3dc430;
        case 0x3dc434u: goto label_3dc434;
        case 0x3dc438u: goto label_3dc438;
        case 0x3dc43cu: goto label_3dc43c;
        case 0x3dc440u: goto label_3dc440;
        case 0x3dc444u: goto label_3dc444;
        case 0x3dc448u: goto label_3dc448;
        case 0x3dc44cu: goto label_3dc44c;
        case 0x3dc450u: goto label_3dc450;
        case 0x3dc454u: goto label_3dc454;
        case 0x3dc458u: goto label_3dc458;
        case 0x3dc45cu: goto label_3dc45c;
        case 0x3dc460u: goto label_3dc460;
        case 0x3dc464u: goto label_3dc464;
        case 0x3dc468u: goto label_3dc468;
        case 0x3dc46cu: goto label_3dc46c;
        case 0x3dc470u: goto label_3dc470;
        case 0x3dc474u: goto label_3dc474;
        case 0x3dc478u: goto label_3dc478;
        case 0x3dc47cu: goto label_3dc47c;
        case 0x3dc480u: goto label_3dc480;
        case 0x3dc484u: goto label_3dc484;
        case 0x3dc488u: goto label_3dc488;
        case 0x3dc48cu: goto label_3dc48c;
        case 0x3dc490u: goto label_3dc490;
        case 0x3dc494u: goto label_3dc494;
        case 0x3dc498u: goto label_3dc498;
        case 0x3dc49cu: goto label_3dc49c;
        case 0x3dc4a0u: goto label_3dc4a0;
        case 0x3dc4a4u: goto label_3dc4a4;
        case 0x3dc4a8u: goto label_3dc4a8;
        case 0x3dc4acu: goto label_3dc4ac;
        case 0x3dc4b0u: goto label_3dc4b0;
        case 0x3dc4b4u: goto label_3dc4b4;
        case 0x3dc4b8u: goto label_3dc4b8;
        case 0x3dc4bcu: goto label_3dc4bc;
        case 0x3dc4c0u: goto label_3dc4c0;
        case 0x3dc4c4u: goto label_3dc4c4;
        case 0x3dc4c8u: goto label_3dc4c8;
        case 0x3dc4ccu: goto label_3dc4cc;
        case 0x3dc4d0u: goto label_3dc4d0;
        case 0x3dc4d4u: goto label_3dc4d4;
        case 0x3dc4d8u: goto label_3dc4d8;
        case 0x3dc4dcu: goto label_3dc4dc;
        default: break;
    }

    ctx->pc = 0x3dc370u;

label_3dc370:
    // 0x3dc370: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3dc370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3dc374:
    // 0x3dc374: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3dc374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3dc378:
    // 0x3dc378: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3dc378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3dc37c:
    // 0x3dc37c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc380:
    // 0x3dc380: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3dc380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3dc384:
    // 0x3dc384: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3dc384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dc388:
    // 0x3dc388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dc388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3dc38c:
    // 0x3dc38c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3dc38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3dc390:
    // 0x3dc390: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dc390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dc394:
    // 0x3dc394: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dc394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dc398:
    // 0x3dc398: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dc398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dc39c:
    // 0x3dc39c: 0x40f809  jalr        $v0
label_3dc3a0:
    if (ctx->pc == 0x3DC3A0u) {
        ctx->pc = 0x3DC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC39Cu;
        // 0x3dc3a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC3A4u;
        goto label_3dc3a4;
    }
    ctx->pc = 0x3DC39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DC3A4u);
        ctx->pc = 0x3DC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC39Cu;
        // 0x3dc3a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC39Cu, 0x3DC3A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DC3A4u;
label_3dc3a4:
    // 0x3dc3a4: 0x3c032005  lui         $v1, 0x2005
    ctx->pc = 0x3dc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8197 << 16));
label_3dc3a8:
    // 0x3dc3a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dc3a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc3ac:
    // 0x3dc3ac: 0x34630500  ori         $v1, $v1, 0x500
    ctx->pc = 0x3dc3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1280);
label_3dc3b0:
    // 0x3dc3b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3dc3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dc3b4:
    // 0x3dc3b4: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3dc3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3dc3b8:
    // 0x3dc3b8: 0xc0e858c  jal         func_3A1630
label_3dc3bc:
    if (ctx->pc == 0x3DC3BCu) {
        ctx->pc = 0x3DC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3B8u;
        // 0x3dc3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC3C0u;
        goto label_3dc3c0;
    }
    ctx->pc = 0x3DC3B8u;
    SET_GPR_U32(ctx, 31, 0x3DC3C0u);
    ctx->pc = 0x3DC3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC3B8u;
    // 0x3dc3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DC3B8u, 0x3DC3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC3C0u;
label_3dc3c0:
    // 0x3dc3c0: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3dc3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3dc3c4:
    // 0x3dc3c4: 0xc0ea13a  jal         func_3A84E8
label_3dc3c8:
    if (ctx->pc == 0x3DC3C8u) {
        ctx->pc = 0x3DC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3C4u;
        // 0x3dc3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC3CCu;
        goto label_3dc3cc;
    }
    ctx->pc = 0x3DC3C4u;
    SET_GPR_U32(ctx, 31, 0x3DC3CCu);
    ctx->pc = 0x3DC3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC3C4u;
    // 0x3dc3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3DC3C4u, 0x3DC3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC3CCu;
label_3dc3cc:
    // 0x3dc3cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dc3d0:
    // 0x3dc3d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3dc3d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3dc3d4:
    // 0x3dc3d4: 0xc0ea12a  jal         func_3A84A8
label_3dc3d8:
    if (ctx->pc == 0x3DC3D8u) {
        ctx->pc = 0x3DC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3D4u;
        // 0x3dc3d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC3DCu;
        goto label_3dc3dc;
    }
    ctx->pc = 0x3DC3D4u;
    SET_GPR_U32(ctx, 31, 0x3DC3DCu);
    ctx->pc = 0x3DC3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC3D4u;
    // 0x3dc3d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DC3D4u, 0x3DC3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC3DCu;
label_3dc3dc:
    // 0x3dc3dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dc3dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc3e0:
    // 0x3dc3e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dc3e4:
    // 0x3dc3e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dc3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc3e8:
    // 0x3dc3e8: 0xc0ea12a  jal         func_3A84A8
label_3dc3ec:
    if (ctx->pc == 0x3DC3ECu) {
        ctx->pc = 0x3DC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC3E8u;
        // 0x3dc3ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC3F0u;
        goto label_3dc3f0;
    }
    ctx->pc = 0x3DC3E8u;
    SET_GPR_U32(ctx, 31, 0x3DC3F0u);
    ctx->pc = 0x3DC3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC3E8u;
    // 0x3dc3ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DC3E8u, 0x3DC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC3F0u;
label_3dc3f0:
    // 0x3dc3f0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3dc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_3dc3f4:
    // 0x3dc3f4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3dc3f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc3f8:
    // 0x3dc3f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3dc3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_3dc3fc:
    // 0x3dc3fc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x3dc3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_3dc400:
    // 0x3dc400: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3dc400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dc404:
    // 0x3dc404: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3dc404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3dc408:
    // 0x3dc408: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3dc408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3dc40c:
    // 0x3dc40c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3dc40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3dc410:
    // 0x3dc410: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3dc410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3dc414:
    // 0x3dc414: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x3dc414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
label_3dc418:
    // 0x3dc418: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dc418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc41c:
    // 0x3dc41c: 0xc0cd518  jal         func_335460
label_3dc420:
    if (ctx->pc == 0x3DC420u) {
        ctx->pc = 0x3DC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC41Cu;
        // 0x3dc420: 0xe6540004  swc1        $f20, 0x4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC424u;
        goto label_3dc424;
    }
    ctx->pc = 0x3DC41Cu;
    SET_GPR_U32(ctx, 31, 0x3DC424u);
    ctx->pc = 0x3DC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC41Cu;
    // 0x3dc420: 0xe6540004  swc1        $f20, 0x4($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DC41Cu, 0x3DC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC424u;
label_3dc424:
    // 0x3dc424: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x3dc424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_3dc428:
    // 0x3dc428: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x3dc428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_3dc42c:
    // 0x3dc42c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dc42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dc430:
    // 0x3dc430: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3dc430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3dc434:
    // 0x3dc434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dc434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dc438:
    // 0x3dc438: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3dc438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dc43c:
    // 0x3dc43c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3dc43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3dc440:
    // 0x3dc440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3dc440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dc444:
    // 0x3dc444: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3dc444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3dc448:
    // 0x3dc448: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3dc448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3dc44c:
    // 0x3dc44c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3dc44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3dc450:
    // 0x3dc450: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3dc450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3dc454:
    // 0x3dc454: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x3dc454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3dc458:
    // 0x3dc458: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3dc458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dc45c:
    // 0x3dc45c: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x3dc45cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
label_3dc460:
    // 0x3dc460: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dc460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dc464:
    // 0x3dc464: 0xc136b24  jal         func_4DAC90
label_3dc468:
    if (ctx->pc == 0x3DC468u) {
        ctx->pc = 0x3DC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC464u;
        // 0x3dc468: 0xc64c0004  lwc1        $f12, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC46Cu;
        goto label_3dc46c;
    }
    ctx->pc = 0x3DC464u;
    SET_GPR_U32(ctx, 31, 0x3DC46Cu);
    ctx->pc = 0x3DC468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC464u;
    // 0x3dc468: 0xc64c0004  lwc1        $f12, 0x4($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DC464u, 0x3DC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC46Cu;
label_3dc46c:
    // 0x3dc46c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3dc46cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dc470:
    // 0x3dc470: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3dc470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dc474:
    // 0x3dc474: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3dc474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3dc478:
    // 0x3dc478: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dc478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dc47c:
    // 0x3dc47c: 0x3c032005  lui         $v1, 0x2005
    ctx->pc = 0x3dc47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8197 << 16));
label_3dc480:
    // 0x3dc480: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3dc480u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3dc484:
    // 0x3dc484: 0x34630560  ori         $v1, $v1, 0x560
    ctx->pc = 0x3dc484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1376);
label_3dc488:
    // 0x3dc488: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dc488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dc48c:
    // 0x3dc48c: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x3dc48cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_3dc490:
    // 0x3dc490: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3dc490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dc494:
    // 0x3dc494: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3dc494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3dc498:
    // 0x3dc498: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3dc498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dc49c:
    // 0x3dc49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc4a0:
    // 0x3dc4a0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3dc4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3dc4a4:
    // 0x3dc4a4: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x3dc4a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
label_3dc4a8:
    // 0x3dc4a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3dc4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dc4ac:
    // 0x3dc4ac: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3dc4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3dc4b0:
    // 0x3dc4b0: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x3dc4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
label_3dc4b4:
    // 0x3dc4b4: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3dc4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3dc4b8:
    // 0x3dc4b8: 0xc0e9404  jal         func_3A5010
label_3dc4bc:
    if (ctx->pc == 0x3DC4BCu) {
        ctx->pc = 0x3DC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC4B8u;
        // 0x3dc4bc: 0xae0600c4  sw          $a2, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC4C0u;
        goto label_3dc4c0;
    }
    ctx->pc = 0x3DC4B8u;
    SET_GPR_U32(ctx, 31, 0x3DC4C0u);
    ctx->pc = 0x3DC4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC4B8u;
    // 0x3dc4bc: 0xae0600c4  sw          $a2, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DC4B8u, 0x3DC4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC4C0u;
label_3dc4c0:
    // 0x3dc4c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3dc4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3dc4c4:
    // 0x3dc4c4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3dc4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dc4c8:
    // 0x3dc4c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3dc4c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dc4cc:
    // 0x3dc4cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dc4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3dc4d0:
    // 0x3dc4d0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3dc4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dc4d4:
    // 0x3dc4d4: 0x3e00008  jr          $ra
label_3dc4d8:
    if (ctx->pc == 0x3DC4D8u) {
        ctx->pc = 0x3DC4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC4D4u;
        // 0x3dc4d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC4DCu;
        goto label_3dc4dc;
    }
    ctx->pc = 0x3DC4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC4D4u;
        // 0x3dc4d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC4DCu;
label_3dc4dc:
    // 0x3dc4dc: 0x0  nop
    ctx->pc = 0x3dc4dcu;
    // NOP
    ctx->pc = 0x3dc4e0u;
}
