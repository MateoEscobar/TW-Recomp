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

// Function: sub_00199380
// Address: 0x199380 - 0x1995c0
void sub_00199380_0x199380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199380_0x199380");
#endif

    switch (ctx->pc) {
        case 0x199380u: goto label_199380;
        case 0x199384u: goto label_199384;
        case 0x199388u: goto label_199388;
        case 0x19938cu: goto label_19938c;
        case 0x199390u: goto label_199390;
        case 0x199394u: goto label_199394;
        case 0x199398u: goto label_199398;
        case 0x19939cu: goto label_19939c;
        case 0x1993a0u: goto label_1993a0;
        case 0x1993a4u: goto label_1993a4;
        case 0x1993a8u: goto label_1993a8;
        case 0x1993acu: goto label_1993ac;
        case 0x1993b0u: goto label_1993b0;
        case 0x1993b4u: goto label_1993b4;
        case 0x1993b8u: goto label_1993b8;
        case 0x1993bcu: goto label_1993bc;
        case 0x1993c0u: goto label_1993c0;
        case 0x1993c4u: goto label_1993c4;
        case 0x1993c8u: goto label_1993c8;
        case 0x1993ccu: goto label_1993cc;
        case 0x1993d0u: goto label_1993d0;
        case 0x1993d4u: goto label_1993d4;
        case 0x1993d8u: goto label_1993d8;
        case 0x1993dcu: goto label_1993dc;
        case 0x1993e0u: goto label_1993e0;
        case 0x1993e4u: goto label_1993e4;
        case 0x1993e8u: goto label_1993e8;
        case 0x1993ecu: goto label_1993ec;
        case 0x1993f0u: goto label_1993f0;
        case 0x1993f4u: goto label_1993f4;
        case 0x1993f8u: goto label_1993f8;
        case 0x1993fcu: goto label_1993fc;
        case 0x199400u: goto label_199400;
        case 0x199404u: goto label_199404;
        case 0x199408u: goto label_199408;
        case 0x19940cu: goto label_19940c;
        case 0x199410u: goto label_199410;
        case 0x199414u: goto label_199414;
        case 0x199418u: goto label_199418;
        case 0x19941cu: goto label_19941c;
        case 0x199420u: goto label_199420;
        case 0x199424u: goto label_199424;
        case 0x199428u: goto label_199428;
        case 0x19942cu: goto label_19942c;
        case 0x199430u: goto label_199430;
        case 0x199434u: goto label_199434;
        case 0x199438u: goto label_199438;
        case 0x19943cu: goto label_19943c;
        case 0x199440u: goto label_199440;
        case 0x199444u: goto label_199444;
        case 0x199448u: goto label_199448;
        case 0x19944cu: goto label_19944c;
        case 0x199450u: goto label_199450;
        case 0x199454u: goto label_199454;
        case 0x199458u: goto label_199458;
        case 0x19945cu: goto label_19945c;
        case 0x199460u: goto label_199460;
        case 0x199464u: goto label_199464;
        case 0x199468u: goto label_199468;
        case 0x19946cu: goto label_19946c;
        case 0x199470u: goto label_199470;
        case 0x199474u: goto label_199474;
        case 0x199478u: goto label_199478;
        case 0x19947cu: goto label_19947c;
        case 0x199480u: goto label_199480;
        case 0x199484u: goto label_199484;
        case 0x199488u: goto label_199488;
        case 0x19948cu: goto label_19948c;
        case 0x199490u: goto label_199490;
        case 0x199494u: goto label_199494;
        case 0x199498u: goto label_199498;
        case 0x19949cu: goto label_19949c;
        case 0x1994a0u: goto label_1994a0;
        case 0x1994a4u: goto label_1994a4;
        case 0x1994a8u: goto label_1994a8;
        case 0x1994acu: goto label_1994ac;
        case 0x1994b0u: goto label_1994b0;
        case 0x1994b4u: goto label_1994b4;
        case 0x1994b8u: goto label_1994b8;
        case 0x1994bcu: goto label_1994bc;
        case 0x1994c0u: goto label_1994c0;
        case 0x1994c4u: goto label_1994c4;
        case 0x1994c8u: goto label_1994c8;
        case 0x1994ccu: goto label_1994cc;
        case 0x1994d0u: goto label_1994d0;
        case 0x1994d4u: goto label_1994d4;
        case 0x1994d8u: goto label_1994d8;
        case 0x1994dcu: goto label_1994dc;
        case 0x1994e0u: goto label_1994e0;
        case 0x1994e4u: goto label_1994e4;
        case 0x1994e8u: goto label_1994e8;
        case 0x1994ecu: goto label_1994ec;
        case 0x1994f0u: goto label_1994f0;
        case 0x1994f4u: goto label_1994f4;
        case 0x1994f8u: goto label_1994f8;
        case 0x1994fcu: goto label_1994fc;
        case 0x199500u: goto label_199500;
        case 0x199504u: goto label_199504;
        case 0x199508u: goto label_199508;
        case 0x19950cu: goto label_19950c;
        case 0x199510u: goto label_199510;
        case 0x199514u: goto label_199514;
        case 0x199518u: goto label_199518;
        case 0x19951cu: goto label_19951c;
        case 0x199520u: goto label_199520;
        case 0x199524u: goto label_199524;
        case 0x199528u: goto label_199528;
        case 0x19952cu: goto label_19952c;
        case 0x199530u: goto label_199530;
        case 0x199534u: goto label_199534;
        case 0x199538u: goto label_199538;
        case 0x19953cu: goto label_19953c;
        case 0x199540u: goto label_199540;
        case 0x199544u: goto label_199544;
        case 0x199548u: goto label_199548;
        case 0x19954cu: goto label_19954c;
        case 0x199550u: goto label_199550;
        case 0x199554u: goto label_199554;
        case 0x199558u: goto label_199558;
        case 0x19955cu: goto label_19955c;
        case 0x199560u: goto label_199560;
        case 0x199564u: goto label_199564;
        case 0x199568u: goto label_199568;
        case 0x19956cu: goto label_19956c;
        case 0x199570u: goto label_199570;
        case 0x199574u: goto label_199574;
        case 0x199578u: goto label_199578;
        case 0x19957cu: goto label_19957c;
        case 0x199580u: goto label_199580;
        case 0x199584u: goto label_199584;
        case 0x199588u: goto label_199588;
        case 0x19958cu: goto label_19958c;
        case 0x199590u: goto label_199590;
        case 0x199594u: goto label_199594;
        case 0x199598u: goto label_199598;
        case 0x19959cu: goto label_19959c;
        case 0x1995a0u: goto label_1995a0;
        case 0x1995a4u: goto label_1995a4;
        case 0x1995a8u: goto label_1995a8;
        case 0x1995acu: goto label_1995ac;
        case 0x1995b0u: goto label_1995b0;
        case 0x1995b4u: goto label_1995b4;
        case 0x1995b8u: goto label_1995b8;
        case 0x1995bcu: goto label_1995bc;
        default: break;
    }

    ctx->pc = 0x199380u;

