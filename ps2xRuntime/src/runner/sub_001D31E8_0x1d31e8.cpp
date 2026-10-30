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

// Function: sub_001D31E8
// Address: 0x1d31e8 - 0x1d34b0
void sub_001D31E8_0x1d31e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D31E8_0x1d31e8");
#endif

    switch (ctx->pc) {
        case 0x1d31e8u: goto label_1d31e8;
        case 0x1d31ecu: goto label_1d31ec;
        case 0x1d31f0u: goto label_1d31f0;
        case 0x1d31f4u: goto label_1d31f4;
        case 0x1d31f8u: goto label_1d31f8;
        case 0x1d31fcu: goto label_1d31fc;
        case 0x1d3200u: goto label_1d3200;
        case 0x1d3204u: goto label_1d3204;
        case 0x1d3208u: goto label_1d3208;
        case 0x1d320cu: goto label_1d320c;
        case 0x1d3210u: goto label_1d3210;
        case 0x1d3214u: goto label_1d3214;
        case 0x1d3218u: goto label_1d3218;
        case 0x1d321cu: goto label_1d321c;
        case 0x1d3220u: goto label_1d3220;
        case 0x1d3224u: goto label_1d3224;
        case 0x1d3228u: goto label_1d3228;
        case 0x1d322cu: goto label_1d322c;
        case 0x1d3230u: goto label_1d3230;
        case 0x1d3234u: goto label_1d3234;
        case 0x1d3238u: goto label_1d3238;
        case 0x1d323cu: goto label_1d323c;
        case 0x1d3240u: goto label_1d3240;
        case 0x1d3244u: goto label_1d3244;
        case 0x1d3248u: goto label_1d3248;
        case 0x1d324cu: goto label_1d324c;
        case 0x1d3250u: goto label_1d3250;
        case 0x1d3254u: goto label_1d3254;
        case 0x1d3258u: goto label_1d3258;
        case 0x1d325cu: goto label_1d325c;
        case 0x1d3260u: goto label_1d3260;
        case 0x1d3264u: goto label_1d3264;
        case 0x1d3268u: goto label_1d3268;
        case 0x1d326cu: goto label_1d326c;
        case 0x1d3270u: goto label_1d3270;
        case 0x1d3274u: goto label_1d3274;
        case 0x1d3278u: goto label_1d3278;
        case 0x1d327cu: goto label_1d327c;
        case 0x1d3280u: goto label_1d3280;
        case 0x1d3284u: goto label_1d3284;
        case 0x1d3288u: goto label_1d3288;
        case 0x1d328cu: goto label_1d328c;
        case 0x1d3290u: goto label_1d3290;
        case 0x1d3294u: goto label_1d3294;
        case 0x1d3298u: goto label_1d3298;
        case 0x1d329cu: goto label_1d329c;
        case 0x1d32a0u: goto label_1d32a0;
        case 0x1d32a4u: goto label_1d32a4;
        case 0x1d32a8u: goto label_1d32a8;
        case 0x1d32acu: goto label_1d32ac;
        case 0x1d32b0u: goto label_1d32b0;
        case 0x1d32b4u: goto label_1d32b4;
        case 0x1d32b8u: goto label_1d32b8;
        case 0x1d32bcu: goto label_1d32bc;
        case 0x1d32c0u: goto label_1d32c0;
        case 0x1d32c4u: goto label_1d32c4;
        case 0x1d32c8u: goto label_1d32c8;
        case 0x1d32ccu: goto label_1d32cc;
        case 0x1d32d0u: goto label_1d32d0;
        case 0x1d32d4u: goto label_1d32d4;
        case 0x1d32d8u: goto label_1d32d8;
        case 0x1d32dcu: goto label_1d32dc;
        case 0x1d32e0u: goto label_1d32e0;
        case 0x1d32e4u: goto label_1d32e4;
        case 0x1d32e8u: goto label_1d32e8;
        case 0x1d32ecu: goto label_1d32ec;
        case 0x1d32f0u: goto label_1d32f0;
        case 0x1d32f4u: goto label_1d32f4;
        case 0x1d32f8u: goto label_1d32f8;
        case 0x1d32fcu: goto label_1d32fc;
        case 0x1d3300u: goto label_1d3300;
        case 0x1d3304u: goto label_1d3304;
        case 0x1d3308u: goto label_1d3308;
        case 0x1d330cu: goto label_1d330c;
        case 0x1d3310u: goto label_1d3310;
        case 0x1d3314u: goto label_1d3314;
        case 0x1d3318u: goto label_1d3318;
        case 0x1d331cu: goto label_1d331c;
        case 0x1d3320u: goto label_1d3320;
        case 0x1d3324u: goto label_1d3324;
        case 0x1d3328u: goto label_1d3328;
        case 0x1d332cu: goto label_1d332c;
        case 0x1d3330u: goto label_1d3330;
        case 0x1d3334u: goto label_1d3334;
        case 0x1d3338u: goto label_1d3338;
        case 0x1d333cu: goto label_1d333c;
        case 0x1d3340u: goto label_1d3340;
        case 0x1d3344u: goto label_1d3344;
        case 0x1d3348u: goto label_1d3348;
        case 0x1d334cu: goto label_1d334c;
        case 0x1d3350u: goto label_1d3350;
        case 0x1d3354u: goto label_1d3354;
        case 0x1d3358u: goto label_1d3358;
        case 0x1d335cu: goto label_1d335c;
        case 0x1d3360u: goto label_1d3360;
        case 0x1d3364u: goto label_1d3364;
        case 0x1d3368u: goto label_1d3368;
        case 0x1d336cu: goto label_1d336c;
        case 0x1d3370u: goto label_1d3370;
        case 0x1d3374u: goto label_1d3374;
        case 0x1d3378u: goto label_1d3378;
        case 0x1d337cu: goto label_1d337c;
        case 0x1d3380u: goto label_1d3380;
        case 0x1d3384u: goto label_1d3384;
        case 0x1d3388u: goto label_1d3388;
        case 0x1d338cu: goto label_1d338c;
        case 0x1d3390u: goto label_1d3390;
        case 0x1d3394u: goto label_1d3394;
        case 0x1d3398u: goto label_1d3398;
        case 0x1d339cu: goto label_1d339c;
        case 0x1d33a0u: goto label_1d33a0;
        case 0x1d33a4u: goto label_1d33a4;
        case 0x1d33a8u: goto label_1d33a8;
        case 0x1d33acu: goto label_1d33ac;
        case 0x1d33b0u: goto label_1d33b0;
        case 0x1d33b4u: goto label_1d33b4;
        case 0x1d33b8u: goto label_1d33b8;
        case 0x1d33bcu: goto label_1d33bc;
        case 0x1d33c0u: goto label_1d33c0;
        case 0x1d33c4u: goto label_1d33c4;
        case 0x1d33c8u: goto label_1d33c8;
        case 0x1d33ccu: goto label_1d33cc;
        case 0x1d33d0u: goto label_1d33d0;
        case 0x1d33d4u: goto label_1d33d4;
        case 0x1d33d8u: goto label_1d33d8;
        case 0x1d33dcu: goto label_1d33dc;
        case 0x1d33e0u: goto label_1d33e0;
        case 0x1d33e4u: goto label_1d33e4;
        case 0x1d33e8u: goto label_1d33e8;
        case 0x1d33ecu: goto label_1d33ec;
        case 0x1d33f0u: goto label_1d33f0;
        case 0x1d33f4u: goto label_1d33f4;
        case 0x1d33f8u: goto label_1d33f8;
        case 0x1d33fcu: goto label_1d33fc;
        case 0x1d3400u: goto label_1d3400;
        case 0x1d3404u: goto label_1d3404;
        case 0x1d3408u: goto label_1d3408;
        case 0x1d340cu: goto label_1d340c;
        case 0x1d3410u: goto label_1d3410;
        case 0x1d3414u: goto label_1d3414;
        case 0x1d3418u: goto label_1d3418;
        case 0x1d341cu: goto label_1d341c;
        case 0x1d3420u: goto label_1d3420;
        case 0x1d3424u: goto label_1d3424;
        case 0x1d3428u: goto label_1d3428;
        case 0x1d342cu: goto label_1d342c;
        case 0x1d3430u: goto label_1d3430;
        case 0x1d3434u: goto label_1d3434;
        case 0x1d3438u: goto label_1d3438;
        case 0x1d343cu: goto label_1d343c;
        case 0x1d3440u: goto label_1d3440;
        case 0x1d3444u: goto label_1d3444;
        case 0x1d3448u: goto label_1d3448;
        case 0x1d344cu: goto label_1d344c;
        case 0x1d3450u: goto label_1d3450;
        case 0x1d3454u: goto label_1d3454;
        case 0x1d3458u: goto label_1d3458;
        case 0x1d345cu: goto label_1d345c;
        case 0x1d3460u: goto label_1d3460;
        case 0x1d3464u: goto label_1d3464;
        case 0x1d3468u: goto label_1d3468;
        case 0x1d346cu: goto label_1d346c;
        case 0x1d3470u: goto label_1d3470;
        case 0x1d3474u: goto label_1d3474;
        case 0x1d3478u: goto label_1d3478;
        case 0x1d347cu: goto label_1d347c;
        case 0x1d3480u: goto label_1d3480;
        case 0x1d3484u: goto label_1d3484;
        case 0x1d3488u: goto label_1d3488;
        case 0x1d348cu: goto label_1d348c;
        case 0x1d3490u: goto label_1d3490;
        case 0x1d3494u: goto label_1d3494;
        case 0x1d3498u: goto label_1d3498;
        case 0x1d349cu: goto label_1d349c;
        case 0x1d34a0u: goto label_1d34a0;
        case 0x1d34a4u: goto label_1d34a4;
        case 0x1d34a8u: goto label_1d34a8;
        case 0x1d34acu: goto label_1d34ac;
        default: break;
    }

    ctx->pc = 0x1d31e8u;

