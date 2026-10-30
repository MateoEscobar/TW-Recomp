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

// Function: sub_002802A0
// Address: 0x2802a0 - 0x280548
void sub_002802A0_0x2802a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002802A0_0x2802a0");
#endif

    switch (ctx->pc) {
        case 0x2802a0u: goto label_2802a0;
        case 0x2802a4u: goto label_2802a4;
        case 0x2802a8u: goto label_2802a8;
        case 0x2802acu: goto label_2802ac;
        case 0x2802b0u: goto label_2802b0;
        case 0x2802b4u: goto label_2802b4;
        case 0x2802b8u: goto label_2802b8;
        case 0x2802bcu: goto label_2802bc;
        case 0x2802c0u: goto label_2802c0;
        case 0x2802c4u: goto label_2802c4;
        case 0x2802c8u: goto label_2802c8;
        case 0x2802ccu: goto label_2802cc;
        case 0x2802d0u: goto label_2802d0;
        case 0x2802d4u: goto label_2802d4;
        case 0x2802d8u: goto label_2802d8;
        case 0x2802dcu: goto label_2802dc;
        case 0x2802e0u: goto label_2802e0;
        case 0x2802e4u: goto label_2802e4;
        case 0x2802e8u: goto label_2802e8;
        case 0x2802ecu: goto label_2802ec;
        case 0x2802f0u: goto label_2802f0;
        case 0x2802f4u: goto label_2802f4;
        case 0x2802f8u: goto label_2802f8;
        case 0x2802fcu: goto label_2802fc;
        case 0x280300u: goto label_280300;
        case 0x280304u: goto label_280304;
        case 0x280308u: goto label_280308;
        case 0x28030cu: goto label_28030c;
        case 0x280310u: goto label_280310;
        case 0x280314u: goto label_280314;
        case 0x280318u: goto label_280318;
        case 0x28031cu: goto label_28031c;
        case 0x280320u: goto label_280320;
        case 0x280324u: goto label_280324;
        case 0x280328u: goto label_280328;
        case 0x28032cu: goto label_28032c;
        case 0x280330u: goto label_280330;
        case 0x280334u: goto label_280334;
        case 0x280338u: goto label_280338;
        case 0x28033cu: goto label_28033c;
        case 0x280340u: goto label_280340;
        case 0x280344u: goto label_280344;
        case 0x280348u: goto label_280348;
        case 0x28034cu: goto label_28034c;
        case 0x280350u: goto label_280350;
        case 0x280354u: goto label_280354;
        case 0x280358u: goto label_280358;
        case 0x28035cu: goto label_28035c;
        case 0x280360u: goto label_280360;
        case 0x280364u: goto label_280364;
        case 0x280368u: goto label_280368;
        case 0x28036cu: goto label_28036c;
        case 0x280370u: goto label_280370;
        case 0x280374u: goto label_280374;
        case 0x280378u: goto label_280378;
        case 0x28037cu: goto label_28037c;
        case 0x280380u: goto label_280380;
        case 0x280384u: goto label_280384;
        case 0x280388u: goto label_280388;
        case 0x28038cu: goto label_28038c;
        case 0x280390u: goto label_280390;
        case 0x280394u: goto label_280394;
        case 0x280398u: goto label_280398;
        case 0x28039cu: goto label_28039c;
        case 0x2803a0u: goto label_2803a0;
        case 0x2803a4u: goto label_2803a4;
        case 0x2803a8u: goto label_2803a8;
        case 0x2803acu: goto label_2803ac;
        case 0x2803b0u: goto label_2803b0;
        case 0x2803b4u: goto label_2803b4;
        case 0x2803b8u: goto label_2803b8;
        case 0x2803bcu: goto label_2803bc;
        case 0x2803c0u: goto label_2803c0;
        case 0x2803c4u: goto label_2803c4;
        case 0x2803c8u: goto label_2803c8;
        case 0x2803ccu: goto label_2803cc;
        case 0x2803d0u: goto label_2803d0;
        case 0x2803d4u: goto label_2803d4;
        case 0x2803d8u: goto label_2803d8;
        case 0x2803dcu: goto label_2803dc;
        case 0x2803e0u: goto label_2803e0;
        case 0x2803e4u: goto label_2803e4;
        case 0x2803e8u: goto label_2803e8;
        case 0x2803ecu: goto label_2803ec;
        case 0x2803f0u: goto label_2803f0;
        case 0x2803f4u: goto label_2803f4;
        case 0x2803f8u: goto label_2803f8;
        case 0x2803fcu: goto label_2803fc;
        case 0x280400u: goto label_280400;
        case 0x280404u: goto label_280404;
        case 0x280408u: goto label_280408;
        case 0x28040cu: goto label_28040c;
        case 0x280410u: goto label_280410;
        case 0x280414u: goto label_280414;
        case 0x280418u: goto label_280418;
        case 0x28041cu: goto label_28041c;
        case 0x280420u: goto label_280420;
        case 0x280424u: goto label_280424;
        case 0x280428u: goto label_280428;
        case 0x28042cu: goto label_28042c;
        case 0x280430u: goto label_280430;
        case 0x280434u: goto label_280434;
        case 0x280438u: goto label_280438;
        case 0x28043cu: goto label_28043c;
        case 0x280440u: goto label_280440;
        case 0x280444u: goto label_280444;
        case 0x280448u: goto label_280448;
        case 0x28044cu: goto label_28044c;
        case 0x280450u: goto label_280450;
        case 0x280454u: goto label_280454;
        case 0x280458u: goto label_280458;
        case 0x28045cu: goto label_28045c;
        case 0x280460u: goto label_280460;
        case 0x280464u: goto label_280464;
        case 0x280468u: goto label_280468;
        case 0x28046cu: goto label_28046c;
        case 0x280470u: goto label_280470;
        case 0x280474u: goto label_280474;
        case 0x280478u: goto label_280478;
        case 0x28047cu: goto label_28047c;
        case 0x280480u: goto label_280480;
        case 0x280484u: goto label_280484;
        case 0x280488u: goto label_280488;
        case 0x28048cu: goto label_28048c;
        case 0x280490u: goto label_280490;
        case 0x280494u: goto label_280494;
        case 0x280498u: goto label_280498;
        case 0x28049cu: goto label_28049c;
        case 0x2804a0u: goto label_2804a0;
        case 0x2804a4u: goto label_2804a4;
        case 0x2804a8u: goto label_2804a8;
        case 0x2804acu: goto label_2804ac;
        case 0x2804b0u: goto label_2804b0;
        case 0x2804b4u: goto label_2804b4;
        case 0x2804b8u: goto label_2804b8;
        case 0x2804bcu: goto label_2804bc;
        case 0x2804c0u: goto label_2804c0;
        case 0x2804c4u: goto label_2804c4;
        case 0x2804c8u: goto label_2804c8;
        case 0x2804ccu: goto label_2804cc;
        case 0x2804d0u: goto label_2804d0;
        case 0x2804d4u: goto label_2804d4;
        case 0x2804d8u: goto label_2804d8;
        case 0x2804dcu: goto label_2804dc;
        case 0x2804e0u: goto label_2804e0;
        case 0x2804e4u: goto label_2804e4;
        case 0x2804e8u: goto label_2804e8;
        case 0x2804ecu: goto label_2804ec;
        case 0x2804f0u: goto label_2804f0;
        case 0x2804f4u: goto label_2804f4;
        case 0x2804f8u: goto label_2804f8;
        case 0x2804fcu: goto label_2804fc;
        case 0x280500u: goto label_280500;
        case 0x280504u: goto label_280504;
        case 0x280508u: goto label_280508;
        case 0x28050cu: goto label_28050c;
        case 0x280510u: goto label_280510;
        case 0x280514u: goto label_280514;
        case 0x280518u: goto label_280518;
        case 0x28051cu: goto label_28051c;
        case 0x280520u: goto label_280520;
        case 0x280524u: goto label_280524;
        case 0x280528u: goto label_280528;
        case 0x28052cu: goto label_28052c;
        case 0x280530u: goto label_280530;
        case 0x280534u: goto label_280534;
        case 0x280538u: goto label_280538;
        case 0x28053cu: goto label_28053c;
        case 0x280540u: goto label_280540;
        case 0x280544u: goto label_280544;
        default: break;
    }

    ctx->pc = 0x2802a0u;

