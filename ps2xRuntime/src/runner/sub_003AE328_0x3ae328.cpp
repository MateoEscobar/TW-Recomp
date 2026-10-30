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

// Function: sub_003AE328
// Address: 0x3ae328 - 0x3ae518
void sub_003AE328_0x3ae328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE328_0x3ae328");
#endif

    switch (ctx->pc) {
        case 0x3ae328u: goto label_3ae328;
        case 0x3ae32cu: goto label_3ae32c;
        case 0x3ae330u: goto label_3ae330;
        case 0x3ae334u: goto label_3ae334;
        case 0x3ae338u: goto label_3ae338;
        case 0x3ae33cu: goto label_3ae33c;
        case 0x3ae340u: goto label_3ae340;
        case 0x3ae344u: goto label_3ae344;
        case 0x3ae348u: goto label_3ae348;
        case 0x3ae34cu: goto label_3ae34c;
        case 0x3ae350u: goto label_3ae350;
        case 0x3ae354u: goto label_3ae354;
        case 0x3ae358u: goto label_3ae358;
        case 0x3ae35cu: goto label_3ae35c;
        case 0x3ae360u: goto label_3ae360;
        case 0x3ae364u: goto label_3ae364;
        case 0x3ae368u: goto label_3ae368;
        case 0x3ae36cu: goto label_3ae36c;
        case 0x3ae370u: goto label_3ae370;
        case 0x3ae374u: goto label_3ae374;
        case 0x3ae378u: goto label_3ae378;
        case 0x3ae37cu: goto label_3ae37c;
        case 0x3ae380u: goto label_3ae380;
        case 0x3ae384u: goto label_3ae384;
        case 0x3ae388u: goto label_3ae388;
        case 0x3ae38cu: goto label_3ae38c;
        case 0x3ae390u: goto label_3ae390;
        case 0x3ae394u: goto label_3ae394;
        case 0x3ae398u: goto label_3ae398;
        case 0x3ae39cu: goto label_3ae39c;
        case 0x3ae3a0u: goto label_3ae3a0;
        case 0x3ae3a4u: goto label_3ae3a4;
        case 0x3ae3a8u: goto label_3ae3a8;
        case 0x3ae3acu: goto label_3ae3ac;
        case 0x3ae3b0u: goto label_3ae3b0;
        case 0x3ae3b4u: goto label_3ae3b4;
        case 0x3ae3b8u: goto label_3ae3b8;
        case 0x3ae3bcu: goto label_3ae3bc;
        case 0x3ae3c0u: goto label_3ae3c0;
        case 0x3ae3c4u: goto label_3ae3c4;
        case 0x3ae3c8u: goto label_3ae3c8;
        case 0x3ae3ccu: goto label_3ae3cc;
        case 0x3ae3d0u: goto label_3ae3d0;
        case 0x3ae3d4u: goto label_3ae3d4;
        case 0x3ae3d8u: goto label_3ae3d8;
        case 0x3ae3dcu: goto label_3ae3dc;
        case 0x3ae3e0u: goto label_3ae3e0;
        case 0x3ae3e4u: goto label_3ae3e4;
        case 0x3ae3e8u: goto label_3ae3e8;
        case 0x3ae3ecu: goto label_3ae3ec;
        case 0x3ae3f0u: goto label_3ae3f0;
        case 0x3ae3f4u: goto label_3ae3f4;
        case 0x3ae3f8u: goto label_3ae3f8;
        case 0x3ae3fcu: goto label_3ae3fc;
        case 0x3ae400u: goto label_3ae400;
        case 0x3ae404u: goto label_3ae404;
        case 0x3ae408u: goto label_3ae408;
        case 0x3ae40cu: goto label_3ae40c;
        case 0x3ae410u: goto label_3ae410;
        case 0x3ae414u: goto label_3ae414;
        case 0x3ae418u: goto label_3ae418;
        case 0x3ae41cu: goto label_3ae41c;
        case 0x3ae420u: goto label_3ae420;
        case 0x3ae424u: goto label_3ae424;
        case 0x3ae428u: goto label_3ae428;
        case 0x3ae42cu: goto label_3ae42c;
        case 0x3ae430u: goto label_3ae430;
        case 0x3ae434u: goto label_3ae434;
        case 0x3ae438u: goto label_3ae438;
        case 0x3ae43cu: goto label_3ae43c;
        case 0x3ae440u: goto label_3ae440;
        case 0x3ae444u: goto label_3ae444;
        case 0x3ae448u: goto label_3ae448;
        case 0x3ae44cu: goto label_3ae44c;
        case 0x3ae450u: goto label_3ae450;
        case 0x3ae454u: goto label_3ae454;
        case 0x3ae458u: goto label_3ae458;
        case 0x3ae45cu: goto label_3ae45c;
        case 0x3ae460u: goto label_3ae460;
        case 0x3ae464u: goto label_3ae464;
        case 0x3ae468u: goto label_3ae468;
        case 0x3ae46cu: goto label_3ae46c;
        case 0x3ae470u: goto label_3ae470;
        case 0x3ae474u: goto label_3ae474;
        case 0x3ae478u: goto label_3ae478;
        case 0x3ae47cu: goto label_3ae47c;
        case 0x3ae480u: goto label_3ae480;
        case 0x3ae484u: goto label_3ae484;
        case 0x3ae488u: goto label_3ae488;
        case 0x3ae48cu: goto label_3ae48c;
        case 0x3ae490u: goto label_3ae490;
        case 0x3ae494u: goto label_3ae494;
        case 0x3ae498u: goto label_3ae498;
        case 0x3ae49cu: goto label_3ae49c;
        case 0x3ae4a0u: goto label_3ae4a0;
        case 0x3ae4a4u: goto label_3ae4a4;
        case 0x3ae4a8u: goto label_3ae4a8;
        case 0x3ae4acu: goto label_3ae4ac;
        case 0x3ae4b0u: goto label_3ae4b0;
        case 0x3ae4b4u: goto label_3ae4b4;
        case 0x3ae4b8u: goto label_3ae4b8;
        case 0x3ae4bcu: goto label_3ae4bc;
        case 0x3ae4c0u: goto label_3ae4c0;
        case 0x3ae4c4u: goto label_3ae4c4;
        case 0x3ae4c8u: goto label_3ae4c8;
        case 0x3ae4ccu: goto label_3ae4cc;
        case 0x3ae4d0u: goto label_3ae4d0;
        case 0x3ae4d4u: goto label_3ae4d4;
        case 0x3ae4d8u: goto label_3ae4d8;
        case 0x3ae4dcu: goto label_3ae4dc;
        case 0x3ae4e0u: goto label_3ae4e0;
        case 0x3ae4e4u: goto label_3ae4e4;
        case 0x3ae4e8u: goto label_3ae4e8;
        case 0x3ae4ecu: goto label_3ae4ec;
        case 0x3ae4f0u: goto label_3ae4f0;
        case 0x3ae4f4u: goto label_3ae4f4;
        case 0x3ae4f8u: goto label_3ae4f8;
        case 0x3ae4fcu: goto label_3ae4fc;
        case 0x3ae500u: goto label_3ae500;
        case 0x3ae504u: goto label_3ae504;
        case 0x3ae508u: goto label_3ae508;
        case 0x3ae50cu: goto label_3ae50c;
        case 0x3ae510u: goto label_3ae510;
        case 0x3ae514u: goto label_3ae514;
        default: break;
    }

    ctx->pc = 0x3ae328u;

