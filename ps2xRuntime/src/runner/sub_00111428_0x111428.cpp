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

// Function: sub_00111428
// Address: 0x111428 - 0x111558
void sub_00111428_0x111428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111428_0x111428");
#endif

    switch (ctx->pc) {
        case 0x111428u: goto label_111428;
        case 0x11142cu: goto label_11142c;
        case 0x111430u: goto label_111430;
        case 0x111434u: goto label_111434;
        case 0x111438u: goto label_111438;
        case 0x11143cu: goto label_11143c;
        case 0x111440u: goto label_111440;
        case 0x111444u: goto label_111444;
        case 0x111448u: goto label_111448;
        case 0x11144cu: goto label_11144c;
        case 0x111450u: goto label_111450;
        case 0x111454u: goto label_111454;
        case 0x111458u: goto label_111458;
        case 0x11145cu: goto label_11145c;
        case 0x111460u: goto label_111460;
        case 0x111464u: goto label_111464;
        case 0x111468u: goto label_111468;
        case 0x11146cu: goto label_11146c;
        case 0x111470u: goto label_111470;
        case 0x111474u: goto label_111474;
        case 0x111478u: goto label_111478;
        case 0x11147cu: goto label_11147c;
        case 0x111480u: goto label_111480;
        case 0x111484u: goto label_111484;
        case 0x111488u: goto label_111488;
        case 0x11148cu: goto label_11148c;
        case 0x111490u: goto label_111490;
        case 0x111494u: goto label_111494;
        case 0x111498u: goto label_111498;
        case 0x11149cu: goto label_11149c;
        case 0x1114a0u: goto label_1114a0;
        case 0x1114a4u: goto label_1114a4;
        case 0x1114a8u: goto label_1114a8;
        case 0x1114acu: goto label_1114ac;
        case 0x1114b0u: goto label_1114b0;
        case 0x1114b4u: goto label_1114b4;
        case 0x1114b8u: goto label_1114b8;
        case 0x1114bcu: goto label_1114bc;
        case 0x1114c0u: goto label_1114c0;
        case 0x1114c4u: goto label_1114c4;
        case 0x1114c8u: goto label_1114c8;
        case 0x1114ccu: goto label_1114cc;
        case 0x1114d0u: goto label_1114d0;
        case 0x1114d4u: goto label_1114d4;
        case 0x1114d8u: goto label_1114d8;
        case 0x1114dcu: goto label_1114dc;
        case 0x1114e0u: goto label_1114e0;
        case 0x1114e4u: goto label_1114e4;
        case 0x1114e8u: goto label_1114e8;
        case 0x1114ecu: goto label_1114ec;
        case 0x1114f0u: goto label_1114f0;
        case 0x1114f4u: goto label_1114f4;
        case 0x1114f8u: goto label_1114f8;
        case 0x1114fcu: goto label_1114fc;
        case 0x111500u: goto label_111500;
        case 0x111504u: goto label_111504;
        case 0x111508u: goto label_111508;
        case 0x11150cu: goto label_11150c;
        case 0x111510u: goto label_111510;
        case 0x111514u: goto label_111514;
        case 0x111518u: goto label_111518;
        case 0x11151cu: goto label_11151c;
        case 0x111520u: goto label_111520;
        case 0x111524u: goto label_111524;
        case 0x111528u: goto label_111528;
        case 0x11152cu: goto label_11152c;
        case 0x111530u: goto label_111530;
        case 0x111534u: goto label_111534;
        case 0x111538u: goto label_111538;
        case 0x11153cu: goto label_11153c;
        case 0x111540u: goto label_111540;
        case 0x111544u: goto label_111544;
        case 0x111548u: goto label_111548;
        case 0x11154cu: goto label_11154c;
        case 0x111550u: goto label_111550;
        case 0x111554u: goto label_111554;
        default: break;
    }

    ctx->pc = 0x111428u;