label_2802a0:
    // 0x2802a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2802a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2802a4:
    // 0x2802a4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2802a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2802a8:
    // 0x2802a8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2802a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2802ac:
    // 0x2802ac: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2802acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2802b0:
    // 0x2802b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2802b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2802b4:
    // 0x2802b4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2802b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2802b8:
    // 0x2802b8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2802b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2802bc:
    // 0x2802bc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2802bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2802c0:
    // 0x2802c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2802c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2802c4:
    // 0x2802c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2802c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2802c8:
    // 0x2802c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2802c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2802cc:
    // 0x2802cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2802ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2802d0:
    // 0x2802d0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2802d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2802d4:
    // 0x2802d4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2802d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2802d8:
    // 0x2802d8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2802d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2802dc:
    // 0x2802dc: 0x40f809  jalr        $v0
label_2802e0:
    if (ctx->pc == 0x2802E0u) {
        ctx->pc = 0x2802E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802DCu;
        // 0x2802e0: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2802E4u;
        goto label_2802e4;
    }
    ctx->pc = 0x2802DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2802E4u);
        ctx->pc = 0x2802E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802DCu;
        // 0x2802e0: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2802DCu, 0x2802E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2802E4u;
label_2802e4:
    // 0x2802e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2802e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2802e8:
    // 0x2802e8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2802e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2802ec:
    // 0x2802ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2802ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2802f0:
    // 0x2802f0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2802f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2802f4:
    // 0x2802f4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2802f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2802f8:
    // 0x2802f8: 0x40f809  jalr        $v0
