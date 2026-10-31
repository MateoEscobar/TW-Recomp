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

// Function: sub_003192F0
// Address: 0x3192f0 - 0x319470
void sub_003192F0_0x3192f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003192F0_0x3192f0");
#endif

    switch (ctx->pc) {
        case 0x3192f0u: goto label_3192f0;
        case 0x3192f4u: goto label_3192f4;
        case 0x3192f8u: goto label_3192f8;
        case 0x3192fcu: goto label_3192fc;
        case 0x319300u: goto label_319300;
        case 0x319304u: goto label_319304;
        case 0x319308u: goto label_319308;
        case 0x31930cu: goto label_31930c;
        case 0x319310u: goto label_319310;
        case 0x319314u: goto label_319314;
        case 0x319318u: goto label_319318;
        case 0x31931cu: goto label_31931c;
        case 0x319320u: goto label_319320;
        case 0x319324u: goto label_319324;
        case 0x319328u: goto label_319328;
        case 0x31932cu: goto label_31932c;
        case 0x319330u: goto label_319330;
        case 0x319334u: goto label_319334;
        case 0x319338u: goto label_319338;
        case 0x31933cu: goto label_31933c;
        case 0x319340u: goto label_319340;
        case 0x319344u: goto label_319344;
        case 0x319348u: goto label_319348;
        case 0x31934cu: goto label_31934c;
        case 0x319350u: goto label_319350;
        case 0x319354u: goto label_319354;
        case 0x319358u: goto label_319358;
        case 0x31935cu: goto label_31935c;
        case 0x319360u: goto label_319360;
        case 0x319364u: goto label_319364;
        case 0x319368u: goto label_319368;
        case 0x31936cu: goto label_31936c;
        case 0x319370u: goto label_319370;
        case 0x319374u: goto label_319374;
        case 0x319378u: goto label_319378;
        case 0x31937cu: goto label_31937c;
        case 0x319380u: goto label_319380;
        case 0x319384u: goto label_319384;
        case 0x319388u: goto label_319388;
        case 0x31938cu: goto label_31938c;
        case 0x319390u: goto label_319390;
        case 0x319394u: goto label_319394;
        case 0x319398u: goto label_319398;
        case 0x31939cu: goto label_31939c;
        case 0x3193a0u: goto label_3193a0;
        case 0x3193a4u: goto label_3193a4;
        case 0x3193a8u: goto label_3193a8;
        case 0x3193acu: goto label_3193ac;
        case 0x3193b0u: goto label_3193b0;
        case 0x3193b4u: goto label_3193b4;
        case 0x3193b8u: goto label_3193b8;
        case 0x3193bcu: goto label_3193bc;
        case 0x3193c0u: goto label_3193c0;
        case 0x3193c4u: goto label_3193c4;
        case 0x3193c8u: goto label_3193c8;
        case 0x3193ccu: goto label_3193cc;
        case 0x3193d0u: goto label_3193d0;
        case 0x3193d4u: goto label_3193d4;
        case 0x3193d8u: goto label_3193d8;
        case 0x3193dcu: goto label_3193dc;
        case 0x3193e0u: goto label_3193e0;
        case 0x3193e4u: goto label_3193e4;
        case 0x3193e8u: goto label_3193e8;
        case 0x3193ecu: goto label_3193ec;
        case 0x3193f0u: goto label_3193f0;
        case 0x3193f4u: goto label_3193f4;
        case 0x3193f8u: goto label_3193f8;
        case 0x3193fcu: goto label_3193fc;
        case 0x319400u: goto label_319400;
        case 0x319404u: goto label_319404;
        case 0x319408u: goto label_319408;
        case 0x31940cu: goto label_31940c;
        case 0x319410u: goto label_319410;
        case 0x319414u: goto label_319414;
        case 0x319418u: goto label_319418;
        case 0x31941cu: goto label_31941c;
        case 0x319420u: goto label_319420;
        case 0x319424u: goto label_319424;
        case 0x319428u: goto label_319428;
        case 0x31942cu: goto label_31942c;
        case 0x319430u: goto label_319430;
        case 0x319434u: goto label_319434;
        case 0x319438u: goto label_319438;
        case 0x31943cu: goto label_31943c;
        case 0x319440u: goto label_319440;
        case 0x319444u: goto label_319444;
        case 0x319448u: goto label_319448;
        case 0x31944cu: goto label_31944c;
        case 0x319450u: goto label_319450;
        case 0x319454u: goto label_319454;
        case 0x319458u: goto label_319458;
        case 0x31945cu: goto label_31945c;
        case 0x319460u: goto label_319460;
        case 0x319464u: goto label_319464;
        case 0x319468u: goto label_319468;
        case 0x31946cu: goto label_31946c;
        default: break;
    }

    ctx->pc = 0x3192f0u;

