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

// Function: sub_003114E0
// Address: 0x3114e0 - 0x311638
void sub_003114E0_0x3114e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003114E0_0x3114e0");
#endif

    switch (ctx->pc) {
        case 0x3114e0u: goto label_3114e0;
        case 0x3114e4u: goto label_3114e4;
        case 0x3114e8u: goto label_3114e8;
        case 0x3114ecu: goto label_3114ec;
        case 0x3114f0u: goto label_3114f0;
        case 0x3114f4u: goto label_3114f4;
        case 0x3114f8u: goto label_3114f8;
        case 0x3114fcu: goto label_3114fc;
        case 0x311500u: goto label_311500;
        case 0x311504u: goto label_311504;
        case 0x311508u: goto label_311508;
        case 0x31150cu: goto label_31150c;
        case 0x311510u: goto label_311510;
        case 0x311514u: goto label_311514;
        case 0x311518u: goto label_311518;
        case 0x31151cu: goto label_31151c;
        case 0x311520u: goto label_311520;
        case 0x311524u: goto label_311524;
        case 0x311528u: goto label_311528;
        case 0x31152cu: goto label_31152c;
        case 0x311530u: goto label_311530;
        case 0x311534u: goto label_311534;
        case 0x311538u: goto label_311538;
        case 0x31153cu: goto label_31153c;
        case 0x311540u: goto label_311540;
        case 0x311544u: goto label_311544;
        case 0x311548u: goto label_311548;
        case 0x31154cu: goto label_31154c;
        case 0x311550u: goto label_311550;
        case 0x311554u: goto label_311554;
        case 0x311558u: goto label_311558;
        case 0x31155cu: goto label_31155c;
        case 0x311560u: goto label_311560;
        case 0x311564u: goto label_311564;
        case 0x311568u: goto label_311568;
        case 0x31156cu: goto label_31156c;
        case 0x311570u: goto label_311570;
        case 0x311574u: goto label_311574;
        case 0x311578u: goto label_311578;
        case 0x31157cu: goto label_31157c;
        case 0x311580u: goto label_311580;
        case 0x311584u: goto label_311584;
        case 0x311588u: goto label_311588;
        case 0x31158cu: goto label_31158c;
        case 0x311590u: goto label_311590;
        case 0x311594u: goto label_311594;
        case 0x311598u: goto label_311598;
        case 0x31159cu: goto label_31159c;
        case 0x3115a0u: goto label_3115a0;
        case 0x3115a4u: goto label_3115a4;
        case 0x3115a8u: goto label_3115a8;
        case 0x3115acu: goto label_3115ac;
        case 0x3115b0u: goto label_3115b0;
        case 0x3115b4u: goto label_3115b4;
        case 0x3115b8u: goto label_3115b8;
        case 0x3115bcu: goto label_3115bc;
        case 0x3115c0u: goto label_3115c0;
        case 0x3115c4u: goto label_3115c4;
        case 0x3115c8u: goto label_3115c8;
        case 0x3115ccu: goto label_3115cc;
        case 0x3115d0u: goto label_3115d0;
        case 0x3115d4u: goto label_3115d4;
        case 0x3115d8u: goto label_3115d8;
        case 0x3115dcu: goto label_3115dc;
        case 0x3115e0u: goto label_3115e0;
        case 0x3115e4u: goto label_3115e4;
        case 0x3115e8u: goto label_3115e8;
        case 0x3115ecu: goto label_3115ec;
        case 0x3115f0u: goto label_3115f0;
        case 0x3115f4u: goto label_3115f4;
        case 0x3115f8u: goto label_3115f8;
        case 0x3115fcu: goto label_3115fc;
        case 0x311600u: goto label_311600;
        case 0x311604u: goto label_311604;
        case 0x311608u: goto label_311608;
        case 0x31160cu: goto label_31160c;
        case 0x311610u: goto label_311610;
        case 0x311614u: goto label_311614;
        case 0x311618u: goto label_311618;
        case 0x31161cu: goto label_31161c;
        case 0x311620u: goto label_311620;
        case 0x311624u: goto label_311624;
        case 0x311628u: goto label_311628;
        case 0x31162cu: goto label_31162c;
        case 0x311630u: goto label_311630;
        case 0x311634u: goto label_311634;
        default: break;
    }

    ctx->pc = 0x3114e0u;

