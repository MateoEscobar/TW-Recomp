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

// Function: sub_002C32C0
// Address: 0x2c32c0 - 0x2c3548
void sub_002C32C0_0x2c32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C32C0_0x2c32c0");
#endif

    switch (ctx->pc) {
        case 0x2c32c0u: goto label_2c32c0;
        case 0x2c32c4u: goto label_2c32c4;
        case 0x2c32c8u: goto label_2c32c8;
        case 0x2c32ccu: goto label_2c32cc;
        case 0x2c32d0u: goto label_2c32d0;
        case 0x2c32d4u: goto label_2c32d4;
        case 0x2c32d8u: goto label_2c32d8;
        case 0x2c32dcu: goto label_2c32dc;
        case 0x2c32e0u: goto label_2c32e0;
        case 0x2c32e4u: goto label_2c32e4;
        case 0x2c32e8u: goto label_2c32e8;
        case 0x2c32ecu: goto label_2c32ec;
        case 0x2c32f0u: goto label_2c32f0;
        case 0x2c32f4u: goto label_2c32f4;
        case 0x2c32f8u: goto label_2c32f8;
        case 0x2c32fcu: goto label_2c32fc;
        case 0x2c3300u: goto label_2c3300;
        case 0x2c3304u: goto label_2c3304;
        case 0x2c3308u: goto label_2c3308;
        case 0x2c330cu: goto label_2c330c;
        case 0x2c3310u: goto label_2c3310;
        case 0x2c3314u: goto label_2c3314;
        case 0x2c3318u: goto label_2c3318;
        case 0x2c331cu: goto label_2c331c;
        case 0x2c3320u: goto label_2c3320;
        case 0x2c3324u: goto label_2c3324;
        case 0x2c3328u: goto label_2c3328;
        case 0x2c332cu: goto label_2c332c;
        case 0x2c3330u: goto label_2c3330;
        case 0x2c3334u: goto label_2c3334;
        case 0x2c3338u: goto label_2c3338;
        case 0x2c333cu: goto label_2c333c;
        case 0x2c3340u: goto label_2c3340;
        case 0x2c3344u: goto label_2c3344;
        case 0x2c3348u: goto label_2c3348;
        case 0x2c334cu: goto label_2c334c;
        case 0x2c3350u: goto label_2c3350;
        case 0x2c3354u: goto label_2c3354;
        case 0x2c3358u: goto label_2c3358;
        case 0x2c335cu: goto label_2c335c;
        case 0x2c3360u: goto label_2c3360;
        case 0x2c3364u: goto label_2c3364;
        case 0x2c3368u: goto label_2c3368;
        case 0x2c336cu: goto label_2c336c;
        case 0x2c3370u: goto label_2c3370;
        case 0x2c3374u: goto label_2c3374;
        case 0x2c3378u: goto label_2c3378;
        case 0x2c337cu: goto label_2c337c;
        case 0x2c3380u: goto label_2c3380;
        case 0x2c3384u: goto label_2c3384;
        case 0x2c3388u: goto label_2c3388;
        case 0x2c338cu: goto label_2c338c;
        case 0x2c3390u: goto label_2c3390;
        case 0x2c3394u: goto label_2c3394;
        case 0x2c3398u: goto label_2c3398;
        case 0x2c339cu: goto label_2c339c;
        case 0x2c33a0u: goto label_2c33a0;
        case 0x2c33a4u: goto label_2c33a4;
        case 0x2c33a8u: goto label_2c33a8;
        case 0x2c33acu: goto label_2c33ac;
        case 0x2c33b0u: goto label_2c33b0;
        case 0x2c33b4u: goto label_2c33b4;
        case 0x2c33b8u: goto label_2c33b8;
        case 0x2c33bcu: goto label_2c33bc;
        case 0x2c33c0u: goto label_2c33c0;
        case 0x2c33c4u: goto label_2c33c4;
        case 0x2c33c8u: goto label_2c33c8;
        case 0x2c33ccu: goto label_2c33cc;
        case 0x2c33d0u: goto label_2c33d0;
        case 0x2c33d4u: goto label_2c33d4;
        case 0x2c33d8u: goto label_2c33d8;
        case 0x2c33dcu: goto label_2c33dc;
        case 0x2c33e0u: goto label_2c33e0;
        case 0x2c33e4u: goto label_2c33e4;
        case 0x2c33e8u: goto label_2c33e8;
        case 0x2c33ecu: goto label_2c33ec;
        case 0x2c33f0u: goto label_2c33f0;
        case 0x2c33f4u: goto label_2c33f4;
        case 0x2c33f8u: goto label_2c33f8;
        case 0x2c33fcu: goto label_2c33fc;
        case 0x2c3400u: goto label_2c3400;
        case 0x2c3404u: goto label_2c3404;
        case 0x2c3408u: goto label_2c3408;
        case 0x2c340cu: goto label_2c340c;
        case 0x2c3410u: goto label_2c3410;
        case 0x2c3414u: goto label_2c3414;
        case 0x2c3418u: goto label_2c3418;
        case 0x2c341cu: goto label_2c341c;
        case 0x2c3420u: goto label_2c3420;
        case 0x2c3424u: goto label_2c3424;
        case 0x2c3428u: goto label_2c3428;
        case 0x2c342cu: goto label_2c342c;
        case 0x2c3430u: goto label_2c3430;
        case 0x2c3434u: goto label_2c3434;
        case 0x2c3438u: goto label_2c3438;
        case 0x2c343cu: goto label_2c343c;
        case 0x2c3440u: goto label_2c3440;
        case 0x2c3444u: goto label_2c3444;
        case 0x2c3448u: goto label_2c3448;
        case 0x2c344cu: goto label_2c344c;
        case 0x2c3450u: goto label_2c3450;
        case 0x2c3454u: goto label_2c3454;
        case 0x2c3458u: goto label_2c3458;
        case 0x2c345cu: goto label_2c345c;
        case 0x2c3460u: goto label_2c3460;
        case 0x2c3464u: goto label_2c3464;
        case 0x2c3468u: goto label_2c3468;
        case 0x2c346cu: goto label_2c346c;
        case 0x2c3470u: goto label_2c3470;
        case 0x2c3474u: goto label_2c3474;
        case 0x2c3478u: goto label_2c3478;
        case 0x2c347cu: goto label_2c347c;
        case 0x2c3480u: goto label_2c3480;
        case 0x2c3484u: goto label_2c3484;
        case 0x2c3488u: goto label_2c3488;
        case 0x2c348cu: goto label_2c348c;
        case 0x2c3490u: goto label_2c3490;
        case 0x2c3494u: goto label_2c3494;
        case 0x2c3498u: goto label_2c3498;
        case 0x2c349cu: goto label_2c349c;
        case 0x2c34a0u: goto label_2c34a0;
        case 0x2c34a4u: goto label_2c34a4;
        case 0x2c34a8u: goto label_2c34a8;
        case 0x2c34acu: goto label_2c34ac;
        case 0x2c34b0u: goto label_2c34b0;
        case 0x2c34b4u: goto label_2c34b4;
        case 0x2c34b8u: goto label_2c34b8;
        case 0x2c34bcu: goto label_2c34bc;
        case 0x2c34c0u: goto label_2c34c0;
        case 0x2c34c4u: goto label_2c34c4;
        case 0x2c34c8u: goto label_2c34c8;
        case 0x2c34ccu: goto label_2c34cc;
        case 0x2c34d0u: goto label_2c34d0;
        case 0x2c34d4u: goto label_2c34d4;
        case 0x2c34d8u: goto label_2c34d8;
        case 0x2c34dcu: goto label_2c34dc;
        case 0x2c34e0u: goto label_2c34e0;
        case 0x2c34e4u: goto label_2c34e4;
        case 0x2c34e8u: goto label_2c34e8;
        case 0x2c34ecu: goto label_2c34ec;
        case 0x2c34f0u: goto label_2c34f0;
        case 0x2c34f4u: goto label_2c34f4;
        case 0x2c34f8u: goto label_2c34f8;
        case 0x2c34fcu: goto label_2c34fc;
        case 0x2c3500u: goto label_2c3500;
        case 0x2c3504u: goto label_2c3504;
        case 0x2c3508u: goto label_2c3508;
        case 0x2c350cu: goto label_2c350c;
        case 0x2c3510u: goto label_2c3510;
        case 0x2c3514u: goto label_2c3514;
        case 0x2c3518u: goto label_2c3518;
        case 0x2c351cu: goto label_2c351c;
        case 0x2c3520u: goto label_2c3520;
        case 0x2c3524u: goto label_2c3524;
        case 0x2c3528u: goto label_2c3528;
        case 0x2c352cu: goto label_2c352c;
        case 0x2c3530u: goto label_2c3530;
        case 0x2c3534u: goto label_2c3534;
        case 0x2c3538u: goto label_2c3538;
        case 0x2c353cu: goto label_2c353c;
        case 0x2c3540u: goto label_2c3540;
        case 0x2c3544u: goto label_2c3544;
        default: break;
    }

    ctx->pc = 0x2c32c0u;