label_199380:
    // 0x199380: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_199384:
    // 0x199384: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x199384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_199388:
    // 0x199388: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x199388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_19938c:
    // 0x19938c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19938cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199390:
    // 0x199390: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x199390u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_199394:
    // 0x199394: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x199394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_199398:
    // 0x199398: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x199398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19939c:
    // 0x19939c: 0xc066e9c  jal         func_19BA70
label_1993a0:
    if (ctx->pc == 0x1993A0u) {
        ctx->pc = 0x1993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19939Cu;
        // 0x1993a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993A4u;
        goto label_1993a4;
    }
    ctx->pc = 0x19939Cu;
    SET_GPR_U32(ctx, 31, 0x1993A4u);
    ctx->pc = 0x1993A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19939Cu;
    // 0x1993a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA70u, 0x19939Cu, 0x1993A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993A4u;
label_1993a4:
    // 0x1993a4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1993a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1993a8:
    // 0x1993a8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1993a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1993ac:
    // 0x1993ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1993acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1993b0:
    // 0x1993b0: 0x244290a0  addiu       $v0, $v0, -0x6F60
    ctx->pc = 0x1993b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938784));
label_1993b4:
    // 0x1993b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1993b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1993b8:
    // 0x1993b8: 0xc06657a  jal         func_1995E8
label_1993bc:
    if (ctx->pc == 0x1993BCu) {
        ctx->pc = 0x1993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993B8u;
        // 0x1993bc: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993C0u;
        goto label_1993c0;
    }
    ctx->pc = 0x1993B8u;
    SET_GPR_U32(ctx, 31, 0x1993C0u);
    ctx->pc = 0x1993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993B8u;
    // 0x1993bc: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1995E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1995E8u, 0x1993B8u, 0x1993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993C0u;
