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

// Function: sub_00331350
// Address: 0x331350 - 0x331578
void sub_00331350_0x331350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331350_0x331350");
#endif

    switch (ctx->pc) {
        case 0x33138cu: goto label_33138c;
        case 0x3313a0u: goto label_3313a0;
        case 0x3313b4u: goto label_3313b4;
        case 0x3313ccu: goto label_3313cc;
        case 0x3313dcu: goto label_3313dc;
        case 0x3313e4u: goto label_3313e4;
        case 0x33140cu: goto label_33140c;
        case 0x331424u: goto label_331424;
        case 0x331438u: goto label_331438;
        case 0x331454u: goto label_331454;
        case 0x331464u: goto label_331464;
        case 0x331480u: goto label_331480;
        case 0x331494u: goto label_331494;
        case 0x3314b0u: goto label_3314b0;
        case 0x3314e8u: goto label_3314e8;
        case 0x331524u: goto label_331524;
        case 0x33152cu: goto label_33152c;
        case 0x331534u: goto label_331534;
        case 0x331540u: goto label_331540;
        default: break;
    }

    ctx->pc = 0x331350u;

    // 0x331350: 0x27bdfa30  addiu       $sp, $sp, -0x5D0
    ctx->pc = 0x331350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965808));
    // 0x331354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331358: 0x7fb205a0  sq          $s2, 0x5A0($sp)
    ctx->pc = 0x331358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 18));
    // 0x33135c: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x33135cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x331360: 0x7fb005c0  sq          $s0, 0x5C0($sp)
    ctx->pc = 0x331360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 16));
    // 0x331364: 0x7fb105b0  sq          $s1, 0x5B0($sp)
    ctx->pc = 0x331364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 17));
    // 0x331368: 0x7fb50570  sq          $s5, 0x570($sp)
    ctx->pc = 0x331368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 21));
    // 0x33136c: 0x7fb30590  sq          $s3, 0x590($sp)
    ctx->pc = 0x33136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 19));
    // 0x331370: 0x7fb40580  sq          $s4, 0x580($sp)
    ctx->pc = 0x331370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 20));
    // 0x331374: 0x7fb60560  sq          $s6, 0x560($sp)
    ctx->pc = 0x331374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 22));
    // 0x331378: 0x7fb70550  sq          $s7, 0x550($sp)
    ctx->pc = 0x331378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 23));
    // 0x33137c: 0x7fbe0540  sq          $fp, 0x540($sp)
    ctx->pc = 0x33137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 30));
    // 0x331380: 0xffbf0530  sd          $ra, 0x530($sp)
    ctx->pc = 0x331380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1328), GPR_U64(ctx, 31));
    // 0x331384: 0xc0c9192  jal         func_324648
    ctx->pc = 0x331384u;
    SET_GPR_U32(ctx, 31, 0x33138Cu);
    ctx->pc = 0x331388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331384u;
    // 0x331388: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x331384u, 0x33138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33138Cu;
label_33138c:
    // 0x33138c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33138cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331390: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x331390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331394: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x331394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331398: 0xc0c9192  jal         func_324648
    ctx->pc = 0x331398u;
    SET_GPR_U32(ctx, 31, 0x3313A0u);
    ctx->pc = 0x33139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331398u;
    // 0x33139c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x331398u, 0x3313A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313A0u;
label_3313a0:
    // 0x3313a0: 0x8fb00520  lw          $s0, 0x520($sp)
    ctx->pc = 0x3313a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x3313a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3313a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3313a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3313ac: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3313ACu;
    SET_GPR_U32(ctx, 31, 0x3313B4u);
    ctx->pc = 0x3313B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313ACu;
    // 0x3313b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3313ACu, 0x3313B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313B4u;
label_3313b4:
    // 0x3313b4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3313B4u;
    {
        const bool branch_taken_0x3313b4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3313B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313B4u;
        // 0x3313b8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3313b4) {
            ctx->pc = 0x3313D0u;
            goto label_3313d0;
        }
    }
    ctx->pc = 0x3313BCu;
    // 0x3313bc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3313bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3313c0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3313c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3313c4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3313C4u;
    SET_GPR_U32(ctx, 31, 0x3313CCu);
    ctx->pc = 0x3313C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313C4u;
    // 0x3313c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3313C4u, 0x3313CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313CCu;
label_3313cc:
    // 0x3313cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3313ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3313d0:
    // 0x3313d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3313d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313d4: 0xc0c91f2  jal         func_3247C8
    ctx->pc = 0x3313D4u;
    SET_GPR_U32(ctx, 31, 0x3313DCu);
    ctx->pc = 0x3313D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313D4u;
    // 0x3313d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247C8u, 0x3313D4u, 0x3313DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313DCu;
label_3313dc:
    // 0x3313dc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3313DCu;
    SET_GPR_U32(ctx, 31, 0x3313E4u);
    ctx->pc = 0x3313E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313DCu;
    // 0x3313e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3313DCu, 0x3313E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313E4u;
