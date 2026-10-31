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

// Function: sub_003AA3E0
// Address: 0x3aa3e0 - 0x3aa528
void sub_003AA3E0_0x3aa3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA3E0_0x3aa3e0");
#endif

    switch (ctx->pc) {
        case 0x3aa3e0u: goto label_3aa3e0;
        case 0x3aa3e4u: goto label_3aa3e4;
        case 0x3aa3e8u: goto label_3aa3e8;
        case 0x3aa3ecu: goto label_3aa3ec;
        case 0x3aa3f0u: goto label_3aa3f0;
        case 0x3aa3f4u: goto label_3aa3f4;
        case 0x3aa3f8u: goto label_3aa3f8;
        case 0x3aa3fcu: goto label_3aa3fc;
        case 0x3aa400u: goto label_3aa400;
        case 0x3aa404u: goto label_3aa404;
        case 0x3aa408u: goto label_3aa408;
        case 0x3aa40cu: goto label_3aa40c;
        case 0x3aa410u: goto label_3aa410;
        case 0x3aa414u: goto label_3aa414;
        case 0x3aa418u: goto label_3aa418;
        case 0x3aa41cu: goto label_3aa41c;
        case 0x3aa420u: goto label_3aa420;
        case 0x3aa424u: goto label_3aa424;
        case 0x3aa428u: goto label_3aa428;
        case 0x3aa42cu: goto label_3aa42c;
        case 0x3aa430u: goto label_3aa430;
        case 0x3aa434u: goto label_3aa434;
        case 0x3aa438u: goto label_3aa438;
        case 0x3aa43cu: goto label_3aa43c;
        case 0x3aa440u: goto label_3aa440;
        case 0x3aa444u: goto label_3aa444;
        case 0x3aa448u: goto label_3aa448;
        case 0x3aa44cu: goto label_3aa44c;
        case 0x3aa450u: goto label_3aa450;
        case 0x3aa454u: goto label_3aa454;
        case 0x3aa458u: goto label_3aa458;
        case 0x3aa45cu: goto label_3aa45c;
        case 0x3aa460u: goto label_3aa460;
        case 0x3aa464u: goto label_3aa464;
        case 0x3aa468u: goto label_3aa468;
        case 0x3aa46cu: goto label_3aa46c;
        case 0x3aa470u: goto label_3aa470;
        case 0x3aa474u: goto label_3aa474;
        case 0x3aa478u: goto label_3aa478;
        case 0x3aa47cu: goto label_3aa47c;
        case 0x3aa480u: goto label_3aa480;
        case 0x3aa484u: goto label_3aa484;
        case 0x3aa488u: goto label_3aa488;
        case 0x3aa48cu: goto label_3aa48c;
        case 0x3aa490u: goto label_3aa490;
        case 0x3aa494u: goto label_3aa494;
        case 0x3aa498u: goto label_3aa498;
        case 0x3aa49cu: goto label_3aa49c;
        case 0x3aa4a0u: goto label_3aa4a0;
        case 0x3aa4a4u: goto label_3aa4a4;
        case 0x3aa4a8u: goto label_3aa4a8;
        case 0x3aa4acu: goto label_3aa4ac;
        case 0x3aa4b0u: goto label_3aa4b0;
        case 0x3aa4b4u: goto label_3aa4b4;
        case 0x3aa4b8u: goto label_3aa4b8;
        case 0x3aa4bcu: goto label_3aa4bc;
        case 0x3aa4c0u: goto label_3aa4c0;
        case 0x3aa4c4u: goto label_3aa4c4;
        case 0x3aa4c8u: goto label_3aa4c8;
        case 0x3aa4ccu: goto label_3aa4cc;
        case 0x3aa4d0u: goto label_3aa4d0;
        case 0x3aa4d4u: goto label_3aa4d4;
        case 0x3aa4d8u: goto label_3aa4d8;
        case 0x3aa4dcu: goto label_3aa4dc;
        case 0x3aa4e0u: goto label_3aa4e0;
        case 0x3aa4e4u: goto label_3aa4e4;
        case 0x3aa4e8u: goto label_3aa4e8;
        case 0x3aa4ecu: goto label_3aa4ec;
        case 0x3aa4f0u: goto label_3aa4f0;
        case 0x3aa4f4u: goto label_3aa4f4;
        case 0x3aa4f8u: goto label_3aa4f8;
        case 0x3aa4fcu: goto label_3aa4fc;
        case 0x3aa500u: goto label_3aa500;
        case 0x3aa504u: goto label_3aa504;
        case 0x3aa508u: goto label_3aa508;
        case 0x3aa50cu: goto label_3aa50c;
        case 0x3aa510u: goto label_3aa510;
        case 0x3aa514u: goto label_3aa514;
        case 0x3aa518u: goto label_3aa518;
        case 0x3aa51cu: goto label_3aa51c;
        case 0x3aa520u: goto label_3aa520;
        case 0x3aa524u: goto label_3aa524;
        default: break;
    }

    ctx->pc = 0x3aa3e0u;