label_1d31e8:
    // 0x1d31e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d31e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1d31ec:
    // 0x1d31ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d31f0:
    // 0x1d31f0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1d31f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1d31f4:
    // 0x1d31f4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1d31f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d31f8:
    // 0x1d31f8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1d31f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1d31fc:
    // 0x1d31fc: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x1d31fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d3200:
    // 0x1d3200: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1d3200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1d3204:
    // 0x1d3204: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d3204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3208:
    // 0x1d3208: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1d3208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1d320c:
    // 0x1d320c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d3210:
    // 0x1d3210: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1d3210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1d3214:
    // 0x1d3214: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1d3214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1d3218:
    // 0x1d3218: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1d3218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1d321c:
    // 0x1d321c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1d3220:
    // 0x1d3220: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d3220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1d3224:
    // 0x1d3224: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d3224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d3228:
    // 0x1d3228: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d3228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1d322c:
    // 0x1d322c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d3230:
    if (ctx->pc == 0x1D3230u) {
        ctx->pc = 0x1D3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D322Cu;
        // 0x1d3230: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3234u;
        goto label_1d3234;
    }
    ctx->pc = 0x1D322Cu;
    {
        const bool branch_taken_0x1d322c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D322Cu;
        // 0x1d3230: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d322c) {
            ctx->pc = 0x1D3260u;
            goto label_1d3260;
        }
    }
    ctx->pc = 0x1D3234u;
