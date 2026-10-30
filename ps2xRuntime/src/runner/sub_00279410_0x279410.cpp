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

// Function: sub_00279410
// Address: 0x279410 - 0x279568
void sub_00279410_0x279410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279410_0x279410");
#endif

    switch (ctx->pc) {
        case 0x279410u: goto label_279410;
        case 0x279414u: goto label_279414;
        case 0x279418u: goto label_279418;
        case 0x27941cu: goto label_27941c;
        case 0x279420u: goto label_279420;
        case 0x279424u: goto label_279424;
        case 0x279428u: goto label_279428;
        case 0x27942cu: goto label_27942c;
        case 0x279430u: goto label_279430;
        case 0x279434u: goto label_279434;
        case 0x279438u: goto label_279438;
        case 0x27943cu: goto label_27943c;
        case 0x279440u: goto label_279440;
        case 0x279444u: goto label_279444;
        case 0x279448u: goto label_279448;
        case 0x27944cu: goto label_27944c;
        case 0x279450u: goto label_279450;
        case 0x279454u: goto label_279454;
        case 0x279458u: goto label_279458;
        case 0x27945cu: goto label_27945c;
        case 0x279460u: goto label_279460;
        case 0x279464u: goto label_279464;
        case 0x279468u: goto label_279468;
        case 0x27946cu: goto label_27946c;
        case 0x279470u: goto label_279470;
        case 0x279474u: goto label_279474;
        case 0x279478u: goto label_279478;
        case 0x27947cu: goto label_27947c;
        case 0x279480u: goto label_279480;
        case 0x279484u: goto label_279484;
        case 0x279488u: goto label_279488;
        case 0x27948cu: goto label_27948c;
        case 0x279490u: goto label_279490;
        case 0x279494u: goto label_279494;
        case 0x279498u: goto label_279498;
        case 0x27949cu: goto label_27949c;
        case 0x2794a0u: goto label_2794a0;
        case 0x2794a4u: goto label_2794a4;
        case 0x2794a8u: goto label_2794a8;
        case 0x2794acu: goto label_2794ac;
        case 0x2794b0u: goto label_2794b0;
        case 0x2794b4u: goto label_2794b4;
        case 0x2794b8u: goto label_2794b8;
        case 0x2794bcu: goto label_2794bc;
        case 0x2794c0u: goto label_2794c0;
        case 0x2794c4u: goto label_2794c4;
        case 0x2794c8u: goto label_2794c8;
        case 0x2794ccu: goto label_2794cc;
        case 0x2794d0u: goto label_2794d0;
        case 0x2794d4u: goto label_2794d4;
        case 0x2794d8u: goto label_2794d8;
        case 0x2794dcu: goto label_2794dc;
        case 0x2794e0u: goto label_2794e0;
        case 0x2794e4u: goto label_2794e4;
        case 0x2794e8u: goto label_2794e8;
        case 0x2794ecu: goto label_2794ec;
        case 0x2794f0u: goto label_2794f0;
        case 0x2794f4u: goto label_2794f4;
        case 0x2794f8u: goto label_2794f8;
        case 0x2794fcu: goto label_2794fc;
        case 0x279500u: goto label_279500;
        case 0x279504u: goto label_279504;
        case 0x279508u: goto label_279508;
        case 0x27950cu: goto label_27950c;
        case 0x279510u: goto label_279510;
        case 0x279514u: goto label_279514;
        case 0x279518u: goto label_279518;
        case 0x27951cu: goto label_27951c;
        case 0x279520u: goto label_279520;
        case 0x279524u: goto label_279524;
        case 0x279528u: goto label_279528;
        case 0x27952cu: goto label_27952c;
        case 0x279530u: goto label_279530;
        case 0x279534u: goto label_279534;
        case 0x279538u: goto label_279538;
        case 0x27953cu: goto label_27953c;
        case 0x279540u: goto label_279540;
        case 0x279544u: goto label_279544;
        case 0x279548u: goto label_279548;
        case 0x27954cu: goto label_27954c;
        case 0x279550u: goto label_279550;
        case 0x279554u: goto label_279554;
        case 0x279558u: goto label_279558;
        case 0x27955cu: goto label_27955c;
        case 0x279560u: goto label_279560;
        case 0x279564u: goto label_279564;
        default: break;
    }

    ctx->pc = 0x279410u;

label_279410:
    // 0x279410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_279414:
    // 0x279414: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x279414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_279418:
    // 0x279418: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x279418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27941c:
    // 0x27941c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_279420:
    // 0x279420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279424:
    // 0x279424: 0xc08a61a  jal         func_229868
