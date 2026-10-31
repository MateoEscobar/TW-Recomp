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

// Function: sub_00259368
// Address: 0x259368 - 0x259578
void sub_00259368_0x259368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259368_0x259368");
#endif

    switch (ctx->pc) {
        case 0x259368u: goto label_259368;
        case 0x25936cu: goto label_25936c;
        case 0x259370u: goto label_259370;
        case 0x259374u: goto label_259374;
        case 0x259378u: goto label_259378;
        case 0x25937cu: goto label_25937c;
        case 0x259380u: goto label_259380;
        case 0x259384u: goto label_259384;
        case 0x259388u: goto label_259388;
        case 0x25938cu: goto label_25938c;
        case 0x259390u: goto label_259390;
        case 0x259394u: goto label_259394;
        case 0x259398u: goto label_259398;
        case 0x25939cu: goto label_25939c;
        case 0x2593a0u: goto label_2593a0;
        case 0x2593a4u: goto label_2593a4;
        case 0x2593a8u: goto label_2593a8;
        case 0x2593acu: goto label_2593ac;
        case 0x2593b0u: goto label_2593b0;
        case 0x2593b4u: goto label_2593b4;
        case 0x2593b8u: goto label_2593b8;
        case 0x2593bcu: goto label_2593bc;
        case 0x2593c0u: goto label_2593c0;
        case 0x2593c4u: goto label_2593c4;
        case 0x2593c8u: goto label_2593c8;
        case 0x2593ccu: goto label_2593cc;
        case 0x2593d0u: goto label_2593d0;
        case 0x2593d4u: goto label_2593d4;
        case 0x2593d8u: goto label_2593d8;
        case 0x2593dcu: goto label_2593dc;
        case 0x2593e0u: goto label_2593e0;
        case 0x2593e4u: goto label_2593e4;
        case 0x2593e8u: goto label_2593e8;
        case 0x2593ecu: goto label_2593ec;
        case 0x2593f0u: goto label_2593f0;
        case 0x2593f4u: goto label_2593f4;
        case 0x2593f8u: goto label_2593f8;
        case 0x2593fcu: goto label_2593fc;
        case 0x259400u: goto label_259400;
        case 0x259404u: goto label_259404;
        case 0x259408u: goto label_259408;
        case 0x25940cu: goto label_25940c;
        case 0x259410u: goto label_259410;
        case 0x259414u: goto label_259414;
        case 0x259418u: goto label_259418;
        case 0x25941cu: goto label_25941c;
        case 0x259420u: goto label_259420;
        case 0x259424u: goto label_259424;
        case 0x259428u: goto label_259428;
        case 0x25942cu: goto label_25942c;
        case 0x259430u: goto label_259430;
        case 0x259434u: goto label_259434;
        case 0x259438u: goto label_259438;
        case 0x25943cu: goto label_25943c;
        case 0x259440u: goto label_259440;
        case 0x259444u: goto label_259444;
        case 0x259448u: goto label_259448;
        case 0x25944cu: goto label_25944c;
        case 0x259450u: goto label_259450;
        case 0x259454u: goto label_259454;
        case 0x259458u: goto label_259458;
        case 0x25945cu: goto label_25945c;
        case 0x259460u: goto label_259460;
        case 0x259464u: goto label_259464;
        case 0x259468u: goto label_259468;
        case 0x25946cu: goto label_25946c;
        case 0x259470u: goto label_259470;
        case 0x259474u: goto label_259474;
        case 0x259478u: goto label_259478;
        case 0x25947cu: goto label_25947c;
        case 0x259480u: goto label_259480;
        case 0x259484u: goto label_259484;
        case 0x259488u: goto label_259488;
        case 0x25948cu: goto label_25948c;
        case 0x259490u: goto label_259490;
        case 0x259494u: goto label_259494;
        case 0x259498u: goto label_259498;
        case 0x25949cu: goto label_25949c;
        case 0x2594a0u: goto label_2594a0;
        case 0x2594a4u: goto label_2594a4;
        case 0x2594a8u: goto label_2594a8;
        case 0x2594acu: goto label_2594ac;
        case 0x2594b0u: goto label_2594b0;
        case 0x2594b4u: goto label_2594b4;
        case 0x2594b8u: goto label_2594b8;
        case 0x2594bcu: goto label_2594bc;
        case 0x2594c0u: goto label_2594c0;
        case 0x2594c4u: goto label_2594c4;
        case 0x2594c8u: goto label_2594c8;
        case 0x2594ccu: goto label_2594cc;
        case 0x2594d0u: goto label_2594d0;
        case 0x2594d4u: goto label_2594d4;
        case 0x2594d8u: goto label_2594d8;
        case 0x2594dcu: goto label_2594dc;
        case 0x2594e0u: goto label_2594e0;
        case 0x2594e4u: goto label_2594e4;
        case 0x2594e8u: goto label_2594e8;
        case 0x2594ecu: goto label_2594ec;
        case 0x2594f0u: goto label_2594f0;
        case 0x2594f4u: goto label_2594f4;
        case 0x2594f8u: goto label_2594f8;
        case 0x2594fcu: goto label_2594fc;
        case 0x259500u: goto label_259500;
        case 0x259504u: goto label_259504;
        case 0x259508u: goto label_259508;
        case 0x25950cu: goto label_25950c;
        case 0x259510u: goto label_259510;
        case 0x259514u: goto label_259514;
        case 0x259518u: goto label_259518;
        case 0x25951cu: goto label_25951c;
        case 0x259520u: goto label_259520;
        case 0x259524u: goto label_259524;
        case 0x259528u: goto label_259528;
        case 0x25952cu: goto label_25952c;
        case 0x259530u: goto label_259530;
        case 0x259534u: goto label_259534;
        case 0x259538u: goto label_259538;
        case 0x25953cu: goto label_25953c;
        case 0x259540u: goto label_259540;
        case 0x259544u: goto label_259544;
        case 0x259548u: goto label_259548;
        case 0x25954cu: goto label_25954c;
        case 0x259550u: goto label_259550;
        case 0x259554u: goto label_259554;
        case 0x259558u: goto label_259558;
        case 0x25955cu: goto label_25955c;
        case 0x259560u: goto label_259560;
        case 0x259564u: goto label_259564;
        case 0x259568u: goto label_259568;
        case 0x25956cu: goto label_25956c;
        case 0x259570u: goto label_259570;
        case 0x259574u: goto label_259574;
        default: break;
    }

    ctx->pc = 0x259368u;

