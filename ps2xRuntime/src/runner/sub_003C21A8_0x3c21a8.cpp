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

// Function: sub_003C21A8
// Address: 0x3c21a8 - 0x3c24e8
void sub_003C21A8_0x3c21a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C21A8_0x3c21a8");
#endif

    switch (ctx->pc) {
        case 0x3c21a8u: goto label_3c21a8;
        case 0x3c21acu: goto label_3c21ac;
        case 0x3c21b0u: goto label_3c21b0;
        case 0x3c21b4u: goto label_3c21b4;
        case 0x3c21b8u: goto label_3c21b8;
        case 0x3c21bcu: goto label_3c21bc;
        case 0x3c21c0u: goto label_3c21c0;
        case 0x3c21c4u: goto label_3c21c4;
        case 0x3c21c8u: goto label_3c21c8;
        case 0x3c21ccu: goto label_3c21cc;
        case 0x3c21d0u: goto label_3c21d0;
        case 0x3c21d4u: goto label_3c21d4;
        case 0x3c21d8u: goto label_3c21d8;
        case 0x3c21dcu: goto label_3c21dc;
        case 0x3c21e0u: goto label_3c21e0;
        case 0x3c21e4u: goto label_3c21e4;
        case 0x3c21e8u: goto label_3c21e8;
        case 0x3c21ecu: goto label_3c21ec;
        case 0x3c21f0u: goto label_3c21f0;
        case 0x3c21f4u: goto label_3c21f4;
        case 0x3c21f8u: goto label_3c21f8;
        case 0x3c21fcu: goto label_3c21fc;
        case 0x3c2200u: goto label_3c2200;
        case 0x3c2204u: goto label_3c2204;
        case 0x3c2208u: goto label_3c2208;
        case 0x3c220cu: goto label_3c220c;
        case 0x3c2210u: goto label_3c2210;
        case 0x3c2214u: goto label_3c2214;
        case 0x3c2218u: goto label_3c2218;
        case 0x3c221cu: goto label_3c221c;
        case 0x3c2220u: goto label_3c2220;
        case 0x3c2224u: goto label_3c2224;
        case 0x3c2228u: goto label_3c2228;
        case 0x3c222cu: goto label_3c222c;
        case 0x3c2230u: goto label_3c2230;
        case 0x3c2234u: goto label_3c2234;
        case 0x3c2238u: goto label_3c2238;
        case 0x3c223cu: goto label_3c223c;
        case 0x3c2240u: goto label_3c2240;
        case 0x3c2244u: goto label_3c2244;
        case 0x3c2248u: goto label_3c2248;
        case 0x3c224cu: goto label_3c224c;
        case 0x3c2250u: goto label_3c2250;
        case 0x3c2254u: goto label_3c2254;
        case 0x3c2258u: goto label_3c2258;
        case 0x3c225cu: goto label_3c225c;
        case 0x3c2260u: goto label_3c2260;
        case 0x3c2264u: goto label_3c2264;
        case 0x3c2268u: goto label_3c2268;
        case 0x3c226cu: goto label_3c226c;
        case 0x3c2270u: goto label_3c2270;
        case 0x3c2274u: goto label_3c2274;
        case 0x3c2278u: goto label_3c2278;
        case 0x3c227cu: goto label_3c227c;
        case 0x3c2280u: goto label_3c2280;
        case 0x3c2284u: goto label_3c2284;
        case 0x3c2288u: goto label_3c2288;
        case 0x3c228cu: goto label_3c228c;
        case 0x3c2290u: goto label_3c2290;
        case 0x3c2294u: goto label_3c2294;
        case 0x3c2298u: goto label_3c2298;
        case 0x3c229cu: goto label_3c229c;
        case 0x3c22a0u: goto label_3c22a0;
        case 0x3c22a4u: goto label_3c22a4;
        case 0x3c22a8u: goto label_3c22a8;
        case 0x3c22acu: goto label_3c22ac;
        case 0x3c22b0u: goto label_3c22b0;
        case 0x3c22b4u: goto label_3c22b4;
        case 0x3c22b8u: goto label_3c22b8;
        case 0x3c22bcu: goto label_3c22bc;
        case 0x3c22c0u: goto label_3c22c0;
        case 0x3c22c4u: goto label_3c22c4;
        case 0x3c22c8u: goto label_3c22c8;
        case 0x3c22ccu: goto label_3c22cc;
        case 0x3c22d0u: goto label_3c22d0;
        case 0x3c22d4u: goto label_3c22d4;
        case 0x3c22d8u: goto label_3c22d8;
        case 0x3c22dcu: goto label_3c22dc;
        case 0x3c22e0u: goto label_3c22e0;
        case 0x3c22e4u: goto label_3c22e4;
        case 0x3c22e8u: goto label_3c22e8;
        case 0x3c22ecu: goto label_3c22ec;
        case 0x3c22f0u: goto label_3c22f0;
        case 0x3c22f4u: goto label_3c22f4;
        case 0x3c22f8u: goto label_3c22f8;
        case 0x3c22fcu: goto label_3c22fc;
        case 0x3c2300u: goto label_3c2300;
        case 0x3c2304u: goto label_3c2304;
        case 0x3c2308u: goto label_3c2308;
        case 0x3c230cu: goto label_3c230c;
        case 0x3c2310u: goto label_3c2310;
        case 0x3c2314u: goto label_3c2314;
        case 0x3c2318u: goto label_3c2318;
        case 0x3c231cu: goto label_3c231c;
        case 0x3c2320u: goto label_3c2320;
        case 0x3c2324u: goto label_3c2324;
        case 0x3c2328u: goto label_3c2328;
        case 0x3c232cu: goto label_3c232c;
        case 0x3c2330u: goto label_3c2330;
        case 0x3c2334u: goto label_3c2334;
        case 0x3c2338u: goto label_3c2338;
        case 0x3c233cu: goto label_3c233c;
        case 0x3c2340u: goto label_3c2340;
        case 0x3c2344u: goto label_3c2344;
        case 0x3c2348u: goto label_3c2348;
        case 0x3c234cu: goto label_3c234c;
        case 0x3c2350u: goto label_3c2350;
        case 0x3c2354u: goto label_3c2354;
        case 0x3c2358u: goto label_3c2358;
        case 0x3c235cu: goto label_3c235c;
        case 0x3c2360u: goto label_3c2360;
        case 0x3c2364u: goto label_3c2364;
        case 0x3c2368u: goto label_3c2368;
        case 0x3c236cu: goto label_3c236c;
        case 0x3c2370u: goto label_3c2370;
        case 0x3c2374u: goto label_3c2374;
        case 0x3c2378u: goto label_3c2378;
        case 0x3c237cu: goto label_3c237c;
        case 0x3c2380u: goto label_3c2380;
        case 0x3c2384u: goto label_3c2384;
        case 0x3c2388u: goto label_3c2388;
        case 0x3c238cu: goto label_3c238c;
        case 0x3c2390u: goto label_3c2390;
        case 0x3c2394u: goto label_3c2394;
        case 0x3c2398u: goto label_3c2398;
        case 0x3c239cu: goto label_3c239c;
        case 0x3c23a0u: goto label_3c23a0;
        case 0x3c23a4u: goto label_3c23a4;
        case 0x3c23a8u: goto label_3c23a8;
        case 0x3c23acu: goto label_3c23ac;
        case 0x3c23b0u: goto label_3c23b0;
        case 0x3c23b4u: goto label_3c23b4;
        case 0x3c23b8u: goto label_3c23b8;
        case 0x3c23bcu: goto label_3c23bc;
        case 0x3c23c0u: goto label_3c23c0;
        case 0x3c23c4u: goto label_3c23c4;
        case 0x3c23c8u: goto label_3c23c8;
        case 0x3c23ccu: goto label_3c23cc;
        case 0x3c23d0u: goto label_3c23d0;
        case 0x3c23d4u: goto label_3c23d4;
        case 0x3c23d8u: goto label_3c23d8;
        case 0x3c23dcu: goto label_3c23dc;
        case 0x3c23e0u: goto label_3c23e0;
        case 0x3c23e4u: goto label_3c23e4;
        case 0x3c23e8u: goto label_3c23e8;
        case 0x3c23ecu: goto label_3c23ec;
        case 0x3c23f0u: goto label_3c23f0;
        case 0x3c23f4u: goto label_3c23f4;
        case 0x3c23f8u: goto label_3c23f8;
        case 0x3c23fcu: goto label_3c23fc;
        case 0x3c2400u: goto label_3c2400;
        case 0x3c2404u: goto label_3c2404;
        case 0x3c2408u: goto label_3c2408;
        case 0x3c240cu: goto label_3c240c;
        case 0x3c2410u: goto label_3c2410;
        case 0x3c2414u: goto label_3c2414;
        case 0x3c2418u: goto label_3c2418;
        case 0x3c241cu: goto label_3c241c;
        case 0x3c2420u: goto label_3c2420;
        case 0x3c2424u: goto label_3c2424;
        case 0x3c2428u: goto label_3c2428;
        case 0x3c242cu: goto label_3c242c;
        case 0x3c2430u: goto label_3c2430;
        case 0x3c2434u: goto label_3c2434;
        case 0x3c2438u: goto label_3c2438;
        case 0x3c243cu: goto label_3c243c;
        case 0x3c2440u: goto label_3c2440;
        case 0x3c2444u: goto label_3c2444;
        case 0x3c2448u: goto label_3c2448;
        case 0x3c244cu: goto label_3c244c;
        case 0x3c2450u: goto label_3c2450;
        case 0x3c2454u: goto label_3c2454;
        case 0x3c2458u: goto label_3c2458;
        case 0x3c245cu: goto label_3c245c;
        case 0x3c2460u: goto label_3c2460;
        case 0x3c2464u: goto label_3c2464;
        case 0x3c2468u: goto label_3c2468;
        case 0x3c246cu: goto label_3c246c;
        case 0x3c2470u: goto label_3c2470;
        case 0x3c2474u: goto label_3c2474;
        case 0x3c2478u: goto label_3c2478;
        case 0x3c247cu: goto label_3c247c;
        case 0x3c2480u: goto label_3c2480;
        case 0x3c2484u: goto label_3c2484;
        case 0x3c2488u: goto label_3c2488;
        case 0x3c248cu: goto label_3c248c;
        case 0x3c2490u: goto label_3c2490;
        case 0x3c2494u: goto label_3c2494;
        case 0x3c2498u: goto label_3c2498;
        case 0x3c249cu: goto label_3c249c;
        case 0x3c24a0u: goto label_3c24a0;
        case 0x3c24a4u: goto label_3c24a4;
        case 0x3c24a8u: goto label_3c24a8;
        case 0x3c24acu: goto label_3c24ac;
        case 0x3c24b0u: goto label_3c24b0;
        case 0x3c24b4u: goto label_3c24b4;
        case 0x3c24b8u: goto label_3c24b8;
        case 0x3c24bcu: goto label_3c24bc;
        case 0x3c24c0u: goto label_3c24c0;
        case 0x3c24c4u: goto label_3c24c4;
        case 0x3c24c8u: goto label_3c24c8;
        case 0x3c24ccu: goto label_3c24cc;
        case 0x3c24d0u: goto label_3c24d0;
        case 0x3c24d4u: goto label_3c24d4;
        case 0x3c24d8u: goto label_3c24d8;
        case 0x3c24dcu: goto label_3c24dc;
        case 0x3c24e0u: goto label_3c24e0;
        case 0x3c24e4u: goto label_3c24e4;
        default: break;
    }

    ctx->pc = 0x3c21a8u;

