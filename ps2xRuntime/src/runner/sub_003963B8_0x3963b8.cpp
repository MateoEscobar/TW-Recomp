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

// Function: sub_003963B8
// Address: 0x3963b8 - 0x3966c8
void sub_003963B8_0x3963b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003963B8_0x3963b8");
#endif

    switch (ctx->pc) {
        case 0x3963b8u: goto label_3963b8;
        case 0x3963bcu: goto label_3963bc;
        case 0x3963c0u: goto label_3963c0;
        case 0x3963c4u: goto label_3963c4;
        case 0x3963c8u: goto label_3963c8;
        case 0x3963ccu: goto label_3963cc;
        case 0x3963d0u: goto label_3963d0;
        case 0x3963d4u: goto label_3963d4;
        case 0x3963d8u: goto label_3963d8;
        case 0x3963dcu: goto label_3963dc;
        case 0x3963e0u: goto label_3963e0;
        case 0x3963e4u: goto label_3963e4;
        case 0x3963e8u: goto label_3963e8;
        case 0x3963ecu: goto label_3963ec;
        case 0x3963f0u: goto label_3963f0;
        case 0x3963f4u: goto label_3963f4;
        case 0x3963f8u: goto label_3963f8;
        case 0x3963fcu: goto label_3963fc;
        case 0x396400u: goto label_396400;
        case 0x396404u: goto label_396404;
        case 0x396408u: goto label_396408;
        case 0x39640cu: goto label_39640c;
        case 0x396410u: goto label_396410;
        case 0x396414u: goto label_396414;
        case 0x396418u: goto label_396418;
        case 0x39641cu: goto label_39641c;
        case 0x396420u: goto label_396420;
        case 0x396424u: goto label_396424;
        case 0x396428u: goto label_396428;
        case 0x39642cu: goto label_39642c;
        case 0x396430u: goto label_396430;
        case 0x396434u: goto label_396434;
        case 0x396438u: goto label_396438;
        case 0x39643cu: goto label_39643c;
        case 0x396440u: goto label_396440;
        case 0x396444u: goto label_396444;
        case 0x396448u: goto label_396448;
        case 0x39644cu: goto label_39644c;
        case 0x396450u: goto label_396450;
        case 0x396454u: goto label_396454;
        case 0x396458u: goto label_396458;
        case 0x39645cu: goto label_39645c;
        case 0x396460u: goto label_396460;
        case 0x396464u: goto label_396464;
        case 0x396468u: goto label_396468;
        case 0x39646cu: goto label_39646c;
        case 0x396470u: goto label_396470;
        case 0x396474u: goto label_396474;
        case 0x396478u: goto label_396478;
        case 0x39647cu: goto label_39647c;
        case 0x396480u: goto label_396480;
        case 0x396484u: goto label_396484;
        case 0x396488u: goto label_396488;
        case 0x39648cu: goto label_39648c;
        case 0x396490u: goto label_396490;
        case 0x396494u: goto label_396494;
        case 0x396498u: goto label_396498;
        case 0x39649cu: goto label_39649c;
        case 0x3964a0u: goto label_3964a0;
        case 0x3964a4u: goto label_3964a4;
        case 0x3964a8u: goto label_3964a8;
        case 0x3964acu: goto label_3964ac;
        case 0x3964b0u: goto label_3964b0;
        case 0x3964b4u: goto label_3964b4;
        case 0x3964b8u: goto label_3964b8;
        case 0x3964bcu: goto label_3964bc;
        case 0x3964c0u: goto label_3964c0;
        case 0x3964c4u: goto label_3964c4;
        case 0x3964c8u: goto label_3964c8;
        case 0x3964ccu: goto label_3964cc;
        case 0x3964d0u: goto label_3964d0;
        case 0x3964d4u: goto label_3964d4;
        case 0x3964d8u: goto label_3964d8;
        case 0x3964dcu: goto label_3964dc;
        case 0x3964e0u: goto label_3964e0;
        case 0x3964e4u: goto label_3964e4;
        case 0x3964e8u: goto label_3964e8;
        case 0x3964ecu: goto label_3964ec;
        case 0x3964f0u: goto label_3964f0;
        case 0x3964f4u: goto label_3964f4;
        case 0x3964f8u: goto label_3964f8;
        case 0x3964fcu: goto label_3964fc;
        case 0x396500u: goto label_396500;
        case 0x396504u: goto label_396504;
        case 0x396508u: goto label_396508;
        case 0x39650cu: goto label_39650c;
        case 0x396510u: goto label_396510;
        case 0x396514u: goto label_396514;
        case 0x396518u: goto label_396518;
        case 0x39651cu: goto label_39651c;
        case 0x396520u: goto label_396520;
        case 0x396524u: goto label_396524;
        case 0x396528u: goto label_396528;
        case 0x39652cu: goto label_39652c;
        case 0x396530u: goto label_396530;
        case 0x396534u: goto label_396534;
        case 0x396538u: goto label_396538;
        case 0x39653cu: goto label_39653c;
        case 0x396540u: goto label_396540;
        case 0x396544u: goto label_396544;
        case 0x396548u: goto label_396548;
        case 0x39654cu: goto label_39654c;
        case 0x396550u: goto label_396550;
        case 0x396554u: goto label_396554;
        case 0x396558u: goto label_396558;
        case 0x39655cu: goto label_39655c;
        case 0x396560u: goto label_396560;
        case 0x396564u: goto label_396564;
        case 0x396568u: goto label_396568;
        case 0x39656cu: goto label_39656c;
        case 0x396570u: goto label_396570;
        case 0x396574u: goto label_396574;
        case 0x396578u: goto label_396578;
        case 0x39657cu: goto label_39657c;
        case 0x396580u: goto label_396580;
        case 0x396584u: goto label_396584;
        case 0x396588u: goto label_396588;
        case 0x39658cu: goto label_39658c;
        case 0x396590u: goto label_396590;
        case 0x396594u: goto label_396594;
        case 0x396598u: goto label_396598;
        case 0x39659cu: goto label_39659c;
        case 0x3965a0u: goto label_3965a0;
        case 0x3965a4u: goto label_3965a4;
        case 0x3965a8u: goto label_3965a8;
        case 0x3965acu: goto label_3965ac;
        case 0x3965b0u: goto label_3965b0;
        case 0x3965b4u: goto label_3965b4;
        case 0x3965b8u: goto label_3965b8;
        case 0x3965bcu: goto label_3965bc;
        case 0x3965c0u: goto label_3965c0;
        case 0x3965c4u: goto label_3965c4;
        case 0x3965c8u: goto label_3965c8;
        case 0x3965ccu: goto label_3965cc;
        case 0x3965d0u: goto label_3965d0;
        case 0x3965d4u: goto label_3965d4;
        case 0x3965d8u: goto label_3965d8;
        case 0x3965dcu: goto label_3965dc;
        case 0x3965e0u: goto label_3965e0;
        case 0x3965e4u: goto label_3965e4;
        case 0x3965e8u: goto label_3965e8;
        case 0x3965ecu: goto label_3965ec;
        case 0x3965f0u: goto label_3965f0;
        case 0x3965f4u: goto label_3965f4;
        case 0x3965f8u: goto label_3965f8;
        case 0x3965fcu: goto label_3965fc;
        case 0x396600u: goto label_396600;
        case 0x396604u: goto label_396604;
        case 0x396608u: goto label_396608;
        case 0x39660cu: goto label_39660c;
        case 0x396610u: goto label_396610;
        case 0x396614u: goto label_396614;
        case 0x396618u: goto label_396618;
        case 0x39661cu: goto label_39661c;
        case 0x396620u: goto label_396620;
        case 0x396624u: goto label_396624;
        case 0x396628u: goto label_396628;
        case 0x39662cu: goto label_39662c;
        case 0x396630u: goto label_396630;
        case 0x396634u: goto label_396634;
        case 0x396638u: goto label_396638;
        case 0x39663cu: goto label_39663c;
        case 0x396640u: goto label_396640;
        case 0x396644u: goto label_396644;
        case 0x396648u: goto label_396648;
        case 0x39664cu: goto label_39664c;
        case 0x396650u: goto label_396650;
        case 0x396654u: goto label_396654;
        case 0x396658u: goto label_396658;
        case 0x39665cu: goto label_39665c;
        case 0x396660u: goto label_396660;
        case 0x396664u: goto label_396664;
        case 0x396668u: goto label_396668;
        case 0x39666cu: goto label_39666c;
        case 0x396670u: goto label_396670;
        case 0x396674u: goto label_396674;
        case 0x396678u: goto label_396678;
        case 0x39667cu: goto label_39667c;
        case 0x396680u: goto label_396680;
        case 0x396684u: goto label_396684;
        case 0x396688u: goto label_396688;
        case 0x39668cu: goto label_39668c;
        case 0x396690u: goto label_396690;
        case 0x396694u: goto label_396694;
        case 0x396698u: goto label_396698;
        case 0x39669cu: goto label_39669c;
        case 0x3966a0u: goto label_3966a0;
        case 0x3966a4u: goto label_3966a4;
        case 0x3966a8u: goto label_3966a8;
        case 0x3966acu: goto label_3966ac;
        case 0x3966b0u: goto label_3966b0;
        case 0x3966b4u: goto label_3966b4;
        case 0x3966b8u: goto label_3966b8;
        case 0x3966bcu: goto label_3966bc;
        case 0x3966c0u: goto label_3966c0;
        case 0x3966c4u: goto label_3966c4;
        default: break;
    }

    ctx->pc = 0x3963b8u;