label_3192f0:
    // 0x3192f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3192f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3192f4:
    // 0x3192f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3192f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3192f8:
    // 0x3192f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3192f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3192fc:
    // 0x3192fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3192fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_319300:
    // 0x319300: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x319300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_319304:
    // 0x319304: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x319304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_319308:
    // 0x319308: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x319308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31930c:
    // 0x31930c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_319310:
    // 0x319310: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x319310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_319314:
    // 0x319314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_319318:
    // 0x319318: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x319318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_31931c:
    // 0x31931c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x31931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_319320:
    // 0x319320: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x319320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_319324:
    // 0x319324: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x319324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_319328:
    // 0x319328: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_31932c:
    if (ctx->pc == 0x31932Cu) {
        ctx->pc = 0x31932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319328u;
        // 0x31932c: 0x244203e8  addiu       $v0, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319330u;
        goto label_319330;
    }
    ctx->pc = 0x319328u;
    {
        const bool branch_taken_0x319328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319328u;
        // 0x31932c: 0x244203e8  addiu       $v0, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319328) {
            ctx->pc = 0x3193C0u;
            goto label_3193c0;
        }
    }
    ctx->pc = 0x319330u;
label_319330:
    // 0x319330: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_319334:
    // 0x319334: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x319334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_319338:
    // 0x319338: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x319338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31933c:
    // 0x31933c: 0x24730048  addiu       $s3, $v1, 0x48
    ctx->pc = 0x31933cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_319340:
    // 0x319340: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x319340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319344:
    // 0x319344: 0x0  nop
    ctx->pc = 0x319344u;
    // NOP
label_319348:
    // 0x319348: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x319348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31934c:
    // 0x31934c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_319350:
    if (ctx->pc == 0x319350u) {
        ctx->pc = 0x319350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31934Cu;
        // 0x319350: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319354u;
        goto label_319354;
    }
    ctx->pc = 0x31934Cu;
    {
        const bool branch_taken_0x31934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31934Cu;
        // 0x319350: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31934c) {
            ctx->pc = 0x319390u;
            goto label_319390;
        }
    }
    ctx->pc = 0x319354u;
label_319354:
    // 0x319354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x319354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_319358:
    // 0x319358: 0xc137826  jal         func_4DE098
label_31935c:
    if (ctx->pc == 0x31935Cu) {
        ctx->pc = 0x31935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319358u;
        // 0x31935c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319360u;
        goto label_319360;
    }
    ctx->pc = 0x319358u;
    SET_GPR_U32(ctx, 31, 0x319360u);
    ctx->pc = 0x31935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319358u;
    // 0x31935c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x319358u, 0x319360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319360u;
label_319360:
    // 0x319360: 0xc0e409a  jal         func_390268
label_319364:
    if (ctx->pc == 0x319364u) {
        ctx->pc = 0x319364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319360u;
        // 0x319364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319368u;
        goto label_319368;
    }
    ctx->pc = 0x319360u;
    SET_GPR_U32(ctx, 31, 0x319368u);
    ctx->pc = 0x319364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319360u;
    // 0x319364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x319360u, 0x319368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319368u;
label_319368:
    // 0x319368: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
label_31936c:
    if (ctx->pc == 0x31936Cu) {
        ctx->pc = 0x31936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319368u;
        // 0x31936c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319370u;
        goto label_319370;
    }
    ctx->pc = 0x319368u;
    {
        const bool branch_taken_0x319368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319368) {
            ctx->pc = 0x31936Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319368u;
            // 0x31936c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319348;
        }
    }
    ctx->pc = 0x319370u;
label_319370:
    // 0x319370: 0xc087502  jal         func_21D408
label_319374:
    if (ctx->pc == 0x319374u) {
        ctx->pc = 0x319374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319370u;
        // 0x319374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319378u;
        goto label_319378;
    }
    ctx->pc = 0x319370u;
    SET_GPR_U32(ctx, 31, 0x319378u);
    ctx->pc = 0x319374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319370u;
    // 0x319374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x319370u, 0x319378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319378u;
label_319378:
    // 0x319378: 0xc137832  jal         func_4DE0C8
