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

// Function: sub_001DB550
// Address: 0x1db550 - 0x1db7e8
void sub_001DB550_0x1db550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB550_0x1db550");
#endif

    switch (ctx->pc) {
        case 0x1db550u: goto label_1db550;
        case 0x1db554u: goto label_1db554;
        case 0x1db558u: goto label_1db558;
        case 0x1db55cu: goto label_1db55c;
        case 0x1db560u: goto label_1db560;
        case 0x1db564u: goto label_1db564;
        case 0x1db568u: goto label_1db568;
        case 0x1db56cu: goto label_1db56c;
        case 0x1db570u: goto label_1db570;
        case 0x1db574u: goto label_1db574;
        case 0x1db578u: goto label_1db578;
        case 0x1db57cu: goto label_1db57c;
        case 0x1db580u: goto label_1db580;
        case 0x1db584u: goto label_1db584;
        case 0x1db588u: goto label_1db588;
        case 0x1db58cu: goto label_1db58c;
        case 0x1db590u: goto label_1db590;
        case 0x1db594u: goto label_1db594;
        case 0x1db598u: goto label_1db598;
        case 0x1db59cu: goto label_1db59c;
        case 0x1db5a0u: goto label_1db5a0;
        case 0x1db5a4u: goto label_1db5a4;
        case 0x1db5a8u: goto label_1db5a8;
        case 0x1db5acu: goto label_1db5ac;
        case 0x1db5b0u: goto label_1db5b0;
        case 0x1db5b4u: goto label_1db5b4;
        case 0x1db5b8u: goto label_1db5b8;
        case 0x1db5bcu: goto label_1db5bc;
        case 0x1db5c0u: goto label_1db5c0;
        case 0x1db5c4u: goto label_1db5c4;
        case 0x1db5c8u: goto label_1db5c8;
        case 0x1db5ccu: goto label_1db5cc;
        case 0x1db5d0u: goto label_1db5d0;
        case 0x1db5d4u: goto label_1db5d4;
        case 0x1db5d8u: goto label_1db5d8;
        case 0x1db5dcu: goto label_1db5dc;
        case 0x1db5e0u: goto label_1db5e0;
        case 0x1db5e4u: goto label_1db5e4;
        case 0x1db5e8u: goto label_1db5e8;
        case 0x1db5ecu: goto label_1db5ec;
        case 0x1db5f0u: goto label_1db5f0;
        case 0x1db5f4u: goto label_1db5f4;
        case 0x1db5f8u: goto label_1db5f8;
        case 0x1db5fcu: goto label_1db5fc;
        case 0x1db600u: goto label_1db600;
        case 0x1db604u: goto label_1db604;
        case 0x1db608u: goto label_1db608;
        case 0x1db60cu: goto label_1db60c;
        case 0x1db610u: goto label_1db610;
        case 0x1db614u: goto label_1db614;
        case 0x1db618u: goto label_1db618;
        case 0x1db61cu: goto label_1db61c;
        case 0x1db620u: goto label_1db620;
        case 0x1db624u: goto label_1db624;
        case 0x1db628u: goto label_1db628;
        case 0x1db62cu: goto label_1db62c;
        case 0x1db630u: goto label_1db630;
        case 0x1db634u: goto label_1db634;
        case 0x1db638u: goto label_1db638;
        case 0x1db63cu: goto label_1db63c;
        case 0x1db640u: goto label_1db640;
        case 0x1db644u: goto label_1db644;
        case 0x1db648u: goto label_1db648;
        case 0x1db64cu: goto label_1db64c;
        case 0x1db650u: goto label_1db650;
        case 0x1db654u: goto label_1db654;
        case 0x1db658u: goto label_1db658;
        case 0x1db65cu: goto label_1db65c;
        case 0x1db660u: goto label_1db660;
        case 0x1db664u: goto label_1db664;
        case 0x1db668u: goto label_1db668;
        case 0x1db66cu: goto label_1db66c;
        case 0x1db670u: goto label_1db670;
        case 0x1db674u: goto label_1db674;
        case 0x1db678u: goto label_1db678;
        case 0x1db67cu: goto label_1db67c;
        case 0x1db680u: goto label_1db680;
        case 0x1db684u: goto label_1db684;
        case 0x1db688u: goto label_1db688;
        case 0x1db68cu: goto label_1db68c;
        case 0x1db690u: goto label_1db690;
        case 0x1db694u: goto label_1db694;
        case 0x1db698u: goto label_1db698;
        case 0x1db69cu: goto label_1db69c;
        case 0x1db6a0u: goto label_1db6a0;
        case 0x1db6a4u: goto label_1db6a4;
        case 0x1db6a8u: goto label_1db6a8;
        case 0x1db6acu: goto label_1db6ac;
        case 0x1db6b0u: goto label_1db6b0;
        case 0x1db6b4u: goto label_1db6b4;
        case 0x1db6b8u: goto label_1db6b8;
        case 0x1db6bcu: goto label_1db6bc;
        case 0x1db6c0u: goto label_1db6c0;
        case 0x1db6c4u: goto label_1db6c4;
        case 0x1db6c8u: goto label_1db6c8;
        case 0x1db6ccu: goto label_1db6cc;
        case 0x1db6d0u: goto label_1db6d0;
        case 0x1db6d4u: goto label_1db6d4;
        case 0x1db6d8u: goto label_1db6d8;
        case 0x1db6dcu: goto label_1db6dc;
        case 0x1db6e0u: goto label_1db6e0;
        case 0x1db6e4u: goto label_1db6e4;
        case 0x1db6e8u: goto label_1db6e8;
        case 0x1db6ecu: goto label_1db6ec;
        case 0x1db6f0u: goto label_1db6f0;
        case 0x1db6f4u: goto label_1db6f4;
        case 0x1db6f8u: goto label_1db6f8;
        case 0x1db6fcu: goto label_1db6fc;
        case 0x1db700u: goto label_1db700;
        case 0x1db704u: goto label_1db704;
        case 0x1db708u: goto label_1db708;
        case 0x1db70cu: goto label_1db70c;
        case 0x1db710u: goto label_1db710;
        case 0x1db714u: goto label_1db714;
        case 0x1db718u: goto label_1db718;
        case 0x1db71cu: goto label_1db71c;
        case 0x1db720u: goto label_1db720;
        case 0x1db724u: goto label_1db724;
        case 0x1db728u: goto label_1db728;
        case 0x1db72cu: goto label_1db72c;
        case 0x1db730u: goto label_1db730;
        case 0x1db734u: goto label_1db734;
        case 0x1db738u: goto label_1db738;
        case 0x1db73cu: goto label_1db73c;
        case 0x1db740u: goto label_1db740;
        case 0x1db744u: goto label_1db744;
        case 0x1db748u: goto label_1db748;
        case 0x1db74cu: goto label_1db74c;
        case 0x1db750u: goto label_1db750;
        case 0x1db754u: goto label_1db754;
        case 0x1db758u: goto label_1db758;
        case 0x1db75cu: goto label_1db75c;
        case 0x1db760u: goto label_1db760;
        case 0x1db764u: goto label_1db764;
        case 0x1db768u: goto label_1db768;
        case 0x1db76cu: goto label_1db76c;
        case 0x1db770u: goto label_1db770;
        case 0x1db774u: goto label_1db774;
        case 0x1db778u: goto label_1db778;
        case 0x1db77cu: goto label_1db77c;
        case 0x1db780u: goto label_1db780;
        case 0x1db784u: goto label_1db784;
        case 0x1db788u: goto label_1db788;
        case 0x1db78cu: goto label_1db78c;
        case 0x1db790u: goto label_1db790;
        case 0x1db794u: goto label_1db794;
        case 0x1db798u: goto label_1db798;
        case 0x1db79cu: goto label_1db79c;
        case 0x1db7a0u: goto label_1db7a0;
        case 0x1db7a4u: goto label_1db7a4;
        case 0x1db7a8u: goto label_1db7a8;
        case 0x1db7acu: goto label_1db7ac;
        case 0x1db7b0u: goto label_1db7b0;
        case 0x1db7b4u: goto label_1db7b4;
        case 0x1db7b8u: goto label_1db7b8;
        case 0x1db7bcu: goto label_1db7bc;
        case 0x1db7c0u: goto label_1db7c0;
        case 0x1db7c4u: goto label_1db7c4;
        case 0x1db7c8u: goto label_1db7c8;
        case 0x1db7ccu: goto label_1db7cc;
        case 0x1db7d0u: goto label_1db7d0;
        case 0x1db7d4u: goto label_1db7d4;
        case 0x1db7d8u: goto label_1db7d8;
        case 0x1db7dcu: goto label_1db7dc;
        case 0x1db7e0u: goto label_1db7e0;
        case 0x1db7e4u: goto label_1db7e4;
        default: break;
    }

    ctx->pc = 0x1db550u;