label_1993c0:
    // 0x1993c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1993c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1993c4:
    // 0x1993c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1993c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1993c8:
    // 0x1993c8: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x1993c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_1993cc:
    // 0x1993cc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1993ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1993d0:
    // 0x1993d0: 0x2610b8a8  addiu       $s0, $s0, -0x4758
    ctx->pc = 0x1993d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
label_1993d4:
    // 0x1993d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1993d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1993d8:
    // 0x1993d8: 0xc0cd508  jal         func_335420
label_1993dc:
    if (ctx->pc == 0x1993DCu) {
        ctx->pc = 0x1993DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993D8u;
        // 0x1993dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993E0u;
        goto label_1993e0;
    }
    ctx->pc = 0x1993D8u;
    SET_GPR_U32(ctx, 31, 0x1993E0u);
    ctx->pc = 0x1993DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993D8u;
    // 0x1993dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x1993D8u, 0x1993E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993E0u;
label_1993e0:
    // 0x1993e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1993e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1993e4:
    // 0x1993e4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1993e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1993e8:
    // 0x1993e8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1993e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1993ec:
    // 0x1993ec: 0xc0cd508  jal         func_335420
label_1993f0:
    if (ctx->pc == 0x1993F0u) {
        ctx->pc = 0x1993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993ECu;
        // 0x1993f0: 0xe6200114  swc1        $f0, 0x114($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993F4u;
        goto label_1993f4;
    }
    ctx->pc = 0x1993ECu;
    SET_GPR_U32(ctx, 31, 0x1993F4u);
    ctx->pc = 0x1993F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993ECu;
    // 0x1993f0: 0xe6200114  swc1        $f0, 0x114($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x1993ECu, 0x1993F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993F4u;
label_1993f4:
    // 0x1993f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1993f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1993f8:
    // 0x1993f8: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x1993f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
label_1993fc:
    // 0x1993fc: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x1993fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_199400:
    // 0x199400: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x199400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_199404:
    // 0x199404: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x199404u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_199408:
    // 0x199408: 0x24a53808  addiu       $a1, $a1, 0x3808
    ctx->pc = 0x199408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14344));
label_19940c:
    // 0x19940c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x19940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_199410:
    // 0x199410: 0x25083818  addiu       $t0, $t0, 0x3818
    ctx->pc = 0x199410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14360));
label_199414:
    // 0x199414: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x199414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_199418:
    // 0x199418: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19941c:
    // 0x19941c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19941cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_199420:
    // 0x199420: 0x24090015  addiu       $t1, $zero, 0x15
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_199424:
    // 0x199424: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x199424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_199428:
    // 0x199428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19942c:
    // 0x19942c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x19942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_199430:
    // 0x199430: 0x40f809  jalr        $v0
label_199434:
    if (ctx->pc == 0x199434u) {
        ctx->pc = 0x199434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199430u;
        // 0x199434: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199438u;
        goto label_199438;
    }
    ctx->pc = 0x199430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199438u);
        ctx->pc = 0x199434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199430u;
        // 0x199434: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199430u, 0x199438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199438u;
label_199438:
    // 0x199438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19943c:
    // 0x19943c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_199440:
    if (ctx->pc == 0x199440u) {
        ctx->pc = 0x199444u;
        goto label_199444;
    }
    ctx->pc = 0x19943Cu;
    {
        const bool branch_taken_0x19943c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19943c) {
            ctx->pc = 0x199450u;
            goto label_199450;
        }
    }
    ctx->pc = 0x199444u;
label_199444:
    // 0x199444: 0xc0686fe  jal         func_1A1BF8
label_199448:
    if (ctx->pc == 0x199448u) {
        ctx->pc = 0x199448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199444u;
        // 0x199448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19944Cu;
        goto label_19944c;
    }
    ctx->pc = 0x199444u;
    SET_GPR_U32(ctx, 31, 0x19944Cu);
    ctx->pc = 0x199448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199444u;
    // 0x199448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x199444u, 0x19944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19944Cu;
label_19944c:
    // 0x19944c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19944cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199450:
    // 0x199450: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x199450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_199454:
    // 0x199454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199458:
    // 0x199458: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x199458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19945c:
    // 0x19945c: 0x8e2d0028  lw          $t5, 0x28($s1)
    ctx->pc = 0x19945cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_199460:
    // 0x199460: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x199460u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199464:
    // 0x199464: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x199464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_199468:
    // 0x199468: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x199468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19946c:
    // 0x19946c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x19946cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_199470:
    // 0x199470: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_199474:
    // 0x199474: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x199474u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_199478:
    // 0x199478: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x199478u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19947c:
    // 0x19947c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x19947cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_199480:
    // 0x199480: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199484:
    // 0x199484: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x199484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_199488:
    // 0x199488: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x199488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_19948c:
    // 0x19948c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19948cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199490:
    // 0x199490: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x199490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199494:
    // 0x199494: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199498:
    // 0x199498: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x199498u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_19949c:
    // 0x19949c: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x19949cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1994a0:
    // 0x1994a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1994a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1994a4:
    // 0x1994a4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1994a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1994a8:
    // 0x1994a8: 0x8e29009c  lw          $t1, 0x9C($s1)
    ctx->pc = 0x1994a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1994ac:
    // 0x1994ac: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1994acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
