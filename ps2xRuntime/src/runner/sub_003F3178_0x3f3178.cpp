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

// Function: sub_003F3178
// Address: 0x3f3178 - 0x3f3588
void sub_003F3178_0x3f3178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3178_0x3f3178");
#endif

    switch (ctx->pc) {
        case 0x3f3178u: goto label_3f3178;
        case 0x3f317cu: goto label_3f317c;
        case 0x3f3180u: goto label_3f3180;
        case 0x3f3184u: goto label_3f3184;
        case 0x3f3188u: goto label_3f3188;
        case 0x3f318cu: goto label_3f318c;
        case 0x3f3190u: goto label_3f3190;
        case 0x3f3194u: goto label_3f3194;
        case 0x3f3198u: goto label_3f3198;
        case 0x3f319cu: goto label_3f319c;
        case 0x3f31a0u: goto label_3f31a0;
        case 0x3f31a4u: goto label_3f31a4;
        case 0x3f31a8u: goto label_3f31a8;
        case 0x3f31acu: goto label_3f31ac;
        case 0x3f31b0u: goto label_3f31b0;
        case 0x3f31b4u: goto label_3f31b4;
        case 0x3f31b8u: goto label_3f31b8;
        case 0x3f31bcu: goto label_3f31bc;
        case 0x3f31c0u: goto label_3f31c0;
        case 0x3f31c4u: goto label_3f31c4;
        case 0x3f31c8u: goto label_3f31c8;
        case 0x3f31ccu: goto label_3f31cc;
        case 0x3f31d0u: goto label_3f31d0;
        case 0x3f31d4u: goto label_3f31d4;
        case 0x3f31d8u: goto label_3f31d8;
        case 0x3f31dcu: goto label_3f31dc;
        case 0x3f31e0u: goto label_3f31e0;
        case 0x3f31e4u: goto label_3f31e4;
        case 0x3f31e8u: goto label_3f31e8;
        case 0x3f31ecu: goto label_3f31ec;
        case 0x3f31f0u: goto label_3f31f0;
        case 0x3f31f4u: goto label_3f31f4;
        case 0x3f31f8u: goto label_3f31f8;
        case 0x3f31fcu: goto label_3f31fc;
        case 0x3f3200u: goto label_3f3200;
        case 0x3f3204u: goto label_3f3204;
        case 0x3f3208u: goto label_3f3208;
        case 0x3f320cu: goto label_3f320c;
        case 0x3f3210u: goto label_3f3210;
        case 0x3f3214u: goto label_3f3214;
        case 0x3f3218u: goto label_3f3218;
        case 0x3f321cu: goto label_3f321c;
        case 0x3f3220u: goto label_3f3220;
        case 0x3f3224u: goto label_3f3224;
        case 0x3f3228u: goto label_3f3228;
        case 0x3f322cu: goto label_3f322c;
        case 0x3f3230u: goto label_3f3230;
        case 0x3f3234u: goto label_3f3234;
        case 0x3f3238u: goto label_3f3238;
        case 0x3f323cu: goto label_3f323c;
        case 0x3f3240u: goto label_3f3240;
        case 0x3f3244u: goto label_3f3244;
        case 0x3f3248u: goto label_3f3248;
        case 0x3f324cu: goto label_3f324c;
        case 0x3f3250u: goto label_3f3250;
        case 0x3f3254u: goto label_3f3254;
        case 0x3f3258u: goto label_3f3258;
        case 0x3f325cu: goto label_3f325c;
        case 0x3f3260u: goto label_3f3260;
        case 0x3f3264u: goto label_3f3264;
        case 0x3f3268u: goto label_3f3268;
        case 0x3f326cu: goto label_3f326c;
        case 0x3f3270u: goto label_3f3270;
        case 0x3f3274u: goto label_3f3274;
        case 0x3f3278u: goto label_3f3278;
        case 0x3f327cu: goto label_3f327c;
        case 0x3f3280u: goto label_3f3280;
        case 0x3f3284u: goto label_3f3284;
        case 0x3f3288u: goto label_3f3288;
        case 0x3f328cu: goto label_3f328c;
        case 0x3f3290u: goto label_3f3290;
        case 0x3f3294u: goto label_3f3294;
        case 0x3f3298u: goto label_3f3298;
        case 0x3f329cu: goto label_3f329c;
        case 0x3f32a0u: goto label_3f32a0;
        case 0x3f32a4u: goto label_3f32a4;
        case 0x3f32a8u: goto label_3f32a8;
        case 0x3f32acu: goto label_3f32ac;
        case 0x3f32b0u: goto label_3f32b0;
        case 0x3f32b4u: goto label_3f32b4;
        case 0x3f32b8u: goto label_3f32b8;
        case 0x3f32bcu: goto label_3f32bc;
        case 0x3f32c0u: goto label_3f32c0;
        case 0x3f32c4u: goto label_3f32c4;
        case 0x3f32c8u: goto label_3f32c8;
        case 0x3f32ccu: goto label_3f32cc;
        case 0x3f32d0u: goto label_3f32d0;
        case 0x3f32d4u: goto label_3f32d4;
        case 0x3f32d8u: goto label_3f32d8;
        case 0x3f32dcu: goto label_3f32dc;
        case 0x3f32e0u: goto label_3f32e0;
        case 0x3f32e4u: goto label_3f32e4;
        case 0x3f32e8u: goto label_3f32e8;
        case 0x3f32ecu: goto label_3f32ec;
        case 0x3f32f0u: goto label_3f32f0;
        case 0x3f32f4u: goto label_3f32f4;
        case 0x3f32f8u: goto label_3f32f8;
        case 0x3f32fcu: goto label_3f32fc;
        case 0x3f3300u: goto label_3f3300;
        case 0x3f3304u: goto label_3f3304;
        case 0x3f3308u: goto label_3f3308;
        case 0x3f330cu: goto label_3f330c;
        case 0x3f3310u: goto label_3f3310;
        case 0x3f3314u: goto label_3f3314;
        case 0x3f3318u: goto label_3f3318;
        case 0x3f331cu: goto label_3f331c;
        case 0x3f3320u: goto label_3f3320;
        case 0x3f3324u: goto label_3f3324;
        case 0x3f3328u: goto label_3f3328;
        case 0x3f332cu: goto label_3f332c;
        case 0x3f3330u: goto label_3f3330;
        case 0x3f3334u: goto label_3f3334;
        case 0x3f3338u: goto label_3f3338;
        case 0x3f333cu: goto label_3f333c;
        case 0x3f3340u: goto label_3f3340;
        case 0x3f3344u: goto label_3f3344;
        case 0x3f3348u: goto label_3f3348;
        case 0x3f334cu: goto label_3f334c;
        case 0x3f3350u: goto label_3f3350;
        case 0x3f3354u: goto label_3f3354;
        case 0x3f3358u: goto label_3f3358;
        case 0x3f335cu: goto label_3f335c;
        case 0x3f3360u: goto label_3f3360;
        case 0x3f3364u: goto label_3f3364;
        case 0x3f3368u: goto label_3f3368;
        case 0x3f336cu: goto label_3f336c;
        case 0x3f3370u: goto label_3f3370;
        case 0x3f3374u: goto label_3f3374;
        case 0x3f3378u: goto label_3f3378;
        case 0x3f337cu: goto label_3f337c;
        case 0x3f3380u: goto label_3f3380;
        case 0x3f3384u: goto label_3f3384;
        case 0x3f3388u: goto label_3f3388;
        case 0x3f338cu: goto label_3f338c;
        case 0x3f3390u: goto label_3f3390;
        case 0x3f3394u: goto label_3f3394;
        case 0x3f3398u: goto label_3f3398;
        case 0x3f339cu: goto label_3f339c;
        case 0x3f33a0u: goto label_3f33a0;
        case 0x3f33a4u: goto label_3f33a4;
        case 0x3f33a8u: goto label_3f33a8;
        case 0x3f33acu: goto label_3f33ac;
        case 0x3f33b0u: goto label_3f33b0;
        case 0x3f33b4u: goto label_3f33b4;
        case 0x3f33b8u: goto label_3f33b8;
        case 0x3f33bcu: goto label_3f33bc;
        case 0x3f33c0u: goto label_3f33c0;
        case 0x3f33c4u: goto label_3f33c4;
        case 0x3f33c8u: goto label_3f33c8;
        case 0x3f33ccu: goto label_3f33cc;
        case 0x3f33d0u: goto label_3f33d0;
        case 0x3f33d4u: goto label_3f33d4;
        case 0x3f33d8u: goto label_3f33d8;
        case 0x3f33dcu: goto label_3f33dc;
        case 0x3f33e0u: goto label_3f33e0;
        case 0x3f33e4u: goto label_3f33e4;
        case 0x3f33e8u: goto label_3f33e8;
        case 0x3f33ecu: goto label_3f33ec;
        case 0x3f33f0u: goto label_3f33f0;
        case 0x3f33f4u: goto label_3f33f4;
        case 0x3f33f8u: goto label_3f33f8;
        case 0x3f33fcu: goto label_3f33fc;
        case 0x3f3400u: goto label_3f3400;
        case 0x3f3404u: goto label_3f3404;
        case 0x3f3408u: goto label_3f3408;
        case 0x3f340cu: goto label_3f340c;
        case 0x3f3410u: goto label_3f3410;
        case 0x3f3414u: goto label_3f3414;
        case 0x3f3418u: goto label_3f3418;
        case 0x3f341cu: goto label_3f341c;
        case 0x3f3420u: goto label_3f3420;
        case 0x3f3424u: goto label_3f3424;
        case 0x3f3428u: goto label_3f3428;
        case 0x3f342cu: goto label_3f342c;
        case 0x3f3430u: goto label_3f3430;
        case 0x3f3434u: goto label_3f3434;
        case 0x3f3438u: goto label_3f3438;
        case 0x3f343cu: goto label_3f343c;
        case 0x3f3440u: goto label_3f3440;
        case 0x3f3444u: goto label_3f3444;
        case 0x3f3448u: goto label_3f3448;
        case 0x3f344cu: goto label_3f344c;
        case 0x3f3450u: goto label_3f3450;
        case 0x3f3454u: goto label_3f3454;
        case 0x3f3458u: goto label_3f3458;
        case 0x3f345cu: goto label_3f345c;
        case 0x3f3460u: goto label_3f3460;
        case 0x3f3464u: goto label_3f3464;
        case 0x3f3468u: goto label_3f3468;
        case 0x3f346cu: goto label_3f346c;
        case 0x3f3470u: goto label_3f3470;
        case 0x3f3474u: goto label_3f3474;
        case 0x3f3478u: goto label_3f3478;
        case 0x3f347cu: goto label_3f347c;
        case 0x3f3480u: goto label_3f3480;
        case 0x3f3484u: goto label_3f3484;
        case 0x3f3488u: goto label_3f3488;
        case 0x3f348cu: goto label_3f348c;
        case 0x3f3490u: goto label_3f3490;
        case 0x3f3494u: goto label_3f3494;
        case 0x3f3498u: goto label_3f3498;
        case 0x3f349cu: goto label_3f349c;
        case 0x3f34a0u: goto label_3f34a0;
        case 0x3f34a4u: goto label_3f34a4;
        case 0x3f34a8u: goto label_3f34a8;
        case 0x3f34acu: goto label_3f34ac;
        case 0x3f34b0u: goto label_3f34b0;
        case 0x3f34b4u: goto label_3f34b4;
        case 0x3f34b8u: goto label_3f34b8;
        case 0x3f34bcu: goto label_3f34bc;
        case 0x3f34c0u: goto label_3f34c0;
        case 0x3f34c4u: goto label_3f34c4;
        case 0x3f34c8u: goto label_3f34c8;
        case 0x3f34ccu: goto label_3f34cc;
        case 0x3f34d0u: goto label_3f34d0;
        case 0x3f34d4u: goto label_3f34d4;
        case 0x3f34d8u: goto label_3f34d8;
        case 0x3f34dcu: goto label_3f34dc;
        case 0x3f34e0u: goto label_3f34e0;
        case 0x3f34e4u: goto label_3f34e4;
        case 0x3f34e8u: goto label_3f34e8;
        case 0x3f34ecu: goto label_3f34ec;
        case 0x3f34f0u: goto label_3f34f0;
        case 0x3f34f4u: goto label_3f34f4;
        case 0x3f34f8u: goto label_3f34f8;
        case 0x3f34fcu: goto label_3f34fc;
        case 0x3f3500u: goto label_3f3500;
        case 0x3f3504u: goto label_3f3504;
        case 0x3f3508u: goto label_3f3508;
        case 0x3f350cu: goto label_3f350c;
        case 0x3f3510u: goto label_3f3510;
        case 0x3f3514u: goto label_3f3514;
        case 0x3f3518u: goto label_3f3518;
        case 0x3f351cu: goto label_3f351c;
        case 0x3f3520u: goto label_3f3520;
        case 0x3f3524u: goto label_3f3524;
        case 0x3f3528u: goto label_3f3528;
        case 0x3f352cu: goto label_3f352c;
        case 0x3f3530u: goto label_3f3530;
        case 0x3f3534u: goto label_3f3534;
        case 0x3f3538u: goto label_3f3538;
        case 0x3f353cu: goto label_3f353c;
        case 0x3f3540u: goto label_3f3540;
        case 0x3f3544u: goto label_3f3544;
        case 0x3f3548u: goto label_3f3548;
        case 0x3f354cu: goto label_3f354c;
        case 0x3f3550u: goto label_3f3550;
        case 0x3f3554u: goto label_3f3554;
        case 0x3f3558u: goto label_3f3558;
        case 0x3f355cu: goto label_3f355c;
        case 0x3f3560u: goto label_3f3560;
        case 0x3f3564u: goto label_3f3564;
        case 0x3f3568u: goto label_3f3568;
        case 0x3f356cu: goto label_3f356c;
        case 0x3f3570u: goto label_3f3570;
        case 0x3f3574u: goto label_3f3574;
        case 0x3f3578u: goto label_3f3578;
        case 0x3f357cu: goto label_3f357c;
        case 0x3f3580u: goto label_3f3580;
        case 0x3f3584u: goto label_3f3584;
        default: break;
    }

    ctx->pc = 0x3f3178u;

