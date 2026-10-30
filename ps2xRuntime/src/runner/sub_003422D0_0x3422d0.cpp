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

// Function: sub_003422D0
// Address: 0x3422d0 - 0x3425c0
void sub_003422D0_0x3422d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003422D0_0x3422d0");
#endif

    switch (ctx->pc) {
        case 0x3422d0u: goto label_3422d0;
        case 0x3422d4u: goto label_3422d4;
        case 0x3422d8u: goto label_3422d8;
        case 0x3422dcu: goto label_3422dc;
        case 0x3422e0u: goto label_3422e0;
        case 0x3422e4u: goto label_3422e4;
        case 0x3422e8u: goto label_3422e8;
        case 0x3422ecu: goto label_3422ec;
        case 0x3422f0u: goto label_3422f0;
        case 0x3422f4u: goto label_3422f4;
        case 0x3422f8u: goto label_3422f8;
        case 0x3422fcu: goto label_3422fc;
        case 0x342300u: goto label_342300;
        case 0x342304u: goto label_342304;
        case 0x342308u: goto label_342308;
        case 0x34230cu: goto label_34230c;
        case 0x342310u: goto label_342310;
        case 0x342314u: goto label_342314;
        case 0x342318u: goto label_342318;
        case 0x34231cu: goto label_34231c;
        case 0x342320u: goto label_342320;
        case 0x342324u: goto label_342324;
        case 0x342328u: goto label_342328;
        case 0x34232cu: goto label_34232c;
        case 0x342330u: goto label_342330;
        case 0x342334u: goto label_342334;
        case 0x342338u: goto label_342338;
        case 0x34233cu: goto label_34233c;
        case 0x342340u: goto label_342340;
        case 0x342344u: goto label_342344;
        case 0x342348u: goto label_342348;
        case 0x34234cu: goto label_34234c;
        case 0x342350u: goto label_342350;
        case 0x342354u: goto label_342354;
        case 0x342358u: goto label_342358;
        case 0x34235cu: goto label_34235c;
        case 0x342360u: goto label_342360;
        case 0x342364u: goto label_342364;
        case 0x342368u: goto label_342368;
        case 0x34236cu: goto label_34236c;
        case 0x342370u: goto label_342370;
        case 0x342374u: goto label_342374;
        case 0x342378u: goto label_342378;
        case 0x34237cu: goto label_34237c;
        case 0x342380u: goto label_342380;
        case 0x342384u: goto label_342384;
        case 0x342388u: goto label_342388;
        case 0x34238cu: goto label_34238c;
        case 0x342390u: goto label_342390;
        case 0x342394u: goto label_342394;
        case 0x342398u: goto label_342398;
        case 0x34239cu: goto label_34239c;
        case 0x3423a0u: goto label_3423a0;
        case 0x3423a4u: goto label_3423a4;
        case 0x3423a8u: goto label_3423a8;
        case 0x3423acu: goto label_3423ac;
        case 0x3423b0u: goto label_3423b0;
        case 0x3423b4u: goto label_3423b4;
        case 0x3423b8u: goto label_3423b8;
        case 0x3423bcu: goto label_3423bc;
        case 0x3423c0u: goto label_3423c0;
        case 0x3423c4u: goto label_3423c4;
        case 0x3423c8u: goto label_3423c8;
        case 0x3423ccu: goto label_3423cc;
        case 0x3423d0u: goto label_3423d0;
        case 0x3423d4u: goto label_3423d4;
        case 0x3423d8u: goto label_3423d8;
        case 0x3423dcu: goto label_3423dc;
        case 0x3423e0u: goto label_3423e0;
        case 0x3423e4u: goto label_3423e4;
        case 0x3423e8u: goto label_3423e8;
        case 0x3423ecu: goto label_3423ec;
        case 0x3423f0u: goto label_3423f0;
        case 0x3423f4u: goto label_3423f4;
        case 0x3423f8u: goto label_3423f8;
        case 0x3423fcu: goto label_3423fc;
        case 0x342400u: goto label_342400;
        case 0x342404u: goto label_342404;
        case 0x342408u: goto label_342408;
        case 0x34240cu: goto label_34240c;
        case 0x342410u: goto label_342410;
        case 0x342414u: goto label_342414;
        case 0x342418u: goto label_342418;
        case 0x34241cu: goto label_34241c;
        case 0x342420u: goto label_342420;
        case 0x342424u: goto label_342424;
        case 0x342428u: goto label_342428;
        case 0x34242cu: goto label_34242c;
        case 0x342430u: goto label_342430;
        case 0x342434u: goto label_342434;
        case 0x342438u: goto label_342438;
        case 0x34243cu: goto label_34243c;
        case 0x342440u: goto label_342440;
        case 0x342444u: goto label_342444;
        case 0x342448u: goto label_342448;
        case 0x34244cu: goto label_34244c;
        case 0x342450u: goto label_342450;
        case 0x342454u: goto label_342454;
        case 0x342458u: goto label_342458;
        case 0x34245cu: goto label_34245c;
        case 0x342460u: goto label_342460;
        case 0x342464u: goto label_342464;
        case 0x342468u: goto label_342468;
        case 0x34246cu: goto label_34246c;
        case 0x342470u: goto label_342470;
        case 0x342474u: goto label_342474;
        case 0x342478u: goto label_342478;
        case 0x34247cu: goto label_34247c;
        case 0x342480u: goto label_342480;
        case 0x342484u: goto label_342484;
        case 0x342488u: goto label_342488;
        case 0x34248cu: goto label_34248c;
        case 0x342490u: goto label_342490;
        case 0x342494u: goto label_342494;
        case 0x342498u: goto label_342498;
        case 0x34249cu: goto label_34249c;
        case 0x3424a0u: goto label_3424a0;
        case 0x3424a4u: goto label_3424a4;
        case 0x3424a8u: goto label_3424a8;
        case 0x3424acu: goto label_3424ac;
        case 0x3424b0u: goto label_3424b0;
        case 0x3424b4u: goto label_3424b4;
        case 0x3424b8u: goto label_3424b8;
        case 0x3424bcu: goto label_3424bc;
        case 0x3424c0u: goto label_3424c0;
        case 0x3424c4u: goto label_3424c4;
        case 0x3424c8u: goto label_3424c8;
        case 0x3424ccu: goto label_3424cc;
        case 0x3424d0u: goto label_3424d0;
        case 0x3424d4u: goto label_3424d4;
        case 0x3424d8u: goto label_3424d8;
        case 0x3424dcu: goto label_3424dc;
        case 0x3424e0u: goto label_3424e0;
        case 0x3424e4u: goto label_3424e4;
        case 0x3424e8u: goto label_3424e8;
        case 0x3424ecu: goto label_3424ec;
        case 0x3424f0u: goto label_3424f0;
        case 0x3424f4u: goto label_3424f4;
        case 0x3424f8u: goto label_3424f8;
        case 0x3424fcu: goto label_3424fc;
        case 0x342500u: goto label_342500;
        case 0x342504u: goto label_342504;
        case 0x342508u: goto label_342508;
        case 0x34250cu: goto label_34250c;
        case 0x342510u: goto label_342510;
        case 0x342514u: goto label_342514;
        case 0x342518u: goto label_342518;
        case 0x34251cu: goto label_34251c;
        case 0x342520u: goto label_342520;
        case 0x342524u: goto label_342524;
        case 0x342528u: goto label_342528;
        case 0x34252cu: goto label_34252c;
        case 0x342530u: goto label_342530;
        case 0x342534u: goto label_342534;
        case 0x342538u: goto label_342538;
        case 0x34253cu: goto label_34253c;
        case 0x342540u: goto label_342540;
        case 0x342544u: goto label_342544;
        case 0x342548u: goto label_342548;
        case 0x34254cu: goto label_34254c;
        case 0x342550u: goto label_342550;
        case 0x342554u: goto label_342554;
        case 0x342558u: goto label_342558;
        case 0x34255cu: goto label_34255c;
        case 0x342560u: goto label_342560;
        case 0x342564u: goto label_342564;
        case 0x342568u: goto label_342568;
        case 0x34256cu: goto label_34256c;
        case 0x342570u: goto label_342570;
        case 0x342574u: goto label_342574;
        case 0x342578u: goto label_342578;
        case 0x34257cu: goto label_34257c;
        case 0x342580u: goto label_342580;
        case 0x342584u: goto label_342584;
        case 0x342588u: goto label_342588;
        case 0x34258cu: goto label_34258c;
        case 0x342590u: goto label_342590;
        case 0x342594u: goto label_342594;
        case 0x342598u: goto label_342598;
        case 0x34259cu: goto label_34259c;
        case 0x3425a0u: goto label_3425a0;
        case 0x3425a4u: goto label_3425a4;
        case 0x3425a8u: goto label_3425a8;
        case 0x3425acu: goto label_3425ac;
        case 0x3425b0u: goto label_3425b0;
        case 0x3425b4u: goto label_3425b4;
        case 0x3425b8u: goto label_3425b8;
        case 0x3425bcu: goto label_3425bc;
        default: break;
    }

    ctx->pc = 0x3422d0u;