label_3963b8:
    // 0x3963b8: 0x27bdf300  addiu       $sp, $sp, -0xD00
    ctx->pc = 0x3963b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963968));
label_3963bc:
    // 0x3963bc: 0x7fb10cd0  sq          $s1, 0xCD0($sp)
    ctx->pc = 0x3963bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3280), GPR_VEC(ctx, 17));
label_3963c0:
    // 0x3963c0: 0x7fb70c70  sq          $s7, 0xC70($sp)
    ctx->pc = 0x3963c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3184), GPR_VEC(ctx, 23));
label_3963c4:
    // 0x3963c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3963c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3963c8:
    // 0x3963c8: 0xe7b40cf0  swc1        $f20, 0xCF0($sp)
    ctx->pc = 0x3963c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3312), bits); }
label_3963cc:
    // 0x3963cc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3963ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3963d0:
    // 0x3963d0: 0x7fb00ce0  sq          $s0, 0xCE0($sp)
    ctx->pc = 0x3963d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3296), GPR_VEC(ctx, 16));
label_3963d4:
    // 0x3963d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3963d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3963d8:
    // 0x3963d8: 0x7fb20cc0  sq          $s2, 0xCC0($sp)
    ctx->pc = 0x3963d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3264), GPR_VEC(ctx, 18));
