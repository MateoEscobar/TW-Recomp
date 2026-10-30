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

// Function: sub_001C3280
// Address: 0x1c3280 - 0x1c3608
void sub_001C3280_0x1c3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3280_0x1c3280");
#endif

    switch (ctx->pc) {
        case 0x1c3280u: goto label_1c3280;
        case 0x1c3284u: goto label_1c3284;
        case 0x1c3288u: goto label_1c3288;
        case 0x1c328cu: goto label_1c328c;
        case 0x1c3290u: goto label_1c3290;
        case 0x1c3294u: goto label_1c3294;
        case 0x1c3298u: goto label_1c3298;
        case 0x1c329cu: goto label_1c329c;
        case 0x1c32a0u: goto label_1c32a0;
        case 0x1c32a4u: goto label_1c32a4;
        case 0x1c32a8u: goto label_1c32a8;
        case 0x1c32acu: goto label_1c32ac;
        case 0x1c32b0u: goto label_1c32b0;
        case 0x1c32b4u: goto label_1c32b4;
        case 0x1c32b8u: goto label_1c32b8;
        case 0x1c32bcu: goto label_1c32bc;
        case 0x1c32c0u: goto label_1c32c0;
        case 0x1c32c4u: goto label_1c32c4;
        case 0x1c32c8u: goto label_1c32c8;
        case 0x1c32ccu: goto label_1c32cc;
        case 0x1c32d0u: goto label_1c32d0;
        case 0x1c32d4u: goto label_1c32d4;
        case 0x1c32d8u: goto label_1c32d8;
        case 0x1c32dcu: goto label_1c32dc;
        case 0x1c32e0u: goto label_1c32e0;
        case 0x1c32e4u: goto label_1c32e4;
        case 0x1c32e8u: goto label_1c32e8;
        case 0x1c32ecu: goto label_1c32ec;
        case 0x1c32f0u: goto label_1c32f0;
        case 0x1c32f4u: goto label_1c32f4;
        case 0x1c32f8u: goto label_1c32f8;
        case 0x1c32fcu: goto label_1c32fc;
        case 0x1c3300u: goto label_1c3300;
        case 0x1c3304u: goto label_1c3304;
        case 0x1c3308u: goto label_1c3308;
        case 0x1c330cu: goto label_1c330c;
        case 0x1c3310u: goto label_1c3310;
        case 0x1c3314u: goto label_1c3314;
        case 0x1c3318u: goto label_1c3318;
        case 0x1c331cu: goto label_1c331c;
        case 0x1c3320u: goto label_1c3320;
        case 0x1c3324u: goto label_1c3324;
        case 0x1c3328u: goto label_1c3328;
        case 0x1c332cu: goto label_1c332c;
        case 0x1c3330u: goto label_1c3330;
        case 0x1c3334u: goto label_1c3334;
        case 0x1c3338u: goto label_1c3338;
        case 0x1c333cu: goto label_1c333c;
        case 0x1c3340u: goto label_1c3340;
        case 0x1c3344u: goto label_1c3344;
        case 0x1c3348u: goto label_1c3348;
        case 0x1c334cu: goto label_1c334c;
        case 0x1c3350u: goto label_1c3350;
        case 0x1c3354u: goto label_1c3354;
        case 0x1c3358u: goto label_1c3358;
        case 0x1c335cu: goto label_1c335c;
        case 0x1c3360u: goto label_1c3360;
        case 0x1c3364u: goto label_1c3364;
        case 0x1c3368u: goto label_1c3368;
        case 0x1c336cu: goto label_1c336c;
        case 0x1c3370u: goto label_1c3370;
        case 0x1c3374u: goto label_1c3374;
        case 0x1c3378u: goto label_1c3378;
        case 0x1c337cu: goto label_1c337c;
        case 0x1c3380u: goto label_1c3380;
        case 0x1c3384u: goto label_1c3384;
        case 0x1c3388u: goto label_1c3388;
        case 0x1c338cu: goto label_1c338c;
        case 0x1c3390u: goto label_1c3390;
        case 0x1c3394u: goto label_1c3394;
        case 0x1c3398u: goto label_1c3398;
        case 0x1c339cu: goto label_1c339c;
        case 0x1c33a0u: goto label_1c33a0;
        case 0x1c33a4u: goto label_1c33a4;
        case 0x1c33a8u: goto label_1c33a8;
        case 0x1c33acu: goto label_1c33ac;
        case 0x1c33b0u: goto label_1c33b0;
        case 0x1c33b4u: goto label_1c33b4;
        case 0x1c33b8u: goto label_1c33b8;
        case 0x1c33bcu: goto label_1c33bc;
        case 0x1c33c0u: goto label_1c33c0;
        case 0x1c33c4u: goto label_1c33c4;
        case 0x1c33c8u: goto label_1c33c8;
        case 0x1c33ccu: goto label_1c33cc;
        case 0x1c33d0u: goto label_1c33d0;
        case 0x1c33d4u: goto label_1c33d4;
        case 0x1c33d8u: goto label_1c33d8;
        case 0x1c33dcu: goto label_1c33dc;
        case 0x1c33e0u: goto label_1c33e0;
        case 0x1c33e4u: goto label_1c33e4;
        case 0x1c33e8u: goto label_1c33e8;
        case 0x1c33ecu: goto label_1c33ec;
        case 0x1c33f0u: goto label_1c33f0;
        case 0x1c33f4u: goto label_1c33f4;
        case 0x1c33f8u: goto label_1c33f8;
        case 0x1c33fcu: goto label_1c33fc;
        case 0x1c3400u: goto label_1c3400;
        case 0x1c3404u: goto label_1c3404;
        case 0x1c3408u: goto label_1c3408;
        case 0x1c340cu: goto label_1c340c;
        case 0x1c3410u: goto label_1c3410;
        case 0x1c3414u: goto label_1c3414;
        case 0x1c3418u: goto label_1c3418;
        case 0x1c341cu: goto label_1c341c;
        case 0x1c3420u: goto label_1c3420;
        case 0x1c3424u: goto label_1c3424;
        case 0x1c3428u: goto label_1c3428;
        case 0x1c342cu: goto label_1c342c;
        case 0x1c3430u: goto label_1c3430;
        case 0x1c3434u: goto label_1c3434;
        case 0x1c3438u: goto label_1c3438;
        case 0x1c343cu: goto label_1c343c;
        case 0x1c3440u: goto label_1c3440;
        case 0x1c3444u: goto label_1c3444;
        case 0x1c3448u: goto label_1c3448;
        case 0x1c344cu: goto label_1c344c;
        case 0x1c3450u: goto label_1c3450;
        case 0x1c3454u: goto label_1c3454;
        case 0x1c3458u: goto label_1c3458;
        case 0x1c345cu: goto label_1c345c;
        case 0x1c3460u: goto label_1c3460;
        case 0x1c3464u: goto label_1c3464;
        case 0x1c3468u: goto label_1c3468;
        case 0x1c346cu: goto label_1c346c;
        case 0x1c3470u: goto label_1c3470;
        case 0x1c3474u: goto label_1c3474;
        case 0x1c3478u: goto label_1c3478;
        case 0x1c347cu: goto label_1c347c;
        case 0x1c3480u: goto label_1c3480;
        case 0x1c3484u: goto label_1c3484;
        case 0x1c3488u: goto label_1c3488;
        case 0x1c348cu: goto label_1c348c;
        case 0x1c3490u: goto label_1c3490;
        case 0x1c3494u: goto label_1c3494;
        case 0x1c3498u: goto label_1c3498;
        case 0x1c349cu: goto label_1c349c;
        case 0x1c34a0u: goto label_1c34a0;
        case 0x1c34a4u: goto label_1c34a4;
        case 0x1c34a8u: goto label_1c34a8;
        case 0x1c34acu: goto label_1c34ac;
        case 0x1c34b0u: goto label_1c34b0;
        case 0x1c34b4u: goto label_1c34b4;
        case 0x1c34b8u: goto label_1c34b8;
        case 0x1c34bcu: goto label_1c34bc;
        case 0x1c34c0u: goto label_1c34c0;
        case 0x1c34c4u: goto label_1c34c4;
        case 0x1c34c8u: goto label_1c34c8;
        case 0x1c34ccu: goto label_1c34cc;
        case 0x1c34d0u: goto label_1c34d0;
        case 0x1c34d4u: goto label_1c34d4;
        case 0x1c34d8u: goto label_1c34d8;
        case 0x1c34dcu: goto label_1c34dc;
        case 0x1c34e0u: goto label_1c34e0;
        case 0x1c34e4u: goto label_1c34e4;
        case 0x1c34e8u: goto label_1c34e8;
        case 0x1c34ecu: goto label_1c34ec;
        case 0x1c34f0u: goto label_1c34f0;
        case 0x1c34f4u: goto label_1c34f4;
        case 0x1c34f8u: goto label_1c34f8;
        case 0x1c34fcu: goto label_1c34fc;
        case 0x1c3500u: goto label_1c3500;
        case 0x1c3504u: goto label_1c3504;
        case 0x1c3508u: goto label_1c3508;
        case 0x1c350cu: goto label_1c350c;
        case 0x1c3510u: goto label_1c3510;
        case 0x1c3514u: goto label_1c3514;
        case 0x1c3518u: goto label_1c3518;
        case 0x1c351cu: goto label_1c351c;
        case 0x1c3520u: goto label_1c3520;
        case 0x1c3524u: goto label_1c3524;
        case 0x1c3528u: goto label_1c3528;
        case 0x1c352cu: goto label_1c352c;
        case 0x1c3530u: goto label_1c3530;
        case 0x1c3534u: goto label_1c3534;
        case 0x1c3538u: goto label_1c3538;
        case 0x1c353cu: goto label_1c353c;
        case 0x1c3540u: goto label_1c3540;
        case 0x1c3544u: goto label_1c3544;
        case 0x1c3548u: goto label_1c3548;
        case 0x1c354cu: goto label_1c354c;
        case 0x1c3550u: goto label_1c3550;
        case 0x1c3554u: goto label_1c3554;
        case 0x1c3558u: goto label_1c3558;
        case 0x1c355cu: goto label_1c355c;
        case 0x1c3560u: goto label_1c3560;
        case 0x1c3564u: goto label_1c3564;
        case 0x1c3568u: goto label_1c3568;
        case 0x1c356cu: goto label_1c356c;
        case 0x1c3570u: goto label_1c3570;
        case 0x1c3574u: goto label_1c3574;
        case 0x1c3578u: goto label_1c3578;
        case 0x1c357cu: goto label_1c357c;
        case 0x1c3580u: goto label_1c3580;
        case 0x1c3584u: goto label_1c3584;
        case 0x1c3588u: goto label_1c3588;
        case 0x1c358cu: goto label_1c358c;
        case 0x1c3590u: goto label_1c3590;
        case 0x1c3594u: goto label_1c3594;
        case 0x1c3598u: goto label_1c3598;
        case 0x1c359cu: goto label_1c359c;
        case 0x1c35a0u: goto label_1c35a0;
        case 0x1c35a4u: goto label_1c35a4;
        case 0x1c35a8u: goto label_1c35a8;
        case 0x1c35acu: goto label_1c35ac;
        case 0x1c35b0u: goto label_1c35b0;
        case 0x1c35b4u: goto label_1c35b4;
        case 0x1c35b8u: goto label_1c35b8;
        case 0x1c35bcu: goto label_1c35bc;
        case 0x1c35c0u: goto label_1c35c0;
        case 0x1c35c4u: goto label_1c35c4;
        case 0x1c35c8u: goto label_1c35c8;
        case 0x1c35ccu: goto label_1c35cc;
        case 0x1c35d0u: goto label_1c35d0;
        case 0x1c35d4u: goto label_1c35d4;
        case 0x1c35d8u: goto label_1c35d8;
        case 0x1c35dcu: goto label_1c35dc;
        case 0x1c35e0u: goto label_1c35e0;
        case 0x1c35e4u: goto label_1c35e4;
        case 0x1c35e8u: goto label_1c35e8;
        case 0x1c35ecu: goto label_1c35ec;
        case 0x1c35f0u: goto label_1c35f0;
        case 0x1c35f4u: goto label_1c35f4;
        case 0x1c35f8u: goto label_1c35f8;
        case 0x1c35fcu: goto label_1c35fc;
        case 0x1c3600u: goto label_1c3600;
        case 0x1c3604u: goto label_1c3604;
        default: break;
    }

    ctx->pc = 0x1c3280u;

