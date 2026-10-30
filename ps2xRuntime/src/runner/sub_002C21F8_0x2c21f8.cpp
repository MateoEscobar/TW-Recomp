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

// Function: sub_002C21F8
// Address: 0x2c21f8 - 0x2c2430
void sub_002C21F8_0x2c21f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C21F8_0x2c21f8");
#endif

    switch (ctx->pc) {
        case 0x2c21f8u: goto label_2c21f8;
        case 0x2c21fcu: goto label_2c21fc;
        case 0x2c2200u: goto label_2c2200;
        case 0x2c2204u: goto label_2c2204;
        case 0x2c2208u: goto label_2c2208;
        case 0x2c220cu: goto label_2c220c;
        case 0x2c2210u: goto label_2c2210;
        case 0x2c2214u: goto label_2c2214;
        case 0x2c2218u: goto label_2c2218;
        case 0x2c221cu: goto label_2c221c;
        case 0x2c2220u: goto label_2c2220;
        case 0x2c2224u: goto label_2c2224;
        case 0x2c2228u: goto label_2c2228;
        case 0x2c222cu: goto label_2c222c;
        case 0x2c2230u: goto label_2c2230;
        case 0x2c2234u: goto label_2c2234;
        case 0x2c2238u: goto label_2c2238;
        case 0x2c223cu: goto label_2c223c;
        case 0x2c2240u: goto label_2c2240;
        case 0x2c2244u: goto label_2c2244;
        case 0x2c2248u: goto label_2c2248;
        case 0x2c224cu: goto label_2c224c;
        case 0x2c2250u: goto label_2c2250;
        case 0x2c2254u: goto label_2c2254;
        case 0x2c2258u: goto label_2c2258;
        case 0x2c225cu: goto label_2c225c;
        case 0x2c2260u: goto label_2c2260;
        case 0x2c2264u: goto label_2c2264;
        case 0x2c2268u: goto label_2c2268;
        case 0x2c226cu: goto label_2c226c;
        case 0x2c2270u: goto label_2c2270;
        case 0x2c2274u: goto label_2c2274;
        case 0x2c2278u: goto label_2c2278;
        case 0x2c227cu: goto label_2c227c;
        case 0x2c2280u: goto label_2c2280;
        case 0x2c2284u: goto label_2c2284;
        case 0x2c2288u: goto label_2c2288;
        case 0x2c228cu: goto label_2c228c;
        case 0x2c2290u: goto label_2c2290;
        case 0x2c2294u: goto label_2c2294;
        case 0x2c2298u: goto label_2c2298;
        case 0x2c229cu: goto label_2c229c;
        case 0x2c22a0u: goto label_2c22a0;
        case 0x2c22a4u: goto label_2c22a4;
        case 0x2c22a8u: goto label_2c22a8;
        case 0x2c22acu: goto label_2c22ac;
        case 0x2c22b0u: goto label_2c22b0;
        case 0x2c22b4u: goto label_2c22b4;
        case 0x2c22b8u: goto label_2c22b8;
        case 0x2c22bcu: goto label_2c22bc;
        case 0x2c22c0u: goto label_2c22c0;
        case 0x2c22c4u: goto label_2c22c4;
        case 0x2c22c8u: goto label_2c22c8;
        case 0x2c22ccu: goto label_2c22cc;
        case 0x2c22d0u: goto label_2c22d0;
        case 0x2c22d4u: goto label_2c22d4;
        case 0x2c22d8u: goto label_2c22d8;
        case 0x2c22dcu: goto label_2c22dc;
        case 0x2c22e0u: goto label_2c22e0;
        case 0x2c22e4u: goto label_2c22e4;
        case 0x2c22e8u: goto label_2c22e8;
        case 0x2c22ecu: goto label_2c22ec;
        case 0x2c22f0u: goto label_2c22f0;
        case 0x2c22f4u: goto label_2c22f4;
        case 0x2c22f8u: goto label_2c22f8;
        case 0x2c22fcu: goto label_2c22fc;
        case 0x2c2300u: goto label_2c2300;
        case 0x2c2304u: goto label_2c2304;
        case 0x2c2308u: goto label_2c2308;
        case 0x2c230cu: goto label_2c230c;
        case 0x2c2310u: goto label_2c2310;
        case 0x2c2314u: goto label_2c2314;
        case 0x2c2318u: goto label_2c2318;
        case 0x2c231cu: goto label_2c231c;
        case 0x2c2320u: goto label_2c2320;
        case 0x2c2324u: goto label_2c2324;
        case 0x2c2328u: goto label_2c2328;
        case 0x2c232cu: goto label_2c232c;
        case 0x2c2330u: goto label_2c2330;
        case 0x2c2334u: goto label_2c2334;
        case 0x2c2338u: goto label_2c2338;
        case 0x2c233cu: goto label_2c233c;
        case 0x2c2340u: goto label_2c2340;
        case 0x2c2344u: goto label_2c2344;
        case 0x2c2348u: goto label_2c2348;
        case 0x2c234cu: goto label_2c234c;
        case 0x2c2350u: goto label_2c2350;
        case 0x2c2354u: goto label_2c2354;
        case 0x2c2358u: goto label_2c2358;
        case 0x2c235cu: goto label_2c235c;
        case 0x2c2360u: goto label_2c2360;
        case 0x2c2364u: goto label_2c2364;
        case 0x2c2368u: goto label_2c2368;
        case 0x2c236cu: goto label_2c236c;
        case 0x2c2370u: goto label_2c2370;
        case 0x2c2374u: goto label_2c2374;
        case 0x2c2378u: goto label_2c2378;
        case 0x2c237cu: goto label_2c237c;
        case 0x2c2380u: goto label_2c2380;
        case 0x2c2384u: goto label_2c2384;
        case 0x2c2388u: goto label_2c2388;
        case 0x2c238cu: goto label_2c238c;
        case 0x2c2390u: goto label_2c2390;
        case 0x2c2394u: goto label_2c2394;
        case 0x2c2398u: goto label_2c2398;
        case 0x2c239cu: goto label_2c239c;
        case 0x2c23a0u: goto label_2c23a0;
        case 0x2c23a4u: goto label_2c23a4;
        case 0x2c23a8u: goto label_2c23a8;
        case 0x2c23acu: goto label_2c23ac;
        case 0x2c23b0u: goto label_2c23b0;
        case 0x2c23b4u: goto label_2c23b4;
        case 0x2c23b8u: goto label_2c23b8;
        case 0x2c23bcu: goto label_2c23bc;
        case 0x2c23c0u: goto label_2c23c0;
        case 0x2c23c4u: goto label_2c23c4;
        case 0x2c23c8u: goto label_2c23c8;
        case 0x2c23ccu: goto label_2c23cc;
        case 0x2c23d0u: goto label_2c23d0;
        case 0x2c23d4u: goto label_2c23d4;
        case 0x2c23d8u: goto label_2c23d8;
        case 0x2c23dcu: goto label_2c23dc;
        case 0x2c23e0u: goto label_2c23e0;
        case 0x2c23e4u: goto label_2c23e4;
        case 0x2c23e8u: goto label_2c23e8;
        case 0x2c23ecu: goto label_2c23ec;
        case 0x2c23f0u: goto label_2c23f0;
        case 0x2c23f4u: goto label_2c23f4;
        case 0x2c23f8u: goto label_2c23f8;
        case 0x2c23fcu: goto label_2c23fc;
        case 0x2c2400u: goto label_2c2400;
        case 0x2c2404u: goto label_2c2404;
        case 0x2c2408u: goto label_2c2408;
        case 0x2c240cu: goto label_2c240c;
        case 0x2c2410u: goto label_2c2410;
        case 0x2c2414u: goto label_2c2414;
        case 0x2c2418u: goto label_2c2418;
        case 0x2c241cu: goto label_2c241c;
        case 0x2c2420u: goto label_2c2420;
        case 0x2c2424u: goto label_2c2424;
        case 0x2c2428u: goto label_2c2428;
        case 0x2c242cu: goto label_2c242c;
        default: break;
    }

    ctx->pc = 0x2c21f8u;