label_3313e4:
    // 0x3313e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3313e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313e8: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x3313e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3313ec: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x3313ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x3313f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3313F0u;
    {
        const bool branch_taken_0x3313f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3313F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313F0u;
        // 0x3313f4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3313f0) {
            ctx->pc = 0x331400u;
            goto label_331400;
        }
    }
    ctx->pc = 0x3313F8u;
    // 0x3313f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3313f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3313fc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3313fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331400:
    // 0x331400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x331400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331404: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x331404u;
    SET_GPR_U32(ctx, 31, 0x33140Cu);
    ctx->pc = 0x331408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331404u;
    // 0x331408: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x331404u, 0x33140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33140Cu;
label_33140c:
    // 0x33140c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x33140cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x331410: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x331410u;
    {
        const bool branch_taken_0x331410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331410u;
        // 0x331414: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331410) {
            ctx->pc = 0x331444u;
            goto label_331444;
        }
    }
    ctx->pc = 0x331418u;
    // 0x331418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x331418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33141c: 0xc0c8d6e  jal         func_3235B8
    ctx->pc = 0x33141Cu;
    SET_GPR_U32(ctx, 31, 0x331424u);
    ctx->pc = 0x331420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33141Cu;
    // 0x331420: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235B8u, 0x33141Cu, 0x331424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331424u;
label_331424:
    // 0x331424: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x331424u;
    {
        const bool branch_taken_0x331424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331424u;
        // 0x331428: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331424) {
            ctx->pc = 0x331458u;
            goto label_331458;
        }
    }
    ctx->pc = 0x33142Cu;
    // 0x33142c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331430: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x331430u;
    SET_GPR_U32(ctx, 31, 0x331438u);
    ctx->pc = 0x331434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331430u;
    // 0x331434: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x331430u, 0x331438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331438u;
label_331438:
    // 0x331438: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x331438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33143c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33143Cu;
    {
        const bool branch_taken_0x33143c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x331440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33143Cu;
        // 0x331440: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33143c) {
            ctx->pc = 0x331454u;
            goto label_331454;
        }
    }
    ctx->pc = 0x331444u;
label_331444:
    // 0x331444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x331444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331448: 0x24c66110  addiu       $a2, $a2, 0x6110
    ctx->pc = 0x331448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24848));
    // 0x33144c: 0xc0c910e  jal         func_324438
    ctx->pc = 0x33144Cu;
    SET_GPR_U32(ctx, 31, 0x331454u);
    ctx->pc = 0x331450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33144Cu;
    // 0x331450: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x33144Cu, 0x331454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331454u;
label_331454:
    // 0x331454: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x331454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_331458:
    // 0x331458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x331458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33145c: 0xc0c930c  jal         func_324C30
    ctx->pc = 0x33145Cu;
    SET_GPR_U32(ctx, 31, 0x331464u);
    ctx->pc = 0x331460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33145Cu;
    // 0x331460: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C30u, 0x33145Cu, 0x331464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331464u;
label_331464:
    // 0x331464: 0x8fa20520  lw          $v0, 0x520($sp)
    ctx->pc = 0x331464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x331468: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x331468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x33146c: 0x1ac00028  blez        $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x33146Cu;
    {
        const bool branch_taken_0x33146c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x331470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33146Cu;
        // 0x331470: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33146c) {
            ctx->pc = 0x331510u;
            goto label_331510;
        }
    }
    ctx->pc = 0x331474u;
    // 0x331474: 0x27b7051c  addiu       $s7, $sp, 0x51C
    ctx->pc = 0x331474u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
    // 0x331478: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x331478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x33147c: 0x0  nop
    ctx->pc = 0x33147cu;
    // NOP
label_331480:
    // 0x331480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x331480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x331484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331488: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x331488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33148c: 0xc0cc2f0  jal         func_330BC0
    ctx->pc = 0x33148Cu;
    SET_GPR_U32(ctx, 31, 0x331494u);
    ctx->pc = 0x331490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33148Cu;
    // 0x331490: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BC0u, 0x33148Cu, 0x331494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331494u;
label_331494:
    // 0x331494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331498: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x331498u;
    {
        const bool branch_taken_0x331498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331498u;
        // 0x33149c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331498) {
            ctx->pc = 0x3314C4u;
            goto label_3314c4;
        }
    }
    ctx->pc = 0x3314A0u;
    // 0x3314a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3314a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3314a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3314a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3314a8: 0xc0cc46a  jal         func_3311A8
    ctx->pc = 0x3314A8u;
    SET_GPR_U32(ctx, 31, 0x3314B0u);
    ctx->pc = 0x3314ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314A8u;
    // 0x3314ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3311A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3311A8u, 0x3314A8u, 0x3314B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314B0u;