label_1c3280:
    // 0x1c3280: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c3280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1c3284:
    // 0x1c3284: 0x24020a50  addiu       $v0, $zero, 0xA50
    ctx->pc = 0x1c3284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
label_1c3288:
    // 0x1c3288: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c3288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c328c:
    // 0x1c328c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c328cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1c3290:
    // 0x1c3290: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c3290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3294:
    // 0x1c3294: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1c3294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c3298:
    // 0x1c3298: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1c3298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1c329c:
    // 0x1c329c: 0x2c22018  mult        $a0, $s6, $v0
    ctx->pc = 0x1c329cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1c32a0:
    // 0x1c32a0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1c32a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1c32a4:
    // 0x1c32a4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c32a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1c32a8:
    // 0x1c32a8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1c32a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c32ac:
    // 0x1c32ac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c32acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1c32b0:
    // 0x1c32b0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c32b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1c32b4:
    // 0x1c32b4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c32b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1c32b8:
    // 0x1c32b8: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1c32b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c32bc:
    // 0x1c32bc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c32bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1c32c0:
    // 0x1c32c0: 0x951821  addu        $v1, $a0, $s5
    ctx->pc = 0x1c32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_1c32c4:
    // 0x1c32c4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c32c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1c32c8:
    // 0x1c32c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c32cc:
    // 0x1c32cc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c32ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1c32d0:
    // 0x1c32d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c32d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c32d4:
    // 0x1c32d4: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