label_3ae328:
    // 0x3ae328: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3ae328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3ae32c:
    // 0x3ae32c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3ae32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3ae330:
    // 0x3ae330: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3ae330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3ae334:
    // 0x3ae334: 0x3c107a00  lui         $s0, 0x7A00
    ctx->pc = 0x3ae334u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31232 << 16));
label_3ae338:
    // 0x3ae338: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3ae338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3ae33c:
    // 0x3ae33c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ae33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae340:
    // 0x3ae340: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3ae340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3ae344:
    // 0x3ae344: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ae344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ae348:
    // 0x3ae348: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3ae348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3ae34c:
    // 0x3ae34c: 0x361015ff  ori         $s0, $s0, 0x15FF
    ctx->pc = 0x3ae34cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)5631);
label_3ae350:
    // 0x3ae350: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3ae350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3ae354:
    // 0x3ae354: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3ae354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3ae358:
    // 0x3ae358: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x3ae358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3ae35c:
    // 0x3ae35c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x3ae35cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3ae360:
    // 0x3ae360: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3ae360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3ae364:
    // 0x3ae364: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ae364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ae368:
    // 0x3ae368: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ae368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3ae36c:
    // 0x3ae36c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae370:
    // 0x3ae370: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ae370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ae374:
    // 0x3ae374: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ae374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ae378:
    // 0x3ae378: 0x40f809  jalr        $v0