label_3963dc:
    // 0x3963dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3963dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3963e0:
    // 0x3963e0: 0x7fb30cb0  sq          $s3, 0xCB0($sp)
    ctx->pc = 0x3963e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3248), GPR_VEC(ctx, 19));
label_3963e4:
    // 0x3963e4: 0x7fb40ca0  sq          $s4, 0xCA0($sp)
    ctx->pc = 0x3963e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3232), GPR_VEC(ctx, 20));
label_3963e8:
    // 0x3963e8: 0x7fb50c90  sq          $s5, 0xC90($sp)
    ctx->pc = 0x3963e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3216), GPR_VEC(ctx, 21));
label_3963ec:
    // 0x3963ec: 0x7fb60c80  sq          $s6, 0xC80($sp)
    ctx->pc = 0x3963ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3200), GPR_VEC(ctx, 22));
label_3963f0:
    // 0x3963f0: 0x7fbe0c60  sq          $fp, 0xC60($sp)
    ctx->pc = 0x3963f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3168), GPR_VEC(ctx, 30));
label_3963f4:
    // 0x3963f4: 0xffbf0c50  sd          $ra, 0xC50($sp)
    ctx->pc = 0x3963f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3152), GPR_U64(ctx, 31));
label_3963f8:
    // 0x3963f8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x3963f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3963fc:
    // 0x3963fc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x3963fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_396400:
    // 0x396400: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x396400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_396404:
    // 0x396404: 0x60f809  jalr        $v1
label_396408:
    if (ctx->pc == 0x396408u) {
        ctx->pc = 0x396408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396404u;
        // 0x396408: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39640Cu;
        goto label_39640c;
    }
    ctx->pc = 0x396404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39640Cu);
        ctx->pc = 0x396408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396404u;
        // 0x396408: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396404u, 0x39640Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39640Cu;
label_39640c:
    // 0x39640c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x39640cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396410:
    // 0x396410: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x396410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_396414:
    // 0x396414: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x396414u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_396418:
    // 0x396418: 0x1000003f  b           . + 4 + (0x3F << 2)
label_39641c:
    if (ctx->pc == 0x39641Cu) {
        ctx->pc = 0x39641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396418u;
        // 0x39641c: 0x27b60050  addiu       $s6, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396420u;
        goto label_396420;
    }
    ctx->pc = 0x396418u;
    {
        const bool branch_taken_0x396418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396418u;
        // 0x39641c: 0x27b60050  addiu       $s6, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396418) {
            ctx->pc = 0x396518u;
            goto label_396518;
        }
    }
    ctx->pc = 0x396420u;
label_396420:
    // 0x396420: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x396420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_396424:
    // 0x396424: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x396424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_396428:
    // 0x396428: 0x8cc2084c  lw          $v0, 0x84C($a2)
    ctx->pc = 0x396428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
label_39642c:
    // 0x39642c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x39642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_396430:
    // 0x396430: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x396430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_396434:
    // 0x396434: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x396434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_396438:
    // 0x396438: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x396438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39643c:
    // 0x39643c: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x39643cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_396440:
    // 0x396440: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x396440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_396444:
    // 0x396444: 0xc0f809  jalr        $a2