label_259368:
    // 0x259368: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x259368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_25936c:
    // 0x25936c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x25936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_259370:
    // 0x259370: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x259370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_259374:
    // 0x259374: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x259374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259378:
    // 0x259378: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x259378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_25937c:
    // 0x25937c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_259380:
    // 0x259380: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x259380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_259384:
    // 0x259384: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x259384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_259388:
    // 0x259388: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x259388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_25938c:
    // 0x25938c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_259390:
    // 0x259390: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x259390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_259394:
    // 0x259394: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x259394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_259398:
    // 0x259398: 0x8e5600d4  lw          $s6, 0xD4($s2)
    ctx->pc = 0x259398u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25939c:
    // 0x25939c: 0x12c0006a  beqz        $s6, . + 4 + (0x6A << 2)
label_2593a0:
    if (ctx->pc == 0x2593A0u) {
        ctx->pc = 0x2593A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25939Cu;
        // 0x2593a0: 0x8e5700d8  lw          $s7, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2593A4u;
        goto label_2593a4;
    }
    ctx->pc = 0x25939Cu;
    {
        const bool branch_taken_0x25939c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25939Cu;
        // 0x2593a0: 0x8e5700d8  lw          $s7, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25939c) {
            ctx->pc = 0x259548u;
            goto label_259548;
        }
    }
    ctx->pc = 0x2593A4u;
label_2593a4:
    // 0x2593a4: 0x12e00069  beqz        $s7, . + 4 + (0x69 << 2)
label_2593a8:
    if (ctx->pc == 0x2593A8u) {
        ctx->pc = 0x2593A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593A4u;
        // 0x2593a8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2593ACu;
        goto label_2593ac;
    }
    ctx->pc = 0x2593A4u;
    {
        const bool branch_taken_0x2593a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593A4u;
        // 0x2593a8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593a4) {
            ctx->pc = 0x25954Cu;
            goto label_25954c;
        }
    }
    ctx->pc = 0x2593ACu;