label_1d3234:
    // 0x1d3234: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1d3234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1d3238:
    // 0x1d3238: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x1d3238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
label_1d323c:
    // 0x1d323c: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1d323cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_1d3240:
    // 0x1d3240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d3240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3244:
    // 0x1d3244: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1d3248:
    if (ctx->pc == 0x1D3248u) {
        ctx->pc = 0x1D3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3244u;
        // 0x1d3248: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D324Cu;
        goto label_1d324c;
    }
    ctx->pc = 0x1D3244u;
    {
        const bool branch_taken_0x1d3244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3244u;
        // 0x1d3248: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3244) {
            ctx->pc = 0x1D3290u;
            goto label_1d3290;
        }
    }
    ctx->pc = 0x1D324Cu;
label_1d324c:
    // 0x1d324c: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1d324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
label_1d3250:
    // 0x1d3250: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1d3250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1d3254:
    // 0x1d3254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d3254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3258:
    // 0x1d3258: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d325c:
    if (ctx->pc == 0x1D325Cu) {
        ctx->pc = 0x1D325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3258u;
        // 0x1d325c: 0xe440ecd4  swc1        $f0, -0x132C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962388), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3260u;
        goto label_1d3260;
    }
    ctx->pc = 0x1D3258u;
    {
        const bool branch_taken_0x1d3258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3258u;
        // 0x1d325c: 0xe440ecd4  swc1        $f0, -0x132C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3258) {
            ctx->pc = 0x1D3298u;
            goto label_1d3298;
        }
    }
    ctx->pc = 0x1D3260u;
