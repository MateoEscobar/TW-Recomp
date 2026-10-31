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

// Function: sub_003D31A0
// Address: 0x3d31a0 - 0x3d3458
void sub_003D31A0_0x3d31a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D31A0_0x3d31a0");
#endif

    switch (ctx->pc) {
        case 0x3d31a0u: goto label_3d31a0;
        case 0x3d31a4u: goto label_3d31a4;
        case 0x3d31a8u: goto label_3d31a8;
        case 0x3d31acu: goto label_3d31ac;
        case 0x3d31b0u: goto label_3d31b0;
        case 0x3d31b4u: goto label_3d31b4;
        case 0x3d31b8u: goto label_3d31b8;
        case 0x3d31bcu: goto label_3d31bc;
        case 0x3d31c0u: goto label_3d31c0;
        case 0x3d31c4u: goto label_3d31c4;
        case 0x3d31c8u: goto label_3d31c8;
        case 0x3d31ccu: goto label_3d31cc;
        case 0x3d31d0u: goto label_3d31d0;
        case 0x3d31d4u: goto label_3d31d4;
        case 0x3d31d8u: goto label_3d31d8;
        case 0x3d31dcu: goto label_3d31dc;
        case 0x3d31e0u: goto label_3d31e0;
        case 0x3d31e4u: goto label_3d31e4;
        case 0x3d31e8u: goto label_3d31e8;
        case 0x3d31ecu: goto label_3d31ec;
        case 0x3d31f0u: goto label_3d31f0;
        case 0x3d31f4u: goto label_3d31f4;
        case 0x3d31f8u: goto label_3d31f8;
        case 0x3d31fcu: goto label_3d31fc;
        case 0x3d3200u: goto label_3d3200;
        case 0x3d3204u: goto label_3d3204;
        case 0x3d3208u: goto label_3d3208;
        case 0x3d320cu: goto label_3d320c;
        case 0x3d3210u: goto label_3d3210;
        case 0x3d3214u: goto label_3d3214;
        case 0x3d3218u: goto label_3d3218;
        case 0x3d321cu: goto label_3d321c;
        case 0x3d3220u: goto label_3d3220;
        case 0x3d3224u: goto label_3d3224;
        case 0x3d3228u: goto label_3d3228;
        case 0x3d322cu: goto label_3d322c;
        case 0x3d3230u: goto label_3d3230;
        case 0x3d3234u: goto label_3d3234;
        case 0x3d3238u: goto label_3d3238;
        case 0x3d323cu: goto label_3d323c;
        case 0x3d3240u: goto label_3d3240;
        case 0x3d3244u: goto label_3d3244;
        case 0x3d3248u: goto label_3d3248;
        case 0x3d324cu: goto label_3d324c;
        case 0x3d3250u: goto label_3d3250;
        case 0x3d3254u: goto label_3d3254;
        case 0x3d3258u: goto label_3d3258;
        case 0x3d325cu: goto label_3d325c;
        case 0x3d3260u: goto label_3d3260;
        case 0x3d3264u: goto label_3d3264;
        case 0x3d3268u: goto label_3d3268;
        case 0x3d326cu: goto label_3d326c;
        case 0x3d3270u: goto label_3d3270;
        case 0x3d3274u: goto label_3d3274;
        case 0x3d3278u: goto label_3d3278;
        case 0x3d327cu: goto label_3d327c;
        case 0x3d3280u: goto label_3d3280;
        case 0x3d3284u: goto label_3d3284;
        case 0x3d3288u: goto label_3d3288;
        case 0x3d328cu: goto label_3d328c;
        case 0x3d3290u: goto label_3d3290;
        case 0x3d3294u: goto label_3d3294;
        case 0x3d3298u: goto label_3d3298;
        case 0x3d329cu: goto label_3d329c;
        case 0x3d32a0u: goto label_3d32a0;
        case 0x3d32a4u: goto label_3d32a4;
        case 0x3d32a8u: goto label_3d32a8;
        case 0x3d32acu: goto label_3d32ac;
        case 0x3d32b0u: goto label_3d32b0;
        case 0x3d32b4u: goto label_3d32b4;
        case 0x3d32b8u: goto label_3d32b8;
        case 0x3d32bcu: goto label_3d32bc;
        case 0x3d32c0u: goto label_3d32c0;
        case 0x3d32c4u: goto label_3d32c4;
        case 0x3d32c8u: goto label_3d32c8;
        case 0x3d32ccu: goto label_3d32cc;
        case 0x3d32d0u: goto label_3d32d0;
        case 0x3d32d4u: goto label_3d32d4;
        case 0x3d32d8u: goto label_3d32d8;
        case 0x3d32dcu: goto label_3d32dc;
        case 0x3d32e0u: goto label_3d32e0;
        case 0x3d32e4u: goto label_3d32e4;
        case 0x3d32e8u: goto label_3d32e8;
        case 0x3d32ecu: goto label_3d32ec;
        case 0x3d32f0u: goto label_3d32f0;
        case 0x3d32f4u: goto label_3d32f4;
        case 0x3d32f8u: goto label_3d32f8;
        case 0x3d32fcu: goto label_3d32fc;
        case 0x3d3300u: goto label_3d3300;
        case 0x3d3304u: goto label_3d3304;
        case 0x3d3308u: goto label_3d3308;
        case 0x3d330cu: goto label_3d330c;
        case 0x3d3310u: goto label_3d3310;
        case 0x3d3314u: goto label_3d3314;
        case 0x3d3318u: goto label_3d3318;
        case 0x3d331cu: goto label_3d331c;
        case 0x3d3320u: goto label_3d3320;
        case 0x3d3324u: goto label_3d3324;
        case 0x3d3328u: goto label_3d3328;
        case 0x3d332cu: goto label_3d332c;
        case 0x3d3330u: goto label_3d3330;
        case 0x3d3334u: goto label_3d3334;
        case 0x3d3338u: goto label_3d3338;
        case 0x3d333cu: goto label_3d333c;
        case 0x3d3340u: goto label_3d3340;
        case 0x3d3344u: goto label_3d3344;
        case 0x3d3348u: goto label_3d3348;
        case 0x3d334cu: goto label_3d334c;
        case 0x3d3350u: goto label_3d3350;
        case 0x3d3354u: goto label_3d3354;
        case 0x3d3358u: goto label_3d3358;
        case 0x3d335cu: goto label_3d335c;
        case 0x3d3360u: goto label_3d3360;
        case 0x3d3364u: goto label_3d3364;
        case 0x3d3368u: goto label_3d3368;
        case 0x3d336cu: goto label_3d336c;
        case 0x3d3370u: goto label_3d3370;
        case 0x3d3374u: goto label_3d3374;
        case 0x3d3378u: goto label_3d3378;
        case 0x3d337cu: goto label_3d337c;
        case 0x3d3380u: goto label_3d3380;
        case 0x3d3384u: goto label_3d3384;
        case 0x3d3388u: goto label_3d3388;
        case 0x3d338cu: goto label_3d338c;
        case 0x3d3390u: goto label_3d3390;
        case 0x3d3394u: goto label_3d3394;
        case 0x3d3398u: goto label_3d3398;
        case 0x3d339cu: goto label_3d339c;
        case 0x3d33a0u: goto label_3d33a0;
        case 0x3d33a4u: goto label_3d33a4;
        case 0x3d33a8u: goto label_3d33a8;
        case 0x3d33acu: goto label_3d33ac;
        case 0x3d33b0u: goto label_3d33b0;
        case 0x3d33b4u: goto label_3d33b4;
        case 0x3d33b8u: goto label_3d33b8;
        case 0x3d33bcu: goto label_3d33bc;
        case 0x3d33c0u: goto label_3d33c0;
        case 0x3d33c4u: goto label_3d33c4;
        case 0x3d33c8u: goto label_3d33c8;
        case 0x3d33ccu: goto label_3d33cc;
        case 0x3d33d0u: goto label_3d33d0;
        case 0x3d33d4u: goto label_3d33d4;
        case 0x3d33d8u: goto label_3d33d8;
        case 0x3d33dcu: goto label_3d33dc;
        case 0x3d33e0u: goto label_3d33e0;
        case 0x3d33e4u: goto label_3d33e4;
        case 0x3d33e8u: goto label_3d33e8;
        case 0x3d33ecu: goto label_3d33ec;
        case 0x3d33f0u: goto label_3d33f0;
        case 0x3d33f4u: goto label_3d33f4;
        case 0x3d33f8u: goto label_3d33f8;
        case 0x3d33fcu: goto label_3d33fc;
        case 0x3d3400u: goto label_3d3400;
        case 0x3d3404u: goto label_3d3404;
        case 0x3d3408u: goto label_3d3408;
        case 0x3d340cu: goto label_3d340c;
        case 0x3d3410u: goto label_3d3410;
        case 0x3d3414u: goto label_3d3414;
        case 0x3d3418u: goto label_3d3418;
        case 0x3d341cu: goto label_3d341c;
        case 0x3d3420u: goto label_3d3420;
        case 0x3d3424u: goto label_3d3424;
        case 0x3d3428u: goto label_3d3428;
        case 0x3d342cu: goto label_3d342c;
        case 0x3d3430u: goto label_3d3430;
        case 0x3d3434u: goto label_3d3434;
        case 0x3d3438u: goto label_3d3438;
        case 0x3d343cu: goto label_3d343c;
        case 0x3d3440u: goto label_3d3440;
        case 0x3d3444u: goto label_3d3444;
        case 0x3d3448u: goto label_3d3448;
        case 0x3d344cu: goto label_3d344c;
        case 0x3d3450u: goto label_3d3450;
        case 0x3d3454u: goto label_3d3454;
        default: break;
    }

    ctx->pc = 0x3d31a0u;

