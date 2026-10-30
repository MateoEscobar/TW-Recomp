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

// Function: sub_001A21E8
// Address: 0x1a21e8 - 0x1a2538
void sub_001A21E8_0x1a21e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A21E8_0x1a21e8");
#endif

    switch (ctx->pc) {
        case 0x1a21e8u: goto label_1a21e8;
        case 0x1a21ecu: goto label_1a21ec;
        case 0x1a21f0u: goto label_1a21f0;
        case 0x1a21f4u: goto label_1a21f4;
        case 0x1a21f8u: goto label_1a21f8;
        case 0x1a21fcu: goto label_1a21fc;
        case 0x1a2200u: goto label_1a2200;
        case 0x1a2204u: goto label_1a2204;
        case 0x1a2208u: goto label_1a2208;
        case 0x1a220cu: goto label_1a220c;
        case 0x1a2210u: goto label_1a2210;
        case 0x1a2214u: goto label_1a2214;
        case 0x1a2218u: goto label_1a2218;
        case 0x1a221cu: goto label_1a221c;
        case 0x1a2220u: goto label_1a2220;
        case 0x1a2224u: goto label_1a2224;
        case 0x1a2228u: goto label_1a2228;
        case 0x1a222cu: goto label_1a222c;
        case 0x1a2230u: goto label_1a2230;
        case 0x1a2234u: goto label_1a2234;
        case 0x1a2238u: goto label_1a2238;
        case 0x1a223cu: goto label_1a223c;
        case 0x1a2240u: goto label_1a2240;
        case 0x1a2244u: goto label_1a2244;
        case 0x1a2248u: goto label_1a2248;
        case 0x1a224cu: goto label_1a224c;
        case 0x1a2250u: goto label_1a2250;
        case 0x1a2254u: goto label_1a2254;
        case 0x1a2258u: goto label_1a2258;
        case 0x1a225cu: goto label_1a225c;
        case 0x1a2260u: goto label_1a2260;
        case 0x1a2264u: goto label_1a2264;
        case 0x1a2268u: goto label_1a2268;
        case 0x1a226cu: goto label_1a226c;
        case 0x1a2270u: goto label_1a2270;
        case 0x1a2274u: goto label_1a2274;
        case 0x1a2278u: goto label_1a2278;
        case 0x1a227cu: goto label_1a227c;
        case 0x1a2280u: goto label_1a2280;
        case 0x1a2284u: goto label_1a2284;
        case 0x1a2288u: goto label_1a2288;
        case 0x1a228cu: goto label_1a228c;
        case 0x1a2290u: goto label_1a2290;
        case 0x1a2294u: goto label_1a2294;
        case 0x1a2298u: goto label_1a2298;
        case 0x1a229cu: goto label_1a229c;
        case 0x1a22a0u: goto label_1a22a0;
        case 0x1a22a4u: goto label_1a22a4;
        case 0x1a22a8u: goto label_1a22a8;
        case 0x1a22acu: goto label_1a22ac;
        case 0x1a22b0u: goto label_1a22b0;
        case 0x1a22b4u: goto label_1a22b4;
        case 0x1a22b8u: goto label_1a22b8;
        case 0x1a22bcu: goto label_1a22bc;
        case 0x1a22c0u: goto label_1a22c0;
        case 0x1a22c4u: goto label_1a22c4;
        case 0x1a22c8u: goto label_1a22c8;
        case 0x1a22ccu: goto label_1a22cc;
        case 0x1a22d0u: goto label_1a22d0;
        case 0x1a22d4u: goto label_1a22d4;
        case 0x1a22d8u: goto label_1a22d8;
        case 0x1a22dcu: goto label_1a22dc;
        case 0x1a22e0u: goto label_1a22e0;
        case 0x1a22e4u: goto label_1a22e4;
        case 0x1a22e8u: goto label_1a22e8;
        case 0x1a22ecu: goto label_1a22ec;
        case 0x1a22f0u: goto label_1a22f0;
        case 0x1a22f4u: goto label_1a22f4;
        case 0x1a22f8u: goto label_1a22f8;
        case 0x1a22fcu: goto label_1a22fc;
        case 0x1a2300u: goto label_1a2300;
        case 0x1a2304u: goto label_1a2304;
        case 0x1a2308u: goto label_1a2308;
        case 0x1a230cu: goto label_1a230c;
        case 0x1a2310u: goto label_1a2310;
        case 0x1a2314u: goto label_1a2314;
        case 0x1a2318u: goto label_1a2318;
        case 0x1a231cu: goto label_1a231c;
        case 0x1a2320u: goto label_1a2320;
        case 0x1a2324u: goto label_1a2324;
        case 0x1a2328u: goto label_1a2328;
        case 0x1a232cu: goto label_1a232c;
        case 0x1a2330u: goto label_1a2330;
        case 0x1a2334u: goto label_1a2334;
        case 0x1a2338u: goto label_1a2338;
        case 0x1a233cu: goto label_1a233c;
        case 0x1a2340u: goto label_1a2340;
        case 0x1a2344u: goto label_1a2344;
        case 0x1a2348u: goto label_1a2348;
        case 0x1a234cu: goto label_1a234c;
        case 0x1a2350u: goto label_1a2350;
        case 0x1a2354u: goto label_1a2354;
        case 0x1a2358u: goto label_1a2358;
        case 0x1a235cu: goto label_1a235c;
        case 0x1a2360u: goto label_1a2360;
        case 0x1a2364u: goto label_1a2364;
        case 0x1a2368u: goto label_1a2368;
        case 0x1a236cu: goto label_1a236c;
        case 0x1a2370u: goto label_1a2370;
        case 0x1a2374u: goto label_1a2374;
        case 0x1a2378u: goto label_1a2378;
        case 0x1a237cu: goto label_1a237c;
        case 0x1a2380u: goto label_1a2380;
        case 0x1a2384u: goto label_1a2384;
        case 0x1a2388u: goto label_1a2388;
        case 0x1a238cu: goto label_1a238c;
        case 0x1a2390u: goto label_1a2390;
        case 0x1a2394u: goto label_1a2394;
        case 0x1a2398u: goto label_1a2398;
        case 0x1a239cu: goto label_1a239c;
        case 0x1a23a0u: goto label_1a23a0;
        case 0x1a23a4u: goto label_1a23a4;
        case 0x1a23a8u: goto label_1a23a8;
        case 0x1a23acu: goto label_1a23ac;
        case 0x1a23b0u: goto label_1a23b0;
        case 0x1a23b4u: goto label_1a23b4;
        case 0x1a23b8u: goto label_1a23b8;
        case 0x1a23bcu: goto label_1a23bc;
        case 0x1a23c0u: goto label_1a23c0;
        case 0x1a23c4u: goto label_1a23c4;
        case 0x1a23c8u: goto label_1a23c8;
        case 0x1a23ccu: goto label_1a23cc;
        case 0x1a23d0u: goto label_1a23d0;
        case 0x1a23d4u: goto label_1a23d4;
        case 0x1a23d8u: goto label_1a23d8;
        case 0x1a23dcu: goto label_1a23dc;
        case 0x1a23e0u: goto label_1a23e0;
        case 0x1a23e4u: goto label_1a23e4;
        case 0x1a23e8u: goto label_1a23e8;
        case 0x1a23ecu: goto label_1a23ec;
        case 0x1a23f0u: goto label_1a23f0;
        case 0x1a23f4u: goto label_1a23f4;
        case 0x1a23f8u: goto label_1a23f8;
        case 0x1a23fcu: goto label_1a23fc;
        case 0x1a2400u: goto label_1a2400;
        case 0x1a2404u: goto label_1a2404;
        case 0x1a2408u: goto label_1a2408;
        case 0x1a240cu: goto label_1a240c;
        case 0x1a2410u: goto label_1a2410;
        case 0x1a2414u: goto label_1a2414;
        case 0x1a2418u: goto label_1a2418;
        case 0x1a241cu: goto label_1a241c;
        case 0x1a2420u: goto label_1a2420;
        case 0x1a2424u: goto label_1a2424;
        case 0x1a2428u: goto label_1a2428;
        case 0x1a242cu: goto label_1a242c;
        case 0x1a2430u: goto label_1a2430;
        case 0x1a2434u: goto label_1a2434;
        case 0x1a2438u: goto label_1a2438;
        case 0x1a243cu: goto label_1a243c;
        case 0x1a2440u: goto label_1a2440;
        case 0x1a2444u: goto label_1a2444;
        case 0x1a2448u: goto label_1a2448;
        case 0x1a244cu: goto label_1a244c;
        case 0x1a2450u: goto label_1a2450;
        case 0x1a2454u: goto label_1a2454;
        case 0x1a2458u: goto label_1a2458;
        case 0x1a245cu: goto label_1a245c;
        case 0x1a2460u: goto label_1a2460;
        case 0x1a2464u: goto label_1a2464;
        case 0x1a2468u: goto label_1a2468;
        case 0x1a246cu: goto label_1a246c;
        case 0x1a2470u: goto label_1a2470;
        case 0x1a2474u: goto label_1a2474;
        case 0x1a2478u: goto label_1a2478;
        case 0x1a247cu: goto label_1a247c;
        case 0x1a2480u: goto label_1a2480;
        case 0x1a2484u: goto label_1a2484;
        case 0x1a2488u: goto label_1a2488;
        case 0x1a248cu: goto label_1a248c;
        case 0x1a2490u: goto label_1a2490;
        case 0x1a2494u: goto label_1a2494;
        case 0x1a2498u: goto label_1a2498;
        case 0x1a249cu: goto label_1a249c;
        case 0x1a24a0u: goto label_1a24a0;
        case 0x1a24a4u: goto label_1a24a4;
        case 0x1a24a8u: goto label_1a24a8;
        case 0x1a24acu: goto label_1a24ac;
        case 0x1a24b0u: goto label_1a24b0;
        case 0x1a24b4u: goto label_1a24b4;
        case 0x1a24b8u: goto label_1a24b8;
        case 0x1a24bcu: goto label_1a24bc;
        case 0x1a24c0u: goto label_1a24c0;
        case 0x1a24c4u: goto label_1a24c4;
        case 0x1a24c8u: goto label_1a24c8;
        case 0x1a24ccu: goto label_1a24cc;
        case 0x1a24d0u: goto label_1a24d0;
        case 0x1a24d4u: goto label_1a24d4;
        case 0x1a24d8u: goto label_1a24d8;
        case 0x1a24dcu: goto label_1a24dc;
        case 0x1a24e0u: goto label_1a24e0;
        case 0x1a24e4u: goto label_1a24e4;
        case 0x1a24e8u: goto label_1a24e8;
        case 0x1a24ecu: goto label_1a24ec;
        case 0x1a24f0u: goto label_1a24f0;
        case 0x1a24f4u: goto label_1a24f4;
        case 0x1a24f8u: goto label_1a24f8;
        case 0x1a24fcu: goto label_1a24fc;
        case 0x1a2500u: goto label_1a2500;
        case 0x1a2504u: goto label_1a2504;
        case 0x1a2508u: goto label_1a2508;
        case 0x1a250cu: goto label_1a250c;
        case 0x1a2510u: goto label_1a2510;
        case 0x1a2514u: goto label_1a2514;
        case 0x1a2518u: goto label_1a2518;
        case 0x1a251cu: goto label_1a251c;
        case 0x1a2520u: goto label_1a2520;
        case 0x1a2524u: goto label_1a2524;
        case 0x1a2528u: goto label_1a2528;
        case 0x1a252cu: goto label_1a252c;
        case 0x1a2530u: goto label_1a2530;
        case 0x1a2534u: goto label_1a2534;
        default: break;
    }

    ctx->pc = 0x1a21e8u;

