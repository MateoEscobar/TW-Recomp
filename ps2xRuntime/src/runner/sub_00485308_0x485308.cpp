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

// Function: sub_00485308
// Address: 0x485308 - 0x4854c8
void sub_00485308_0x485308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485308_0x485308");
#endif

    switch (ctx->pc) {
        case 0x485308u: goto label_485308;
        case 0x48530cu: goto label_48530c;
        case 0x485310u: goto label_485310;
        case 0x485314u: goto label_485314;
        case 0x485318u: goto label_485318;
        case 0x48531cu: goto label_48531c;
        case 0x485320u: goto label_485320;
        case 0x485324u: goto label_485324;
        case 0x485328u: goto label_485328;
        case 0x48532cu: goto label_48532c;
        case 0x485330u: goto label_485330;
        case 0x485334u: goto label_485334;
        case 0x485338u: goto label_485338;
        case 0x48533cu: goto label_48533c;
        case 0x485340u: goto label_485340;
        case 0x485344u: goto label_485344;
        case 0x485348u: goto label_485348;
        case 0x48534cu: goto label_48534c;
        case 0x485350u: goto label_485350;
        case 0x485354u: goto label_485354;
        case 0x485358u: goto label_485358;
        case 0x48535cu: goto label_48535c;
        case 0x485360u: goto label_485360;
        case 0x485364u: goto label_485364;
        case 0x485368u: goto label_485368;
        case 0x48536cu: goto label_48536c;
        case 0x485370u: goto label_485370;
        case 0x485374u: goto label_485374;
        case 0x485378u: goto label_485378;
        case 0x48537cu: goto label_48537c;
        case 0x485380u: goto label_485380;
        case 0x485384u: goto label_485384;
        case 0x485388u: goto label_485388;
        case 0x48538cu: goto label_48538c;
        case 0x485390u: goto label_485390;
        case 0x485394u: goto label_485394;
        case 0x485398u: goto label_485398;
        case 0x48539cu: goto label_48539c;
        case 0x4853a0u: goto label_4853a0;
        case 0x4853a4u: goto label_4853a4;
        case 0x4853a8u: goto label_4853a8;
        case 0x4853acu: goto label_4853ac;
        case 0x4853b0u: goto label_4853b0;
        case 0x4853b4u: goto label_4853b4;
        case 0x4853b8u: goto label_4853b8;
        case 0x4853bcu: goto label_4853bc;
        case 0x4853c0u: goto label_4853c0;
        case 0x4853c4u: goto label_4853c4;
        case 0x4853c8u: goto label_4853c8;
        case 0x4853ccu: goto label_4853cc;
        case 0x4853d0u: goto label_4853d0;
        case 0x4853d4u: goto label_4853d4;
        case 0x4853d8u: goto label_4853d8;
        case 0x4853dcu: goto label_4853dc;
        case 0x4853e0u: goto label_4853e0;
        case 0x4853e4u: goto label_4853e4;
        case 0x4853e8u: goto label_4853e8;
        case 0x4853ecu: goto label_4853ec;
        case 0x4853f0u: goto label_4853f0;
        case 0x4853f4u: goto label_4853f4;
        case 0x4853f8u: goto label_4853f8;
        case 0x4853fcu: goto label_4853fc;
        case 0x485400u: goto label_485400;
        case 0x485404u: goto label_485404;
        case 0x485408u: goto label_485408;
        case 0x48540cu: goto label_48540c;
        case 0x485410u: goto label_485410;
        case 0x485414u: goto label_485414;
        case 0x485418u: goto label_485418;
        case 0x48541cu: goto label_48541c;
        case 0x485420u: goto label_485420;
        case 0x485424u: goto label_485424;
        case 0x485428u: goto label_485428;
        case 0x48542cu: goto label_48542c;
        case 0x485430u: goto label_485430;
        case 0x485434u: goto label_485434;
        case 0x485438u: goto label_485438;
        case 0x48543cu: goto label_48543c;
        case 0x485440u: goto label_485440;
        case 0x485444u: goto label_485444;
        case 0x485448u: goto label_485448;
        case 0x48544cu: goto label_48544c;
        case 0x485450u: goto label_485450;
        case 0x485454u: goto label_485454;
        case 0x485458u: goto label_485458;
        case 0x48545cu: goto label_48545c;
        case 0x485460u: goto label_485460;
        case 0x485464u: goto label_485464;
        case 0x485468u: goto label_485468;
        case 0x48546cu: goto label_48546c;
        case 0x485470u: goto label_485470;
        case 0x485474u: goto label_485474;
        case 0x485478u: goto label_485478;
        case 0x48547cu: goto label_48547c;
        case 0x485480u: goto label_485480;
        case 0x485484u: goto label_485484;
        case 0x485488u: goto label_485488;
        case 0x48548cu: goto label_48548c;
        case 0x485490u: goto label_485490;
        case 0x485494u: goto label_485494;
        case 0x485498u: goto label_485498;
        case 0x48549cu: goto label_48549c;
        case 0x4854a0u: goto label_4854a0;
        case 0x4854a4u: goto label_4854a4;
        case 0x4854a8u: goto label_4854a8;
        case 0x4854acu: goto label_4854ac;
        case 0x4854b0u: goto label_4854b0;
        case 0x4854b4u: goto label_4854b4;
        case 0x4854b8u: goto label_4854b8;
        case 0x4854bcu: goto label_4854bc;
        case 0x4854c0u: goto label_4854c0;
        case 0x4854c4u: goto label_4854c4;
        default: break;
    }

    ctx->pc = 0x485308u;

