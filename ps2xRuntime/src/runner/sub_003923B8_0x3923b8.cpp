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

// Function: sub_003923B8
// Address: 0x3923b8 - 0x3924d8
void sub_003923B8_0x3923b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003923B8_0x3923b8");
#endif

    switch (ctx->pc) {
        case 0x3923b8u: goto label_3923b8;
        case 0x3923bcu: goto label_3923bc;
        case 0x3923c0u: goto label_3923c0;
        case 0x3923c4u: goto label_3923c4;
        case 0x3923c8u: goto label_3923c8;
        case 0x3923ccu: goto label_3923cc;
        case 0x3923d0u: goto label_3923d0;
        case 0x3923d4u: goto label_3923d4;
        case 0x3923d8u: goto label_3923d8;
        case 0x3923dcu: goto label_3923dc;
        case 0x3923e0u: goto label_3923e0;
        case 0x3923e4u: goto label_3923e4;
        case 0x3923e8u: goto label_3923e8;
        case 0x3923ecu: goto label_3923ec;
        case 0x3923f0u: goto label_3923f0;
        case 0x3923f4u: goto label_3923f4;
        case 0x3923f8u: goto label_3923f8;
        case 0x3923fcu: goto label_3923fc;
        case 0x392400u: goto label_392400;
        case 0x392404u: goto label_392404;
        case 0x392408u: goto label_392408;
        case 0x39240cu: goto label_39240c;
        case 0x392410u: goto label_392410;
        case 0x392414u: goto label_392414;
        case 0x392418u: goto label_392418;
        case 0x39241cu: goto label_39241c;
        case 0x392420u: goto label_392420;
        case 0x392424u: goto label_392424;
        case 0x392428u: goto label_392428;
        case 0x39242cu: goto label_39242c;
        case 0x392430u: goto label_392430;
        case 0x392434u: goto label_392434;
        case 0x392438u: goto label_392438;
        case 0x39243cu: goto label_39243c;
        case 0x392440u: goto label_392440;
        case 0x392444u: goto label_392444;
        case 0x392448u: goto label_392448;
        case 0x39244cu: goto label_39244c;
        case 0x392450u: goto label_392450;
        case 0x392454u: goto label_392454;
        case 0x392458u: goto label_392458;
        case 0x39245cu: goto label_39245c;
        case 0x392460u: goto label_392460;
        case 0x392464u: goto label_392464;
        case 0x392468u: goto label_392468;
        case 0x39246cu: goto label_39246c;
        case 0x392470u: goto label_392470;
        case 0x392474u: goto label_392474;
        case 0x392478u: goto label_392478;
        case 0x39247cu: goto label_39247c;
        case 0x392480u: goto label_392480;
        case 0x392484u: goto label_392484;
        case 0x392488u: goto label_392488;
        case 0x39248cu: goto label_39248c;
        case 0x392490u: goto label_392490;
        case 0x392494u: goto label_392494;
        case 0x392498u: goto label_392498;
        case 0x39249cu: goto label_39249c;
        case 0x3924a0u: goto label_3924a0;
        case 0x3924a4u: goto label_3924a4;
        case 0x3924a8u: goto label_3924a8;
        case 0x3924acu: goto label_3924ac;
        case 0x3924b0u: goto label_3924b0;
        case 0x3924b4u: goto label_3924b4;
        case 0x3924b8u: goto label_3924b8;
        case 0x3924bcu: goto label_3924bc;
        case 0x3924c0u: goto label_3924c0;
        case 0x3924c4u: goto label_3924c4;
        case 0x3924c8u: goto label_3924c8;
        case 0x3924ccu: goto label_3924cc;
        case 0x3924d0u: goto label_3924d0;
        case 0x3924d4u: goto label_3924d4;
        default: break;
    }

    ctx->pc = 0x3923b8u;

label_3923b8:
    // 0x3923b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3923b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3923bc:
    // 0x3923bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3923bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3923c0:
    // 0x3923c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3923c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3923c4:
    // 0x3923c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3923c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3923c8:
    // 0x3923c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3923c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3923cc:
    // 0x3923cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3923ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3923d0:
    // 0x3923d0: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x3923d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_3923d4:
    // 0x3923d4: 0xc0e4936  jal         func_3924D8