label_1a21e8:
    // 0x1a21e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a21e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a21ec:
    // 0x1a21ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a21ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a21f0:
    // 0x1a21f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a21f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1a21f4:
    // 0x1a21f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a21f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a21f8:
    // 0x1a21f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a21f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1a21fc:
    // 0x1a21fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a21fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2200:
    // 0x1a2200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a2200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a2204:
    // 0x1a2204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2208:
    // 0x1a2208: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a2208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a220c:
    // 0x1a220c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a220cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a2210:
    // 0x1a2210: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1a2210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1a2214:
    // 0x1a2214: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1a2214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1a2218:
    // 0x1a2218: 0x40f809  jalr        $v0
label_1a221c:
    if (ctx->pc == 0x1A221Cu) {
        ctx->pc = 0x1A221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2218u;
        // 0x1a221c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2220u;
        goto label_1a2220;
    }
    ctx->pc = 0x1A2218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2220u);
        ctx->pc = 0x1A221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2218u;
        // 0x1a221c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2218u, 0x1A2220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2220u;
label_1a2220:
    // 0x1a2220: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
label_1a2224:
    if (ctx->pc == 0x1A2224u) {
        ctx->pc = 0x1A2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2220u;
        // 0x1a2224: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2228u;
        goto label_1a2228;
    }
    ctx->pc = 0x1A2220u;
    {
        const bool branch_taken_0x1a2220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2220u;
        // 0x1a2224: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2220) {
            ctx->pc = 0x1A251Cu;
            goto label_1a251c;
        }
    }
    ctx->pc = 0x1A2228u;
