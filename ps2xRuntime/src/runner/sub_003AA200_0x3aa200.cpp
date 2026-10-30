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

// Function: sub_003AA200
// Address: 0x3aa200 - 0x3aa3e0
void sub_003AA200_0x3aa200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA200_0x3aa200");
#endif

    switch (ctx->pc) {
        case 0x3aa200u: goto label_3aa200;
        case 0x3aa204u: goto label_3aa204;
        case 0x3aa208u: goto label_3aa208;
        case 0x3aa20cu: goto label_3aa20c;
        case 0x3aa210u: goto label_3aa210;
        case 0x3aa214u: goto label_3aa214;
        case 0x3aa218u: goto label_3aa218;
        case 0x3aa21cu: goto label_3aa21c;
        case 0x3aa220u: goto label_3aa220;
        case 0x3aa224u: goto label_3aa224;
        case 0x3aa228u: goto label_3aa228;
        case 0x3aa22cu: goto label_3aa22c;
        case 0x3aa230u: goto label_3aa230;
        case 0x3aa234u: goto label_3aa234;
        case 0x3aa238u: goto label_3aa238;
        case 0x3aa23cu: goto label_3aa23c;
        case 0x3aa240u: goto label_3aa240;
        case 0x3aa244u: goto label_3aa244;
        case 0x3aa248u: goto label_3aa248;
        case 0x3aa24cu: goto label_3aa24c;
        case 0x3aa250u: goto label_3aa250;
        case 0x3aa254u: goto label_3aa254;
        case 0x3aa258u: goto label_3aa258;
        case 0x3aa25cu: goto label_3aa25c;
        case 0x3aa260u: goto label_3aa260;
        case 0x3aa264u: goto label_3aa264;
        case 0x3aa268u: goto label_3aa268;
        case 0x3aa26cu: goto label_3aa26c;
        case 0x3aa270u: goto label_3aa270;
        case 0x3aa274u: goto label_3aa274;
        case 0x3aa278u: goto label_3aa278;
        case 0x3aa27cu: goto label_3aa27c;
        case 0x3aa280u: goto label_3aa280;
        case 0x3aa284u: goto label_3aa284;
        case 0x3aa288u: goto label_3aa288;
        case 0x3aa28cu: goto label_3aa28c;
        case 0x3aa290u: goto label_3aa290;
        case 0x3aa294u: goto label_3aa294;
        case 0x3aa298u: goto label_3aa298;
        case 0x3aa29cu: goto label_3aa29c;
        case 0x3aa2a0u: goto label_3aa2a0;
        case 0x3aa2a4u: goto label_3aa2a4;
        case 0x3aa2a8u: goto label_3aa2a8;
        case 0x3aa2acu: goto label_3aa2ac;
        case 0x3aa2b0u: goto label_3aa2b0;
        case 0x3aa2b4u: goto label_3aa2b4;
        case 0x3aa2b8u: goto label_3aa2b8;
        case 0x3aa2bcu: goto label_3aa2bc;
        case 0x3aa2c0u: goto label_3aa2c0;
        case 0x3aa2c4u: goto label_3aa2c4;
        case 0x3aa2c8u: goto label_3aa2c8;
        case 0x3aa2ccu: goto label_3aa2cc;
        case 0x3aa2d0u: goto label_3aa2d0;
        case 0x3aa2d4u: goto label_3aa2d4;
        case 0x3aa2d8u: goto label_3aa2d8;
        case 0x3aa2dcu: goto label_3aa2dc;
        case 0x3aa2e0u: goto label_3aa2e0;
        case 0x3aa2e4u: goto label_3aa2e4;
        case 0x3aa2e8u: goto label_3aa2e8;
        case 0x3aa2ecu: goto label_3aa2ec;
        case 0x3aa2f0u: goto label_3aa2f0;
        case 0x3aa2f4u: goto label_3aa2f4;
        case 0x3aa2f8u: goto label_3aa2f8;
        case 0x3aa2fcu: goto label_3aa2fc;
        case 0x3aa300u: goto label_3aa300;
        case 0x3aa304u: goto label_3aa304;
        case 0x3aa308u: goto label_3aa308;
        case 0x3aa30cu: goto label_3aa30c;
        case 0x3aa310u: goto label_3aa310;
        case 0x3aa314u: goto label_3aa314;
        case 0x3aa318u: goto label_3aa318;
        case 0x3aa31cu: goto label_3aa31c;
        case 0x3aa320u: goto label_3aa320;
        case 0x3aa324u: goto label_3aa324;
        case 0x3aa328u: goto label_3aa328;
        case 0x3aa32cu: goto label_3aa32c;
        case 0x3aa330u: goto label_3aa330;
        case 0x3aa334u: goto label_3aa334;
        case 0x3aa338u: goto label_3aa338;
        case 0x3aa33cu: goto label_3aa33c;
        case 0x3aa340u: goto label_3aa340;
        case 0x3aa344u: goto label_3aa344;
        case 0x3aa348u: goto label_3aa348;
        case 0x3aa34cu: goto label_3aa34c;
        case 0x3aa350u: goto label_3aa350;
        case 0x3aa354u: goto label_3aa354;
        case 0x3aa358u: goto label_3aa358;
        case 0x3aa35cu: goto label_3aa35c;
        case 0x3aa360u: goto label_3aa360;
        case 0x3aa364u: goto label_3aa364;
        case 0x3aa368u: goto label_3aa368;
        case 0x3aa36cu: goto label_3aa36c;
        case 0x3aa370u: goto label_3aa370;
        case 0x3aa374u: goto label_3aa374;
        case 0x3aa378u: goto label_3aa378;
        case 0x3aa37cu: goto label_3aa37c;
        case 0x3aa380u: goto label_3aa380;
        case 0x3aa384u: goto label_3aa384;
        case 0x3aa388u: goto label_3aa388;
        case 0x3aa38cu: goto label_3aa38c;
        case 0x3aa390u: goto label_3aa390;
        case 0x3aa394u: goto label_3aa394;
        case 0x3aa398u: goto label_3aa398;
        case 0x3aa39cu: goto label_3aa39c;
        case 0x3aa3a0u: goto label_3aa3a0;
        case 0x3aa3a4u: goto label_3aa3a4;
        case 0x3aa3a8u: goto label_3aa3a8;
        case 0x3aa3acu: goto label_3aa3ac;
        case 0x3aa3b0u: goto label_3aa3b0;
        case 0x3aa3b4u: goto label_3aa3b4;
        case 0x3aa3b8u: goto label_3aa3b8;
        case 0x3aa3bcu: goto label_3aa3bc;
        case 0x3aa3c0u: goto label_3aa3c0;
        case 0x3aa3c4u: goto label_3aa3c4;
        case 0x3aa3c8u: goto label_3aa3c8;
        case 0x3aa3ccu: goto label_3aa3cc;
        case 0x3aa3d0u: goto label_3aa3d0;
        case 0x3aa3d4u: goto label_3aa3d4;
        case 0x3aa3d8u: goto label_3aa3d8;
        case 0x3aa3dcu: goto label_3aa3dc;
        default: break;
    }

    ctx->pc = 0x3aa200u;