label_2c21f8:
    // 0x2c21f8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2c21f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2c21fc:
    // 0x2c21fc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2c21fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2c2200:
    // 0x2c2200: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c2200u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c2204:
    // 0x2c2204: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2c2204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2c2208:
    // 0x2c2208: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2c2208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2c220c:
    // 0x2c220c: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x2c220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_2c2210:
    // 0x2c2210: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c2210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2c2214:
    // 0x2c2214: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2c2214u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2c2218:
    // 0x2c2218: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2c2218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2c221c:
    // 0x2c221c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2c221cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2c2220:
    // 0x2c2220: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2c2220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2c2224:
    // 0x2c2224: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2c2224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2c2228:
    // 0x2c2228: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2c2228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2c222c:
    // 0x2c222c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2c222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2c2230:
    // 0x2c2230: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2c2230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2c2234:
    // 0x2c2234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c2234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c2238:
    // 0x2c2238: 0xc0e40a2  jal         func_390288
label_2c223c:
    if (ctx->pc == 0x2C223Cu) {
        ctx->pc = 0x2C223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2238u;
        // 0x2c223c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2240u;
        goto label_2c2240;
    }
    ctx->pc = 0x2C2238u;
    SET_GPR_U32(ctx, 31, 0x2C2240u);
    ctx->pc = 0x2C223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2238u;
    // 0x2c223c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C2238u, 0x2C2240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2240u;