label_396448:
    if (ctx->pc == 0x396448u) {
        ctx->pc = 0x396448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396444u;
        // 0x396448: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39644Cu;
        goto label_39644c;
    }
    ctx->pc = 0x396444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39644Cu);
        ctx->pc = 0x396448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396444u;
        // 0x396448: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396444u, 0x39644Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39644Cu;
label_39644c:
    // 0x39644c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x39644cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_396450:
    // 0x396450: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x396450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_396454:
    // 0x396454: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x396454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396458:
    // 0x396458: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x396458u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39645c:
    // 0x39645c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x39645cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_396460:
    // 0x396460: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x396460u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_396464:
    // 0x396464: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x396464u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_396468:
    // 0x396468: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x396468u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_39646c:
    // 0x39646c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x39646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_396470:
    // 0x396470: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x396470u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_396474:
    // 0x396474: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x396474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_396478:
    // 0x396478: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x396478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39647c:
    // 0x39647c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39647cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_396480:
    // 0x396480: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x396480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_396484:
    // 0x396484: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x396484u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_396488:
    // 0x396488: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x396488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39648c:
    // 0x39648c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39648cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_396490:
    // 0x396490: 0x0  nop
    ctx->pc = 0x396490u;
    // NOP
label_396494:
    // 0x396494: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x396494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_396498:
    // 0x396498: 0x0  nop
    ctx->pc = 0x396498u;
    // NOP
label_39649c:
    // 0x39649c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_3964a0:
    if (ctx->pc == 0x3964A0u) {
        ctx->pc = 0x3964A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39649Cu;
        // 0x3964a0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964A4u;
        goto label_3964a4;
    }
    ctx->pc = 0x39649Cu;
    {
        const bool branch_taken_0x39649c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3964A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39649Cu;
        // 0x3964a0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39649c) {
            ctx->pc = 0x396514u;
            goto label_396514;
        }
    }
    ctx->pc = 0x3964A4u;
label_3964a4:
    // 0x3964a4: 0xc0e8b48  jal         func_3A2D20
label_3964a8:
    if (ctx->pc == 0x3964A8u) {
        ctx->pc = 0x3964A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964A4u;
        // 0x3964a8: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964ACu;
        goto label_3964ac;
    }
    ctx->pc = 0x3964A4u;
    SET_GPR_U32(ctx, 31, 0x3964ACu);
    ctx->pc = 0x3964A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964A4u;
    // 0x3964a8: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3964A4u, 0x3964ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964ACu;
label_3964ac:
    // 0x3964ac: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3964acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_3964b0:
    // 0x3964b0: 0xc0e8b70  jal         func_3A2DC0
label_3964b4:
    if (ctx->pc == 0x3964B4u) {
        ctx->pc = 0x3964B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964B0u;
        // 0x3964b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964B8u;
        goto label_3964b8;
    }
    ctx->pc = 0x3964B0u;
    SET_GPR_U32(ctx, 31, 0x3964B8u);
    ctx->pc = 0x3964B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964B0u;
    // 0x3964b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3964B0u, 0x3964B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964B8u;
label_3964b8:
    // 0x3964b8: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3964b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_3964bc:
    // 0x3964bc: 0xc0e8b70  jal         func_3A2DC0
label_3964c0:
    if (ctx->pc == 0x3964C0u) {
        ctx->pc = 0x3964C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964BCu;
        // 0x3964c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964C4u;
        goto label_3964c4;
    }
    ctx->pc = 0x3964BCu;
    SET_GPR_U32(ctx, 31, 0x3964C4u);
    ctx->pc = 0x3964C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964BCu;
    // 0x3964c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3964BCu, 0x3964C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964C4u;
label_3964c4:
    // 0x3964c4: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3964c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_3964c8:
    // 0x3964c8: 0xc0e8b68  jal         func_3A2DA0
label_3964cc:
    if (ctx->pc == 0x3964CCu) {
        ctx->pc = 0x3964CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964C8u;
        // 0x3964cc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964D0u;
        goto label_3964d0;
    }
    ctx->pc = 0x3964C8u;
    SET_GPR_U32(ctx, 31, 0x3964D0u);
    ctx->pc = 0x3964CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964C8u;
    // 0x3964cc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3964C8u, 0x3964D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964D0u;
label_3964d0:
    // 0x3964d0: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3964d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_3964d4:
    // 0x3964d4: 0xc0e8b68  jal         func_3A2DA0
label_3964d8:
    if (ctx->pc == 0x3964D8u) {
        ctx->pc = 0x3964D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964D4u;
        // 0x3964d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964DCu;
        goto label_3964dc;
    }
    ctx->pc = 0x3964D4u;
    SET_GPR_U32(ctx, 31, 0x3964DCu);
    ctx->pc = 0x3964D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964D4u;
    // 0x3964d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3964D4u, 0x3964DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964DCu;