label_3aa200:
    // 0x3aa200: 0x27bdf730  addiu       $sp, $sp, -0x8D0
    ctx->pc = 0x3aa200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965040));
label_3aa204:
    // 0x3aa204: 0x7fb208a0  sq          $s2, 0x8A0($sp)
    ctx->pc = 0x3aa204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 18));
label_3aa208:
    // 0x3aa208: 0x7fb30890  sq          $s3, 0x890($sp)
    ctx->pc = 0x3aa208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 19));
label_3aa20c:
    // 0x3aa20c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3aa20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa210:
    // 0x3aa210: 0x7fb40880  sq          $s4, 0x880($sp)
    ctx->pc = 0x3aa210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 20));
label_3aa214:
    // 0x3aa214: 0x7fb008c0  sq          $s0, 0x8C0($sp)
    ctx->pc = 0x3aa214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 16));
label_3aa218:
    // 0x3aa218: 0x7fb108b0  sq          $s1, 0x8B0($sp)
    ctx->pc = 0x3aa218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 17));
label_3aa21c:
    // 0x3aa21c: 0xffbf0870  sd          $ra, 0x870($sp)
    ctx->pc = 0x3aa21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2160), GPR_U64(ctx, 31));
label_3aa220:
    // 0x3aa220: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3aa220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aa224:
    // 0x3aa224: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aa224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aa228:
    // 0x3aa228: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aa228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aa22c:
    // 0x3aa22c: 0x40f809  jalr        $v0