label_1db550:
    // 0x1db550: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1db550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1db554:
    // 0x1db554: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1db554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1db558:
    // 0x1db558: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1db558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1db55c:
    // 0x1db55c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1db55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1db560:
    // 0x1db560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db564:
    // 0x1db564: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1db564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1db568:
    // 0x1db568: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1db568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1db56c:
    // 0x1db56c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1db56cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1db570:
    // 0x1db570: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1db570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1db574:
    // 0x1db574: 0x26341bd0  addiu       $s4, $s1, 0x1BD0
    ctx->pc = 0x1db574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 7120));
label_1db578:
    // 0x1db578: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1db578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1db57c:
    // 0x1db57c: 0xae2020b0  sw          $zero, 0x20B0($s1)
    ctx->pc = 0x1db57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8368), GPR_U32(ctx, 0));
label_1db580:
    // 0x1db580: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1db580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1db584:
    // 0x1db584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1db588:
    // 0x1db588: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1db588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1db58c:
    // 0x1db58c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1db58cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1db590:
    // 0x1db590: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1db590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1db594:
    // 0x1db594: 0x60f809  jalr        $v1
label_1db598:
    if (ctx->pc == 0x1DB598u) {
        ctx->pc = 0x1DB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB594u;
        // 0x1db598: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB59Cu;
        goto label_1db59c;
    }
    ctx->pc = 0x1DB594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB59Cu);
        ctx->pc = 0x1DB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB594u;
        // 0x1db598: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB594u, 0x1DB59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB59Cu;
