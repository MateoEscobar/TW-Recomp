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

// Function: sub_003961D0
// Address: 0x3961d0 - 0x396390
void sub_003961D0_0x3961d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003961D0_0x3961d0");
#endif

    switch (ctx->pc) {
        case 0x3961d0u: goto label_3961d0;
        case 0x3961d4u: goto label_3961d4;
        case 0x3961d8u: goto label_3961d8;
        case 0x3961dcu: goto label_3961dc;
        case 0x3961e0u: goto label_3961e0;
        case 0x3961e4u: goto label_3961e4;
        case 0x3961e8u: goto label_3961e8;
        case 0x3961ecu: goto label_3961ec;
        case 0x3961f0u: goto label_3961f0;
        case 0x3961f4u: goto label_3961f4;
        case 0x3961f8u: goto label_3961f8;
        case 0x3961fcu: goto label_3961fc;
        case 0x396200u: goto label_396200;
        case 0x396204u: goto label_396204;
        case 0x396208u: goto label_396208;
        case 0x39620cu: goto label_39620c;
        case 0x396210u: goto label_396210;
        case 0x396214u: goto label_396214;
        case 0x396218u: goto label_396218;
        case 0x39621cu: goto label_39621c;
        case 0x396220u: goto label_396220;
        case 0x396224u: goto label_396224;
        case 0x396228u: goto label_396228;
        case 0x39622cu: goto label_39622c;
        case 0x396230u: goto label_396230;
        case 0x396234u: goto label_396234;
        case 0x396238u: goto label_396238;
        case 0x39623cu: goto label_39623c;
        case 0x396240u: goto label_396240;
        case 0x396244u: goto label_396244;
        case 0x396248u: goto label_396248;
        case 0x39624cu: goto label_39624c;
        case 0x396250u: goto label_396250;
        case 0x396254u: goto label_396254;
        case 0x396258u: goto label_396258;
        case 0x39625cu: goto label_39625c;
        case 0x396260u: goto label_396260;
        case 0x396264u: goto label_396264;
        case 0x396268u: goto label_396268;
        case 0x39626cu: goto label_39626c;
        case 0x396270u: goto label_396270;
        case 0x396274u: goto label_396274;
        case 0x396278u: goto label_396278;
        case 0x39627cu: goto label_39627c;
        case 0x396280u: goto label_396280;
        case 0x396284u: goto label_396284;
        case 0x396288u: goto label_396288;
        case 0x39628cu: goto label_39628c;
        case 0x396290u: goto label_396290;
        case 0x396294u: goto label_396294;
        case 0x396298u: goto label_396298;
        case 0x39629cu: goto label_39629c;
        case 0x3962a0u: goto label_3962a0;
        case 0x3962a4u: goto label_3962a4;
        case 0x3962a8u: goto label_3962a8;
        case 0x3962acu: goto label_3962ac;
        case 0x3962b0u: goto label_3962b0;
        case 0x3962b4u: goto label_3962b4;
        case 0x3962b8u: goto label_3962b8;
        case 0x3962bcu: goto label_3962bc;
        case 0x3962c0u: goto label_3962c0;
        case 0x3962c4u: goto label_3962c4;
        case 0x3962c8u: goto label_3962c8;
        case 0x3962ccu: goto label_3962cc;
        case 0x3962d0u: goto label_3962d0;
        case 0x3962d4u: goto label_3962d4;
        case 0x3962d8u: goto label_3962d8;
        case 0x3962dcu: goto label_3962dc;
        case 0x3962e0u: goto label_3962e0;
        case 0x3962e4u: goto label_3962e4;
        case 0x3962e8u: goto label_3962e8;
        case 0x3962ecu: goto label_3962ec;
        case 0x3962f0u: goto label_3962f0;
        case 0x3962f4u: goto label_3962f4;
        case 0x3962f8u: goto label_3962f8;
        case 0x3962fcu: goto label_3962fc;
        case 0x396300u: goto label_396300;
        case 0x396304u: goto label_396304;
        case 0x396308u: goto label_396308;
        case 0x39630cu: goto label_39630c;
        case 0x396310u: goto label_396310;
        case 0x396314u: goto label_396314;
        case 0x396318u: goto label_396318;
        case 0x39631cu: goto label_39631c;
        case 0x396320u: goto label_396320;
        case 0x396324u: goto label_396324;
        case 0x396328u: goto label_396328;
        case 0x39632cu: goto label_39632c;
        case 0x396330u: goto label_396330;
        case 0x396334u: goto label_396334;
        case 0x396338u: goto label_396338;
        case 0x39633cu: goto label_39633c;
        case 0x396340u: goto label_396340;
        case 0x396344u: goto label_396344;
        case 0x396348u: goto label_396348;
        case 0x39634cu: goto label_39634c;
        case 0x396350u: goto label_396350;
        case 0x396354u: goto label_396354;
        case 0x396358u: goto label_396358;
        case 0x39635cu: goto label_39635c;
        case 0x396360u: goto label_396360;
        case 0x396364u: goto label_396364;
        case 0x396368u: goto label_396368;
        case 0x39636cu: goto label_39636c;
        case 0x396370u: goto label_396370;
        case 0x396374u: goto label_396374;
        case 0x396378u: goto label_396378;
        case 0x39637cu: goto label_39637c;
        case 0x396380u: goto label_396380;
        case 0x396384u: goto label_396384;
        case 0x396388u: goto label_396388;
        case 0x39638cu: goto label_39638c;
        default: break;
    }

    ctx->pc = 0x3961d0u;