label_3964dc:
    // 0x3964dc: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3964dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_3964e0:
    // 0x3964e0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3964e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3964e4:
    // 0x3964e4: 0xc0e8b58  jal         func_3A2D60
label_3964e8:
    if (ctx->pc == 0x3964E8u) {
        ctx->pc = 0x3964E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964E4u;
        // 0x3964e8: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964ECu;
        goto label_3964ec;
    }
    ctx->pc = 0x3964E4u;
    SET_GPR_U32(ctx, 31, 0x3964ECu);
    ctx->pc = 0x3964E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964E4u;
    // 0x3964e8: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3964E4u, 0x3964ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964ECu;
label_3964ec:
    // 0x3964ec: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3964ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_3964f0:
    // 0x3964f0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3964f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3964f4:
    // 0x3964f4: 0xc0e8b58  jal         func_3A2D60
label_3964f8:
    if (ctx->pc == 0x3964F8u) {
        ctx->pc = 0x3964F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964F4u;
        // 0x3964f8: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964FCu;
        goto label_3964fc;
    }
    ctx->pc = 0x3964F4u;
    SET_GPR_U32(ctx, 31, 0x3964FCu);
    ctx->pc = 0x3964F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964F4u;
    // 0x3964f8: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3964F4u, 0x3964FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964FCu;
label_3964fc:
    // 0x3964fc: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x3964fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_396500:
    // 0x396500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x396500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396504:
    // 0x396504: 0xc0e8b80  jal         func_3A2E00
label_396508:
    if (ctx->pc == 0x396508u) {
        ctx->pc = 0x396508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396504u;
        // 0x396508: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39650Cu;
        goto label_39650c;
    }
    ctx->pc = 0x396504u;
    SET_GPR_U32(ctx, 31, 0x39650Cu);
    ctx->pc = 0x396508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396504u;
    // 0x396508: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x396504u, 0x39650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39650Cu;
label_39650c:
    // 0x39650c: 0xc0e8b50  jal         func_3A2D40
label_396510:
    if (ctx->pc == 0x396510u) {
        ctx->pc = 0x396510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39650Cu;
        // 0x396510: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396514u;
        goto label_396514;
    }
    ctx->pc = 0x39650Cu;
    SET_GPR_U32(ctx, 31, 0x396514u);
    ctx->pc = 0x396510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39650Cu;
    // 0x396510: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39650Cu, 0x396514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396514u;
label_396514:
    // 0x396514: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x396514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_396518:
    // 0x396518: 0x8e622c7c  lw          $v0, 0x2C7C($s3)
    ctx->pc = 0x396518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_39651c:
    // 0x39651c: 0x8c45084c  lw          $a1, 0x84C($v0)
    ctx->pc = 0x39651cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
label_396520:
    // 0x396520: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x396520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_396524:
    // 0x396524: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x396524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_396528:
    // 0x396528: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x396528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39652c:
    // 0x39652c: 0x40f809  jalr        $v0
label_396530:
    if (ctx->pc == 0x396530u) {
        ctx->pc = 0x396530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39652Cu;
        // 0x396530: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396534u;
        goto label_396534;
    }
    ctx->pc = 0x39652Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396534u);
        ctx->pc = 0x396530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39652Cu;
        // 0x396530: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39652Cu, 0x396534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396534u;
label_396534:
    // 0x396534: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x396534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_396538:
    // 0x396538: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_39653c:
    if (ctx->pc == 0x39653Cu) {
        ctx->pc = 0x39653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396538u;
        // 0x39653c: 0x8e662c7c  lw          $a2, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396540u;
        goto label_396540;
    }
    ctx->pc = 0x396538u;
    {
        const bool branch_taken_0x396538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396538u;
        // 0x39653c: 0x8e662c7c  lw          $a2, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396538) {
            ctx->pc = 0x396420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396420;
        }
    }
    ctx->pc = 0x396540u;
label_396540:
    // 0x396540: 0x8e622c7c  lw          $v0, 0x2C7C($s3)
    ctx->pc = 0x396540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_396544:
    // 0x396544: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x396544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_396548:
    // 0x396548: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x396548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39654c:
    // 0x39654c: 0xc0e57ce  jal         func_395F38
label_396550:
    if (ctx->pc == 0x396550u) {
        ctx->pc = 0x396550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39654Cu;
        // 0x396550: 0x8c500840  lw          $s0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396554u;
        goto label_396554;
    }
    ctx->pc = 0x39654Cu;
    SET_GPR_U32(ctx, 31, 0x396554u);
    ctx->pc = 0x396550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39654Cu;
    // 0x396550: 0x8c500840  lw          $s0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39654Cu, 0x396554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396554u;