label_3114e0:
    // 0x3114e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3114e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3114e4:
    // 0x3114e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3114e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3114e8:
    // 0x3114e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3114e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3114ec:
    // 0x3114ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3114ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3114f0:
    // 0x3114f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3114f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3114f4:
    // 0x3114f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3114f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3114f8:
    // 0x3114f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3114f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3114fc:
    // 0x3114fc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3114fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_311500:
    // 0x311500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_311504:
    // 0x311504: 0xc05959e  jal         func_165678
label_311508:
    if (ctx->pc == 0x311508u) {
        ctx->pc = 0x311508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311504u;
        // 0x311508: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31150Cu;
        goto label_31150c;
    }
    ctx->pc = 0x311504u;
    SET_GPR_U32(ctx, 31, 0x31150Cu);
    ctx->pc = 0x311508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311504u;
    // 0x311508: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x311504u, 0x31150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31150Cu;
label_31150c:
    // 0x31150c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31150cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311510:
    // 0x311510: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
label_311514:
    if (ctx->pc == 0x311514u) {
        ctx->pc = 0x311514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311510u;
        // 0x311514: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311518u;
        goto label_311518;
    }
    ctx->pc = 0x311510u;
    {
        const bool branch_taken_0x311510 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x311514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311510u;
        // 0x311514: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311510) {
            ctx->pc = 0x311614u;
            goto label_311614;
        }
    }
    ctx->pc = 0x311518u;
label_311518:
    // 0x311518: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x311518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31151c:
    // 0x31151c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x31151cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_311520:
    // 0x311520: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x311520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_311524:
    // 0x311524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x311524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_311528:
    // 0x311528: 0xc137826  jal         func_4DE098
label_31152c:
    if (ctx->pc == 0x31152Cu) {
        ctx->pc = 0x31152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311528u;
        // 0x31152c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311530u;
        goto label_311530;
    }
    ctx->pc = 0x311528u;
    SET_GPR_U32(ctx, 31, 0x311530u);
    ctx->pc = 0x31152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311528u;
    // 0x31152c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x311528u, 0x311530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311530u;
label_311530:
    // 0x311530: 0xc0e409a  jal         func_390268
label_311534:
    if (ctx->pc == 0x311534u) {
        ctx->pc = 0x311534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311530u;
        // 0x311534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311538u;
        goto label_311538;
    }
    ctx->pc = 0x311530u;
    SET_GPR_U32(ctx, 31, 0x311538u);
    ctx->pc = 0x311534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311530u;
    // 0x311534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x311530u, 0x311538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311538u;
label_311538:
    // 0x311538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31153c:
    // 0x31153c: 0x52000032  beql        $s0, $zero, . + 4 + (0x32 << 2)
label_311540:
    if (ctx->pc == 0x311540u) {
        ctx->pc = 0x311540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31153Cu;
        // 0x311540: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311544u;
        goto label_311544;
    }
    ctx->pc = 0x31153Cu;
    {
        const bool branch_taken_0x31153c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31153c) {
            ctx->pc = 0x311540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31153Cu;
            // 0x311540: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311608u;
            goto label_311608;
        }
    }
    ctx->pc = 0x311544u;
label_311544:
    // 0x311544: 0x52120030  beql        $s0, $s2, . + 4 + (0x30 << 2)
label_311548:
    if (ctx->pc == 0x311548u) {
        ctx->pc = 0x311548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311544u;
        // 0x311548: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31154Cu;
        goto label_31154c;
    }
    ctx->pc = 0x311544u;
    {
        const bool branch_taken_0x311544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x311544) {
            ctx->pc = 0x311548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311544u;
            // 0x311548: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311608u;
            goto label_311608;
        }
    }
    ctx->pc = 0x31154Cu;
label_31154c:
    // 0x31154c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x31154cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_311550:
    // 0x311550: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x311550u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_311554:
    // 0x311554: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_311558:
    if (ctx->pc == 0x311558u) {
        ctx->pc = 0x311558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311554u;
        // 0x311558: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31155Cu;
        goto label_31155c;
    }
    ctx->pc = 0x311554u;
    {
        const bool branch_taken_0x311554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311554u;
        // 0x311558: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311554) {
            ctx->pc = 0x311604u;
            goto label_311604;
        }
    }
    ctx->pc = 0x31155Cu;
label_31155c:
    // 0x31155c: 0xc089f76  jal         func_227DD8