label_3c21a8:
    // 0x3c21a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3c21a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3c21ac:
    // 0x3c21ac: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3c21acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3c21b0:
    // 0x3c21b0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3c21b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3c21b4:
    // 0x3c21b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c21b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c21b8:
    // 0x3c21b8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3c21b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3c21bc:
    // 0x3c21bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c21bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c21c0:
    // 0x3c21c0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3c21c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3c21c4:
    // 0x3c21c4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3c21c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3c21c8:
    // 0x3c21c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c21c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c21cc:
    // 0x3c21cc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3c21ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3c21d0:
    // 0x3c21d0: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x3c21d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3c21d4:
    // 0x3c21d4: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x3c21d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3c21d8:
    // 0x3c21d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c21d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c21dc:
    // 0x3c21dc: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x3c21dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3c21e0:
    // 0x3c21e0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3c21e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3c21e4:
    // 0x3c21e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c21e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c21e8:
    // 0x3c21e8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c21e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c21ec:
    // 0x3c21ec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c21f0:
    // 0x3c21f0: 0x40f809  jalr        $v0
label_3c21f4:
    if (ctx->pc == 0x3C21F4u) {
        ctx->pc = 0x3C21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21F0u;
        // 0x3c21f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C21F8u;
        goto label_3c21f8;
    }
    ctx->pc = 0x3C21F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C21F8u);
        ctx->pc = 0x3C21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21F0u;
        // 0x3c21f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C21F0u, 0x3C21F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C21F8u;
