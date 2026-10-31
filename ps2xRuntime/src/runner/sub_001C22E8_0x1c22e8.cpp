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

// Function: sub_001C22E8
// Address: 0x1c22e8 - 0x1c2410
void sub_001C22E8_0x1c22e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C22E8_0x1c22e8");
#endif

    switch (ctx->pc) {
        case 0x1c22e8u: goto label_1c22e8;
        case 0x1c22ecu: goto label_1c22ec;
        case 0x1c22f0u: goto label_1c22f0;
        case 0x1c22f4u: goto label_1c22f4;
        case 0x1c22f8u: goto label_1c22f8;
        case 0x1c22fcu: goto label_1c22fc;
        case 0x1c2300u: goto label_1c2300;
        case 0x1c2304u: goto label_1c2304;
        case 0x1c2308u: goto label_1c2308;
        case 0x1c230cu: goto label_1c230c;
        case 0x1c2310u: goto label_1c2310;
        case 0x1c2314u: goto label_1c2314;
        case 0x1c2318u: goto label_1c2318;
        case 0x1c231cu: goto label_1c231c;
        case 0x1c2320u: goto label_1c2320;
        case 0x1c2324u: goto label_1c2324;
        case 0x1c2328u: goto label_1c2328;
        case 0x1c232cu: goto label_1c232c;
        case 0x1c2330u: goto label_1c2330;
        case 0x1c2334u: goto label_1c2334;
        case 0x1c2338u: goto label_1c2338;
        case 0x1c233cu: goto label_1c233c;
        case 0x1c2340u: goto label_1c2340;
        case 0x1c2344u: goto label_1c2344;
        case 0x1c2348u: goto label_1c2348;
        case 0x1c234cu: goto label_1c234c;
        case 0x1c2350u: goto label_1c2350;
        case 0x1c2354u: goto label_1c2354;
        case 0x1c2358u: goto label_1c2358;
        case 0x1c235cu: goto label_1c235c;
        case 0x1c2360u: goto label_1c2360;
        case 0x1c2364u: goto label_1c2364;
        case 0x1c2368u: goto label_1c2368;
        case 0x1c236cu: goto label_1c236c;
        case 0x1c2370u: goto label_1c2370;
        case 0x1c2374u: goto label_1c2374;
        case 0x1c2378u: goto label_1c2378;
        case 0x1c237cu: goto label_1c237c;
        case 0x1c2380u: goto label_1c2380;
        case 0x1c2384u: goto label_1c2384;
        case 0x1c2388u: goto label_1c2388;
        case 0x1c238cu: goto label_1c238c;
        case 0x1c2390u: goto label_1c2390;
        case 0x1c2394u: goto label_1c2394;
        case 0x1c2398u: goto label_1c2398;
        case 0x1c239cu: goto label_1c239c;
        case 0x1c23a0u: goto label_1c23a0;
        case 0x1c23a4u: goto label_1c23a4;
        case 0x1c23a8u: goto label_1c23a8;
        case 0x1c23acu: goto label_1c23ac;
        case 0x1c23b0u: goto label_1c23b0;
        case 0x1c23b4u: goto label_1c23b4;
        case 0x1c23b8u: goto label_1c23b8;
        case 0x1c23bcu: goto label_1c23bc;
        case 0x1c23c0u: goto label_1c23c0;
        case 0x1c23c4u: goto label_1c23c4;
        case 0x1c23c8u: goto label_1c23c8;
        case 0x1c23ccu: goto label_1c23cc;
        case 0x1c23d0u: goto label_1c23d0;
        case 0x1c23d4u: goto label_1c23d4;
        case 0x1c23d8u: goto label_1c23d8;
        case 0x1c23dcu: goto label_1c23dc;
        case 0x1c23e0u: goto label_1c23e0;
        case 0x1c23e4u: goto label_1c23e4;
        case 0x1c23e8u: goto label_1c23e8;
        case 0x1c23ecu: goto label_1c23ec;
        case 0x1c23f0u: goto label_1c23f0;
        case 0x1c23f4u: goto label_1c23f4;
        case 0x1c23f8u: goto label_1c23f8;
        case 0x1c23fcu: goto label_1c23fc;
        case 0x1c2400u: goto label_1c2400;
        case 0x1c2404u: goto label_1c2404;
        case 0x1c2408u: goto label_1c2408;
        case 0x1c240cu: goto label_1c240c;
        default: break;
    }

    ctx->pc = 0x1c22e8u;

label_1c22e8:
    // 0x1c22e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c22e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c22ec:
    // 0x1c22ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c22ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c22f0:
    // 0x1c22f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c22f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c22f4:
    // 0x1c22f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c22f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c22f8:
    // 0x1c22f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c22f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c22fc:
    // 0x1c22fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c22fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c2300:
    // 0x1c2300: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1c2300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1c2304:
    // 0x1c2304: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1c2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1c2308:
    // 0x1c2308: 0x40f809  jalr        $v0