label_3961d0:
    // 0x3961d0: 0x27bdf2f0  addiu       $sp, $sp, -0xD10
    ctx->pc = 0x3961d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963952));
label_3961d4:
    // 0x3961d4: 0xafa40c70  sw          $a0, 0xC70($sp)
    ctx->pc = 0x3961d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3184), GPR_U32(ctx, 4));
label_3961d8:
    // 0x3961d8: 0x7fb50ca0  sq          $s5, 0xCA0($sp)
    ctx->pc = 0x3961d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3232), GPR_VEC(ctx, 21));
label_3961dc:
    // 0x3961dc: 0x27a40c70  addiu       $a0, $sp, 0xC70
    ctx->pc = 0x3961dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3184));
label_3961e0:
    // 0x3961e0: 0x7fb60c90  sq          $s6, 0xC90($sp)
    ctx->pc = 0x3961e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3216), GPR_VEC(ctx, 22));
label_3961e4:
    // 0x3961e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3961e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3961e8:
    // 0x3961e8: 0xe7b40d00  swc1        $f20, 0xD00($sp)
    ctx->pc = 0x3961e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3328), bits); }
label_3961ec:
    // 0x3961ec: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3961ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3961f0:
    // 0x3961f0: 0x7fb00cf0  sq          $s0, 0xCF0($sp)
    ctx->pc = 0x3961f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3312), GPR_VEC(ctx, 16));
label_3961f4:
    // 0x3961f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3961f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3961f8:
    // 0x3961f8: 0x7fb10ce0  sq          $s1, 0xCE0($sp)
    ctx->pc = 0x3961f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3296), GPR_VEC(ctx, 17));
label_3961fc:
    // 0x3961fc: 0x7fb20cd0  sq          $s2, 0xCD0($sp)
    ctx->pc = 0x3961fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3280), GPR_VEC(ctx, 18));
label_396200:
    // 0x396200: 0x7fb30cc0  sq          $s3, 0xCC0($sp)
    ctx->pc = 0x396200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3264), GPR_VEC(ctx, 19));
label_396204:
    // 0x396204: 0x7fb40cb0  sq          $s4, 0xCB0($sp)
    ctx->pc = 0x396204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3248), GPR_VEC(ctx, 20));
label_396208:
    // 0x396208: 0xffbf0c80  sd          $ra, 0xC80($sp)
    ctx->pc = 0x396208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3200), GPR_U64(ctx, 31));
label_39620c:
    // 0x39620c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x39620cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_396210:
    // 0x396210: 0xc0e4060  jal         func_390180
label_396214:
    if (ctx->pc == 0x396214u) {
        ctx->pc = 0x396214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396210u;
        // 0x396214: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396218u;
        goto label_396218;
    }
    ctx->pc = 0x396210u;
    SET_GPR_U32(ctx, 31, 0x396218u);
    ctx->pc = 0x396214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396210u;
    // 0x396214: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396210u, 0x396218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396218u;
label_396218:
    // 0x396218: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
label_39621c:
    if (ctx->pc == 0x39621Cu) {
        ctx->pc = 0x39621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396218u;
        // 0x39621c: 0x7bb00cf0  lq          $s0, 0xCF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396220u;
        goto label_396220;
    }
    ctx->pc = 0x396218u;
    {
        const bool branch_taken_0x396218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396218) {
            ctx->pc = 0x39621Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396218u;
            // 0x39621c: 0x7bb00cf0  lq          $s0, 0xCF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396364u;
            goto label_396364;
        }
    }
    ctx->pc = 0x396220u;