label_279428:
    if (ctx->pc == 0x279428u) {
        ctx->pc = 0x279428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279424u;
        // 0x279428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27942Cu;
        goto label_27942c;
    }
    ctx->pc = 0x279424u;
    SET_GPR_U32(ctx, 31, 0x27942Cu);
    ctx->pc = 0x279428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279424u;
    // 0x279428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279424u, 0x27942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27942Cu;
label_27942c:
    // 0x27942c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27942cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279430:
    // 0x279430: 0xc08a61a  jal         func_229868
label_279434:
    if (ctx->pc == 0x279434u) {
        ctx->pc = 0x279434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279430u;
        // 0x279434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279438u;
        goto label_279438;
    }
    ctx->pc = 0x279430u;
    SET_GPR_U32(ctx, 31, 0x279438u);
    ctx->pc = 0x279434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279430u;
    // 0x279434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x279430u, 0x279438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279438u;
label_279438:
    // 0x279438: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_27943c:
    if (ctx->pc == 0x27943Cu) {
        ctx->pc = 0x27943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279438u;
        // 0x27943c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279440u;
        goto label_279440;
    }
    ctx->pc = 0x279438u;
    {
        const bool branch_taken_0x279438 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279438u;
        // 0x27943c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279438) {
            ctx->pc = 0x2794F0u;
            goto label_2794f0;
        }
    }
    ctx->pc = 0x279440u;
label_279440:
    // 0x279440: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
label_279444:
    if (ctx->pc == 0x279444u) {
        ctx->pc = 0x279444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279440u;
        // 0x279444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279448u;
        goto label_279448;
    }
    ctx->pc = 0x279440u;
    {
        const bool branch_taken_0x279440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x279444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279440u;
        // 0x279444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279440) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279448u;
label_279448:
    // 0x279448: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x279448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27944c:
    // 0x27944c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27944cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_279450:
    // 0x279450: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x279450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_279454:
    // 0x279454: 0x40f809  jalr        $v0
label_279458:
    if (ctx->pc == 0x279458u) {
        ctx->pc = 0x279458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279454u;
        // 0x279458: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27945Cu;
        goto label_27945c;
    }
    ctx->pc = 0x279454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27945Cu);
        ctx->pc = 0x279458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279454u;
        // 0x279458: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279454u, 0x27945Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27945Cu;
label_27945c:
    // 0x27945c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_279460:
    if (ctx->pc == 0x279460u) {
        ctx->pc = 0x279460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27945Cu;
        // 0x279460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279464u;
        goto label_279464;
    }
    ctx->pc = 0x27945Cu;
    {
        const bool branch_taken_0x27945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27945Cu;
        // 0x279460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27945c) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279464u;
label_279464:
    // 0x279464: 0xc089f5e  jal         func_227D78
label_279468:
    if (ctx->pc == 0x279468u) {
        ctx->pc = 0x279468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279464u;
        // 0x279468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27946Cu;
        goto label_27946c;
    }
    ctx->pc = 0x279464u;
    SET_GPR_U32(ctx, 31, 0x27946Cu);
    ctx->pc = 0x279468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279464u;
    // 0x279468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x279464u, 0x27946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27946Cu;
label_27946c:
    // 0x27946c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_279470:
    if (ctx->pc == 0x279470u) {
        ctx->pc = 0x279470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27946Cu;
        // 0x279470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279474u;
        goto label_279474;
    }
    ctx->pc = 0x27946Cu;
    {
        const bool branch_taken_0x27946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27946Cu;
        // 0x279470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27946c) {
            ctx->pc = 0x2794F0u;
            goto label_2794f0;
        }
    }
    ctx->pc = 0x279474u;
label_279474:
    // 0x279474: 0xc09e42a  jal         func_2790A8
label_279478:
    if (ctx->pc == 0x279478u) {
        ctx->pc = 0x279478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279474u;
        // 0x279478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27947Cu;
        goto label_27947c;
    }
    ctx->pc = 0x279474u;
    SET_GPR_U32(ctx, 31, 0x27947Cu);
    ctx->pc = 0x279478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279474u;
    // 0x279478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2790A8u, 0x279474u, 0x27947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27947Cu;
label_27947c:
    // 0x27947c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279480:
    // 0x279480: 0xc441096c  lwc1        $f1, 0x96C($v0)
    ctx->pc = 0x279480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279484:
    // 0x279484: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279488:
    // 0x279488: 0x0  nop
    ctx->pc = 0x279488u;
    // NOP
label_27948c:
    // 0x27948c: 0x45010030  bc1t        . + 4 + (0x30 << 2)
