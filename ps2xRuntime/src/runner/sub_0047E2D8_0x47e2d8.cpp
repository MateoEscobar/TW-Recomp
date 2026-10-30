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

// Function: sub_0047E2D8
// Address: 0x47e2d8 - 0x47e488
void sub_0047E2D8_0x47e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E2D8_0x47e2d8");
#endif

    switch (ctx->pc) {
        case 0x47e2d8u: goto label_47e2d8;
        case 0x47e2dcu: goto label_47e2dc;
        case 0x47e2e0u: goto label_47e2e0;
        case 0x47e2e4u: goto label_47e2e4;
        case 0x47e2e8u: goto label_47e2e8;
        case 0x47e2ecu: goto label_47e2ec;
        case 0x47e2f0u: goto label_47e2f0;
        case 0x47e2f4u: goto label_47e2f4;
        case 0x47e2f8u: goto label_47e2f8;
        case 0x47e2fcu: goto label_47e2fc;
        case 0x47e300u: goto label_47e300;
        case 0x47e304u: goto label_47e304;
        case 0x47e308u: goto label_47e308;
        case 0x47e30cu: goto label_47e30c;
        case 0x47e310u: goto label_47e310;
        case 0x47e314u: goto label_47e314;
        case 0x47e318u: goto label_47e318;
        case 0x47e31cu: goto label_47e31c;
        case 0x47e320u: goto label_47e320;
        case 0x47e324u: goto label_47e324;
        case 0x47e328u: goto label_47e328;
        case 0x47e32cu: goto label_47e32c;
        case 0x47e330u: goto label_47e330;
        case 0x47e334u: goto label_47e334;
        case 0x47e338u: goto label_47e338;
        case 0x47e33cu: goto label_47e33c;
        case 0x47e340u: goto label_47e340;
        case 0x47e344u: goto label_47e344;
        case 0x47e348u: goto label_47e348;
        case 0x47e34cu: goto label_47e34c;
        case 0x47e350u: goto label_47e350;
        case 0x47e354u: goto label_47e354;
        case 0x47e358u: goto label_47e358;
        case 0x47e35cu: goto label_47e35c;
        case 0x47e360u: goto label_47e360;
        case 0x47e364u: goto label_47e364;
        case 0x47e368u: goto label_47e368;
        case 0x47e36cu: goto label_47e36c;
        case 0x47e370u: goto label_47e370;
        case 0x47e374u: goto label_47e374;
        case 0x47e378u: goto label_47e378;
        case 0x47e37cu: goto label_47e37c;
        case 0x47e380u: goto label_47e380;
        case 0x47e384u: goto label_47e384;
        case 0x47e388u: goto label_47e388;
        case 0x47e38cu: goto label_47e38c;
        case 0x47e390u: goto label_47e390;
        case 0x47e394u: goto label_47e394;
        case 0x47e398u: goto label_47e398;
        case 0x47e39cu: goto label_47e39c;
        case 0x47e3a0u: goto label_47e3a0;
        case 0x47e3a4u: goto label_47e3a4;
        case 0x47e3a8u: goto label_47e3a8;
        case 0x47e3acu: goto label_47e3ac;
        case 0x47e3b0u: goto label_47e3b0;
        case 0x47e3b4u: goto label_47e3b4;
        case 0x47e3b8u: goto label_47e3b8;
        case 0x47e3bcu: goto label_47e3bc;
        case 0x47e3c0u: goto label_47e3c0;
        case 0x47e3c4u: goto label_47e3c4;
        case 0x47e3c8u: goto label_47e3c8;
        case 0x47e3ccu: goto label_47e3cc;
        case 0x47e3d0u: goto label_47e3d0;
        case 0x47e3d4u: goto label_47e3d4;
        case 0x47e3d8u: goto label_47e3d8;
        case 0x47e3dcu: goto label_47e3dc;
        case 0x47e3e0u: goto label_47e3e0;
        case 0x47e3e4u: goto label_47e3e4;
        case 0x47e3e8u: goto label_47e3e8;
        case 0x47e3ecu: goto label_47e3ec;
        case 0x47e3f0u: goto label_47e3f0;
        case 0x47e3f4u: goto label_47e3f4;
        case 0x47e3f8u: goto label_47e3f8;
        case 0x47e3fcu: goto label_47e3fc;
        case 0x47e400u: goto label_47e400;
        case 0x47e404u: goto label_47e404;
        case 0x47e408u: goto label_47e408;
        case 0x47e40cu: goto label_47e40c;
        case 0x47e410u: goto label_47e410;
        case 0x47e414u: goto label_47e414;
        case 0x47e418u: goto label_47e418;
        case 0x47e41cu: goto label_47e41c;
        case 0x47e420u: goto label_47e420;
        case 0x47e424u: goto label_47e424;
        case 0x47e428u: goto label_47e428;
        case 0x47e42cu: goto label_47e42c;
        case 0x47e430u: goto label_47e430;
        case 0x47e434u: goto label_47e434;
        case 0x47e438u: goto label_47e438;
        case 0x47e43cu: goto label_47e43c;
        case 0x47e440u: goto label_47e440;
        case 0x47e444u: goto label_47e444;
        case 0x47e448u: goto label_47e448;
        case 0x47e44cu: goto label_47e44c;
        case 0x47e450u: goto label_47e450;
        case 0x47e454u: goto label_47e454;
        case 0x47e458u: goto label_47e458;
        case 0x47e45cu: goto label_47e45c;
        case 0x47e460u: goto label_47e460;
        case 0x47e464u: goto label_47e464;
        case 0x47e468u: goto label_47e468;
        case 0x47e46cu: goto label_47e46c;
        case 0x47e470u: goto label_47e470;
        case 0x47e474u: goto label_47e474;
        case 0x47e478u: goto label_47e478;
        case 0x47e47cu: goto label_47e47c;
        case 0x47e480u: goto label_47e480;
        case 0x47e484u: goto label_47e484;
        default: break;
    }

    ctx->pc = 0x47e2d8u;