label_396220:
    // 0x396220: 0xc0e4060  jal         func_390180
label_396224:
    if (ctx->pc == 0x396224u) {
        ctx->pc = 0x396224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396220u;
        // 0x396224: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396228u;
        goto label_396228;
    }
    ctx->pc = 0x396220u;
    SET_GPR_U32(ctx, 31, 0x396228u);
    ctx->pc = 0x396224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396220u;
    // 0x396224: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396220u, 0x396228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396228u;
label_396228:
    // 0x396228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39622c:
    // 0x39622c: 0x27a40c30  addiu       $a0, $sp, 0xC30
    ctx->pc = 0x39622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3120));
label_396230:
    // 0x396230: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x396230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396234:
    // 0x396234: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x396234u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_396238:
    // 0x396238: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x396238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_39623c:
    // 0x39623c: 0x60f809  jalr        $v1
label_396240:
    if (ctx->pc == 0x396240u) {
        ctx->pc = 0x396240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39623Cu;
        // 0x396240: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396244u;
        goto label_396244;
    }
    ctx->pc = 0x39623Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x396244u);
        ctx->pc = 0x396240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39623Cu;
        // 0x396240: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39623Cu, 0x396244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396244u;
label_396244:
    // 0x396244: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x396244u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396248:
    // 0x396248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39624c:
    // 0x39624c: 0x7ba20c30  lq          $v0, 0xC30($sp)
    ctx->pc = 0x39624cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 3120)));
label_396250:
    // 0x396250: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x396250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_396254:
    // 0x396254: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x396254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_396258:
    // 0x396258: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x396258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39625c:
    // 0x39625c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39625cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_396260:
    // 0x396260: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x396260u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_396264:
    // 0x396264: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x396264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_396268:
    // 0x396268: 0x7fa20c60  sq          $v0, 0xC60($sp)
    ctx->pc = 0x396268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3168), GPR_VEC(ctx, 2));
label_39626c:
    // 0x39626c: 0x7fa20c50  sq          $v0, 0xC50($sp)
    ctx->pc = 0x39626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3152), GPR_VEC(ctx, 2));
label_396270:
    // 0x396270: 0xc0e57ce  jal         func_395F38
label_396274:
    if (ctx->pc == 0x396274u) {
        ctx->pc = 0x396274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396270u;
        // 0x396274: 0x7fa20c20  sq          $v0, 0xC20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 3104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396278u;
        goto label_396278;
    }
    ctx->pc = 0x396270u;
    SET_GPR_U32(ctx, 31, 0x396278u);
    ctx->pc = 0x396274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396270u;
    // 0x396274: 0x7fa20c20  sq          $v0, 0xC20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 3104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x396270u, 0x396278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396278u;
label_396278:
    // 0x396278: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x396278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39627c:
    // 0x39627c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_396280:
    if (ctx->pc == 0x396280u) {
        ctx->pc = 0x396280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39627Cu;
        // 0x396280: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396284u;
        goto label_396284;
    }
    ctx->pc = 0x39627Cu;
    {
        const bool branch_taken_0x39627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39627Cu;
        // 0x396280: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39627c) {
            ctx->pc = 0x3962D0u;
            goto label_3962d0;
        }
    }
    ctx->pc = 0x396284u;
label_396284:
    // 0x396284: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x396284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_396288:
    // 0x396288: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x396288u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_39628c:
    // 0x39628c: 0xc0e44cc  jal         func_391330
label_396290:
    if (ctx->pc == 0x396290u) {
        ctx->pc = 0x396290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39628Cu;
        // 0x396290: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396294u;
        goto label_396294;
    }
    ctx->pc = 0x39628Cu;
    SET_GPR_U32(ctx, 31, 0x396294u);
    ctx->pc = 0x396290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39628Cu;
    // 0x396290: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x39628Cu, 0x396294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396294u;
label_396294:
    // 0x396294: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x396294u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_396298:
    // 0x396298: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x396298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_39629c:
    // 0x39629c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_3962a0:
    if (ctx->pc == 0x3962A0u) {
        ctx->pc = 0x3962A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39629Cu;
        // 0x3962a0: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3962A4u;
        goto label_3962a4;
    }
    ctx->pc = 0x39629Cu;
    {
        const bool branch_taken_0x39629c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3962A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39629Cu;
        // 0x3962a0: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39629c) {
            ctx->pc = 0x3962D4u;
            goto label_3962d4;
        }
    }
    ctx->pc = 0x3962A4u;