label_3f3178:
    // 0x3f3178: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3f3178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3f317c:
    // 0x3f317c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3f317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3f3180:
    // 0x3f3180: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3f3180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_3f3184:
    // 0x3f3184: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3f3184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3f3188:
    // 0x3f3188: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3f3188u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f318c:
    // 0x3f318c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3f318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3f3190:
    // 0x3f3190: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3f3190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3f3194:
    // 0x3f3194: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3f3194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3f3198:
    // 0x3f3198: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3f3198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3f319c:
    // 0x3f319c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3f319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3f31a0:
    // 0x3f31a0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3f31a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_3f31a4:
    // 0x3f31a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f31a8:
    // 0x3f31a8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x3f31a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3f31ac:
    // 0x3f31ac: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3f31acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3f31b0:
    // 0x3f31b0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f31b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f31b4:
    // 0x3f31b4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f31b8:
    // 0x3f31b8: 0x40f809  jalr        $v0
label_3f31bc:
    if (ctx->pc == 0x3F31BCu) {
        ctx->pc = 0x3F31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31B8u;
        // 0x3f31bc: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F31C0u;
        goto label_3f31c0;
    }
    ctx->pc = 0x3F31B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F31C0u);
        ctx->pc = 0x3F31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31B8u;
        // 0x3f31bc: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F31B8u, 0x3F31C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F31C0u;
