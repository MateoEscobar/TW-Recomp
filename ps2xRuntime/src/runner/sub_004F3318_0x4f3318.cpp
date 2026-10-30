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

// Function: sub_004F3318
// Address: 0x4f3318 - 0x4f3580
void sub_004F3318_0x4f3318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3318_0x4f3318");
#endif

    switch (ctx->pc) {
        case 0x4f3318u: goto label_4f3318;
        case 0x4f331cu: goto label_4f331c;
        case 0x4f3320u: goto label_4f3320;
        case 0x4f3324u: goto label_4f3324;
        case 0x4f3328u: goto label_4f3328;
        case 0x4f332cu: goto label_4f332c;
        case 0x4f3330u: goto label_4f3330;
        case 0x4f3334u: goto label_4f3334;
        case 0x4f3338u: goto label_4f3338;
        case 0x4f333cu: goto label_4f333c;
        case 0x4f3340u: goto label_4f3340;
        case 0x4f3344u: goto label_4f3344;
        case 0x4f3348u: goto label_4f3348;
        case 0x4f334cu: goto label_4f334c;
        case 0x4f3350u: goto label_4f3350;
        case 0x4f3354u: goto label_4f3354;
        case 0x4f3358u: goto label_4f3358;
        case 0x4f335cu: goto label_4f335c;
        case 0x4f3360u: goto label_4f3360;
        case 0x4f3364u: goto label_4f3364;
        case 0x4f3368u: goto label_4f3368;
        case 0x4f336cu: goto label_4f336c;
        case 0x4f3370u: goto label_4f3370;
        case 0x4f3374u: goto label_4f3374;
        case 0x4f3378u: goto label_4f3378;
        case 0x4f337cu: goto label_4f337c;
        case 0x4f3380u: goto label_4f3380;
        case 0x4f3384u: goto label_4f3384;
        case 0x4f3388u: goto label_4f3388;
        case 0x4f338cu: goto label_4f338c;
        case 0x4f3390u: goto label_4f3390;
        case 0x4f3394u: goto label_4f3394;
        case 0x4f3398u: goto label_4f3398;
        case 0x4f339cu: goto label_4f339c;
        case 0x4f33a0u: goto label_4f33a0;
        case 0x4f33a4u: goto label_4f33a4;
        case 0x4f33a8u: goto label_4f33a8;
        case 0x4f33acu: goto label_4f33ac;
        case 0x4f33b0u: goto label_4f33b0;
        case 0x4f33b4u: goto label_4f33b4;
        case 0x4f33b8u: goto label_4f33b8;
        case 0x4f33bcu: goto label_4f33bc;
        case 0x4f33c0u: goto label_4f33c0;
        case 0x4f33c4u: goto label_4f33c4;
        case 0x4f33c8u: goto label_4f33c8;
        case 0x4f33ccu: goto label_4f33cc;
        case 0x4f33d0u: goto label_4f33d0;
        case 0x4f33d4u: goto label_4f33d4;
        case 0x4f33d8u: goto label_4f33d8;
        case 0x4f33dcu: goto label_4f33dc;
        case 0x4f33e0u: goto label_4f33e0;
        case 0x4f33e4u: goto label_4f33e4;
        case 0x4f33e8u: goto label_4f33e8;
        case 0x4f33ecu: goto label_4f33ec;
        case 0x4f33f0u: goto label_4f33f0;
        case 0x4f33f4u: goto label_4f33f4;
        case 0x4f33f8u: goto label_4f33f8;
        case 0x4f33fcu: goto label_4f33fc;
        case 0x4f3400u: goto label_4f3400;
        case 0x4f3404u: goto label_4f3404;
        case 0x4f3408u: goto label_4f3408;
        case 0x4f340cu: goto label_4f340c;
        case 0x4f3410u: goto label_4f3410;
        case 0x4f3414u: goto label_4f3414;
        case 0x4f3418u: goto label_4f3418;
        case 0x4f341cu: goto label_4f341c;
        case 0x4f3420u: goto label_4f3420;
        case 0x4f3424u: goto label_4f3424;
        case 0x4f3428u: goto label_4f3428;
        case 0x4f342cu: goto label_4f342c;
        case 0x4f3430u: goto label_4f3430;
        case 0x4f3434u: goto label_4f3434;
        case 0x4f3438u: goto label_4f3438;
        case 0x4f343cu: goto label_4f343c;
        case 0x4f3440u: goto label_4f3440;
        case 0x4f3444u: goto label_4f3444;
        case 0x4f3448u: goto label_4f3448;
        case 0x4f344cu: goto label_4f344c;
        case 0x4f3450u: goto label_4f3450;
        case 0x4f3454u: goto label_4f3454;
        case 0x4f3458u: goto label_4f3458;
        case 0x4f345cu: goto label_4f345c;
        case 0x4f3460u: goto label_4f3460;
        case 0x4f3464u: goto label_4f3464;
        case 0x4f3468u: goto label_4f3468;
        case 0x4f346cu: goto label_4f346c;
        case 0x4f3470u: goto label_4f3470;
        case 0x4f3474u: goto label_4f3474;
        case 0x4f3478u: goto label_4f3478;
        case 0x4f347cu: goto label_4f347c;
        case 0x4f3480u: goto label_4f3480;
        case 0x4f3484u: goto label_4f3484;
        case 0x4f3488u: goto label_4f3488;
        case 0x4f348cu: goto label_4f348c;
        case 0x4f3490u: goto label_4f3490;
        case 0x4f3494u: goto label_4f3494;
        case 0x4f3498u: goto label_4f3498;
        case 0x4f349cu: goto label_4f349c;
        case 0x4f34a0u: goto label_4f34a0;
        case 0x4f34a4u: goto label_4f34a4;
        case 0x4f34a8u: goto label_4f34a8;
        case 0x4f34acu: goto label_4f34ac;
        case 0x4f34b0u: goto label_4f34b0;
        case 0x4f34b4u: goto label_4f34b4;
        case 0x4f34b8u: goto label_4f34b8;
        case 0x4f34bcu: goto label_4f34bc;
        case 0x4f34c0u: goto label_4f34c0;
        case 0x4f34c4u: goto label_4f34c4;
        case 0x4f34c8u: goto label_4f34c8;
        case 0x4f34ccu: goto label_4f34cc;
        case 0x4f34d0u: goto label_4f34d0;
        case 0x4f34d4u: goto label_4f34d4;
        case 0x4f34d8u: goto label_4f34d8;
        case 0x4f34dcu: goto label_4f34dc;
        case 0x4f34e0u: goto label_4f34e0;
        case 0x4f34e4u: goto label_4f34e4;
        case 0x4f34e8u: goto label_4f34e8;
        case 0x4f34ecu: goto label_4f34ec;
        case 0x4f34f0u: goto label_4f34f0;
        case 0x4f34f4u: goto label_4f34f4;
        case 0x4f34f8u: goto label_4f34f8;
        case 0x4f34fcu: goto label_4f34fc;
        case 0x4f3500u: goto label_4f3500;
        case 0x4f3504u: goto label_4f3504;
        case 0x4f3508u: goto label_4f3508;
        case 0x4f350cu: goto label_4f350c;
        case 0x4f3510u: goto label_4f3510;
        case 0x4f3514u: goto label_4f3514;
        case 0x4f3518u: goto label_4f3518;
        case 0x4f351cu: goto label_4f351c;
        case 0x4f3520u: goto label_4f3520;
        case 0x4f3524u: goto label_4f3524;
        case 0x4f3528u: goto label_4f3528;
        case 0x4f352cu: goto label_4f352c;
        case 0x4f3530u: goto label_4f3530;
        case 0x4f3534u: goto label_4f3534;
        case 0x4f3538u: goto label_4f3538;
        case 0x4f353cu: goto label_4f353c;
        case 0x4f3540u: goto label_4f3540;
        case 0x4f3544u: goto label_4f3544;
        case 0x4f3548u: goto label_4f3548;
        case 0x4f354cu: goto label_4f354c;
        case 0x4f3550u: goto label_4f3550;
        case 0x4f3554u: goto label_4f3554;
        case 0x4f3558u: goto label_4f3558;
        case 0x4f355cu: goto label_4f355c;
        case 0x4f3560u: goto label_4f3560;
        case 0x4f3564u: goto label_4f3564;
        case 0x4f3568u: goto label_4f3568;
        case 0x4f356cu: goto label_4f356c;
        case 0x4f3570u: goto label_4f3570;
        case 0x4f3574u: goto label_4f3574;
        case 0x4f3578u: goto label_4f3578;
        case 0x4f357cu: goto label_4f357c;
        default: break;
    }

    ctx->pc = 0x4f3318u;