label_1c230c:
    if (ctx->pc == 0x1C230Cu) {
        ctx->pc = 0x1C230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2308u;
        // 0x1c230c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2310u;
        goto label_1c2310;
    }
    ctx->pc = 0x1C2308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2310u);
        ctx->pc = 0x1C230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2308u;
        // 0x1c230c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2308u, 0x1C2310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2310u;
label_1c2310:
    // 0x1c2310: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1c2314:
    if (ctx->pc == 0x1C2314u) {
        ctx->pc = 0x1C2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2310u;
        // 0x1c2314: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2318u;
        goto label_1c2318;
    }
    ctx->pc = 0x1C2310u;
    {
        const bool branch_taken_0x1c2310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2310u;
        // 0x1c2314: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2310) {
            ctx->pc = 0x1C23FCu;
            goto label_1c23fc;
        }
    }
    ctx->pc = 0x1C2318u;
label_1c2318:
    // 0x1c2318: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c2318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c231c:
    // 0x1c231c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1c231cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1c2320:
    // 0x1c2320: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1c2320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1c2324:
    // 0x1c2324: 0x40f809  jalr        $v0
label_1c2328:
    if (ctx->pc == 0x1C2328u) {
        ctx->pc = 0x1C2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2324u;
        // 0x1c2328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C232Cu;
        goto label_1c232c;
    }
    ctx->pc = 0x1C2324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C232Cu);
        ctx->pc = 0x1C2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2324u;
        // 0x1c2328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2324u, 0x1C232Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C232Cu;
label_1c232c:
    // 0x1c232c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1c2330:
    if (ctx->pc == 0x1C2330u) {
        ctx->pc = 0x1C2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C232Cu;
        // 0x1c2330: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2334u;
        goto label_1c2334;
    }
    ctx->pc = 0x1C232Cu;
    {
        const bool branch_taken_0x1c232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C232Cu;
        // 0x1c2330: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c232c) {
            ctx->pc = 0x1C23FCu;
            goto label_1c23fc;
        }
    }
    ctx->pc = 0x1C2334u;
label_1c2334:
    // 0x1c2334: 0x7a2203c0  lq          $v0, 0x3C0($s1)
    ctx->pc = 0x1c2334u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 960)));
label_1c2338:
    // 0x1c2338: 0xc62503e0  lwc1        $f5, 0x3E0($s1)
    ctx->pc = 0x1c2338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1c233c:
    // 0x1c233c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1c233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1c2340:
    // 0x1c2340: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1c2340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2344:
    // 0x1c2344: 0x8e2303a0  lw          $v1, 0x3A0($s1)
    ctx->pc = 0x1c2344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 928)));
label_1c2348:
    // 0x1c2348: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1c2348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1c234c:
    // 0x1c234c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c2350:
    // 0x1c2350: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1c2350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2354:
    // 0x1c2354: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1c2358:
    if (ctx->pc == 0x1C2358u) {
        ctx->pc = 0x1C2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2354u;
        // 0x1c2358: 0x7e220050  sq          $v0, 0x50($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C235Cu;
        goto label_1c235c;
    }
    ctx->pc = 0x1C2354u;
    {
        const bool branch_taken_0x1c2354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2354u;
        // 0x1c2358: 0x7e220050  sq          $v0, 0x50($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2354) {
            ctx->pc = 0x1C23BCu;
            goto label_1c23bc;
        }
    }
    ctx->pc = 0x1C235Cu;
label_1c235c:
    // 0x1c235c: 0xc62303d8  lwc1        $f3, 0x3D8($s1)
    ctx->pc = 0x1c235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2360:
    // 0x1c2360: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c2360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c2364:
    // 0x1c2364: 0xc62003b8  lwc1        $f0, 0x3B8($s1)
    ctx->pc = 0x1c2364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2368:
    // 0x1c2368: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x1c2368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_1c236c:
    // 0x1c236c: 0xc62103b0  lwc1        $f1, 0x3B0($s1)
    ctx->pc = 0x1c236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c2370:
    // 0x1c2370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2374:
    // 0x1c2374: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c2374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1c2378:
    // 0x1c2378: 0xc62203d0  lwc1        $f2, 0x3D0($s1)
    ctx->pc = 0x1c2378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c237c:
    // 0x1c237c: 0xc62303b4  lwc1        $f3, 0x3B4($s1)
    ctx->pc = 0x1c237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2380:
    // 0x1c2380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2384:
    // 0x1c2384: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c2384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c2388:
    // 0x1c2388: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c238c:
    // 0x1c238c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c238cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c2390:
    // 0x1c2390: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1c2390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1c2394:
    // 0x1c2394: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1c2394u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1c2398:
    // 0x1c2398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c239c:
    // 0x1c239c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1c239cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1c23a0:
    // 0x1c23a0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1c23a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1c23a4:
    // 0x1c23a4: 0xc06e4dc  jal         func_1B9370