label_3d31a0:
    // 0x3d31a0: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x3d31a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_3d31a4:
    // 0x3d31a4: 0x7fb00500  sq          $s0, 0x500($sp)
    ctx->pc = 0x3d31a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 16));
label_3d31a8:
    // 0x3d31a8: 0x7fb104f0  sq          $s1, 0x4F0($sp)
    ctx->pc = 0x3d31a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 17));
label_3d31ac:
    // 0x3d31ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d31acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d31b0:
    // 0x3d31b0: 0x7fb204e0  sq          $s2, 0x4E0($sp)
    ctx->pc = 0x3d31b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 18));
label_3d31b4:
    // 0x3d31b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d31b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d31b8:
    // 0x3d31b8: 0x7fb304d0  sq          $s3, 0x4D0($sp)
    ctx->pc = 0x3d31b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 19));
label_3d31bc:
    // 0x3d31bc: 0x7fb404c0  sq          $s4, 0x4C0($sp)
    ctx->pc = 0x3d31bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 20));
label_3d31c0:
    // 0x3d31c0: 0x7fb504b0  sq          $s5, 0x4B0($sp)
    ctx->pc = 0x3d31c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 21));
label_3d31c4:
    // 0x3d31c4: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3d31c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3d31c8:
    // 0x3d31c8: 0xe7b40510  swc1        $f20, 0x510($sp)
    ctx->pc = 0x3d31c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_3d31cc:
    // 0x3d31cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d31d0:
    // 0x3d31d0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d31d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d31d4:
    // 0x3d31d4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d31d8:
    // 0x3d31d8: 0x40f809  jalr        $v0