label_3c21f8:
    // 0x3c21f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c21f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c21fc:
    // 0x3c21fc: 0xc0ea146  jal         func_3A8518
label_3c2200:
    if (ctx->pc == 0x3C2200u) {
        ctx->pc = 0x3C2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C21FCu;
        // 0x3c2200: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2204u;
        goto label_3c2204;
    }
    ctx->pc = 0x3C21FCu;
    SET_GPR_U32(ctx, 31, 0x3C2204u);
    ctx->pc = 0x3C2200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C21FCu;
    // 0x3c2200: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C21FCu, 0x3C2204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2204u;
label_3c2204:
    // 0x3c2204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2208:
    // 0x3c2208: 0xc0ea146  jal         func_3A8518
label_3c220c:
    if (ctx->pc == 0x3C220Cu) {
        ctx->pc = 0x3C220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2208u;
        // 0x3c220c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2210u;
        goto label_3c2210;
    }
    ctx->pc = 0x3C2208u;
    SET_GPR_U32(ctx, 31, 0x3C2210u);
    ctx->pc = 0x3C220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2208u;
    // 0x3c220c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C2208u, 0x3C2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2210u;
label_3c2210:
    // 0x3c2210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2214:
    // 0x3c2214: 0xc0ea146  jal         func_3A8518