label_396554:
    // 0x396554: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x396554u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_396558:
    // 0x396558: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x396558u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_39655c:
    // 0x39655c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396560:
    // 0x396560: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x396560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396564:
    // 0x396564: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x396564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_396568:
    // 0x396568: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x396568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_39656c:
    // 0x39656c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x39656cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_396570:
    // 0x396570: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x396570u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_396574:
    // 0x396574: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x396574u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_396578:
    // 0x396578: 0xc0e6a14  jal         func_39A850
label_39657c:
    if (ctx->pc == 0x39657Cu) {
        ctx->pc = 0x39657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396578u;
        // 0x39657c: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396580u;
        goto label_396580;
    }
    ctx->pc = 0x396578u;
    SET_GPR_U32(ctx, 31, 0x396580u);
    ctx->pc = 0x39657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396578u;
    // 0x39657c: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A850u, 0x396578u, 0x396580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396580u;
label_396580:
    // 0x396580: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x396580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396584:
    // 0x396584: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
label_396588:
    if (ctx->pc == 0x396588u) {
        ctx->pc = 0x396588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396584u;
        // 0x396588: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39658Cu;
        goto label_39658c;
    }
    ctx->pc = 0x396584u;
    {
        const bool branch_taken_0x396584 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x396588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396584u;
        // 0x396588: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396584) {
            ctx->pc = 0x396638u;
            goto label_396638;
        }
    }
    ctx->pc = 0x39658Cu;
label_39658c:
    // 0x39658c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x39658cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_396590:
    // 0x396590: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x396590u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_396594:
    // 0x396594: 0x0  nop
    ctx->pc = 0x396594u;
    // NOP
label_396598:
    // 0x396598: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x396598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_39659c:
    // 0x39659c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3965a0:
    // 0x3965a0: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3965a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_3965a4:
    // 0x3965a4: 0xc0e44cc  jal         func_391330
label_3965a8:
    if (ctx->pc == 0x3965A8u) {
        ctx->pc = 0x3965A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965A4u;
        // 0x3965a8: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3965ACu;
        goto label_3965ac;
    }
    ctx->pc = 0x3965A4u;
    SET_GPR_U32(ctx, 31, 0x3965ACu);
    ctx->pc = 0x3965A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965A4u;
    // 0x3965a8: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3965A4u, 0x3965ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965ACu;
label_3965ac:
    // 0x3965ac: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x3965acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_3965b0:
    // 0x3965b0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3965b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3965b4:
    // 0x3965b4: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
label_3965b8:
    if (ctx->pc == 0x3965B8u) {
        ctx->pc = 0x3965B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965B4u;
        // 0x3965b8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3965BCu;
        goto label_3965bc;
    }
    ctx->pc = 0x3965B4u;
    {
        const bool branch_taken_0x3965b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3965b4) {
            ctx->pc = 0x3965B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3965B4u;
            // 0x3965b8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39662Cu;
            goto label_39662c;
        }
    }
    ctx->pc = 0x3965BCu;
label_3965bc:
    // 0x3965bc: 0xc0e8b48  jal         func_3A2D20
label_3965c0:
    if (ctx->pc == 0x3965C0u) {
        ctx->pc = 0x3965C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965BCu;
        // 0x3965c0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3965C4u;
        goto label_3965c4;
    }
    ctx->pc = 0x3965BCu;
    SET_GPR_U32(ctx, 31, 0x3965C4u);
    ctx->pc = 0x3965C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965BCu;
    // 0x3965c0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3965BCu, 0x3965C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965C4u;
label_3965c4:
    // 0x3965c4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3965c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_3965c8:
    // 0x3965c8: 0xc0e8b70  jal         func_3A2DC0
label_3965cc:
    if (ctx->pc == 0x3965CCu) {
        ctx->pc = 0x3965CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965C8u;
        // 0x3965cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3965D0u;
        goto label_3965d0;
    }
    ctx->pc = 0x3965C8u;
    SET_GPR_U32(ctx, 31, 0x3965D0u);
    ctx->pc = 0x3965CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965C8u;
    // 0x3965cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3965C8u, 0x3965D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965D0u;
label_3965d0:
    // 0x3965d0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3965d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_3965d4:
    // 0x3965d4: 0xc0e8b70  jal         func_3A2DC0
label_3965d8:
    if (ctx->pc == 0x3965D8u) {
        ctx->pc = 0x3965D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965D4u;
        // 0x3965d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3965DCu;
        goto label_3965dc;
    }
    ctx->pc = 0x3965D4u;
    SET_GPR_U32(ctx, 31, 0x3965DCu);
    ctx->pc = 0x3965D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965D4u;
    // 0x3965d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3965D4u, 0x3965DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965DCu;
label_3965dc:
    // 0x3965dc: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3965dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_3965e0:
    // 0x3965e0: 0xc0e8b68  jal         func_3A2DA0