label_3422d0:
    // 0x3422d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3422d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3422d4:
    // 0x3422d4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3422d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3422d8:
    // 0x3422d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3422d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3422dc:
    // 0x3422dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3422dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3422e0:
    // 0x3422e0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3422e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3422e4:
    // 0x3422e4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3422e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3422e8:
    // 0x3422e8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3422e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3422ec:
    // 0x3422ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3422ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3422f0:
    // 0x3422f0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x3422f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3422f4:
    // 0x3422f4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3422f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3422f8:
    // 0x3422f8: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x3422f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3422fc:
    // 0x3422fc: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3422fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_342300:
    // 0x342300: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
label_342304:
    if (ctx->pc == 0x342304u) {
        ctx->pc = 0x342304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342300u;
        // 0x342304: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342308u;
        goto label_342308;
    }
    ctx->pc = 0x342300u;
    {
        const bool branch_taken_0x342300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342300u;
        // 0x342304: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342300) {
            ctx->pc = 0x342594u;
            goto label_342594;
        }
    }
    ctx->pc = 0x342308u;
label_342308:
    // 0x342308: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x342308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34230c:
    // 0x34230c: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x34230cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
label_342310:
    // 0x342310: 0x6630014  bgezl       $s3, . + 4 + (0x14 << 2)
label_342314:
    if (ctx->pc == 0x342314u) {
        ctx->pc = 0x342314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342310u;
        // 0x342314: 0x8e4200d0  lw          $v0, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342318u;
        goto label_342318;
    }
    ctx->pc = 0x342310u;
    {
        const bool branch_taken_0x342310 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x342310) {
            ctx->pc = 0x342314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342310u;
            // 0x342314: 0x8e4200d0  lw          $v0, 0xD0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342364u;
            goto label_342364;
        }
    }
    ctx->pc = 0x342318u;