label_4f3318:
    // 0x4f3318: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4f3318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4f331c:
    // 0x4f331c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4f331cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f3320:
    // 0x4f3320: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4f3320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4f3324:
    // 0x4f3324: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f3324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4f3328:
    // 0x4f3328: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f3328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f332c:
    // 0x4f332c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4f332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_4f3330:
    // 0x4f3330: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4f3330u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3334:
    // 0x4f3334: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4f3334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4f3338:
    // 0x4f3338: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x4f3338u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4f333c:
    // 0x4f333c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4f333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4f3340:
    // 0x4f3340: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4f3340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4f3344:
    // 0x4f3344: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4f3344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_4f3348:
    // 0x4f3348: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4f3348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_4f334c:
    // 0x4f334c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f334cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f3350:
    // 0x4f3350: 0x1140007d  beqz        $t2, . + 4 + (0x7D << 2)
label_4f3354:
    if (ctx->pc == 0x4F3354u) {
        ctx->pc = 0x4F3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3350u;
        // 0x4f3354: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3358u;
        goto label_4f3358;
    }
    ctx->pc = 0x4F3350u;
    {
        const bool branch_taken_0x4f3350 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3350u;
        // 0x4f3354: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3350) {
            ctx->pc = 0x4F3548u;
            goto label_4f3548;
        }
    }
    ctx->pc = 0x4F3358u;