label_3aa3e0:
    // 0x3aa3e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3aa3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3aa3e4:
    // 0x3aa3e4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3aa3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3aa3e8:
    // 0x3aa3e8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3aa3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3aa3ec:
    // 0x3aa3ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3aa3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3aa3f0:
    // 0x3aa3f0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3aa3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3aa3f4:
    // 0x3aa3f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3aa3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa3f8:
    // 0x3aa3f8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3aa3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3aa3fc:
    // 0x3aa3fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3aa3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3aa400:
    // 0x3aa400: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aa400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3aa404:
    // 0x3aa404: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aa404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aa408:
    // 0x3aa408: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aa408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aa40c:
    // 0x3aa40c: 0x40f809  jalr        $v0
label_3aa410:
    if (ctx->pc == 0x3AA410u) {
        ctx->pc = 0x3AA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA40Cu;
        // 0x3aa410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA414u;
        goto label_3aa414;
    }
    ctx->pc = 0x3AA40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA414u);
        ctx->pc = 0x3AA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA40Cu;
        // 0x3aa410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA40Cu, 0x3AA414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA414u;
label_3aa414:
    // 0x3aa414: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3aa414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa418:
    // 0x3aa418: 0xc0ea146  jal         func_3A8518
label_3aa41c:
    if (ctx->pc == 0x3AA41Cu) {
        ctx->pc = 0x3AA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA418u;
        // 0x3aa41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA420u;
        goto label_3aa420;
    }
    ctx->pc = 0x3AA418u;
    SET_GPR_U32(ctx, 31, 0x3AA420u);
    ctx->pc = 0x3AA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA418u;
    // 0x3aa41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AA418u, 0x3AA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA420u;
label_3aa420:
    // 0x3aa420: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aa420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa424:
    // 0x3aa424: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3aa424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa428:
    // 0x3aa428: 0xc0ea12a  jal         func_3A84A8
label_3aa42c:
    if (ctx->pc == 0x3AA42Cu) {
        ctx->pc = 0x3AA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA428u;
        // 0x3aa42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA430u;
        goto label_3aa430;
    }
    ctx->pc = 0x3AA428u;
    SET_GPR_U32(ctx, 31, 0x3AA430u);
    ctx->pc = 0x3AA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA428u;
    // 0x3aa42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AA428u, 0x3AA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA430u;
label_3aa430:
    // 0x3aa430: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aa430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aa434:
    // 0x3aa434: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aa434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa438:
    // 0x3aa438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aa438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa43c:
    // 0x3aa43c: 0xc0ea12a  jal         func_3A84A8
label_3aa440:
    if (ctx->pc == 0x3AA440u) {
        ctx->pc = 0x3AA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA43Cu;
        // 0x3aa440: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA444u;
        goto label_3aa444;
    }
    ctx->pc = 0x3AA43Cu;
    SET_GPR_U32(ctx, 31, 0x3AA444u);
    ctx->pc = 0x3AA440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA43Cu;
    // 0x3aa440: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AA43Cu, 0x3AA444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA444u;
label_3aa444:
    // 0x3aa444: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aa444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aa448:
    // 0x3aa448: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3aa448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3aa44c:
    // 0x3aa44c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3aa44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3aa450:
    // 0x3aa450: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3aa450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aa454:
    // 0x3aa454: 0xc0cd4ee  jal         func_3353B8
label_3aa458:
    if (ctx->pc == 0x3AA458u) {
        ctx->pc = 0x3AA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA454u;
        // 0x3aa458: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA45Cu;
        goto label_3aa45c;
    }
    ctx->pc = 0x3AA454u;
    SET_GPR_U32(ctx, 31, 0x3AA45Cu);
    ctx->pc = 0x3AA458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA454u;
    // 0x3aa458: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AA454u, 0x3AA45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA45Cu;
label_3aa45c:
    // 0x3aa45c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3aa45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3aa460:
    // 0x3aa460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aa460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa464:
    // 0x3aa464: 0x34630036  ori         $v1, $v1, 0x36
    ctx->pc = 0x3aa464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54);