label_2c2240:
    // 0x2c2240: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2c2240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2c2244:
    // 0x2c2244: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2c2244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2c2248:
    // 0x2c2248: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c2248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2c224c:
    // 0x2c224c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2c224cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c2250:
    // 0x2c2250: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c2250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2254:
    // 0x2c2254: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2c2254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2c2258:
    // 0x2c2258: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2c2258u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c225c:
    // 0x2c225c: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x2c225cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2c2260:
    // 0x2c2260: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c2260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c2264:
    // 0x2c2264: 0xc0a2fc0  jal         func_28BF00
label_2c2268:
    if (ctx->pc == 0x2C2268u) {
        ctx->pc = 0x2C2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2264u;
        // 0x2c2268: 0x50f021  addu        $fp, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C226Cu;
        goto label_2c226c;
    }
    ctx->pc = 0x2C2264u;
    SET_GPR_U32(ctx, 31, 0x2C226Cu);
    ctx->pc = 0x2C2268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2264u;
    // 0x2c2268: 0x50f021  addu        $fp, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2C2264u, 0x2C226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C226Cu;
label_2c226c:
    // 0x2c226c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c226cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c2270:
    // 0x2c2270: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c2270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c2274:
    // 0x2c2274: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2c2274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2c2278:
    // 0x2c2278: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c2278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c227c:
    // 0x2c227c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2c227cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c2280:
    // 0x2c2280: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x2c2280u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c2284:
    // 0x2c2284: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c2284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c2288:
    // 0x2c2288: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c2288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c228c:
    // 0x2c228c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2c228cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2c2290:
    // 0x2c2290: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2c2290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2c2294:
    // 0x2c2294: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c2294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2c2298:
    // 0x2c2298: 0x0  nop
    ctx->pc = 0x2c2298u;
    // NOP
label_2c229c:
    // 0x2c229c: 0x0  nop
    ctx->pc = 0x2c229cu;
    // NOP
label_2c22a0:
    // 0x2c22a0: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_2c22a4:
    if (ctx->pc == 0x2C22A4u) {
        ctx->pc = 0x2C22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22A0u;
        // 0x2c22a4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C22A8u;
        goto label_2c22a8;
    }
    ctx->pc = 0x2C22A0u;
    {
        const bool branch_taken_0x2c22a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22A0u;
        // 0x2c22a4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22a0) {
            ctx->pc = 0x2C2290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2290;
        }
    }
    ctx->pc = 0x2C22A8u;
label_2c22a8:
    // 0x2c22a8: 0xc10587a  jal         func_4161E8
label_2c22ac:
    if (ctx->pc == 0x2C22ACu) {
        ctx->pc = 0x2C22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22A8u;
        // 0x2c22ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C22B0u;
        goto label_2c22b0;
    }
    ctx->pc = 0x2C22A8u;
    SET_GPR_U32(ctx, 31, 0x2C22B0u);
    ctx->pc = 0x2C22ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22A8u;
    // 0x2c22ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C22A8u, 0x2C22B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22B0u;
label_2c22b0:
    // 0x2c22b0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2c22b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2c22b4:
    // 0x2c22b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c22b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c22b8:
    // 0x2c22b8: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2c22b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2c22bc:
    // 0x2c22bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c22bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c22c0:
    // 0x2c22c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c22c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c22c4:
    // 0x2c22c4: 0x24e7c1f0  addiu       $a3, $a3, -0x3E10
    ctx->pc = 0x2c22c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951408));
label_2c22c8:
    // 0x2c22c8: 0xc0a7244  jal         func_29C910