label_2c32c0:
    // 0x2c32c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2c32c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2c32c4:
    // 0x2c32c4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c32c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2c32c8:
    // 0x2c32c8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2c32c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2c32cc:
    // 0x2c32cc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2c32ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2c32d0:
    // 0x2c32d0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2c32d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2c32d4:
    // 0x2c32d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c32d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c32d8:
    // 0x2c32d8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2c32d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2c32dc:
    // 0x2c32dc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c32dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c32e0:
    // 0x2c32e0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2c32e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2c32e4:
    // 0x2c32e4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2c32e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2c32e8:
    // 0x2c32e8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2c32e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_2c32ec:
    // 0x2c32ec: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2c32ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2c32f0:
    // 0x2c32f0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2c32f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2c32f4:
    // 0x2c32f4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2c32f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2c32f8:
    // 0x2c32f8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2c32f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2c32fc:
    // 0x2c32fc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2c32fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2c3300:
    // 0x2c3300: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2c3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2c3304:
    // 0x2c3304: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c3304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2c3308:
    // 0x2c3308: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c3308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c330c:
    // 0x2c330c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2c330cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2c3310:
    // 0x2c3310: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2c3310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2c3314:
    // 0x2c3314: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c3314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2c3318:
    // 0x2c3318: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2c3318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c331c:
    // 0x2c331c: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x2c331cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c3320:
    // 0x2c3320: 0x86a20092  lh          $v0, 0x92($s5)
    ctx->pc = 0x2c3320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2c3324:
    // 0x2c3324: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c3324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c3328:
    // 0x2c3328: 0xc0a2fc0  jal         func_28BF00