label_485308:
    // 0x485308: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x485308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_48530c:
    // 0x48530c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x48530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_485310:
    // 0x485310: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x485310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_485314:
    // 0x485314: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x485314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_485318:
    // 0x485318: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x485318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_48531c:
    // 0x48531c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_485320:
    // 0x485320: 0xc121478  jal         func_4851E0
label_485324:
    if (ctx->pc == 0x485324u) {
        ctx->pc = 0x485324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485320u;
        // 0x485324: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485328u;
        goto label_485328;
    }
    ctx->pc = 0x485320u;
    SET_GPR_U32(ctx, 31, 0x485328u);
    ctx->pc = 0x485324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485320u;
    // 0x485324: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4851E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4851E0u, 0x485320u, 0x485328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485328u;
label_485328:
    // 0x485328: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x485328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48532c:
    // 0x48532c: 0x1220005e  beqz        $s1, . + 4 + (0x5E << 2)
label_485330:
    if (ctx->pc == 0x485330u) {
        ctx->pc = 0x485330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48532Cu;
        // 0x485330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485334u;
        goto label_485334;
    }
    ctx->pc = 0x48532Cu;
    {
        const bool branch_taken_0x48532c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x485330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48532Cu;
        // 0x485330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48532c) {
            ctx->pc = 0x4854A8u;
            goto label_4854a8;
        }
    }
    ctx->pc = 0x485334u;
label_485334:
    // 0x485334: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
label_485338:
    if (ctx->pc == 0x485338u) {
        ctx->pc = 0x485338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485334u;
        // 0x485338: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48533Cu;
        goto label_48533c;
    }
    ctx->pc = 0x485334u;
    {
        const bool branch_taken_0x485334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x485338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485334u;
        // 0x485338: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485334) {
            ctx->pc = 0x4854A8u;
            goto label_4854a8;
        }
    }
    ctx->pc = 0x48533Cu;
label_48533c:
    // 0x48533c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x48533cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_485340:
    // 0x485340: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_485344:
    if (ctx->pc == 0x485344u) {
        ctx->pc = 0x485344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485340u;
        // 0x485344: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485348u;
        goto label_485348;
    }
    ctx->pc = 0x485340u;
    {
        const bool branch_taken_0x485340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485340u;
        // 0x485344: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485340) {
            ctx->pc = 0x4854A8u;
            goto label_4854a8;
        }
    }
    ctx->pc = 0x485348u;
label_485348:
    // 0x485348: 0xc121478  jal         func_4851E0
label_48534c:
    if (ctx->pc == 0x48534Cu) {
        ctx->pc = 0x48534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485348u;
        // 0x48534c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485350u;
        goto label_485350;
    }
    ctx->pc = 0x485348u;
    SET_GPR_U32(ctx, 31, 0x485350u);
    ctx->pc = 0x48534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485348u;
    // 0x48534c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4851E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4851E0u, 0x485348u, 0x485350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485350u;
label_485350:
    // 0x485350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x485350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485354:
    // 0x485354: 0x16000015  bnez        $s0, . + 4 + (0x15 << 2)
label_485358:
    if (ctx->pc == 0x485358u) {
        ctx->pc = 0x48535Cu;
        goto label_48535c;
    }
    ctx->pc = 0x485354u;
    {
        const bool branch_taken_0x485354 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x485354) {
            ctx->pc = 0x4853ACu;
            goto label_4853ac;
        }
    }
    ctx->pc = 0x48535Cu;