label_111428:
    // 0x111428: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x111428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11142c:
    // 0x11142c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x11142cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_111430:
    // 0x111430: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x111430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_111434:
    // 0x111434: 0x3442fa2c  ori         $v0, $v0, 0xFA2C
    ctx->pc = 0x111434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64044);
label_111438:
    // 0x111438: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11143c:
    // 0x11143c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x11143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_111440:
    // 0x111440: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x111440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_111444:
    // 0x111444: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x111444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_111448:
    // 0x111448: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_11144c:
    // 0x11144c: 0xc043d5e  jal         func_10F578
label_111450:
    if (ctx->pc == 0x111450u) {
        ctx->pc = 0x111450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11144Cu;
        // 0x111450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111454u;
        goto label_111454;
    }
    ctx->pc = 0x11144Cu;
    SET_GPR_U32(ctx, 31, 0x111454u);
    ctx->pc = 0x111450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11144Cu;
    // 0x111450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x11144Cu, 0x111454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111454u;
label_111454:
    // 0x111454: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_111458:
    if (ctx->pc == 0x111458u) {
        ctx->pc = 0x111458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111454u;
        // 0x111458: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11145Cu;
        goto label_11145c;
    }
    ctx->pc = 0x111454u;
    {
        const bool branch_taken_0x111454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111454) {
            ctx->pc = 0x111458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111454u;
            // 0x111458: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111544u;
            goto label_111544;
        }
    }
    ctx->pc = 0x11145Cu;
label_11145c:
    // 0x11145c: 0xc043d5e  jal         func_10F578
label_111460:
    if (ctx->pc == 0x111460u) {
        ctx->pc = 0x111460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11145Cu;
        // 0x111460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111464u;
        goto label_111464;
    }
    ctx->pc = 0x11145Cu;
    SET_GPR_U32(ctx, 31, 0x111464u);
    ctx->pc = 0x111460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11145Cu;
    // 0x111460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x11145Cu, 0x111464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111464u;
label_111464:
    // 0x111464: 0x8c52003c  lw          $s2, 0x3C($v0)
    ctx->pc = 0x111464u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_111468:
    // 0x111468: 0xc043d5e  jal         func_10F578
label_11146c:
    if (ctx->pc == 0x11146Cu) {
        ctx->pc = 0x11146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111468u;
        // 0x11146c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111470u;
        goto label_111470;
    }
    ctx->pc = 0x111468u;
    SET_GPR_U32(ctx, 31, 0x111470u);
    ctx->pc = 0x11146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111468u;
    // 0x11146c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x111468u, 0x111470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111470u;
label_111470:
    // 0x111470: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_111474:
    if (ctx->pc == 0x111474u) {
        ctx->pc = 0x111474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111470u;
        // 0x111474: 0x3c100003  lui         $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111478u;
        goto label_111478;
    }
    ctx->pc = 0x111470u;
    {
        const bool branch_taken_0x111470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111470) {
            ctx->pc = 0x111474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111470u;
            // 0x111474: 0x3c100003  lui         $s0, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1114C0u;
            goto label_1114c0;
        }
    }
    ctx->pc = 0x111478u;
label_111478:
    // 0x111478: 0xc043d5e  jal         func_10F578
label_11147c:
    if (ctx->pc == 0x11147Cu) {
        ctx->pc = 0x11147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111478u;
        // 0x11147c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111480u;
        goto label_111480;
    }
    ctx->pc = 0x111478u;
    SET_GPR_U32(ctx, 31, 0x111480u);
    ctx->pc = 0x11147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111478u;
    // 0x11147c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x111478u, 0x111480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111480u;
label_111480:
    // 0x111480: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x111480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_111484:
    // 0x111484: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_111488:
    if (ctx->pc == 0x111488u) {
        ctx->pc = 0x111488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111484u;
        // 0x111488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11148Cu;
        goto label_11148c;
    }
    ctx->pc = 0x111484u;
    {
        const bool branch_taken_0x111484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111484u;
        // 0x111488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111484) {
            ctx->pc = 0x1114BCu;
            goto label_1114bc;
        }
    }
    ctx->pc = 0x11148Cu;
