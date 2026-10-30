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

// Function: sub_003C1318
// Address: 0x3c1318 - 0x3c13fc
void sub_003C1318_0x3c1318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1318_0x3c1318");
#endif

    switch (ctx->pc) {
        case 0x3c1318u: goto label_3c1318;
        case 0x3c131cu: goto label_3c131c;
        case 0x3c1320u: goto label_3c1320;
        case 0x3c1324u: goto label_3c1324;
        case 0x3c1328u: goto label_3c1328;
        case 0x3c132cu: goto label_3c132c;
        case 0x3c1330u: goto label_3c1330;
        case 0x3c1334u: goto label_3c1334;
        case 0x3c1338u: goto label_3c1338;
        case 0x3c133cu: goto label_3c133c;
        case 0x3c1340u: goto label_3c1340;
        case 0x3c1344u: goto label_3c1344;
        case 0x3c1348u: goto label_3c1348;
        case 0x3c134cu: goto label_3c134c;
        case 0x3c1350u: goto label_3c1350;
        case 0x3c1354u: goto label_3c1354;
        case 0x3c1358u: goto label_3c1358;
        case 0x3c135cu: goto label_3c135c;
        case 0x3c1360u: goto label_3c1360;
        case 0x3c1364u: goto label_3c1364;
        case 0x3c1368u: goto label_3c1368;
        case 0x3c136cu: goto label_3c136c;
        case 0x3c1370u: goto label_3c1370;
        case 0x3c1374u: goto label_3c1374;
        case 0x3c1378u: goto label_3c1378;
        case 0x3c137cu: goto label_3c137c;
        case 0x3c1380u: goto label_3c1380;
        case 0x3c1384u: goto label_3c1384;
        case 0x3c1388u: goto label_3c1388;
        case 0x3c138cu: goto label_3c138c;
        case 0x3c1390u: goto label_3c1390;
        case 0x3c1394u: goto label_3c1394;
        case 0x3c1398u: goto label_3c1398;
        case 0x3c139cu: goto label_3c139c;
        case 0x3c13a0u: goto label_3c13a0;
        case 0x3c13a4u: goto label_3c13a4;
        case 0x3c13a8u: goto label_3c13a8;
        case 0x3c13acu: goto label_3c13ac;
        case 0x3c13b0u: goto label_3c13b0;
        case 0x3c13b4u: goto label_3c13b4;
        case 0x3c13b8u: goto label_3c13b8;
        case 0x3c13bcu: goto label_3c13bc;
        case 0x3c13c0u: goto label_3c13c0;
        case 0x3c13c4u: goto label_3c13c4;
        case 0x3c13c8u: goto label_3c13c8;
        case 0x3c13ccu: goto label_3c13cc;
        case 0x3c13d0u: goto label_3c13d0;
        case 0x3c13d4u: goto label_3c13d4;
        case 0x3c13d8u: goto label_3c13d8;
        case 0x3c13dcu: goto label_3c13dc;
        case 0x3c13e0u: goto label_3c13e0;
        case 0x3c13e4u: goto label_3c13e4;
        case 0x3c13e8u: goto label_3c13e8;
        case 0x3c13ecu: goto label_3c13ec;
        case 0x3c13f0u: goto label_3c13f0;
        case 0x3c13f4u: goto label_3c13f4;
        case 0x3c13f8u: goto label_3c13f8;
        default: break;
    }

    ctx->pc = 0x3c1318u;

label_3c1318:
    // 0x3c1318: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c1318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3c131c:
    // 0x3c131c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c131cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3c1320:
    // 0x3c1320: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c1320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3c1324:
    // 0x3c1324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c1324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1328:
    // 0x3c1328: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c1328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3c132c:
    // 0x3c132c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c132cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c1330:
    // 0x3c1330: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c1330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c1334:
    // 0x3c1334: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c1334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1338:
    // 0x3c1338: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c1338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c133c:
    // 0x3c133c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c133cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c1340:
    // 0x3c1340: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c1340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c1344:
    // 0x3c1344: 0x40f809  jalr        $v0