label_1994b0:
    // 0x1994b0: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x1994b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
label_1994b4:
    // 0x1994b4: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x1994b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
label_1994b8:
    // 0x1994b8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1994b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1994bc:
    // 0x1994bc: 0x40f809  jalr        $v0
label_1994c0:
    if (ctx->pc == 0x1994C0u) {
        ctx->pc = 0x1994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994BCu;
        // 0x1994c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994C4u;
        goto label_1994c4;
    }
    ctx->pc = 0x1994BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1994C4u);
        ctx->pc = 0x1994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994BCu;
        // 0x1994c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1994BCu, 0x1994C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1994C4u;
label_1994c4:
    // 0x1994c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1994c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1994c8:
    // 0x1994c8: 0xc066eec  jal         func_19BBB0
label_1994cc:
    if (ctx->pc == 0x1994CCu) {
        ctx->pc = 0x1994CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994C8u;
        // 0x1994cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994D0u;
        goto label_1994d0;
    }
    ctx->pc = 0x1994C8u;
    SET_GPR_U32(ctx, 31, 0x1994D0u);
    ctx->pc = 0x1994CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994C8u;
    // 0x1994cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBB0u, 0x1994C8u, 0x1994D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994D0u;
label_1994d0:
    // 0x1994d0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1994d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1994d4:
    // 0x1994d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1994d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1994d8:
    // 0x1994d8: 0xc0665ac  jal         func_1996B0
label_1994dc:
    if (ctx->pc == 0x1994DCu) {
        ctx->pc = 0x1994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994D8u;
        // 0x1994dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994E0u;
        goto label_1994e0;
    }
    ctx->pc = 0x1994D8u;
    SET_GPR_U32(ctx, 31, 0x1994E0u);
    ctx->pc = 0x1994DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994D8u;
    // 0x1994dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1996B0u, 0x1994D8u, 0x1994E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994E0u;
label_1994e0:
    // 0x1994e0: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1994e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1994e4:
    // 0x1994e4: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1994e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1994e8:
    // 0x1994e8: 0x6ba3003f  ldl         $v1, 0x3F($sp)
    ctx->pc = 0x1994e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1994ec:
    // 0x1994ec: 0x6fa30038  ldr         $v1, 0x38($sp)
    ctx->pc = 0x1994ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1994f0:
    // 0x1994f0: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x1994f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1994f4:
    // 0x1994f4: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x1994f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1994f8:
    // 0x1994f8: 0xb22200d3  sdl         $v0, 0xD3($s1)
    ctx->pc = 0x1994f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1994fc:
    // 0x1994fc: 0xb62200cc  sdr         $v0, 0xCC($s1)
    ctx->pc = 0x1994fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199500:
    // 0x199500: 0xb22300db  sdl         $v1, 0xDB($s1)
    ctx->pc = 0x199500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199504:
    // 0x199504: 0xb62300d4  sdr         $v1, 0xD4($s1)
    ctx->pc = 0x199504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199508:
    // 0x199508: 0xb22400e3  sdl         $a0, 0xE3($s1)
    ctx->pc = 0x199508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19950c:
    // 0x19950c: 0xb62400dc  sdr         $a0, 0xDC($s1)
    ctx->pc = 0x19950cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199510:
    // 0x199510: 0x6a2600d3  ldl         $a2, 0xD3($s1)
    ctx->pc = 0x199510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_199514:
    // 0x199514: 0x6e2600cc  ldr         $a2, 0xCC($s1)
    ctx->pc = 0x199514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_199518:
    // 0x199518: 0x6a2200db  ldl         $v0, 0xDB($s1)
    ctx->pc = 0x199518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19951c:
    // 0x19951c: 0x6e2200d4  ldr         $v0, 0xD4($s1)
    ctx->pc = 0x19951cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_199520:
    // 0x199520: 0x6a2300e3  ldl         $v1, 0xE3($s1)
    ctx->pc = 0x199520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_199524:
    // 0x199524: 0x6e2300dc  ldr         $v1, 0xDC($s1)
    ctx->pc = 0x199524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_199528:
    // 0x199528: 0xb22600eb  sdl         $a2, 0xEB($s1)
    ctx->pc = 0x199528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19952c:
    // 0x19952c: 0xb62600e4  sdr         $a2, 0xE4($s1)
    ctx->pc = 0x19952cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199530:
    // 0x199530: 0xb22200f3  sdl         $v0, 0xF3($s1)
    ctx->pc = 0x199530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199534:
    // 0x199534: 0xb62200ec  sdr         $v0, 0xEC($s1)
    ctx->pc = 0x199534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199538:
    // 0x199538: 0xb22300fb  sdl         $v1, 0xFB($s1)
    ctx->pc = 0x199538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 251); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19953c:
    // 0x19953c: 0xb62300f4  sdr         $v1, 0xF4($s1)
    ctx->pc = 0x19953cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 244); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199540:
    // 0x199540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199544:
    // 0x199544: 0xc0665ac  jal         func_1996B0