label_2802fc:
    if (ctx->pc == 0x2802FCu) {
        ctx->pc = 0x2802FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802F8u;
        // 0x2802fc: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280300u;
        goto label_280300;
    }
    ctx->pc = 0x2802F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x280300u);
        ctx->pc = 0x2802FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802F8u;
        // 0x2802fc: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2802F8u, 0x280300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x280300u;
label_280300:
    // 0x280300: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x280300u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_280304:
    // 0x280304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280308:
    // 0x280308: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x280308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28030c:
    // 0x28030c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x28030cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_280310:
    // 0x280310: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x280310u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_280314:
    // 0x280314: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x280314u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_280318:
    // 0x280318: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x280318u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_28031c:
    // 0x28031c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x28031cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_280320:
    // 0x280320: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x280320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_280324:
    // 0x280324: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x280324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_280328:
    // 0x280328: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x280328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_28032c:
    // 0x28032c: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x28032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_280330:
    // 0x280330: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x280330u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_280334:
    // 0x280334: 0x60f809  jalr        $v1
label_280338:
    if (ctx->pc == 0x280338u) {
        ctx->pc = 0x280338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280334u;
        // 0x280338: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28033Cu;
        goto label_28033c;
    }
    ctx->pc = 0x280334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28033Cu);
        ctx->pc = 0x280338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280334u;
        // 0x280338: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280334u, 0x28033Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28033Cu;