label_48535c:
    // 0x48535c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x48535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_485360:
    // 0x485360: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x485360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_485364:
    // 0x485364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_485368:
    if (ctx->pc == 0x485368u) {
        ctx->pc = 0x485368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485364u;
        // 0x485368: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48536Cu;
        goto label_48536c;
    }
    ctx->pc = 0x485364u;
    {
        const bool branch_taken_0x485364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485364u;
        // 0x485368: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485364) {
            ctx->pc = 0x485378u;
            goto label_485378;
        }
    }
    ctx->pc = 0x48536Cu;
label_48536c:
    // 0x48536c: 0xc1216aa  jal         func_485AA8
label_485370:
    if (ctx->pc == 0x485370u) {
        ctx->pc = 0x485370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48536Cu;
        // 0x485370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485374u;
        goto label_485374;
    }
    ctx->pc = 0x48536Cu;
    SET_GPR_U32(ctx, 31, 0x485374u);
    ctx->pc = 0x485370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48536Cu;
    // 0x485370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AA8u, 0x48536Cu, 0x485374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485374u;
label_485374:
    // 0x485374: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x485374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_485378:
    // 0x485378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x485378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48537c:
    // 0x48537c: 0xc11ffb4  jal         func_47FED0
label_485380:
    if (ctx->pc == 0x485380u) {
        ctx->pc = 0x485380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48537Cu;
        // 0x485380: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485384u;
        goto label_485384;
    }
    ctx->pc = 0x48537Cu;
    SET_GPR_U32(ctx, 31, 0x485384u);
    ctx->pc = 0x485380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48537Cu;
    // 0x485380: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x48537Cu, 0x485384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485384u;
label_485384:
    // 0x485384: 0x8f868968  lw          $a2, -0x7698($gp)
    ctx->pc = 0x485384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_485388:
    // 0x485388: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x485388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_48538c:
    // 0x48538c: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x48538cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_485390:
    // 0x485390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x485390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485394:
    // 0x485394: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x485394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_485398:
    // 0x485398: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x485398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_48539c:
    // 0x48539c: 0x40f809  jalr        $v0
label_4853a0:
    if (ctx->pc == 0x4853A0u) {
        ctx->pc = 0x4853A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48539Cu;
        // 0x4853a0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4853A4u;
        goto label_4853a4;
    }
    ctx->pc = 0x48539Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4853A4u);
        ctx->pc = 0x4853A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48539Cu;
        // 0x4853a0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48539Cu, 0x4853A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4853A4u;
label_4853a4:
    // 0x4853a4: 0x10000040  b           . + 4 + (0x40 << 2)
label_4853a8:
    if (ctx->pc == 0x4853A8u) {
        ctx->pc = 0x4853A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4853A4u;
        // 0x4853a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4853ACu;
        goto label_4853ac;
    }
    ctx->pc = 0x4853A4u;
    {
        const bool branch_taken_0x4853a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4853A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4853A4u;
        // 0x4853a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4853a4) {
            ctx->pc = 0x4854A8u;
            goto label_4854a8;
        }
    }
    ctx->pc = 0x4853ACu;
label_4853ac:
    // 0x4853ac: 0xc121244  jal         func_484910
label_4853b0:
    if (ctx->pc == 0x4853B0u) {
        ctx->pc = 0x4853B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4853ACu;
        // 0x4853b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4853B4u;
        goto label_4853b4;
    }
    ctx->pc = 0x4853ACu;
    SET_GPR_U32(ctx, 31, 0x4853B4u);
    ctx->pc = 0x4853B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4853ACu;
    // 0x4853b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484910u, 0x4853ACu, 0x4853B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4853B4u;
label_4853b4:
    // 0x4853b4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_4853b8:
    if (ctx->pc == 0x4853B8u) {
        ctx->pc = 0x4853B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4853B4u;
        // 0x4853b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4853BCu;
        goto label_4853bc;
    }
    ctx->pc = 0x4853B4u;
    {
        const bool branch_taken_0x4853b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4853B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4853B4u;
        // 0x4853b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4853b4) {
            ctx->pc = 0x48544Cu;
            goto label_48544c;
        }
    }
    ctx->pc = 0x4853BCu;
label_4853bc:
    // 0x4853bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4853bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4853c0:
    // 0x4853c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4853c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4853c4:
    // 0x4853c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4853c8:
    if (ctx->pc == 0x4853C8u) {
        ctx->pc = 0x4853C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4853C4u;
        // 0x4853c8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4853CCu;
        goto label_4853cc;
    }
    ctx->pc = 0x4853C4u;
    {
        const bool branch_taken_0x4853c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4853C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4853C4u;
        // 0x4853c8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4853c4) {
            ctx->pc = 0x4853D8u;
            goto label_4853d8;
        }
    }
    ctx->pc = 0x4853CCu;