label_1c32d8:
    if (ctx->pc == 0x1C32D8u) {
        ctx->pc = 0x1C32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32D4u;
        // 0x1c32d8: 0xa0600544  sb          $zero, 0x544($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1348), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C32DCu;
        goto label_1c32dc;
    }
    ctx->pc = 0x1C32D4u;
    {
        const bool branch_taken_0x1c32d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32D4u;
        // 0x1c32d8: 0xa0600544  sb          $zero, 0x544($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1348), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32d4) {
            ctx->pc = 0x1C32F0u;
            goto label_1c32f0;
        }
    }
    ctx->pc = 0x1C32DCu;
label_1c32dc:
    // 0x1c32dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c32e0:
    // 0x1c32e0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_1c32e4:
    if (ctx->pc == 0x1C32E4u) {
        ctx->pc = 0x1C32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32E0u;
        // 0x1c32e4: 0x24020a50  addiu       $v0, $zero, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C32E8u;
        goto label_1c32e8;
    }
    ctx->pc = 0x1C32E0u;
    {
        const bool branch_taken_0x1c32e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32E0u;
        // 0x1c32e4: 0x24020a50  addiu       $v0, $zero, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32e0) {
            ctx->pc = 0x1C32F8u;
            goto label_1c32f8;
        }
    }
    ctx->pc = 0x1C32E8u;
label_1c32e8:
    // 0x1c32e8: 0x100000ba  b           . + 4 + (0xBA << 2)
label_1c32ec:
    if (ctx->pc == 0x1C32ECu) {
        ctx->pc = 0x1C32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32E8u;
        // 0x1c32ec: 0xe4740648  swc1        $f20, 0x648($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1608), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C32F0u;
        goto label_1c32f0;
    }
    ctx->pc = 0x1C32E8u;
    {
        const bool branch_taken_0x1c32e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32E8u;
        // 0x1c32ec: 0xe4740648  swc1        $f20, 0x648($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1608), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32e8) {
            ctx->pc = 0x1C35D4u;
            goto label_1c35d4;
        }
    }
    ctx->pc = 0x1C32F0u;
label_1c32f0:
    // 0x1c32f0: 0xe4740644  swc1        $f20, 0x644($v1)
    ctx->pc = 0x1c32f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1604), bits); }
label_1c32f4:
    // 0x1c32f4: 0x24020a50  addiu       $v0, $zero, 0xA50
    ctx->pc = 0x1c32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
label_1c32f8:
    // 0x1c32f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c32fc:
    // 0x1c32fc: 0x2c22018  mult        $a0, $s6, $v0
    ctx->pc = 0x1c32fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1c3300:
    // 0x1c3300: 0x958821  addu        $s1, $a0, $s5
    ctx->pc = 0x1c3300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_1c3304:
    // 0x1c3304: 0x8e240440  lw          $a0, 0x440($s1)
    ctx->pc = 0x1c3304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1088)));
label_1c3308:
    // 0x1c3308: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_1c330c:
    if (ctx->pc == 0x1C330Cu) {
        ctx->pc = 0x1C330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3308u;
        // 0x1c330c: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3310u;
        goto label_1c3310;
    }
    ctx->pc = 0x1C3308u;
    {
        const bool branch_taken_0x1c3308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3308u;
        // 0x1c330c: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3308) {
            ctx->pc = 0x1C3330u;
            goto label_1c3330;
        }
    }
    ctx->pc = 0x1C3310u;
label_1c3310:
    // 0x1c3310: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
label_1c3314:
    if (ctx->pc == 0x1C3314u) {
        ctx->pc = 0x1C3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3310u;
        // 0x1c3314: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3318u;
        goto label_1c3318;
    }
    ctx->pc = 0x1C3310u;
    {
        const bool branch_taken_0x1c3310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3310u;
        // 0x1c3314: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3310) {
            ctx->pc = 0x1C33E8u;
            goto label_1c33e8;
        }
    }
    ctx->pc = 0x1C3318u;