label_3f31c0:
    // 0x3f31c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f31c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f31c4:
    // 0x3f31c4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3f31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3f31c8:
    // 0x3f31c8: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
label_3f31cc:
    if (ctx->pc == 0x3F31CCu) {
        ctx->pc = 0x3F31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31C8u;
        // 0x3f31cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F31D0u;
        goto label_3f31d0;
    }
    ctx->pc = 0x3F31C8u;
    {
        const bool branch_taken_0x3f31c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31C8u;
        // 0x3f31cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f31c8) {
            ctx->pc = 0x3F3550u;
            goto label_3f3550;
        }
    }
    ctx->pc = 0x3F31D0u;
label_3f31d0:
    // 0x3f31d0: 0xc047ab8  jal         func_11EAE0
label_3f31d4:
    if (ctx->pc == 0x3F31D4u) {
        ctx->pc = 0x3F31D8u;
        goto label_3f31d8;
    }
    ctx->pc = 0x3F31D0u;
    SET_GPR_U32(ctx, 31, 0x3F31D8u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3F31D0u, 0x3F31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F31D8u;
label_3f31d8:
    // 0x3f31d8: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x3f31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3f31dc:
    // 0x3f31dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3f31dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f31e0:
    // 0x3f31e0: 0x96102b  sltu        $v0, $a0, $s6
    ctx->pc = 0x3f31e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3f31e4:
    // 0x3f31e4: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
label_3f31e8:
    if (ctx->pc == 0x3F31E8u) {
        ctx->pc = 0x3F31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31E4u;
        // 0x3f31e8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F31ECu;
        goto label_3f31ec;
    }
    ctx->pc = 0x3F31E4u;
    {
        const bool branch_taken_0x3f31e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31E4u;
        // 0x3f31e8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f31e4) {
            ctx->pc = 0x3F354Cu;
            goto label_3f354c;
        }
    }
    ctx->pc = 0x3F31ECu;
label_3f31ec:
    // 0x3f31ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f31ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f31f0:
    // 0x3f31f0: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3f31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3f31f4:
    // 0x3f31f4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3f31f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3f31f8:
    // 0x3f31f8: 0xc047e6c  jal         func_11F9B0