label_2593ac:
    // 0x2593ac: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x2593acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_2593b0:
    // 0x2593b0: 0x8ec40024  lw          $a0, 0x24($s6)
    ctx->pc = 0x2593b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_2593b4:
    // 0x2593b4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2593b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2593b8:
    // 0x2593b8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2593b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2593bc:
    // 0x2593bc: 0x263502ba  addiu       $s5, $s1, 0x2BA
    ctx->pc = 0x2593bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 698));
label_2593c0:
    // 0x2593c0: 0x52a40063  beql        $s5, $a0, . + 4 + (0x63 << 2)
label_2593c4:
    if (ctx->pc == 0x2593C4u) {
        ctx->pc = 0x2593C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593C0u;
        // 0x2593c4: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2593C8u;
        goto label_2593c8;
    }
    ctx->pc = 0x2593C0u;
    {
        const bool branch_taken_0x2593c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        if (branch_taken_0x2593c0) {
            ctx->pc = 0x2593C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2593C0u;
            // 0x2593c4: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259550u;
            goto label_259550;
        }
    }
    ctx->pc = 0x2593C8u;
label_2593c8:
    // 0x2593c8: 0xc088d10  jal         func_223440
label_2593cc:
    if (ctx->pc == 0x2593CCu) {
        ctx->pc = 0x2593CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593C8u;
        // 0x2593cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2593D0u;
        goto label_2593d0;
    }
    ctx->pc = 0x2593C8u;
    SET_GPR_U32(ctx, 31, 0x2593D0u);
    ctx->pc = 0x2593CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2593C8u;
    // 0x2593cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223440u, 0x2593C8u, 0x2593D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2593D0u;
label_2593d0:
    // 0x2593d0: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_2593d4:
    if (ctx->pc == 0x2593D4u) {
        ctx->pc = 0x2593D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593D0u;
        // 0x2593d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2593D8u;
        goto label_2593d8;
    }
    ctx->pc = 0x2593D0u;
    {
        const bool branch_taken_0x2593d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593D0u;
        // 0x2593d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593d0) {
            ctx->pc = 0x259548u;
            goto label_259548;
        }
    }
    ctx->pc = 0x2593D8u;
label_2593d8:
    // 0x2593d8: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x2593d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_2593dc:
    // 0x2593dc: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_2593e0:
    if (ctx->pc == 0x2593E0u) {
        ctx->pc = 0x2593E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593DCu;
        // 0x2593e0: 0x8ec2001c  lw          $v0, 0x1C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2593E4u;
        goto label_2593e4;
    }
    ctx->pc = 0x2593DCu;
    {
        const bool branch_taken_0x2593dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2593dc) {
            ctx->pc = 0x2593E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2593DCu;
            // 0x2593e0: 0x8ec2001c  lw          $v0, 0x1C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259444u;
            goto label_259444;
        }
    }
    ctx->pc = 0x2593E4u;
label_2593e4:
    // 0x2593e4: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2593e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2593e8:
    // 0x2593e8: 0xc041532  jal         func_1054C8
label_2593ec:
    if (ctx->pc == 0x2593ECu) {
        ctx->pc = 0x2593ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593E8u;
        // 0x2593ec: 0x2484d8d0  addiu       $a0, $a0, -0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2593F0u;
        goto label_2593f0;
    }
    ctx->pc = 0x2593E8u;
    SET_GPR_U32(ctx, 31, 0x2593F0u);
    ctx->pc = 0x2593ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2593E8u;
    // 0x2593ec: 0x2484d8d0  addiu       $a0, $a0, -0x2730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2593E8u, 0x2593F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2593F0u;
label_2593f0:
    // 0x2593f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2593f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2593f4:
    // 0x2593f4: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_2593f8:
    if (ctx->pc == 0x2593F8u) {
        ctx->pc = 0x2593F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593F4u;
        // 0x2593f8: 0x263102bc  addiu       $s1, $s1, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2593FCu;
        goto label_2593fc;
    }
    ctx->pc = 0x2593F4u;
    {
        const bool branch_taken_0x2593f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593F4u;
        // 0x2593f8: 0x263102bc  addiu       $s1, $s1, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593f4) {
            ctx->pc = 0x259430u;
            goto label_259430;
        }
    }
    ctx->pc = 0x2593FCu;
label_2593fc:
    // 0x2593fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2593fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_259400:
    // 0x259400: 0x8e5000d8  lw          $s0, 0xD8($s2)
    ctx->pc = 0x259400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_259404:
    // 0x259404: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x259404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_259408:
    // 0x259408: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x259408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25940c:
    // 0x25940c: 0x40f809  jalr        $v0
