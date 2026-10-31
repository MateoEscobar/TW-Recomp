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

// Function: sub_003C31F0
// Address: 0x3c31f0 - 0x3c3448
void sub_003C31F0_0x3c31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C31F0_0x3c31f0");
#endif

    switch (ctx->pc) {
        case 0x3c31f0u: goto label_3c31f0;
        case 0x3c31f4u: goto label_3c31f4;
        case 0x3c31f8u: goto label_3c31f8;
        case 0x3c31fcu: goto label_3c31fc;
        case 0x3c3200u: goto label_3c3200;
        case 0x3c3204u: goto label_3c3204;
        case 0x3c3208u: goto label_3c3208;
        case 0x3c320cu: goto label_3c320c;
        case 0x3c3210u: goto label_3c3210;
        case 0x3c3214u: goto label_3c3214;
        case 0x3c3218u: goto label_3c3218;
        case 0x3c321cu: goto label_3c321c;
        case 0x3c3220u: goto label_3c3220;
        case 0x3c3224u: goto label_3c3224;
        case 0x3c3228u: goto label_3c3228;
        case 0x3c322cu: goto label_3c322c;
        case 0x3c3230u: goto label_3c3230;
        case 0x3c3234u: goto label_3c3234;
        case 0x3c3238u: goto label_3c3238;
        case 0x3c323cu: goto label_3c323c;
        case 0x3c3240u: goto label_3c3240;
        case 0x3c3244u: goto label_3c3244;
        case 0x3c3248u: goto label_3c3248;
        case 0x3c324cu: goto label_3c324c;
        case 0x3c3250u: goto label_3c3250;
        case 0x3c3254u: goto label_3c3254;
        case 0x3c3258u: goto label_3c3258;
        case 0x3c325cu: goto label_3c325c;
        case 0x3c3260u: goto label_3c3260;
        case 0x3c3264u: goto label_3c3264;
        case 0x3c3268u: goto label_3c3268;
        case 0x3c326cu: goto label_3c326c;
        case 0x3c3270u: goto label_3c3270;
        case 0x3c3274u: goto label_3c3274;
        case 0x3c3278u: goto label_3c3278;
        case 0x3c327cu: goto label_3c327c;
        case 0x3c3280u: goto label_3c3280;
        case 0x3c3284u: goto label_3c3284;
        case 0x3c3288u: goto label_3c3288;
        case 0x3c328cu: goto label_3c328c;
        case 0x3c3290u: goto label_3c3290;
        case 0x3c3294u: goto label_3c3294;
        case 0x3c3298u: goto label_3c3298;
        case 0x3c329cu: goto label_3c329c;
        case 0x3c32a0u: goto label_3c32a0;
        case 0x3c32a4u: goto label_3c32a4;
        case 0x3c32a8u: goto label_3c32a8;
        case 0x3c32acu: goto label_3c32ac;
        case 0x3c32b0u: goto label_3c32b0;
        case 0x3c32b4u: goto label_3c32b4;
        case 0x3c32b8u: goto label_3c32b8;
        case 0x3c32bcu: goto label_3c32bc;
        case 0x3c32c0u: goto label_3c32c0;
        case 0x3c32c4u: goto label_3c32c4;
        case 0x3c32c8u: goto label_3c32c8;
        case 0x3c32ccu: goto label_3c32cc;
        case 0x3c32d0u: goto label_3c32d0;
        case 0x3c32d4u: goto label_3c32d4;
        case 0x3c32d8u: goto label_3c32d8;
        case 0x3c32dcu: goto label_3c32dc;
        case 0x3c32e0u: goto label_3c32e0;
        case 0x3c32e4u: goto label_3c32e4;
        case 0x3c32e8u: goto label_3c32e8;
        case 0x3c32ecu: goto label_3c32ec;
        case 0x3c32f0u: goto label_3c32f0;
        case 0x3c32f4u: goto label_3c32f4;
        case 0x3c32f8u: goto label_3c32f8;
        case 0x3c32fcu: goto label_3c32fc;
        case 0x3c3300u: goto label_3c3300;
        case 0x3c3304u: goto label_3c3304;
        case 0x3c3308u: goto label_3c3308;
        case 0x3c330cu: goto label_3c330c;
        case 0x3c3310u: goto label_3c3310;
        case 0x3c3314u: goto label_3c3314;
        case 0x3c3318u: goto label_3c3318;
        case 0x3c331cu: goto label_3c331c;
        case 0x3c3320u: goto label_3c3320;
        case 0x3c3324u: goto label_3c3324;
        case 0x3c3328u: goto label_3c3328;
        case 0x3c332cu: goto label_3c332c;
        case 0x3c3330u: goto label_3c3330;
        case 0x3c3334u: goto label_3c3334;
        case 0x3c3338u: goto label_3c3338;
        case 0x3c333cu: goto label_3c333c;
        case 0x3c3340u: goto label_3c3340;
        case 0x3c3344u: goto label_3c3344;
        case 0x3c3348u: goto label_3c3348;
        case 0x3c334cu: goto label_3c334c;
        case 0x3c3350u: goto label_3c3350;
        case 0x3c3354u: goto label_3c3354;
        case 0x3c3358u: goto label_3c3358;
        case 0x3c335cu: goto label_3c335c;
        case 0x3c3360u: goto label_3c3360;
        case 0x3c3364u: goto label_3c3364;
        case 0x3c3368u: goto label_3c3368;
        case 0x3c336cu: goto label_3c336c;
        case 0x3c3370u: goto label_3c3370;
        case 0x3c3374u: goto label_3c3374;
        case 0x3c3378u: goto label_3c3378;
        case 0x3c337cu: goto label_3c337c;
        case 0x3c3380u: goto label_3c3380;
        case 0x3c3384u: goto label_3c3384;
        case 0x3c3388u: goto label_3c3388;
        case 0x3c338cu: goto label_3c338c;
        case 0x3c3390u: goto label_3c3390;
        case 0x3c3394u: goto label_3c3394;
        case 0x3c3398u: goto label_3c3398;
        case 0x3c339cu: goto label_3c339c;
        case 0x3c33a0u: goto label_3c33a0;
        case 0x3c33a4u: goto label_3c33a4;
        case 0x3c33a8u: goto label_3c33a8;
        case 0x3c33acu: goto label_3c33ac;
        case 0x3c33b0u: goto label_3c33b0;
        case 0x3c33b4u: goto label_3c33b4;
        case 0x3c33b8u: goto label_3c33b8;
        case 0x3c33bcu: goto label_3c33bc;
        case 0x3c33c0u: goto label_3c33c0;
        case 0x3c33c4u: goto label_3c33c4;
        case 0x3c33c8u: goto label_3c33c8;
        case 0x3c33ccu: goto label_3c33cc;
        case 0x3c33d0u: goto label_3c33d0;
        case 0x3c33d4u: goto label_3c33d4;
        case 0x3c33d8u: goto label_3c33d8;
        case 0x3c33dcu: goto label_3c33dc;
        case 0x3c33e0u: goto label_3c33e0;
        case 0x3c33e4u: goto label_3c33e4;
        case 0x3c33e8u: goto label_3c33e8;
        case 0x3c33ecu: goto label_3c33ec;
        case 0x3c33f0u: goto label_3c33f0;
        case 0x3c33f4u: goto label_3c33f4;
        case 0x3c33f8u: goto label_3c33f8;
        case 0x3c33fcu: goto label_3c33fc;
        case 0x3c3400u: goto label_3c3400;
        case 0x3c3404u: goto label_3c3404;
        case 0x3c3408u: goto label_3c3408;
        case 0x3c340cu: goto label_3c340c;
        case 0x3c3410u: goto label_3c3410;
        case 0x3c3414u: goto label_3c3414;
        case 0x3c3418u: goto label_3c3418;
        case 0x3c341cu: goto label_3c341c;
        case 0x3c3420u: goto label_3c3420;
        case 0x3c3424u: goto label_3c3424;
        case 0x3c3428u: goto label_3c3428;
        case 0x3c342cu: goto label_3c342c;
        case 0x3c3430u: goto label_3c3430;
        case 0x3c3434u: goto label_3c3434;
        case 0x3c3438u: goto label_3c3438;
        case 0x3c343cu: goto label_3c343c;
        case 0x3c3440u: goto label_3c3440;
        case 0x3c3444u: goto label_3c3444;
        default: break;
    }

    ctx->pc = 0x3c31f0u;