label_28033c:
    // 0x28033c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x28033cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_280340:
    // 0x280340: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x280340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_280344:
    // 0x280344: 0x4bc1006c  vsub.xyz    $vf1, $vf0, $vf1
    ctx->pc = 0x280344u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_280348:
    // 0x280348: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x280348u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_28034c:
    // 0x28034c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x28034cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_280350:
    // 0x280350: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x280350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_280354:
    // 0x280354: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x280354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_280358:
    // 0x280358: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x280358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_28035c:
    // 0x28035c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x28035cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_280360:
    // 0x280360: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x280360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_280364:
    // 0x280364: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x280364u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_280368:
    // 0x280368: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x280368u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_28036c:
    // 0x28036c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x28036cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_280370:
    // 0x280370: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x280370u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_280374:
    // 0x280374: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x280374u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_280378:
    // 0x280378: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x280378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_28037c:
    // 0x28037c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28037cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_280380:
    // 0x280380: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x280380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_280384:
    // 0x280384: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x280384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_280388:
    // 0x280388: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x280388u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_28038c:
    // 0x28038c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x28038cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_280390:
    // 0x280390: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x280390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_280394:
    // 0x280394: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x280394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_280398:
    // 0x280398: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x280398u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_28039c:
    // 0x28039c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x28039cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2803a0:
    // 0x2803a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2803a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2803a4:
    // 0x2803a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2803a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2803a8:
    // 0x2803a8: 0x4bc1006c  vsub.xyz    $vf1, $vf0, $vf1
    ctx->pc = 0x2803a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2803ac:
    // 0x2803ac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2803acu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2803b0:
    // 0x2803b0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2803b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2803b4:
    // 0x2803b4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2803b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2803b8:
    // 0x2803b8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2803b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2803bc:
    // 0x2803bc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2803bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2803c0:
    // 0x2803c0: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x2803c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_2803c4:
    // 0x2803c4: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x2803c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_2803c8:
    // 0x2803c8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2803c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2803cc:
    // 0x2803cc: 0x40f809  jalr        $v0
label_2803d0:
    if (ctx->pc == 0x2803D0u) {
        ctx->pc = 0x2803D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803CCu;
        // 0x2803d0: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2803D4u;
        goto label_2803d4;
    }
    ctx->pc = 0x2803CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2803D4u);
        ctx->pc = 0x2803D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803CCu;
        // 0x2803d0: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2803CCu, 0x2803D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2803D4u;
label_2803d4:
    // 0x2803d4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2803d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2803d8:
    // 0x2803d8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2803d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2803dc:
    // 0x2803dc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2803dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2803e0:
    // 0x2803e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2803e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2803e4:
    // 0x2803e4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x2803e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2803e8:
    // 0x2803e8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2803e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2803ec:
    // 0x2803ec: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2803ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2803f0:
    // 0x2803f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2803f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2803f4:
    // 0x2803f4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x2803f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2803f8:
    // 0x2803f8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x2803f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2803fc:
    // 0x2803fc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2803fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_280400:
    // 0x280400: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x280400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_280404:
    // 0x280404: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x280404u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_280408:
    // 0x280408: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x280408u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_28040c:
    // 0x28040c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x28040cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_280410:
    // 0x280410: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x280410u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_280414:
    // 0x280414: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x280414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_280418:
    // 0x280418: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x280418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_28041c:
    // 0x28041c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x28041cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_280420:
    // 0x280420: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x280420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_280424:
    // 0x280424: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x280424u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_280428:
    // 0x280428: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x280428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28042c:
    // 0x28042c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28042cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_280430:
    // 0x280430: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x280430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_280434:
    // 0x280434: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x280434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_280438:
    // 0x280438: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x280438u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28043c:
    // 0x28043c: 0x0  nop
    ctx->pc = 0x28043cu;
    // NOP
label_280440:
    // 0x280440: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_280444:
    if (ctx->pc == 0x280444u) {
        ctx->pc = 0x280444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280440u;
        // 0x280444: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280448u;
        goto label_280448;
    }
    ctx->pc = 0x280440u;
    {
        const bool branch_taken_0x280440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280440u;
        // 0x280444: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280440) {
            ctx->pc = 0x280468u;
            goto label_280468;
        }
    }
    ctx->pc = 0x280448u;