label_3923d8:
    if (ctx->pc == 0x3923D8u) {
        ctx->pc = 0x3923D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923D4u;
        // 0x3923d8: 0xa220013c  sb          $zero, 0x13C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 316), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3923DCu;
        goto label_3923dc;
    }
    ctx->pc = 0x3923D4u;
    SET_GPR_U32(ctx, 31, 0x3923DCu);
    ctx->pc = 0x3923D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3923D4u;
    // 0x3923d8: 0xa220013c  sb          $zero, 0x13C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 316), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3924D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3924D8u, 0x3923D4u, 0x3923DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3923DCu;
label_3923dc:
    // 0x3923dc: 0x8e047198  lw          $a0, 0x7198($s0)
    ctx->pc = 0x3923dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
label_3923e0:
    // 0x3923e0: 0xc0cf396  jal         func_33CE58
label_3923e4:
    if (ctx->pc == 0x3923E4u) {
        ctx->pc = 0x3923E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923E0u;
        // 0x3923e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3923E8u;
        goto label_3923e8;
    }
    ctx->pc = 0x3923E0u;
    SET_GPR_U32(ctx, 31, 0x3923E8u);
    ctx->pc = 0x3923E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3923E0u;
    // 0x3923e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE58u, 0x3923E0u, 0x3923E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3923E8u;
label_3923e8:
    // 0x3923e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3923e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3923ec:
    // 0x3923ec: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_3923f0:
    if (ctx->pc == 0x3923F0u) {
        ctx->pc = 0x3923F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923ECu;
        // 0x3923f0: 0xae230118  sw          $v1, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3923F4u;
        goto label_3923f4;
    }
    ctx->pc = 0x3923ECu;
    {
        const bool branch_taken_0x3923ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3923F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923ECu;
        // 0x3923f0: 0xae230118  sw          $v1, 0x118($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3923ec) {
            ctx->pc = 0x3924BCu;
            goto label_3924bc;
        }
    }
    ctx->pc = 0x3923F4u;
label_3923f4:
    // 0x3923f4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3923f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3923f8:
    // 0x3923f8: 0x8e047198  lw          $a0, 0x7198($s0)
    ctx->pc = 0x3923f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
label_3923fc:
    // 0x3923fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3923fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_392400:
    // 0x392400: 0xc0cf468  jal         func_33D1A0
label_392404:
    if (ctx->pc == 0x392404u) {
        ctx->pc = 0x392404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392400u;
        // 0x392404: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392408u;
        goto label_392408;
    }
    ctx->pc = 0x392400u;
    SET_GPR_U32(ctx, 31, 0x392408u);
    ctx->pc = 0x392404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392400u;
    // 0x392404: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D1A0u, 0x392400u, 0x392408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392408u;
label_392408:
    // 0x392408: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x392408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39240c:
    // 0x39240c: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
label_392410:
    if (ctx->pc == 0x392410u) {
        ctx->pc = 0x392410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39240Cu;
        // 0x392410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392414u;
        goto label_392414;
    }
    ctx->pc = 0x39240Cu;
    {
        const bool branch_taken_0x39240c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x392410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39240Cu;
        // 0x392410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39240c) {
            ctx->pc = 0x39247Cu;
            goto label_39247c;
        }
    }
    ctx->pc = 0x392414u;
label_392414:
    // 0x392414: 0x8e280118  lw          $t0, 0x118($s1)
    ctx->pc = 0x392414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392418:
    // 0x392418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x392418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39241c:
    // 0x39241c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39241cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392420:
    // 0x392420: 0x8d020074  lw          $v0, 0x74($t0)
    ctx->pc = 0x392420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_392424:
    // 0x392424: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x392424u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_392428:
    // 0x392428: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x392428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_39242c:
    // 0x39242c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x39242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_392430:
    // 0x392430: 0x60f809  jalr        $v1
label_392434:
    if (ctx->pc == 0x392434u) {
        ctx->pc = 0x392434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392430u;
        // 0x392434: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392438u;
        goto label_392438;
    }
    ctx->pc = 0x392430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x392438u);
        ctx->pc = 0x392434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392430u;
        // 0x392434: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392430u, 0x392438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392438u;
label_392438:
    // 0x392438: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x392438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_39243c:
    // 0x39243c: 0xc0e44cc  jal         func_391330
label_392440:
    if (ctx->pc == 0x392440u) {
        ctx->pc = 0x392440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39243Cu;
        // 0x392440: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392444u;
        goto label_392444;
    }
    ctx->pc = 0x39243Cu;
    SET_GPR_U32(ctx, 31, 0x392444u);
    ctx->pc = 0x392440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39243Cu;
    // 0x392440: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x39243Cu, 0x392444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392444u;