label_3c31f0:
    // 0x3c31f0: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3c31f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3c31f4:
    // 0x3c31f4: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x3c31f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
label_3c31f8:
    // 0x3c31f8: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x3c31f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
label_3c31fc:
    // 0x3c31fc: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x3c31fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
label_3c3200:
    // 0x3c3200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c3200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c3204:
    // 0x3c3204: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x3c3204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
label_3c3208:
    // 0x3c3208: 0xe7b604c0  swc1        $f22, 0x4C0($sp)
    ctx->pc = 0x3c3208u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_3c320c:
    // 0x3c320c: 0xe7b504b8  swc1        $f21, 0x4B8($sp)
    ctx->pc = 0x3c320cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1208), bits); }
label_3c3210:
    // 0x3c3210: 0xe7b404b0  swc1        $f20, 0x4B0($sp)
    ctx->pc = 0x3c3210u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
label_3c3214:
    // 0x3c3214: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c3214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c3218:
    // 0x3c3218: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c3218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c321c:
    // 0x3c321c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c3220:
    // 0x3c3220: 0x40f809  jalr        $v0
label_3c3224:
    if (ctx->pc == 0x3C3224u) {
        ctx->pc = 0x3C3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3220u;
        // 0x3c3224: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3228u;
        goto label_3c3228;
    }
    ctx->pc = 0x3C3220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3228u);
        ctx->pc = 0x3C3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3220u;
        // 0x3c3224: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3220u, 0x3C3228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3228u;