label_3c2218:
    if (ctx->pc == 0x3C2218u) {
        ctx->pc = 0x3C2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2214u;
        // 0x3c2218: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C221Cu;
        goto label_3c221c;
    }
    ctx->pc = 0x3C2214u;
    SET_GPR_U32(ctx, 31, 0x3C221Cu);
    ctx->pc = 0x3C2218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2214u;
    // 0x3c2218: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C2214u, 0x3C221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C221Cu;
label_3c221c:
    // 0x3c221c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c221cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2220:
    // 0x3c2220: 0xc0ea13a  jal         func_3A84E8
label_3c2224:
    if (ctx->pc == 0x3C2224u) {
        ctx->pc = 0x3C2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2220u;
        // 0x3c2224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2228u;
        goto label_3c2228;
    }
    ctx->pc = 0x3C2220u;
    SET_GPR_U32(ctx, 31, 0x3C2228u);
    ctx->pc = 0x3C2224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2220u;
    // 0x3c2224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C2220u, 0x3C2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2228u;
label_3c2228:
    // 0x3c2228: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3c2228u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3c222c:
    // 0x3c222c: 0xc0ea146  jal         func_3A8518
label_3c2230:
    if (ctx->pc == 0x3C2230u) {
        ctx->pc = 0x3C2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C222Cu;
        // 0x3c2230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2234u;
        goto label_3c2234;
    }
    ctx->pc = 0x3C222Cu;
    SET_GPR_U32(ctx, 31, 0x3C2234u);
    ctx->pc = 0x3C2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C222Cu;
    // 0x3c2230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C222Cu, 0x3C2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2234u;
label_3c2234:
    // 0x3c2234: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c2234u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2238:
    // 0x3c2238: 0xc0ea13a  jal         func_3A84E8
label_3c223c:
    if (ctx->pc == 0x3C223Cu) {
        ctx->pc = 0x3C223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2238u;
        // 0x3c223c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2240u;
        goto label_3c2240;
    }
    ctx->pc = 0x3C2238u;
    SET_GPR_U32(ctx, 31, 0x3C2240u);
    ctx->pc = 0x3C223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2238u;
    // 0x3c223c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C2238u, 0x3C2240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2240u;
label_3c2240:
    // 0x3c2240: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3c2240u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3c2244:
    // 0x3c2244: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c2244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c2248:
    // 0x3c2248: 0xc0ea12a  jal         func_3A84A8
label_3c224c:
    if (ctx->pc == 0x3C224Cu) {
        ctx->pc = 0x3C224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2248u;
        // 0x3c224c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2250u;
        goto label_3c2250;
    }
    ctx->pc = 0x3C2248u;
    SET_GPR_U32(ctx, 31, 0x3C2250u);
    ctx->pc = 0x3C224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2248u;
    // 0x3c224c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C2248u, 0x3C2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2250u;
label_3c2250:
    // 0x3c2250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c2250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2254:
    // 0x3c2254: 0xc0ea12a  jal         func_3A84A8
label_3c2258:
    if (ctx->pc == 0x3C2258u) {
        ctx->pc = 0x3C2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2254u;
        // 0x3c2258: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C225Cu;
        goto label_3c225c;
    }
    ctx->pc = 0x3C2254u;
    SET_GPR_U32(ctx, 31, 0x3C225Cu);
    ctx->pc = 0x3C2258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2254u;
    // 0x3c2258: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C2254u, 0x3C225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C225Cu;
label_3c225c:
    // 0x3c225c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c225cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c2260:
    // 0x3c2260: 0x0  nop
    ctx->pc = 0x3c2260u;
    // NOP
label_3c2264:
    // 0x3c2264: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x3c2264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c2268:
    // 0x3c2268: 0x0  nop
    ctx->pc = 0x3c2268u;
    // NOP