label_4853cc:
    // 0x4853cc: 0xc1216aa  jal         func_485AA8
label_4853d0:
    if (ctx->pc == 0x4853D0u) {
        ctx->pc = 0x4853D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4853CCu;
        // 0x4853d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4853D4u;
        goto label_4853d4;
    }
    ctx->pc = 0x4853CCu;
    SET_GPR_U32(ctx, 31, 0x4853D4u);
    ctx->pc = 0x4853D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4853CCu;
    // 0x4853d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AA8u, 0x4853CCu, 0x4853D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4853D4u;
label_4853d4:
    // 0x4853d4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4853d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4853d8:
    // 0x4853d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4853d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4853dc:
    // 0x4853dc: 0x2453ebd8  addiu       $s3, $v0, -0x1428
    ctx->pc = 0x4853dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962136));
label_4853e0:
    // 0x4853e0: 0xc11ffb4  jal         func_47FED0
label_4853e4:
    if (ctx->pc == 0x4853E4u) {
        ctx->pc = 0x4853E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4853E0u;
        // 0x4853e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4853E8u;
        goto label_4853e8;
    }
    ctx->pc = 0x4853E0u;
    SET_GPR_U32(ctx, 31, 0x4853E8u);
    ctx->pc = 0x4853E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4853E0u;
    // 0x4853e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x4853E0u, 0x4853E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4853E8u;
label_4853e8:
    // 0x4853e8: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x4853e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_4853ec:
    // 0x4853ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4853ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4853f0:
    // 0x4853f0: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x4853f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4853f4:
    // 0x4853f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4853f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4853f8:
    // 0x4853f8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4853f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4853fc:
    // 0x4853fc: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x4853fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_485400:
    // 0x485400: 0x40f809  jalr        $v0
label_485404:
    if (ctx->pc == 0x485404u) {
        ctx->pc = 0x485404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485400u;
        // 0x485404: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485408u;
        goto label_485408;
    }
    ctx->pc = 0x485400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485408u);
        ctx->pc = 0x485404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485400u;
        // 0x485404: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485400u, 0x485408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485408u;
label_485408:
    // 0x485408: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x485408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48540c:
    // 0x48540c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x48540cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_485410:
    // 0x485410: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_485414:
    if (ctx->pc == 0x485414u) {
        ctx->pc = 0x485414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485410u;
        // 0x485414: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485418u;
        goto label_485418;
    }
    ctx->pc = 0x485410u;
    {
        const bool branch_taken_0x485410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x485414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485410u;
        // 0x485414: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485410) {
            ctx->pc = 0x485424u;
            goto label_485424;
        }
    }
    ctx->pc = 0x485418u;
label_485418:
    // 0x485418: 0xc1216aa  jal         func_485AA8
label_48541c:
    if (ctx->pc == 0x48541Cu) {
        ctx->pc = 0x48541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485418u;
        // 0x48541c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485420u;
        goto label_485420;
    }
    ctx->pc = 0x485418u;
    SET_GPR_U32(ctx, 31, 0x485420u);
    ctx->pc = 0x48541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485418u;
    // 0x48541c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AA8u, 0x485418u, 0x485420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485420u;
label_485420:
    // 0x485420: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x485420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_485424:
    // 0x485424: 0xc11ffb4  jal         func_47FED0
label_485428:
    if (ctx->pc == 0x485428u) {
        ctx->pc = 0x485428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485424u;
        // 0x485428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48542Cu;
        goto label_48542c;
    }
    ctx->pc = 0x485424u;
    SET_GPR_U32(ctx, 31, 0x48542Cu);
    ctx->pc = 0x485428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485424u;
    // 0x485428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x485424u, 0x48542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48542Cu;
label_48542c:
    // 0x48542c: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x48542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_485430:
    // 0x485430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x485430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485434:
    // 0x485434: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x485434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_485438:
    // 0x485438: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x485438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_48543c:
    // 0x48543c: 0x40f809  jalr        $v0
label_485440:
    if (ctx->pc == 0x485440u) {
        ctx->pc = 0x485440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48543Cu;
        // 0x485440: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485444u;
        goto label_485444;
    }
    ctx->pc = 0x48543Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485444u);
        ctx->pc = 0x485440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48543Cu;
        // 0x485440: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48543Cu, 0x485444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485444u;
label_485444:
    // 0x485444: 0x10000018  b           . + 4 + (0x18 << 2)
label_485448:
    if (ctx->pc == 0x485448u) {
        ctx->pc = 0x485448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485444u;
        // 0x485448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48544Cu;
        goto label_48544c;
    }
    ctx->pc = 0x485444u;
    {
        const bool branch_taken_0x485444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485444u;
        // 0x485448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485444) {
            ctx->pc = 0x4854A8u;
            goto label_4854a8;
        }
    }
    ctx->pc = 0x48544Cu;