label_1c3318:
    // 0x1c3318: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_1c331c:
    if (ctx->pc == 0x1C331Cu) {
        ctx->pc = 0x1C331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3318u;
        // 0x1c331c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3320u;
        goto label_1c3320;
    }
    ctx->pc = 0x1C3318u;
    {
        const bool branch_taken_0x1c3318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3318u;
        // 0x1c331c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3318) {
            ctx->pc = 0x1C3374u;
            goto label_1c3374;
        }
    }
    ctx->pc = 0x1C3320u;
label_1c3320:
    // 0x1c3320: 0x10820046  beq         $a0, $v0, . + 4 + (0x46 << 2)
label_1c3324:
    if (ctx->pc == 0x1C3324u) {
        ctx->pc = 0x1C3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3320u;
        // 0x1c3324: 0x24020a50  addiu       $v0, $zero, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3328u;
        goto label_1c3328;
    }
    ctx->pc = 0x1C3320u;
    {
        const bool branch_taken_0x1c3320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3320u;
        // 0x1c3324: 0x24020a50  addiu       $v0, $zero, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3320) {
            ctx->pc = 0x1C343Cu;
            goto label_1c343c;
        }
    }
    ctx->pc = 0x1C3328u;
label_1c3328:
    // 0x1c3328: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1c332c:
    if (ctx->pc == 0x1C332Cu) {
        ctx->pc = 0x1C332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3328u;
        // 0x1c332c: 0x2c21818  mult        $v1, $s6, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3330u;
        goto label_1c3330;
    }
    ctx->pc = 0x1C3328u;
    {
        const bool branch_taken_0x1c3328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3328u;
        // 0x1c332c: 0x2c21818  mult        $v1, $s6, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3328) {
            ctx->pc = 0x1C3460u;
            goto label_1c3460;
        }
    }
    ctx->pc = 0x1C3330u;
label_1c3330:
    // 0x1c3330: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3334:
    // 0x1c3334: 0x26104f70  addiu       $s0, $s0, 0x4F70
    ctx->pc = 0x1c3334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20336));
label_1c3338:
    // 0x1c3338: 0xc067bb8  jal         func_19EEE0
label_1c333c:
    if (ctx->pc == 0x1C333Cu) {
        ctx->pc = 0x1C333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3338u;
        // 0x1c333c: 0x26330444  addiu       $s3, $s1, 0x444 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1092));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3340u;
        goto label_1c3340;
    }
    ctx->pc = 0x1C3338u;
    SET_GPR_U32(ctx, 31, 0x1C3340u);
    ctx->pc = 0x1C333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3338u;
    // 0x1c333c: 0x26330444  addiu       $s3, $s1, 0x444 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1092));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1C3338u, 0x1C3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3340u;
label_1c3340:
    // 0x1c3340: 0x26310544  addiu       $s1, $s1, 0x544
    ctx->pc = 0x1c3340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1348));
label_1c3344:
    // 0x1c3344: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c3344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3348:
    // 0x1c3348: 0xc10b1c6  jal         func_42C718
label_1c334c:
    if (ctx->pc == 0x1C334Cu) {
        ctx->pc = 0x1C334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3348u;
        // 0x1c334c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3350u;
        goto label_1c3350;
    }
    ctx->pc = 0x1C3348u;
    SET_GPR_U32(ctx, 31, 0x1C3350u);
    ctx->pc = 0x1C334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3348u;
    // 0x1c334c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1C3348u, 0x1C3350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3350u;
label_1c3350:
    // 0x1c3350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3354:
    // 0x1c3354: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c3354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3358:
    // 0x1c3358: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c3358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c335c:
    // 0x1c335c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c335cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c3360:
    // 0x1c3360: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c3360u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3364:
    // 0x1c3364: 0xc10ca04  jal         func_432810
label_1c3368:
    if (ctx->pc == 0x1C3368u) {
        ctx->pc = 0x1C3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3364u;
        // 0x1c3368: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C336Cu;
        goto label_1c336c;
    }
    ctx->pc = 0x1C3364u;
    SET_GPR_U32(ctx, 31, 0x1C336Cu);
    ctx->pc = 0x1C3368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3364u;
    // 0x1c3368: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C3364u, 0x1C336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C336Cu;
label_1c336c:
    // 0x1c336c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1c3370:
    if (ctx->pc == 0x1C3370u) {
        ctx->pc = 0x1C3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C336Cu;
        // 0x1c3370: 0xc6b43390  lwc1        $f20, 0x3390($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3374u;
        goto label_1c3374;
    }
    ctx->pc = 0x1C336Cu;
    {
        const bool branch_taken_0x1c336c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C336Cu;
        // 0x1c3370: 0xc6b43390  lwc1        $f20, 0x3390($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c336c) {
            ctx->pc = 0x1C346Cu;
            goto label_1c346c;
        }
    }
    ctx->pc = 0x1C3374u;
label_1c3374:
    // 0x1c3374: 0xc6210648  lwc1        $f1, 0x648($s1)
    ctx->pc = 0x1c3374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c3378:
    // 0x1c3378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c3378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c337c:
    // 0x1c337c: 0x0  nop
    ctx->pc = 0x1c337cu;
    // NOP
label_1c3380:
    // 0x1c3380: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c3380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c3384:
    // 0x1c3384: 0x0  nop
    ctx->pc = 0x1c3384u;
    // NOP
label_1c3388:
    // 0x1c3388: 0x45010093  bc1t        . + 4 + (0x93 << 2)
label_1c338c:
    if (ctx->pc == 0x1C338Cu) {
        ctx->pc = 0x1C338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3388u;
        // 0x1c338c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3390u;
        goto label_1c3390;
    }
    ctx->pc = 0x1C3388u;
    {
        const bool branch_taken_0x1c3388 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3388u;
        // 0x1c338c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3388) {
            ctx->pc = 0x1C35D8u;
            goto label_1c35d8;
        }
    }
    ctx->pc = 0x1C3390u;