label_1c23a8:
    if (ctx->pc == 0x1C23A8u) {
        ctx->pc = 0x1C23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23A4u;
        // 0x1c23a8: 0xe444000c  swc1        $f4, 0xC($v0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23ACu;
        goto label_1c23ac;
    }
    ctx->pc = 0x1C23A4u;
    SET_GPR_U32(ctx, 31, 0x1C23ACu);
    ctx->pc = 0x1C23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23A4u;
    // 0x1c23a8: 0xe444000c  swc1        $f4, 0xC($v0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1C23A4u, 0x1C23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23ACu;
label_1c23ac:
    // 0x1c23ac: 0xc06e552  jal         func_1B9548
label_1c23b0:
    if (ctx->pc == 0x1C23B0u) {
        ctx->pc = 0x1C23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23ACu;
        // 0x1c23b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23B4u;
        goto label_1c23b4;
    }
    ctx->pc = 0x1C23ACu;
    SET_GPR_U32(ctx, 31, 0x1C23B4u);
    ctx->pc = 0x1C23B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23ACu;
    // 0x1c23b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1C23ACu, 0x1C23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23B4u;
label_1c23b4:
    // 0x1c23b4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1c23b8:
    if (ctx->pc == 0x1C23B8u) {
        ctx->pc = 0x1C23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23B4u;
        // 0x1c23b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23BCu;
        goto label_1c23bc;
    }
    ctx->pc = 0x1C23B4u;
    {
        const bool branch_taken_0x1c23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23B4u;
        // 0x1c23b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23b4) {
            ctx->pc = 0x1C23F4u;
            goto label_1c23f4;
        }
    }
    ctx->pc = 0x1C23BCu;
label_1c23bc:
    // 0x1c23bc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1c23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1c23c0:
    // 0x1c23c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c23c4:
    if (ctx->pc == 0x1C23C4u) {
        ctx->pc = 0x1C23C8u;
        goto label_1c23c8;
    }
    ctx->pc = 0x1C23C0u;
    {
        const bool branch_taken_0x1c23c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c23c0) {
            ctx->pc = 0x1C23E8u;
            goto label_1c23e8;
        }
    }
    ctx->pc = 0x1C23C8u;
label_1c23c8:
    // 0x1c23c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c23cc:
    // 0x1c23cc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c23ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c23d0:
    // 0x1c23d0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c23d4:
    // 0x1c23d4: 0x40f809  jalr        $v0
label_1c23d8:
    if (ctx->pc == 0x1C23D8u) {
        ctx->pc = 0x1C23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23D4u;
        // 0x1c23d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23DCu;
        goto label_1c23dc;
    }
    ctx->pc = 0x1C23D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C23DCu);
        ctx->pc = 0x1C23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23D4u;
        // 0x1c23d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C23D4u, 0x1C23DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C23DCu;
label_1c23dc:
    // 0x1c23dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c23e0:
    // 0x1c23e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1c23e4:
    if (ctx->pc == 0x1C23E4u) {
        ctx->pc = 0x1C23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23E0u;
        // 0x1c23e4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23E8u;
        goto label_1c23e8;
    }
    ctx->pc = 0x1C23E0u;
    {
        const bool branch_taken_0x1c23e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23E0u;
        // 0x1c23e4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23e0) {
            ctx->pc = 0x1C23F0u;
            goto label_1c23f0;
        }
    }
    ctx->pc = 0x1C23E8u;
label_1c23e8:
    // 0x1c23e8: 0xc06886e  jal         func_1A21B8
label_1c23ec:
    if (ctx->pc == 0x1C23ECu) {
        ctx->pc = 0x1C23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23E8u;
        // 0x1c23ec: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23F0u;
        goto label_1c23f0;
    }
    ctx->pc = 0x1C23E8u;
    SET_GPR_U32(ctx, 31, 0x1C23F0u);
    ctx->pc = 0x1C23ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23E8u;
    // 0x1c23ec: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1C23E8u, 0x1C23F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23F0u;
label_1c23f0:
    // 0x1c23f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c23f4:
    // 0x1c23f4: 0xae2203a8  sw          $v0, 0x3A8($s1)
    ctx->pc = 0x1c23f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 2));
label_1c23f8:
    // 0x1c23f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c23f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c23fc:
    // 0x1c23fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c23fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2400:
    // 0x1c2400: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2404:
    // 0x1c2404: 0x3e00008  jr          $ra
label_1c2408:
    if (ctx->pc == 0x1C2408u) {
        ctx->pc = 0x1C2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2404u;
        // 0x1c2408: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C240Cu;
        goto label_1c240c;
    }
    ctx->pc = 0x1C2404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2404u;
        // 0x1c2408: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C240Cu;
label_1c240c:
    // 0x1c240c: 0x0  nop
    ctx->pc = 0x1c240cu;
    // NOP
    ctx->pc = 0x1c2410u;
}