label_1a2228:
    // 0x1a2228: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a2228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a222c:
    // 0x1a222c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1a222cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1a2230:
    // 0x1a2230: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1a2230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1a2234:
    // 0x1a2234: 0x40f809  jalr        $v0
label_1a2238:
    if (ctx->pc == 0x1A2238u) {
        ctx->pc = 0x1A2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2234u;
        // 0x1a2238: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A223Cu;
        goto label_1a223c;
    }
    ctx->pc = 0x1A2234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A223Cu);
        ctx->pc = 0x1A2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2234u;
        // 0x1a2238: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2234u, 0x1A223Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A223Cu;
label_1a223c:
    // 0x1a223c: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_1a2240:
    if (ctx->pc == 0x1A2240u) {
        ctx->pc = 0x1A2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A223Cu;
        // 0x1a2240: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2244u;
        goto label_1a2244;
    }
    ctx->pc = 0x1A223Cu;
    {
        const bool branch_taken_0x1a223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A223Cu;
        // 0x1a2240: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a223c) {
            ctx->pc = 0x1A251Cu;
            goto label_1a251c;
        }
    }
    ctx->pc = 0x1A2244u;
label_1a2244:
    // 0x1a2244: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a2244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a2248:
    // 0x1a2248: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x1a2248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_1a224c:
    // 0x1a224c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a224cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a2250:
    // 0x1a2250: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_1a2254:
    if (ctx->pc == 0x1A2254u) {
        ctx->pc = 0x1A2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2250u;
        // 0x1a2254: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2258u;
        goto label_1a2258;
    }
    ctx->pc = 0x1A2250u;
    {
        const bool branch_taken_0x1a2250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2250u;
        // 0x1a2254: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2250) {
            ctx->pc = 0x1A2268u;
            goto label_1a2268;
        }
    }
    ctx->pc = 0x1A2258u;
label_1a2258:
    // 0x1a2258: 0xc0616ac  jal         func_185AB0
label_1a225c:
    if (ctx->pc == 0x1A225Cu) {
        ctx->pc = 0x1A225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2258u;
        // 0x1a225c: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2260u;
        goto label_1a2260;
    }
    ctx->pc = 0x1A2258u;
    SET_GPR_U32(ctx, 31, 0x1A2260u);
    ctx->pc = 0x1A225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2258u;
    // 0x1a225c: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1A2258u, 0x1A2260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2260u;
