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

// Function: sub_00234318
// Address: 0x234318 - 0x234530
void sub_00234318_0x234318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234318_0x234318");
#endif

    switch (ctx->pc) {
        case 0x234344u: goto label_234344;
        case 0x23434cu: goto label_23434c;
        case 0x2343b4u: goto label_2343b4;
        case 0x2343c8u: goto label_2343c8;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343d8u: goto label_2343d8;
        case 0x2343e4u: goto label_2343e4;
        case 0x2343f0u: goto label_2343f0;
        case 0x2343fcu: goto label_2343fc;
        case 0x234410u: goto label_234410;
        case 0x234428u: goto label_234428;
        case 0x234480u: goto label_234480;
        case 0x23448cu: goto label_23448c;
        case 0x2344acu: goto label_2344ac;
        case 0x2344c0u: goto label_2344c0;
        case 0x2344d4u: goto label_2344d4;
        case 0x2344e4u: goto label_2344e4;
        case 0x2344f8u: goto label_2344f8;
        case 0x234508u: goto label_234508;
        case 0x234518u: goto label_234518;
        default: break;
    }

    ctx->pc = 0x234318u;

    // 0x234318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23431c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x234320: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x234320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x234324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x234324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234328: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23432c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23432cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234330: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x234330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x234334: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x234334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23433c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23433Cu;
    SET_GPR_U32(ctx, 31, 0x234344u);
    ctx->pc = 0x234340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23433Cu;
    // 0x234340: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23433Cu, 0x234344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234344u;
label_234344:
    // 0x234344: 0xc08a61a  jal         func_229868
    ctx->pc = 0x234344u;
    SET_GPR_U32(ctx, 31, 0x23434Cu);
    ctx->pc = 0x234348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234344u;
    // 0x234348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x234344u, 0x23434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23434Cu;
label_23434c:
    // 0x23434c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23434cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234350: 0x52200072  beql        $s1, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x234350u;
    {
        const bool branch_taken_0x234350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x234350) {
            ctx->pc = 0x234354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234350u;
            // 0x234354: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23451Cu;
            goto label_23451c;
        }
    }
    ctx->pc = 0x234358u;
    // 0x234358: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x234358u;
    {
        const bool branch_taken_0x234358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234358u;
        // 0x23435c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234358) {
            ctx->pc = 0x234418u;
            goto label_234418;
        }
    }
    ctx->pc = 0x234360u;
    // 0x234360: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x234360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x234364: 0x2444c5f0  addiu       $a0, $v0, -0x3A10
    ctx->pc = 0x234364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x234368: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x234368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23436c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23436Cu;
    {
        const bool branch_taken_0x23436c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23436Cu;
        // 0x234370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23436c) {
            ctx->pc = 0x2343A4u;
            goto label_2343a4;
        }
    }
    ctx->pc = 0x234374u;
    // 0x234374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x234374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234378: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234378u;
    {
        const bool branch_taken_0x234378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234378u;
        // 0x23437c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234378) {
            ctx->pc = 0x234390u;
            goto label_234390;
        }
    }
    ctx->pc = 0x234380u;
    // 0x234380: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x234380u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x234384: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x234384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x234388: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234388u;
    {
        const bool branch_taken_0x234388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234388u;
        // 0x23438c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234388) {
            ctx->pc = 0x2343A0u;
            goto label_2343a0;
        }
    }
    ctx->pc = 0x234390u;
label_234390:
    // 0x234390: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x234390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x234394: 0x24422ce0  addiu       $v0, $v0, 0x2CE0
    ctx->pc = 0x234394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11488));
    // 0x234398: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x234398u;
    {
        const bool branch_taken_0x234398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x234398) {
            ctx->pc = 0x2343A4u;
            goto label_2343a4;
        }
    }
    ctx->pc = 0x2343A0u;
label_2343a0:
    // 0x2343a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2343a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2343a4:
    // 0x2343a4: 0x14a0005d  bnez        $a1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2343A4u;
    {
        const bool branch_taken_0x2343a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2343A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343A4u;
        // 0x2343a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343a4) {
            ctx->pc = 0x23451Cu;
            goto label_23451c;
        }
    }
    ctx->pc = 0x2343ACu;
    // 0x2343ac: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2343ACu;
    SET_GPR_U32(ctx, 31, 0x2343B4u);
    ctx->pc = 0x2343B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343ACu;
    // 0x2343b0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2343ACu, 0x2343B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343B4u;
label_2343b4:
    // 0x2343b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2343b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2343b8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2343b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2343bc: 0x52f78  dsll        $a1, $a1, 29
    ctx->pc = 0x2343bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 29);
    // 0x2343c0: 0xc089974  jal         func_2265D0
    ctx->pc = 0x2343C0u;
    SET_GPR_U32(ctx, 31, 0x2343C8u);
    ctx->pc = 0x2343C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343C0u;
    // 0x2343c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2343C0u, 0x2343C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343C8u;