label_3c3228:
    // 0x3c3228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c3228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c322c:
    // 0x3c322c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c3230:
    // 0x3c3230: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3c3230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c3234:
    // 0x3c3234: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c3238:
    // 0x3c3238: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3c3238u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c323c:
    // 0x3c323c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3c3240:
    if (ctx->pc == 0x3C3240u) {
        ctx->pc = 0x3C3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C323Cu;
        // 0x3c3240: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3244u;
        goto label_3c3244;
    }
    ctx->pc = 0x3C323Cu;
    {
        const bool branch_taken_0x3c323c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C323Cu;
        // 0x3c3240: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c323c) {
            ctx->pc = 0x3C324Cu;
            goto label_3c324c;
        }
    }
    ctx->pc = 0x3C3244u;
label_3c3244:
    // 0x3c3244: 0x10000076  b           . + 4 + (0x76 << 2)
label_3c3248:
    if (ctx->pc == 0x3C3248u) {
        ctx->pc = 0x3C3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3244u;
        // 0x3c3248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C324Cu;
        goto label_3c324c;
    }
    ctx->pc = 0x3C3244u;
    {
        const bool branch_taken_0x3c3244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3244u;
        // 0x3c3248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3244) {
            ctx->pc = 0x3C3420u;
            goto label_3c3420;
        }
    }
    ctx->pc = 0x3C324Cu;
label_3c324c:
    // 0x3c324c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x3c324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c3250:
    // 0x3c3250: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c3250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c3254:
    // 0x3c3254: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x3c3254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_3c3258:
    // 0x3c3258: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x3c3258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_3c325c:
    // 0x3c325c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c325cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c3260:
    // 0x3c3260: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3c3260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3c3264:
    // 0x3c3264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c3264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c3268:
    // 0x3c3268: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x3c3268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_3c326c:
    // 0x3c326c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c326cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3c3270:
    // 0x3c3270: 0xc0cd4ee  jal         func_3353B8
label_3c3274:
    if (ctx->pc == 0x3C3274u) {
        ctx->pc = 0x3C3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3270u;
        // 0x3c3274: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3278u;
        goto label_3c3278;
    }
    ctx->pc = 0x3C3270u;
    SET_GPR_U32(ctx, 31, 0x3C3278u);
    ctx->pc = 0x3C3274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3270u;
    // 0x3c3274: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C3270u, 0x3C3278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3278u;
label_3c3278:
    // 0x3c3278: 0x3c03bec7  lui         $v1, 0xBEC7
    ctx->pc = 0x3c3278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48839 << 16));