label_1a2260:
    // 0x1a2260: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a2264:
    if (ctx->pc == 0x1A2264u) {
        ctx->pc = 0x1A2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2260u;
        // 0x1a2264: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2268u;
        goto label_1a2268;
    }
    ctx->pc = 0x1A2260u;
    {
        const bool branch_taken_0x1a2260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2260u;
        // 0x1a2264: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2260) {
            ctx->pc = 0x1A227Cu;
            goto label_1a227c;
        }
    }
    ctx->pc = 0x1A2268u;
label_1a2268:
    // 0x1a2268: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1a2268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1a226c:
    // 0x1a226c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2270:
    // 0x1a2270: 0xc068a46  jal         func_1A2918
label_1a2274:
    if (ctx->pc == 0x1A2274u) {
        ctx->pc = 0x1A2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2270u;
        // 0x1a2274: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2278u;
        goto label_1a2278;
    }
    ctx->pc = 0x1A2270u;
    SET_GPR_U32(ctx, 31, 0x1A2278u);
    ctx->pc = 0x1A2274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2270u;
    // 0x1a2274: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2918u, 0x1A2270u, 0x1A2278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2278u;
label_1a2278:
    // 0x1a2278: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1a2278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_1a227c:
    // 0x1a227c: 0xc0616ac  jal         func_185AB0
label_1a2280:
    if (ctx->pc == 0x1A2280u) {
        ctx->pc = 0x1A2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A227Cu;
        // 0x1a2280: 0x8e2500c4  lw          $a1, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2284u;
        goto label_1a2284;
    }
    ctx->pc = 0x1A227Cu;
    SET_GPR_U32(ctx, 31, 0x1A2284u);
    ctx->pc = 0x1A2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A227Cu;
    // 0x1a2280: 0x8e2500c4  lw          $a1, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1A227Cu, 0x1A2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2284u;
label_1a2284:
    // 0x1a2284: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2288:
    // 0x1a2288: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x1a2288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_1a228c:
    // 0x1a228c: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_1a2290:
    if (ctx->pc == 0x1A2290u) {
        ctx->pc = 0x1A2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A228Cu;
        // 0x1a2290: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2294u;
        goto label_1a2294;
    }
    ctx->pc = 0x1A228Cu;
    {
        const bool branch_taken_0x1a228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A228Cu;
        // 0x1a2290: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a228c) {
            ctx->pc = 0x1A251Cu;
            goto label_1a251c;
        }
    }
    ctx->pc = 0x1A2294u;
label_1a2294:
    // 0x1a2294: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a2294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a2298:
    // 0x1a2298: 0xc060b58  jal         func_182D60
label_1a229c:
    if (ctx->pc == 0x1A229Cu) {
        ctx->pc = 0x1A229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2298u;
        // 0x1a229c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A22A0u;
        goto label_1a22a0;
    }
    ctx->pc = 0x1A2298u;
    SET_GPR_U32(ctx, 31, 0x1A22A0u);
    ctx->pc = 0x1A229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2298u;
    // 0x1a229c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A2298u, 0x1A22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22A0u;
label_1a22a0:
    // 0x1a22a0: 0x962500c8  lhu         $a1, 0xC8($s1)
    ctx->pc = 0x1a22a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 200)));
label_1a22a4:
    // 0x1a22a4: 0xc06078e  jal         func_181E38
label_1a22a8:
    if (ctx->pc == 0x1A22A8u) {
        ctx->pc = 0x1A22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22A4u;
        // 0x1a22a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A22ACu;
        goto label_1a22ac;
    }
    ctx->pc = 0x1A22A4u;
    SET_GPR_U32(ctx, 31, 0x1A22ACu);
    ctx->pc = 0x1A22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22A4u;
    // 0x1a22a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1A22A4u, 0x1A22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22ACu;
label_1a22ac:
    // 0x1a22ac: 0x3a630002  xori        $v1, $s3, 0x2
    ctx->pc = 0x1a22acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
label_1a22b0:
    // 0x1a22b0: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x1a22b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a22b4:
    // 0x1a22b4: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x1a22b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a22b8:
    // 0x1a22b8: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x1a22b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a22bc:
    // 0x1a22bc: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x1a22bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a22c0:
    // 0x1a22c0: 0xb22400ab  sdl         $a0, 0xAB($s1)
    ctx->pc = 0x1a22c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 171); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a22c4:
    // 0x1a22c4: 0xb62400a4  sdr         $a0, 0xA4($s1)
    ctx->pc = 0x1a22c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 164); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a22c8:
    // 0x1a22c8: 0xb22500b3  sdl         $a1, 0xB3($s1)
    ctx->pc = 0x1a22c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a22cc:
    // 0x1a22cc: 0xb62500ac  sdr         $a1, 0xAC($s1)
    ctx->pc = 0x1a22ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a22d0:
    // 0x1a22d0: 0x5060007d  beql        $v1, $zero, . + 4 + (0x7D << 2)