label_2c332c:
    if (ctx->pc == 0x2C332Cu) {
        ctx->pc = 0x2C332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3328u;
        // 0x2c332c: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3330u;
        goto label_2c3330;
    }
    ctx->pc = 0x2C3328u;
    SET_GPR_U32(ctx, 31, 0x2C3330u);
    ctx->pc = 0x2C332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3328u;
    // 0x2c332c: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2C3328u, 0x2C3330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3330u;
label_2c3330:
    // 0x2c3330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c3330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c3334:
    // 0x2c3334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c3338:
    // 0x2c3338: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c3338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2c333c:
    // 0x2c333c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c333cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c3340:
    // 0x2c3340: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2c3340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c3344:
    // 0x2c3344: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x2c3344u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c3348:
    // 0x2c3348: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c3348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c334c:
    // 0x2c334c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c3350:
    // 0x2c3350: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2c3350u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2c3354:
    // 0x2c3354: 0x0  nop
    ctx->pc = 0x2c3354u;
    // NOP
label_2c3358:
    // 0x2c3358: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2c3358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2c335c:
    // 0x2c335c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2c335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2c3360:
    // 0x2c3360: 0x0  nop
    ctx->pc = 0x2c3360u;
    // NOP
label_2c3364:
    // 0x2c3364: 0x0  nop
    ctx->pc = 0x2c3364u;
    // NOP
label_2c3368:
    // 0x2c3368: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_2c336c:
    if (ctx->pc == 0x2C336Cu) {
        ctx->pc = 0x2C336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3368u;
        // 0x2c336c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3370u;
        goto label_2c3370;
    }
    ctx->pc = 0x2C3368u;
    {
        const bool branch_taken_0x2c3368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3368u;
        // 0x2c336c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3368) {
            ctx->pc = 0x2C3358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3358;
        }
    }
    ctx->pc = 0x2C3370u;