label_3c226c:
    // 0x3c226c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_3c2270:
    if (ctx->pc == 0x3C2270u) {
        ctx->pc = 0x3C2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C226Cu;
        // 0x3c2270: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2274u;
        goto label_3c2274;
    }
    ctx->pc = 0x3C226Cu;
    {
        const bool branch_taken_0x3c226c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C226Cu;
        // 0x3c2270: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c226c) {
            ctx->pc = 0x3C22E0u;
            goto label_3c22e0;
        }
    }
    ctx->pc = 0x3C2274u;
label_3c2274:
    // 0x3c2274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c2274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2278:
    // 0x3c2278: 0x2444b8b8  addiu       $a0, $v0, -0x4748
    ctx->pc = 0x3c2278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3c227c:
    // 0x3c227c: 0xc0cd4ee  jal         func_3353B8
label_3c2280:
    if (ctx->pc == 0x3C2280u) {
        ctx->pc = 0x3C2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C227Cu;
        // 0x3c2280: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2284u;
        goto label_3c2284;
    }
    ctx->pc = 0x3C227Cu;
    SET_GPR_U32(ctx, 31, 0x3C2284u);
    ctx->pc = 0x3C2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C227Cu;
    // 0x3c2280: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C227Cu, 0x3C2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2284u;
label_3c2284:
    // 0x3c2284: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x3c2284u;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
label_3c2288:
    // 0x3c2288: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3c2288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3c228c:
    // 0x3c228c: 0x3c041040  lui         $a0, 0x1040
    ctx->pc = 0x3c228cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4160 << 16));
label_3c2290:
    // 0x3c2290: 0x34630021  ori         $v1, $v1, 0x21
    ctx->pc = 0x3c2290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33);
label_3c2294:
    // 0x3c2294: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3c2294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c2298:
    // 0x3c2298: 0x2ac203e8  slti        $v0, $s6, 0x3E8
    ctx->pc = 0x3c2298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)1000) ? 1 : 0);
label_3c229c:
    // 0x3c229c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c22a0:
    if (ctx->pc == 0x3C22A0u) {
        ctx->pc = 0x3C22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C229Cu;
        // 0x3c22a0: 0xae240054  sw          $a0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C22A4u;
        goto label_3c22a4;
    }
    ctx->pc = 0x3C229Cu;
    {
        const bool branch_taken_0x3c229c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C229Cu;
        // 0x3c22a0: 0xae240054  sw          $a0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c229c) {
            ctx->pc = 0x3C22CCu;
            goto label_3c22cc;
        }
    }
    ctx->pc = 0x3C22A4u;
label_3c22a4:
    // 0x3c22a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c22a8:
    // 0x3c22a8: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
label_3c22ac:
    if (ctx->pc == 0x3C22ACu) {
        ctx->pc = 0x3C22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22A8u;
        // 0x3c22ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C22B0u;
        goto label_3c22b0;
    }
    ctx->pc = 0x3C22A8u;
    {
        const bool branch_taken_0x3c22a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22A8u;
        // 0x3c22ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c22a8) {
            ctx->pc = 0x3C22CCu;
            goto label_3c22cc;
        }
    }
    ctx->pc = 0x3C22B0u;
label_3c22b0:
    // 0x3c22b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c22b4:
    // 0x3c22b4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3c22b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3c22b8:
    // 0x3c22b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c22b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c22bc:
    // 0x3c22bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c22bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c22c0:
    // 0x3c22c0: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3c22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3c22c4:
    // 0x3c22c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_3c22c8:
    if (ctx->pc == 0x3C22C8u) {
        ctx->pc = 0x3C22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22C4u;
        // 0x3c22c8: 0xae440024  sw          $a0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C22CCu;
        goto label_3c22cc;
    }
    ctx->pc = 0x3C22C4u;
    {
        const bool branch_taken_0x3c22c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22C4u;
        // 0x3c22c8: 0xae440024  sw          $a0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c22c4) {
            ctx->pc = 0x3C22FCu;
            goto label_3c22fc;
        }
    }
    ctx->pc = 0x3C22CCu;
label_3c22cc:
    // 0x3c22cc: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x3c22ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_3c22d0:
    // 0x3c22d0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3c22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3c22d4:
    // 0x3c22d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c22d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c22d8:
    // 0x3c22d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c22dc:
    if (ctx->pc == 0x3C22DCu) {
        ctx->pc = 0x3C22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22D8u;
        // 0x3c22dc: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C22E0u;
        goto label_3c22e0;
    }
    ctx->pc = 0x3C22D8u;
    {
        const bool branch_taken_0x3c22d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22D8u;
        // 0x3c22dc: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c22d8) {
            ctx->pc = 0x3C22F8u;
            goto label_3c22f8;
        }
    }
    ctx->pc = 0x3C22E0u;