label_1db59c:
    // 0x1db59c: 0xc076d2c  jal         func_1DB4B0
label_1db5a0:
    if (ctx->pc == 0x1DB5A0u) {
        ctx->pc = 0x1DB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB59Cu;
        // 0x1db5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5A4u;
        goto label_1db5a4;
    }
    ctx->pc = 0x1DB59Cu;
    SET_GPR_U32(ctx, 31, 0x1DB5A4u);
    ctx->pc = 0x1DB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB59Cu;
    // 0x1db5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB4B0u, 0x1DB59Cu, 0x1DB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB5A4u;
label_1db5a4:
    // 0x1db5a4: 0xc077f02  jal         func_1DFC08
label_1db5a8:
    if (ctx->pc == 0x1DB5A8u) {
        ctx->pc = 0x1DB5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5A4u;
        // 0x1db5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB5ACu;
        goto label_1db5ac;
    }
    ctx->pc = 0x1DB5A4u;
    SET_GPR_U32(ctx, 31, 0x1DB5ACu);
    ctx->pc = 0x1DB5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5A4u;
    // 0x1db5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC08u, 0x1DB5A4u, 0x1DB5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB5ACu;
label_1db5ac:
    // 0x1db5ac: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1db5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1db5b0:
    // 0x1db5b0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1db5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1db5b4:
    // 0x1db5b4: 0xc4405354  lwc1        $f0, 0x5354($v0)
    ctx->pc = 0x1db5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db5b8:
    // 0x1db5b8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1db5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_1db5bc:
    // 0x1db5bc: 0xc481ee04  lwc1        $f1, -0x11FC($a0)
    ctx->pc = 0x1db5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294962692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db5c0:
    // 0x1db5c0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1db5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1db5c4:
    // 0x1db5c4: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x1db5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_1db5c8:
    // 0x1db5c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1db5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1db5cc:
    // 0x1db5cc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1db5ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1db5d0:
    // 0x1db5d0: 0x246340c0  addiu       $v1, $v1, 0x40C0
    ctx->pc = 0x1db5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16576));