label_1a22d4:
    if (ctx->pc == 0x1A22D4u) {
        ctx->pc = 0x1A22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22D0u;
        // 0x1a22d4: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A22D8u;
        goto label_1a22d8;
    }
    ctx->pc = 0x1A22D0u;
    {
        const bool branch_taken_0x1a22d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22d0) {
            ctx->pc = 0x1A22D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A22D0u;
            // 0x1a22d4: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A24C8u;
            goto label_1a24c8;
        }
    }
    ctx->pc = 0x1A22D8u;
label_1a22d8:
    // 0x1a22d8: 0x1660003d  bnez        $s3, . + 4 + (0x3D << 2)
label_1a22dc:
    if (ctx->pc == 0x1A22DCu) {
        ctx->pc = 0x1A22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22D8u;
        // 0x1a22dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A22E0u;
        goto label_1a22e0;
    }
    ctx->pc = 0x1A22D8u;
    {
        const bool branch_taken_0x1a22d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22D8u;
        // 0x1a22dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22d8) {
            ctx->pc = 0x1A23D0u;
            goto label_1a23d0;
        }
    }
    ctx->pc = 0x1A22E0u;
label_1a22e0:
    // 0x1a22e0: 0xc62200a8  lwc1        $f2, 0xA8($s1)
    ctx->pc = 0x1a22e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a22e4:
    // 0x1a22e4: 0xc62100b0  lwc1        $f1, 0xB0($s1)
    ctx->pc = 0x1a22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a22e8:
    // 0x1a22e8: 0xc6340090  lwc1        $f20, 0x90($s1)
    ctx->pc = 0x1a22e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a22ec:
    // 0x1a22ec: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1a22ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1a22f0:
    // 0x1a22f0: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x1a22f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a22f4:
    // 0x1a22f4: 0xc62200a4  lwc1        $f2, 0xA4($s1)
    ctx->pc = 0x1a22f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a22f8:
    // 0x1a22f8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1a22f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1a22fc:
    // 0x1a22fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a22fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1a2300:
    // 0x1a2300: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1a2300u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a2304:
    // 0x1a2304: 0xc060b58  jal         func_182D60
label_1a2308:
    if (ctx->pc == 0x1A2308u) {
        ctx->pc = 0x1A2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2304u;
        // 0x1a2308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A230Cu;
        goto label_1a230c;
    }
    ctx->pc = 0x1A2304u;
    SET_GPR_U32(ctx, 31, 0x1A230Cu);
    ctx->pc = 0x1A2308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2304u;
    // 0x1a2308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A2304u, 0x1A230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A230Cu;
label_1a230c:
    // 0x1a230c: 0xc06078a  jal         func_181E28
label_1a2310:
    if (ctx->pc == 0x1A2310u) {
        ctx->pc = 0x1A2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A230Cu;
        // 0x1a2310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2314u;
        goto label_1a2314;
    }
    ctx->pc = 0x1A230Cu;
    SET_GPR_U32(ctx, 31, 0x1A2314u);
    ctx->pc = 0x1A2310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A230Cu;
    // 0x1a2310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E28u, 0x1A230Cu, 0x1A2314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2314u;
label_1a2314:
    // 0x1a2314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a2318:
    // 0x1a2318: 0xc060b58  jal         func_182D60
label_1a231c:
    if (ctx->pc == 0x1A231Cu) {
        ctx->pc = 0x1A231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2318u;
        // 0x1a231c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2320u;
        goto label_1a2320;
    }
    ctx->pc = 0x1A2318u;
    SET_GPR_U32(ctx, 31, 0x1A2320u);
    ctx->pc = 0x1A231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2318u;
    // 0x1a231c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A2318u, 0x1A2320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2320u;
label_1a2320:
    // 0x1a2320: 0xc060786  jal         func_181E18
label_1a2324:
    if (ctx->pc == 0x1A2324u) {
        ctx->pc = 0x1A2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2320u;
        // 0x1a2324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2328u;
        goto label_1a2328;
    }
    ctx->pc = 0x1A2320u;
    SET_GPR_U32(ctx, 31, 0x1A2328u);
    ctx->pc = 0x1A2324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2320u;
    // 0x1a2324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E18u, 0x1A2320u, 0x1A2328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2328u;
label_1a2328:
    // 0x1a2328: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1a232c:
    if (ctx->pc == 0x1A232Cu) {
        ctx->pc = 0x1A232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2328u;
        // 0x1a232c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2330u;
        goto label_1a2330;
    }
    ctx->pc = 0x1A2328u;
    {
        const bool branch_taken_0x1a2328 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2328u;
        // 0x1a232c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2328) {
            ctx->pc = 0x1A2344u;
            goto label_1a2344;
        }
    }
    ctx->pc = 0x1A2330u;
label_1a2330:
    // 0x1a2330: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1a2330u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2334:
    // 0x1a2334: 0x0  nop
    ctx->pc = 0x1a2334u;
    // NOP
label_1a2338:
    // 0x1a2338: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a2338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a233c:
    // 0x1a233c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a2340:
    if (ctx->pc == 0x1A2340u) {
        ctx->pc = 0x1A2344u;
        goto label_1a2344;
    }
    ctx->pc = 0x1A233Cu;
    {
        const bool branch_taken_0x1a233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a233c) {
            ctx->pc = 0x1A2360u;
            goto label_1a2360;
        }
    }
    ctx->pc = 0x1A2344u;