label_3aa230:
    if (ctx->pc == 0x3AA230u) {
        ctx->pc = 0x3AA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA22Cu;
        // 0x3aa230: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA234u;
        goto label_3aa234;
    }
    ctx->pc = 0x3AA22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA234u);
        ctx->pc = 0x3AA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA22Cu;
        // 0x3aa230: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA22Cu, 0x3AA234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA234u;
label_3aa234:
    // 0x3aa234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3aa234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3aa238:
    // 0x3aa238: 0x27b30430  addiu       $s3, $sp, 0x430
    ctx->pc = 0x3aa238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3aa23c:
    // 0x3aa23c: 0x27b40410  addiu       $s4, $sp, 0x410
    ctx->pc = 0x3aa23cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3aa240:
    // 0x3aa240: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3aa240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3aa244:
    // 0x3aa244: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3aa244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3aa248:
    // 0x3aa248: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aa248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3aa24c:
    // 0x3aa24c: 0x0  nop
    ctx->pc = 0x3aa24cu;
    // NOP
label_3aa250:
    // 0x3aa250: 0x0  nop
    ctx->pc = 0x3aa250u;
    // NOP
label_3aa254:
    // 0x3aa254: 0x0  nop
    ctx->pc = 0x3aa254u;
    // NOP
label_3aa258:
    // 0x3aa258: 0x0  nop
    ctx->pc = 0x3aa258u;
    // NOP
label_3aa25c:
    // 0x3aa25c: 0x0  nop
    ctx->pc = 0x3aa25cu;
    // NOP
label_3aa260:
    // 0x3aa260: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3aa264:
    if (ctx->pc == 0x3AA264u) {
        ctx->pc = 0x3AA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA260u;
        // 0x3aa264: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA268u;
        goto label_3aa268;
    }
    ctx->pc = 0x3AA260u;
    {
        const bool branch_taken_0x3aa260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA260u;
        // 0x3aa264: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa260) {
            ctx->pc = 0x3AA250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa250;
        }
    }
    ctx->pc = 0x3AA268u;
label_3aa268:
    // 0x3aa268: 0xc138ddc  jal         func_4E3770