label_259410:
    if (ctx->pc == 0x259410u) {
        ctx->pc = 0x259410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25940Cu;
        // 0x259410: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259414u;
        goto label_259414;
    }
    ctx->pc = 0x25940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259414u);
        ctx->pc = 0x259410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25940Cu;
        // 0x259410: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25940Cu, 0x259414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259414u;
label_259414:
    // 0x259414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x259414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259418:
    // 0x259418: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x259418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25941c:
    // 0x25941c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x25941cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259420:
    // 0x259420: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x259420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_259424:
    // 0x259424: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x259424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_259428:
    // 0x259428: 0xc042d82  jal         func_10B608
label_25942c:
    if (ctx->pc == 0x25942Cu) {
        ctx->pc = 0x25942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259428u;
        // 0x25942c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259430u;
        goto label_259430;
    }
    ctx->pc = 0x259428u;
    SET_GPR_U32(ctx, 31, 0x259430u);
    ctx->pc = 0x25942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259428u;
    // 0x25942c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B608u, 0x259428u, 0x259430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259430u;
label_259430:
    // 0x259430: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x259430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_259434:
    // 0x259434: 0xc05d660  jal         func_175980
label_259438:
    if (ctx->pc == 0x259438u) {
        ctx->pc = 0x259438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259434u;
        // 0x259438: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25943Cu;
        goto label_25943c;
    }
    ctx->pc = 0x259434u;
    SET_GPR_U32(ctx, 31, 0x25943Cu);
    ctx->pc = 0x259438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259434u;
    // 0x259438: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175980u, 0x259434u, 0x25943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25943Cu;
label_25943c:
    // 0x25943c: 0x10000042  b           . + 4 + (0x42 << 2)
label_259440:
    if (ctx->pc == 0x259440u) {
        ctx->pc = 0x259440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25943Cu;
        // 0x259440: 0xaed50024  sw          $s5, 0x24($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259444u;
        goto label_259444;
    }
    ctx->pc = 0x25943Cu;
    {
        const bool branch_taken_0x25943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25943Cu;
        // 0x259440: 0xaed50024  sw          $s5, 0x24($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25943c) {
            ctx->pc = 0x259548u;
            goto label_259548;
        }
    }
    ctx->pc = 0x259444u;
label_259444:
    // 0x259444: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x259444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_259448:
    // 0x259448: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x259448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25944c:
    // 0x25944c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25944cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_259450:
    // 0x259450: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x259450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_259454:
    // 0x259454: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_259458:
    if (ctx->pc == 0x259458u) {
        ctx->pc = 0x259458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259454u;
        // 0x259458: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25945Cu;
        goto label_25945c;
    }
    ctx->pc = 0x259454u;
    {
        const bool branch_taken_0x259454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259454u;
        // 0x259458: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259454) {
            ctx->pc = 0x259460u;
            goto label_259460;
        }
    }
    ctx->pc = 0x25945Cu;
label_25945c:
    // 0x25945c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25945cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_259460:
    // 0x259460: 0x2610d8d0  addiu       $s0, $s0, -0x2730
    ctx->pc = 0x259460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957264));
label_259464:
    // 0x259464: 0xc041532  jal         func_1054C8
label_259468:
    if (ctx->pc == 0x259468u) {
        ctx->pc = 0x259468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259464u;
        // 0x259468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25946Cu;
        goto label_25946c;
    }
    ctx->pc = 0x259464u;
    SET_GPR_U32(ctx, 31, 0x25946Cu);
    ctx->pc = 0x259468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259464u;
    // 0x259468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x259464u, 0x25946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25946Cu;
label_25946c:
    // 0x25946c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25946cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259470:
    // 0x259470: 0xc041532  jal         func_1054C8
label_259474:
    if (ctx->pc == 0x259474u) {
        ctx->pc = 0x259474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259470u;
        // 0x259474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259478u;
        goto label_259478;
    }
    ctx->pc = 0x259470u;
    SET_GPR_U32(ctx, 31, 0x259478u);
    ctx->pc = 0x259474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259470u;
    // 0x259474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x259470u, 0x259478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259478u;