label_3962a4:
    // 0x3962a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3962a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3962a8:
    // 0x3962a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3962a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3962ac:
    // 0x3962ac: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x3962acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_3962b0:
    // 0x3962b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3962b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3962b4:
    // 0x3962b4: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3962b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3962b8:
    // 0x3962b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3962b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3962bc:
    // 0x3962bc: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x3962bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3962c0:
    // 0x3962c0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3962c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3962c4:
    // 0x3962c4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3962c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3962c8:
    // 0x3962c8: 0xc106e2c  jal         func_41B8B0
label_3962cc:
    if (ctx->pc == 0x3962CCu) {
        ctx->pc = 0x3962CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3962C8u;
        // 0x3962cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3962D0u;
        goto label_3962d0;
    }
    ctx->pc = 0x3962C8u;
    SET_GPR_U32(ctx, 31, 0x3962D0u);
    ctx->pc = 0x3962CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3962C8u;
    // 0x3962cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x3962C8u, 0x3962D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962D0u;
label_3962d0:
    // 0x3962d0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x3962d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_3962d4:
    // 0x3962d4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3962d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3962d8:
    // 0x3962d8: 0x8e822c7c  lw          $v0, 0x2C7C($s4)
    ctx->pc = 0x3962d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_3962dc:
    // 0x3962dc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x3962dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_3962e0:
    // 0x3962e0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x3962e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_3962e4:
    // 0x3962e4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3962e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3962e8:
    // 0x3962e8: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x3962e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
label_3962ec:
    // 0x3962ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3962ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3962f0:
    // 0x3962f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3962f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3962f4:
    // 0x3962f4: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x3962f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_3962f8:
    // 0x3962f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3962f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3962fc:
    // 0x3962fc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x3962fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_396300:
    // 0x396300: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x396300u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_396304:
    // 0x396304: 0xc0e6a14  jal         func_39A850
label_396308:
    if (ctx->pc == 0x396308u) {
        ctx->pc = 0x396308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396304u;
        // 0x396308: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39630Cu;
        goto label_39630c;
    }
    ctx->pc = 0x396304u;
    SET_GPR_U32(ctx, 31, 0x39630Cu);
    ctx->pc = 0x396308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396304u;
    // 0x396308: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A850u, 0x396304u, 0x39630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39630Cu;
label_39630c:
    // 0x39630c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39630cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396310:
    // 0x396310: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_396314:
    if (ctx->pc == 0x396314u) {
        ctx->pc = 0x396314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396310u;
        // 0x396314: 0x7bb00cf0  lq          $s0, 0xCF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396318u;
        goto label_396318;
    }
    ctx->pc = 0x396310u;
    {
        const bool branch_taken_0x396310 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x396314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396310u;
        // 0x396314: 0x7bb00cf0  lq          $s0, 0xCF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396310) {
            ctx->pc = 0x396364u;
            goto label_396364;
        }
    }
    ctx->pc = 0x396318u;
label_396318:
    // 0x396318: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_39631c:
    if (ctx->pc == 0x39631Cu) {
        ctx->pc = 0x39631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396318u;
        // 0x39631c: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396320u;
        goto label_396320;
    }
    ctx->pc = 0x396318u;
    {
        const bool branch_taken_0x396318 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x39631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396318u;
        // 0x39631c: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396318) {
            ctx->pc = 0x396330u;
            goto label_396330;
        }
    }
    ctx->pc = 0x396320u;
label_396320:
    // 0x396320: 0xc0e4060  jal         func_390180
label_396324:
    if (ctx->pc == 0x396324u) {
        ctx->pc = 0x396324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396320u;
        // 0x396324: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396328u;
        goto label_396328;
    }
    ctx->pc = 0x396320u;
    SET_GPR_U32(ctx, 31, 0x396328u);
    ctx->pc = 0x396324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396320u;
    // 0x396324: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396320u, 0x396328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396328u;
label_396328:
    // 0x396328: 0x5202000a  beql        $s0, $v0, . + 4 + (0xA << 2)
