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

// Function: sub_00297308
// Address: 0x297308 - 0x297420
void sub_00297308_0x297308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297308_0x297308");
#endif

    switch (ctx->pc) {
        case 0x297308u: goto label_297308;
        case 0x29730cu: goto label_29730c;
        case 0x297310u: goto label_297310;
        case 0x297314u: goto label_297314;
        case 0x297318u: goto label_297318;
        case 0x29731cu: goto label_29731c;
        case 0x297320u: goto label_297320;
        case 0x297324u: goto label_297324;
        case 0x297328u: goto label_297328;
        case 0x29732cu: goto label_29732c;
        case 0x297330u: goto label_297330;
        case 0x297334u: goto label_297334;
        case 0x297338u: goto label_297338;
        case 0x29733cu: goto label_29733c;
        case 0x297340u: goto label_297340;
        case 0x297344u: goto label_297344;
        case 0x297348u: goto label_297348;
        case 0x29734cu: goto label_29734c;
        case 0x297350u: goto label_297350;
        case 0x297354u: goto label_297354;
        case 0x297358u: goto label_297358;
        case 0x29735cu: goto label_29735c;
        case 0x297360u: goto label_297360;
        case 0x297364u: goto label_297364;
        case 0x297368u: goto label_297368;
        case 0x29736cu: goto label_29736c;
        case 0x297370u: goto label_297370;
        case 0x297374u: goto label_297374;
        case 0x297378u: goto label_297378;
        case 0x29737cu: goto label_29737c;
        case 0x297380u: goto label_297380;
        case 0x297384u: goto label_297384;
        case 0x297388u: goto label_297388;
        case 0x29738cu: goto label_29738c;
        case 0x297390u: goto label_297390;
        case 0x297394u: goto label_297394;
        case 0x297398u: goto label_297398;
        case 0x29739cu: goto label_29739c;
        case 0x2973a0u: goto label_2973a0;
        case 0x2973a4u: goto label_2973a4;
        case 0x2973a8u: goto label_2973a8;
        case 0x2973acu: goto label_2973ac;
        case 0x2973b0u: goto label_2973b0;
        case 0x2973b4u: goto label_2973b4;
        case 0x2973b8u: goto label_2973b8;
        case 0x2973bcu: goto label_2973bc;
        case 0x2973c0u: goto label_2973c0;
        case 0x2973c4u: goto label_2973c4;
        case 0x2973c8u: goto label_2973c8;
        case 0x2973ccu: goto label_2973cc;
        case 0x2973d0u: goto label_2973d0;
        case 0x2973d4u: goto label_2973d4;
        case 0x2973d8u: goto label_2973d8;
        case 0x2973dcu: goto label_2973dc;
        case 0x2973e0u: goto label_2973e0;
        case 0x2973e4u: goto label_2973e4;
        case 0x2973e8u: goto label_2973e8;
        case 0x2973ecu: goto label_2973ec;
        case 0x2973f0u: goto label_2973f0;
        case 0x2973f4u: goto label_2973f4;
        case 0x2973f8u: goto label_2973f8;
        case 0x2973fcu: goto label_2973fc;
        case 0x297400u: goto label_297400;
        case 0x297404u: goto label_297404;
        case 0x297408u: goto label_297408;
        case 0x29740cu: goto label_29740c;
        case 0x297410u: goto label_297410;
        case 0x297414u: goto label_297414;
        case 0x297418u: goto label_297418;
        case 0x29741cu: goto label_29741c;
        default: break;
    }

    ctx->pc = 0x297308u;