label_3f31fc:
    if (ctx->pc == 0x3F31FCu) {
        ctx->pc = 0x3F31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31F8u;
        // 0x3f31fc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3200u;
        goto label_3f3200;
    }
    ctx->pc = 0x3F31F8u;
    SET_GPR_U32(ctx, 31, 0x3F3200u);
    ctx->pc = 0x3F31FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F31F8u;
    // 0x3f31fc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3F31F8u, 0x3F3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3200u;
label_3f3200:
    // 0x3f3200: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f3200u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f3204:
    // 0x3f3204: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3f3204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3f3208:
    // 0x3f3208: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x3f3208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_3f320c:
    // 0x3f320c: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x3f320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_3f3210:
    // 0x3f3210: 0x40f809  jalr        $v0
label_3f3214:
    if (ctx->pc == 0x3F3214u) {
        ctx->pc = 0x3F3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3210u;
        // 0x3f3214: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3218u;
        goto label_3f3218;
    }
    ctx->pc = 0x3F3210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F3218u);
        ctx->pc = 0x3F3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3210u;
        // 0x3f3214: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3210u, 0x3F3218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F3218u;
label_3f3218:
    // 0x3f3218: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f3218u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f321c:
    // 0x3f321c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3f321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3f3220:
    // 0x3f3220: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_3f3224:
    if (ctx->pc == 0x3F3224u) {
        ctx->pc = 0x3F3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3220u;
        // 0x3f3224: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3228u;
        goto label_3f3228;
    }
    ctx->pc = 0x3F3220u;
    {
        const bool branch_taken_0x3f3220 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3220) {
            ctx->pc = 0x3F3224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3220u;
            // 0x3f3224: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3228u;
            goto label_3f3228;
        }
    }
    ctx->pc = 0x3F3228u;
label_3f3228:
    // 0x3f3228: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3f3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3f322c:
    // 0x3f322c: 0x56001b  divu        $zero, $v0, $s6
    ctx->pc = 0x3f322cu;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3f3230:
    // 0x3f3230: 0x1012  mflo        $v0
    ctx->pc = 0x3f3230u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3f3234:
    // 0x3f3234: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
label_3f3238:
    if (ctx->pc == 0x3F3238u) {
        ctx->pc = 0x3F3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3234u;
        // 0x3f3238: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F323Cu;
        goto label_3f323c;
    }
    ctx->pc = 0x3F3234u;
    {
        const bool branch_taken_0x3f3234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3234u;
        // 0x3f3238: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3234) {
            ctx->pc = 0x3F354Cu;
            goto label_3f354c;
        }
    }
    ctx->pc = 0x3F323Cu;
label_3f323c:
    // 0x3f323c: 0x2457b8b8  addiu       $s7, $v0, -0x4748
    ctx->pc = 0x3f323cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3f3240:
    // 0x3f3240: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3f3240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3f3244:
    // 0x3f3244: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3248:
    // 0x3f3248: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3f3248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3f324c:
    // 0x3f324c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f324cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f3250:
    // 0x3f3250: 0xc0cd508  jal         func_335420
label_3f3254:
    if (ctx->pc == 0x3F3254u) {
        ctx->pc = 0x3F3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3250u;
        // 0x3f3254: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3258u;
        goto label_3f3258;
    }
    ctx->pc = 0x3F3250u;
    SET_GPR_U32(ctx, 31, 0x3F3258u);
    ctx->pc = 0x3F3254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3250u;
    // 0x3f3254: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F3250u, 0x3F3258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3258u;
label_3f3258:
    // 0x3f3258: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3f3258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3f325c:
    // 0x3f325c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f325cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f3260:
    // 0x3f3260: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3264:
    // 0x3f3264: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3f3264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3f3268:
    // 0x3f3268: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3f3268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3f326c:
    // 0x3f326c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f326cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f3270:
    // 0x3f3270: 0xc0cd508  jal         func_335420
label_3f3274:
    if (ctx->pc == 0x3F3274u) {
        ctx->pc = 0x3F3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3270u;
        // 0x3f3274: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3278u;
        goto label_3f3278;
    }
    ctx->pc = 0x3F3270u;
    SET_GPR_U32(ctx, 31, 0x3F3278u);
    ctx->pc = 0x3F3274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3270u;
    // 0x3f3274: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F3270u, 0x3F3278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3278u;
label_3f3278:
    // 0x3f3278: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_3f327c:
    if (ctx->pc == 0x3F327Cu) {
        ctx->pc = 0x3F327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3278u;
        // 0x3f327c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3280u;
        goto label_3f3280;
    }
    ctx->pc = 0x3F3278u;
    {
        const bool branch_taken_0x3f3278 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3F327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3278u;
        // 0x3f327c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3278) {
            ctx->pc = 0x3F3294u;
            goto label_3f3294;
        }
    }
    ctx->pc = 0x3F3280u;
label_3f3280:
    // 0x3f3280: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3f3280u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f3284:
    // 0x3f3284: 0x0  nop
    ctx->pc = 0x3f3284u;
    // NOP
label_3f3288:
    // 0x3f3288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f3288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f328c:
    // 0x3f328c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f3290:
    if (ctx->pc == 0x3F3290u) {
        ctx->pc = 0x3F3290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F328Cu;
        // 0x3f3290: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3294u;
        goto label_3f3294;
    }
    ctx->pc = 0x3F328Cu;
    {
        const bool branch_taken_0x3f328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F328Cu;
        // 0x3f3290: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f328c) {
            ctx->pc = 0x3F32B4u;
            goto label_3f32b4;
        }
    }
    ctx->pc = 0x3F3294u;
label_3f3294:
    // 0x3f3294: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x3f3294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_3f3298:
    // 0x3f3298: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x3f3298u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_3f329c:
    // 0x3f329c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f329cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f32a0:
    // 0x3f32a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f32a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f32a4:
    // 0x3f32a4: 0x0  nop
    ctx->pc = 0x3f32a4u;
    // NOP
label_3f32a8:
    // 0x3f32a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f32a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f32ac:
    // 0x3f32ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3f32acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3f32b0:
    // 0x3f32b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3f32b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f32b4:
    // 0x3f32b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3f32b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3f32b8:
    // 0x3f32b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f32b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f32bc:
    // 0x3f32bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3f32bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f32c0:
    // 0x3f32c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3f32c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3f32c4:
    // 0x3f32c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f32c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f32c8:
    // 0x3f32c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f32c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f32cc:
    // 0x3f32cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3f32ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f32d0:
    // 0x3f32d0: 0xc0cd508  jal         func_335420