label_47e2d8:
    // 0x47e2d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47e2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_47e2dc:
    // 0x47e2dc: 0x8f8285d4  lw          $v0, -0x7A2C($gp)
    ctx->pc = 0x47e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_47e2e0:
    // 0x47e2e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x47e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_47e2e4:
    // 0x47e2e4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x47e2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_47e2e8:
    // 0x47e2e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47e2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e2ec:
    // 0x47e2ec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x47e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_47e2f0:
    // 0x47e2f0: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x47e2f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_47e2f4:
    // 0x47e2f4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x47e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_47e2f8:
    // 0x47e2f8: 0xe2880b  movn        $s1, $a3, $v0
    ctx->pc = 0x47e2f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_47e2fc:
    // 0x47e2fc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x47e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_47e300:
    // 0x47e300: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47e300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47e304:
    // 0x47e304: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47e308:
    // 0x47e308: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x47e308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47e30c:
    // 0x47e30c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x47e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_47e310:
    // 0x47e310: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x47e310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_47e314:
    // 0x47e314: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x47e314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_47e318:
    // 0x47e318: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x47e318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_47e31c:
    // 0x47e31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47e31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47e320:
    // 0x47e320: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
label_47e324:
    if (ctx->pc == 0x47E324u) {
        ctx->pc = 0x47E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E320u;
        // 0x47e324: 0xc6a80b  movn        $s5, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E328u;
        goto label_47e328;
    }
    ctx->pc = 0x47E320u;
    {
        const bool branch_taken_0x47e320 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x47E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E320u;
        // 0x47e324: 0xc6a80b  movn        $s5, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e320) {
            ctx->pc = 0x47E384u;
            goto label_47e384;
        }
    }
    ctx->pc = 0x47E328u;
label_47e328:
    // 0x47e328: 0x8f8485dc  lw          $a0, -0x7A24($gp)
    ctx->pc = 0x47e328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
label_47e32c:
    // 0x47e32c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_47e330:
    if (ctx->pc == 0x47E330u) {
        ctx->pc = 0x47E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E32Cu;
        // 0x47e330: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E334u;
        goto label_47e334;
    }
    ctx->pc = 0x47E32Cu;
    {
        const bool branch_taken_0x47e32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E32Cu;
        // 0x47e330: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e32c) {
            ctx->pc = 0x47E344u;
            goto label_47e344;
        }
    }
    ctx->pc = 0x47E334u;
label_47e334:
    // 0x47e334: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x47e334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_47e338:
    // 0x47e338: 0x8c62ae30  lw          $v0, -0x51D0($v1)
    ctx->pc = 0x47e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946352)));
label_47e33c:
    // 0x47e33c: 0x10000006  b           . + 4 + (0x6 << 2)
label_47e340:
    if (ctx->pc == 0x47E340u) {
        ctx->pc = 0x47E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E33Cu;
        // 0x47e340: 0x2852824  and         $a1, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E344u;
        goto label_47e344;
    }
    ctx->pc = 0x47E33Cu;
    {
        const bool branch_taken_0x47e33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E33Cu;
        // 0x47e340: 0x2852824  and         $a1, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e33c) {
            ctx->pc = 0x47E358u;
            goto label_47e358;
        }
    }
    ctx->pc = 0x47E344u;