label_2343c8:
    // 0x2343c8: 0xc08840e  jal         func_221038
    ctx->pc = 0x2343C8u;
    SET_GPR_U32(ctx, 31, 0x2343D0u);
    ctx->pc = 0x2343CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343C8u;
    // 0x2343cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x2343C8u, 0x2343D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343D0u;
label_2343d0:
    // 0x2343d0: 0xc09117e  jal         func_2445F8
    ctx->pc = 0x2343D0u;
    SET_GPR_U32(ctx, 31, 0x2343D8u);
    ctx->pc = 0x2343D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343D0u;
    // 0x2343d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2445F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445F8u, 0x2343D0u, 0x2343D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343D8u;
label_2343d8:
    // 0x2343d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2343d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2343dc: 0xc091190  jal         func_244640
    ctx->pc = 0x2343DCu;
    SET_GPR_U32(ctx, 31, 0x2343E4u);
    ctx->pc = 0x2343E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343DCu;
    // 0x2343e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244640u, 0x2343DCu, 0x2343E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343E4u;
label_2343e4:
    // 0x2343e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2343e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2343e8: 0xc0911aa  jal         func_2446A8
    ctx->pc = 0x2343E8u;
    SET_GPR_U32(ctx, 31, 0x2343F0u);
    ctx->pc = 0x2343ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343E8u;
    // 0x2343ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2446A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446A8u, 0x2343E8u, 0x2343F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343F0u;
label_2343f0:
    // 0x2343f0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2343f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2343f4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2343F4u;
    SET_GPR_U32(ctx, 31, 0x2343FCu);
    ctx->pc = 0x2343F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343F4u;
    // 0x2343f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1463E0u, 0x2343F4u, 0x2343FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343FCu;
label_2343fc:
    // 0x2343fc: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2343fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x234400: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x234400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234404: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x234404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x234408: 0xc051d0c  jal         func_147430
    ctx->pc = 0x234408u;
    SET_GPR_U32(ctx, 31, 0x234410u);
    ctx->pc = 0x23440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234408u;
    // 0x23440c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147430u, 0x234408u, 0x234410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234410u;
label_234410:
    // 0x234410: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x234410u;
    {
        const bool branch_taken_0x234410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234410u;
        // 0x234414: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234410) {
            ctx->pc = 0x23451Cu;
            goto label_23451c;
        }
    }
    ctx->pc = 0x234418u;
label_234418:
    // 0x234418: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x234418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23441c: 0x52f78  dsll        $a1, $a1, 29
    ctx->pc = 0x23441cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 29);
    // 0x234420: 0xc089988  jal         func_226620
    ctx->pc = 0x234420u;
    SET_GPR_U32(ctx, 31, 0x234428u);
    ctx->pc = 0x234424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234420u;
    // 0x234424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x234420u, 0x234428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234428u;
label_234428:
    // 0x234428: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x234428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x23442c: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x23442cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x234430: 0x2444c5f0  addiu       $a0, $v0, -0x3A10
    ctx->pc = 0x234430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x234434: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x234434u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55C5F2u));
    // 0x234438: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x234438u;
    {
        const bool branch_taken_0x234438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234438u;
        // 0x23443c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234438) {
            ctx->pc = 0x234470u;
            goto label_234470;
        }
    }
    ctx->pc = 0x234440u;
    // 0x234440: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x234440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234444: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234444u;
    {
        const bool branch_taken_0x234444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234444u;
        // 0x234448: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234444) {
            ctx->pc = 0x23445Cu;
            goto label_23445c;
        }
    }
    ctx->pc = 0x23444Cu;
    // 0x23444c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x23444cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x234450: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x234450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x234454: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234454u;
    {
        const bool branch_taken_0x234454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x234458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234454u;
        // 0x234458: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234454) {
            ctx->pc = 0x23446Cu;
            goto label_23446c;
        }
    }
    ctx->pc = 0x23445Cu;
label_23445c:
    // 0x23445c: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x23445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x234460: 0x24422ce0  addiu       $v0, $v0, 0x2CE0
    ctx->pc = 0x234460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11488));
    // 0x234464: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x234464u;
    {
        const bool branch_taken_0x234464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x234464) {
            ctx->pc = 0x234470u;
            goto label_234470;
        }
    }
    ctx->pc = 0x23446Cu;
label_23446c:
    // 0x23446c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234470:
    // 0x234470: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x234470u;
    {
        const bool branch_taken_0x234470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234470u;
        // 0x234474: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234470) {
            ctx->pc = 0x234490u;
            goto label_234490;
        }
    }
    ctx->pc = 0x234478u;
    // 0x234478: 0xc088420  jal         func_221080
    ctx->pc = 0x234478u;
    SET_GPR_U32(ctx, 31, 0x234480u);
    ctx->pc = 0x23447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234478u;
    // 0x23447c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x234478u, 0x234480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234480u;