label_3c327c:
    // 0x3c327c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3c327cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c3280:
    // 0x3c3280: 0x3463ce1c  ori         $v1, $v1, 0xCE1C
    ctx->pc = 0x3c3280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52764);
label_3c3284:
    // 0x3c3284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c3284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c3288:
    // 0x3c3288: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3c3288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3c328c:
    // 0x3c328c: 0x84a40050  lh          $a0, 0x50($a1)
    ctx->pc = 0x3c328cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
label_3c3290:
    // 0x3c3290: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x3c3290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_3c3294:
    // 0x3c3294: 0x40f809  jalr        $v0
label_3c3298:
    if (ctx->pc == 0x3C3298u) {
        ctx->pc = 0x3C3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3294u;
        // 0x3c3298: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C329Cu;
        goto label_3c329c;
    }
    ctx->pc = 0x3C3294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C329Cu);
        ctx->pc = 0x3C3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3294u;
        // 0x3c3298: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3294u, 0x3C329Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C329Cu;
label_3c329c:
    // 0x3c329c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3c329cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3c32a0:
    // 0x3c32a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c32a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c32a4:
    // 0x3c32a4: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_3c32a8:
    if (ctx->pc == 0x3C32A8u) {
        ctx->pc = 0x3C32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32A4u;
        // 0x3c32a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C32ACu;
        goto label_3c32ac;
    }
    ctx->pc = 0x3C32A4u;
    {
        const bool branch_taken_0x3c32a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32A4u;
        // 0x3c32a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c32a4) {
            ctx->pc = 0x3C3420u;
            goto label_3c3420;
        }
    }
    ctx->pc = 0x3C32ACu;
label_3c32ac:
    // 0x3c32ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c32b0:
    // 0x3c32b0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3c32b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3c32b4:
    // 0x3c32b4: 0xc6160008  lwc1        $f22, 0x8($s0)
    ctx->pc = 0x3c32b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c32b8:
    // 0x3c32b8: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3c32b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3c32bc:
    // 0x3c32bc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3c32bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3c32c0:
    // 0x3c32c0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3c32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3c32c4:
    // 0x3c32c4: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x3c32c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
label_3c32c8:
    // 0x3c32c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c32c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c32cc:
    // 0x3c32cc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3c32ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3c32d0:
    // 0x3c32d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c32d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c32d4:
    // 0x3c32d4: 0x60f809  jalr        $v1
label_3c32d8:
    if (ctx->pc == 0x3C32D8u) {
        ctx->pc = 0x3C32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32D4u;
        // 0x3c32d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C32DCu;
        goto label_3c32dc;
    }
    ctx->pc = 0x3C32D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C32DCu);
        ctx->pc = 0x3C32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32D4u;
        // 0x3c32d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C32D4u, 0x3C32DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C32DCu;
label_3c32dc:
    // 0x3c32dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c32dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c32e0:
    // 0x3c32e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c32e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c32e4:
    // 0x3c32e4: 0xc0cd518  jal         func_335460
label_3c32e8:
    if (ctx->pc == 0x3C32E8u) {
        ctx->pc = 0x3C32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32E4u;
        // 0x3c32e8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C32ECu;
        goto label_3c32ec;
    }
    ctx->pc = 0x3C32E4u;
    SET_GPR_U32(ctx, 31, 0x3C32ECu);
    ctx->pc = 0x3C32E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C32E4u;
    // 0x3c32e8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C32E4u, 0x3C32ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C32ECu;
label_3c32ec:
    // 0x3c32ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c32ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c32f0:
    // 0x3c32f0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3c32f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3c32f4:
    // 0x3c32f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c32f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c32f8:
    // 0x3c32f8: 0xc0cd518  jal         func_335460
label_3c32fc:
    if (ctx->pc == 0x3C32FCu) {
        ctx->pc = 0x3C32FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C32F8u;
        // 0x3c32fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3300u;
        goto label_3c3300;
    }
    ctx->pc = 0x3C32F8u;
    SET_GPR_U32(ctx, 31, 0x3C3300u);
    ctx->pc = 0x3C32FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C32F8u;
    // 0x3c32fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C32F8u, 0x3C3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3300u;