label_1c3390:
    // 0x1c3390: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1c3390u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1c3394:
    // 0x1c3394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3398:
    // 0x1c3398: 0x26104f80  addiu       $s0, $s0, 0x4F80
    ctx->pc = 0x1c3398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20352));
label_1c339c:
    // 0x1c339c: 0xc067bb8  jal         func_19EEE0
label_1c33a0:
    if (ctx->pc == 0x1C33A0u) {
        ctx->pc = 0x1C33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C339Cu;
        // 0x1c33a0: 0x26330544  addiu       $s3, $s1, 0x544 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33A4u;
        goto label_1c33a4;
    }
    ctx->pc = 0x1C339Cu;
    SET_GPR_U32(ctx, 31, 0x1C33A4u);
    ctx->pc = 0x1C33A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C339Cu;
    // 0x1c33a0: 0x26330544  addiu       $s3, $s1, 0x544 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1C339Cu, 0x1C33A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33A4u;
label_1c33a4:
    // 0x1c33a4: 0x26340444  addiu       $s4, $s1, 0x444
    ctx->pc = 0x1c33a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1092));
label_1c33a8:
    // 0x1c33a8: 0xc62c0644  lwc1        $f12, 0x644($s1)
    ctx->pc = 0x1c33a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c33ac:
    // 0x1c33ac: 0xc10b1c6  jal         func_42C718
label_1c33b0:
    if (ctx->pc == 0x1C33B0u) {
        ctx->pc = 0x1C33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33ACu;
        // 0x1c33b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33B4u;
        goto label_1c33b4;
    }
    ctx->pc = 0x1C33ACu;
    SET_GPR_U32(ctx, 31, 0x1C33B4u);
    ctx->pc = 0x1C33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33ACu;
    // 0x1c33b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1C33ACu, 0x1C33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33B4u;
label_1c33b4:
    // 0x1c33b4: 0xc62c0648  lwc1        $f12, 0x648($s1)
    ctx->pc = 0x1c33b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c33b8:
    // 0x1c33b8: 0xc10b1c6  jal         func_42C718
label_1c33bc:
    if (ctx->pc == 0x1C33BCu) {
        ctx->pc = 0x1C33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33B8u;
        // 0x1c33bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33C0u;
        goto label_1c33c0;
    }
    ctx->pc = 0x1C33B8u;
    SET_GPR_U32(ctx, 31, 0x1C33C0u);
    ctx->pc = 0x1C33BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33B8u;
    // 0x1c33bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1C33B8u, 0x1C33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33C0u;
label_1c33c0:
    // 0x1c33c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c33c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c33c4:
    // 0x1c33c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c33c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c33c8:
    // 0x1c33c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c33c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c33cc:
    // 0x1c33cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1c33ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c33d0:
    // 0x1c33d0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1c33d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c33d4:
    // 0x1c33d4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1c33d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c33d8:
    // 0x1c33d8: 0xc10ca04  jal         func_432810
label_1c33dc:
    if (ctx->pc == 0x1C33DCu) {
        ctx->pc = 0x1C33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33D8u;
        // 0x1c33dc: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33E0u;
        goto label_1c33e0;
    }
    ctx->pc = 0x1C33D8u;
    SET_GPR_U32(ctx, 31, 0x1C33E0u);
    ctx->pc = 0x1C33DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33D8u;
    // 0x1c33dc: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C33D8u, 0x1C33E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33E0u;
label_1c33e0:
    // 0x1c33e0: 0x10000022  b           . + 4 + (0x22 << 2)
label_1c33e4:
    if (ctx->pc == 0x1C33E4u) {
        ctx->pc = 0x1C33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33E0u;
        // 0x1c33e4: 0xc6b43390  lwc1        $f20, 0x3390($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33E8u;
        goto label_1c33e8;
    }
    ctx->pc = 0x1C33E0u;
    {
        const bool branch_taken_0x1c33e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33E0u;
        // 0x1c33e4: 0xc6b43390  lwc1        $f20, 0x3390($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33e0) {
            ctx->pc = 0x1C346Cu;
            goto label_1c346c;
        }
    }
    ctx->pc = 0x1C33E8u;
label_1c33e8:
    // 0x1c33e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c33e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c33ec:
    // 0x1c33ec: 0x26104f70  addiu       $s0, $s0, 0x4F70
    ctx->pc = 0x1c33ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20336));
label_1c33f0:
    // 0x1c33f0: 0xc067bb8  jal         func_19EEE0
label_1c33f4:
    if (ctx->pc == 0x1C33F4u) {
        ctx->pc = 0x1C33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33F0u;
        // 0x1c33f4: 0x26330544  addiu       $s3, $s1, 0x544 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33F8u;
        goto label_1c33f8;
    }
    ctx->pc = 0x1C33F0u;
    SET_GPR_U32(ctx, 31, 0x1C33F8u);
    ctx->pc = 0x1C33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33F0u;
    // 0x1c33f4: 0x26330544  addiu       $s3, $s1, 0x544 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1C33F0u, 0x1C33F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33F8u;
label_1c33f8:
    // 0x1c33f8: 0x26320444  addiu       $s2, $s1, 0x444
    ctx->pc = 0x1c33f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1092));
label_1c33fc:
    // 0x1c33fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c33fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3400:
    // 0x1c3400: 0xc10b1c6  jal         func_42C718
label_1c3404:
    if (ctx->pc == 0x1C3404u) {
        ctx->pc = 0x1C3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3400u;
        // 0x1c3404: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3408u;
        goto label_1c3408;
    }
    ctx->pc = 0x1C3400u;
    SET_GPR_U32(ctx, 31, 0x1C3408u);
    ctx->pc = 0x1C3404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3400u;
    // 0x1c3404: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1C3400u, 0x1C3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3408u;