label_342318:
    // 0x342318: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x342318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_34231c:
    // 0x34231c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x34231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_342320:
    // 0x342320: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x342320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_342324:
    // 0x342324: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x342324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_342328:
    // 0x342328: 0x60f809  jalr        $v1
label_34232c:
    if (ctx->pc == 0x34232Cu) {
        ctx->pc = 0x34232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342328u;
        // 0x34232c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342330u;
        goto label_342330;
    }
    ctx->pc = 0x342328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x342330u);
        ctx->pc = 0x34232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342328u;
        // 0x34232c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342328u, 0x342330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342330u;
label_342330:
    // 0x342330: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x342330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_342334:
    // 0x342334: 0xc0d058e  jal         func_341638
label_342338:
    if (ctx->pc == 0x342338u) {
        ctx->pc = 0x342338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342334u;
        // 0x342338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34233Cu;
        goto label_34233c;
    }
    ctx->pc = 0x342334u;
    SET_GPR_U32(ctx, 31, 0x34233Cu);
    ctx->pc = 0x342338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342334u;
    // 0x342338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341638u, 0x342334u, 0x34233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34233Cu;
label_34233c:
    // 0x34233c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x34233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_342340:
    // 0x342340: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x342340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_342344:
    // 0x342344: 0xc0d018a  jal         func_340628