label_3c3300:
    // 0x3c3300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c3300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c3304:
    // 0x3c3304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c3304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c3308:
    // 0x3c3308: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3c3308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c330c:
    // 0x3c330c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3c330cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3c3310:
    // 0x3c3310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c3310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3314:
    // 0x3c3314: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3c3314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3c3318:
    // 0x3c3318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c3318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c331c:
    // 0x3c331c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3c331cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3c3320:
    // 0x3c3320: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c3320u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c3324:
    // 0x3c3324: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x3c3324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3c3328:
    // 0x3c3328: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x3c3328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c332c:
    // 0x3c332c: 0x4407b000  mfc1        $a3, $f22
    ctx->pc = 0x3c332cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3c3330:
    // 0x3c3330: 0x26102d20  addiu       $s0, $s0, 0x2D20
    ctx->pc = 0x3c3330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11552));
label_3c3334:
    // 0x3c3334: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x3c3334u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c3338:
    // 0x3c3338: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x3c3338u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3c333c:
    // 0x3c333c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3c333cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3c3340:
    // 0x3c3340: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3c3340u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_3c3344:
    // 0x3c3344: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3c3344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3c3348:
    // 0x3c3348: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3c3348u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3c334c:
    // 0x3c334c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c334cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c3350:
    // 0x3c3350: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c3350u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c3354:
    // 0x3c3354: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3c3354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c3358:
    // 0x3c3358: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3c3358u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c335c:
    // 0x3c335c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3c335cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3c3360:
    // 0x3c3360: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c3360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c3364:
    // 0x3c3364: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c3364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c3368:
    // 0x3c3368: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3c3368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c336c:
    // 0x3c336c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3c336cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3c3370:
    // 0x3c3370: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x3c3370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_3c3374:
    // 0x3c3374: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3c3374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3c3378:
    // 0x3c3378: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3c3378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3c337c:
    // 0x3c337c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3c337cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3c3380:
    // 0x3c3380: 0xc0e92f4  jal         func_3A4BD0
label_3c3384:
    if (ctx->pc == 0x3C3384u) {
        ctx->pc = 0x3C3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3380u;
        // 0x3c3384: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3388u;
        goto label_3c3388;
    }
    ctx->pc = 0x3C3380u;
    SET_GPR_U32(ctx, 31, 0x3C3388u);
    ctx->pc = 0x3C3384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3380u;
    // 0x3c3384: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3C3380u, 0x3C3388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3388u;
label_3c3388:
    // 0x3c3388: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3c3388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3c338c:
    // 0x3c338c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c338cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c3390:
    // 0x3c3390: 0x3c02bec7  lui         $v0, 0xBEC7
    ctx->pc = 0x3c3390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48839 << 16));
label_3c3394:
    // 0x3c3394: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3c3394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c3398:
    // 0x3c3398: 0x3442ce80  ori         $v0, $v0, 0xCE80
    ctx->pc = 0x3c3398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52864);
label_3c339c:
    // 0x3c339c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x3c339cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_3c33a0:
    // 0x3c33a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c33a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c33a4:
    // 0x3c33a4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3c33a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3c33a8:
    // 0x3c33a8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3c33a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c33ac:
    // 0x3c33ac: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3c33acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c33b0:
    // 0x3c33b0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3c33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_3c33b4:
    // 0x3c33b4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3c33b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3c33b8:
    // 0x3c33b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c33b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c33bc:
    // 0x3c33bc: 0xc0e9fd0  jal         func_3A7F40
label_3c33c0:
    if (ctx->pc == 0x3C33C0u) {
        ctx->pc = 0x3C33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33BCu;
        // 0x3c33c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C33C4u;
        goto label_3c33c4;
    }
    ctx->pc = 0x3C33BCu;
    SET_GPR_U32(ctx, 31, 0x3C33C4u);
    ctx->pc = 0x3C33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C33BCu;
    // 0x3c33c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C33BCu, 0x3C33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C33C4u;
label_3c33c4:
    // 0x3c33c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c33c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c33c8:
    // 0x3c33c8: 0xc0f15bc  jal         func_3C56F0