label_3d31dc:
    if (ctx->pc == 0x3D31DCu) {
        ctx->pc = 0x3D31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31D8u;
        // 0x3d31dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31E0u;
        goto label_3d31e0;
    }
    ctx->pc = 0x3D31D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D31E0u);
        ctx->pc = 0x3D31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31D8u;
        // 0x3d31dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D31D8u, 0x3D31E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D31E0u;
label_3d31e0:
    // 0x3d31e0: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x3d31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3d31e4:
    // 0x3d31e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d31e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d31e8:
    // 0x3d31e8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3d31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3d31ec:
    // 0x3d31ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d31ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d31f0:
    // 0x3d31f0: 0xc0e858c  jal         func_3A1630
label_3d31f4:
    if (ctx->pc == 0x3D31F4u) {
        ctx->pc = 0x3D31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31F0u;
        // 0x3d31f4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31F8u;
        goto label_3d31f8;
    }
    ctx->pc = 0x3D31F0u;
    SET_GPR_U32(ctx, 31, 0x3D31F8u);
    ctx->pc = 0x3D31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D31F0u;
    // 0x3d31f4: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D31F0u, 0x3D31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D31F8u;
label_3d31f8:
    // 0x3d31f8: 0xc0ea14c  jal         func_3A8530
label_3d31fc:
    if (ctx->pc == 0x3D31FCu) {
        ctx->pc = 0x3D31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D31F8u;
        // 0x3d31fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3200u;
        goto label_3d3200;
    }
    ctx->pc = 0x3D31F8u;
    SET_GPR_U32(ctx, 31, 0x3D3200u);
    ctx->pc = 0x3D31FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D31F8u;
    // 0x3d31fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D31F8u, 0x3D3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3200u;