label_2c22cc:
    if (ctx->pc == 0x2C22CCu) {
        ctx->pc = 0x2C22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22C8u;
        // 0x2c22cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C22D0u;
        goto label_2c22d0;
    }
    ctx->pc = 0x2C22C8u;
    SET_GPR_U32(ctx, 31, 0x2C22D0u);
    ctx->pc = 0x2C22CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22C8u;
    // 0x2c22cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C910u, 0x2C22C8u, 0x2C22D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22D0u;
label_2c22d0:
    // 0x2c22d0: 0xc137832  jal         func_4DE0C8
label_2c22d4:
    if (ctx->pc == 0x2C22D4u) {
        ctx->pc = 0x2C22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22D0u;
        // 0x2c22d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C22D8u;
        goto label_2c22d8;
    }
    ctx->pc = 0x2C22D0u;
    SET_GPR_U32(ctx, 31, 0x2C22D8u);
    ctx->pc = 0x2C22D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22D0u;
    // 0x2c22d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2C22D0u, 0x2C22D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22D8u;
label_2c22d8:
    // 0x2c22d8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_2c22dc:
    if (ctx->pc == 0x2C22DCu) {
        ctx->pc = 0x2C22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22D8u;
        // 0x2c22dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C22E0u;
        goto label_2c22e0;
    }
    ctx->pc = 0x2C22D8u;
    {
        const bool branch_taken_0x2c22d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22D8u;
        // 0x2c22dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22d8) {
            ctx->pc = 0x2C2378u;
            goto label_2c2378;
        }
    }
    ctx->pc = 0x2C22E0u;
label_2c22e0:
    // 0x2c22e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c22e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c22e4:
    // 0x2c22e4: 0x0  nop
    ctx->pc = 0x2c22e4u;
    // NOP
label_2c22e8:
    // 0x2c22e8: 0xc137826  jal         func_4DE098
label_2c22ec:
    if (ctx->pc == 0x2C22ECu) {
        ctx->pc = 0x2C22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22E8u;
        // 0x2c22ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C22F0u;
        goto label_2c22f0;
    }
    ctx->pc = 0x2C22E8u;
    SET_GPR_U32(ctx, 31, 0x2C22F0u);
    ctx->pc = 0x2C22ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22E8u;
    // 0x2c22ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2C22E8u, 0x2C22F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22F0u;
label_2c22f0:
    // 0x2c22f0: 0xc0e409a  jal         func_390268
label_2c22f4:
    if (ctx->pc == 0x2C22F4u) {
        ctx->pc = 0x2C22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22F0u;
        // 0x2c22f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C22F8u;
        goto label_2c22f8;
    }
    ctx->pc = 0x2C22F0u;
    SET_GPR_U32(ctx, 31, 0x2C22F8u);
    ctx->pc = 0x2C22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C22F0u;
    // 0x2c22f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C22F0u, 0x2C22F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C22F8u;
label_2c22f8:
    // 0x2c22f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c22f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c22fc:
    // 0x2c22fc: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2c2300:
    if (ctx->pc == 0x2C2300u) {
        ctx->pc = 0x2C2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22FCu;
        // 0x2c2300: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2304u;
        goto label_2c2304;
    }
    ctx->pc = 0x2C22FCu;
    {
        const bool branch_taken_0x2c22fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22FCu;
        // 0x2c2300: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22fc) {
            ctx->pc = 0x2C2368u;
            goto label_2c2368;
        }
    }
    ctx->pc = 0x2C2304u;
label_2c2304:
    // 0x2c2304: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c2304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2c2308:
    // 0x2c2308: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2c2308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2c230c:
    // 0x2c230c: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2c230cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c2310:
    // 0x2c2310: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c2310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c2314:
    // 0x2c2314: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c2314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2c2318:
    // 0x2c2318: 0xc0cdb38  jal         func_336CE0
label_2c231c:
    if (ctx->pc == 0x2C231Cu) {
        ctx->pc = 0x2C231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2318u;
        // 0x2c231c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2320u;
        goto label_2c2320;
    }
    ctx->pc = 0x2C2318u;
    SET_GPR_U32(ctx, 31, 0x2C2320u);
    ctx->pc = 0x2C231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2318u;
    // 0x2c231c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C2318u, 0x2C2320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2320u;
label_2c2320:
    // 0x2c2320: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c2320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c2324:
    // 0x2c2324: 0x0  nop
    ctx->pc = 0x2c2324u;
    // NOP
label_2c2328:
    // 0x2c2328: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