label_3f32d4:
    if (ctx->pc == 0x3F32D4u) {
        ctx->pc = 0x3F32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32D0u;
        // 0x3f32d4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F32D8u;
        goto label_3f32d8;
    }
    ctx->pc = 0x3F32D0u;
    SET_GPR_U32(ctx, 31, 0x3F32D8u);
    ctx->pc = 0x3F32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F32D0u;
    // 0x3f32d4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F32D0u, 0x3F32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F32D8u;
label_3f32d8:
    // 0x3f32d8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3f32d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f32dc:
    // 0x3f32dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3f32dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3f32e0:
    // 0x3f32e0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3f32e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3f32e4:
    // 0x3f32e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f32e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f32e8:
    // 0x3f32e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f32e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f32ec:
    // 0x3f32ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3f32ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3f32f0:
    // 0x3f32f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f32f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f32f4:
    // 0x3f32f4: 0xc0cd508  jal         func_335420
label_3f32f8:
    if (ctx->pc == 0x3F32F8u) {
        ctx->pc = 0x3F32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32F4u;
        // 0x3f32f8: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F32FCu;
        goto label_3f32fc;
    }
    ctx->pc = 0x3F32F4u;
    SET_GPR_U32(ctx, 31, 0x3F32FCu);
    ctx->pc = 0x3F32F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F32F4u;
    // 0x3f32f8: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F32F4u, 0x3F32FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F32FCu;
label_3f32fc:
    // 0x3f32fc: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_3f3300:
    if (ctx->pc == 0x3F3300u) {
        ctx->pc = 0x3F3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32FCu;
        // 0x3f3300: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3304u;
        goto label_3f3304;
    }
    ctx->pc = 0x3F32FCu;
    {
        const bool branch_taken_0x3f32fc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3F3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32FCu;
        // 0x3f3300: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32fc) {
            ctx->pc = 0x3F3318u;
            goto label_3f3318;
        }
    }
    ctx->pc = 0x3F3304u;
label_3f3304:
    // 0x3f3304: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3f3304u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f3308:
    // 0x3f3308: 0x0  nop
    ctx->pc = 0x3f3308u;
    // NOP
label_3f330c:
    // 0x3f330c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f330cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f3310:
    // 0x3f3310: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f3314:
    if (ctx->pc == 0x3F3314u) {
        ctx->pc = 0x3F3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3310u;
        // 0x3f3314: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3318u;
        goto label_3f3318;
    }
    ctx->pc = 0x3F3310u;
    {
        const bool branch_taken_0x3f3310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3310u;
        // 0x3f3314: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3310) {
            ctx->pc = 0x3F3338u;
            goto label_3f3338;
        }
    }
    ctx->pc = 0x3F3318u;
label_3f3318:
    // 0x3f3318: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x3f3318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_3f331c:
    // 0x3f331c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x3f331cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_3f3320:
    // 0x3f3320: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f3320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f3324:
    // 0x3f3324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f3324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f3328:
    // 0x3f3328: 0x0  nop
    ctx->pc = 0x3f3328u;
    // NOP
label_3f332c:
    // 0x3f332c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f332cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f3330:
    // 0x3f3330: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3f3330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3f3334:
    // 0x3f3334: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f3334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f3338:
    // 0x3f3338: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f3338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f333c:
    // 0x3f333c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3f333cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f3340:
    // 0x3f3340: 0x2464b8b8  addiu       $a0, $v1, -0x4748
    ctx->pc = 0x3f3340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
label_3f3344:
    // 0x3f3344: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3f3344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3f3348:
    // 0x3f3348: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f334c:
    // 0x3f334c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f334cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f3350:
    // 0x3f3350: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3f3350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3f3354:
    // 0x3f3354: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f3354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f3358:
    // 0x3f3358: 0xc0cd508  jal         func_335420
label_3f335c:
    if (ctx->pc == 0x3F335Cu) {
        ctx->pc = 0x3F335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3358u;
        // 0x3f335c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3360u;
        goto label_3f3360;
    }
    ctx->pc = 0x3F3358u;
    SET_GPR_U32(ctx, 31, 0x3F3360u);
    ctx->pc = 0x3F335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3358u;
    // 0x3f335c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F3358u, 0x3F3360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3360u;
label_3f3360:
    // 0x3f3360: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3f3360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3f3364:
    // 0x3f3364: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f3364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f3368:
    // 0x3f3368: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f3368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f336c:
    // 0x3f336c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f336cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f3370:
    // 0x3f3370: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f3370u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f3374:
    // 0x3f3374: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f3374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3378:
    // 0x3f3378: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f3378u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f337c:
    // 0x3f337c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f337cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f3380:
    // 0x3f3380: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f3380u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3384:
    // 0x3f3384: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f3384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f3388:
    // 0x3f3388: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f3388u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f338c:
    // 0x3f338c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f338cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f3390:
    // 0x3f3390: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f3390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f3394:
    // 0x3f3394: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f3394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f3398:
    // 0x3f3398: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f3398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f339c:
    // 0x3f339c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f339cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f33a0:
    // 0x3f33a0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f33a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f33a4:
    // 0x3f33a4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f33a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f33a8:
    // 0x3f33a8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f33a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f33ac:
    // 0x3f33ac: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3f33acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f33b0:
    // 0x3f33b0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3f33b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3f33b4:
    // 0x3f33b4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3f33b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3f33b8:
    // 0x3f33b8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3f33b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3f33bc:
    // 0x3f33bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3f33bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3f33c0:
    // 0x3f33c0: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x3f33c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3f33c4:
    // 0x3f33c4: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x3f33c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_3f33c8:
    // 0x3f33c8: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x3f33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_3f33cc:
    // 0x3f33cc: 0x40f809  jalr        $v0