label_1d3260:
    // 0x1d3260: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d3260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1d3264:
    // 0x1d3264: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1d3268:
    if (ctx->pc == 0x1D3268u) {
        ctx->pc = 0x1D3268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3264u;
        // 0x1d3268: 0xae600060  sw          $zero, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D326Cu;
        goto label_1d326c;
    }
    ctx->pc = 0x1D3264u;
    {
        const bool branch_taken_0x1d3264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3264) {
            ctx->pc = 0x1D3268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3264u;
            // 0x1d3268: 0xae600060  sw          $zero, 0x60($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D329Cu;
            goto label_1d329c;
        }
    }
    ctx->pc = 0x1D326Cu;
label_1d326c:
    // 0x1d326c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1d326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1d3270:
    // 0x1d3270: 0x3c013f3e  lui         $at, 0x3F3E
    ctx->pc = 0x1d3270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16190 << 16));
label_1d3274:
    // 0x1d3274: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1d3274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1d3278:
    // 0x1d3278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d3278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d327c:
    // 0x1d327c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d3280:
    if (ctx->pc == 0x1D3280u) {
        ctx->pc = 0x1D3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D327Cu;
        // 0x1d3280: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3284u;
        goto label_1d3284;
    }
    ctx->pc = 0x1D327Cu;
    {
        const bool branch_taken_0x1d327c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D327Cu;
        // 0x1d3280: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d327c) {
            ctx->pc = 0x1D3290u;
            goto label_1d3290;
        }
    }
    ctx->pc = 0x1D3284u;
label_1d3284:
    // 0x1d3284: 0x3c013f41  lui         $at, 0x3F41
    ctx->pc = 0x1d3284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16193 << 16));
label_1d3288:
    // 0x1d3288: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1d3288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1d328c:
    // 0x1d328c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d328cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3290:
    // 0x1d3290: 0x0  nop
    ctx->pc = 0x1d3290u;
    // NOP
label_1d3294:
    // 0x1d3294: 0xe440ecd4  swc1        $f0, -0x132C($v0)
    ctx->pc = 0x1d3294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962388), bits); }
label_1d3298:
    // 0x1d3298: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x1d3298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_1d329c:
    // 0x1d329c: 0x26720830  addiu       $s2, $s3, 0x830
    ctx->pc = 0x1d329cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
label_1d32a0:
    // 0x1d32a0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d32a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1d32a4:
    // 0x1d32a4: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x1d32a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d32a8:
    // 0x1d32a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d32a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d32ac:
    // 0x1d32ac: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x1d32acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1d32b0:
    // 0x1d32b0: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x1d32b0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
label_1d32b4:
    // 0x1d32b4: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x1d32b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_1d32b8:
    // 0x1d32b8: 0xae6c0170  sw          $t4, 0x170($s3)
    ctx->pc = 0x1d32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 12));
label_1d32bc:
    // 0x1d32bc: 0xae680064  sw          $t0, 0x64($s3)
    ctx->pc = 0x1d32bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 8));
label_1d32c0:
    // 0x1d32c0: 0xc074bc4  jal         func_1D2F10