label_3d3200:
    // 0x3d3200: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d3200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3204:
    // 0x3d3204: 0xc0ea12a  jal         func_3A84A8
label_3d3208:
    if (ctx->pc == 0x3D3208u) {
        ctx->pc = 0x3D3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3204u;
        // 0x3d3208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D320Cu;
        goto label_3d320c;
    }
    ctx->pc = 0x3D3204u;
    SET_GPR_U32(ctx, 31, 0x3D320Cu);
    ctx->pc = 0x3D3208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3204u;
    // 0x3d3208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3204u, 0x3D320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D320Cu;
label_3d320c:
    // 0x3d320c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d320cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3210:
    // 0x3d3210: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d3210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3214:
    // 0x3d3214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d3214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d3218:
    // 0x3d3218: 0xc0ea12a  jal         func_3A84A8
label_3d321c:
    if (ctx->pc == 0x3D321Cu) {
        ctx->pc = 0x3D321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3218u;
        // 0x3d321c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3220u;
        goto label_3d3220;
    }
    ctx->pc = 0x3D3218u;
    SET_GPR_U32(ctx, 31, 0x3D3220u);
    ctx->pc = 0x3D321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3218u;
    // 0x3d321c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D3218u, 0x3D3220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3220u;
label_3d3220:
    // 0x3d3220: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3d3220u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3224:
    // 0x3d3224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3228:
    // 0x3d3228: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d3228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d322c:
    // 0x3d322c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d322cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3230:
    // 0x3d3230: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3d3230u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3d3234:
    // 0x3d3234: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3d3234u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3d3238:
    // 0x3d3238: 0xc0e9132  jal         func_3A44C8
label_3d323c:
    if (ctx->pc == 0x3D323Cu) {
        ctx->pc = 0x3D323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3238u;
        // 0x3d323c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3240u;
        goto label_3d3240;
    }
    ctx->pc = 0x3D3238u;
    SET_GPR_U32(ctx, 31, 0x3D3240u);
    ctx->pc = 0x3D323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3238u;
    // 0x3d323c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3D3238u, 0x3D3240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3240u;
label_3d3240:
    // 0x3d3240: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3d3240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3d3244:
    // 0x3d3244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d3244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d3248:
    // 0x3d3248: 0x27b30470  addiu       $s3, $sp, 0x470
    ctx->pc = 0x3d3248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d324c:
    // 0x3d324c: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3d324cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3d3250:
    // 0x3d3250: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x3d3250u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_3d3254:
    // 0x3d3254: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x3d3254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3d3258:
    // 0x3d3258: 0x26944c98  addiu       $s4, $s4, 0x4C98
    ctx->pc = 0x3d3258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 19608));