label_3f33d0:
    if (ctx->pc == 0x3F33D0u) {
        ctx->pc = 0x3F33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F33CCu;
        // 0x3f33d0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F33D4u;
        goto label_3f33d4;
    }
    ctx->pc = 0x3F33CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F33D4u);
        ctx->pc = 0x3F33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F33CCu;
        // 0x3f33d0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F33CCu, 0x3F33D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F33D4u;
label_3f33d4:
    // 0x3f33d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f33d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f33d8:
    // 0x3f33d8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3f33d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f33dc:
    // 0x3f33dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f33dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f33e0:
    // 0x3f33e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f33e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f33e4:
    // 0x3f33e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f33e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f33e8:
    // 0x3f33e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f33e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f33ec:
    // 0x3f33ec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3f33ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f33f0:
    // 0x3f33f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3f33f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f33f4:
    // 0x3f33f4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3f33f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3f33f8:
    // 0x3f33f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3f33f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3f33fc:
    // 0x3f33fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3f33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3f3400:
    // 0x3f3400: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f3400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f3404:
    // 0x3f3404: 0x24651770  addiu       $a1, $v1, 0x1770
    ctx->pc = 0x3f3404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
label_3f3408:
    // 0x3f3408: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f3408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f340c:
    // 0x3f340c: 0xc0e8db8  jal         func_3A36E0
label_3f3410:
    if (ctx->pc == 0x3F3410u) {
        ctx->pc = 0x3F3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F340Cu;
        // 0x3f3410: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3414u;
        goto label_3f3414;
    }
    ctx->pc = 0x3F340Cu;
    SET_GPR_U32(ctx, 31, 0x3F3414u);
    ctx->pc = 0x3F3410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F340Cu;
    // 0x3f3410: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3F340Cu, 0x3F3414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3414u;
label_3f3414:
    // 0x3f3414: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
label_3f3418:
    if (ctx->pc == 0x3F3418u) {
        ctx->pc = 0x3F3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3414u;
        // 0x3f3418: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F341Cu;
        goto label_3f341c;
    }
    ctx->pc = 0x3F3414u;
    {
        const bool branch_taken_0x3f3414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3414) {
            ctx->pc = 0x3F3418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3414u;
            // 0x3f3418: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F352Cu;
            goto label_3f352c;
        }
    }
    ctx->pc = 0x3F341Cu;
label_3f341c:
    // 0x3f341c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3f341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3f3420:
    // 0x3f3420: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3f3420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3f3424:
    // 0x3f3424: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x3f3424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3f3428:
    // 0x3f3428: 0x40f809  jalr        $v0
label_3f342c:
    if (ctx->pc == 0x3F342Cu) {
        ctx->pc = 0x3F342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3428u;
        // 0x3f342c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3430u;
        goto label_3f3430;
    }
    ctx->pc = 0x3F3428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F3430u);
        ctx->pc = 0x3F342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3428u;
        // 0x3f342c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3428u, 0x3F3430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F3430u;
label_3f3430:
    // 0x3f3430: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3f3430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3f3434:
    // 0x3f3434: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f3434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f3438:
    // 0x3f3438: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3f3438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3f343c:
    // 0x3f343c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f343cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f3440:
    // 0x3f3440: 0xc0480ba  jal         func_1202E8
label_3f3444:
    if (ctx->pc == 0x3F3444u) {
        ctx->pc = 0x3F3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3440u;
        // 0x3f3444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3448u;
        goto label_3f3448;
    }
    ctx->pc = 0x3F3440u;
    SET_GPR_U32(ctx, 31, 0x3F3448u);
    ctx->pc = 0x3F3444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3440u;
    // 0x3f3444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202E8u, 0x3F3440u, 0x3F3448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3448u;
label_3f3448:
    // 0x3f3448: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_3f344c:
    if (ctx->pc == 0x3F344Cu) {
        ctx->pc = 0x3F344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3448u;
        // 0x3f344c: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3450u;
        goto label_3f3450;
    }
    ctx->pc = 0x3F3448u;
    {
        const bool branch_taken_0x3f3448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3448) {
            ctx->pc = 0x3F344Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3448u;
            // 0x3f344c: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F352Cu;
            goto label_3f352c;
        }
    }
    ctx->pc = 0x3F3450u;
label_3f3450:
    // 0x3f3450: 0xc0e9694  jal         func_3A5A50
label_3f3454:
    if (ctx->pc == 0x3F3454u) {
        ctx->pc = 0x3F3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3450u;
        // 0x3f3454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3458u;
        goto label_3f3458;
    }
    ctx->pc = 0x3F3450u;
    SET_GPR_U32(ctx, 31, 0x3F3458u);
    ctx->pc = 0x3F3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3450u;
    // 0x3f3454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F3450u, 0x3F3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3458u;
label_3f3458:
    // 0x3f3458: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_3f345c:
    if (ctx->pc == 0x3F345Cu) {
        ctx->pc = 0x3F345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3458u;
        // 0x3f345c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3460u;
        goto label_3f3460;
    }
    ctx->pc = 0x3F3458u;
    {
        const bool branch_taken_0x3f3458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3458u;
        // 0x3f345c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3458) {
            ctx->pc = 0x3F3528u;
            goto label_3f3528;
        }
    }
    ctx->pc = 0x3F3460u;
label_3f3460:
    // 0x3f3460: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3f3460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f3464:
    // 0x3f3464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f3464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3468:
    // 0x3f3468: 0xc0e8f5c  jal         func_3A3D70
label_3f346c:
    if (ctx->pc == 0x3F346Cu) {
        ctx->pc = 0x3F346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3468u;
        // 0x3f346c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3470u;
        goto label_3f3470;
    }
    ctx->pc = 0x3F3468u;
    SET_GPR_U32(ctx, 31, 0x3F3470u);
    ctx->pc = 0x3F346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3468u;
    // 0x3f346c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3F3468u, 0x3F3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3470u;
label_3f3470:
    // 0x3f3470: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f3470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f3474:
    // 0x3f3474: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f3474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f3478:
    // 0x3f3478: 0xc0e8b48  jal         func_3A2D20