label_342348:
    if (ctx->pc == 0x342348u) {
        ctx->pc = 0x342348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342344u;
        // 0x342348: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34234Cu;
        goto label_34234c;
    }
    ctx->pc = 0x342344u;
    SET_GPR_U32(ctx, 31, 0x34234Cu);
    ctx->pc = 0x342348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342344u;
    // 0x342348: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340628u, 0x342344u, 0x34234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34234Cu;
label_34234c:
    // 0x34234c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x34234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_342350:
    // 0x342350: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x342350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_342354:
    // 0x342354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x342354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_342358:
    // 0x342358: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x342358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_34235c:
    // 0x34235c: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x34235cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
label_342360:
    // 0x342360: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x342360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_342364:
    // 0x342364: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_342368:
    if (ctx->pc == 0x342368u) {
        ctx->pc = 0x342368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342364u;
        // 0x342368: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34236Cu;
        goto label_34236c;
    }
    ctx->pc = 0x342364u;
    {
        const bool branch_taken_0x342364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342364u;
        // 0x342368: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342364) {
            ctx->pc = 0x3423B0u;
            goto label_3423b0;
        }
    }
    ctx->pc = 0x34236Cu;
label_34236c:
    // 0x34236c: 0xc089bfc  jal         func_226FF0
label_342370:
    if (ctx->pc == 0x342370u) {
        ctx->pc = 0x342370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34236Cu;
        // 0x342370: 0x2709825  or          $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342374u;
        goto label_342374;
    }
    ctx->pc = 0x34236Cu;
    SET_GPR_U32(ctx, 31, 0x342374u);
    ctx->pc = 0x342370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34236Cu;
    // 0x342370: 0x2709825  or          $s3, $s3, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x34236Cu, 0x342374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342374u;
label_342374:
    // 0x342374: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x342374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_342378:
    // 0x342378: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x342378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_34237c:
    // 0x34237c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_342380:
    if (ctx->pc == 0x342380u) {
        ctx->pc = 0x342380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34237Cu;
        // 0x342380: 0x42880b  movn        $s1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342384u;
        goto label_342384;
    }
    ctx->pc = 0x34237Cu;
    {
        const bool branch_taken_0x34237c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x342380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34237Cu;
        // 0x342380: 0x42880b  movn        $s1, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34237c) {
            ctx->pc = 0x3423BCu;
            goto label_3423bc;
        }
    }
    ctx->pc = 0x342384u;
label_342384:
    // 0x342384: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x342384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_342388:
    // 0x342388: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x342388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34238c:
    // 0x34238c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x34238cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_342390:
    // 0x342390: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x342390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_342394:
    // 0x342394: 0x60f809  jalr        $v1
label_342398:
    if (ctx->pc == 0x342398u) {
        ctx->pc = 0x342398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342394u;
        // 0x342398: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34239Cu;
        goto label_34239c;
    }
    ctx->pc = 0x342394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34239Cu);
        ctx->pc = 0x342398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342394u;
        // 0x342398: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342394u, 0x34239Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34239Cu;
label_34239c:
    // 0x34239c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x34239cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3423a0:
    // 0x3423a0: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_3423a4:
    if (ctx->pc == 0x3423A4u) {
        ctx->pc = 0x3423A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423A0u;
        // 0x3423a4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423A8u;
        goto label_3423a8;
    }
    ctx->pc = 0x3423A0u;
    {
        const bool branch_taken_0x3423a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3423a0) {
            ctx->pc = 0x3423A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3423A0u;
            // 0x3423a4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342388;
        }
    }
    ctx->pc = 0x3423A8u;
label_3423a8:
    // 0x3423a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3423ac:
    if (ctx->pc == 0x3423ACu) {
        ctx->pc = 0x3423B0u;
        goto label_3423b0;
    }
    ctx->pc = 0x3423A8u;
    {
        const bool branch_taken_0x3423a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423a8) {
            ctx->pc = 0x3423BCu;
            goto label_3423bc;
        }
    }
    ctx->pc = 0x3423B0u;