label_1a2344:
    // 0x1a2344: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1a2344u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1a2348:
    // 0x1a2348: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1a2348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1a234c:
    // 0x1a234c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a234cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2350:
    // 0x1a2350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a2350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2354:
    // 0x1a2354: 0x0  nop
    ctx->pc = 0x1a2354u;
    // NOP
label_1a2358:
    // 0x1a2358: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a2358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a235c:
    // 0x1a235c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a235cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a2360:
    // 0x1a2360: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1a2364:
    if (ctx->pc == 0x1A2364u) {
        ctx->pc = 0x1A2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2360u;
        // 0x1a2364: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2368u;
        goto label_1a2368;
    }
    ctx->pc = 0x1A2360u;
    {
        const bool branch_taken_0x1a2360 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2360u;
        // 0x1a2364: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2360) {
            ctx->pc = 0x1A237Cu;
            goto label_1a237c;
        }
    }
    ctx->pc = 0x1A2368u;
label_1a2368:
    // 0x1a2368: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a2368u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a236c:
    // 0x1a236c: 0x0  nop
    ctx->pc = 0x1a236cu;
    // NOP
label_1a2370:
    // 0x1a2370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a2374:
    // 0x1a2374: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2378:
    if (ctx->pc == 0x1A2378u) {
        ctx->pc = 0x1A237Cu;
        goto label_1a237c;
    }
    ctx->pc = 0x1A2374u;
    {
        const bool branch_taken_0x1a2374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2374) {
            ctx->pc = 0x1A2394u;
            goto label_1a2394;
        }
    }
    ctx->pc = 0x1A237Cu;
label_1a237c:
    // 0x1a237c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1a2380:
    // 0x1a2380: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2384:
    // 0x1a2384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2388:
    // 0x1a2388: 0x0  nop
    ctx->pc = 0x1a2388u;
    // NOP
label_1a238c:
    // 0x1a238c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a238cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a2390:
    // 0x1a2390: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a2390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a2394:
    // 0x1a2394: 0x0  nop
    ctx->pc = 0x1a2394u;
    // NOP
label_1a2398:
    // 0x1a2398: 0x0  nop
    ctx->pc = 0x1a2398u;
    // NOP
label_1a239c:
    // 0x1a239c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a239cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a23a0:
    // 0x1a23a0: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x1a23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1a23a4:
    // 0x1a23a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a23a8:
    if (ctx->pc == 0x1A23A8u) {
        ctx->pc = 0x1A23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23A4u;
        // 0x1a23a8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A23ACu;
        goto label_1a23ac;
    }
    ctx->pc = 0x1A23A4u;
    {
        const bool branch_taken_0x1a23a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23A4u;
        // 0x1a23a8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23a4) {
            ctx->pc = 0x1A23C8u;
            goto label_1a23c8;
        }
    }
    ctx->pc = 0x1A23ACu;
label_1a23ac:
    // 0x1a23ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a23acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a23b0:
    // 0x1a23b0: 0x3c013f4d  lui         $at, 0x3F4D
    ctx->pc = 0x1a23b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16205 << 16));
label_1a23b4:
    // 0x1a23b4: 0x3421b6fc  ori         $at, $at, 0xB6FC
    ctx->pc = 0x1a23b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46844);
label_1a23b8:
    // 0x1a23b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a23b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a23bc:
    // 0x1a23bc: 0xc440b208  lwc1        $f0, -0x4DF8($v0)
    ctx->pc = 0x1a23bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a23c0:
    // 0x1a23c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a23c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a23c4:
    // 0x1a23c4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1a23c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a23c8:
    // 0x1a23c8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1a23cc:
    if (ctx->pc == 0x1A23CCu) {
        ctx->pc = 0x1A23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23C8u;
        // 0x1a23cc: 0xe6340094  swc1        $f20, 0x94($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A23D0u;
        goto label_1a23d0;
    }
    ctx->pc = 0x1A23C8u;
    {
        const bool branch_taken_0x1a23c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23C8u;
        // 0x1a23cc: 0xe6340094  swc1        $f20, 0x94($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23c8) {
            ctx->pc = 0x1A24C4u;
            goto label_1a24c4;
        }
    }
    ctx->pc = 0x1A23D0u;
label_1a23d0:
    // 0x1a23d0: 0x5662003d  bnel        $s3, $v0, . + 4 + (0x3D << 2)
label_1a23d4:
    if (ctx->pc == 0x1A23D4u) {
        ctx->pc = 0x1A23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23D0u;
        // 0x1a23d4: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A23D8u;
        goto label_1a23d8;
    }
    ctx->pc = 0x1A23D0u;
    {
        const bool branch_taken_0x1a23d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a23d0) {
            ctx->pc = 0x1A23D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A23D0u;
            // 0x1a23d4: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A24C8u;
            goto label_1a24c8;
        }
    }
    ctx->pc = 0x1A23D8u;