label_3d325c:
    // 0x3d325c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d325cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d3260:
    // 0x3d3260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d3260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d3264:
    // 0x3d3264: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x3d3264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d3268:
    // 0x3d3268: 0xafa00478  sw          $zero, 0x478($sp)
    ctx->pc = 0x3d3268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 0));
label_3d326c:
    // 0x3d326c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x3d326cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3d3270:
    // 0x3d3270: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3d3270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3d3274:
    // 0x3d3274: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3d3274u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d3278:
    // 0x3d3278: 0x7ba30470  lq          $v1, 0x470($sp)
    ctx->pc = 0x3d3278u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d327c:
    // 0x3d327c: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3d327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3d3280:
    // 0x3d3280: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d3280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d3284:
    // 0x3d3284: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3d3284u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d3288:
    // 0x3d3288: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d3288u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d328c:
    // 0x3d328c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d328cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d3290:
    // 0x3d3290: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d3290u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d3294:
    // 0x3d3294: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d3294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d3298:
    // 0x3d3298: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d3298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d329c:
    // 0x3d329c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d329cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d32a0:
    // 0x3d32a0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d32a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d32a4:
    // 0x3d32a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d32a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d32a8:
    // 0x3d32a8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d32a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d32ac:
    // 0x3d32ac: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d32acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d32b0:
    // 0x3d32b0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d32b0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d32b4:
    // 0x3d32b4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d32b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d32b8:
    // 0x3d32b8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d32b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d32bc:
    // 0x3d32bc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d32bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d32c0:
    // 0x3d32c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3d32c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d32c4:
    // 0x3d32c4: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d32c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d32c8:
    // 0x3d32c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d32c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d32cc:
    // 0x3d32cc: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d32ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d32d0:
    // 0x3d32d0: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3d32d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3d32d4:
    // 0x3d32d4: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3d32d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3d32d8:
    // 0x3d32d8: 0xc136b18  jal         func_4DAC60
label_3d32dc:
    if (ctx->pc == 0x3D32DCu) {
        ctx->pc = 0x3D32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D32D8u;
        // 0x3d32dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D32E0u;
        goto label_3d32e0;
    }
    ctx->pc = 0x3D32D8u;
    SET_GPR_U32(ctx, 31, 0x3D32E0u);
    ctx->pc = 0x3D32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D32D8u;
    // 0x3d32dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D32D8u, 0x3D32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D32E0u;
label_3d32e0:
    // 0x3d32e0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3d32e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3d32e4:
    // 0x3d32e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d32e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d32e8:
    // 0x3d32e8: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d32e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d32ec:
    // 0x3d32ec: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3d32ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d32f0:
    // 0x3d32f0: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3d32f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3d32f4:
    // 0x3d32f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d32f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d32f8:
    // 0x3d32f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d32f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d32fc:
    // 0x3d32fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d32fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d3300:
    // 0x3d3300: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d3304:
    // 0x3d3304: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d3304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d3308:
    // 0x3d3308: 0xafa00480  sw          $zero, 0x480($sp)
    ctx->pc = 0x3d3308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
label_3d330c:
    // 0x3d330c: 0xc0e9fa6  jal         func_3A7E98
label_3d3310:
    if (ctx->pc == 0x3D3310u) {
        ctx->pc = 0x3D3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D330Cu;
        // 0x3d3310: 0x27a70480  addiu       $a3, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3314u;
        goto label_3d3314;
    }
    ctx->pc = 0x3D330Cu;
    SET_GPR_U32(ctx, 31, 0x3D3314u);
    ctx->pc = 0x3D3310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D330Cu;
    // 0x3d3310: 0x27a70480  addiu       $a3, $sp, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D330Cu, 0x3D3314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3314u;
label_3d3314:
    // 0x3d3314: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d3314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d3318:
    // 0x3d3318: 0xc0f15bc  jal         func_3C56F0