label_3c1348:
    if (ctx->pc == 0x3C1348u) {
        ctx->pc = 0x3C1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1344u;
        // 0x3c1348: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C134Cu;
        goto label_3c134c;
    }
    ctx->pc = 0x3C1344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C134Cu);
        ctx->pc = 0x3C1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1344u;
        // 0x3c1348: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1344u, 0x3C134Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C134Cu;
label_3c134c:
    // 0x3c134c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3c134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3c1350:
    // 0x3c1350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c1350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1354:
    // 0x3c1354: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x3c1354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_3c1358:
    // 0x3c1358: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_3c135c:
    if (ctx->pc == 0x3C135Cu) {
        ctx->pc = 0x3C135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1358u;
        // 0x3c135c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1360u;
        goto label_3c1360;
    }
    ctx->pc = 0x3C1358u;
    {
        const bool branch_taken_0x3c1358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1358u;
        // 0x3c135c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1358) {
            ctx->pc = 0x3C1404u;
            return;
        }
    }
    ctx->pc = 0x3C1360u;
label_3c1360:
    // 0x3c1360: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c1360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c1364:
    // 0x3c1364: 0x24422b00  addiu       $v0, $v0, 0x2B00
    ctx->pc = 0x3c1364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11008));
label_3c1368:
    // 0x3c1368: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c1368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c136c:
    // 0x3c136c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c1370:
    // 0x3c1370: 0x800008  jr          $a0
label_3c1374:
    if (ctx->pc == 0x3C1374u) {
        ctx->pc = 0x3C1378u;
        goto label_3c1378;
    }
    ctx->pc = 0x3C1370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C1378u: goto label_3c1378;
            case 0x3C13C4u: goto label_3c13c4;
            case 0x3C13E8u: goto label_3c13e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1370u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C1378u;
label_3c1378:
    // 0x3c1378: 0xc0ea146  jal         func_3A8518
label_3c137c:
    if (ctx->pc == 0x3C137Cu) {
        ctx->pc = 0x3C137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1378u;
        // 0x3c137c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1380u;
        goto label_3c1380;
    }
    ctx->pc = 0x3C1378u;
    SET_GPR_U32(ctx, 31, 0x3C1380u);
    ctx->pc = 0x3C137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1378u;
    // 0x3c137c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C1378u, 0x3C1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1380u;
label_3c1380:
    // 0x3c1380: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c1380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1384:
    // 0x3c1384: 0xc0ea12a  jal         func_3A84A8
label_3c1388:
    if (ctx->pc == 0x3C1388u) {
        ctx->pc = 0x3C1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1384u;
        // 0x3c1388: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C138Cu;
        goto label_3c138c;
    }
    ctx->pc = 0x3C1384u;
    SET_GPR_U32(ctx, 31, 0x3C138Cu);
    ctx->pc = 0x3C1388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1384u;
    // 0x3c1388: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C1384u, 0x3C138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C138Cu;
label_3c138c:
    // 0x3c138c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c138cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1390:
    // 0x3c1390: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c1390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1394:
    // 0x3c1394: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1398:
    // 0x3c1398: 0xc0ea12a  jal         func_3A84A8
label_3c139c:
    if (ctx->pc == 0x3C139Cu) {
        ctx->pc = 0x3C139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1398u;
        // 0x3c139c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13A0u;
        goto label_3c13a0;
    }
    ctx->pc = 0x3C1398u;
    SET_GPR_U32(ctx, 31, 0x3C13A0u);
    ctx->pc = 0x3C139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1398u;
    // 0x3c139c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C1398u, 0x3C13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C13A0u;
label_3c13a0:
    // 0x3c13a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c13a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c13a4:
    // 0x3c13a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c13a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c13a8:
    // 0x3c13a8: 0xc0ea146  jal         func_3A8518
label_3c13ac:
    if (ctx->pc == 0x3C13ACu) {
        ctx->pc = 0x3C13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13A8u;
        // 0x3c13ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13B0u;
        goto label_3c13b0;
    }
    ctx->pc = 0x3C13A8u;
    SET_GPR_U32(ctx, 31, 0x3C13B0u);
    ctx->pc = 0x3C13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C13A8u;
    // 0x3c13ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C13A8u, 0x3C13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C13B0u;
label_3c13b0:
    // 0x3c13b0: 0xc0ea14c  jal         func_3A8530