label_1c3408:
    // 0x1c3408: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1c3408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c340c:
    // 0x1c340c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c340cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c3410:
    // 0x1c3410: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c3410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3414:
    // 0x1c3414: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c3414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3418:
    // 0x1c3418: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1c3418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c341c:
    // 0x1c341c: 0xc10ca04  jal         func_432810
label_1c3420:
    if (ctx->pc == 0x1C3420u) {
        ctx->pc = 0x1C3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C341Cu;
        // 0x1c3420: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3424u;
        goto label_1c3424;
    }
    ctx->pc = 0x1C341Cu;
    SET_GPR_U32(ctx, 31, 0x1C3424u);
    ctx->pc = 0x1C3420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C341Cu;
    // 0x1c3420: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C341Cu, 0x1C3424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3424u;
label_1c3424:
    // 0x1c3424: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c3424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c3428:
    // 0x1c3428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c342c:
    // 0x1c342c: 0xc10c25f  jal         func_43097C
label_1c3430:
    if (ctx->pc == 0x1C3430u) {
        ctx->pc = 0x1C3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C342Cu;
        // 0x1c3430: 0x24a54f98  addiu       $a1, $a1, 0x4F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3434u;
        goto label_1c3434;
    }
    ctx->pc = 0x1C342Cu;
    SET_GPR_U32(ctx, 31, 0x1C3434u);
    ctx->pc = 0x1C3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C342Cu;
    // 0x1c3430: 0x24a54f98  addiu       $a1, $a1, 0x4F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1C342Cu, 0x1C3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3434u;
label_1c3434:
    // 0x1c3434: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c3438:
    if (ctx->pc == 0x1C3438u) {
        ctx->pc = 0x1C3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3434u;
        // 0x1c3438: 0xc6b43390  lwc1        $f20, 0x3390($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C343Cu;
        goto label_1c343c;
    }
    ctx->pc = 0x1C3434u;
    {
        const bool branch_taken_0x1c3434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3434u;
        // 0x1c3438: 0xc6b43390  lwc1        $f20, 0x3390($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3434) {
            ctx->pc = 0x1C346Cu;
            goto label_1c346c;
        }
    }
    ctx->pc = 0x1C343Cu;
label_1c343c:
    // 0x1c343c: 0x26300650  addiu       $s0, $s1, 0x650
    ctx->pc = 0x1c343cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
label_1c3440:
    // 0x1c3440: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c3440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1c3444:
    // 0x1c3444: 0xc07094c  jal         func_1C2530
label_1c3448:
    if (ctx->pc == 0x1C3448u) {
        ctx->pc = 0x1C3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3444u;
        // 0x1c3448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C344Cu;
        goto label_1c344c;
    }
    ctx->pc = 0x1C3444u;
    SET_GPR_U32(ctx, 31, 0x1C344Cu);
    ctx->pc = 0x1C3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3444u;
    // 0x1c3448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2530u, 0x1C3444u, 0x1C344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C344Cu;
label_1c344c:
    // 0x1c344c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3450:
    // 0x1c3450: 0xc070a66  jal         func_1C2998
label_1c3454:
    if (ctx->pc == 0x1C3454u) {
        ctx->pc = 0x1C3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3450u;
        // 0x1c3454: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3458u;
        goto label_1c3458;
    }
    ctx->pc = 0x1C3450u;
    SET_GPR_U32(ctx, 31, 0x1C3458u);
    ctx->pc = 0x1C3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3450u;
    // 0x1c3454: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2998u, 0x1C3450u, 0x1C3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3458u;
label_1c3458:
    // 0x1c3458: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c345c:
    if (ctx->pc == 0x1C345Cu) {
        ctx->pc = 0x1C345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3458u;
        // 0x1c345c: 0xc6b43390  lwc1        $f20, 0x3390($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3460u;
        goto label_1c3460;
    }
    ctx->pc = 0x1C3458u;
    {
        const bool branch_taken_0x1c3458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3458u;
        // 0x1c345c: 0xc6b43390  lwc1        $f20, 0x3390($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3458) {
            ctx->pc = 0x1C346Cu;
            goto label_1c346c;
        }
    }
    ctx->pc = 0x1C3460u;
label_1c3460:
    // 0x1c3460: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1c3460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1c3464:
    // 0x1c3464: 0xa0400544  sb          $zero, 0x544($v0)
    ctx->pc = 0x1c3464u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1348), (uint8_t)GPR_U32(ctx, 0));
label_1c3468:
    // 0x1c3468: 0xc6b43390  lwc1        $f20, 0x3390($s5)
    ctx->pc = 0x1c3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 13200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c346c:
    // 0x1c346c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c346cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3470:
    // 0x1c3470: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1c3470u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1c3474:
    // 0x1c3474: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1c3474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c3478:
    // 0x1c3478: 0xc070b38  jal         func_1C2CE0
label_1c347c:
    if (ctx->pc == 0x1C347Cu) {
        ctx->pc = 0x1C347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3478u;
        // 0x1c347c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3480u;
        goto label_1c3480;
    }
    ctx->pc = 0x1C3478u;
    SET_GPR_U32(ctx, 31, 0x1C3480u);
    ctx->pc = 0x1C347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3478u;
    // 0x1c347c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2CE0u, 0x1C3478u, 0x1C3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3480u;
label_1c3480:
    // 0x1c3480: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1c3484:
    if (ctx->pc == 0x1C3484u) {
        ctx->pc = 0x1C3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3480u;
        // 0x1c3484: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3488u;
        goto label_1c3488;
    }
    ctx->pc = 0x1C3480u;
    {
        const bool branch_taken_0x1c3480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3480) {
            ctx->pc = 0x1C3484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3480u;
            // 0x1c3484: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3498u;
            goto label_1c3498;
        }
    }
    ctx->pc = 0x1C3488u;
label_1c3488:
    // 0x1c3488: 0x12360002  beq         $s1, $s6, . + 4 + (0x2 << 2)