label_1a23d8:
    // 0x1a23d8: 0xc62200a4  lwc1        $f2, 0xA4($s1)
    ctx->pc = 0x1a23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a23dc:
    // 0x1a23dc: 0xc62100ac  lwc1        $f1, 0xAC($s1)
    ctx->pc = 0x1a23dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a23e0:
    // 0x1a23e0: 0xc6340094  lwc1        $f20, 0x94($s1)
    ctx->pc = 0x1a23e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a23e4:
    // 0x1a23e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1a23e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1a23e8:
    // 0x1a23e8: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x1a23e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a23ec:
    // 0x1a23ec: 0xc62200a8  lwc1        $f2, 0xA8($s1)
    ctx->pc = 0x1a23ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a23f0:
    // 0x1a23f0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1a23f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1a23f4:
    // 0x1a23f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a23f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1a23f8:
    // 0x1a23f8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1a23f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a23fc:
    // 0x1a23fc: 0xc060b58  jal         func_182D60
label_1a2400:
    if (ctx->pc == 0x1A2400u) {
        ctx->pc = 0x1A2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23FCu;
        // 0x1a2400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2404u;
        goto label_1a2404;
    }
    ctx->pc = 0x1A23FCu;
    SET_GPR_U32(ctx, 31, 0x1A2404u);
    ctx->pc = 0x1A2400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23FCu;
    // 0x1a2400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A23FCu, 0x1A2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2404u;
label_1a2404:
    // 0x1a2404: 0xc060786  jal         func_181E18
label_1a2408:
    if (ctx->pc == 0x1A2408u) {
        ctx->pc = 0x1A2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2404u;
        // 0x1a2408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A240Cu;
        goto label_1a240c;
    }
    ctx->pc = 0x1A2404u;
    SET_GPR_U32(ctx, 31, 0x1A240Cu);
    ctx->pc = 0x1A2408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2404u;
    // 0x1a2408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E18u, 0x1A2404u, 0x1A240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A240Cu;
label_1a240c:
    // 0x1a240c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a2410:
    // 0x1a2410: 0xc060b58  jal         func_182D60
label_1a2414:
    if (ctx->pc == 0x1A2414u) {
        ctx->pc = 0x1A2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2410u;
        // 0x1a2414: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2418u;
        goto label_1a2418;
    }
    ctx->pc = 0x1A2410u;
    SET_GPR_U32(ctx, 31, 0x1A2418u);
    ctx->pc = 0x1A2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2410u;
    // 0x1a2414: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1A2410u, 0x1A2418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2418u;
label_1a2418:
    // 0x1a2418: 0xc06078a  jal         func_181E28
label_1a241c:
    if (ctx->pc == 0x1A241Cu) {
        ctx->pc = 0x1A241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2418u;
        // 0x1a241c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2420u;
        goto label_1a2420;
    }
    ctx->pc = 0x1A2418u;
    SET_GPR_U32(ctx, 31, 0x1A2420u);
    ctx->pc = 0x1A241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2418u;
    // 0x1a241c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E28u, 0x1A2418u, 0x1A2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2420u;
label_1a2420:
    // 0x1a2420: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1a2424:
    if (ctx->pc == 0x1A2424u) {
        ctx->pc = 0x1A2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2420u;
        // 0x1a2424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2428u;
        goto label_1a2428;
    }
    ctx->pc = 0x1A2420u;
    {
        const bool branch_taken_0x1a2420 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2420u;
        // 0x1a2424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2420) {
            ctx->pc = 0x1A243Cu;
            goto label_1a243c;
        }
    }
    ctx->pc = 0x1A2428u;
label_1a2428:
    // 0x1a2428: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1a2428u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a242c:
    // 0x1a242c: 0x0  nop
    ctx->pc = 0x1a242cu;
    // NOP
label_1a2430:
    // 0x1a2430: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a2430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a2434:
    // 0x1a2434: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a2438:
    if (ctx->pc == 0x1A2438u) {
        ctx->pc = 0x1A243Cu;
        goto label_1a243c;
    }
    ctx->pc = 0x1A2434u;
    {
        const bool branch_taken_0x1a2434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2434) {
            ctx->pc = 0x1A2458u;
            goto label_1a2458;
        }
    }
    ctx->pc = 0x1A243Cu;
label_1a243c:
    // 0x1a243c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1a243cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1a2440:
    // 0x1a2440: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1a2440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1a2444:
    // 0x1a2444: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2448:
    // 0x1a2448: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a2448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a244c:
    // 0x1a244c: 0x0  nop
    ctx->pc = 0x1a244cu;
    // NOP
label_1a2450:
    // 0x1a2450: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a2450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a2454:
    // 0x1a2454: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a2454u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a2458:
    // 0x1a2458: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1a245c:
    if (ctx->pc == 0x1A245Cu) {
        ctx->pc = 0x1A245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2458u;
        // 0x1a245c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2460u;
        goto label_1a2460;
    }
    ctx->pc = 0x1A2458u;
    {
        const bool branch_taken_0x1a2458 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2458u;
        // 0x1a245c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2458) {
            ctx->pc = 0x1A2474u;
            goto label_1a2474;
        }
    }
    ctx->pc = 0x1A2460u;
label_1a2460:
    // 0x1a2460: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a2460u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2464:
    // 0x1a2464: 0x0  nop
    ctx->pc = 0x1a2464u;
    // NOP