label_280448:
    // 0x280448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28044c:
    // 0x28044c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28044cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280450:
    // 0x280450: 0x0  nop
    ctx->pc = 0x280450u;
    // NOP
label_280454:
    // 0x280454: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x280454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_280458:
    // 0x280458: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x280458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_28045c:
    // 0x28045c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x28045cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_280460:
    // 0x280460: 0x1000000d  b           . + 4 + (0xD << 2)
label_280464:
    if (ctx->pc == 0x280464u) {
        ctx->pc = 0x280464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280460u;
        // 0x280464: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280468u;
        goto label_280468;
    }
    ctx->pc = 0x280460u;
    {
        const bool branch_taken_0x280460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280460u;
        // 0x280464: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280460) {
            ctx->pc = 0x280498u;
            goto label_280498;
        }
    }
    ctx->pc = 0x280468u;
label_280468:
    // 0x280468: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28046c:
    // 0x28046c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28046cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280470:
    // 0x280470: 0x0  nop
    ctx->pc = 0x280470u;
    // NOP
label_280474:
    // 0x280474: 0x0  nop
    ctx->pc = 0x280474u;
    // NOP
label_280478:
    // 0x280478: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x280478u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[2]);
label_28047c:
    // 0x28047c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28047cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_280480:
    // 0x280480: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x280480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_280484:
    // 0x280484: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x280484u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_280488:
    // 0x280488: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x280488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_28048c:
    // 0x28048c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x28048cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_280490:
    // 0x280490: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x280490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_280494:
    // 0x280494: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x280494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_280498:
    // 0x280498: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x280498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28049c:
    // 0x28049c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x28049cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2804a0:
    // 0x2804a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2804a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2804a4:
    // 0x2804a4: 0x40f809  jalr        $v0
label_2804a8:
    if (ctx->pc == 0x2804A8u) {
        ctx->pc = 0x2804A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804A4u;
        // 0x2804a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2804ACu;
        goto label_2804ac;
    }
    ctx->pc = 0x2804A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2804ACu);
        ctx->pc = 0x2804A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804A4u;
        // 0x2804a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2804A4u, 0x2804ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2804ACu;
label_2804ac:
    // 0x2804ac: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2804acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2804b0:
    // 0x2804b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2804b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2804b4:
    // 0x2804b4: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x2804b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2804b8:
    // 0x2804b8: 0x7e8300b0  sq          $v1, 0xB0($s4)
    ctx->pc = 0x2804b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 176), GPR_VEC(ctx, 3));
label_2804bc:
    // 0x2804bc: 0xae8200c0  sw          $v0, 0xC0($s4)
    ctx->pc = 0x2804bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 2));
label_2804c0:
    // 0x2804c0: 0x7e8500a0  sq          $a1, 0xA0($s4)
    ctx->pc = 0x2804c0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 160), GPR_VEC(ctx, 5));
label_2804c4:
    // 0x2804c4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2804c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2804c8:
    // 0x2804c8: 0xc08840e  jal         func_221038
label_2804cc:
    if (ctx->pc == 0x2804CCu) {
        ctx->pc = 0x2804CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804C8u;
        // 0x2804cc: 0x7fa50030  sq          $a1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2804D0u;
        goto label_2804d0;
    }
    ctx->pc = 0x2804C8u;
    SET_GPR_U32(ctx, 31, 0x2804D0u);
    ctx->pc = 0x2804CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804C8u;
    // 0x2804cc: 0x7fa50030  sq          $a1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x2804C8u, 0x2804D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804D0u;
label_2804d0:
    // 0x2804d0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2804d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2804d4:
    // 0x2804d4: 0x2443e8b8  addiu       $v1, $v0, -0x1748
    ctx->pc = 0x2804d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961336));