label_4f3358:
    // 0x4f3358: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x4f3358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4f335c:
    // 0x4f335c: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x4f335cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f3360:
    // 0x4f3360: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x4f3360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4f3364:
    // 0x4f3364: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4f3364u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4f3368:
    // 0x4f3368: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x4f3368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4f336c:
    // 0x4f336c: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_4f3370:
    if (ctx->pc == 0x4F3370u) {
        ctx->pc = 0x4F3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F336Cu;
        // 0x4f3370: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3374u;
        goto label_4f3374;
    }
    ctx->pc = 0x4F336Cu;
    {
        const bool branch_taken_0x4f336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f336c) {
            ctx->pc = 0x4F3370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F336Cu;
            // 0x4f3370: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3454u;
            goto label_4f3454;
        }
    }
    ctx->pc = 0x4F3374u;
label_4f3374:
    // 0x4f3374: 0x2541823  subu        $v1, $s2, $s4
    ctx->pc = 0x4f3374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4f3378:
    // 0x4f3378: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f3378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4f337c:
    // 0x4f337c: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x4f337cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
label_4f3380:
    // 0x4f3380: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4f3380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4f3384:
    // 0x4f3384: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x4f3384u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4f3388:
    // 0x4f3388: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_4f338c:
    if (ctx->pc == 0x4F338Cu) {
        ctx->pc = 0x4F338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3388u;
        // 0x4f338c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3390u;
        goto label_4f3390;
    }
    ctx->pc = 0x4F3388u;
    {
        const bool branch_taken_0x4f3388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3388u;
        // 0x4f338c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3388) {
            ctx->pc = 0x4F33F4u;
            goto label_4f33f4;
        }
    }
    ctx->pc = 0x4F3390u;
label_4f3390:
    // 0x4f3390: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f3390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f3394:
    // 0x4f3394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f3394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f3398:
    // 0x4f3398: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4f3398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f339c:
    // 0x4f339c: 0xc10c1bb  jal         func_4306EC
label_4f33a0:
    if (ctx->pc == 0x4F33A0u) {
        ctx->pc = 0x4F33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F339Cu;
        // 0x4f33a0: 0x2452823  subu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F33A4u;
        goto label_4f33a4;
    }
    ctx->pc = 0x4F339Cu;
    SET_GPR_U32(ctx, 31, 0x4F33A4u);
    ctx->pc = 0x4F33A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F339Cu;
    // 0x4f33a0: 0x2452823  subu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F339Cu, 0x4F33A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F33A4u;
label_4f33a4:
    // 0x4f33a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4f33a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f33a8:
    // 0x4f33a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f33a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f33ac:
    // 0x4f33ac: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4f33acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f33b0:
    // 0x4f33b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f33b4:
    // 0x4f33b4: 0x2433023  subu        $a2, $s2, $v1
    ctx->pc = 0x4f33b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4f33b8:
    // 0x4f33b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f33bc:
    // 0x4f33bc: 0xd43023  subu        $a2, $a2, $s4
    ctx->pc = 0x4f33bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_4f33c0:
    // 0x4f33c0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x4f33c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_4f33c4:
    // 0x4f33c4: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f33c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f33c8:
    // 0x4f33c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4f33c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f33cc:
    // 0x4f33cc: 0xc10c1bb  jal         func_4306EC