label_11148c:
    // 0x11148c: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x11148cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
label_111490:
    // 0x111490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111494:
    // 0x111494: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x111494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_111498:
    // 0x111498: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x111498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_11149c:
    // 0x11149c: 0xc0440c6  jal         func_110318
label_1114a0:
    if (ctx->pc == 0x1114A0u) {
        ctx->pc = 0x1114A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11149Cu;
        // 0x1114a0: 0x8e057a2c  lw          $a1, 0x7A2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114A4u;
        goto label_1114a4;
    }
    ctx->pc = 0x11149Cu;
    SET_GPR_U32(ctx, 31, 0x1114A4u);
    ctx->pc = 0x1114A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11149Cu;
    // 0x1114a0: 0x8e057a2c  lw          $a1, 0x7A2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x11149Cu, 0x1114A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114A4u;
label_1114a4:
    // 0x1114a4: 0x8e057a30  lw          $a1, 0x7A30($s0)
    ctx->pc = 0x1114a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31280)));
label_1114a8:
    // 0x1114a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1114a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1114ac:
    // 0x1114ac: 0xc0440c6  jal         func_110318
label_1114b0:
    if (ctx->pc == 0x1114B0u) {
        ctx->pc = 0x1114B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114ACu;
        // 0x1114b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114B4u;
        goto label_1114b4;
    }
    ctx->pc = 0x1114ACu;
    SET_GPR_U32(ctx, 31, 0x1114B4u);
    ctx->pc = 0x1114B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114ACu;
    // 0x1114b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1114ACu, 0x1114B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114B4u;
label_1114b4:
    // 0x1114b4: 0x10000023  b           . + 4 + (0x23 << 2)
label_1114b8:
    if (ctx->pc == 0x1114B8u) {
        ctx->pc = 0x1114B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114B4u;
        // 0x1114b8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114BCu;
        goto label_1114bc;
    }
    ctx->pc = 0x1114B4u;
    {
        const bool branch_taken_0x1114b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114B4u;
        // 0x1114b8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114b4) {
            ctx->pc = 0x111544u;
            goto label_111544;
        }
    }
    ctx->pc = 0x1114BCu;
label_1114bc:
    // 0x1114bc: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x1114bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
label_1114c0:
    // 0x1114c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1114c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1114c4:
    // 0x1114c4: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x1114c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_1114c8:
    // 0x1114c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1114c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1114cc:
    // 0x1114cc: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1114ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1114d0:
    // 0x1114d0: 0xc0440c6  jal         func_110318
label_1114d4:
    if (ctx->pc == 0x1114D4u) {
        ctx->pc = 0x1114D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114D0u;
        // 0x1114d4: 0x8e057a2c  lw          $a1, 0x7A2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114D8u;
        goto label_1114d8;
    }
    ctx->pc = 0x1114D0u;
    SET_GPR_U32(ctx, 31, 0x1114D8u);
    ctx->pc = 0x1114D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114D0u;
    // 0x1114d4: 0x8e057a2c  lw          $a1, 0x7A2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1114D0u, 0x1114D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114D8u;
label_1114d8:
    // 0x1114d8: 0x8e057a30  lw          $a1, 0x7A30($s0)
    ctx->pc = 0x1114d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31280)));
label_1114dc:
    // 0x1114dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1114dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1114e0:
    // 0x1114e0: 0xc0440c6  jal         func_110318
label_1114e4:
    if (ctx->pc == 0x1114E4u) {
        ctx->pc = 0x1114E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114E0u;
        // 0x1114e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114E8u;
        goto label_1114e8;
    }
    ctx->pc = 0x1114E0u;
    SET_GPR_U32(ctx, 31, 0x1114E8u);
    ctx->pc = 0x1114E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114E0u;
    // 0x1114e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1114E0u, 0x1114E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114E8u;