label_3ae37c:
    if (ctx->pc == 0x3AE37Cu) {
        ctx->pc = 0x3AE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE378u;
        // 0x3ae37c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE380u;
        goto label_3ae380;
    }
    ctx->pc = 0x3AE378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE380u);
        ctx->pc = 0x3AE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE378u;
        // 0x3ae37c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE378u, 0x3AE380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE380u;
label_3ae380:
    // 0x3ae380: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ae380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ae384:
    // 0x3ae384: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ae384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae388:
    // 0x3ae388: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3ae388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3ae38c:
    // 0x3ae38c: 0xc1073cc  jal         func_41CF30
label_3ae390:
    if (ctx->pc == 0x3AE390u) {
        ctx->pc = 0x3AE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE38Cu;
        // 0x3ae390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE394u;
        goto label_3ae394;
    }
    ctx->pc = 0x3AE38Cu;
    SET_GPR_U32(ctx, 31, 0x3AE394u);
    ctx->pc = 0x3AE390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE38Cu;
    // 0x3ae390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3AE38Cu, 0x3AE394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE394u;
label_3ae394:
    // 0x3ae394: 0x3c0355c9  lui         $v1, 0x55C9
    ctx->pc = 0x3ae394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21961 << 16));
label_3ae398:
    // 0x3ae398: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3ae398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3ae39c:
    // 0x3ae39c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3ae39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3ae3a0:
    // 0x3ae3a0: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3ae3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3ae3a4:
    // 0x3ae3a4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3ae3a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3ae3a8:
    // 0x3ae3a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ae3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ae3ac:
    // 0x3ae3ac: 0xc0ea146  jal         func_3A8518
label_3ae3b0:
    if (ctx->pc == 0x3AE3B0u) {
        ctx->pc = 0x3AE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3ACu;
        // 0x3ae3b0: 0xae3000b0  sw          $s0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3B4u;
        goto label_3ae3b4;
    }
    ctx->pc = 0x3AE3ACu;
    SET_GPR_U32(ctx, 31, 0x3AE3B4u);
    ctx->pc = 0x3AE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE3ACu;
    // 0x3ae3b0: 0xae3000b0  sw          $s0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AE3ACu, 0x3AE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE3B4u;
label_3ae3b4:
    // 0x3ae3b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ae3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ae3b8:
    // 0x3ae3b8: 0xc0ea146  jal         func_3A8518
label_3ae3bc:
    if (ctx->pc == 0x3AE3BCu) {
        ctx->pc = 0x3AE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3B8u;
        // 0x3ae3bc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3C0u;
        goto label_3ae3c0;
    }
    ctx->pc = 0x3AE3B8u;
    SET_GPR_U32(ctx, 31, 0x3AE3C0u);
    ctx->pc = 0x3AE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE3B8u;
    // 0x3ae3bc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AE3B8u, 0x3AE3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE3C0u;
label_3ae3c0:
    // 0x3ae3c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ae3c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae3c4:
    // 0x3ae3c4: 0xc0ea13a  jal         func_3A84E8
label_3ae3c8:
    if (ctx->pc == 0x3AE3C8u) {
        ctx->pc = 0x3AE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3C4u;
        // 0x3ae3c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3CCu;
        goto label_3ae3cc;
    }
    ctx->pc = 0x3AE3C4u;
    SET_GPR_U32(ctx, 31, 0x3AE3CCu);
    ctx->pc = 0x3AE3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE3C4u;
    // 0x3ae3c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3AE3C4u, 0x3AE3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE3CCu;