label_47e344:
    // 0x47e344: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47e344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47e348:
    // 0x47e348: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x47e348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_47e34c:
    // 0x47e34c: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x47e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_47e350:
    // 0x47e350: 0x2852824  and         $a1, $s4, $a1
    ctx->pc = 0x47e350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
label_47e354:
    // 0x47e354: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x47e354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_47e358:
    // 0x47e358: 0x40f809  jalr        $v0
label_47e35c:
    if (ctx->pc == 0x47E35Cu) {
        ctx->pc = 0x47E360u;
        goto label_47e360;
    }
    ctx->pc = 0x47E358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E360u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E358u, 0x47E360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E360u;
label_47e360:
    // 0x47e360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47e360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e364:
    // 0x47e364: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
label_47e368:
    if (ctx->pc == 0x47E368u) {
        ctx->pc = 0x47E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E364u;
        // 0x47e368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E36Cu;
        goto label_47e36c;
    }
    ctx->pc = 0x47E364u;
    {
        const bool branch_taken_0x47e364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E364u;
        // 0x47e368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e364) {
            ctx->pc = 0x47E45Cu;
            goto label_47e45c;
        }
    }
    ctx->pc = 0x47E36Cu;
label_47e36c:
    // 0x47e36c: 0x10000006  b           . + 4 + (0x6 << 2)
label_47e370:
    if (ctx->pc == 0x47E370u) {
        ctx->pc = 0x47E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E36Cu;
        // 0x47e370: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E374u;
        goto label_47e374;
    }
    ctx->pc = 0x47E36Cu;
    {
        const bool branch_taken_0x47e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E36Cu;
        // 0x47e370: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e36c) {
            ctx->pc = 0x47E388u;
            goto label_47e388;
        }
    }
    ctx->pc = 0x47E374u;
label_47e374:
    // 0x47e374: 0xc11f886  jal         func_47E218
label_47e378:
    if (ctx->pc == 0x47E378u) {
        ctx->pc = 0x47E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E374u;
        // 0x47e378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E37Cu;
        goto label_47e37c;
    }
    ctx->pc = 0x47E374u;
    SET_GPR_U32(ctx, 31, 0x47E37Cu);
    ctx->pc = 0x47E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E374u;
    // 0x47e378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E218u, 0x47E374u, 0x47E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E37Cu;
label_47e37c:
    // 0x47e37c: 0x10000037  b           . + 4 + (0x37 << 2)
label_47e380:
    if (ctx->pc == 0x47E380u) {
        ctx->pc = 0x47E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E37Cu;
        // 0x47e380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E384u;
        goto label_47e384;
    }
    ctx->pc = 0x47E37Cu;
    {
        const bool branch_taken_0x47e37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E37Cu;
        // 0x47e380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e37c) {
            ctx->pc = 0x47E45Cu;
            goto label_47e45c;
        }
    }
    ctx->pc = 0x47E384u;
label_47e384:
    // 0x47e384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e388:
    // 0x47e388: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x47e388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_47e38c:
    // 0x47e38c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x47e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_47e390:
    // 0x47e390: 0x152023  negu        $a0, $s5
    ctx->pc = 0x47e390u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
label_47e394:
    // 0x47e394: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x47e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_47e398:
    // 0x47e398: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x47e398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_47e39c:
    // 0x47e39c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x47e39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_47e3a0:
    // 0x47e3a0: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x47e3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_47e3a4:
    // 0x47e3a4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x47e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_47e3a8:
    // 0x47e3a8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x47e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_47e3ac:
    // 0x47e3ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x47e3acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e3b0:
    // 0x47e3b0: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x47e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_47e3b4:
    // 0x47e3b4: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x47e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
label_47e3b8:
    // 0x47e3b8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x47e3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_47e3bc:
    // 0x47e3bc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x47e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_47e3c0:
    // 0x47e3c0: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_47e3c4:
    if (ctx->pc == 0x47E3C4u) {
        ctx->pc = 0x47E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E3C0u;
        // 0x47e3c4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E3C8u;
        goto label_47e3c8;
    }
    ctx->pc = 0x47E3C0u;
    {
        const bool branch_taken_0x47e3c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E3C0u;
        // 0x47e3c4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e3c0) {
            ctx->pc = 0x47E438u;
            goto label_47e438;
        }
    }
    ctx->pc = 0x47E3C8u;
label_47e3c8:
    // 0x47e3c8: 0x2641018  mult        $v0, $s3, $a0
    ctx->pc = 0x47e3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_47e3cc:
    // 0x47e3cc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47e3d0:
    // 0x47e3d0: 0x2477ad18  addiu       $s7, $v1, -0x52E8
    ctx->pc = 0x47e3d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_47e3d4:
    // 0x47e3d4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x47e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_47e3d8:
    // 0x47e3d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47e3dc:
    // 0x47e3dc: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x47e3dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_47e3e0:
    // 0x47e3e0: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x47e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_47e3e4:
    // 0x47e3e4: 0x0  nop
    ctx->pc = 0x47e3e4u;
    // NOP