label_3314b0:
    // 0x3314b0: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3314b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3314b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3314B4u;
    {
        const bool branch_taken_0x3314b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3314B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314B4u;
        // 0x3314b8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314b4) {
            ctx->pc = 0x3314C8u;
            goto label_3314c8;
        }
    }
    ctx->pc = 0x3314BCu;
    // 0x3314bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3314BCu;
    {
        const bool branch_taken_0x3314bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3314C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314BCu;
        // 0x3314c0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314bc) {
            ctx->pc = 0x331500u;
            goto label_331500;
        }
    }
    ctx->pc = 0x3314C4u;
label_3314c4:
    // 0x3314c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3314c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3314c8:
    // 0x3314c8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3314c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3314cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3314CCu;
    {
        const bool branch_taken_0x3314cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3314D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314CCu;
        // 0x3314d0: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314cc) {
            ctx->pc = 0x331510u;
            goto label_331510;
        }
    }
    ctx->pc = 0x3314D4u;
    // 0x3314d4: 0x57102b  sltu        $v0, $v0, $s7
    ctx->pc = 0x3314d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x3314d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3314D8u;
    {
        const bool branch_taken_0x3314d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3314DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3314D8u;
        // 0x3314dc: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314d8) {
            ctx->pc = 0x3314ECu;
            goto label_3314ec;
        }
    }
    ctx->pc = 0x3314E0u;
    // 0x3314e0: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x3314E0u;
    SET_GPR_U32(ctx, 31, 0x3314E8u);
    ctx->pc = 0x3314E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3314E0u;
    // 0x3314e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x3314E0u, 0x3314E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3314E8u;
label_3314e8:
    // 0x3314e8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x3314e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_3314ec:
    // 0x3314ec: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3314ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3314f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3314f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3314f4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3314f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3314f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3314f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3314fc: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x3314fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_331500:
    // 0x331500: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x331500u;
    {
        const bool branch_taken_0x331500 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x331504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331500u;
        // 0x331504: 0x276102a  slt         $v0, $s3, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331500) {
            ctx->pc = 0x331510u;
            goto label_331510;
        }
    }
    ctx->pc = 0x331508u;
    // 0x331508: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x331508u;
    {
        const bool branch_taken_0x331508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331508) {
            ctx->pc = 0x33150Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331508u;
            // 0x33150c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331480;
        }
    }
    ctx->pc = 0x331510u;
label_331510:
    // 0x331510: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x331510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x331514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x331518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33151c: 0xc0c929a  jal         func_324A68
    ctx->pc = 0x33151Cu;
    SET_GPR_U32(ctx, 31, 0x331524u);
    ctx->pc = 0x331520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33151Cu;
    // 0x331520: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A68u, 0x33151Cu, 0x331524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331524u;
label_331524:
    // 0x331524: 0xc0c92c0  jal         func_324B00
    ctx->pc = 0x331524u;
    SET_GPR_U32(ctx, 31, 0x33152Cu);
    ctx->pc = 0x331528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331524u;
    // 0x331528: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324B00u, 0x331524u, 0x33152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33152Cu;
label_33152c:
    // 0x33152c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x33152Cu;
    SET_GPR_U32(ctx, 31, 0x331534u);
    ctx->pc = 0x331530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33152Cu;
    // 0x331530: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x33152Cu, 0x331534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331534u;
label_331534:
    // 0x331534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x331534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331538: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x331538u;
    SET_GPR_U32(ctx, 31, 0x331540u);
    ctx->pc = 0x33153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331538u;
    // 0x33153c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x331538u, 0x331540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331540u;
label_331540:
    // 0x331540: 0x7bb005c0  lq          $s0, 0x5C0($sp)
    ctx->pc = 0x331540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x331544: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331548: 0x7bb105b0  lq          $s1, 0x5B0($sp)
    ctx->pc = 0x331548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x33154c: 0x7bb205a0  lq          $s2, 0x5A0($sp)
    ctx->pc = 0x33154cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x331550: 0x7bb30590  lq          $s3, 0x590($sp)
    ctx->pc = 0x331550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x331554: 0x7bb40580  lq          $s4, 0x580($sp)
    ctx->pc = 0x331554u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x331558: 0x7bb50570  lq          $s5, 0x570($sp)
    ctx->pc = 0x331558u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x33155c: 0x7bb60560  lq          $s6, 0x560($sp)
    ctx->pc = 0x33155cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
    // 0x331560: 0x7bb70550  lq          $s7, 0x550($sp)
    ctx->pc = 0x331560u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x331564: 0x7bbe0540  lq          $fp, 0x540($sp)
    ctx->pc = 0x331564u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x331568: 0xdfbf0530  ld          $ra, 0x530($sp)
    ctx->pc = 0x331568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x33156c: 0x3e00008  jr          $ra
    ctx->pc = 0x33156Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33156Cu;
        // 0x331570: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33156Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331574u;
    // 0x331574: 0x0  nop
    ctx->pc = 0x331574u;
    // NOP
    ctx->pc = 0x331578u;
}