label_3aa26c:
    if (ctx->pc == 0x3AA26Cu) {
        ctx->pc = 0x3AA270u;
        goto label_3aa270;
    }
    ctx->pc = 0x3AA268u;
    SET_GPR_U32(ctx, 31, 0x3AA270u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AA268u, 0x3AA270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA270u;
label_3aa270:
    // 0x3aa270: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3aa270u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aa274:
    // 0x3aa274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aa274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aa278:
    // 0x3aa278: 0x86300070  lh          $s0, 0x70($s1)
    ctx->pc = 0x3aa278u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3aa27c:
    // 0x3aa27c: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3aa27cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3aa280:
    // 0x3aa280: 0xc0e87c0  jal         func_3A1F00
label_3aa284:
    if (ctx->pc == 0x3AA284u) {
        ctx->pc = 0x3AA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA280u;
        // 0x3aa284: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA288u;
        goto label_3aa288;
    }
    ctx->pc = 0x3AA280u;
    SET_GPR_U32(ctx, 31, 0x3AA288u);
    ctx->pc = 0x3AA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA280u;
    // 0x3aa284: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3AA280u, 0x3AA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA288u;
label_3aa288:
    // 0x3aa288: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x3aa288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
label_3aa28c:
    // 0x3aa28c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3aa28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aa290:
    // 0x3aa290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa294:
    // 0x3aa294: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aa294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aa298:
    // 0x3aa298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aa298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa29c:
    // 0x3aa29c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3aa29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aa2a0:
    // 0x3aa2a0: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3aa2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3aa2a4:
    // 0x3aa2a4: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3aa2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3aa2a8:
    // 0x3aa2a8: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x3aa2a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3aa2ac:
    // 0x3aa2ac: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x3aa2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3aa2b0:
    // 0x3aa2b0: 0x7ba60430  lq          $a2, 0x430($sp)
    ctx->pc = 0x3aa2b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3aa2b4:
    // 0x3aa2b4: 0x7fa60420  sq          $a2, 0x420($sp)
    ctx->pc = 0x3aa2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 6));
label_3aa2b8:
    // 0x3aa2b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3aa2b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3aa2bc:
    // 0x3aa2bc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3aa2bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aa2c0:
    // 0x3aa2c0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3aa2c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3aa2c4:
    // 0x3aa2c4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3aa2c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3aa2c8:
    // 0x3aa2c8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3aa2c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3aa2cc:
    // 0x3aa2cc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3aa2ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3aa2d0:
    // 0x3aa2d0: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3aa2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3aa2d4:
    // 0x3aa2d4: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3aa2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3aa2d8:
    // 0x3aa2d8: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3aa2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3aa2dc:
    // 0x3aa2dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3aa2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3aa2e0:
    // 0x3aa2e0: 0x40f809  jalr        $v0
label_3aa2e4:
    if (ctx->pc == 0x3AA2E4u) {
        ctx->pc = 0x3AA2E8u;
        goto label_3aa2e8;
    }
    ctx->pc = 0x3AA2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA2E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA2E0u, 0x3AA2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA2E8u;
label_3aa2e8:
    // 0x3aa2e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3aa2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aa2ec:
    // 0x3aa2ec: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3aa2ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3aa2f0:
    // 0x3aa2f0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3aa2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3aa2f4:
    // 0x3aa2f4: 0x40f809  jalr        $v0
label_3aa2f8:
    if (ctx->pc == 0x3AA2F8u) {
        ctx->pc = 0x3AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2F4u;
        // 0x3aa2f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA2FCu;
        goto label_3aa2fc;
    }
    ctx->pc = 0x3AA2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA2FCu);
        ctx->pc = 0x3AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2F4u;
        // 0x3aa2f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA2F4u, 0x3AA2FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA2FCu;
label_3aa2fc:
    // 0x3aa2fc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3aa2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3aa300:
    // 0x3aa300: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3aa300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3aa304:
    // 0x3aa304: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3aa308:
    if (ctx->pc == 0x3AA308u) {
        ctx->pc = 0x3AA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA304u;
        // 0x3aa308: 0x27b00420  addiu       $s0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA30Cu;
        goto label_3aa30c;
    }
    ctx->pc = 0x3AA304u;
    {
        const bool branch_taken_0x3aa304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA304u;
        // 0x3aa308: 0x27b00420  addiu       $s0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa304) {
            ctx->pc = 0x3AA320u;
            goto label_3aa320;
        }
    }
    ctx->pc = 0x3AA30Cu;
label_3aa30c:
    // 0x3aa30c: 0xc0e9694  jal         func_3A5A50
label_3aa310:
    if (ctx->pc == 0x3AA310u) {
        ctx->pc = 0x3AA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA30Cu;
        // 0x3aa310: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA314u;
        goto label_3aa314;
    }
    ctx->pc = 0x3AA30Cu;
    SET_GPR_U32(ctx, 31, 0x3AA314u);
    ctx->pc = 0x3AA310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA30Cu;
    // 0x3aa310: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AA30Cu, 0x3AA314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA314u;