label_48544c:
    // 0x48544c: 0xc121288  jal         func_484A20
label_485450:
    if (ctx->pc == 0x485450u) {
        ctx->pc = 0x485450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48544Cu;
        // 0x485450: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485454u;
        goto label_485454;
    }
    ctx->pc = 0x48544Cu;
    SET_GPR_U32(ctx, 31, 0x485454u);
    ctx->pc = 0x485450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48544Cu;
    // 0x485450: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484A20u, 0x48544Cu, 0x485454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485454u;
label_485454:
    // 0x485454: 0x5040ffda  beql        $v0, $zero, . + 4 + (-0x26 << 2)
label_485458:
    if (ctx->pc == 0x485458u) {
        ctx->pc = 0x485458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485454u;
        // 0x485458: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48545Cu;
        goto label_48545c;
    }
    ctx->pc = 0x485454u;
    {
        const bool branch_taken_0x485454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485454) {
            ctx->pc = 0x485458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x485454u;
            // 0x485458: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4853C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4853c0;
        }
    }
    ctx->pc = 0x48545Cu;
label_48545c:
    // 0x48545c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x48545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_485460:
    // 0x485460: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x485460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_485464:
    // 0x485464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_485468:
    if (ctx->pc == 0x485468u) {
        ctx->pc = 0x485468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485464u;
        // 0x485468: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48546Cu;
        goto label_48546c;
    }
    ctx->pc = 0x485464u;
    {
        const bool branch_taken_0x485464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485464u;
        // 0x485468: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485464) {
            ctx->pc = 0x485478u;
            goto label_485478;
        }
    }
    ctx->pc = 0x48546Cu;
label_48546c:
    // 0x48546c: 0xc1216aa  jal         func_485AA8
label_485470:
    if (ctx->pc == 0x485470u) {
        ctx->pc = 0x485470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48546Cu;
        // 0x485470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485474u;
        goto label_485474;
    }
    ctx->pc = 0x48546Cu;
    SET_GPR_U32(ctx, 31, 0x485474u);
    ctx->pc = 0x485470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48546Cu;
    // 0x485470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AA8u, 0x48546Cu, 0x485474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485474u;
label_485474:
    // 0x485474: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x485474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_485478:
    // 0x485478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x485478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48547c:
    // 0x48547c: 0xc11ffb4  jal         func_47FED0
label_485480:
    if (ctx->pc == 0x485480u) {
        ctx->pc = 0x485480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48547Cu;
        // 0x485480: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485484u;
        goto label_485484;
    }
    ctx->pc = 0x48547Cu;
    SET_GPR_U32(ctx, 31, 0x485484u);
    ctx->pc = 0x485480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48547Cu;
    // 0x485480: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x48547Cu, 0x485484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485484u;
label_485484:
    // 0x485484: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x485484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_485488:
    // 0x485488: 0x8f868968  lw          $a2, -0x7698($gp)
    ctx->pc = 0x485488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_48548c:
    // 0x48548c: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x48548cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_485490:
    // 0x485490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x485490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485494:
    // 0x485494: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x485494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_485498:
    // 0x485498: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x485498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_48549c:
    // 0x48549c: 0x40f809  jalr        $v0
label_4854a0:
    if (ctx->pc == 0x4854A0u) {
        ctx->pc = 0x4854A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48549Cu;
        // 0x4854a0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4854A4u;
        goto label_4854a4;
    }
    ctx->pc = 0x48549Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4854A4u);
        ctx->pc = 0x4854A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48549Cu;
        // 0x4854a0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48549Cu, 0x4854A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4854A4u;
label_4854a4:
    // 0x4854a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4854a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4854a8:
    // 0x4854a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4854a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4854ac:
    // 0x4854ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4854acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4854b0:
    // 0x4854b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4854b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4854b4:
    // 0x4854b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4854b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4854b8:
    // 0x4854b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4854b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4854bc:
    // 0x4854bc: 0x3e00008  jr          $ra
label_4854c0:
    if (ctx->pc == 0x4854C0u) {
        ctx->pc = 0x4854C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4854BCu;
        // 0x4854c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4854C4u;
        goto label_4854c4;
    }
    ctx->pc = 0x4854BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4854C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4854BCu;
        // 0x4854c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4854BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4854C4u;
label_4854c4:
    // 0x4854c4: 0x0  nop
    ctx->pc = 0x4854c4u;
    // NOP
    ctx->pc = 0x4854c8u;
}