label_3d331c:
    if (ctx->pc == 0x3D331Cu) {
        ctx->pc = 0x3D331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3318u;
        // 0x3d331c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3320u;
        goto label_3d3320;
    }
    ctx->pc = 0x3D3318u;
    SET_GPR_U32(ctx, 31, 0x3D3320u);
    ctx->pc = 0x3D331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3318u;
    // 0x3d331c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D3318u, 0x3D3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3320u;
label_3d3320:
    // 0x3d3320: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x3d3320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_3d3324:
    // 0x3d3324: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3d3324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3d3328:
    // 0x3d3328: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x3d3328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_3d332c:
    // 0x3d332c: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3d332cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d3330:
    // 0x3d3330: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3d3330u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3d3334:
    // 0x3d3334: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d3334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d3338:
    // 0x3d3338: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3d3338u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3d333c:
    // 0x3d333c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d333cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d3340:
    // 0x3d3340: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d3340u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d3344:
    // 0x3d3344: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d3344u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d3348:
    // 0x3d3348: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d3348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d334c:
    // 0x3d334c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d334cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d3350:
    // 0x3d3350: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d3350u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d3354:
    // 0x3d3354: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d3354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d3358:
    // 0x3d3358: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d3358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d335c:
    // 0x3d335c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d335cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d3360:
    // 0x3d3360: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d3360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d3364:
    // 0x3d3364: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d3364u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d3368:
    // 0x3d3368: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d3368u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d336c:
    // 0x3d336c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d336cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d3370:
    // 0x3d3370: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d3370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d3374:
    // 0x3d3374: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d3374u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d3378:
    // 0x3d3378: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3d3378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3d337c:
    // 0x3d337c: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x3d337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d3380:
    // 0x3d3380: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d3380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d3384:
    // 0x3d3384: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d3384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d3388:
    // 0x3d3388: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3d3388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3d338c:
    // 0x3d338c: 0xc136b18  jal         func_4DAC60
label_3d3390:
    if (ctx->pc == 0x3D3390u) {
        ctx->pc = 0x3D3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D338Cu;
        // 0x3d3390: 0x7fa30470  sq          $v1, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3394u;
        goto label_3d3394;
    }
    ctx->pc = 0x3D338Cu;
    SET_GPR_U32(ctx, 31, 0x3D3394u);
    ctx->pc = 0x3D3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D338Cu;
    // 0x3d3390: 0x7fa30470  sq          $v1, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D338Cu, 0x3D3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3394u;
label_3d3394:
    // 0x3d3394: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3d3394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d3398:
    // 0x3d3398: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3d3398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d339c:
    // 0x3d339c: 0xe7b40460  swc1        $f20, 0x460($sp)
    ctx->pc = 0x3d339cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3d33a0:
    // 0x3d33a0: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3d33a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d33a4:
    // 0x3d33a4: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3d33a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3d33a8:
    // 0x3d33a8: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3d33a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3d33ac:
    // 0x3d33ac: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d33acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d33b0:
    // 0x3d33b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d33b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d33b4:
    // 0x3d33b4: 0xc0e9fa6  jal         func_3A7E98
label_3d33b8:
    if (ctx->pc == 0x3D33B8u) {
        ctx->pc = 0x3D33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33B4u;
        // 0x3d33b8: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D33BCu;
        goto label_3d33bc;
    }
    ctx->pc = 0x3D33B4u;
    SET_GPR_U32(ctx, 31, 0x3D33BCu);
    ctx->pc = 0x3D33B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D33B4u;
    // 0x3d33b8: 0xafa00470  sw          $zero, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D33B4u, 0x3D33BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D33BCu;
label_3d33bc:
    // 0x3d33bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d33bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d33c0:
    // 0x3d33c0: 0xc0f15bc  jal         func_3C56F0
label_3d33c4:
    if (ctx->pc == 0x3D33C4u) {
        ctx->pc = 0x3D33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33C0u;
        // 0x3d33c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D33C8u;
        goto label_3d33c8;
    }
    ctx->pc = 0x3D33C0u;
    SET_GPR_U32(ctx, 31, 0x3D33C8u);
    ctx->pc = 0x3D33C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D33C0u;
    // 0x3d33c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D33C0u, 0x3D33C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D33C8u;