label_3423b0:
    // 0x3423b0: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x3423b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_3423b4:
    // 0x3423b4: 0x2701025  or          $v0, $s3, $s0
    ctx->pc = 0x3423b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 16));
label_3423b8:
    // 0x3423b8: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x3423b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_3423bc:
    // 0x3423bc: 0x663005e  bgezl       $s3, . + 4 + (0x5E << 2)
label_3423c0:
    if (ctx->pc == 0x3423C0u) {
        ctx->pc = 0x3423C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423BCu;
        // 0x3423c0: 0x8e500080  lw          $s0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423C4u;
        goto label_3423c4;
    }
    ctx->pc = 0x3423BCu;
    {
        const bool branch_taken_0x3423bc = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x3423bc) {
            ctx->pc = 0x3423C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3423BCu;
            // 0x3423c0: 0x8e500080  lw          $s0, 0x80($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342538u;
            goto label_342538;
        }
    }
    ctx->pc = 0x3423C4u;
label_3423c4:
    // 0x3423c4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3423c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3423c8:
    // 0x3423c8: 0xc08a61a  jal         func_229868
label_3423cc:
    if (ctx->pc == 0x3423CCu) {
        ctx->pc = 0x3423CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423C8u;
        // 0x3423cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423D0u;
        goto label_3423d0;
    }
    ctx->pc = 0x3423C8u;
    SET_GPR_U32(ctx, 31, 0x3423D0u);
    ctx->pc = 0x3423CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3423C8u;
    // 0x3423cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3423C8u, 0x3423D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3423D0u;
label_3423d0:
    // 0x3423d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3423d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3423d4:
    // 0x3423d4: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_3423d8:
    if (ctx->pc == 0x3423D8u) {
        ctx->pc = 0x3423D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423D4u;
        // 0x3423d8: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423DCu;
        goto label_3423dc;
    }
    ctx->pc = 0x3423D4u;
    {
        const bool branch_taken_0x3423d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423d4) {
            ctx->pc = 0x3423D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3423D4u;
            // 0x3423d8: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342410u;
            goto label_342410;
        }
    }
    ctx->pc = 0x3423DCu;
label_3423dc:
    // 0x3423dc: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x3423dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_3423e0:
    // 0x3423e0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3423e4:
    if (ctx->pc == 0x3423E4u) {
        ctx->pc = 0x3423E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423E0u;
        // 0x3423e4: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423E8u;
        goto label_3423e8;
    }
    ctx->pc = 0x3423E0u;
    {
        const bool branch_taken_0x3423e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423e0) {
            ctx->pc = 0x3423E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3423E0u;
            // 0x3423e4: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342410u;
            goto label_342410;
        }
    }
    ctx->pc = 0x3423E8u;
label_3423e8:
    // 0x3423e8: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x3423e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
label_3423ec:
    // 0x3423ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3423f0:
    if (ctx->pc == 0x3423F0u) {
        ctx->pc = 0x3423F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423ECu;
        // 0x3423f0: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423F4u;
        goto label_3423f4;
    }
    ctx->pc = 0x3423ECu;
    {
        const bool branch_taken_0x3423ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423ec) {
            ctx->pc = 0x3423F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3423ECu;
            // 0x3423f0: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342410u;
            goto label_342410;
        }
    }
    ctx->pc = 0x3423F4u;
label_3423f4:
    // 0x3423f4: 0xc0899ae  jal         func_2266B8
label_3423f8:
    if (ctx->pc == 0x3423F8u) {
        ctx->pc = 0x3423F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423F4u;
        // 0x3423f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423FCu;
        goto label_3423fc;
    }
    ctx->pc = 0x3423F4u;
    SET_GPR_U32(ctx, 31, 0x3423FCu);
    ctx->pc = 0x3423F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3423F4u;
    // 0x3423f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x3423F4u, 0x3423FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3423FCu;
label_3423fc:
    // 0x3423fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3423fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342400:
    // 0x342400: 0xc095128  jal         func_2544A0