label_1c348c:
    if (ctx->pc == 0x1C348Cu) {
        ctx->pc = 0x1C348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3488u;
        // 0x1c348c: 0xc640e984  lwc1        $f0, -0x167C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294961540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3490u;
        goto label_1c3490;
    }
    ctx->pc = 0x1C3488u;
    {
        const bool branch_taken_0x1c3488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3488u;
        // 0x1c348c: 0xc640e984  lwc1        $f0, -0x167C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294961540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3488) {
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C3490u;
label_1c3490:
    // 0x1c3490: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1c3490u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c3494:
    // 0x1c3494: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c3494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c3498:
    // 0x1c3498: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1c3498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1c349c:
    // 0x1c349c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1c34a0:
    if (ctx->pc == 0x1C34A0u) {
        ctx->pc = 0x1C34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C349Cu;
        // 0x1c34a0: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34A4u;
        goto label_1c34a4;
    }
    ctx->pc = 0x1C349Cu;
    {
        const bool branch_taken_0x1c349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C349Cu;
        // 0x1c34a0: 0x26100a50  addiu       $s0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c349c) {
            ctx->pc = 0x1C3478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3478;
        }
    }
    ctx->pc = 0x1C34A4u;
label_1c34a4:
    // 0x1c34a4: 0x24020a50  addiu       $v0, $zero, 0xA50
    ctx->pc = 0x1c34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
label_1c34a8:
    // 0x1c34a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c34a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1c34ac:
    // 0x1c34ac: 0x2c21818  mult        $v1, $s6, $v0
    ctx->pc = 0x1c34acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1c34b0:
    // 0x1c34b0: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x1c34b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1c34b4:
    // 0x1c34b4: 0xc070b46  jal         func_1C2D18
label_1c34b8:
    if (ctx->pc == 0x1C34B8u) {
        ctx->pc = 0x1C34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34B4u;
        // 0x1c34b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34BCu;
        goto label_1c34bc;
    }
    ctx->pc = 0x1C34B4u;
    SET_GPR_U32(ctx, 31, 0x1C34BCu);
    ctx->pc = 0x1C34B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34B4u;
    // 0x1c34b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2D18u, 0x1C34B4u, 0x1C34BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34BCu;
label_1c34bc:
    // 0x1c34bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1c34c0:
    // 0x1c34c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c34c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c34c4:
    // 0x1c34c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c34c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c34c8:
    // 0x1c34c8: 0xc070c28  jal         func_1C30A0
label_1c34cc:
    if (ctx->pc == 0x1C34CCu) {
        ctx->pc = 0x1C34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34C8u;
        // 0x1c34cc: 0x57b80a  movz        $s7, $v0, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34D0u;
        goto label_1c34d0;
    }
    ctx->pc = 0x1C34C8u;
    SET_GPR_U32(ctx, 31, 0x1C34D0u);
    ctx->pc = 0x1C34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34C8u;
    // 0x1c34cc: 0x57b80a  movz        $s7, $v0, $s7 (Delay Slot)
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30A0u, 0x1C34C8u, 0x1C34D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34D0u;
label_1c34d0:
    // 0x1c34d0: 0x8e230440  lw          $v1, 0x440($s1)
    ctx->pc = 0x1c34d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1088)));
label_1c34d4:
    // 0x1c34d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c34d8:
    // 0x1c34d8: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_1c34dc:
    if (ctx->pc == 0x1C34DCu) {
        ctx->pc = 0x1C34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34D8u;
        // 0x1c34dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34E0u;
        goto label_1c34e0;
    }
    ctx->pc = 0x1C34D8u;
    {
        const bool branch_taken_0x1c34d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34D8u;
        // 0x1c34dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34d8) {
            ctx->pc = 0x1C3554u;
            goto label_1c3554;
        }
    }
    ctx->pc = 0x1C34E0u;
label_1c34e0:
    // 0x1c34e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c34e4:
    // 0x1c34e4: 0xc442e988  lwc1        $f2, -0x1678($v0)
    ctx->pc = 0x1c34e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c34e8:
    // 0x1c34e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c34e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c34ec:
    // 0x1c34ec: 0xc461e97c  lwc1        $f1, -0x1684($v1)
    ctx->pc = 0x1c34ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c34f0:
    // 0x1c34f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c34f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c34f4:
    // 0x1c34f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c34f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c34f8:
    // 0x1c34f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c34f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c34fc:
    // 0x1c34fc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1c34fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c3500:
    // 0x1c3500: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c3500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c3504:
    // 0x1c3504: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1c3504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c3508:
    // 0x1c3508: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c3508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c350c:
    // 0x1c350c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c3510:
    // 0x1c3510: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1c3510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1c3514:
    // 0x1c3514: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1c3514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1c3518:
    // 0x1c3518: 0x60f809  jalr        $v1
label_1c351c:
    if (ctx->pc == 0x1C351Cu) {
        ctx->pc = 0x1C351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3518u;
        // 0x1c351c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3520u;
        goto label_1c3520;
    }
    ctx->pc = 0x1C3518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3520u);
        ctx->pc = 0x1C351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3518u;
        // 0x1c351c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3518u, 0x1C3520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3520u;
label_1c3520:
    // 0x1c3520: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c3520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c3524:
    // 0x1c3524: 0x26250544  addiu       $a1, $s1, 0x544
    ctx->pc = 0x1c3524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1348));
label_1c3528:
    // 0x1c3528: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1c3528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1c352c:
    // 0x1c352c: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x1c352cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_1c3530:
    // 0x1c3530: 0x60f809  jalr        $v1
label_1c3534:
    if (ctx->pc == 0x1C3534u) {
        ctx->pc = 0x1C3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3530u;
        // 0x1c3534: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3538u;
        goto label_1c3538;
    }
    ctx->pc = 0x1C3530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C3538u);
        ctx->pc = 0x1C3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3530u;
        // 0x1c3534: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3530u, 0x1C3538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3538u;