label_1114e8:
    // 0x1114e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1114ec:
    if (ctx->pc == 0x1114ECu) {
        ctx->pc = 0x1114ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114E8u;
        // 0x1114ec: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114F0u;
        goto label_1114f0;
    }
    ctx->pc = 0x1114E8u;
    {
        const bool branch_taken_0x1114e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114E8u;
        // 0x1114ec: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114e8) {
            ctx->pc = 0x11151Cu;
            goto label_11151c;
        }
    }
    ctx->pc = 0x1114F0u;
label_1114f0:
    // 0x1114f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1114f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1114f4:
    // 0x1114f4: 0xc043e04  jal         func_10F810
label_1114f8:
    if (ctx->pc == 0x1114F8u) {
        ctx->pc = 0x1114F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114F4u;
        // 0x1114f8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1114FCu;
        goto label_1114fc;
    }
    ctx->pc = 0x1114F4u;
    SET_GPR_U32(ctx, 31, 0x1114FCu);
    ctx->pc = 0x1114F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114F4u;
    // 0x1114f8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x1114F4u, 0x1114FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114FCu;
label_1114fc:
    // 0x1114fc: 0x8e05bce4  lw          $a1, -0x431C($s0)
    ctx->pc = 0x1114fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950116)));
label_111500:
    // 0x111500: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x111500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_111504:
    // 0x111504: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x111504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_111508:
    // 0x111508: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x111508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_11150c:
    // 0x11150c: 0x60f809  jalr        $v1
label_111510:
    if (ctx->pc == 0x111510u) {
        ctx->pc = 0x111510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11150Cu;
        // 0x111510: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111514u;
        goto label_111514;
    }
    ctx->pc = 0x11150Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111514u);
        ctx->pc = 0x111510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11150Cu;
        // 0x111510: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11150Cu, 0x111514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111514u;
label_111514:
    // 0x111514: 0xc12aa7c  jal         func_4AA9F0
label_111518:
    if (ctx->pc == 0x111518u) {
        ctx->pc = 0x111518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111514u;
        // 0x111518: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11151Cu;
        goto label_11151c;
    }
    ctx->pc = 0x111514u;
    SET_GPR_U32(ctx, 31, 0x11151Cu);
    ctx->pc = 0x111518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111514u;
    // 0x111518: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA9F0u, 0x111514u, 0x11151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11151Cu;
label_11151c:
    // 0x11151c: 0x8e06bce4  lw          $a2, -0x431C($s0)
    ctx->pc = 0x11151cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950116)));
label_111520:
    // 0x111520: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x111520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_111524:
    // 0x111524: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x111524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_111528:
    // 0x111528: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x111528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_11152c:
    // 0x11152c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x11152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_111530:
    // 0x111530: 0x40f809  jalr        $v0
label_111534:
    if (ctx->pc == 0x111534u) {
        ctx->pc = 0x111534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111530u;
        // 0x111534: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111538u;
        goto label_111538;
    }
    ctx->pc = 0x111530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111538u);
        ctx->pc = 0x111534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111530u;
        // 0x111534: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111530u, 0x111538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111538u;
label_111538:
    // 0x111538: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_11153c:
    if (ctx->pc == 0x11153Cu) {
        ctx->pc = 0x11153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111538u;
        // 0x11153c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111540u;
        goto label_111540;
    }
    ctx->pc = 0x111538u;
    {
        const bool branch_taken_0x111538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111538u;
        // 0x11153c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111538) {
            ctx->pc = 0x1114F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1114f0;
        }
    }
    ctx->pc = 0x111540u;
label_111540:
    // 0x111540: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x111540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_111544:
    // 0x111544: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x111544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_111548:
    // 0x111548: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x111548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11154c:
    // 0x11154c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_111550:
    // 0x111550: 0x3e00008  jr          $ra
label_111554:
    if (ctx->pc == 0x111554u) {
        ctx->pc = 0x111554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111550u;
        // 0x111554: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111558u;
        goto label_fallthrough_0x111550;
    }
    ctx->pc = 0x111550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111550u;
        // 0x111554: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x111550:
    ctx->pc = 0x111558u;
}