label_259478:
    // 0x259478: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25947c:
    if (ctx->pc == 0x25947Cu) {
        ctx->pc = 0x25947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259478u;
        // 0x25947c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259480u;
        goto label_259480;
    }
    ctx->pc = 0x259478u;
    {
        const bool branch_taken_0x259478 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259478u;
        // 0x25947c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259478) {
            ctx->pc = 0x2594B8u;
            goto label_2594b8;
        }
    }
    ctx->pc = 0x259480u;
label_259480:
    // 0x259480: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x259480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_259484:
    // 0x259484: 0x263102bc  addiu       $s1, $s1, 0x2BC
    ctx->pc = 0x259484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_259488:
    // 0x259488: 0x8e5000d8  lw          $s0, 0xD8($s2)
    ctx->pc = 0x259488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25948c:
    // 0x25948c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25948cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_259490:
    // 0x259490: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x259490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_259494:
    // 0x259494: 0x40f809  jalr        $v0
label_259498:
    if (ctx->pc == 0x259498u) {
        ctx->pc = 0x259498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259494u;
        // 0x259498: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25949Cu;
        goto label_25949c;
    }
    ctx->pc = 0x259494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25949Cu);
        ctx->pc = 0x259498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259494u;
        // 0x259498: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259494u, 0x25949Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25949Cu;
label_25949c:
    // 0x25949c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25949cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2594a0:
    // 0x2594a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2594a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2594a4:
    // 0x2594a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2594a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2594a8:
    // 0x2594a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2594a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2594ac:
    // 0x2594ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2594acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2594b0:
    // 0x2594b0: 0xc042d82  jal         func_10B608
label_2594b4:
    if (ctx->pc == 0x2594B4u) {
        ctx->pc = 0x2594B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594B0u;
        // 0x2594b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594B8u;
        goto label_2594b8;
    }
    ctx->pc = 0x2594B0u;
    SET_GPR_U32(ctx, 31, 0x2594B8u);
    ctx->pc = 0x2594B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2594B0u;
    // 0x2594b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B608u, 0x2594B0u, 0x2594B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594B8u;
label_2594b8:
    // 0x2594b8: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
label_2594bc:
    if (ctx->pc == 0x2594BCu) {
        ctx->pc = 0x2594C0u;
        goto label_2594c0;
    }
    ctx->pc = 0x2594B8u;
    {
        const bool branch_taken_0x2594b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2594b8) {
            ctx->pc = 0x259510u;
            goto label_259510;
        }
    }
    ctx->pc = 0x2594C0u;
label_2594c0:
    // 0x2594c0: 0x8e5000d8  lw          $s0, 0xD8($s2)
    ctx->pc = 0x2594c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2594c4:
    // 0x2594c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2594c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2594c8:
    // 0x2594c8: 0xc040680  jal         func_101A00
label_2594cc:
    if (ctx->pc == 0x2594CCu) {
        ctx->pc = 0x2594CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594C8u;
        // 0x2594cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594D0u;
        goto label_2594d0;
    }
    ctx->pc = 0x2594C8u;
    SET_GPR_U32(ctx, 31, 0x2594D0u);
    ctx->pc = 0x2594CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2594C8u;
    // 0x2594cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2594C8u, 0x2594D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594D0u;
label_2594d0:
    // 0x2594d0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2594d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2594d4:
    // 0x2594d4: 0x0  nop
    ctx->pc = 0x2594d4u;
    // NOP
label_2594d8:
    // 0x2594d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2594dc:
    if (ctx->pc == 0x2594DCu) {
        ctx->pc = 0x2594DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594D8u;
        // 0x2594dc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594E0u;
        goto label_2594e0;
    }
    ctx->pc = 0x2594D8u;
    {
        const bool branch_taken_0x2594d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2594DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594D8u;
        // 0x2594dc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2594d8) {
            ctx->pc = 0x2594F4u;
            goto label_2594f4;
        }
    }
    ctx->pc = 0x2594E0u;
label_2594e0:
    // 0x2594e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2594e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2594e4:
    // 0x2594e4: 0xc040680  jal         func_101A00
label_2594e8:
    if (ctx->pc == 0x2594E8u) {
        ctx->pc = 0x2594E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594E4u;
        // 0x2594e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594ECu;
        goto label_2594ec;
    }
    ctx->pc = 0x2594E4u;
    SET_GPR_U32(ctx, 31, 0x2594ECu);
    ctx->pc = 0x2594E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2594E4u;
    // 0x2594e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2594E4u, 0x2594ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594ECu;