label_1d32c4:
    if (ctx->pc == 0x1D32C4u) {
        ctx->pc = 0x1D32C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32C0u;
        // 0x1d32c4: 0x7e620030  sq          $v0, 0x30($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D32C8u;
        goto label_1d32c8;
    }
    ctx->pc = 0x1D32C0u;
    SET_GPR_U32(ctx, 31, 0x1D32C8u);
    ctx->pc = 0x1D32C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D32C0u;
    // 0x1d32c4: 0x7e620030  sq          $v0, 0x30($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2F10u, 0x1D32C0u, 0x1D32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32C8u;
label_1d32c8:
    // 0x1d32c8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1d32c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1d32cc:
    // 0x1d32cc: 0x26640280  addiu       $a0, $s3, 0x280
    ctx->pc = 0x1d32ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
label_1d32d0:
    // 0x1d32d0: 0xc068992  jal         func_1A2648
label_1d32d4:
    if (ctx->pc == 0x1D32D4u) {
        ctx->pc = 0x1D32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32D0u;
        // 0x1d32d4: 0x24a5d328  addiu       $a1, $a1, -0x2CD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D32D8u;
        goto label_1d32d8;
    }
    ctx->pc = 0x1D32D0u;
    SET_GPR_U32(ctx, 31, 0x1D32D8u);
    ctx->pc = 0x1D32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D32D0u;
    // 0x1d32d4: 0x24a5d328  addiu       $a1, $a1, -0x2CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1D32D0u, 0x1D32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32D8u;
label_1d32d8:
    // 0x1d32d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d32dc:
    // 0x1d32dc: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1d32dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1d32e0:
    // 0x1d32e0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1d32e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1d32e4:
    // 0x1d32e4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1d32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1d32e8:
    // 0x1d32e8: 0x60f809  jalr        $v1
label_1d32ec:
    if (ctx->pc == 0x1D32ECu) {
        ctx->pc = 0x1D32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32E8u;
        // 0x1d32ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D32F0u;
        goto label_1d32f0;
    }
    ctx->pc = 0x1D32E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D32F0u);
        ctx->pc = 0x1D32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32E8u;
        // 0x1d32ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D32E8u, 0x1D32F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D32F0u;
label_1d32f0:
    // 0x1d32f0: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x1d32f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1d32f4:
    // 0x1d32f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d32f8:
    // 0x1d32f8: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x1d32f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1d32fc:
    // 0x1d32fc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1d32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1d3300:
    // 0x1d3300: 0x27aa0068  addiu       $t2, $sp, 0x68
    ctx->pc = 0x1d3300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1d3304:
    // 0x1d3304: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d3304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1d3308:
    // 0x1d3308: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x1d3308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1d330c:
    // 0x1d330c: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x1d330cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1d3310:
    // 0x1d3310: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1d3314:
    // 0x1d3314: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1d3314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d3318:
    // 0x1d3318: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d3318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d331c:
    // 0x1d331c: 0x27ab0064  addiu       $t3, $sp, 0x64
    ctx->pc = 0x1d331cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1d3320:
    // 0x1d3320: 0x8c6514d8  lw          $a1, 0x14D8($v1)
    ctx->pc = 0x1d3320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5336)));
label_1d3324:
    // 0x1d3324: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1d3324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_1d3328:
    // 0x1d3328: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x1d3328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_1d332c:
    // 0x1d332c: 0xc1090a6  jal         func_424298
label_1d3330:
    if (ctx->pc == 0x1D3330u) {
        ctx->pc = 0x1D3330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D332Cu;
        // 0x1d3330: 0x27aa0060  addiu       $t2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3334u;
        goto label_1d3334;
    }
    ctx->pc = 0x1D332Cu;
    SET_GPR_U32(ctx, 31, 0x1D3334u);
    ctx->pc = 0x1D3330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D332Cu;
    // 0x1d3330: 0x27aa0060  addiu       $t2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424298u, 0x1D332Cu, 0x1D3334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3334u;
label_1d3334:
    // 0x1d3334: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1d3334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1d3338:
    // 0x1d3338: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1d3338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1d333c:
    // 0x1d333c: 0x24475de8  addiu       $a3, $v0, 0x5DE8
    ctx->pc = 0x1d333cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24040));