label_39632c:
    if (ctx->pc == 0x39632Cu) {
        ctx->pc = 0x39632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396328u;
        // 0x39632c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396330u;
        goto label_396330;
    }
    ctx->pc = 0x396328u;
    {
        const bool branch_taken_0x396328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x396328) {
            ctx->pc = 0x39632Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396328u;
            // 0x39632c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396354u;
            goto label_396354;
        }
    }
    ctx->pc = 0x396330u;
label_396330:
    // 0x396330: 0xc0e8b48  jal         func_3A2D20
label_396334:
    if (ctx->pc == 0x396334u) {
        ctx->pc = 0x396334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396330u;
        // 0x396334: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396338u;
        goto label_396338;
    }
    ctx->pc = 0x396330u;
    SET_GPR_U32(ctx, 31, 0x396338u);
    ctx->pc = 0x396334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396330u;
    // 0x396334: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x396330u, 0x396338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396338u;
label_396338:
    // 0x396338: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x396338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_39633c:
    // 0x39633c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396340:
    // 0x396340: 0xc0e8b80  jal         func_3A2E00
label_396344:
    if (ctx->pc == 0x396344u) {
        ctx->pc = 0x396344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396340u;
        // 0x396344: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396348u;
        goto label_396348;
    }
    ctx->pc = 0x396340u;
    SET_GPR_U32(ctx, 31, 0x396348u);
    ctx->pc = 0x396344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396340u;
    // 0x396344: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x396340u, 0x396348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396348u;
label_396348:
    // 0x396348: 0xc0e8b50  jal         func_3A2D40
label_39634c:
    if (ctx->pc == 0x39634Cu) {
        ctx->pc = 0x39634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396348u;
        // 0x39634c: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396350u;
        goto label_396350;
    }
    ctx->pc = 0x396348u;
    SET_GPR_U32(ctx, 31, 0x396350u);
    ctx->pc = 0x39634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396348u;
    // 0x39634c: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x396348u, 0x396350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396350u;
label_396350:
    // 0x396350: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x396350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_396354:
    // 0x396354: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x396354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_396358:
    // 0x396358: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_39635c:
    if (ctx->pc == 0x39635Cu) {
        ctx->pc = 0x39635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396358u;
        // 0x39635c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396360u;
        goto label_396360;
    }
    ctx->pc = 0x396358u;
    {
        const bool branch_taken_0x396358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396358u;
        // 0x39635c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396358) {
            ctx->pc = 0x396318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396318;
        }
    }
    ctx->pc = 0x396360u;
label_396360:
    // 0x396360: 0x7bb00cf0  lq          $s0, 0xCF0($sp)
    ctx->pc = 0x396360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3312)));
label_396364:
    // 0x396364: 0x7bb10ce0  lq          $s1, 0xCE0($sp)
    ctx->pc = 0x396364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3296)));
label_396368:
    // 0x396368: 0x7bb20cd0  lq          $s2, 0xCD0($sp)
    ctx->pc = 0x396368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3280)));
label_39636c:
    // 0x39636c: 0x7bb30cc0  lq          $s3, 0xCC0($sp)
    ctx->pc = 0x39636cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3264)));
label_396370:
    // 0x396370: 0x7bb40cb0  lq          $s4, 0xCB0($sp)
    ctx->pc = 0x396370u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3248)));
label_396374:
    // 0x396374: 0x7bb50ca0  lq          $s5, 0xCA0($sp)
    ctx->pc = 0x396374u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 3232)));
label_396378:
    // 0x396378: 0x7bb60c90  lq          $s6, 0xC90($sp)
    ctx->pc = 0x396378u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 3216)));
label_39637c:
    // 0x39637c: 0xdfbf0c80  ld          $ra, 0xC80($sp)
    ctx->pc = 0x39637cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3200)));
label_396380:
    // 0x396380: 0xc7b40d00  lwc1        $f20, 0xD00($sp)
    ctx->pc = 0x396380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_396384:
    // 0x396384: 0x3e00008  jr          $ra
label_396388:
    if (ctx->pc == 0x396388u) {
        ctx->pc = 0x396388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396384u;
        // 0x396388: 0x27bd0d10  addiu       $sp, $sp, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39638Cu;
        goto label_39638c;
    }
    ctx->pc = 0x396384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396384u;
        // 0x396388: 0x27bd0d10  addiu       $sp, $sp, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39638Cu;
label_39638c:
    // 0x39638c: 0x0  nop
    ctx->pc = 0x39638cu;
    // NOP
    ctx->pc = 0x396390u;
}