label_342404:
    if (ctx->pc == 0x342404u) {
        ctx->pc = 0x342404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342400u;
        // 0x342404: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342408u;
        goto label_342408;
    }
    ctx->pc = 0x342400u;
    SET_GPR_U32(ctx, 31, 0x342408u);
    ctx->pc = 0x342404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342400u;
    // 0x342404: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x342400u, 0x342408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342408u;
label_342408:
    // 0x342408: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x342408u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_34240c:
    // 0x34240c: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x34240cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_342410:
    // 0x342410: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x342410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_342414:
    // 0x342414: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x342414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_342418:
    // 0x342418: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x342418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_34241c:
    // 0x34241c: 0x40f809  jalr        $v0
label_342420:
    if (ctx->pc == 0x342420u) {
        ctx->pc = 0x342420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34241Cu;
        // 0x342420: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342424u;
        goto label_342424;
    }
    ctx->pc = 0x34241Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342424u);
        ctx->pc = 0x342420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34241Cu;
        // 0x342420: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34241Cu, 0x342424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342424u;
label_342424:
    // 0x342424: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x342424u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_342428:
    // 0x342428: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x342428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34242c:
    // 0x34242c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x34242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_342430:
    // 0x342430: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x342430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_342434:
    // 0x342434: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x342434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_342438:
    // 0x342438: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x342438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34243c:
    // 0x34243c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x34243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_342440:
    // 0x342440: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x342440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_342444:
    // 0x342444: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x342444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_342448:
    // 0x342448: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x342448u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_34244c:
    // 0x34244c: 0xc087408  jal         func_21D020
label_342450:
    if (ctx->pc == 0x342450u) {
        ctx->pc = 0x342450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34244Cu;
        // 0x342450: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x342454u;
        goto label_342454;
    }
    ctx->pc = 0x34244Cu;
    SET_GPR_U32(ctx, 31, 0x342454u);
    ctx->pc = 0x342450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34244Cu;
    // 0x342450: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x34244Cu, 0x342454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342454u;
label_342454:
    // 0x342454: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x342454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_342458:
    // 0x342458: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x342458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_34245c:
    // 0x34245c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34245cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_342460:
    // 0x342460: 0x8e4500c4  lw          $a1, 0xC4($s2)
    ctx->pc = 0x342460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_342464:
    // 0x342464: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
label_342468:
    if (ctx->pc == 0x342468u) {
        ctx->pc = 0x342468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342464u;
        // 0x342468: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34246Cu;
        goto label_34246c;
    }
    ctx->pc = 0x342464u;
    {
        const bool branch_taken_0x342464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x342468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342464u;
        // 0x342468: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342464) {
            ctx->pc = 0x34250Cu;
            goto label_34250c;
        }
    }
    ctx->pc = 0x34246Cu;
label_34246c:
    // 0x34246c: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x34246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_342470:
    // 0x342470: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x342470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_342474:
    // 0x342474: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x342474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_342478:
    // 0x342478: 0x40f809  jalr        $v0
label_34247c:
    if (ctx->pc == 0x34247Cu) {
        ctx->pc = 0x34247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342478u;
        // 0x34247c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342480u;
        goto label_342480;
    }
    ctx->pc = 0x342478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342480u);
        ctx->pc = 0x34247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342478u;
        // 0x34247c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342478u, 0x342480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342480u;
label_342480:
    // 0x342480: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x342480u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_342484:
    // 0x342484: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x342484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_342488:
    // 0x342488: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x342488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_34248c:
    // 0x34248c: 0x8cc50034  lw          $a1, 0x34($a2)
    ctx->pc = 0x34248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_342490:
    // 0x342490: 0x84a40020  lh          $a0, 0x20($a1)
    ctx->pc = 0x342490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_342494:
    // 0x342494: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x342494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_342498:
    // 0x342498: 0x40f809  jalr        $v0
label_34249c:
    if (ctx->pc == 0x34249Cu) {
        ctx->pc = 0x34249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342498u;
        // 0x34249c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3424A0u;
        goto label_3424a0;
    }
    ctx->pc = 0x342498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3424A0u);
        ctx->pc = 0x34249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342498u;
        // 0x34249c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342498u, 0x3424A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3424A0u;