label_1db5d4:
    // 0x1db5d4: 0x24424c70  addiu       $v0, $v0, 0x4C70
    ctx->pc = 0x1db5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19568));
label_1db5d8:
    // 0x1db5d8: 0x24e74fe0  addiu       $a3, $a3, 0x4FE0
    ctx->pc = 0x1db5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20448));
label_1db5dc:
    // 0x1db5dc: 0xae232af0  sw          $v1, 0x2AF0($s1)
    ctx->pc = 0x1db5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10992), GPR_U32(ctx, 3));
label_1db5e0:
    // 0x1db5e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db5e4:
    // 0x1db5e4: 0xae222af4  sw          $v0, 0x2AF4($s1)
    ctx->pc = 0x1db5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10996), GPR_U32(ctx, 2));
label_1db5e8:
    // 0x1db5e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db5ec:
    // 0x1db5ec: 0xae272af8  sw          $a3, 0x2AF8($s1)
    ctx->pc = 0x1db5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11000), GPR_U32(ctx, 7));
label_1db5f0:
    // 0x1db5f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1db5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db5f4:
    // 0x1db5f4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1db5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1db5f8:
    // 0x1db5f8: 0xc048b52  jal         func_122D48
label_1db5fc:
    if (ctx->pc == 0x1DB5FCu) {
        ctx->pc = 0x1DB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB5F8u;
        // 0x1db5fc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB600u;
        goto label_1db600;
    }
    ctx->pc = 0x1DB5F8u;
    SET_GPR_U32(ctx, 31, 0x1DB600u);
    ctx->pc = 0x1DB5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5F8u;
    // 0x1db5fc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1DB5F8u, 0x1DB600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB600u;
label_1db600:
    // 0x1db600: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1db600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1db604:
    // 0x1db604: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1db604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1db608:
    // 0x1db608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1db608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1db60c:
    // 0x1db60c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1db610:
    // 0x1db610: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1db610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1db614:
    // 0x1db614: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1db614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1db618:
    // 0x1db618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1db618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1db61c:
    // 0x1db61c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1db61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1db620:
    // 0x1db620: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1db620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1db624:
    // 0x1db624: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1db624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1db628:
    // 0x1db628: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1db628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1db62c:
    // 0x1db62c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1db62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db630:
    // 0x1db630: 0xc442535c  lwc1        $f2, 0x535C($v0)
    ctx->pc = 0x1db630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1db634:
    // 0x1db634: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1db634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db638:
    // 0x1db638: 0xc660ee0c  lwc1        $f0, -0x11F4($s3)
    ctx->pc = 0x1db638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294962700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db63c:
    // 0x1db63c: 0x262420d0  addiu       $a0, $s1, 0x20D0
    ctx->pc = 0x1db63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8400));
label_1db640:
    // 0x1db640: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1db640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1db644:
    // 0x1db644: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1db644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db648:
    // 0x1db648: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1db648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1db64c:
    // 0x1db64c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1db64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1db650:
    // 0x1db650: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1db650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1db654:
    // 0x1db654: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1db654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1db658:
    // 0x1db658: 0xc06924c  jal         func_1A4930