label_297308:
    // 0x297308: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x297308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_29730c:
    // 0x29730c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x29730cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_297310:
    // 0x297310: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x297310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_297314:
    // 0x297314: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x297314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_297318:
    // 0x297318: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x297318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29731c:
    // 0x29731c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x29731cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_297320:
    // 0x297320: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x297320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_297324:
    // 0x297324: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x297324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_297328:
    // 0x297328: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x297328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_29732c:
    // 0x29732c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29732cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297330:
    // 0x297330: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x297330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_297334:
    // 0x297334: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x297334u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297338:
    // 0x297338: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x297338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_29733c:
    // 0x29733c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x29733cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_297340:
    // 0x297340: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x297340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_297344:
    // 0x297344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_297348:
    // 0x297348: 0xc0a5a72  jal         func_2969C8
label_29734c:
    if (ctx->pc == 0x29734Cu) {
        ctx->pc = 0x29734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297348u;
        // 0x29734c: 0xc4541198  lwc1        $f20, 0x1198($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x297350u;
        goto label_297350;
    }
    ctx->pc = 0x297348u;
    SET_GPR_U32(ctx, 31, 0x297350u);
    ctx->pc = 0x29734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297348u;
    // 0x29734c: 0xc4541198  lwc1        $f20, 0x1198($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297348u, 0x297350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297350u;
label_297350:
    // 0x297350: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x297350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297354:
    // 0x297354: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x297354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_297358:
    // 0x297358: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x297358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29735c:
    // 0x29735c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_297360:
    // 0x297360: 0x40f809  jalr        $v0
label_297364:
    if (ctx->pc == 0x297364u) {
        ctx->pc = 0x297364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297360u;
        // 0x297364: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297368u;
        goto label_297368;
    }
    ctx->pc = 0x297360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x297368u);
        ctx->pc = 0x297364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297360u;
        // 0x297364: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297360u, 0x297368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297368u;
label_297368:
    // 0x297368: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
label_29736c:
    if (ctx->pc == 0x29736Cu) {
        ctx->pc = 0x29736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297368u;
        // 0x29736c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297370u;
        goto label_297370;
    }
    ctx->pc = 0x297368u;
    {
        const bool branch_taken_0x297368 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297368u;
        // 0x29736c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297368) {
            ctx->pc = 0x2973ECu;
            goto label_2973ec;
        }
    }
    ctx->pc = 0x297370u;
label_297370:
    // 0x297370: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x297370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297374:
    // 0x297374: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x297374u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_297378:
    // 0x297378: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x297378u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29737c:
    // 0x29737c: 0x0  nop
    ctx->pc = 0x29737cu;
    // NOP
label_297380:
    // 0x297380: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x297380u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_297384:
    // 0x297384: 0xc087502  jal         func_21D408
label_297388:
    if (ctx->pc == 0x297388u) {
        ctx->pc = 0x297388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297384u;
        // 0x297388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29738Cu;
        goto label_29738c;
    }
    ctx->pc = 0x297384u;
    SET_GPR_U32(ctx, 31, 0x29738Cu);
    ctx->pc = 0x297388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297384u;
    // 0x297388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x297384u, 0x29738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29738Cu;
label_29738c:
    // 0x29738c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29738cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297390:
    // 0x297390: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x297390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_297394:
    // 0x297394: 0xc137882  jal         func_4DE208
label_297398:
    if (ctx->pc == 0x297398u) {
        ctx->pc = 0x297398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297394u;
        // 0x297398: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29739Cu;
        goto label_29739c;
    }
    ctx->pc = 0x297394u;
    SET_GPR_U32(ctx, 31, 0x29739Cu);
    ctx->pc = 0x297398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297394u;
    // 0x297398: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x297394u, 0x29739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29739Cu;
label_29739c:
    // 0x29739c: 0x50570010  beql        $v0, $s7, . + 4 + (0x10 << 2)
label_2973a0:
    if (ctx->pc == 0x2973A0u) {
        ctx->pc = 0x2973A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29739Cu;
        // 0x2973a0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2973A4u;
        goto label_2973a4;
    }
    ctx->pc = 0x29739Cu;
    {
        const bool branch_taken_0x29739c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x29739c) {
            ctx->pc = 0x2973A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29739Cu;
            // 0x2973a0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2973E0u;
            goto label_2973e0;
        }
    }
    ctx->pc = 0x2973A4u;