label_3965e4:
    if (ctx->pc == 0x3965E4u) {
        ctx->pc = 0x3965E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965E0u;
        // 0x3965e4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3965E8u;
        goto label_3965e8;
    }
    ctx->pc = 0x3965E0u;
    SET_GPR_U32(ctx, 31, 0x3965E8u);
    ctx->pc = 0x3965E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965E0u;
    // 0x3965e4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3965E0u, 0x3965E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965E8u;
label_3965e8:
    // 0x3965e8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3965e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_3965ec:
    // 0x3965ec: 0xc0e8b68  jal         func_3A2DA0
label_3965f0:
    if (ctx->pc == 0x3965F0u) {
        ctx->pc = 0x3965F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965ECu;
        // 0x3965f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3965F4u;
        goto label_3965f4;
    }
    ctx->pc = 0x3965ECu;
    SET_GPR_U32(ctx, 31, 0x3965F4u);
    ctx->pc = 0x3965F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965ECu;
    // 0x3965f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3965ECu, 0x3965F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965F4u;
label_3965f4:
    // 0x3965f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3965f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3965f8:
    // 0x3965f8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3965f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_3965fc:
    // 0x3965fc: 0xc0e8b58  jal         func_3A2D60
label_396600:
    if (ctx->pc == 0x396600u) {
        ctx->pc = 0x396600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965FCu;
        // 0x396600: 0x246516c0  addiu       $a1, $v1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396604u;
        goto label_396604;
    }
    ctx->pc = 0x3965FCu;
    SET_GPR_U32(ctx, 31, 0x396604u);
    ctx->pc = 0x396600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965FCu;
    // 0x396600: 0x246516c0  addiu       $a1, $v1, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3965FCu, 0x396604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396604u;
label_396604:
    // 0x396604: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x396604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_396608:
    // 0x396608: 0xc0e8b58  jal         func_3A2D60
label_39660c:
    if (ctx->pc == 0x39660Cu) {
        ctx->pc = 0x39660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396608u;
        // 0x39660c: 0x27c51740  addiu       $a1, $fp, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396610u;
        goto label_396610;
    }
    ctx->pc = 0x396608u;
    SET_GPR_U32(ctx, 31, 0x396610u);
    ctx->pc = 0x39660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396608u;
    // 0x39660c: 0x27c51740  addiu       $a1, $fp, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x396608u, 0x396610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396610u;
label_396610:
    // 0x396610: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x396610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_396614:
    // 0x396614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x396614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396618:
    // 0x396618: 0xc0e8b80  jal         func_3A2E00
label_39661c:
    if (ctx->pc == 0x39661Cu) {
        ctx->pc = 0x39661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396618u;
        // 0x39661c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396620u;
        goto label_396620;
    }
    ctx->pc = 0x396618u;
    SET_GPR_U32(ctx, 31, 0x396620u);
    ctx->pc = 0x39661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396618u;
    // 0x39661c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x396618u, 0x396620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396620u;
label_396620:
    // 0x396620: 0xc0e8b50  jal         func_3A2D40
label_396624:
    if (ctx->pc == 0x396624u) {
        ctx->pc = 0x396624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396620u;
        // 0x396624: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396628u;
        goto label_396628;
    }
    ctx->pc = 0x396620u;
    SET_GPR_U32(ctx, 31, 0x396628u);
    ctx->pc = 0x396624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396620u;
    // 0x396624: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x396620u, 0x396628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396628u;
label_396628:
    // 0x396628: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x396628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_39662c:
    // 0x39662c: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x39662cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_396630:
    // 0x396630: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_396634:
    if (ctx->pc == 0x396634u) {
        ctx->pc = 0x396634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396630u;
        // 0x396634: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396638u;
        goto label_396638;
    }
    ctx->pc = 0x396630u;
    {
        const bool branch_taken_0x396630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396630u;
        // 0x396634: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396630) {
            ctx->pc = 0x396598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396598;
        }
    }
    ctx->pc = 0x396638u;
label_396638:
    // 0x396638: 0x8e622c7c  lw          $v0, 0x2C7C($s3)
    ctx->pc = 0x396638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_39663c:
    // 0x39663c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x39663cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_396640:
    // 0x396640: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x396640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396644:
    // 0x396644: 0xc0e2612  jal         func_389848
label_396648:
    if (ctx->pc == 0x396648u) {
        ctx->pc = 0x396648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396644u;
        // 0x396648: 0x8c500844  lw          $s0, 0x844($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39664Cu;
        goto label_39664c;
    }
    ctx->pc = 0x396644u;
    SET_GPR_U32(ctx, 31, 0x39664Cu);
    ctx->pc = 0x396648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396644u;
    // 0x396648: 0x8c500844  lw          $s0, 0x844($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x396644u, 0x39664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39664Cu;