label_311560:
    if (ctx->pc == 0x311560u) {
        ctx->pc = 0x311560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31155Cu;
        // 0x311560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311564u;
        goto label_311564;
    }
    ctx->pc = 0x31155Cu;
    SET_GPR_U32(ctx, 31, 0x311564u);
    ctx->pc = 0x311560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31155Cu;
    // 0x311560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x31155Cu, 0x311564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311564u;
label_311564:
    // 0x311564: 0x50510028  beql        $v0, $s1, . + 4 + (0x28 << 2)
label_311568:
    if (ctx->pc == 0x311568u) {
        ctx->pc = 0x311568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311564u;
        // 0x311568: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31156Cu;
        goto label_31156c;
    }
    ctx->pc = 0x311564u;
    {
        const bool branch_taken_0x311564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x311564) {
            ctx->pc = 0x311568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311564u;
            // 0x311568: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311608u;
            goto label_311608;
        }
    }
    ctx->pc = 0x31156Cu;
label_31156c:
    // 0x31156c: 0xc088edc  jal         func_223B70
label_311570:
    if (ctx->pc == 0x311570u) {
        ctx->pc = 0x311570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31156Cu;
        // 0x311570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311574u;
        goto label_311574;
    }
    ctx->pc = 0x31156Cu;
    SET_GPR_U32(ctx, 31, 0x311574u);
    ctx->pc = 0x311570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31156Cu;
    // 0x311570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x31156Cu, 0x311574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311574u;
label_311574:
    // 0x311574: 0x50510024  beql        $v0, $s1, . + 4 + (0x24 << 2)
label_311578:
    if (ctx->pc == 0x311578u) {
        ctx->pc = 0x311578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311574u;
        // 0x311578: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31157Cu;
        goto label_31157c;
    }
    ctx->pc = 0x311574u;
    {
        const bool branch_taken_0x311574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x311574) {
            ctx->pc = 0x311578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311574u;
            // 0x311578: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311608u;
            goto label_311608;
        }
    }
    ctx->pc = 0x31157Cu;
label_31157c:
    // 0x31157c: 0xc087502  jal         func_21D408
label_311580:
    if (ctx->pc == 0x311580u) {
        ctx->pc = 0x311580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31157Cu;
        // 0x311580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311584u;
        goto label_311584;
    }
    ctx->pc = 0x31157Cu;
    SET_GPR_U32(ctx, 31, 0x311584u);
    ctx->pc = 0x311580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31157Cu;
    // 0x311580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31157Cu, 0x311584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311584u;
label_311584:
    // 0x311584: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x311584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311588:
    // 0x311588: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x311588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_31158c:
    // 0x31158c: 0xc0a3658  jal         func_28D960
label_311590:
    if (ctx->pc == 0x311590u) {
        ctx->pc = 0x311590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31158Cu;
        // 0x311590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311594u;
        goto label_311594;
    }
    ctx->pc = 0x31158Cu;
    SET_GPR_U32(ctx, 31, 0x311594u);
    ctx->pc = 0x311590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31158Cu;
    // 0x311590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31158Cu, 0x311594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311594u;
label_311594:
    // 0x311594: 0x1055001b  beq         $v0, $s5, . + 4 + (0x1B << 2)
label_311598:
    if (ctx->pc == 0x311598u) {
        ctx->pc = 0x311598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311594u;
        // 0x311598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31159Cu;
        goto label_31159c;
    }
    ctx->pc = 0x311594u;
    {
        const bool branch_taken_0x311594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x311598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311594u;
        // 0x311598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311594) {
            ctx->pc = 0x311604u;
            goto label_311604;
        }
    }
    ctx->pc = 0x31159Cu;
label_31159c:
    // 0x31159c: 0xc0a3658  jal         func_28D960
label_3115a0:
    if (ctx->pc == 0x3115A0u) {
        ctx->pc = 0x3115A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31159Cu;
        // 0x3115a0: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115A4u;
        goto label_3115a4;
    }
    ctx->pc = 0x31159Cu;
    SET_GPR_U32(ctx, 31, 0x3115A4u);
    ctx->pc = 0x3115A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31159Cu;
    // 0x3115a0: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31159Cu, 0x3115A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3115A4u;
label_3115a4:
    // 0x3115a4: 0x4430018  bgezl       $v0, . + 4 + (0x18 << 2)
label_3115a8:
    if (ctx->pc == 0x3115A8u) {
        ctx->pc = 0x3115A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115A4u;
        // 0x3115a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115ACu;
        goto label_3115ac;
    }
    ctx->pc = 0x3115A4u;
    {
        const bool branch_taken_0x3115a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3115a4) {
            ctx->pc = 0x3115A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3115A4u;
            // 0x3115a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311608u;
            goto label_311608;
        }
    }
    ctx->pc = 0x3115ACu;