label_3c33cc:
    if (ctx->pc == 0x3C33CCu) {
        ctx->pc = 0x3C33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33C8u;
        // 0x3c33cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C33D0u;
        goto label_3c33d0;
    }
    ctx->pc = 0x3C33C8u;
    SET_GPR_U32(ctx, 31, 0x3C33D0u);
    ctx->pc = 0x3C33CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C33C8u;
    // 0x3c33cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C33C8u, 0x3C33D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C33D0u;
label_3c33d0:
    // 0x3c33d0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3c33d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3c33d4:
    // 0x3c33d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c33d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c33d8:
    // 0x3c33d8: 0x3c02d5df  lui         $v0, 0xD5DF
    ctx->pc = 0x3c33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54751 << 16));
label_3c33dc:
    // 0x3c33dc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c33dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c33e0:
    // 0x3c33e0: 0x3442e6ff  ori         $v0, $v0, 0xE6FF
    ctx->pc = 0x3c33e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59135);
label_3c33e4:
    // 0x3c33e4: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x3c33e4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_3c33e8:
    // 0x3c33e8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c33e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c33ec:
    // 0x3c33ec: 0x26102ce0  addiu       $s0, $s0, 0x2CE0
    ctx->pc = 0x3c33ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11488));
label_3c33f0:
    // 0x3c33f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c33f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c33f4:
    // 0x3c33f4: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3c33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3c33f8:
    // 0x3c33f8: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3c33f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3c33fc:
    // 0x3c33fc: 0xafa20430  sw          $v0, 0x430($sp)
    ctx->pc = 0x3c33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
label_3c3400:
    // 0x3c3400: 0x27a60430  addiu       $a2, $sp, 0x430
    ctx->pc = 0x3c3400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c3404:
    // 0x3c3404: 0xe7b60440  swc1        $f22, 0x440($sp)
    ctx->pc = 0x3c3404u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3c3408:
    // 0x3c3408: 0xc0e9fa6  jal         func_3A7E98
label_3c340c:
    if (ctx->pc == 0x3C340Cu) {
        ctx->pc = 0x3C340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3408u;
        // 0x3c340c: 0x27a70440  addiu       $a3, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3410u;
        goto label_3c3410;
    }
    ctx->pc = 0x3C3408u;
    SET_GPR_U32(ctx, 31, 0x3C3410u);
    ctx->pc = 0x3C340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3408u;
    // 0x3c340c: 0x27a70440  addiu       $a3, $sp, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3C3408u, 0x3C3410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3410u;
label_3c3410:
    // 0x3c3410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3414:
    // 0x3c3414: 0xc0f15bc  jal         func_3C56F0
label_3c3418:
    if (ctx->pc == 0x3C3418u) {
        ctx->pc = 0x3C3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3414u;
        // 0x3c3418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C341Cu;
        goto label_3c341c;
    }
    ctx->pc = 0x3C3414u;
    SET_GPR_U32(ctx, 31, 0x3C341Cu);
    ctx->pc = 0x3C3418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3414u;
    // 0x3c3418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C3414u, 0x3C341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C341Cu;
label_3c341c:
    // 0x3c341c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c341cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3420:
    // 0x3c3420: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x3c3420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3c3424:
    // 0x3c3424: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x3c3424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3c3428:
    // 0x3c3428: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x3c3428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c342c:
    // 0x3c342c: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x3c342cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c3430:
    // 0x3c3430: 0xc7b604c0  lwc1        $f22, 0x4C0($sp)
    ctx->pc = 0x3c3430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c3434:
    // 0x3c3434: 0xc7b504b8  lwc1        $f21, 0x4B8($sp)
    ctx->pc = 0x3c3434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c3438:
    // 0x3c3438: 0xc7b404b0  lwc1        $f20, 0x4B0($sp)
    ctx->pc = 0x3c3438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c343c:
    // 0x3c343c: 0x3e00008  jr          $ra
label_3c3440:
    if (ctx->pc == 0x3C3440u) {
        ctx->pc = 0x3C3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C343Cu;
        // 0x3c3440: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3444u;
        goto label_3c3444;
    }
    ctx->pc = 0x3C343Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C343Cu;
        // 0x3c3440: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C343Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3444u;
label_3c3444:
    // 0x3c3444: 0x0  nop
    ctx->pc = 0x3c3444u;
    // NOP
    ctx->pc = 0x3c3448u;
}