label_3c13b4:
    if (ctx->pc == 0x3C13B4u) {
        ctx->pc = 0x3C13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13B0u;
        // 0x3c13b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13B8u;
        goto label_3c13b8;
    }
    ctx->pc = 0x3C13B0u;
    SET_GPR_U32(ctx, 31, 0x3C13B8u);
    ctx->pc = 0x3C13B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C13B0u;
    // 0x3c13b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C13B0u, 0x3C13B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C13B8u;
label_3c13b8:
    // 0x3c13b8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c13b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c13bc:
    // 0x3c13bc: 0x10000011  b           . + 4 + (0x11 << 2)
label_3c13c0:
    if (ctx->pc == 0x3C13C0u) {
        ctx->pc = 0x3C13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13BCu;
        // 0x3c13c0: 0x7e430010  sq          $v1, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13C4u;
        goto label_3c13c4;
    }
    ctx->pc = 0x3C13BCu;
    {
        const bool branch_taken_0x3c13bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13BCu;
        // 0x3c13c0: 0x7e430010  sq          $v1, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c13bc) {
            ctx->pc = 0x3C1404u;
            return;
        }
    }
    ctx->pc = 0x3C13C4u;
label_3c13c4:
    // 0x3c13c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c13c8:
    // 0x3c13c8: 0xc0ea12a  jal         func_3A84A8
label_3c13cc:
    if (ctx->pc == 0x3C13CCu) {
        ctx->pc = 0x3C13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13C8u;
        // 0x3c13cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13D0u;
        goto label_3c13d0;
    }
    ctx->pc = 0x3C13C8u;
    SET_GPR_U32(ctx, 31, 0x3C13D0u);
    ctx->pc = 0x3C13CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C13C8u;
    // 0x3c13cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C13C8u, 0x3C13D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C13D0u;
label_3c13d0:
    // 0x3c13d0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c13d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c13d4:
    // 0x3c13d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c13d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c13d8:
    // 0x3c13d8: 0xc0ea14c  jal         func_3A8530
label_3c13dc:
    if (ctx->pc == 0x3C13DCu) {
        ctx->pc = 0x3C13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13D8u;
        // 0x3c13dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13E0u;
        goto label_3c13e0;
    }
    ctx->pc = 0x3C13D8u;
    SET_GPR_U32(ctx, 31, 0x3C13E0u);
    ctx->pc = 0x3C13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C13D8u;
    // 0x3c13dc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C13D8u, 0x3C13E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C13E0u;
label_3c13e0:
    // 0x3c13e0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3c13e4:
    if (ctx->pc == 0x3C13E4u) {
        ctx->pc = 0x3C13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13E0u;
        // 0x3c13e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13E8u;
        goto label_3c13e8;
    }
    ctx->pc = 0x3C13E0u;
    {
        const bool branch_taken_0x3c13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13E0u;
        // 0x3c13e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c13e0) {
            ctx->pc = 0x3C1408u;
            return;
        }
    }
    ctx->pc = 0x3C13E8u;
label_3c13e8:
    // 0x3c13e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c13e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c13ec:
    // 0x3c13ec: 0xc0f0490  jal         func_3C1240
label_3c13f0:
    if (ctx->pc == 0x3C13F0u) {
        ctx->pc = 0x3C13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13ECu;
        // 0x3c13f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13F4u;
        goto label_3c13f4;
    }
    ctx->pc = 0x3C13ECu;
    SET_GPR_U32(ctx, 31, 0x3C13F4u);
    ctx->pc = 0x3C13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C13ECu;
    // 0x3c13f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1240u, 0x3C13ECu, 0x3C13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C13F4u;
label_3c13f4:
    // 0x3c13f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c13f8:
    if (ctx->pc == 0x3C13F8u) {
        ctx->pc = 0x3C13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13F4u;
        // 0x3c13f8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C13FCu;
        goto label_fallthrough_0x3c13f4;
    }
    ctx->pc = 0x3C13F4u;
    {
        const bool branch_taken_0x3c13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C13F4u;
        // 0x3c13f8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c13f4) {
            ctx->pc = 0x3C1408u;
            return;
        }
    }
label_fallthrough_0x3c13f4:
    ctx->pc = 0x3C13FCu;
}