label_2c232c:
    if (ctx->pc == 0x2C232Cu) {
        ctx->pc = 0x2C232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2328u;
        // 0x2c232c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2330u;
        goto label_2c2330;
    }
    ctx->pc = 0x2C2328u;
    {
        const bool branch_taken_0x2c2328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2328) {
            ctx->pc = 0x2C232Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2328u;
            // 0x2c232c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C236Cu;
            goto label_2c236c;
        }
    }
    ctx->pc = 0x2C2330u;
label_2c2330:
    // 0x2c2330: 0x86100002  lh          $s0, 0x2($s0)
    ctx->pc = 0x2c2330u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2c2334:
    // 0x2c2334: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c2334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c2338:
    // 0x2c2338: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c2338u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2c233c:
    // 0x2c233c: 0xc10587a  jal         func_4161E8
label_2c2340:
    if (ctx->pc == 0x2C2340u) {
        ctx->pc = 0x2C2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C233Cu;
        // 0x2c2340: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2344u;
        goto label_2c2344;
    }
    ctx->pc = 0x2C233Cu;
    SET_GPR_U32(ctx, 31, 0x2C2344u);
    ctx->pc = 0x2C2340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C233Cu;
    // 0x2c2340: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C233Cu, 0x2C2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2344u;
label_2c2344:
    // 0x2c2344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2348:
    // 0x2c2348: 0xc0cdb38  jal         func_336CE0
label_2c234c:
    if (ctx->pc == 0x2C234Cu) {
        ctx->pc = 0x2C234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2348u;
        // 0x2c234c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2350u;
        goto label_2c2350;
    }
    ctx->pc = 0x2C2348u;
    SET_GPR_U32(ctx, 31, 0x2C2350u);
    ctx->pc = 0x2C234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2348u;
    // 0x2c234c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C2348u, 0x2C2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2350u;
label_2c2350:
    // 0x2c2350: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2c2350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c2354:
    // 0x2c2354: 0x0  nop
    ctx->pc = 0x2c2354u;
    // NOP
label_2c2358:
    // 0x2c2358: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2c235c:
    if (ctx->pc == 0x2C235Cu) {
        ctx->pc = 0x2C235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2358u;
        // 0x2c235c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2360u;
        goto label_2c2360;
    }
    ctx->pc = 0x2C2358u;
    {
        const bool branch_taken_0x2c2358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2358) {
            ctx->pc = 0x2C235Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2358u;
            // 0x2c235c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C236Cu;
            goto label_2c236c;
        }
    }
    ctx->pc = 0x2C2360u;
label_2c2360:
    // 0x2c2360: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2c2360u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c2364:
    // 0x2c2364: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c2364u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2c2368:
    // 0x2c2368: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c2368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2c236c:
    // 0x2c236c: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x2c236cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2c2370:
    // 0x2c2370: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_2c2374:
    if (ctx->pc == 0x2C2374u) {
        ctx->pc = 0x2C2374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2370u;
        // 0x2c2374: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2378u;
        goto label_2c2378;
    }
    ctx->pc = 0x2C2370u;
    {
        const bool branch_taken_0x2c2370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2370u;
        // 0x2c2374: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2370) {
            ctx->pc = 0x2C22E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c22e8;
        }
    }
    ctx->pc = 0x2C2378u;
label_2c2378:
    // 0x2c2378: 0x12e0001e  beqz        $s7, . + 4 + (0x1E << 2)
label_2c237c:
    if (ctx->pc == 0x2C237Cu) {
        ctx->pc = 0x2C237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2378u;
        // 0x2c237c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2380u;
        goto label_2c2380;
    }
    ctx->pc = 0x2C2378u;
    {
        const bool branch_taken_0x2c2378 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2378u;
        // 0x2c237c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2378) {
            ctx->pc = 0x2C23F4u;
            goto label_2c23f4;
        }
    }
    ctx->pc = 0x2C2380u;
label_2c2380:
    // 0x2c2380: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c2380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c2384:
    // 0x2c2384: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2c2384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2c2388:
    // 0x2c2388: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2c2388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2c238c:
    // 0x2c238c: 0xa040028f  sb          $zero, 0x28F($v0)
    ctx->pc = 0x2c238cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 655), (uint8_t)GPR_U32(ctx, 0));
label_2c2390:
    // 0x2c2390: 0xc0a3464  jal         func_28D190