label_4f33d0:
    if (ctx->pc == 0x4F33D0u) {
        ctx->pc = 0x4F33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F33CCu;
        // 0x4f33d0: 0x2462023  subu        $a0, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F33D4u;
        goto label_4f33d4;
    }
    ctx->pc = 0x4F33CCu;
    SET_GPR_U32(ctx, 31, 0x4F33D4u);
    ctx->pc = 0x4F33D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F33CCu;
    // 0x4f33d0: 0x2462023  subu        $a0, $s2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F33CCu, 0x4F33D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F33D4u;
label_4f33d4:
    // 0x4f33d4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4f33d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f33d8:
    // 0x4f33d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f33d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f33dc:
    // 0x4f33dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4f33dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f33e0:
    // 0x4f33e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f33e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f33e4:
    // 0x4f33e4: 0xc13ccb0  jal         func_4F32C0
label_4f33e8:
    if (ctx->pc == 0x4F33E8u) {
        ctx->pc = 0x4F33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F33E4u;
        // 0x4f33e8: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F33ECu;
        goto label_4f33ec;
    }
    ctx->pc = 0x4F33E4u;
    SET_GPR_U32(ctx, 31, 0x4F33ECu);
    ctx->pc = 0x4F33E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F33E4u;
    // 0x4f33e8: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F32C0u, 0x4F33E4u, 0x4F33ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F33ECu;
label_4f33ec:
    // 0x4f33ec: 0x10000057  b           . + 4 + (0x57 << 2)
label_4f33f0:
    if (ctx->pc == 0x4F33F0u) {
        ctx->pc = 0x4F33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F33ECu;
        // 0x4f33f0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F33F4u;
        goto label_4f33f4;
    }
    ctx->pc = 0x4F33ECu;
    {
        const bool branch_taken_0x4f33ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F33ECu;
        // 0x4f33f0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f33ec) {
            ctx->pc = 0x4F354Cu;
            goto label_4f354c;
        }
    }
    ctx->pc = 0x4F33F4u;
label_4f33f4:
    // 0x4f33f4: 0x1512823  subu        $a1, $t2, $s1
    ctx->pc = 0x4f33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
label_4f33f8:
    // 0x4f33f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4f33f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f33fc:
    // 0x4f33fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f33fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f3400:
    // 0x4f3400: 0xc13ccbc  jal         func_4F32F0
label_4f3404:
    if (ctx->pc == 0x4F3404u) {
        ctx->pc = 0x4F3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3400u;
        // 0x4f3404: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3408u;
        goto label_4f3408;
    }
    ctx->pc = 0x4F3400u;
    SET_GPR_U32(ctx, 31, 0x4F3408u);
    ctx->pc = 0x4F3404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3400u;
    // 0x4f3404: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F32F0u, 0x4F3400u, 0x4F3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3408u;
label_4f3408:
    // 0x4f3408: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4f3408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f340c:
    // 0x4f340c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f340cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f3410:
    // 0x4f3410: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4f3410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f3414:
    // 0x4f3414: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f3414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3418:
    // 0x4f3418: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x4f3418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4f341c:
    // 0x4f341c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f341cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f3420:
    // 0x4f3420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f3424:
    // 0x4f3424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f3424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f3428:
    // 0x4f3428: 0xc10c1bb  jal         func_4306EC
label_4f342c:
    if (ctx->pc == 0x4F342Cu) {
        ctx->pc = 0x4F342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3428u;
        // 0x4f342c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3430u;
        goto label_4f3430;
    }
    ctx->pc = 0x4F3428u;
    SET_GPR_U32(ctx, 31, 0x4F3430u);
    ctx->pc = 0x4F342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3428u;
    // 0x4f342c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F3428u, 0x4F3430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3430u;
label_4f3430:
    // 0x4f3430: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4f3430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f3434:
    // 0x4f3434: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4f3434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f3438:
    // 0x4f3438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4f3438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f343c:
    // 0x4f343c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4f343cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f3440:
    // 0x4f3440: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4f3440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4f3444:
    // 0x4f3444: 0xc13ccb0  jal         func_4F32C0