label_392444:
    // 0x392444: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x392444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_392448:
    // 0x392448: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x392448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_39244c:
    // 0x39244c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39244cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_392450:
    // 0x392450: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x392450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_392454:
    // 0x392454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x392454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_392458:
    // 0x392458: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x392458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_39245c:
    // 0x39245c: 0xc0e44cc  jal         func_391330
label_392460:
    if (ctx->pc == 0x392460u) {
        ctx->pc = 0x392460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39245Cu;
        // 0x392460: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392464u;
        goto label_392464;
    }
    ctx->pc = 0x39245Cu;
    SET_GPR_U32(ctx, 31, 0x392464u);
    ctx->pc = 0x392460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39245Cu;
    // 0x392460: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x39245Cu, 0x392464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392464u;
label_392464:
    // 0x392464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x392464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392468:
    // 0x392468: 0xc0e45f6  jal         func_3917D8
label_39246c:
    if (ctx->pc == 0x39246Cu) {
        ctx->pc = 0x39246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392468u;
        // 0x39246c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392470u;
        goto label_392470;
    }
    ctx->pc = 0x392468u;
    SET_GPR_U32(ctx, 31, 0x392470u);
    ctx->pc = 0x39246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392468u;
    // 0x39246c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x392468u, 0x392470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392470u;
label_392470:
    // 0x392470: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x392470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_392474:
    // 0x392474: 0x10000005  b           . + 4 + (0x5 << 2)
label_392478:
    if (ctx->pc == 0x392478u) {
        ctx->pc = 0x392478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392474u;
        // 0x392478: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39247Cu;
        goto label_39247c;
    }
    ctx->pc = 0x392474u;
    {
        const bool branch_taken_0x392474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392474u;
        // 0x392478: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392474) {
            ctx->pc = 0x39248Cu;
            goto label_39248c;
        }
    }
    ctx->pc = 0x39247Cu;
label_39247c:
    // 0x39247c: 0x8e047198  lw          $a0, 0x7198($s0)
    ctx->pc = 0x39247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
label_392480:
    // 0x392480: 0xc0cf3c0  jal         func_33CF00
label_392484:
    if (ctx->pc == 0x392484u) {
        ctx->pc = 0x392484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392480u;
        // 0x392484: 0x8e250118  lw          $a1, 0x118($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392488u;
        goto label_392488;
    }
    ctx->pc = 0x392480u;
    SET_GPR_U32(ctx, 31, 0x392488u);
    ctx->pc = 0x392484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392480u;
    // 0x392484: 0x8e250118  lw          $a1, 0x118($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF00u, 0x392480u, 0x392488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392488u;
label_392488:
    // 0x392488: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x392488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
label_39248c:
    // 0x39248c: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x39248cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_392490:
    // 0x392490: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x392490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_392494:
    // 0x392494: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x392494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392498:
    // 0x392498: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x392498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_39249c:
    // 0x39249c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x39249cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3924a0:
    // 0x3924a0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x3924a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_3924a4:
    // 0x3924a4: 0x8e260118  lw          $a2, 0x118($s1)
    ctx->pc = 0x3924a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3924a8:
    // 0x3924a8: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x3924a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3924ac:
    // 0x3924ac: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x3924acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_3924b0:
    // 0x3924b0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3924b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3924b4:
    // 0x3924b4: 0x60f809  jalr        $v1
label_3924b8:
    if (ctx->pc == 0x3924B8u) {
        ctx->pc = 0x3924B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924B4u;
        // 0x3924b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3924BCu;
        goto label_3924bc;
    }
    ctx->pc = 0x3924B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3924BCu);
        ctx->pc = 0x3924B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924B4u;
        // 0x3924b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3924B4u, 0x3924BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3924BCu;
label_3924bc:
    // 0x3924bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3924bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3924c0:
    // 0x3924c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3924c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3924c4:
    // 0x3924c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3924c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3924c8:
    // 0x3924c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3924c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3924cc:
    // 0x3924cc: 0x3e00008  jr          $ra
label_3924d0:
    if (ctx->pc == 0x3924D0u) {
        ctx->pc = 0x3924D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924CCu;
        // 0x3924d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3924D4u;
        goto label_3924d4;
    }
    ctx->pc = 0x3924CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3924D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924CCu;
        // 0x3924d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3924CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3924D4u;
label_3924d4:
    // 0x3924d4: 0x0  nop
    ctx->pc = 0x3924d4u;
    // NOP
    ctx->pc = 0x3924d8u;
}