label_3aa314:
    // 0x3aa314: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_3aa318:
    if (ctx->pc == 0x3AA318u) {
        ctx->pc = 0x3AA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA314u;
        // 0x3aa318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA31Cu;
        goto label_3aa31c;
    }
    ctx->pc = 0x3AA314u;
    {
        const bool branch_taken_0x3aa314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA314u;
        // 0x3aa318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa314) {
            ctx->pc = 0x3AA3BCu;
            goto label_3aa3bc;
        }
    }
    ctx->pc = 0x3AA31Cu;
label_3aa31c:
    // 0x3aa31c: 0x27b00420  addiu       $s0, $sp, 0x420
    ctx->pc = 0x3aa31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3aa320:
    // 0x3aa320: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3aa320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aa324:
    // 0x3aa324: 0xc0e92f4  jal         func_3A4BD0
label_3aa328:
    if (ctx->pc == 0x3AA328u) {
        ctx->pc = 0x3AA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA324u;
        // 0x3aa328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA32Cu;
        goto label_3aa32c;
    }
    ctx->pc = 0x3AA324u;
    SET_GPR_U32(ctx, 31, 0x3AA32Cu);
    ctx->pc = 0x3AA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA324u;
    // 0x3aa328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3AA324u, 0x3AA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA32Cu;
label_3aa32c:
    // 0x3aa32c: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3aa32cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3aa330:
    // 0x3aa330: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3aa330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3aa334:
    // 0x3aa334: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3aa334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3aa338:
    // 0x3aa338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3aa338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aa33c:
    // 0x3aa33c: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3aa33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3aa340:
    // 0x3aa340: 0xc7a00418  lwc1        $f0, 0x418($sp)
    ctx->pc = 0x3aa340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3aa344:
    // 0x3aa344: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3aa344u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3aa348:
    // 0x3aa348: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3aa348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3aa34c:
    // 0x3aa34c: 0x0  nop
    ctx->pc = 0x3aa34cu;
    // NOP
label_3aa350:
    // 0x3aa350: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_3aa354:
    if (ctx->pc == 0x3AA354u) {
        ctx->pc = 0x3AA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA350u;
        // 0x3aa354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA358u;
        goto label_3aa358;
    }
    ctx->pc = 0x3AA350u;
    {
        const bool branch_taken_0x3aa350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA350u;
        // 0x3aa354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa350) {
            ctx->pc = 0x3AA3B8u;
            goto label_3aa3b8;
        }
    }
    ctx->pc = 0x3AA358u;
label_3aa358:
    // 0x3aa358: 0xc0e90ca  jal         func_3A4328
label_3aa35c:
    if (ctx->pc == 0x3AA35Cu) {
        ctx->pc = 0x3AA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA358u;
        // 0x3aa35c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA360u;
        goto label_3aa360;
    }
    ctx->pc = 0x3AA358u;
    SET_GPR_U32(ctx, 31, 0x3AA360u);
    ctx->pc = 0x3AA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA358u;
    // 0x3aa35c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3AA358u, 0x3AA360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA360u;
label_3aa360:
    // 0x3aa360: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3aa360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aa364:
    // 0x3aa364: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3aa364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3aa368:
    // 0x3aa368: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3aa368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3aa36c:
    // 0x3aa36c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3aa36cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3aa370:
    // 0x3aa370: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3aa370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3aa374:
    // 0x3aa374: 0x40f809  jalr        $v0
label_3aa378:
    if (ctx->pc == 0x3AA378u) {
        ctx->pc = 0x3AA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA374u;
        // 0x3aa378: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA37Cu;
        goto label_3aa37c;
    }
    ctx->pc = 0x3AA374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA37Cu);
        ctx->pc = 0x3AA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA374u;
        // 0x3aa378: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA374u, 0x3AA37Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA37Cu;