label_2c3370:
    // 0x2c3370: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x2c3370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_2c3374:
    // 0x2c3374: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2c3374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2c3378:
    // 0x2c3378: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c3378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c337c:
    // 0x2c337c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2c337cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2c3380:
    // 0x2c3380: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2c3380u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c3384:
    // 0x2c3384: 0x24e7c1f0  addiu       $a3, $a3, -0x3E10
    ctx->pc = 0x2c3384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951408));
label_2c3388:
    // 0x2c3388: 0xc0a7244  jal         func_29C910
label_2c338c:
    if (ctx->pc == 0x2C338Cu) {
        ctx->pc = 0x2C338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3388u;
        // 0x2c338c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3390u;
        goto label_2c3390;
    }
    ctx->pc = 0x2C3388u;
    SET_GPR_U32(ctx, 31, 0x2C3390u);
    ctx->pc = 0x2C338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3388u;
    // 0x2c338c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x2C3388u, 0x2C3390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3390u;
label_2c3390:
    // 0x2c3390: 0xc137832  jal         func_4DE0C8
label_2c3394:
    if (ctx->pc == 0x2C3394u) {
        ctx->pc = 0x2C3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3390u;
        // 0x2c3394: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3398u;
        goto label_2c3398;
    }
    ctx->pc = 0x2C3390u;
    SET_GPR_U32(ctx, 31, 0x2C3398u);
    ctx->pc = 0x2C3394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3390u;
    // 0x2c3394: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2C3390u, 0x2C3398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3398u;
label_2c3398:
    // 0x2c3398: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_2c339c:
    if (ctx->pc == 0x2C339Cu) {
        ctx->pc = 0x2C33A0u;
        goto label_2c33a0;
    }
    ctx->pc = 0x2C3398u;
    {
        const bool branch_taken_0x2c3398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3398) {
            ctx->pc = 0x2C342Cu;
            goto label_2c342c;
        }
    }
    ctx->pc = 0x2C33A0u;
label_2c33a0:
    // 0x2c33a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c33a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c33a4:
    // 0x2c33a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c33a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c33a8:
    // 0x2c33a8: 0xc137826  jal         func_4DE098
label_2c33ac:
    if (ctx->pc == 0x2C33ACu) {
        ctx->pc = 0x2C33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33A8u;
        // 0x2c33ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C33B0u;
        goto label_2c33b0;
    }
    ctx->pc = 0x2C33A8u;
    SET_GPR_U32(ctx, 31, 0x2C33B0u);
    ctx->pc = 0x2C33ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C33A8u;
    // 0x2c33ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2C33A8u, 0x2C33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C33B0u;
label_2c33b0:
    // 0x2c33b0: 0xc0e409a  jal         func_390268
label_2c33b4:
    if (ctx->pc == 0x2C33B4u) {
        ctx->pc = 0x2C33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33B0u;
        // 0x2c33b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C33B8u;
        goto label_2c33b8;
    }
    ctx->pc = 0x2C33B0u;
    SET_GPR_U32(ctx, 31, 0x2C33B8u);
    ctx->pc = 0x2C33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C33B0u;
    // 0x2c33b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C33B0u, 0x2C33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C33B8u;
label_2c33b8:
    // 0x2c33b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c33b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c33bc:
    // 0x2c33bc: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_2c33c0:
    if (ctx->pc == 0x2C33C0u) {
        ctx->pc = 0x2C33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33BCu;
        // 0x2c33c0: 0x26110090  addiu       $s1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C33C4u;
        goto label_2c33c4;
    }
    ctx->pc = 0x2C33BCu;
    {
        const bool branch_taken_0x2c33bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33BCu;
        // 0x2c33c0: 0x26110090  addiu       $s1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33bc) {
            ctx->pc = 0x2C341Cu;
            goto label_2c341c;
        }
    }
    ctx->pc = 0x2C33C4u;
label_2c33c4:
    // 0x2c33c4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2c33c8:
    // 0x2c33c8: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2c33c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2c33cc:
    // 0x2c33cc: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2c33ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c33d0:
    // 0x2c33d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c33d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c33d4:
    // 0x2c33d4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c33d8:
    // 0x2c33d8: 0xc0cdb38  jal         func_336CE0
label_2c33dc:
    if (ctx->pc == 0x2C33DCu) {
        ctx->pc = 0x2C33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33D8u;
        // 0x2c33dc: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C33E0u;
        goto label_2c33e0;
    }
    ctx->pc = 0x2C33D8u;
    SET_GPR_U32(ctx, 31, 0x2C33E0u);
    ctx->pc = 0x2C33DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C33D8u;
    // 0x2c33dc: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C33D8u, 0x2C33E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C33E0u;