label_1db65c:
    if (ctx->pc == 0x1DB65Cu) {
        ctx->pc = 0x1DB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB658u;
        // 0x1db65c: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB660u;
        goto label_1db660;
    }
    ctx->pc = 0x1DB658u;
    SET_GPR_U32(ctx, 31, 0x1DB660u);
    ctx->pc = 0x1DB65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB658u;
    // 0x1db65c: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4930u, 0x1DB658u, 0x1DB660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB660u;
label_1db660:
    // 0x1db660: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1db660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1db664:
    // 0x1db664: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1db664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1db668:
    // 0x1db668: 0xc461ee08  lwc1        $f1, -0x11F8($v1)
    ctx->pc = 0x1db668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db66c:
    // 0x1db66c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db670:
    // 0x1db670: 0xc4405358  lwc1        $f0, 0x5358($v0)
    ctx->pc = 0x1db670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db674:
    // 0x1db674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db678:
    // 0x1db678: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1db678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1db67c:
    // 0x1db67c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1db67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db680:
    // 0x1db680: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1db680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1db684:
    // 0x1db684: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1db684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1db688:
    // 0x1db688: 0xc048b52  jal         func_122D48
label_1db68c:
    if (ctx->pc == 0x1DB68Cu) {
        ctx->pc = 0x1DB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB688u;
        // 0x1db68c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB690u;
        goto label_1db690;
    }
    ctx->pc = 0x1DB688u;
    SET_GPR_U32(ctx, 31, 0x1DB690u);
    ctx->pc = 0x1DB68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB688u;
    // 0x1db68c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1DB688u, 0x1DB690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB690u;
label_1db690:
    // 0x1db690: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1db690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1db694:
    // 0x1db694: 0xc660ee0c  lwc1        $f0, -0x11F4($s3)
    ctx->pc = 0x1db694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294962700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db698:
    // 0x1db698: 0xc4415360  lwc1        $f1, 0x5360($v0)
    ctx->pc = 0x1db698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db69c:
    // 0x1db69c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1db69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db6a0:
    // 0x1db6a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1db6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1db6a4:
    // 0x1db6a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1db6a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db6a8:
    // 0x1db6a8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1db6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1db6ac:
    // 0x1db6ac: 0x26242430  addiu       $a0, $s1, 0x2430
    ctx->pc = 0x1db6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9264));
label_1db6b0:
    // 0x1db6b0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1db6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1db6b4:
    // 0x1db6b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1db6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db6b8:
    // 0x1db6b8: 0xc06924c  jal         func_1A4930
label_1db6bc:
    if (ctx->pc == 0x1DB6BCu) {
        ctx->pc = 0x1DB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6B8u;
        // 0x1db6bc: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6C0u;
        goto label_1db6c0;
    }
    ctx->pc = 0x1DB6B8u;
    SET_GPR_U32(ctx, 31, 0x1DB6C0u);
    ctx->pc = 0x1DB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6B8u;
    // 0x1db6bc: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4930u, 0x1DB6B8u, 0x1DB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6C0u;
label_1db6c0:
    // 0x1db6c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1db6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1db6c4:
    // 0x1db6c4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1db6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1db6c8:
    // 0x1db6c8: 0xc461ee00  lwc1        $f1, -0x1200($v1)
    ctx->pc = 0x1db6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db6cc:
    // 0x1db6cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db6d0:
    // 0x1db6d0: 0xc4405350  lwc1        $f0, 0x5350($v0)
    ctx->pc = 0x1db6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db6d4:
    // 0x1db6d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db6d8:
    // 0x1db6d8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1db6d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1db6dc:
    // 0x1db6dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1db6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db6e0:
    // 0x1db6e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1db6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1db6e4:
    // 0x1db6e4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1db6e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1db6e8:
    // 0x1db6e8: 0xc048b52  jal         func_122D48