label_3f347c:
    if (ctx->pc == 0x3F347Cu) {
        ctx->pc = 0x3F347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3478u;
        // 0x3f347c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3480u;
        goto label_3f3480;
    }
    ctx->pc = 0x3F3478u;
    SET_GPR_U32(ctx, 31, 0x3F3480u);
    ctx->pc = 0x3F347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3478u;
    // 0x3f347c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3F3478u, 0x3F3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3480u;
label_3f3480:
    // 0x3f3480: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f3480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f3484:
    // 0x3f3484: 0xc0e8b58  jal         func_3A2D60
label_3f3488:
    if (ctx->pc == 0x3F3488u) {
        ctx->pc = 0x3F3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3484u;
        // 0x3f3488: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F348Cu;
        goto label_3f348c;
    }
    ctx->pc = 0x3F3484u;
    SET_GPR_U32(ctx, 31, 0x3F348Cu);
    ctx->pc = 0x3F3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3484u;
    // 0x3f3488: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3F3484u, 0x3F348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F348Cu;
label_3f348c:
    // 0x3f348c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x3f348cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3f3490:
    // 0x3f3490: 0xc0e8b68  jal         func_3A2DA0
label_3f3494:
    if (ctx->pc == 0x3F3494u) {
        ctx->pc = 0x3F3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3490u;
        // 0x3f3494: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3498u;
        goto label_3f3498;
    }
    ctx->pc = 0x3F3490u;
    SET_GPR_U32(ctx, 31, 0x3F3498u);
    ctx->pc = 0x3F3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3490u;
    // 0x3f3494: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3F3490u, 0x3F3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3498u;
label_3f3498:
    // 0x3f3498: 0xc68c0010  lwc1        $f12, 0x10($s4)
    ctx->pc = 0x3f3498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f349c:
    // 0x3f349c: 0xc0e8b78  jal         func_3A2DE0
label_3f34a0:
    if (ctx->pc == 0x3F34A0u) {
        ctx->pc = 0x3F34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F349Cu;
        // 0x3f34a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F34A4u;
        goto label_3f34a4;
    }
    ctx->pc = 0x3F349Cu;
    SET_GPR_U32(ctx, 31, 0x3F34A4u);
    ctx->pc = 0x3F34A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F349Cu;
    // 0x3f34a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3F349Cu, 0x3F34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F34A4u;
label_3f34a4:
    // 0x3f34a4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f34a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f34a8:
    // 0x3f34a8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3f34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3f34ac:
    // 0x3f34ac: 0xc0e8b90  jal         func_3A2E40
label_3f34b0:
    if (ctx->pc == 0x3F34B0u) {
        ctx->pc = 0x3F34B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34ACu;
        // 0x3f34b0: 0x244562a8  addiu       $a1, $v0, 0x62A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F34B4u;
        goto label_3f34b4;
    }
    ctx->pc = 0x3F34ACu;
    SET_GPR_U32(ctx, 31, 0x3F34B4u);
    ctx->pc = 0x3F34B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F34ACu;
    // 0x3f34b0: 0x244562a8  addiu       $a1, $v0, 0x62A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3F34ACu, 0x3F34B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F34B4u;
label_3f34b4:
    // 0x3f34b4: 0xc0e8b50  jal         func_3A2D40
label_3f34b8:
    if (ctx->pc == 0x3F34B8u) {
        ctx->pc = 0x3F34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34B4u;
        // 0x3f34b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F34BCu;
        goto label_3f34bc;
    }
    ctx->pc = 0x3F34B4u;
    SET_GPR_U32(ctx, 31, 0x3F34BCu);
    ctx->pc = 0x3F34B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F34B4u;
    // 0x3f34b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3F34B4u, 0x3F34BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F34BCu;
label_3f34bc:
    // 0x3f34bc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3f34bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f34c0:
    // 0x3f34c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3f34c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f34c4:
    // 0x3f34c4: 0x0  nop
    ctx->pc = 0x3f34c4u;
    // NOP
label_3f34c8:
    // 0x3f34c8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_3f34cc:
    if (ctx->pc == 0x3F34CCu) {
        ctx->pc = 0x3F34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34C8u;
        // 0x3f34cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F34D0u;
        goto label_3f34d0;
    }
    ctx->pc = 0x3F34C8u;
    {
        const bool branch_taken_0x3f34c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34C8u;
        // 0x3f34cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f34c8) {
            ctx->pc = 0x3F3528u;
            goto label_3f3528;
        }
    }
    ctx->pc = 0x3F34D0u;
label_3f34d0:
    // 0x3f34d0: 0xc0e8f5c  jal         func_3A3D70
label_3f34d4:
    if (ctx->pc == 0x3F34D4u) {
        ctx->pc = 0x3F34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34D0u;
        // 0x3f34d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F34D8u;
        goto label_3f34d8;
    }
    ctx->pc = 0x3F34D0u;
    SET_GPR_U32(ctx, 31, 0x3F34D8u);
    ctx->pc = 0x3F34D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F34D0u;
    // 0x3f34d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3F34D0u, 0x3F34D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F34D8u;
label_3f34d8:
    // 0x3f34d8: 0xc0e8b48  jal         func_3A2D20
label_3f34dc:
    if (ctx->pc == 0x3F34DCu) {
        ctx->pc = 0x3F34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34D8u;
        // 0x3f34dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F34E0u;
        goto label_3f34e0;
    }
    ctx->pc = 0x3F34D8u;
    SET_GPR_U32(ctx, 31, 0x3F34E0u);
    ctx->pc = 0x3F34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F34D8u;
    // 0x3f34dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3F34D8u, 0x3F34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F34E0u;
label_3f34e0:
    // 0x3f34e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f34e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f34e4:
    // 0x3f34e4: 0xc0e8b58  jal         func_3A2D60
label_3f34e8:
    if (ctx->pc == 0x3F34E8u) {
        ctx->pc = 0x3F34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34E4u;
        // 0x3f34e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F34ECu;
        goto label_3f34ec;
    }
    ctx->pc = 0x3F34E4u;
    SET_GPR_U32(ctx, 31, 0x3F34ECu);
    ctx->pc = 0x3F34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F34E4u;
    // 0x3f34e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3F34E4u, 0x3F34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F34ECu;