label_279490:
    if (ctx->pc == 0x279490u) {
        ctx->pc = 0x279490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27948Cu;
        // 0x279490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279494u;
        goto label_279494;
    }
    ctx->pc = 0x27948Cu;
    {
        const bool branch_taken_0x27948c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27948Cu;
        // 0x279490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27948c) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279494u;
label_279494:
    // 0x279494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279498:
    // 0x279498: 0xc08a684  jal         func_229A10
label_27949c:
    if (ctx->pc == 0x27949Cu) {
        ctx->pc = 0x27949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279498u;
        // 0x27949c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794A0u;
        goto label_2794a0;
    }
    ctx->pc = 0x279498u;
    SET_GPR_U32(ctx, 31, 0x2794A0u);
    ctx->pc = 0x27949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279498u;
    // 0x27949c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x279498u, 0x2794A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794A0u;
label_2794a0:
    // 0x2794a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2794a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2794a4:
    // 0x2794a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2794a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2794a8:
    // 0x2794a8: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x2794a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2794ac:
    // 0x2794ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2794acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2794b0:
    // 0x2794b0: 0x0  nop
    ctx->pc = 0x2794b0u;
    // NOP
label_2794b4:
    // 0x2794b4: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_2794b8:
    if (ctx->pc == 0x2794B8u) {
        ctx->pc = 0x2794B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794B4u;
        // 0x2794b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794BCu;
        goto label_2794bc;
    }
    ctx->pc = 0x2794B4u;
    {
        const bool branch_taken_0x2794b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2794B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794B4u;
        // 0x2794b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794b4) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x2794BCu;
label_2794bc:
    // 0x2794bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2794bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2794c0:
    // 0x2794c0: 0xc088aa4  jal         func_222A90
label_2794c4:
    if (ctx->pc == 0x2794C4u) {
        ctx->pc = 0x2794C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794C0u;
        // 0x2794c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794C8u;
        goto label_2794c8;
    }
    ctx->pc = 0x2794C0u;
    SET_GPR_U32(ctx, 31, 0x2794C8u);
    ctx->pc = 0x2794C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2794C0u;
    // 0x2794c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2794C0u, 0x2794C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794C8u;
label_2794c8:
    // 0x2794c8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2794cc:
    if (ctx->pc == 0x2794CCu) {
        ctx->pc = 0x2794CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794C8u;
        // 0x2794cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794D0u;
        goto label_2794d0;
    }
    ctx->pc = 0x2794C8u;
    {
        const bool branch_taken_0x2794c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2794CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794C8u;
        // 0x2794cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794c8) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x2794D0u;
label_2794d0:
    // 0x2794d0: 0xc087502  jal         func_21D408
label_2794d4:
    if (ctx->pc == 0x2794D4u) {
        ctx->pc = 0x2794D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794D0u;
        // 0x2794d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794D8u;
        goto label_2794d8;
    }
    ctx->pc = 0x2794D0u;
    SET_GPR_U32(ctx, 31, 0x2794D8u);
    ctx->pc = 0x2794D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2794D0u;
    // 0x2794d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2794D0u, 0x2794D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794D8u;
label_2794d8:
    // 0x2794d8: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2794d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2794dc:
    // 0x2794dc: 0xc087502  jal         func_21D408
label_2794e0:
    if (ctx->pc == 0x2794E0u) {
        ctx->pc = 0x2794E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794DCu;
        // 0x2794e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794E4u;
        goto label_2794e4;
    }
    ctx->pc = 0x2794DCu;
    SET_GPR_U32(ctx, 31, 0x2794E4u);
    ctx->pc = 0x2794E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2794DCu;
    // 0x2794e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2794DCu, 0x2794E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794E4u;
label_2794e4:
    // 0x2794e4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2794e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2794e8:
    // 0x2794e8: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_2794ec:
    if (ctx->pc == 0x2794ECu) {
        ctx->pc = 0x2794ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794E8u;
        // 0x2794ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794F0u;
        goto label_2794f0;
    }
    ctx->pc = 0x2794E8u;
    {
        const bool branch_taken_0x2794e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2794ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794E8u;
        // 0x2794ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794e8) {
            ctx->pc = 0x2794F8u;
            goto label_2794f8;
        }
    }
    ctx->pc = 0x2794F0u;
label_2794f0:
    // 0x2794f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_2794f4:
    if (ctx->pc == 0x2794F4u) {
        ctx->pc = 0x2794F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794F0u;
        // 0x2794f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794F8u;
        goto label_2794f8;
    }
    ctx->pc = 0x2794F0u;
    {
        const bool branch_taken_0x2794f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2794F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794F0u;
        // 0x2794f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794f0) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x2794F8u;
label_2794f8:
    // 0x2794f8: 0xc089f98  jal         func_227E60
label_2794fc:
    if (ctx->pc == 0x2794FCu) {
        ctx->pc = 0x2794FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794F8u;
        // 0x2794fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279500u;
        goto label_279500;
    }
    ctx->pc = 0x2794F8u;
    SET_GPR_U32(ctx, 31, 0x279500u);
    ctx->pc = 0x2794FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2794F8u;
    // 0x2794fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2794F8u, 0x279500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279500u;
label_279500:
    // 0x279500: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_279504:
    if (ctx->pc == 0x279504u) {
        ctx->pc = 0x279504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279500u;
        // 0x279504: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279508u;
        goto label_279508;
    }
    ctx->pc = 0x279500u;
    {
        const bool branch_taken_0x279500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279500u;
        // 0x279504: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279500) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279508u;
label_279508:
    // 0x279508: 0xc088ed2  jal         func_223B48
label_27950c:
    if (ctx->pc == 0x27950Cu) {
        ctx->pc = 0x27950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279508u;
        // 0x27950c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279510u;
        goto label_279510;
    }
    ctx->pc = 0x279508u;
    SET_GPR_U32(ctx, 31, 0x279510u);
    ctx->pc = 0x27950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279508u;
    // 0x27950c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x279508u, 0x279510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279510u;
label_279510:
    // 0x279510: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_279514:
    if (ctx->pc == 0x279514u) {
        ctx->pc = 0x279514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279510u;
        // 0x279514: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279518u;
        goto label_279518;
    }
    ctx->pc = 0x279510u;
    {
        const bool branch_taken_0x279510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279510u;
        // 0x279514: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279510) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279518u;
label_279518:
    // 0x279518: 0xc088f04  jal         func_223C10
label_27951c:
    if (ctx->pc == 0x27951Cu) {
        ctx->pc = 0x27951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279518u;
        // 0x27951c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279520u;
        goto label_279520;
    }
    ctx->pc = 0x279518u;
    SET_GPR_U32(ctx, 31, 0x279520u);
    ctx->pc = 0x27951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279518u;
    // 0x27951c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x279518u, 0x279520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279520u;
label_279520:
    // 0x279520: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_279524:
    if (ctx->pc == 0x279524u) {
        ctx->pc = 0x279524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279520u;
        // 0x279524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279528u;
        goto label_279528;
    }
    ctx->pc = 0x279520u;
    {
        const bool branch_taken_0x279520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279520u;
        // 0x279524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279520) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279528u;
label_279528:
    // 0x279528: 0xc089fe4  jal         func_227F90
label_27952c:
    if (ctx->pc == 0x27952Cu) {
        ctx->pc = 0x27952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279528u;
        // 0x27952c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279530u;
        goto label_279530;
    }
    ctx->pc = 0x279528u;
    SET_GPR_U32(ctx, 31, 0x279530u);
    ctx->pc = 0x27952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279528u;
    // 0x27952c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x279528u, 0x279530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279530u;
label_279530:
    // 0x279530: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_279534:
    if (ctx->pc == 0x279534u) {
        ctx->pc = 0x279534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279530u;
        // 0x279534: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279538u;
        goto label_279538;
    }
    ctx->pc = 0x279530u;
    {
        const bool branch_taken_0x279530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279530u;
        // 0x279534: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279530) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279538u;
label_279538:
    // 0x279538: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x279538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_27953c:
    // 0x27953c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27953cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279540:
    // 0x279540: 0xc089998  jal         func_226660
label_279544:
    if (ctx->pc == 0x279544u) {
        ctx->pc = 0x279544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279540u;
        // 0x279544: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279548u;
        goto label_279548;
    }
    ctx->pc = 0x279540u;
    SET_GPR_U32(ctx, 31, 0x279548u);
    ctx->pc = 0x279544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279540u;
    // 0x279544: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x279540u, 0x279548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279548u;
label_279548:
    // 0x279548: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x279548u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27954c:
    // 0x27954c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27954cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279550:
    // 0x279550: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x279550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_279554:
    // 0x279554: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x279554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_279558:
    // 0x279558: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x279558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27955c:
    // 0x27955c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279560:
    // 0x279560: 0x3e00008  jr          $ra
label_279564:
    if (ctx->pc == 0x279564u) {
        ctx->pc = 0x279564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279560u;
        // 0x279564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279568u;
        goto label_fallthrough_0x279560;
    }
    ctx->pc = 0x279560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279560u;
        // 0x279564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x279560:
    ctx->pc = 0x279568u;
}