label_234480:
    // 0x234480: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x234480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234484: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x234484u;
    SET_GPR_U32(ctx, 31, 0x23448Cu);
    ctx->pc = 0x234488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234484u;
    // 0x234488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1463E0u, 0x234484u, 0x23448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23448Cu;
label_23448c:
    // 0x23448c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x23448cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_234490:
    // 0x234490: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x234490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234494: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x234494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x234498: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x234498u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x23449c: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x23449Cu;
    {
        const bool branch_taken_0x23449c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23449c) {
            ctx->pc = 0x234510u;
            goto label_234510;
        }
    }
    ctx->pc = 0x2344A4u;
    // 0x2344a4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2344A4u;
    SET_GPR_U32(ctx, 31, 0x2344ACu);
    ctx->pc = 0x2344A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344A4u;
    // 0x2344a8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2344A4u, 0x2344ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344ACu;
label_2344ac:
    // 0x2344ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2344acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344b0: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2344B0u;
    {
        const bool branch_taken_0x2344b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2344B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344B0u;
        // 0x2344b4: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344b0) {
            ctx->pc = 0x2344C4u;
            goto label_2344c4;
        }
    }
    ctx->pc = 0x2344B8u;
    // 0x2344b8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2344B8u;
    SET_GPR_U32(ctx, 31, 0x2344C0u);
    ctx->pc = 0x2344BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344B8u;
    // 0x2344bc: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2344B8u, 0x2344C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344C0u;
label_2344c0:
    // 0x2344c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2344c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2344c4:
    // 0x2344c4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2344C4u;
    {
        const bool branch_taken_0x2344c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344c4) {
            ctx->pc = 0x234500u;
            goto label_234500;
        }
    }
    ctx->pc = 0x2344CCu;
    // 0x2344cc: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2344CCu;
    SET_GPR_U32(ctx, 31, 0x2344D4u);
    ctx->pc = 0x2344D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344CCu;
    // 0x2344d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2344CCu, 0x2344D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344D4u;
label_2344d4:
    // 0x2344d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2344D4u;
    {
        const bool branch_taken_0x2344d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2344d4) {
            ctx->pc = 0x234500u;
            goto label_234500;
        }
    }
    ctx->pc = 0x2344DCu;
    // 0x2344dc: 0xc089e8e  jal         func_227A38
    ctx->pc = 0x2344DCu;
    SET_GPR_U32(ctx, 31, 0x2344E4u);
    ctx->pc = 0x2344E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344DCu;
    // 0x2344e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A38u, 0x2344DCu, 0x2344E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344E4u;
label_2344e4:
    // 0x2344e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2344E4u;
    {
        const bool branch_taken_0x2344e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344E4u;
        // 0x2344e8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344e4) {
            ctx->pc = 0x234500u;
            goto label_234500;
        }
    }
    ctx->pc = 0x2344ECu;
    // 0x2344ec: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x2344ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2344f0: 0xc0519ea  jal         func_1467A8
    ctx->pc = 0x2344F0u;
    SET_GPR_U32(ctx, 31, 0x2344F8u);
    ctx->pc = 0x2344F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344F0u;
    // 0x2344f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1467A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1467A8u, 0x2344F0u, 0x2344F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344F8u;
label_2344f8:
    // 0x2344f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2344F8u;
    {
        const bool branch_taken_0x2344f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344F8u;
        // 0x2344fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344f8) {
            ctx->pc = 0x23451Cu;
            goto label_23451c;
        }
    }
    ctx->pc = 0x234500u;
label_234500:
    // 0x234500: 0xc051ae4  jal         func_146B90
    ctx->pc = 0x234500u;
    SET_GPR_U32(ctx, 31, 0x234508u);
    ctx->pc = 0x234504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234500u;
    // 0x234504: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146B90u, 0x234500u, 0x234508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234508u;
label_234508:
    // 0x234508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x234508u;
    {
        const bool branch_taken_0x234508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234508u;
        // 0x23450c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234508) {
            ctx->pc = 0x23451Cu;
            goto label_23451c;
        }
    }
    ctx->pc = 0x234510u;
label_234510:
    // 0x234510: 0xc051ae4  jal         func_146B90
    ctx->pc = 0x234510u;
    SET_GPR_U32(ctx, 31, 0x234518u);
    ctx->pc = 0x234514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234510u;
    // 0x234514: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146B90u, 0x234510u, 0x234518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234518u;
label_234518:
    // 0x234518: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x234518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23451c:
    // 0x23451c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23451cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x234520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234528: 0x3e00008  jr          $ra
    ctx->pc = 0x234528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234528u;
        // 0x23452c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234530u;
}