label_1d3340:
    // 0x1d3340: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1d3340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1d3344:
    // 0x1d3344: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1d3344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1d3348:
    // 0x1d3348: 0x80e50008  lb          $a1, 0x8($a3)
    ctx->pc = 0x1d3348u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_1d334c:
    // 0x1d334c: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x1d334cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d3350:
    // 0x1d3350: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x1d3350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d3354:
    // 0x1d3354: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x1d3354u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
label_1d3358:
    // 0x1d3358: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1d3358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d335c:
    // 0x1d335c: 0x24645df8  addiu       $a0, $v1, 0x5DF8
    ctx->pc = 0x1d335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24056));
label_1d3360:
    // 0x1d3360: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x1d3360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1d3364:
    // 0x1d3364: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x1d3364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1d3368:
    // 0x1d3368: 0x80890008  lb          $t1, 0x8($a0)
    ctx->pc = 0x1d3368u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_1d336c:
    // 0x1d336c: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x1d336cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d3370:
    // 0x1d3370: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x1d3370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d3374:
    // 0x1d3374: 0xa3a90028  sb          $t1, 0x28($sp)
    ctx->pc = 0x1d3374u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 9));
label_1d3378:
    // 0x1d3378: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x1d3378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
label_1d337c:
    // 0x1d337c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1d337cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1d3380:
    // 0x1d3380: 0x24e35e08  addiu       $v1, $a3, 0x5E08
    ctx->pc = 0x1d3380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24072));
label_1d3384:
    // 0x1d3384: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x1d3384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1d3388:
    // 0x1d3388: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x1d3388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1d338c:
    // 0x1d338c: 0x80690008  lb          $t1, 0x8($v1)
    ctx->pc = 0x1d338cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_1d3390:
    // 0x1d3390: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x1d3390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d3394:
    // 0x1d3394: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x1d3394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d3398:
    // 0x1d3398: 0xa3a90038  sb          $t1, 0x38($sp)
    ctx->pc = 0x1d3398u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 9));
label_1d339c:
    // 0x1d339c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1d339cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d33a0:
    // 0x1d33a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d33a4:
    // 0x1d33a4: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x1d33a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d33a8:
    // 0x1d33a8: 0x24a5e490  addiu       $a1, $a1, -0x1B70
    ctx->pc = 0x1d33a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960272));
label_1d33ac:
    // 0x1d33ac: 0xc108c14  jal         func_423050
label_1d33b0:
    if (ctx->pc == 0x1D33B0u) {
        ctx->pc = 0x1D33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33ACu;
        // 0x1d33b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D33B4u;
        goto label_1d33b4;
    }
    ctx->pc = 0x1D33ACu;
    SET_GPR_U32(ctx, 31, 0x1D33B4u);
    ctx->pc = 0x1D33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D33ACu;
    // 0x1d33b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423050u, 0x1D33ACu, 0x1D33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33B4u;
label_1d33b4:
    // 0x1d33b4: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1d33b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1d33b8:
    // 0x1d33b8: 0x2404006d  addiu       $a0, $zero, 0x6D
    ctx->pc = 0x1d33b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_1d33bc:
    // 0x1d33bc: 0xc067b9c  jal         func_19EE70
label_1d33c0:
    if (ctx->pc == 0x1D33C0u) {
        ctx->pc = 0x1D33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33BCu;
        // 0x1d33c0: 0x26105e18  addiu       $s0, $s0, 0x5E18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D33C4u;
        goto label_1d33c4;
    }
    ctx->pc = 0x1D33BCu;
    SET_GPR_U32(ctx, 31, 0x1D33C4u);
    ctx->pc = 0x1D33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D33BCu;
    // 0x1d33c0: 0x26105e18  addiu       $s0, $s0, 0x5E18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D33BCu, 0x1D33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33C4u;
label_1d33c4:
    // 0x1d33c4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1d33c8:
    // 0x1d33c8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1d33c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d33cc:
    // 0x1d33cc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d33ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d33d0:
    // 0x1d33d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d33d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d33d4:
    // 0x1d33d4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1d33d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d33d8:
    // 0x1d33d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d33d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d33dc:
    // 0x1d33dc: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x1d33dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1d33e0:
    // 0x1d33e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d33e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d33e4:
    // 0x1d33e4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1d33e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1d33e8:
    // 0x1d33e8: 0xc10ca04  jal         func_432810