label_47e3e8:
    // 0x47e3e8: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x47e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_47e3ec:
    // 0x47e3ec: 0x40f809  jalr        $v0
label_47e3f0:
    if (ctx->pc == 0x47E3F0u) {
        ctx->pc = 0x47E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E3ECu;
        // 0x47e3f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E3F4u;
        goto label_47e3f4;
    }
    ctx->pc = 0x47E3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E3F4u);
        ctx->pc = 0x47E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E3ECu;
        // 0x47e3f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E3ECu, 0x47E3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E3F4u;
label_47e3f4:
    // 0x47e3f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x47e3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47e3f8:
    // 0x47e3f8: 0x10e0ffde  beqz        $a3, . + 4 + (-0x22 << 2)
label_47e3fc:
    if (ctx->pc == 0x47E3FCu) {
        ctx->pc = 0x47E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E3F8u;
        // 0x47e3fc: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E400u;
        goto label_47e400;
    }
    ctx->pc = 0x47E3F8u;
    {
        const bool branch_taken_0x47e3f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E3F8u;
        // 0x47e3fc: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e3f8) {
            ctx->pc = 0x47E374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e374;
        }
    }
    ctx->pc = 0x47E400u;
label_47e400:
    // 0x47e400: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x47e400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_47e404:
    // 0x47e404: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x47e404u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_47e408:
    // 0x47e408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47e408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47e40c:
    // 0x47e40c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x47e40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47e410:
    // 0x47e410: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x47e410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_47e414:
    // 0x47e414: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x47e414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47e418:
    // 0x47e418: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x47e418u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
label_47e41c:
    // 0x47e41c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x47e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_47e420:
    // 0x47e420: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47e424:
    // 0x47e424: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x47e424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_47e428:
    // 0x47e428: 0xc10c1fa  jal         func_4307E8
label_47e42c:
    if (ctx->pc == 0x47E42Cu) {
        ctx->pc = 0x47E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E428u;
        // 0x47e42c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E430u;
        goto label_47e430;
    }
    ctx->pc = 0x47E428u;
    SET_GPR_U32(ctx, 31, 0x47E430u);
    ctx->pc = 0x47E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47E428u;
    // 0x47e42c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x47E428u, 0x47E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E430u;
label_47e430:
    // 0x47e430: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_47e434:
    if (ctx->pc == 0x47E434u) {
        ctx->pc = 0x47E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E430u;
        // 0x47e434: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E438u;
        goto label_47e438;
    }
    ctx->pc = 0x47E430u;
    {
        const bool branch_taken_0x47e430 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e430) {
            ctx->pc = 0x47E434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E430u;
            // 0x47e434: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e3e8;
        }
    }
    ctx->pc = 0x47E438u;
label_47e438:
    // 0x47e438: 0x8f838930  lw          $v1, -0x76D0($gp)
    ctx->pc = 0x47e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_47e43c:
    // 0x47e43c: 0x27828930  addiu       $v0, $gp, -0x76D0
    ctx->pc = 0x47e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936880));
label_47e440:
    // 0x47e440: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x47e440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_47e444:
    // 0x47e444: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x47e444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_47e448:
    // 0x47e448: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x47e448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_47e44c:
    // 0x47e44c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47e44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47e450:
    // 0x47e450: 0x8f838930  lw          $v1, -0x76D0($gp)
    ctx->pc = 0x47e450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_47e454:
    // 0x47e454: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x47e454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_47e458:
    // 0x47e458: 0xaf848930  sw          $a0, -0x76D0($gp)
    ctx->pc = 0x47e458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 4));
label_47e45c:
    // 0x47e45c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x47e45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47e460:
    // 0x47e460: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x47e460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47e464:
    // 0x47e464: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x47e464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47e468:
    // 0x47e468: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x47e468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47e46c:
    // 0x47e46c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47e46cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47e470:
    // 0x47e470: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x47e470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47e474:
    // 0x47e474: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x47e474u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47e478:
    // 0x47e478: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x47e478u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47e47c:
    // 0x47e47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47e47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47e480:
    // 0x47e480: 0x3e00008  jr          $ra
label_47e484:
    if (ctx->pc == 0x47E484u) {
        ctx->pc = 0x47E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E480u;
        // 0x47e484: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E488u;
        goto label_fallthrough_0x47e480;
    }
    ctx->pc = 0x47E480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E480u;
        // 0x47e484: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47e480:
    ctx->pc = 0x47E488u;
}