label_3aa37c:
    // 0x3aa37c: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3aa37cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3aa380:
    // 0x3aa380: 0x27b10460  addiu       $s1, $sp, 0x460
    ctx->pc = 0x3aa380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3aa384:
    // 0x3aa384: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3aa384u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3aa388:
    // 0x3aa388: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3aa388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aa38c:
    // 0x3aa38c: 0x26101cf8  addiu       $s0, $s0, 0x1CF8
    ctx->pc = 0x3aa38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7416));
label_3aa390:
    // 0x3aa390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aa390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa394:
    // 0x3aa394: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3aa394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3aa398:
    // 0x3aa398: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3aa398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3aa39c:
    // 0x3aa39c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3aa39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3aa3a0:
    // 0x3aa3a0: 0xafb20450  sw          $s2, 0x450($sp)
    ctx->pc = 0x3aa3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 18));
label_3aa3a4:
    // 0x3aa3a4: 0xc0e9fa6  jal         func_3A7E98
label_3aa3a8:
    if (ctx->pc == 0x3AA3A8u) {
        ctx->pc = 0x3AA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3A4u;
        // 0x3aa3a8: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA3ACu;
        goto label_3aa3ac;
    }
    ctx->pc = 0x3AA3A4u;
    SET_GPR_U32(ctx, 31, 0x3AA3ACu);
    ctx->pc = 0x3AA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3A4u;
    // 0x3aa3a8: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AA3A4u, 0x3AA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA3ACu;
label_3aa3ac:
    // 0x3aa3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa3b0:
    // 0x3aa3b0: 0xc0f15bc  jal         func_3C56F0
label_3aa3b4:
    if (ctx->pc == 0x3AA3B4u) {
        ctx->pc = 0x3AA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3B0u;
        // 0x3aa3b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA3B8u;
        goto label_3aa3b8;
    }
    ctx->pc = 0x3AA3B0u;
    SET_GPR_U32(ctx, 31, 0x3AA3B8u);
    ctx->pc = 0x3AA3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3B0u;
    // 0x3aa3b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AA3B0u, 0x3AA3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA3B8u;
label_3aa3b8:
    // 0x3aa3b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aa3bc:
    // 0x3aa3bc: 0x7bb008c0  lq          $s0, 0x8C0($sp)
    ctx->pc = 0x3aa3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3aa3c0:
    // 0x3aa3c0: 0x7bb108b0  lq          $s1, 0x8B0($sp)
    ctx->pc = 0x3aa3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3aa3c4:
    // 0x3aa3c4: 0x7bb208a0  lq          $s2, 0x8A0($sp)
    ctx->pc = 0x3aa3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3aa3c8:
    // 0x3aa3c8: 0x7bb30890  lq          $s3, 0x890($sp)
    ctx->pc = 0x3aa3c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3aa3cc:
    // 0x3aa3cc: 0x7bb40880  lq          $s4, 0x880($sp)
    ctx->pc = 0x3aa3ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3aa3d0:
    // 0x3aa3d0: 0xdfbf0870  ld          $ra, 0x870($sp)
    ctx->pc = 0x3aa3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2160)));
label_3aa3d4:
    // 0x3aa3d4: 0x3e00008  jr          $ra
label_3aa3d8:
    if (ctx->pc == 0x3AA3D8u) {
        ctx->pc = 0x3AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3D4u;
        // 0x3aa3d8: 0x27bd08d0  addiu       $sp, $sp, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA3DCu;
        goto label_3aa3dc;
    }
    ctx->pc = 0x3AA3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3D4u;
        // 0x3aa3d8: 0x27bd08d0  addiu       $sp, $sp, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA3DCu;
label_3aa3dc:
    // 0x3aa3dc: 0x0  nop
    ctx->pc = 0x3aa3dcu;
    // NOP
    ctx->pc = 0x3aa3e0u;
}