label_3424a0:
    // 0x3424a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3424a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3424a4:
    // 0x3424a4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3424a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3424a8:
    // 0x3424a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3424a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3424ac:
    // 0x3424ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3424acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3424b0:
    // 0x3424b0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3424b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3424b4:
    // 0x3424b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3424b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3424b8:
    // 0x3424b8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3424b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3424bc:
    // 0x3424bc: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x3424bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3424c0:
    // 0x3424c0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3424c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3424c4:
    // 0x3424c4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3424c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_3424c8:
    // 0x3424c8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3424c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3424cc:
    // 0x3424cc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3424ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3424d0:
    // 0x3424d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3424d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3424d4:
    // 0x3424d4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3424d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3424d8:
    // 0x3424d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3424d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3424dc:
    // 0x3424dc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3424dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3424e0:
    // 0x3424e0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3424e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3424e4:
    // 0x3424e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3424e4u;
    // VWAITQ (Q already resolved in this runtime)
label_3424e8:
    // 0x3424e8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3424e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3424ec:
    // 0x3424ec: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3424ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3424f0:
    // 0x3424f0: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x3424f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3424f4:
    // 0x3424f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3424f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3424f8:
    // 0x3424f8: 0x0  nop
    ctx->pc = 0x3424f8u;
    // NOP
label_3424fc:
    // 0x3424fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3424fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_342500:
    // 0x342500: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x342500u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_342504:
    // 0x342504: 0x10000006  b           . + 4 + (0x6 << 2)
label_342508:
    if (ctx->pc == 0x342508u) {
        ctx->pc = 0x342508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342504u;
        // 0x342508: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34250Cu;
        goto label_34250c;
    }
    ctx->pc = 0x342504u;
    {
        const bool branch_taken_0x342504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342504u;
        // 0x342508: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342504) {
            ctx->pc = 0x342520u;
            goto label_342520;
        }
    }
    ctx->pc = 0x34250Cu;
label_34250c:
    // 0x34250c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x34250cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_342510:
    // 0x342510: 0x0  nop
    ctx->pc = 0x342510u;
    // NOP
label_342514:
    // 0x342514: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_342518:
    if (ctx->pc == 0x342518u) {
        ctx->pc = 0x342518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342514u;
        // 0x342518: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34251Cu;
        goto label_34251c;
    }
    ctx->pc = 0x342514u;
    {
        const bool branch_taken_0x342514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342514) {
            ctx->pc = 0x342518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342514u;
            // 0x342518: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34251Cu;
            goto label_34251c;
        }
    }
    ctx->pc = 0x34251Cu;
label_34251c:
    // 0x34251c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x34251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_342520:
    // 0x342520: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x342520u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_342524:
    // 0x342524: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x342524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_342528:
    // 0x342528: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x342528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34252c:
    // 0x34252c: 0xc0d05c2  jal         func_341708
label_342530:
    if (ctx->pc == 0x342530u) {
        ctx->pc = 0x342530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34252Cu;
        // 0x342530: 0xc44c0044  lwc1        $f12, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x342534u;
        goto label_342534;
    }
    ctx->pc = 0x34252Cu;
    SET_GPR_U32(ctx, 31, 0x342534u);
    ctx->pc = 0x342530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34252Cu;
    // 0x342530: 0xc44c0044  lwc1        $f12, 0x44($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x341708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341708u, 0x34252Cu, 0x342534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342534u;
label_342534:
    // 0x342534: 0x8e500080  lw          $s0, 0x80($s2)
    ctx->pc = 0x342534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_342538:
    // 0x342538: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_34253c:
    if (ctx->pc == 0x34253Cu) {
        ctx->pc = 0x34253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342538u;
        // 0x34253c: 0x8e460084  lw          $a2, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342540u;
        goto label_342540;
    }
    ctx->pc = 0x342538u;
    {
        const bool branch_taken_0x342538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x342538) {
            ctx->pc = 0x34253Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342538u;
            // 0x34253c: 0x8e460084  lw          $a2, 0x84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342578u;
            goto label_342578;
        }
    }
    ctx->pc = 0x342540u;