label_2804d8:
    // 0x2804d8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x2804d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2804dc:
    // 0x2804dc: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x2804dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2804e0:
    // 0x2804e0: 0xb28501c3  sdl         $a1, 0x1C3($s4)
    ctx->pc = 0x2804e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2804e4:
    // 0x2804e4: 0xb68501bc  sdr         $a1, 0x1BC($s4)
    ctx->pc = 0x2804e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2804e8:
    // 0x2804e8: 0xc0874fa  jal         func_21D3E8
label_2804ec:
    if (ctx->pc == 0x2804ECu) {
        ctx->pc = 0x2804ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804E8u;
        // 0x2804ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2804F0u;
        goto label_2804f0;
    }
    ctx->pc = 0x2804E8u;
    SET_GPR_U32(ctx, 31, 0x2804F0u);
    ctx->pc = 0x2804ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804E8u;
    // 0x2804ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2804E8u, 0x2804F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2804F0u;
label_2804f0:
    // 0x2804f0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2804f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2804f4:
    // 0x2804f4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2804f8:
    if (ctx->pc == 0x2804F8u) {
        ctx->pc = 0x2804F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804F4u;
        // 0x2804f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2804FCu;
        goto label_2804fc;
    }
    ctx->pc = 0x2804F4u;
    {
        const bool branch_taken_0x2804f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2804F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804F4u;
        // 0x2804f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804f4) {
            ctx->pc = 0x280520u;
            goto label_280520;
        }
    }
    ctx->pc = 0x2804FCu;
label_2804fc:
    // 0x2804fc: 0xc08840e  jal         func_221038
label_280500:
    if (ctx->pc == 0x280500u) {
        ctx->pc = 0x280500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804FCu;
        // 0x280500: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280504u;
        goto label_280504;
    }
    ctx->pc = 0x2804FCu;
    SET_GPR_U32(ctx, 31, 0x280504u);
    ctx->pc = 0x280500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2804FCu;
    // 0x280500: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x2804FCu, 0x280504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280504u;
label_280504:
    // 0x280504: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x280504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_280508:
    // 0x280508: 0x2447e8a8  addiu       $a3, $v0, -0x1758
    ctx->pc = 0x280508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961320));
label_28050c:
    // 0x28050c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x28050cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_280510:
    // 0x280510: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x280510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_280514:
    // 0x280514: 0xb26401c3  sdl         $a0, 0x1C3($s3)
    ctx->pc = 0x280514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_280518:
    // 0x280518: 0xb66401bc  sdr         $a0, 0x1BC($s3)
    ctx->pc = 0x280518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28051c:
    // 0x28051c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28051cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_280520:
    // 0x280520: 0xc086b68  jal         func_21ADA0
label_280524:
    if (ctx->pc == 0x280524u) {
        ctx->pc = 0x280524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280520u;
        // 0x280524: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280528u;
        goto label_280528;
    }
    ctx->pc = 0x280520u;
    SET_GPR_U32(ctx, 31, 0x280528u);
    ctx->pc = 0x280524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280520u;
    // 0x280524: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ADA0u, 0x280520u, 0x280528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280528u;
label_280528:
    // 0x280528: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x280528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28052c:
    // 0x28052c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x28052cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_280530:
    // 0x280530: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x280530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_280534:
    // 0x280534: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x280534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_280538:
    // 0x280538: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x280538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28053c:
    // 0x28053c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_280540:
    // 0x280540: 0x3e00008  jr          $ra
label_280544:
    if (ctx->pc == 0x280544u) {
        ctx->pc = 0x280544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280540u;
        // 0x280544: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280548u;
        goto label_fallthrough_0x280540;
    }
    ctx->pc = 0x280540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280540u;
        // 0x280544: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x280540:
    ctx->pc = 0x280548u;
}