label_3ae3cc:
    // 0x3ae3cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ae3ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ae3d0:
    // 0x3ae3d0: 0xc0ea14c  jal         func_3A8530
label_3ae3d4:
    if (ctx->pc == 0x3AE3D4u) {
        ctx->pc = 0x3AE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3D0u;
        // 0x3ae3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3D8u;
        goto label_3ae3d8;
    }
    ctx->pc = 0x3AE3D0u;
    SET_GPR_U32(ctx, 31, 0x3AE3D8u);
    ctx->pc = 0x3AE3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE3D0u;
    // 0x3ae3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AE3D0u, 0x3AE3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE3D8u;
label_3ae3d8:
    // 0x3ae3d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ae3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ae3dc:
    // 0x3ae3dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ae3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae3e0:
    // 0x3ae3e0: 0xc0e858c  jal         func_3A1630
label_3ae3e4:
    if (ctx->pc == 0x3AE3E4u) {
        ctx->pc = 0x3AE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3E0u;
        // 0x3ae3e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE3E8u;
        goto label_3ae3e8;
    }
    ctx->pc = 0x3AE3E0u;
    SET_GPR_U32(ctx, 31, 0x3AE3E8u);
    ctx->pc = 0x3AE3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE3E0u;
    // 0x3ae3e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AE3E0u, 0x3AE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE3E8u;
label_3ae3e8:
    // 0x3ae3e8: 0x361000ff  ori         $s0, $s0, 0xFF
    ctx->pc = 0x3ae3e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)255);
label_3ae3ec:
    // 0x3ae3ec: 0xe63500c0  swc1        $f21, 0xC0($s1)
    ctx->pc = 0x3ae3ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3ae3f0:
    // 0x3ae3f0: 0xae3000b4  sw          $s0, 0xB4($s1)
    ctx->pc = 0x3ae3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 16));
label_3ae3f4:
    // 0x3ae3f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ae3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae3f8:
    // 0x3ae3f8: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x3ae3f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3ae3fc:
    // 0x3ae3fc: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x3ae3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
label_3ae400:
    // 0x3ae400: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3ae400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3ae404:
    // 0x3ae404: 0xc047e6c  jal         func_11F9B0
label_3ae408:
    if (ctx->pc == 0x3AE408u) {
        ctx->pc = 0x3AE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE404u;
        // 0x3ae408: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE40Cu;
        goto label_3ae40c;
    }
    ctx->pc = 0x3AE404u;
    SET_GPR_U32(ctx, 31, 0x3AE40Cu);
    ctx->pc = 0x3AE408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE404u;
    // 0x3ae408: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3AE404u, 0x3AE40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE40Cu;
label_3ae40c:
    // 0x3ae40c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ae40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ae410:
    // 0x3ae410: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3ae410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3ae414:
    // 0x3ae414: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3ae414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3ae418:
    // 0x3ae418: 0xa0f809  jalr        $a1
label_3ae41c:
    if (ctx->pc == 0x3AE41Cu) {
        ctx->pc = 0x3AE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE418u;
        // 0x3ae41c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE420u;
        goto label_3ae420;
    }
    ctx->pc = 0x3AE418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3AE420u);
        ctx->pc = 0x3AE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE418u;
        // 0x3ae41c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE418u, 0x3AE420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE420u;
label_3ae420:
    // 0x3ae420: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3ae420u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3ae424:
    // 0x3ae424: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3ae424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ae428:
    // 0x3ae428: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ae428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ae42c:
    // 0x3ae42c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3ae42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3ae430:
    // 0x3ae430: 0xc0e8fcc  jal         func_3A3F30
label_3ae434:
    if (ctx->pc == 0x3AE434u) {
        ctx->pc = 0x3AE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE430u;
        // 0x3ae434: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE438u;
        goto label_3ae438;
    }
    ctx->pc = 0x3AE430u;
    SET_GPR_U32(ctx, 31, 0x3AE438u);
    ctx->pc = 0x3AE434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE430u;
    // 0x3ae434: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F30u, 0x3AE430u, 0x3AE438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE438u;