label_2594ec:
    // 0x2594ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2594f0:
    if (ctx->pc == 0x2594F0u) {
        ctx->pc = 0x2594F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594ECu;
        // 0x2594f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594F4u;
        goto label_2594f4;
    }
    ctx->pc = 0x2594ECu;
    {
        const bool branch_taken_0x2594ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2594F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594ECu;
        // 0x2594f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2594ec) {
            ctx->pc = 0x2594F8u;
            goto label_2594f8;
        }
    }
    ctx->pc = 0x2594F4u;
label_2594f4:
    // 0x2594f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2594f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2594f8:
    // 0x2594f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2594f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2594fc:
    // 0x2594fc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2594fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_259500:
    // 0x259500: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x259500u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_259504:
    // 0x259504: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x259504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259508:
    // 0x259508: 0xc042df2  jal         func_10B7C8
label_25950c:
    if (ctx->pc == 0x25950Cu) {
        ctx->pc = 0x25950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259508u;
        // 0x25950c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259510u;
        goto label_259510;
    }
    ctx->pc = 0x259508u;
    SET_GPR_U32(ctx, 31, 0x259510u);
    ctx->pc = 0x25950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259508u;
    // 0x25950c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B7C8u, 0x259508u, 0x259510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259510u;
label_259510:
    // 0x259510: 0xc05d634  jal         func_1758D0
label_259514:
    if (ctx->pc == 0x259514u) {
        ctx->pc = 0x259514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259510u;
        // 0x259514: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259518u;
        goto label_259518;
    }
    ctx->pc = 0x259510u;
    SET_GPR_U32(ctx, 31, 0x259518u);
    ctx->pc = 0x259514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259510u;
    // 0x259514: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1758D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1758D0u, 0x259510u, 0x259518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259518u;
label_259518:
    // 0x259518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x259518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25951c:
    // 0x25951c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x25951cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_259520:
    // 0x259520: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x259520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_259524:
    // 0x259524: 0xa0f809  jalr        $a1
label_259528:
    if (ctx->pc == 0x259528u) {
        ctx->pc = 0x259528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259524u;
        // 0x259528: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25952Cu;
        goto label_25952c;
    }
    ctx->pc = 0x259524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25952Cu);
        ctx->pc = 0x259528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259524u;
        // 0x259528: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259524u, 0x25952Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25952Cu;
label_25952c:
    // 0x25952c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_259530:
    // 0x259530: 0xc05d69a  jal         func_175A68
label_259534:
    if (ctx->pc == 0x259534u) {
        ctx->pc = 0x259534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259530u;
        // 0x259534: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259538u;
        goto label_259538;
    }
    ctx->pc = 0x259530u;
    SET_GPR_U32(ctx, 31, 0x259538u);
    ctx->pc = 0x259534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259530u;
    // 0x259534: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A68u, 0x259530u, 0x259538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259538u;
label_259538:
    // 0x259538: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x259538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25953c:
    // 0x25953c: 0xc05d660  jal         func_175980
label_259540:
    if (ctx->pc == 0x259540u) {
        ctx->pc = 0x259540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25953Cu;
        // 0x259540: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259544u;
        goto label_259544;
    }
    ctx->pc = 0x25953Cu;
    SET_GPR_U32(ctx, 31, 0x259544u);
    ctx->pc = 0x259540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25953Cu;
    // 0x259540: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175980u, 0x25953Cu, 0x259544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259544u;
label_259544:
    // 0x259544: 0xaed50024  sw          $s5, 0x24($s6)
    ctx->pc = 0x259544u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 21));
label_259548:
    // 0x259548: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x259548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25954c:
    // 0x25954c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x25954cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_259550:
    // 0x259550: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x259550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_259554:
    // 0x259554: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x259554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_259558:
    // 0x259558: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x259558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25955c:
    // 0x25955c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x25955cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_259560:
    // 0x259560: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x259560u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_259564:
    // 0x259564: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x259564u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_259568:
    // 0x259568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25956c:
    // 0x25956c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x25956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_259570:
    // 0x259570: 0x3e00008  jr          $ra
label_259574:
    if (ctx->pc == 0x259574u) {
        ctx->pc = 0x259574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259570u;
        // 0x259574: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259578u;
        goto label_fallthrough_0x259570;
    }
    ctx->pc = 0x259570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259570u;
        // 0x259574: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x259570:
    ctx->pc = 0x259578u;
}