label_1d33ec:
    if (ctx->pc == 0x1D33ECu) {
        ctx->pc = 0x1D33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33E8u;
        // 0x1d33ec: 0x283400a  movz        $t0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D33F0u;
        goto label_1d33f0;
    }
    ctx->pc = 0x1D33E8u;
    SET_GPR_U32(ctx, 31, 0x1D33F0u);
    ctx->pc = 0x1D33ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D33E8u;
    // 0x1d33ec: 0x283400a  movz        $t0, $s4, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1D33E8u, 0x1D33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33F0u;
label_1d33f0:
    // 0x1d33f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d33f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d33f4:
    // 0x1d33f4: 0xc06ec94  jal         func_1BB250
label_1d33f8:
    if (ctx->pc == 0x1D33F8u) {
        ctx->pc = 0x1D33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33F4u;
        // 0x1d33f8: 0x26640450  addiu       $a0, $s3, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D33FCu;
        goto label_1d33fc;
    }
    ctx->pc = 0x1D33F4u;
    SET_GPR_U32(ctx, 31, 0x1D33FCu);
    ctx->pc = 0x1D33F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D33F4u;
    // 0x1d33f8: 0x26640450  addiu       $a0, $s3, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D33F4u, 0x1D33FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33FCu;
label_1d33fc:
    // 0x1d33fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1d33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1d3400:
    // 0x1d3400: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1d3404:
    if (ctx->pc == 0x1D3404u) {
        ctx->pc = 0x1D3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3400u;
        // 0x1d3404: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3408u;
        goto label_1d3408;
    }
    ctx->pc = 0x1D3400u;
    {
        const bool branch_taken_0x1d3400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3400u;
        // 0x1d3404: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3400) {
            ctx->pc = 0x1D3458u;
            goto label_1d3458;
        }
    }
    ctx->pc = 0x1D3408u;
label_1d3408:
    // 0x1d3408: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1d3408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1d340c:
    // 0x1d340c: 0x26105e38  addiu       $s0, $s0, 0x5E38
    ctx->pc = 0x1d340cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24120));
label_1d3410:
    // 0x1d3410: 0xc067b9c  jal         func_19EE70
label_1d3414:
    if (ctx->pc == 0x1D3414u) {
        ctx->pc = 0x1D3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3410u;
        // 0x1d3414: 0x2671086c  addiu       $s1, $s3, 0x86C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3418u;
        goto label_1d3418;
    }
    ctx->pc = 0x1D3410u;
    SET_GPR_U32(ctx, 31, 0x1D3418u);
    ctx->pc = 0x1D3414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3410u;
    // 0x1d3414: 0x2671086c  addiu       $s1, $s3, 0x86C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1D3410u, 0x1D3418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3418u;
label_1d3418:
    // 0x1d3418: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x1d3418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1d341c:
    // 0x1d341c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1d341cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d3420:
    // 0x1d3420: 0x8faa0068  lw          $t2, 0x68($sp)
    ctx->pc = 0x1d3420u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1d3424:
    // 0x1d3424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3428:
    // 0x1d3428: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1d3428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d342c:
    // 0x1d342c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1d342cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1d3430:
    // 0x1d3430: 0x6a1826  xor         $v1, $v1, $t2
    ctx->pc = 0x1d3430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 10));
label_1d3434:
    // 0x1d3434: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d3434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3438:
    // 0x1d3438: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d3438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d343c:
    // 0x1d343c: 0xc10ca04  jal         func_432810
label_1d3440:
    if (ctx->pc == 0x1D3440u) {
        ctx->pc = 0x1D3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D343Cu;
        // 0x1d3440: 0x2a3400b  movn        $t0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3444u;
        goto label_1d3444;
    }
    ctx->pc = 0x1D343Cu;
    SET_GPR_U32(ctx, 31, 0x1D3444u);
    ctx->pc = 0x1D3440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D343Cu;
    // 0x1d3440: 0x2a3400b  movn        $t0, $s5, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1D343Cu, 0x1D3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3444u;