label_3ae438:
    // 0x3ae438: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x3ae438u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ae43c:
    // 0x3ae43c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ae43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3ae440:
    // 0x3ae440: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ae440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ae444:
    // 0x3ae444: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x3ae444u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
label_3ae448:
    // 0x3ae448: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3ae448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3ae44c:
    // 0x3ae44c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3ae44cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ae450:
    // 0x3ae450: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ae450u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae454:
    // 0x3ae454: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ae454u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ae458:
    // 0x3ae458: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3ae458u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3ae45c:
    // 0x3ae45c: 0x4405a800  mfc1        $a1, $f21
    ctx->pc = 0x3ae45cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ae460:
    // 0x3ae460: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ae460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ae464:
    // 0x3ae464: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3ae464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae468:
    // 0x3ae468: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3ae468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae46c:
    // 0x3ae46c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3ae46cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae470:
    // 0x3ae470: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3ae470u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3ae474:
    // 0x3ae474: 0x4a0003bf  vwaitq
    ctx->pc = 0x3ae474u;
    // VWAITQ (Q already resolved in this runtime)
label_3ae478:
    // 0x3ae478: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3ae478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ae47c:
    // 0x3ae47c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3ae47cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ae480:
    // 0x3ae480: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3ae480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3ae484:
    // 0x3ae484: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ae484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ae488:
    // 0x3ae488: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3ae488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3ae48c:
    // 0x3ae48c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3ae48cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ae490:
    // 0x3ae490: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x3ae490u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ae494:
    // 0x3ae494: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ae494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ae498:
    // 0x3ae498: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3ae498u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3ae49c:
    // 0x3ae49c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3ae49cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3ae4a0:
    // 0x3ae4a0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ae4a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ae4a4:
    // 0x3ae4a4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ae4a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ae4a8:
    // 0x3ae4a8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x3ae4a8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_3ae4ac:
    // 0x3ae4ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3ae4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3ae4b0:
    // 0x3ae4b0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3ae4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3ae4b4:
    // 0x3ae4b4: 0x36940007  ori         $s4, $s4, 0x7
    ctx->pc = 0x3ae4b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)7);
label_3ae4b8:
    // 0x3ae4b8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3ae4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3ae4bc:
    // 0x3ae4bc: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x3ae4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_3ae4c0:
    // 0x3ae4c0: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x3ae4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_3ae4c4:
    // 0x3ae4c4: 0xae3400c4  sw          $s4, 0xC4($s1)
    ctx->pc = 0x3ae4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 20));
label_3ae4c8:
    // 0x3ae4c8: 0x7e250010  sq          $a1, 0x10($s1)
    ctx->pc = 0x3ae4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 5));
label_3ae4cc:
    // 0x3ae4cc: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3ae4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3ae4d0:
    // 0x3ae4d0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3ae4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ae4d4:
    // 0x3ae4d4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3ae4d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ae4d8:
    // 0x3ae4d8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3ae4d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ae4dc:
    // 0x3ae4dc: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3ae4dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ae4e0:
    // 0x3ae4e0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3ae4e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ae4e4:
    // 0x3ae4e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3ae4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3ae4e8:
    // 0x3ae4e8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x3ae4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ae4ec:
    // 0x3ae4ec: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3ae4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ae4f0:
    // 0x3ae4f0: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x3ae4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_3ae4f4:
    // 0x3ae4f4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3ae4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3ae4f8:
    // 0x3ae4f8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3ae4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3ae4fc:
    // 0x3ae4fc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3ae4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3ae500:
    // 0x3ae500: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x3ae500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_3ae504:
    // 0x3ae504: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x3ae504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_3ae508:
    // 0x3ae508: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x3ae508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_3ae50c:
    // 0x3ae50c: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x3ae50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_3ae510:
    // 0x3ae510: 0x3e00008  jr          $ra
label_3ae514:
    if (ctx->pc == 0x3AE514u) {
        ctx->pc = 0x3AE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE510u;
        // 0x3ae514: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE518u;
        goto label_fallthrough_0x3ae510;
    }
    ctx->pc = 0x3AE510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE510u;
        // 0x3ae514: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ae510:
    ctx->pc = 0x3AE518u;
}