label_2c33e0:
    // 0x2c33e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c33e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c33e4:
    // 0x2c33e4: 0x0  nop
    ctx->pc = 0x2c33e4u;
    // NOP
label_2c33e8:
    // 0x2c33e8: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_2c33ec:
    if (ctx->pc == 0x2C33ECu) {
        ctx->pc = 0x2C33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33E8u;
        // 0x2c33ec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C33F0u;
        goto label_2c33f0;
    }
    ctx->pc = 0x2C33E8u;
    {
        const bool branch_taken_0x2c33e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c33e8) {
            ctx->pc = 0x2C33ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C33E8u;
            // 0x2c33ec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3420u;
            goto label_2c3420;
        }
    }
    ctx->pc = 0x2C33F0u;
label_2c33f0:
    // 0x2c33f0: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2c33f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2c33f4:
    // 0x2c33f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c33f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c33f8:
    // 0x2c33f8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c33fc:
    // 0x2c33fc: 0xc0cdb38  jal         func_336CE0
label_2c3400:
    if (ctx->pc == 0x2C3400u) {
        ctx->pc = 0x2C3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33FCu;
        // 0x2c3400: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3404u;
        goto label_2c3404;
    }
    ctx->pc = 0x2C33FCu;
    SET_GPR_U32(ctx, 31, 0x2C3404u);
    ctx->pc = 0x2C3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C33FCu;
    // 0x2c3400: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C33FCu, 0x2C3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3404u;
label_2c3404:
    // 0x2c3404: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c3404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c3408:
    // 0x2c3408: 0x0  nop
    ctx->pc = 0x2c3408u;
    // NOP
label_2c340c:
    // 0x2c340c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2c3410:
    if (ctx->pc == 0x2C3410u) {
        ctx->pc = 0x2C3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C340Cu;
        // 0x2c3410: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3414u;
        goto label_2c3414;
    }
    ctx->pc = 0x2C340Cu;
    {
        const bool branch_taken_0x2c340c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c340c) {
            ctx->pc = 0x2C3410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C340Cu;
            // 0x2c3410: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3420u;
            goto label_2c3420;
        }
    }
    ctx->pc = 0x2C3414u;
label_2c3414:
    // 0x2c3414: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2c3414u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3418:
    // 0x2c3418: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c3418u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2c341c:
    // 0x2c341c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c341cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2c3420:
    // 0x2c3420: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x2c3420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2c3424:
    // 0x2c3424: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_2c3428:
    if (ctx->pc == 0x2C3428u) {
        ctx->pc = 0x2C3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3424u;
        // 0x2c3428: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C342Cu;
        goto label_2c342c;
    }
    ctx->pc = 0x2C3424u;
    {
        const bool branch_taken_0x2c3424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3424) {
            ctx->pc = 0x2C3428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3424u;
            // 0x2c3428: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C33A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c33a8;
        }
    }
    ctx->pc = 0x2C342Cu;
label_2c342c:
    // 0x2c342c: 0x12e00037  beqz        $s7, . + 4 + (0x37 << 2)
label_2c3430:
    if (ctx->pc == 0x2C3430u) {
        ctx->pc = 0x2C3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C342Cu;
        // 0x2c3430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3434u;
        goto label_2c3434;
    }
    ctx->pc = 0x2C342Cu;
    {
        const bool branch_taken_0x2c342c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C342Cu;
        // 0x2c3430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c342c) {
            ctx->pc = 0x2C350Cu;
            goto label_2c350c;
        }
    }
    ctx->pc = 0x2C3434u;
label_2c3434:
    // 0x2c3434: 0xc0b0c02  jal         func_2C3008
label_2c3438:
    if (ctx->pc == 0x2C3438u) {
        ctx->pc = 0x2C3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3434u;
        // 0x2c3438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C343Cu;
        goto label_2c343c;
    }
    ctx->pc = 0x2C3434u;
    SET_GPR_U32(ctx, 31, 0x2C343Cu);
    ctx->pc = 0x2C3438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3434u;
    // 0x2c3438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3008u, 0x2C3434u, 0x2C343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C343Cu;