label_31937c:
    if (ctx->pc == 0x31937Cu) {
        ctx->pc = 0x31937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319378u;
        // 0x31937c: 0x24440164  addiu       $a0, $v0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319380u;
        goto label_319380;
    }
    ctx->pc = 0x319378u;
    SET_GPR_U32(ctx, 31, 0x319380u);
    ctx->pc = 0x31937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319378u;
    // 0x31937c: 0x24440164  addiu       $a0, $v0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x319378u, 0x319380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319380u;
label_319380:
    // 0x319380: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_319384:
    if (ctx->pc == 0x319384u) {
        ctx->pc = 0x319384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319380u;
        // 0x319384: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319388u;
        goto label_319388;
    }
    ctx->pc = 0x319380u;
    {
        const bool branch_taken_0x319380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319380) {
            ctx->pc = 0x319384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319380u;
            // 0x319384: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319348;
        }
    }
    ctx->pc = 0x319388u;
label_319388:
    // 0x319388: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x319388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31938c:
    // 0x31938c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319390:
    // 0x319390: 0x56430004  bnel        $s2, $v1, . + 4 + (0x4 << 2)
label_319394:
    if (ctx->pc == 0x319394u) {
        ctx->pc = 0x319394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319390u;
        // 0x319394: 0x9222003a  lbu         $v0, 0x3A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319398u;
        goto label_319398;
    }
    ctx->pc = 0x319390u;
    {
        const bool branch_taken_0x319390 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x319390) {
            ctx->pc = 0x319394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319390u;
            // 0x319394: 0x9222003a  lbu         $v0, 0x3A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3193A4u;
            goto label_3193a4;
        }
    }
    ctx->pc = 0x319398u;
label_319398:
    // 0x319398: 0xa223003a  sb          $v1, 0x3A($s1)
    ctx->pc = 0x319398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 3));
label_31939c:
    // 0x31939c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3193a0:
    if (ctx->pc == 0x3193A0u) {
        ctx->pc = 0x3193A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31939Cu;
        // 0x3193a0: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193A4u;
        goto label_3193a4;
    }
    ctx->pc = 0x31939Cu;
    {
        const bool branch_taken_0x31939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3193A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31939Cu;
        // 0x3193a0: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31939c) {
            ctx->pc = 0x3193C0u;
            goto label_3193c0;
        }
    }
    ctx->pc = 0x3193A4u;
label_3193a4:
    // 0x3193a4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_3193a8:
    if (ctx->pc == 0x3193A8u) {
        ctx->pc = 0x3193A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193A4u;
        // 0x3193a8: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193ACu;
        goto label_3193ac;
    }
    ctx->pc = 0x3193A4u;
    {
        const bool branch_taken_0x3193a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3193A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193A4u;
        // 0x3193a8: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193a4) {
            ctx->pc = 0x3193C4u;
            goto label_3193c4;
        }
    }
    ctx->pc = 0x3193ACu;
label_3193ac:
    // 0x3193ac: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3193b0:
    if (ctx->pc == 0x3193B0u) {
        ctx->pc = 0x3193B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193ACu;
        // 0x3193b0: 0x8e83b734  lw          $v1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193B4u;
        goto label_3193b4;
    }
    ctx->pc = 0x3193ACu;
    {
        const bool branch_taken_0x3193ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3193B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193ACu;
        // 0x3193b0: 0x8e83b734  lw          $v1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193ac) {
            ctx->pc = 0x3193CCu;
            goto label_3193cc;
        }
    }
    ctx->pc = 0x3193B4u;
label_3193b4:
    // 0x3193b4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x3193b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_3193b8:
    // 0x3193b8: 0x24427530  addiu       $v0, $v0, 0x7530
    ctx->pc = 0x3193b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30000));
label_3193bc:
    // 0x3193bc: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x3193bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_3193c0:
    // 0x3193c0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3193c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3193c4:
    // 0x3193c4: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_3193c8:
    if (ctx->pc == 0x3193C8u) {
        ctx->pc = 0x3193C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193C4u;
        // 0x3193c8: 0x8e83b734  lw          $v1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193CCu;
        goto label_3193cc;
    }
    ctx->pc = 0x3193C4u;
    {
        const bool branch_taken_0x3193c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3193C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193C4u;
        // 0x3193c8: 0x8e83b734  lw          $v1, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193c4) {
            ctx->pc = 0x319448u;
            goto label_319448;
        }
    }
    ctx->pc = 0x3193CCu;