label_3115ac:
    // 0x3115ac: 0xc0a4e54  jal         func_293950
label_3115b0:
    if (ctx->pc == 0x3115B0u) {
        ctx->pc = 0x3115B4u;
        goto label_3115b4;
    }
    ctx->pc = 0x3115ACu;
    SET_GPR_U32(ctx, 31, 0x3115B4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x3115ACu, 0x3115B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3115B4u;
label_3115b4:
    // 0x3115b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3115b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3115b8:
    // 0x3115b8: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_3115bc:
    if (ctx->pc == 0x3115BCu) {
        ctx->pc = 0x3115BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115B8u;
        // 0x3115bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115C0u;
        goto label_3115c0;
    }
    ctx->pc = 0x3115B8u;
    {
        const bool branch_taken_0x3115b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3115b8) {
            ctx->pc = 0x3115BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3115B8u;
            // 0x3115bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3115FCu;
            goto label_3115fc;
        }
    }
    ctx->pc = 0x3115C0u;
label_3115c0:
    // 0x3115c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3115c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3115c4:
    // 0x3115c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3115c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3115c8:
    // 0x3115c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3115c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3115cc:
    // 0x3115cc: 0x40f809  jalr        $v0
label_3115d0:
    if (ctx->pc == 0x3115D0u) {
        ctx->pc = 0x3115D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115CCu;
        // 0x3115d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115D4u;
        goto label_3115d4;
    }
    ctx->pc = 0x3115CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3115D4u);
        ctx->pc = 0x3115D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115CCu;
        // 0x3115d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3115CCu, 0x3115D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3115D4u;
label_3115d4:
    // 0x3115d4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x3115d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_3115d8:
    // 0x3115d8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3115d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3115dc:
    // 0x3115dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3115dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3115e0:
    // 0x3115e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3115e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3115e4:
    // 0x3115e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3115e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3115e8:
    // 0x3115e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3115e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3115ec:
    // 0x3115ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3115ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3115f0:
    // 0x3115f0: 0xc0b7eea  jal         func_2DFBA8
label_3115f4:
    if (ctx->pc == 0x3115F4u) {
        ctx->pc = 0x3115F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115F0u;
        // 0x3115f4: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3115F8u;
        goto label_3115f8;
    }
    ctx->pc = 0x3115F0u;
    SET_GPR_U32(ctx, 31, 0x3115F8u);
    ctx->pc = 0x3115F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3115F0u;
    // 0x3115f4: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x3115F0u, 0x3115F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3115F8u;
label_3115f8:
    // 0x3115f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3115f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3115fc:
    // 0x3115fc: 0xc0a35d6  jal         func_28D758
label_311600:
    if (ctx->pc == 0x311600u) {
        ctx->pc = 0x311600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115FCu;
        // 0x311600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311604u;
        goto label_311604;
    }
    ctx->pc = 0x3115FCu;
    SET_GPR_U32(ctx, 31, 0x311604u);
    ctx->pc = 0x311600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3115FCu;
    // 0x311600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x3115FCu, 0x311604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311604u;
label_311604:
    // 0x311604: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x311604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_311608:
    // 0x311608: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x311608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31160c:
    // 0x31160c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_311610:
    if (ctx->pc == 0x311610u) {
        ctx->pc = 0x311610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31160Cu;
        // 0x311610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311614u;
        goto label_311614;
    }
    ctx->pc = 0x31160Cu;
    {
        const bool branch_taken_0x31160c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31160Cu;
        // 0x311610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31160c) {
            ctx->pc = 0x311528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311528;
        }
    }
    ctx->pc = 0x311614u;
label_311614:
    // 0x311614: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x311614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_311618:
    // 0x311618: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x311618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31161c:
    // 0x31161c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31161cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311620:
    // 0x311620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x311620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311624:
    // 0x311624: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x311624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311628:
    // 0x311628: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x311628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31162c:
    // 0x31162c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_311630:
    // 0x311630: 0x3e00008  jr          $ra
label_311634:
    if (ctx->pc == 0x311634u) {
        ctx->pc = 0x311634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311630u;
        // 0x311634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x311638u;
        goto label_fallthrough_0x311630;
    }
    ctx->pc = 0x311630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311630u;
        // 0x311634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x311630:
    ctx->pc = 0x311638u;
}