label_3c22e0:
    // 0x3c22e0: 0x3c021040  lui         $v0, 0x1040
    ctx->pc = 0x3c22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4160 << 16));
label_3c22e4:
    // 0x3c22e4: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x3c22e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_3c22e8:
    // 0x3c22e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3c22e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3c22ec:
    // 0x3c22ec: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x3c22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_3c22f0:
    // 0x3c22f0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3c22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3c22f4:
    // 0x3c22f4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3c22f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3c22f8:
    // 0x3c22f8: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3c22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_3c22fc:
    // 0x3c22fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c2300:
    // 0x3c2300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c2300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2304:
    // 0x3c2304: 0xc1073cc  jal         func_41CF30
label_3c2308:
    if (ctx->pc == 0x3C2308u) {
        ctx->pc = 0x3C2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2304u;
        // 0x3c2308: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C230Cu;
        goto label_3c230c;
    }
    ctx->pc = 0x3C2304u;
    SET_GPR_U32(ctx, 31, 0x3C230Cu);
    ctx->pc = 0x3C2308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2304u;
    // 0x3c2308: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3C2304u, 0x3C230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C230Cu;
label_3c230c:
    // 0x3c230c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c230cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2310:
    // 0x3c2310: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3c2310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3c2314:
    // 0x3c2314: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3c2318:
    if (ctx->pc == 0x3C2318u) {
        ctx->pc = 0x3C2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2314u;
        // 0x3c2318: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C231Cu;
        goto label_3c231c;
    }
    ctx->pc = 0x3C2314u;
    {
        const bool branch_taken_0x3c2314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2314u;
        // 0x3c2318: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2314) {
            ctx->pc = 0x3C2334u;
            goto label_3c2334;
        }
    }
    ctx->pc = 0x3C231Cu;
label_3c231c:
    // 0x3c231c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3c231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3c2320:
    // 0x3c2320: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3c2320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3c2324:
    // 0x3c2324: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c2324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c2328:
    // 0x3c2328: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c2328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3c232c:
    // 0x3c232c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3c232cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3c2330:
    // 0x3c2330: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c2330u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2334:
    // 0x3c2334: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x3c2334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_3c2338:
    // 0x3c2338: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3c2338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3c233c:
    // 0x3c233c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c233cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c2340:
    // 0x3c2340: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x3c2340u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_3c2344:
    // 0x3c2344: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3c2344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_3c2348:
    // 0x3c2348: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c2348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c234c:
    // 0x3c234c: 0x2604b8b8  addiu       $a0, $s0, -0x4748
    ctx->pc = 0x3c234cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3c2350:
    // 0x3c2350: 0xc0cd508  jal         func_335420
label_3c2354:
    if (ctx->pc == 0x3C2354u) {
        ctx->pc = 0x3C2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2350u;
        // 0x3c2354: 0x7e230010  sq          $v1, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2358u;
        goto label_3c2358;
    }
    ctx->pc = 0x3C2350u;
    SET_GPR_U32(ctx, 31, 0x3C2358u);
    ctx->pc = 0x3C2354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2350u;
    // 0x3c2354: 0x7e230010  sq          $v1, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C2350u, 0x3C2358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2358u;
label_3c2358:
    // 0x3c2358: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c2358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c235c:
    // 0x3c235c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c235cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c2360:
    // 0x3c2360: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c2360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c2364:
    // 0x3c2364: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c2364u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c2368:
    // 0x3c2368: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3c2368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3c236c:
    // 0x3c236c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3c236cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3c2370:
    // 0x3c2370: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c2370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c2374:
    // 0x3c2374: 0x1a800008  blez        $s4, . + 4 + (0x8 << 2)
label_3c2378:
    if (ctx->pc == 0x3C2378u) {
        ctx->pc = 0x3C2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2374u;
        // 0x3c2378: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C237Cu;
        goto label_3c237c;
    }
    ctx->pc = 0x3C2374u;
    {
        const bool branch_taken_0x3c2374 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3C2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2374u;
        // 0x3c2378: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2374) {
            ctx->pc = 0x3C2398u;
            goto label_3c2398;
        }
    }
    ctx->pc = 0x3C237Cu;
label_3c237c:
    // 0x3c237c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3c237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c2380:
    // 0x3c2380: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c2380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c2384:
    // 0x3c2384: 0x0  nop
    ctx->pc = 0x3c2384u;
    // NOP
label_3c2388:
    // 0x3c2388: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c2388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c238c:
    // 0x3c238c: 0x0  nop
    ctx->pc = 0x3c238cu;
    // NOP