label_199548:
    if (ctx->pc == 0x199548u) {
        ctx->pc = 0x199548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199544u;
        // 0x199548: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19954Cu;
        goto label_19954c;
    }
    ctx->pc = 0x199544u;
    SET_GPR_U32(ctx, 31, 0x19954Cu);
    ctx->pc = 0x199548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199544u;
    // 0x199548: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1996B0u, 0x199544u, 0x19954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19954Cu;
label_19954c:
    // 0x19954c: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x19954cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_199550:
    // 0x199550: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x199550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_199554:
    // 0x199554: 0x6ba2003f  ldl         $v0, 0x3F($sp)
    ctx->pc = 0x199554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_199558:
    // 0x199558: 0x6fa20038  ldr         $v0, 0x38($sp)
    ctx->pc = 0x199558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19955c:
    // 0x19955c: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x19955cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_199560:
    // 0x199560: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x199560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_199564:
    // 0x199564: 0xb2260103  sdl         $a2, 0x103($s1)
    ctx->pc = 0x199564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 259); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199568:
    // 0x199568: 0xb62600fc  sdr         $a2, 0xFC($s1)
    ctx->pc = 0x199568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 252); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19956c:
    // 0x19956c: 0xb222010b  sdl         $v0, 0x10B($s1)
    ctx->pc = 0x19956cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199570:
    // 0x199570: 0xb6220104  sdr         $v0, 0x104($s1)
    ctx->pc = 0x199570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_199574:
    // 0x199574: 0xb2230113  sdl         $v1, 0x113($s1)
    ctx->pc = 0x199574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_199578:
    // 0x199578: 0xb623010c  sdr         $v1, 0x10C($s1)
    ctx->pc = 0x199578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19957c:
    // 0x19957c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19957cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_199580:
    // 0x199580: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x199580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_199584:
    // 0x199584: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x199584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_199588:
    // 0x199588: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x199588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_19958c:
    // 0x19958c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x19958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_199590:
    // 0x199590: 0x40f809  jalr        $v0
label_199594:
    if (ctx->pc == 0x199594u) {
        ctx->pc = 0x199594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199590u;
        // 0x199594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199598u;
        goto label_199598;
    }
    ctx->pc = 0x199590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199598u);
        ctx->pc = 0x199594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199590u;
        // 0x199594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199590u, 0x199598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199598u;
label_199598:
    // 0x199598: 0xfe220120  sd          $v0, 0x120($s1)
    ctx->pc = 0x199598u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 288), GPR_U64(ctx, 2));
label_19959c:
    // 0x19959c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19959cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1995a0:
    // 0x1995a0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1995a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1995a4:
    // 0x1995a4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1995a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1995a8:
    // 0x1995a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1995a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1995ac:
    // 0x1995ac: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1995acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1995b0:
    // 0x1995b0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1995b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1995b4:
    // 0x1995b4: 0x3e00008  jr          $ra
label_1995b8:
    if (ctx->pc == 0x1995B8u) {
        ctx->pc = 0x1995B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995B4u;
        // 0x1995b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995BCu;
        goto label_1995bc;
    }
    ctx->pc = 0x1995B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1995B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995B4u;
        // 0x1995b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1995B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1995BCu;
label_1995bc:
    // 0x1995bc: 0x0  nop
    ctx->pc = 0x1995bcu;
    // NOP
    ctx->pc = 0x1995c0u;
}