label_2c2394:
    if (ctx->pc == 0x2C2394u) {
        ctx->pc = 0x2C2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2390u;
        // 0x2c2394: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2398u;
        goto label_2c2398;
    }
    ctx->pc = 0x2C2390u;
    SET_GPR_U32(ctx, 31, 0x2C2398u);
    ctx->pc = 0x2C2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2390u;
    // 0x2c2394: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x2C2390u, 0x2C2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2398u;
label_2c2398:
    // 0x2c2398: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c2398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c239c:
    // 0x2c239c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c239cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c23a0:
    // 0x2c23a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c23a4:
    // 0x2c23a4: 0x40f809  jalr        $v0
label_2c23a8:
    if (ctx->pc == 0x2C23A8u) {
        ctx->pc = 0x2C23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23A4u;
        // 0x2c23a8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C23ACu;
        goto label_2c23ac;
    }
    ctx->pc = 0x2C23A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C23ACu);
        ctx->pc = 0x2C23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23A4u;
        // 0x2c23a8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C23A4u, 0x2C23ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C23ACu;
label_2c23ac:
    // 0x2c23ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c23acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c23b0:
    // 0x2c23b0: 0xc10587a  jal         func_4161E8
label_2c23b4:
    if (ctx->pc == 0x2C23B4u) {
        ctx->pc = 0x2C23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23B0u;
        // 0x2c23b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C23B8u;
        goto label_2c23b8;
    }
    ctx->pc = 0x2C23B0u;
    SET_GPR_U32(ctx, 31, 0x2C23B8u);
    ctx->pc = 0x2C23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23B0u;
    // 0x2c23b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C23B0u, 0x2C23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23B8u;
label_2c23b8:
    // 0x2c23b8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2c23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2c23bc:
    // 0x2c23bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c23bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c23c0:
    // 0x2c23c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c23c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c23c4:
    // 0x2c23c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c23c8:
    // 0x2c23c8: 0x40f809  jalr        $v0
label_2c23cc:
    if (ctx->pc == 0x2C23CCu) {
        ctx->pc = 0x2C23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23C8u;
        // 0x2c23cc: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C23D0u;
        goto label_2c23d0;
    }
    ctx->pc = 0x2C23C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C23D0u);
        ctx->pc = 0x2C23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23C8u;
        // 0x2c23cc: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C23C8u, 0x2C23D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C23D0u;
label_2c23d0:
    // 0x2c23d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2c23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2c23d4:
    // 0x2c23d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c23d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c23d8:
    // 0x2c23d8: 0x8c68bd30  lw          $t0, -0x42D0($v1)
    ctx->pc = 0x2c23d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2c23dc:
    // 0x2c23dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c23dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c23e0:
    // 0x2c23e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c23e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c23e4:
    // 0x2c23e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c23e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c23e8:
    // 0x2c23e8: 0xc0b1018  jal         func_2C4060
label_2c23ec:
    if (ctx->pc == 0x2C23ECu) {
        ctx->pc = 0x2C23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23E8u;
        // 0x2c23ec: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C23F0u;
        goto label_2c23f0;
    }
    ctx->pc = 0x2C23E8u;
    SET_GPR_U32(ctx, 31, 0x2C23F0u);
    ctx->pc = 0x2C23ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C23E8u;
    // 0x2c23ec: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x2C23E8u, 0x2C23F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C23F0u;
label_2c23f0:
    // 0x2c23f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c23f4:
    // 0x2c23f4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2c23f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c23f8:
    // 0x2c23f8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2c23f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c23fc:
    // 0x2c23fc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2c23fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c2400:
    // 0x2c2400: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2c2400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c2404:
    // 0x2c2404: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2c2404u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c2408:
    // 0x2c2408: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2c2408u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c240c:
    // 0x2c240c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c240cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c2410:
    // 0x2c2410: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2c2410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c2414:
    // 0x2c2414: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2c2414u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c2418:
    // 0x2c2418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c2418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c241c:
    // 0x2c241c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2c241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c2420:
    // 0x2c2420: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2c2420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c2424:
    // 0x2c2424: 0x3e00008  jr          $ra
label_2c2428:
    if (ctx->pc == 0x2C2428u) {
        ctx->pc = 0x2C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2424u;
        // 0x2c2428: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C242Cu;
        goto label_2c242c;
    }
    ctx->pc = 0x2C2424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2424u;
        // 0x2c2428: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C242Cu;
label_2c242c:
    // 0x2c242c: 0x0  nop
    ctx->pc = 0x2c242cu;
    // NOP
    ctx->pc = 0x2c2430u;
}