label_3aa468:
    // 0x3aa468: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3aa468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3aa46c:
    // 0x3aa46c: 0xc0e858c  jal         func_3A1630
label_3aa470:
    if (ctx->pc == 0x3AA470u) {
        ctx->pc = 0x3AA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA46Cu;
        // 0x3aa470: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA474u;
        goto label_3aa474;
    }
    ctx->pc = 0x3AA46Cu;
    SET_GPR_U32(ctx, 31, 0x3AA474u);
    ctx->pc = 0x3AA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA46Cu;
    // 0x3aa470: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AA46Cu, 0x3AA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA474u;
label_3aa474:
    // 0x3aa474: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3aa474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3aa478:
    // 0x3aa478: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3aa478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3aa47c:
    // 0x3aa47c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3aa47cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3aa480:
    // 0x3aa480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aa480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa484:
    // 0x3aa484: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3aa484u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa488:
    // 0x3aa488: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x3aa488u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3aa48c:
    // 0x3aa48c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3aa48cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_3aa490:
    // 0x3aa490: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x3aa490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_3aa494:
    // 0x3aa494: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3aa494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3aa498:
    // 0x3aa498: 0x2509025  or          $s2, $s2, $s0
    ctx->pc = 0x3aa498u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 16));
label_3aa49c:
    // 0x3aa49c: 0x34630048  ori         $v1, $v1, 0x48
    ctx->pc = 0x3aa49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)72);
label_3aa4a0:
    // 0x3aa4a0: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x3aa4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
label_3aa4a4:
    // 0x3aa4a4: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3aa4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3aa4a8:
    // 0x3aa4a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3aa4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3aa4ac:
    // 0x3aa4ac: 0xae3200c4  sw          $s2, 0xC4($s1)
    ctx->pc = 0x3aa4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 18));
label_3aa4b0:
    // 0x3aa4b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3aa4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa4b4:
    // 0x3aa4b4: 0x7e260010  sq          $a2, 0x10($s1)
    ctx->pc = 0x3aa4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
label_3aa4b8:
    // 0x3aa4b8: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x3aa4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
label_3aa4bc:
    // 0x3aa4bc: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3aa4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3aa4c0:
    // 0x3aa4c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3aa4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3aa4c4:
    // 0x3aa4c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aa4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa4c8:
    // 0x3aa4c8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3aa4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3aa4cc:
    // 0x3aa4cc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3aa4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3aa4d0:
    // 0x3aa4d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3aa4d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3aa4d4:
    // 0x3aa4d4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3aa4d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aa4d8:
    // 0x3aa4d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3aa4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aa4dc:
    // 0x3aa4dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3aa4dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aa4e0:
    // 0x3aa4e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3aa4e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3aa4e4:
    // 0x3aa4e4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3aa4e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3aa4e8:
    // 0x3aa4e8: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3aa4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3aa4ec:
    // 0x3aa4ec: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3aa4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3aa4f0:
    // 0x3aa4f0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3aa4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3aa4f4:
    // 0x3aa4f4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3aa4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3aa4f8:
    // 0x3aa4f8: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3aa4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3aa4fc:
    // 0x3aa4fc: 0x60f809  jalr        $v1
label_3aa500:
    if (ctx->pc == 0x3AA500u) {
        ctx->pc = 0x3AA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4FCu;
        // 0x3aa500: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA504u;
        goto label_3aa504;
    }
    ctx->pc = 0x3AA4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AA504u);
        ctx->pc = 0x3AA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4FCu;
        // 0x3aa500: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA4FCu, 0x3AA504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA504u;
label_3aa504:
    // 0x3aa504: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3aa504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3aa508:
    // 0x3aa508: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3aa508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3aa50c:
    // 0x3aa50c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3aa50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3aa510:
    // 0x3aa510: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3aa510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3aa514:
    // 0x3aa514: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3aa514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3aa518:
    // 0x3aa518: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3aa518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3aa51c:
    // 0x3aa51c: 0x3e00008  jr          $ra
label_3aa520:
    if (ctx->pc == 0x3AA520u) {
        ctx->pc = 0x3AA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA51Cu;
        // 0x3aa520: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA524u;
        goto label_3aa524;
    }
    ctx->pc = 0x3AA51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA51Cu;
        // 0x3aa520: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA524u;
label_3aa524:
    // 0x3aa524: 0x0  nop
    ctx->pc = 0x3aa524u;
    // NOP
    ctx->pc = 0x3aa528u;
}