label_3c2390:
    // 0x3c2390: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3c2394:
    if (ctx->pc == 0x3C2394u) {
        ctx->pc = 0x3C2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2390u;
        // 0x3c2394: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2398u;
        goto label_3c2398;
    }
    ctx->pc = 0x3C2390u;
    {
        const bool branch_taken_0x3c2390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c2390) {
            ctx->pc = 0x3C2394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2390u;
            // 0x3c2394: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2398u;
            goto label_3c2398;
        }
    }
    ctx->pc = 0x3C2398u;
label_3c2398:
    // 0x3c2398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c2398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c239c:
    // 0x3c239c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c239cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c23a0:
    // 0x3c23a0: 0x4600bd07  neg.s       $f20, $f23
    ctx->pc = 0x3c23a0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[23]);
label_3c23a4:
    // 0x3c23a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c23a8:
    // 0x3c23a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c23a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c23ac:
    // 0x3c23ac: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x3c23acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3c23b0:
    // 0x3c23b0: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3c23b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3c23b4:
    // 0x3c23b4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3c23b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3c23b8:
    // 0x3c23b8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3c23b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3c23bc:
    // 0x3c23bc: 0x40f809  jalr        $v0
label_3c23c0:
    if (ctx->pc == 0x3C23C0u) {
        ctx->pc = 0x3C23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23BCu;
        // 0x3c23c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23C4u;
        goto label_3c23c4;
    }
    ctx->pc = 0x3C23BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C23C4u);
        ctx->pc = 0x3C23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23BCu;
        // 0x3c23c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C23BCu, 0x3C23C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C23C4u;
label_3c23c4:
    // 0x3c23c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c23c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c23c8:
    // 0x3c23c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c23c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c23cc:
    // 0x3c23cc: 0xc0cd508  jal         func_335420
label_3c23d0:
    if (ctx->pc == 0x3C23D0u) {
        ctx->pc = 0x3C23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23CCu;
        // 0x3c23d0: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23D4u;
        goto label_3c23d4;
    }
    ctx->pc = 0x3C23CCu;
    SET_GPR_U32(ctx, 31, 0x3C23D4u);
    ctx->pc = 0x3C23D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C23CCu;
    // 0x3c23d0: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C23CCu, 0x3C23D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C23D4u;
label_3c23d4:
    // 0x3c23d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3c23d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3c23d8:
    // 0x3c23d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c23d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c23dc:
    // 0x3c23dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c23dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c23e0:
    // 0x3c23e0: 0xc0cd508  jal         func_335420
label_3c23e4:
    if (ctx->pc == 0x3C23E4u) {
        ctx->pc = 0x3C23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23E0u;
        // 0x3c23e4: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23E8u;
        goto label_3c23e8;
    }
    ctx->pc = 0x3C23E0u;
    SET_GPR_U32(ctx, 31, 0x3C23E8u);
    ctx->pc = 0x3C23E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C23E0u;
    // 0x3c23e4: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C23E0u, 0x3C23E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C23E8u;
label_3c23e8:
    // 0x3c23e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c23e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c23ec:
    // 0x3c23ec: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3c23ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3c23f0:
    // 0x3c23f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c23f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c23f4:
    // 0x3c23f4: 0xc0cd508  jal         func_335420
label_3c23f8:
    if (ctx->pc == 0x3C23F8u) {
        ctx->pc = 0x3C23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C23F4u;
        // 0x3c23f8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C23FCu;
        goto label_3c23fc;
    }
    ctx->pc = 0x3C23F4u;
    SET_GPR_U32(ctx, 31, 0x3C23FCu);
    ctx->pc = 0x3C23F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C23F4u;
    // 0x3c23f8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C23F4u, 0x3C23FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C23FCu;
label_3c23fc:
    // 0x3c23fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3c23fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3c2400:
    // 0x3c2400: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c2400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c2404:
    // 0x3c2404: 0xe7b5002c  swc1        $f21, 0x2C($sp)
    ctx->pc = 0x3c2404u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3c2408:
    // 0x3c2408: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c2408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c240c:
    // 0x3c240c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3c240cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3c2410:
    // 0x3c2410: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3c2410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3c2414:
    // 0x3c2414: 0x60f809  jalr        $v1
label_3c2418:
    if (ctx->pc == 0x3C2418u) {
        ctx->pc = 0x3C2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2414u;
        // 0x3c2418: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C241Cu;
        goto label_3c241c;
    }
    ctx->pc = 0x3C2414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C241Cu);
        ctx->pc = 0x3C2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2414u;
        // 0x3c2418: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2414u, 0x3C241Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C241Cu;