label_1db6ec:
    if (ctx->pc == 0x1DB6ECu) {
        ctx->pc = 0x1DB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E8u;
        // 0x1db6ec: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6F0u;
        goto label_1db6f0;
    }
    ctx->pc = 0x1DB6E8u;
    SET_GPR_U32(ctx, 31, 0x1DB6F0u);
    ctx->pc = 0x1DB6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6E8u;
    // 0x1db6ec: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1DB6E8u, 0x1DB6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6F0u;
label_1db6f0:
    // 0x1db6f0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1db6f4:
    // 0x1db6f4: 0xc660ee0c  lwc1        $f0, -0x11F4($s3)
    ctx->pc = 0x1db6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294962700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db6f8:
    // 0x1db6f8: 0xc4415364  lwc1        $f1, 0x5364($v0)
    ctx->pc = 0x1db6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db6fc:
    // 0x1db6fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1db6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db700:
    // 0x1db700: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1db700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1db704:
    // 0x1db704: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1db704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db708:
    // 0x1db708: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1db708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1db70c:
    // 0x1db70c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1db70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db710:
    // 0x1db710: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1db710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1db714:
    // 0x1db714: 0x26242790  addiu       $a0, $s1, 0x2790
    ctx->pc = 0x1db714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10128));
label_1db718:
    // 0x1db718: 0xc06924c  jal         func_1A4930
label_1db71c:
    if (ctx->pc == 0x1DB71Cu) {
        ctx->pc = 0x1DB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB718u;
        // 0x1db71c: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB720u;
        goto label_1db720;
    }
    ctx->pc = 0x1DB718u;
    SET_GPR_U32(ctx, 31, 0x1DB720u);
    ctx->pc = 0x1DB71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB718u;
    // 0x1db71c: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4930u, 0x1DB718u, 0x1DB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB720u;
label_1db720:
    // 0x1db720: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1db720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1db724:
    // 0x1db724: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1db724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1db728:
    // 0x1db728: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1db728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1db72c:
    // 0x1db72c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1db72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1db730:
    // 0x1db730: 0xc442ee10  lwc1        $f2, -0x11F0($v0)
    ctx->pc = 0x1db730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1db734:
    // 0x1db734: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1db734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1db738:
    // 0x1db738: 0xc463ee14  lwc1        $f3, -0x11EC($v1)
    ctx->pc = 0x1db738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1db73c:
    // 0x1db73c: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x1db73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_1db740:
    // 0x1db740: 0xc4a0ee18  lwc1        $f0, -0x11E8($a1)
    ctx->pc = 0x1db740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1db744:
    // 0x1db744: 0xc4c1ee1c  lwc1        $f1, -0x11E4($a2)
    ctx->pc = 0x1db744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294962716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1db748:
    // 0x1db748: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1db748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1db74c:
    // 0x1db74c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1db74cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1db750:
    // 0x1db750: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1db750u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1db754:
    // 0x1db754: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1db754u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1db758:
    // 0x1db758: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1db758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1db75c:
    // 0x1db75c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x1db75cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1db760:
    // 0x1db760: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1db760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1db764:
    // 0x1db764: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1db764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1db768:
    // 0x1db768: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1db768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1db76c:
    // 0x1db76c: 0xc067b9c  jal         func_19EE70
label_1db770:
    if (ctx->pc == 0x1DB770u) {
        ctx->pc = 0x1DB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB76Cu;
        // 0x1db770: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB774u;
        goto label_1db774;
    }
    ctx->pc = 0x1DB76Cu;
    SET_GPR_U32(ctx, 31, 0x1DB774u);
    ctx->pc = 0x1DB770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB76Cu;
    // 0x1db770: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DB76Cu, 0x1DB774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB774u;
label_1db774:
    // 0x1db774: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1db774u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