label_4f3448:
    if (ctx->pc == 0x4F3448u) {
        ctx->pc = 0x4F3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3444u;
        // 0x4f3448: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F344Cu;
        goto label_4f344c;
    }
    ctx->pc = 0x4F3444u;
    SET_GPR_U32(ctx, 31, 0x4F344Cu);
    ctx->pc = 0x4F3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3444u;
    // 0x4f3448: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F32C0u, 0x4F3444u, 0x4F344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F344Cu;
label_4f344c:
    // 0x4f344c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_4f3450:
    if (ctx->pc == 0x4F3450u) {
        ctx->pc = 0x4F3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F344Cu;
        // 0x4f3450: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3454u;
        goto label_4f3454;
    }
    ctx->pc = 0x4F344Cu;
    {
        const bool branch_taken_0x4f344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F344Cu;
        // 0x4f3450: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f344c) {
            ctx->pc = 0x4F354Cu;
            goto label_4f354c;
        }
    }
    ctx->pc = 0x4F3454u;
label_4f3454:
    // 0x4f3454: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4f3454u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4f3458:
    // 0x4f3458: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x4f3458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_4f345c:
    // 0x4f345c: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x4f345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_4f3460:
    // 0x4f3460: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x4f3460u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4f3464:
    // 0x4f3464: 0x8ee9b9c0  lw          $t1, -0x4640($s7)
    ctx->pc = 0x4f3464u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4f3468:
    // 0x4f3468: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4f3468u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4f346c:
    // 0x4f346c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x4f346cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_4f3470:
    // 0x4f3470: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4f3470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_4f3474:
    // 0x4f3474: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x4f3474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4f3478:
    // 0x4f3478: 0xe2200a  movz        $a0, $a3, $v0
    ctx->pc = 0x4f3478u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_4f347c:
    // 0x4f347c: 0x24d60cb0  addiu       $s6, $a2, 0xCB0
    ctx->pc = 0x4f347cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 3248));
label_4f3480:
    // 0x4f3480: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4f3480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4f3484:
    // 0x4f3484: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x4f3484u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_4f3488:
    // 0x4f3488: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f3488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f348c:
    // 0x4f348c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4f348cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f3490:
    // 0x4f3490: 0x84a40050  lh          $a0, 0x50($a1)
    ctx->pc = 0x4f3490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
label_4f3494:
    // 0x4f3494: 0x254a0ce0  addiu       $t2, $t2, 0xCE0
    ctx->pc = 0x4f3494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3296));
label_4f3498:
    // 0x4f3498: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f3498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f349c:
    // 0x4f349c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f349cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f34a0:
    // 0x4f34a0: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4f34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_4f34a4:
    // 0x4f34a4: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x4f34a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f34a8:
    // 0x4f34a8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x4f34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4f34ac:
    // 0x4f34ac: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4f34acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_4f34b0:
    // 0x4f34b0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f34b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f34b4:
    // 0x4f34b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4f34b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f34b8:
    // 0x4f34b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4f34b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f34bc:
    // 0x4f34bc: 0x40f809  jalr        $v0
label_4f34c0:
    if (ctx->pc == 0x4F34C0u) {
        ctx->pc = 0x4F34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F34BCu;
        // 0x4f34c0: 0x24a50cd8  addiu       $a1, $a1, 0xCD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F34C4u;
        goto label_4f34c4;
    }
    ctx->pc = 0x4F34BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F34C4u);
        ctx->pc = 0x4F34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F34BCu;
        // 0x4f34c0: 0x24a50cd8  addiu       $a1, $a1, 0xCD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F34BCu, 0x4F34C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F34C4u;
label_4f34c4:
    // 0x4f34c4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f34c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f34c8:
    // 0x4f34c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4f34c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f34cc:
    // 0x4f34cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f34ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f34d0:
    // 0x4f34d0: 0x2858023  subu        $s0, $s4, $a1
    ctx->pc = 0x4f34d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_4f34d4:
    // 0x4f34d4: 0x103083  sra         $a2, $s0, 2
    ctx->pc = 0x4f34d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 2));
label_4f34d8:
    // 0x4f34d8: 0xc10c1bb  jal         func_4306EC
label_4f34dc:
    if (ctx->pc == 0x4F34DCu) {
        ctx->pc = 0x4F34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F34D8u;
        // 0x4f34dc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F34E0u;
        goto label_4f34e0;
    }
    ctx->pc = 0x4F34D8u;
    SET_GPR_U32(ctx, 31, 0x4F34E0u);
    ctx->pc = 0x4F34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F34D8u;
    // 0x4f34dc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F34D8u, 0x4F34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F34E0u;