label_39664c:
    // 0x39664c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39664cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396650:
    // 0x396650: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x396650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396654:
    // 0x396654: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x396654u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_396658:
    // 0x396658: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x396658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39665c:
    // 0x39665c: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x39665cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_396660:
    // 0x396660: 0xc0e39ce  jal         func_38E738
label_396664:
    if (ctx->pc == 0x396664u) {
        ctx->pc = 0x396664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396660u;
        // 0x396664: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396668u;
        goto label_396668;
    }
    ctx->pc = 0x396660u;
    SET_GPR_U32(ctx, 31, 0x396668u);
    ctx->pc = 0x396664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396660u;
    // 0x396664: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E738u, 0x396660u, 0x396668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396668u;
label_396668:
    // 0x396668: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x396668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39666c:
    // 0x39666c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_396670:
    if (ctx->pc == 0x396670u) {
        ctx->pc = 0x396670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39666Cu;
        // 0x396670: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396674u;
        goto label_396674;
    }
    ctx->pc = 0x39666Cu;
    {
        const bool branch_taken_0x39666c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x396670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39666Cu;
        // 0x396670: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39666c) {
            ctx->pc = 0x396694u;
            goto label_396694;
        }
    }
    ctx->pc = 0x396674u;
label_396674:
    // 0x396674: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x396674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396678:
    // 0x396678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x396678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39667c:
    // 0x39667c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39667cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_396680:
    // 0x396680: 0xc0e2c3a  jal         func_38B0E8
label_396684:
    if (ctx->pc == 0x396684u) {
        ctx->pc = 0x396684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396680u;
        // 0x396684: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396688u;
        goto label_396688;
    }
    ctx->pc = 0x396680u;
    SET_GPR_U32(ctx, 31, 0x396688u);
    ctx->pc = 0x396684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396680u;
    // 0x396684: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B0E8u, 0x396680u, 0x396688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396688u;
label_396688:
    // 0x396688: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x396688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_39668c:
    // 0x39668c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_396690:
    if (ctx->pc == 0x396690u) {
        ctx->pc = 0x396690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39668Cu;
        // 0x396690: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396694u;
        goto label_396694;
    }
    ctx->pc = 0x39668Cu;
    {
        const bool branch_taken_0x39668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39668c) {
            ctx->pc = 0x396690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39668Cu;
            // 0x396690: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396678;
        }
    }
    ctx->pc = 0x396694u;
label_396694:
    // 0x396694: 0x7bb00ce0  lq          $s0, 0xCE0($sp)
    ctx->pc = 0x396694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3296)));
label_396698:
    // 0x396698: 0x7bb10cd0  lq          $s1, 0xCD0($sp)
    ctx->pc = 0x396698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3280)));
label_39669c:
    // 0x39669c: 0x7bb20cc0  lq          $s2, 0xCC0($sp)
    ctx->pc = 0x39669cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3264)));
label_3966a0:
    // 0x3966a0: 0x7bb30cb0  lq          $s3, 0xCB0($sp)
    ctx->pc = 0x3966a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3248)));
label_3966a4:
    // 0x3966a4: 0x7bb40ca0  lq          $s4, 0xCA0($sp)
    ctx->pc = 0x3966a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3232)));
label_3966a8:
    // 0x3966a8: 0x7bb50c90  lq          $s5, 0xC90($sp)
    ctx->pc = 0x3966a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 3216)));
label_3966ac:
    // 0x3966ac: 0x7bb60c80  lq          $s6, 0xC80($sp)
    ctx->pc = 0x3966acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 3200)));
label_3966b0:
    // 0x3966b0: 0x7bb70c70  lq          $s7, 0xC70($sp)
    ctx->pc = 0x3966b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 3184)));
label_3966b4:
    // 0x3966b4: 0x7bbe0c60  lq          $fp, 0xC60($sp)
    ctx->pc = 0x3966b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 3168)));
label_3966b8:
    // 0x3966b8: 0xdfbf0c50  ld          $ra, 0xC50($sp)
    ctx->pc = 0x3966b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3152)));
label_3966bc:
    // 0x3966bc: 0xc7b40cf0  lwc1        $f20, 0xCF0($sp)
    ctx->pc = 0x3966bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3966c0:
    // 0x3966c0: 0x3e00008  jr          $ra
label_3966c4:
    if (ctx->pc == 0x3966C4u) {
        ctx->pc = 0x3966C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966C0u;
        // 0x3966c4: 0x27bd0d00  addiu       $sp, $sp, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3966C8u;
        goto label_fallthrough_0x3966c0;
    }
    ctx->pc = 0x3966C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3966C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966C0u;
        // 0x3966c4: 0x27bd0d00  addiu       $sp, $sp, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3966C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3966c0:
    ctx->pc = 0x3966C8u;
}