label_3c241c:
    // 0x3c241c: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3c241cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3c2420:
    // 0x3c2420: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3c2420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3c2424:
    // 0x3c2424: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3c2428:
    if (ctx->pc == 0x3C2428u) {
        ctx->pc = 0x3C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2424u;
        // 0x3c2428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C242Cu;
        goto label_3c242c;
    }
    ctx->pc = 0x3C2424u;
    {
        const bool branch_taken_0x3c2424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2424u;
        // 0x3c2428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2424) {
            ctx->pc = 0x3C2454u;
            goto label_3c2454;
        }
    }
    ctx->pc = 0x3C242Cu;
label_3c242c:
    // 0x3c242c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c242cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c2430:
    // 0x3c2430: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c2430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c2434:
    // 0x3c2434: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3c2434u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3c2438:
    // 0x3c2438: 0xc0cd508  jal         func_335420
label_3c243c:
    if (ctx->pc == 0x3C243Cu) {
        ctx->pc = 0x3C243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2438u;
        // 0x3c243c: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2440u;
        goto label_3c2440;
    }
    ctx->pc = 0x3C2438u;
    SET_GPR_U32(ctx, 31, 0x3C2440u);
    ctx->pc = 0x3C243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2438u;
    // 0x3c243c: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C2438u, 0x3C2440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2440u;
label_3c2440:
    // 0x3c2440: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3c2440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3c2444:
    // 0x3c2444: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c2444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c2448:
    // 0x3c2448: 0x0  nop
    ctx->pc = 0x3c2448u;
    // NOP
label_3c244c:
    // 0x3c244c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c244cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c2450:
    // 0x3c2450: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3c2450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3c2454:
    // 0x3c2454: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c2454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c2458:
    // 0x3c2458: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c2458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c245c:
    // 0x3c245c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c245cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c2460:
    // 0x3c2460: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3c2460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3c2464:
    // 0x3c2464: 0xae3500b4  sw          $s5, 0xB4($s1)
    ctx->pc = 0x3c2464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 21));
label_3c2468:
    // 0x3c2468: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x3c2468u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_3c246c:
    // 0x3c246c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x3c246cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_3c2470:
    // 0x3c2470: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3c2470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3c2474:
    // 0x3c2474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c2474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2478:
    // 0x3c2478: 0xc0cd508  jal         func_335420
label_3c247c:
    if (ctx->pc == 0x3C247Cu) {
        ctx->pc = 0x3C247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2478u;
        // 0x3c247c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2480u;
        goto label_3c2480;
    }
    ctx->pc = 0x3C2478u;
    SET_GPR_U32(ctx, 31, 0x3C2480u);
    ctx->pc = 0x3C247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2478u;
    // 0x3c247c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C2478u, 0x3C2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2480u;
label_3c2480:
    // 0x3c2480: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x3c2480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_3c2484:
    // 0x3c2484: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c2484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c2488:
    // 0x3c2488: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c2488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c248c:
    // 0x3c248c: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x3c248cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3c2490:
    // 0x3c2490: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c2494:
    // 0x3c2494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c2494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2498:
    // 0x3c2498: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c2498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c249c:
    // 0x3c249c: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x3c249cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
label_3c24a0:
    // 0x3c24a0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3c24a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3c24a4:
    // 0x3c24a4: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x3c24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_3c24a8:
    // 0x3c24a8: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x3c24a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_3c24ac:
    // 0x3c24ac: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x3c24acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
label_3c24b0:
    // 0x3c24b0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3c24b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c24b4:
    // 0x3c24b4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3c24b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c24b8:
    // 0x3c24b8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3c24b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c24bc:
    // 0x3c24bc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3c24bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c24c0:
    // 0x3c24c0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3c24c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c24c4:
    // 0x3c24c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c24c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c24c8:
    // 0x3c24c8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3c24c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c24cc:
    // 0x3c24cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c24ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c24d0:
    // 0x3c24d0: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x3c24d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c24d4:
    // 0x3c24d4: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x3c24d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c24d8:
    // 0x3c24d8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x3c24d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c24dc:
    // 0x3c24dc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3c24dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c24e0:
    // 0x3c24e0: 0x3e00008  jr          $ra
label_3c24e4:
    if (ctx->pc == 0x3C24E4u) {
        ctx->pc = 0x3C24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24E0u;
        // 0x3c24e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C24E8u;
        goto label_fallthrough_0x3c24e0;
    }
    ctx->pc = 0x3C24E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C24E0u;
        // 0x3c24e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C24E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c24e0:
    ctx->pc = 0x3C24E8u;
}