label_3193cc:
    // 0x3193cc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x3193ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_3193d0:
    // 0x3193d0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3193d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3193d4:
    // 0x3193d4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3193d8:
    if (ctx->pc == 0x3193D8u) {
        ctx->pc = 0x3193D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193D4u;
        // 0x3193d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193DCu;
        goto label_3193dc;
    }
    ctx->pc = 0x3193D4u;
    {
        const bool branch_taken_0x3193d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3193D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193D4u;
        // 0x3193d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193d4) {
            ctx->pc = 0x31944Cu;
            goto label_31944c;
        }
    }
    ctx->pc = 0x3193DCu;
label_3193dc:
    // 0x3193dc: 0xc05959e  jal         func_165678
label_3193e0:
    if (ctx->pc == 0x3193E0u) {
        ctx->pc = 0x3193E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193DCu;
        // 0x3193e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193E4u;
        goto label_3193e4;
    }
    ctx->pc = 0x3193DCu;
    SET_GPR_U32(ctx, 31, 0x3193E4u);
    ctx->pc = 0x3193E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3193DCu;
    // 0x3193e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3193DCu, 0x3193E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193E4u;
label_3193e4:
    // 0x3193e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3193e8:
    if (ctx->pc == 0x3193E8u) {
        ctx->pc = 0x3193E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193E4u;
        // 0x3193e8: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3193ECu;
        goto label_3193ec;
    }
    ctx->pc = 0x3193E4u;
    {
        const bool branch_taken_0x3193e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3193E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193E4u;
        // 0x3193e8: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193e4) {
            ctx->pc = 0x319448u;
            goto label_319448;
        }
    }
    ctx->pc = 0x3193ECu;
label_3193ec:
    // 0x3193ec: 0x84420092  lh          $v0, 0x92($v0)
    ctx->pc = 0x3193ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_3193f0:
    // 0x3193f0: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x3193f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_3193f4:
    // 0x3193f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3193f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3193f8:
    // 0x3193f8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3193f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3193fc:
    // 0x3193fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3193fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319400:
    // 0x319400: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x319400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_319404:
    // 0x319404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x319404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319408:
    // 0x319408: 0xc105df6  jal         func_4177D8
label_31940c:
    if (ctx->pc == 0x31940Cu) {
        ctx->pc = 0x31940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319408u;
        // 0x31940c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319410u;
        goto label_319410;
    }
    ctx->pc = 0x319408u;
    SET_GPR_U32(ctx, 31, 0x319410u);
    ctx->pc = 0x31940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319408u;
    // 0x31940c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x319408u, 0x319410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319410u;
label_319410:
    // 0x319410: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x319410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_319414:
    // 0x319414: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x319414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_319418:
    // 0x319418: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x319418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_31941c:
    // 0x31941c: 0x84700030  lh          $s0, 0x30($v1)
    ctx->pc = 0x31941cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_319420:
    // 0x319420: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x319420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_319424:
    // 0x319424: 0x60f809  jalr        $v1
label_319428:
    if (ctx->pc == 0x319428u) {
        ctx->pc = 0x319428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319424u;
        // 0x319428: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31942Cu;
        goto label_31942c;
    }
    ctx->pc = 0x319424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31942Cu);
        ctx->pc = 0x319428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319424u;
        // 0x319428: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319424u, 0x31942Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31942Cu;
label_31942c:
    // 0x31942c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319430:
    // 0x319430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319434:
    // 0x319434: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x319434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_319438:
    // 0x319438: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x319438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31943c:
    // 0x31943c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31943cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319440:
    // 0x319440: 0xc0c58a6  jal         func_316298
label_319444:
    if (ctx->pc == 0x319444u) {
        ctx->pc = 0x319444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319440u;
        // 0x319444: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319448u;
        goto label_319448;
    }
    ctx->pc = 0x319440u;
    SET_GPR_U32(ctx, 31, 0x319448u);
    ctx->pc = 0x319444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319440u;
    // 0x319444: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316298u, 0x319440u, 0x319448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319448u;
label_319448:
    // 0x319448: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x319448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31944c:
    // 0x31944c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31944cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319450:
    // 0x319450: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x319450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_319454:
    // 0x319454: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x319454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_319458:
    // 0x319458: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x319458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31945c:
    // 0x31945c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31945cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_319460:
    // 0x319460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_319464:
    // 0x319464: 0x3e00008  jr          $ra
label_319468:
    if (ctx->pc == 0x319468u) {
        ctx->pc = 0x319468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319464u;
        // 0x319468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31946Cu;
        goto label_31946c;
    }
    ctx->pc = 0x319464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319464u;
        // 0x319468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31946Cu;
label_31946c:
    // 0x31946c: 0x0  nop
    ctx->pc = 0x31946cu;
    // NOP
    ctx->pc = 0x319470u;
}