label_1a2468:
    // 0x1a2468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a246c:
    // 0x1a246c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2470:
    if (ctx->pc == 0x1A2470u) {
        ctx->pc = 0x1A2474u;
        goto label_1a2474;
    }
    ctx->pc = 0x1A246Cu;
    {
        const bool branch_taken_0x1a246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a246c) {
            ctx->pc = 0x1A248Cu;
            goto label_1a248c;
        }
    }
    ctx->pc = 0x1A2474u;
label_1a2474:
    // 0x1a2474: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a2474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1a2478:
    // 0x1a2478: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a247c:
    // 0x1a247c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a247cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2480:
    // 0x1a2480: 0x0  nop
    ctx->pc = 0x1a2480u;
    // NOP
label_1a2484:
    // 0x1a2484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a2488:
    // 0x1a2488: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a2488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a248c:
    // 0x1a248c: 0x0  nop
    ctx->pc = 0x1a248cu;
    // NOP
label_1a2490:
    // 0x1a2490: 0x0  nop
    ctx->pc = 0x1a2490u;
    // NOP
label_1a2494:
    // 0x1a2494: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a2494u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a2498:
    // 0x1a2498: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x1a2498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1a249c:
    // 0x1a249c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a24a0:
    if (ctx->pc == 0x1A24A0u) {
        ctx->pc = 0x1A24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A249Cu;
        // 0x1a24a0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A24A4u;
        goto label_1a24a4;
    }
    ctx->pc = 0x1A249Cu;
    {
        const bool branch_taken_0x1a249c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A249Cu;
        // 0x1a24a0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a249c) {
            ctx->pc = 0x1A24C0u;
            goto label_1a24c0;
        }
    }
    ctx->pc = 0x1A24A4u;
label_1a24a4:
    // 0x1a24a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a24a8:
    // 0x1a24a8: 0x3c013f4d  lui         $at, 0x3F4D
    ctx->pc = 0x1a24a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16205 << 16));
label_1a24ac:
    // 0x1a24ac: 0x3421b6fc  ori         $at, $at, 0xB6FC
    ctx->pc = 0x1a24acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46844);
label_1a24b0:
    // 0x1a24b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a24b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a24b4:
    // 0x1a24b4: 0xc440b208  lwc1        $f0, -0x4DF8($v0)
    ctx->pc = 0x1a24b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a24b8:
    // 0x1a24b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a24b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a24bc:
    // 0x1a24bc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1a24bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a24c0:
    // 0x1a24c0: 0xe6340090  swc1        $f20, 0x90($s1)
    ctx->pc = 0x1a24c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_1a24c4:
    // 0x1a24c4: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x1a24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1a24c8:
    // 0x1a24c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1a24cc:
    if (ctx->pc == 0x1A24CCu) {
        ctx->pc = 0x1A24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24C8u;
        // 0x1a24cc: 0x262300d0  addiu       $v1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A24D0u;
        goto label_1a24d0;
    }
    ctx->pc = 0x1A24C8u;
    {
        const bool branch_taken_0x1a24c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24C8u;
        // 0x1a24cc: 0x262300d0  addiu       $v1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24c8) {
            ctx->pc = 0x1A2510u;
            goto label_1a2510;
        }
    }
    ctx->pc = 0x1A24D0u;
label_1a24d0:
    // 0x1a24d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a24d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a24d4:
    // 0x1a24d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a24d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a24d8:
    // 0x1a24d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a24d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a24dc:
    // 0x1a24dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a24dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a24e0:
    // 0x1a24e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a24e4:
    // 0x1a24e4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1a24e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1a24e8:
    // 0x1a24e8: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1a24e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_1a24ec:
    // 0x1a24ec: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1a24ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1a24f0:
    // 0x1a24f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1a24f4:
    // 0x1a24f4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a24f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1a24f8:
    // 0x1a24f8: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x1a24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1a24fc:
    // 0x1a24fc: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_1a2500:
    if (ctx->pc == 0x1A2500u) {
        ctx->pc = 0x1A2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24FCu;
        // 0x1a2500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2504u;
        goto label_1a2504;
    }
    ctx->pc = 0x1A24FCu;
    {
        const bool branch_taken_0x1a24fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24FCu;
        // 0x1a2500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24fc) {
            ctx->pc = 0x1A2514u;
            goto label_1a2514;
        }
    }
    ctx->pc = 0x1A2504u;
label_1a2504:
    // 0x1a2504: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x1a2504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2508:
    // 0x1a2508: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a2508u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a250c:
    // 0x1a250c: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1a250cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_1a2510:
    // 0x1a2510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2514:
    // 0x1a2514: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a2514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1a2518:
    // 0x1a2518: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a2518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a251c:
    // 0x1a251c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a251cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2520:
    // 0x1a2520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2524:
    // 0x1a2524: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a2524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2528:
    // 0x1a2528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a252c:
    // 0x1a252c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a2530:
    // 0x1a2530: 0x3e00008  jr          $ra
label_1a2534:
    if (ctx->pc == 0x1A2534u) {
        ctx->pc = 0x1A2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2530u;
        // 0x1a2534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2538u;
        goto label_fallthrough_0x1a2530;
    }
    ctx->pc = 0x1A2530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2530u;
        // 0x1a2534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2530:
    ctx->pc = 0x1A2538u;
}