label_4f34e0:
    // 0x4f34e0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4f34e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f34e4:
    // 0x4f34e4: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x4f34e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_4f34e8:
    // 0x4f34e8: 0xc13ccbc  jal         func_4F32F0
label_4f34ec:
    if (ctx->pc == 0x4F34ECu) {
        ctx->pc = 0x4F34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F34E8u;
        // 0x4f34ec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F34F0u;
        goto label_4f34f0;
    }
    ctx->pc = 0x4F34E8u;
    SET_GPR_U32(ctx, 31, 0x4F34F0u);
    ctx->pc = 0x4F34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F34E8u;
    // 0x4f34ec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F32F0u, 0x4F34E8u, 0x4F34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F34F0u;
label_4f34f0:
    // 0x4f34f0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x4f34f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f34f4:
    // 0x4f34f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f34f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f34f8:
    // 0x4f34f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f34f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f34fc:
    // 0x4f34fc: 0xd43023  subu        $a2, $a2, $s4
    ctx->pc = 0x4f34fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_4f3500:
    // 0x4f3500: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x4f3500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4f3504:
    // 0x4f3504: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f3504u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f3508:
    // 0x4f3508: 0xc10c1bb  jal         func_4306EC
label_4f350c:
    if (ctx->pc == 0x4F350Cu) {
        ctx->pc = 0x4F350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3508u;
        // 0x4f350c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3510u;
        goto label_4f3510;
    }
    ctx->pc = 0x4F3508u;
    SET_GPR_U32(ctx, 31, 0x4F3510u);
    ctx->pc = 0x4F350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3508u;
    // 0x4f350c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F3508u, 0x4F3510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3510u;
label_4f3510:
    // 0x4f3510: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f3510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f3514:
    // 0x4f3514: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4f3518:
    if (ctx->pc == 0x4F3518u) {
        ctx->pc = 0x4F3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3514u;
        // 0x4f3518: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F351Cu;
        goto label_4f351c;
    }
    ctx->pc = 0x4F3514u;
    {
        const bool branch_taken_0x4f3514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3514u;
        // 0x4f3518: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3514) {
            ctx->pc = 0x4F3538u;
            goto label_4f3538;
        }
    }
    ctx->pc = 0x4F351Cu;
label_4f351c:
    // 0x4f351c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4f351cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f3520:
    // 0x4f3520: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f3520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f3524:
    // 0x4f3524: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f3524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f3528:
    // 0x4f3528: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f3528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f352c:
    // 0x4f352c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f352cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f3530:
    // 0x4f3530: 0x60f809  jalr        $v1
label_4f3534:
    if (ctx->pc == 0x4F3534u) {
        ctx->pc = 0x4F3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3530u;
        // 0x4f3534: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3538u;
        goto label_4f3538;
    }
    ctx->pc = 0x4F3530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F3538u);
        ctx->pc = 0x4F3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3530u;
        // 0x4f3534: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3530u, 0x4F3538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3538u;
label_4f3538:
    // 0x4f3538: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x4f3538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_4f353c:
    // 0x4f353c: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x4f353cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_4f3540:
    // 0x4f3540: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x4f3540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_4f3544:
    // 0x4f3544: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x4f3544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_4f3548:
    // 0x4f3548: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4f3548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4f354c:
    // 0x4f354c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4f354cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f3550:
    // 0x4f3550: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4f3550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f3554:
    // 0x4f3554: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4f3554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f3558:
    // 0x4f3558: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f3558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f355c:
    // 0x4f355c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4f355cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f3560:
    // 0x4f3560: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4f3560u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f3564:
    // 0x4f3564: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4f3564u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f3568:
    // 0x4f3568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f3568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f356c:
    // 0x4f356c: 0x3e00008  jr          $ra
label_4f3570:
    if (ctx->pc == 0x4F3570u) {
        ctx->pc = 0x4F3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F356Cu;
        // 0x4f3570: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3574u;
        goto label_4f3574;
    }
    ctx->pc = 0x4F356Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F356Cu;
        // 0x4f3570: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F356Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3574u;
label_4f3574:
    // 0x4f3574: 0x0  nop
    ctx->pc = 0x4f3574u;
    // NOP
label_4f3578:
    // 0x4f3578: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4f3578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4f357c:
    // 0x4f357c: 0x0  nop
    ctx->pc = 0x4f357cu;
    // NOP
    ctx->pc = 0x4f3580u;
}