label_1c3538:
    // 0x1c3538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c353c:
    // 0x1c353c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3540:
    // 0x1c3540: 0xae2201bc  sw          $v0, 0x1BC($s1)
    ctx->pc = 0x1c3540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 2));
label_1c3544:
    // 0x1c3544: 0xc06ed10  jal         func_1BB440
label_1c3548:
    if (ctx->pc == 0x1C3548u) {
        ctx->pc = 0x1C3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3544u;
        // 0x1c3548: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C354Cu;
        goto label_1c354c;
    }
    ctx->pc = 0x1C3544u;
    SET_GPR_U32(ctx, 31, 0x1C354Cu);
    ctx->pc = 0x1C3548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3544u;
    // 0x1c3548: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB440u, 0x1C3544u, 0x1C354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C354Cu;
label_1c354c:
    // 0x1c354c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c3550:
    if (ctx->pc == 0x1C3550u) {
        ctx->pc = 0x1C3554u;
        goto label_1c3554;
    }
    ctx->pc = 0x1C354Cu;
    {
        const bool branch_taken_0x1c354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c354c) {
            ctx->pc = 0x1C35B0u;
            goto label_1c35b0;
        }
    }
    ctx->pc = 0x1C3554u;
label_1c3554:
    // 0x1c3554: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c3554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c3558:
    // 0x1c3558: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1c3558u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1c355c:
    // 0x1c355c: 0xc441e990  lwc1        $f1, -0x1670($v0)
    ctx->pc = 0x1c355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c3560:
    // 0x1c3560: 0x26310650  addiu       $s1, $s1, 0x650
    ctx->pc = 0x1c3560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
label_1c3564:
    // 0x1c3564: 0xc600e994  lwc1        $f0, -0x166C($s0)
    ctx->pc = 0x1c3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294961556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c3568:
    // 0x1c3568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c356c:
    // 0x1c356c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c356cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c3570:
    // 0x1c3570: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c3570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c3574:
    // 0x1c3574: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c3574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c3578:
    // 0x1c3578: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c3578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c357c:
    // 0x1c357c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c357cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c3580:
    // 0x1c3580: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c3580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c3584:
    // 0x1c3584: 0xc070948  jal         func_1C2520
label_1c3588:
    if (ctx->pc == 0x1C3588u) {
        ctx->pc = 0x1C3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3584u;
        // 0x1c3588: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C358Cu;
        goto label_1c358c;
    }
    ctx->pc = 0x1C3584u;
    SET_GPR_U32(ctx, 31, 0x1C358Cu);
    ctx->pc = 0x1C3588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3584u;
    // 0x1c3588: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2520u, 0x1C3584u, 0x1C358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C358Cu;
label_1c358c:
    // 0x1c358c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c3590:
    // 0x1c3590: 0xc600e994  lwc1        $f0, -0x166C($s0)
    ctx->pc = 0x1c3590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294961556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c3594:
    // 0x1c3594: 0xc441e98c  lwc1        $f1, -0x1674($v0)
    ctx->pc = 0x1c3594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c3598:
    // 0x1c3598: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c3598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c359c:
    // 0x1c359c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c359cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c35a0:
    // 0x1c35a0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1c35a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c35a4:
    // 0x1c35a4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c35a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c35a8:
    // 0x1c35a8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1c35a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c35ac:
    // 0x1c35ac: 0x7e2203c0  sq          $v0, 0x3C0($s1)
    ctx->pc = 0x1c35acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 960), GPR_VEC(ctx, 2));
label_1c35b0:
    // 0x1c35b0: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
label_1c35b4:
    if (ctx->pc == 0x1C35B4u) {
        ctx->pc = 0x1C35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35B0u;
        // 0x1c35b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C35B8u;
        goto label_1c35b8;
    }
    ctx->pc = 0x1C35B0u;
    {
        const bool branch_taken_0x1c35b0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35B0u;
        // 0x1c35b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35b0) {
            ctx->pc = 0x1C35D4u;
            goto label_1c35d4;
        }
    }
    ctx->pc = 0x1C35B8u;
label_1c35b8:
    // 0x1c35b8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c35b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c35bc:
    // 0x1c35bc: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1c35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1c35c0:
    // 0x1c35c0: 0x24a54fa0  addiu       $a1, $a1, 0x4FA0
    ctx->pc = 0x1c35c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
label_1c35c4:
    // 0x1c35c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c35c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c35c8:
    // 0x1c35c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c35c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c35cc:
    // 0x1c35cc: 0xc043f1c  jal         func_10FC70
label_1c35d0:
    if (ctx->pc == 0x1C35D0u) {
        ctx->pc = 0x1C35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35CCu;
        // 0x1c35d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C35D4u;
        goto label_1c35d4;
    }
    ctx->pc = 0x1C35CCu;
    SET_GPR_U32(ctx, 31, 0x1C35D4u);
    ctx->pc = 0x1C35D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35CCu;
    // 0x1c35d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1C35CCu, 0x1C35D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35D4u;
label_1c35d4:
    // 0x1c35d4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c35d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c35d8:
    // 0x1c35d8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c35d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c35dc:
    // 0x1c35dc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c35dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c35e0:
    // 0x1c35e0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c35e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c35e4:
    // 0x1c35e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c35e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c35e8:
    // 0x1c35e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c35e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c35ec:
    // 0x1c35ec: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c35ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c35f0:
    // 0x1c35f0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1c35f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c35f4:
    // 0x1c35f4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1c35f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c35f8:
    // 0x1c35f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c35f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c35fc:
    // 0x1c35fc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c35fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c3600:
    // 0x1c3600: 0x3e00008  jr          $ra
label_1c3604:
    if (ctx->pc == 0x1C3604u) {
        ctx->pc = 0x1C3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3600u;
        // 0x1c3604: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3608u;
        goto label_fallthrough_0x1c3600;
    }
    ctx->pc = 0x1C3600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3600u;
        // 0x1c3604: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c3600:
    ctx->pc = 0x1C3608u;
}