label_342540:
    // 0x342540: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x342540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_342544:
    // 0x342544: 0x0  nop
    ctx->pc = 0x342544u;
    // NOP
label_342548:
    // 0x342548: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x342548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_34254c:
    // 0x34254c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342550:
    if (ctx->pc == 0x342550u) {
        ctx->pc = 0x342550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34254Cu;
        // 0x342550: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342554u;
        goto label_342554;
    }
    ctx->pc = 0x34254Cu;
    {
        const bool branch_taken_0x34254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34254Cu;
        // 0x342550: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34254c) {
            ctx->pc = 0x342568u;
            goto label_342568;
        }
    }
    ctx->pc = 0x342554u;
label_342554:
    // 0x342554: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x342554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_342558:
    // 0x342558: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x342558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_34255c:
    // 0x34255c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x34255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_342560:
    // 0x342560: 0x60f809  jalr        $v1
label_342564:
    if (ctx->pc == 0x342564u) {
        ctx->pc = 0x342564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342560u;
        // 0x342564: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342568u;
        goto label_342568;
    }
    ctx->pc = 0x342560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x342568u);
        ctx->pc = 0x342564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342560u;
        // 0x342564: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342560u, 0x342568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342568u;
label_342568:
    // 0x342568: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x342568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34256c:
    // 0x34256c: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_342570:
    if (ctx->pc == 0x342570u) {
        ctx->pc = 0x342570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34256Cu;
        // 0x342570: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342574u;
        goto label_342574;
    }
    ctx->pc = 0x34256Cu;
    {
        const bool branch_taken_0x34256c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x34256c) {
            ctx->pc = 0x342570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34256Cu;
            // 0x342570: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342548;
        }
    }
    ctx->pc = 0x342574u;
label_342574:
    // 0x342574: 0x8e460084  lw          $a2, 0x84($s2)
    ctx->pc = 0x342574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_342578:
    // 0x342578: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_34257c:
    if (ctx->pc == 0x34257Cu) {
        ctx->pc = 0x34257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342578u;
        // 0x34257c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342580u;
        goto label_342580;
    }
    ctx->pc = 0x342578u;
    {
        const bool branch_taken_0x342578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x34257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342578u;
        // 0x34257c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342578) {
            ctx->pc = 0x342594u;
            goto label_342594;
        }
    }
    ctx->pc = 0x342580u;
label_342580:
    // 0x342580: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x342580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_342584:
    // 0x342584: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x342584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_342588:
    // 0x342588: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x342588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_34258c:
    // 0x34258c: 0x60f809  jalr        $v1
label_342590:
    if (ctx->pc == 0x342590u) {
        ctx->pc = 0x342590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34258Cu;
        // 0x342590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342594u;
        goto label_342594;
    }
    ctx->pc = 0x34258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x342594u);
        ctx->pc = 0x342590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34258Cu;
        // 0x342590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34258Cu, 0x342594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342594u;
label_342594:
    // 0x342594: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x342594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_342598:
    // 0x342598: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x342598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_34259c:
    // 0x34259c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x34259cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3425a0:
    // 0x3425a0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3425a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3425a4:
    // 0x3425a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3425a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3425a8:
    // 0x3425a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3425a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3425ac:
    // 0x3425ac: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x3425acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3425b0:
    // 0x3425b0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3425b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3425b4:
    // 0x3425b4: 0x3e00008  jr          $ra
label_3425b8:
    if (ctx->pc == 0x3425B8u) {
        ctx->pc = 0x3425B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425B4u;
        // 0x3425b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425BCu;
        goto label_3425bc;
    }
    ctx->pc = 0x3425B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3425B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425B4u;
        // 0x3425b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3425B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3425BCu;
label_3425bc:
    // 0x3425bc: 0x0  nop
    ctx->pc = 0x3425bcu;
    // NOP
    ctx->pc = 0x3425c0u;
}