label_2c343c:
    // 0x2c343c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3440:
    // 0x2c3440: 0x14430032  bne         $v0, $v1, . + 4 + (0x32 << 2)
label_2c3444:
    if (ctx->pc == 0x2C3444u) {
        ctx->pc = 0x2C3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3440u;
        // 0x2c3444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3448u;
        goto label_2c3448;
    }
    ctx->pc = 0x2C3440u;
    {
        const bool branch_taken_0x2c3440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3440u;
        // 0x2c3444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3440) {
            ctx->pc = 0x2C350Cu;
            goto label_2c350c;
        }
    }
    ctx->pc = 0x2C3448u;
label_2c3448:
    // 0x2c3448: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c3448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c344c:
    // 0x2c344c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2c344cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2c3450:
    // 0x2c3450: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2c3454:
    if (ctx->pc == 0x2C3454u) {
        ctx->pc = 0x2C3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3450u;
        // 0x2c3454: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3458u;
        goto label_2c3458;
    }
    ctx->pc = 0x2C3450u;
    {
        const bool branch_taken_0x2c3450 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3450u;
        // 0x2c3454: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3450) {
            ctx->pc = 0x2C3464u;
            goto label_2c3464;
        }
    }
    ctx->pc = 0x2C3458u;
label_2c3458:
    // 0x2c3458: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c3458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c345c:
    // 0x2c345c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c3460:
    if (ctx->pc == 0x2C3460u) {
        ctx->pc = 0x2C3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C345Cu;
        // 0x2c3460: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3464u;
        goto label_2c3464;
    }
    ctx->pc = 0x2C345Cu;
    {
        const bool branch_taken_0x2c345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C345Cu;
        // 0x2c3460: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c345c) {
            ctx->pc = 0x2C3468u;
            goto label_2c3468;
        }
    }
    ctx->pc = 0x2C3464u;
label_2c3464:
    // 0x2c3464: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c3464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3468:
    // 0x2c3468: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2c346c:
    if (ctx->pc == 0x2C346Cu) {
        ctx->pc = 0x2C346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3468u;
        // 0x2c346c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3470u;
        goto label_2c3470;
    }
    ctx->pc = 0x2C3468u;
    {
        const bool branch_taken_0x2c3468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3468) {
            ctx->pc = 0x2C346Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3468u;
            // 0x2c346c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3494u;
            goto label_2c3494;
        }
    }
    ctx->pc = 0x2C3470u;
label_2c3470:
    // 0x2c3470: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2c3470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c3474:
    // 0x2c3474: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2c3474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2c3478:
    // 0x2c3478: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c3478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c347c:
    // 0x2c347c: 0x40f809  jalr        $v0
label_2c3480:
    if (ctx->pc == 0x2C3480u) {
        ctx->pc = 0x2C3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C347Cu;
        // 0x2c3480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3484u;
        goto label_2c3484;
    }
    ctx->pc = 0x2C347Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3484u);
        ctx->pc = 0x2C3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C347Cu;
        // 0x2c3480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C347Cu, 0x2C3484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3484u;
label_2c3484:
    // 0x2c3484: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x2c3484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_2c3488:
    // 0x2c3488: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_2c348c:
    if (ctx->pc == 0x2C348Cu) {
        ctx->pc = 0x2C348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3488u;
        // 0x2c348c: 0xa2000038  sb          $zero, 0x38($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3490u;
        goto label_2c3490;
    }
    ctx->pc = 0x2C3488u;
    {
        const bool branch_taken_0x2c3488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3488) {
            ctx->pc = 0x2C348Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3488u;
            // 0x2c348c: 0xa2000038  sb          $zero, 0x38($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3490u;
            goto label_2c3490;
        }
    }
    ctx->pc = 0x2C3490u;
label_2c3490:
    // 0x2c3490: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2c3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c3494:
    // 0x2c3494: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c3494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2c3498:
    // 0x2c3498: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2c3498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2c349c:
    // 0x2c349c: 0xa040028f  sb          $zero, 0x28F($v0)
    ctx->pc = 0x2c349cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 655), (uint8_t)GPR_U32(ctx, 0));
label_2c34a0:
    // 0x2c34a0: 0xc0a3464  jal         func_28D190