label_1d3444:
    // 0x1d3444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d3448:
    // 0x1d3448: 0xc06ec94  jal         func_1BB250
label_1d344c:
    if (ctx->pc == 0x1D344Cu) {
        ctx->pc = 0x1D344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3448u;
        // 0x1d344c: 0x26640640  addiu       $a0, $s3, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3450u;
        goto label_1d3450;
    }
    ctx->pc = 0x1D3448u;
    SET_GPR_U32(ctx, 31, 0x1D3450u);
    ctx->pc = 0x1D344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3448u;
    // 0x1d344c: 0x26640640  addiu       $a0, $s3, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D3448u, 0x1D3450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3450u;
label_1d3450:
    // 0x1d3450: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d3454:
    if (ctx->pc == 0x1D3454u) {
        ctx->pc = 0x1D3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3450u;
        // 0x1d3454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3458u;
        goto label_1d3458;
    }
    ctx->pc = 0x1D3450u;
    {
        const bool branch_taken_0x1d3450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3450u;
        // 0x1d3454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3450) {
            ctx->pc = 0x1D3480u;
            goto label_1d3480;
        }
    }
    ctx->pc = 0x1D3458u;
label_1d3458:
    // 0x1d3458: 0x2670086c  addiu       $s0, $s3, 0x86C
    ctx->pc = 0x1d3458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2156));
label_1d345c:
    // 0x1d345c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1d345cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1d3460:
    // 0x1d3460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3464:
    // 0x1d3464: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1d3464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1d3468:
    // 0x1d3468: 0xc10ca04  jal         func_432810
label_1d346c:
    if (ctx->pc == 0x1D346Cu) {
        ctx->pc = 0x1D346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3468u;
        // 0x1d346c: 0x24c65e60  addiu       $a2, $a2, 0x5E60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3470u;
        goto label_1d3470;
    }
    ctx->pc = 0x1D3468u;
    SET_GPR_U32(ctx, 31, 0x1D3470u);
    ctx->pc = 0x1D346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3468u;
    // 0x1d346c: 0x24c65e60  addiu       $a2, $a2, 0x5E60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1D3468u, 0x1D3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3470u;
label_1d3470:
    // 0x1d3470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3474:
    // 0x1d3474: 0xc06ec94  jal         func_1BB250
label_1d3478:
    if (ctx->pc == 0x1D3478u) {
        ctx->pc = 0x1D3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3474u;
        // 0x1d3478: 0x26640640  addiu       $a0, $s3, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D347Cu;
        goto label_1d347c;
    }
    ctx->pc = 0x1D3474u;
    SET_GPR_U32(ctx, 31, 0x1D347Cu);
    ctx->pc = 0x1D3478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3474u;
    // 0x1d3478: 0x26640640  addiu       $a0, $s3, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1D3474u, 0x1D347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D347Cu;
label_1d347c:
    // 0x1d347c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3480:
    // 0x1d3480: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1d3480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1d3484:
    // 0x1d3484: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1d3484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_1d3488:
    // 0x1d3488: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1d3488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1d348c:
    // 0x1d348c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1d348cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d3490:
    // 0x1d3490: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1d3490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d3494:
    // 0x1d3494: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1d3494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d3498:
    // 0x1d3498: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1d3498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d349c:
    // 0x1d349c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d349cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d34a0:
    // 0x1d34a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d34a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1d34a4:
    // 0x1d34a4: 0x3e00008  jr          $ra
label_1d34a8:
    if (ctx->pc == 0x1D34A8u) {
        ctx->pc = 0x1D34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34A4u;
        // 0x1d34a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D34ACu;
        goto label_1d34ac;
    }
    ctx->pc = 0x1D34A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34A4u;
        // 0x1d34a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34ACu;
label_1d34ac:
    // 0x1d34ac: 0x0  nop
    ctx->pc = 0x1d34acu;
    // NOP
    ctx->pc = 0x1d34b0u;
}