label_3d33c8:
    // 0x3d33c8: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x3d33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_3d33cc:
    // 0x3d33cc: 0x3c05e919  lui         $a1, 0xE919
    ctx->pc = 0x3d33ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59673 << 16));
label_3d33d0:
    // 0x3d33d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d33d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d33d4:
    // 0x3d33d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d33d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d33d8:
    // 0x3d33d8: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3d33d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3d33dc:
    // 0x3d33dc: 0x34a52d4a  ori         $a1, $a1, 0x2D4A
    ctx->pc = 0x3d33dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11594);
label_3d33e0:
    // 0x3d33e0: 0xc045cb2  jal         func_1172C8
label_3d33e4:
    if (ctx->pc == 0x3D33E4u) {
        ctx->pc = 0x3D33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D33E0u;
        // 0x3d33e4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D33E8u;
        goto label_3d33e8;
    }
    ctx->pc = 0x3D33E0u;
    SET_GPR_U32(ctx, 31, 0x3D33E8u);
    ctx->pc = 0x3D33E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D33E0u;
    // 0x3d33e4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172C8u, 0x3D33E0u, 0x3D33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D33E8u;
label_3d33e8:
    // 0x3d33e8: 0x3c03eac9  lui         $v1, 0xEAC9
    ctx->pc = 0x3d33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60105 << 16));
label_3d33ec:
    // 0x3d33ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d33f0:
    // 0x3d33f0: 0x3463acff  ori         $v1, $v1, 0xACFF
    ctx->pc = 0x3d33f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44287);
label_3d33f4:
    // 0x3d33f4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3d33f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3d33f8:
    // 0x3d33f8: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x3d33f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_3d33fc:
    // 0x3d33fc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3d33fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3d3400:
    // 0x3d3400: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x3d3400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
label_3d3404:
    // 0x3d3404: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3d3404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3d3408:
    // 0x3d3408: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3d3408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d340c:
    // 0x3d340c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3410:
    // 0x3d3410: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3d3410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3d3414:
    // 0x3d3414: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3d3414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3d3418:
    // 0x3d3418: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x3d3418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
label_3d341c:
    // 0x3d341c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3d341cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3d3420:
    // 0x3d3420: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3d3420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3d3424:
    // 0x3d3424: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3d3424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3d3428:
    // 0x3d3428: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x3d3428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_3d342c:
    // 0x3d342c: 0x7bb00500  lq          $s0, 0x500($sp)
    ctx->pc = 0x3d342cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3d3430:
    // 0x3d3430: 0x7bb104f0  lq          $s1, 0x4F0($sp)
    ctx->pc = 0x3d3430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3d3434:
    // 0x3d3434: 0x7bb204e0  lq          $s2, 0x4E0($sp)
    ctx->pc = 0x3d3434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3d3438:
    // 0x3d3438: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x3d3438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d343c:
    // 0x3d343c: 0x7bb404c0  lq          $s4, 0x4C0($sp)
    ctx->pc = 0x3d343cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d3440:
    // 0x3d3440: 0x7bb504b0  lq          $s5, 0x4B0($sp)
    ctx->pc = 0x3d3440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d3444:
    // 0x3d3444: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3d3444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d3448:
    // 0x3d3448: 0xc7b40510  lwc1        $f20, 0x510($sp)
    ctx->pc = 0x3d3448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d344c:
    // 0x3d344c: 0x3e00008  jr          $ra
label_3d3450:
    if (ctx->pc == 0x3D3450u) {
        ctx->pc = 0x3D3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D344Cu;
        // 0x3d3450: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3454u;
        goto label_3d3454;
    }
    ctx->pc = 0x3D344Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D344Cu;
        // 0x3d3450: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D344Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3454u;
label_3d3454:
    // 0x3d3454: 0x0  nop
    ctx->pc = 0x3d3454u;
    // NOP
    ctx->pc = 0x3d3458u;
}