label_1db778:
    // 0x1db778: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1db778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db77c:
    // 0x1db77c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1db77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db780:
    // 0x1db780: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1db780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db784:
    // 0x1db784: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1db784u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1db788:
    // 0x1db788: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1db788u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db78c:
    // 0x1db78c: 0x2529b278  addiu       $t1, $t1, -0x4D88
    ctx->pc = 0x1db78cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947448));
label_1db790:
    // 0x1db790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1db790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db794:
    // 0x1db794: 0xc0759ce  jal         func_1D6738
label_1db798:
    if (ctx->pc == 0x1DB798u) {
        ctx->pc = 0x1DB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB794u;
        // 0x1db798: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB79Cu;
        goto label_1db79c;
    }
    ctx->pc = 0x1DB794u;
    SET_GPR_U32(ctx, 31, 0x1DB79Cu);
    ctx->pc = 0x1DB798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB794u;
    // 0x1db798: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6738u, 0x1DB794u, 0x1DB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB79Cu;
label_1db79c:
    // 0x1db79c: 0xc067b9c  jal         func_19EE70
label_1db7a0:
    if (ctx->pc == 0x1DB7A0u) {
        ctx->pc = 0x1DB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB79Cu;
        // 0x1db7a0: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7A4u;
        goto label_1db7a4;
    }
    ctx->pc = 0x1DB79Cu;
    SET_GPR_U32(ctx, 31, 0x1DB7A4u);
    ctx->pc = 0x1DB7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB79Cu;
    // 0x1db7a0: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DB79Cu, 0x1DB7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7A4u;
label_1db7a4:
    // 0x1db7a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1db7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db7a8:
    // 0x1db7a8: 0xc067b9c  jal         func_19EE70
label_1db7ac:
    if (ctx->pc == 0x1DB7ACu) {
        ctx->pc = 0x1DB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7A8u;
        // 0x1db7ac: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7B0u;
        goto label_1db7b0;
    }
    ctx->pc = 0x1DB7A8u;
    SET_GPR_U32(ctx, 31, 0x1DB7B0u);
    ctx->pc = 0x1DB7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7A8u;
    // 0x1db7ac: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DB7A8u, 0x1DB7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7B0u;
label_1db7b0:
    // 0x1db7b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1db7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1db7b4:
    // 0x1db7b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db7b8:
    // 0x1db7b8: 0xc075a44  jal         func_1D6910
label_1db7bc:
    if (ctx->pc == 0x1DB7BCu) {
        ctx->pc = 0x1DB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7B8u;
        // 0x1db7bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7C0u;
        goto label_1db7c0;
    }
    ctx->pc = 0x1DB7B8u;
    SET_GPR_U32(ctx, 31, 0x1DB7C0u);
    ctx->pc = 0x1DB7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB7B8u;
    // 0x1db7bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6910u, 0x1DB7B8u, 0x1DB7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB7C0u;
label_1db7c0:
    // 0x1db7c0: 0xae203a70  sw          $zero, 0x3A70($s1)
    ctx->pc = 0x1db7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 14960), GPR_U32(ctx, 0));
label_1db7c4:
    // 0x1db7c4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1db7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1db7c8:
    // 0x1db7c8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1db7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1db7cc:
    // 0x1db7cc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1db7ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1db7d0:
    // 0x1db7d0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1db7d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1db7d4:
    // 0x1db7d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1db7d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1db7d8:
    // 0x1db7d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1db7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1db7dc:
    // 0x1db7dc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1db7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1db7e0:
    // 0x1db7e0: 0x3e00008  jr          $ra
label_1db7e4:
    if (ctx->pc == 0x1DB7E4u) {
        ctx->pc = 0x1DB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7E0u;
        // 0x1db7e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7E8u;
        goto label_fallthrough_0x1db7e0;
    }
    ctx->pc = 0x1DB7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7E0u;
        // 0x1db7e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1db7e0:
    ctx->pc = 0x1DB7E8u;
}