label_3f34ec:
    // 0x3f34ec: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f34f0:
    // 0x3f34f0: 0xc0e8b58  jal         func_3A2D60
label_3f34f4:
    if (ctx->pc == 0x3F34F4u) {
        ctx->pc = 0x3F34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34F0u;
        // 0x3f34f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F34F8u;
        goto label_3f34f8;
    }
    ctx->pc = 0x3F34F0u;
    SET_GPR_U32(ctx, 31, 0x3F34F8u);
    ctx->pc = 0x3F34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F34F0u;
    // 0x3f34f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3F34F0u, 0x3F34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F34F8u;
label_3f34f8:
    // 0x3f34f8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x3f34f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3f34fc:
    // 0x3f34fc: 0xc0e8b68  jal         func_3A2DA0
label_3f3500:
    if (ctx->pc == 0x3F3500u) {
        ctx->pc = 0x3F3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F34FCu;
        // 0x3f3500: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3504u;
        goto label_3f3504;
    }
    ctx->pc = 0x3F34FCu;
    SET_GPR_U32(ctx, 31, 0x3F3504u);
    ctx->pc = 0x3F3500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F34FCu;
    // 0x3f3500: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3F34FCu, 0x3F3504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3504u;
label_3f3504:
    // 0x3f3504: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f3504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f3508:
    // 0x3f3508: 0xc0e8b78  jal         func_3A2DE0
label_3f350c:
    if (ctx->pc == 0x3F350Cu) {
        ctx->pc = 0x3F350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3508u;
        // 0x3f350c: 0xc68c0010  lwc1        $f12, 0x10($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3510u;
        goto label_3f3510;
    }
    ctx->pc = 0x3F3508u;
    SET_GPR_U32(ctx, 31, 0x3F3510u);
    ctx->pc = 0x3F350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3508u;
    // 0x3f350c: 0xc68c0010  lwc1        $f12, 0x10($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3F3508u, 0x3F3510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3510u;
label_3f3510:
    // 0x3f3510: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f3510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f3514:
    // 0x3f3514: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3f3514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_3f3518:
    // 0x3f3518: 0xc0e8b90  jal         func_3A2E40
label_3f351c:
    if (ctx->pc == 0x3F351Cu) {
        ctx->pc = 0x3F351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3518u;
        // 0x3f351c: 0x246562b8  addiu       $a1, $v1, 0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 25272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3520u;
        goto label_3f3520;
    }
    ctx->pc = 0x3F3518u;
    SET_GPR_U32(ctx, 31, 0x3F3520u);
    ctx->pc = 0x3F351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3518u;
    // 0x3f351c: 0x246562b8  addiu       $a1, $v1, 0x62B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 25272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3F3518u, 0x3F3520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3520u;
label_3f3520:
    // 0x3f3520: 0xc0e8b50  jal         func_3A2D40
label_3f3524:
    if (ctx->pc == 0x3F3524u) {
        ctx->pc = 0x3F3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3520u;
        // 0x3f3524: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3528u;
        goto label_3f3528;
    }
    ctx->pc = 0x3F3520u;
    SET_GPR_U32(ctx, 31, 0x3F3528u);
    ctx->pc = 0x3F3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3520u;
    // 0x3f3524: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3F3520u, 0x3F3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3528u;
label_3f3528:
    // 0x3f3528: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x3f3528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3f352c:
    // 0x3f352c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3f352cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3f3530:
    // 0x3f3530: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_3f3534:
    if (ctx->pc == 0x3F3534u) {
        ctx->pc = 0x3F3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3530u;
        // 0x3f3534: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3538u;
        goto label_3f3538;
    }
    ctx->pc = 0x3F3530u;
    {
        const bool branch_taken_0x3f3530 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3530) {
            ctx->pc = 0x3F3534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F3530u;
            // 0x3f3534: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F3538u;
            goto label_3f3538;
        }
    }
    ctx->pc = 0x3F3538u;
label_3f3538:
    // 0x3f3538: 0x76001b  divu        $zero, $v1, $s6
    ctx->pc = 0x3f3538u;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3f353c:
    // 0x3f353c: 0x1012  mflo        $v0
    ctx->pc = 0x3f353cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3f3540:
    // 0x3f3540: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3f3540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f3544:
    // 0x3f3544: 0x1440ff3e  bnez        $v0, . + 4 + (-0xC2 << 2)
label_3f3548:
    if (ctx->pc == 0x3F3548u) {
        ctx->pc = 0x3F354Cu;
        goto label_3f354c;
    }
    ctx->pc = 0x3F3544u;
    {
        const bool branch_taken_0x3f3544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3544) {
            ctx->pc = 0x3F3240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3240;
        }
    }
    ctx->pc = 0x3F354Cu;
label_3f354c:
    // 0x3f354c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f354cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f3550:
    // 0x3f3550: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3f3550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3f3554:
    // 0x3f3554: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3f3554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f3558:
    // 0x3f3558: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3f3558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3f355c:
    // 0x3f355c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3f355cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3f3560:
    // 0x3f3560: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3f3560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f3564:
    // 0x3f3564: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3f3564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f3568:
    // 0x3f3568: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3f3568u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f356c:
    // 0x3f356c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3f356cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f3570:
    // 0x3f3570: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3f3570u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f3574:
    // 0x3f3574: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f3574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f3578:
    // 0x3f3578: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x3f3578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f357c:
    // 0x3f357c: 0x3e00008  jr          $ra
label_3f3580:
    if (ctx->pc == 0x3F3580u) {
        ctx->pc = 0x3F3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F357Cu;
        // 0x3f3580: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3584u;
        goto label_3f3584;
    }
    ctx->pc = 0x3F357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F357Cu;
        // 0x3f3580: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F357Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3584u;
label_3f3584:
    // 0x3f3584: 0x0  nop
    ctx->pc = 0x3f3584u;
    // NOP
    ctx->pc = 0x3f3588u;
}