label_2c34a4:
    if (ctx->pc == 0x2C34A4u) {
        ctx->pc = 0x2C34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34A0u;
        // 0x2c34a4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C34A8u;
        goto label_2c34a8;
    }
    ctx->pc = 0x2C34A0u;
    SET_GPR_U32(ctx, 31, 0x2C34A8u);
    ctx->pc = 0x2C34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C34A0u;
    // 0x2c34a4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x2C34A0u, 0x2C34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34A8u;
label_2c34a8:
    // 0x2c34a8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2c34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c34ac:
    // 0x2c34ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c34acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c34b0:
    // 0x2c34b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c34b4:
    // 0x2c34b4: 0x40f809  jalr        $v0
label_2c34b8:
    if (ctx->pc == 0x2C34B8u) {
        ctx->pc = 0x2C34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34B4u;
        // 0x2c34b8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C34BCu;
        goto label_2c34bc;
    }
    ctx->pc = 0x2C34B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C34BCu);
        ctx->pc = 0x2C34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34B4u;
        // 0x2c34b8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C34B4u, 0x2C34BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C34BCu;
label_2c34bc:
    // 0x2c34bc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2c34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2c34c0:
    // 0x2c34c0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2c34c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2c34c4:
    // 0x2c34c4: 0x24854b00  addiu       $a1, $a0, 0x4B00
    ctx->pc = 0x2c34c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2c34c8:
    // 0x2c34c8: 0x86f00092  lh          $s0, 0x92($s7)
    ctx->pc = 0x2c34c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 146)));
label_2c34cc:
    // 0x2c34cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c34ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c34d0:
    // 0x2c34d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c34d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c34d4:
    // 0x2c34d4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c34d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2c34d8:
    // 0x2c34d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c34dc:
    // 0x2c34dc: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2c34dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2c34e0:
    // 0x2c34e0: 0x40f809  jalr        $v0
label_2c34e4:
    if (ctx->pc == 0x2C34E4u) {
        ctx->pc = 0x2C34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34E0u;
        // 0x2c34e4: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C34E8u;
        goto label_2c34e8;
    }
    ctx->pc = 0x2C34E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C34E8u);
        ctx->pc = 0x2C34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34E0u;
        // 0x2c34e4: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C34E0u, 0x2C34E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C34E8u;
label_2c34e8:
    // 0x2c34e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2c34e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2c34ec:
    // 0x2c34ec: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x2c34ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2c34f0:
    // 0x2c34f0: 0x8c68bd30  lw          $t0, -0x42D0($v1)
    ctx->pc = 0x2c34f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2c34f4:
    // 0x2c34f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c34f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c34f8:
    // 0x2c34f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c34f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c34fc:
    // 0x2c34fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c34fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3500:
    // 0x2c3500: 0xc0b1018  jal         func_2C4060
label_2c3504:
    if (ctx->pc == 0x2C3504u) {
        ctx->pc = 0x2C3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3500u;
        // 0x2c3504: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3508u;
        goto label_2c3508;
    }
    ctx->pc = 0x2C3500u;
    SET_GPR_U32(ctx, 31, 0x2C3508u);
    ctx->pc = 0x2C3504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3500u;
    // 0x2c3504: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x2C3500u, 0x2C3508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3508u;
label_2c3508:
    // 0x2c3508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c350c:
    // 0x2c350c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2c350cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c3510:
    // 0x2c3510: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2c3510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c3514:
    // 0x2c3514: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2c3514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c3518:
    // 0x2c3518: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2c3518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c351c:
    // 0x2c351c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2c351cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c3520:
    // 0x2c3520: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2c3520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c3524:
    // 0x2c3524: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c3524u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c3528:
    // 0x2c3528: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2c3528u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c352c:
    // 0x2c352c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2c352cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c3530:
    // 0x2c3530: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c3530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c3534:
    // 0x2c3534: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x2c3534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2c3538:
    // 0x2c3538: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2c3538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c353c:
    // 0x2c353c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2c353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c3540:
    // 0x2c3540: 0x3e00008  jr          $ra
label_2c3544:
    if (ctx->pc == 0x2C3544u) {
        ctx->pc = 0x2C3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3540u;
        // 0x2c3544: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3548u;
        goto label_fallthrough_0x2c3540;
    }
    ctx->pc = 0x2C3540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3540u;
        // 0x2c3544: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3540:
    ctx->pc = 0x2C3548u;
}