label_2973a4:
    // 0x2973a4: 0x920202d4  lbu         $v0, 0x2D4($s0)
    ctx->pc = 0x2973a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 724)));
label_2973a8:
    // 0x2973a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2973a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2973ac:
    // 0x2973ac: 0x5056000c  beql        $v0, $s6, . + 4 + (0xC << 2)
label_2973b0:
    if (ctx->pc == 0x2973B0u) {
        ctx->pc = 0x2973B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973ACu;
        // 0x2973b0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2973B4u;
        goto label_2973b4;
    }
    ctx->pc = 0x2973ACu;
    {
        const bool branch_taken_0x2973ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2973ac) {
            ctx->pc = 0x2973B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2973ACu;
            // 0x2973b0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2973E0u;
            goto label_2973e0;
        }
    }
    ctx->pc = 0x2973B4u;
label_2973b4:
    // 0x2973b4: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x2973b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_2973b8:
    // 0x2973b8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2973b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2973bc:
    // 0x2973bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2973c0:
    if (ctx->pc == 0x2973C0u) {
        ctx->pc = 0x2973C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973BCu;
        // 0x2973c0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2973C4u;
        goto label_2973c4;
    }
    ctx->pc = 0x2973BCu;
    {
        const bool branch_taken_0x2973bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2973C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973BCu;
        // 0x2973c0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973bc) {
            ctx->pc = 0x2973E0u;
            goto label_2973e0;
        }
    }
    ctx->pc = 0x2973C4u;
label_2973c4:
    // 0x2973c4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2973c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2973c8:
    // 0x2973c8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2973c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2973cc:
    // 0x2973cc: 0x0  nop
    ctx->pc = 0x2973ccu;
    // NOP
label_2973d0:
    // 0x2973d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2973d4:
    if (ctx->pc == 0x2973D4u) {
        ctx->pc = 0x2973D8u;
        goto label_2973d8;
    }
    ctx->pc = 0x2973D0u;
    {
        const bool branch_taken_0x2973d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2973d0) {
            ctx->pc = 0x2973E0u;
            goto label_2973e0;
        }
    }
    ctx->pc = 0x2973D8u;
label_2973d8:
    // 0x2973d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2973d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2973dc:
    // 0x2973dc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2973dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2973e0:
    // 0x2973e0: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x2973e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2973e4:
    // 0x2973e4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2973e8:
    if (ctx->pc == 0x2973E8u) {
        ctx->pc = 0x2973E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973E4u;
        // 0x2973e8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2973ECu;
        goto label_2973ec;
    }
    ctx->pc = 0x2973E4u;
    {
        const bool branch_taken_0x2973e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2973E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973E4u;
        // 0x2973e8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973e4) {
            ctx->pc = 0x297380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297380;
        }
    }
    ctx->pc = 0x2973ECu;
label_2973ec:
    // 0x2973ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2973ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2973f0:
    // 0x2973f0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2973f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2973f4:
    // 0x2973f4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2973f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2973f8:
    // 0x2973f8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2973f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2973fc:
    // 0x2973fc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2973fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_297400:
    // 0x297400: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x297400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_297404:
    // 0x297404: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x297404u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_297408:
    // 0x297408: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x297408u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29740c:
    // 0x29740c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x29740cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_297410:
    // 0x297410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_297414:
    // 0x297414: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x297414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_297418:
    // 0x297418: 0x3e00008  jr          $ra
label_29741c:
    if (ctx->pc == 0x29741Cu) {
        ctx->pc = 0x29741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297418u;
        // 0x29741c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297420u;
        goto label_fallthrough_0x297418;
    }
    ctx->pc = 0x297418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297418u;
        // 0x29741c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x297418:
    ctx->pc = 0x297420u;
}
