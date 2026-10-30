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

// Function: sub_002482E0
// Address: 0x2482e0 - 0x248428
void sub_002482E0_0x2482e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002482E0_0x2482e0");
#endif

    switch (ctx->pc) {
        case 0x24831cu: goto label_24831c;
        case 0x24832cu: goto label_24832c;
        case 0x24837cu: goto label_24837c;
        case 0x248390u: goto label_248390;
        case 0x2483a8u: goto label_2483a8;
        case 0x2483bcu: goto label_2483bc;
        case 0x2483e8u: goto label_2483e8;
        case 0x2483f8u: goto label_2483f8;
        case 0x248408u: goto label_248408;
        default: break;
    }

    ctx->pc = 0x2482e0u;

    // 0x2482e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2482e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2482e4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2482e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2482e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2482e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2482ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2482ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2482f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2482f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2482f4: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2482f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2482f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2482f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2482fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2482fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x248300: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x248300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x248304: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x248304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x248308: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x248308u;
    {
        const bool branch_taken_0x248308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248308) {
            ctx->pc = 0x2483F0u;
            goto label_2483f0;
        }
    }
    ctx->pc = 0x248310u;
    // 0x248310: 0x3c05cfc7  lui         $a1, 0xCFC7
    ctx->pc = 0x248310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53191 << 16));
    // 0x248314: 0xc089998  jal         func_226660
    ctx->pc = 0x248314u;
    SET_GPR_U32(ctx, 31, 0x24831Cu);
    ctx->pc = 0x248318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248314u;
    // 0x248318: 0x34a5fe7f  ori         $a1, $a1, 0xFE7F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65151);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x248314u, 0x24831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24831Cu;
label_24831c:
    // 0x24831c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x24831Cu;
    {
        const bool branch_taken_0x24831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24831Cu;
        // 0x248320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24831c) {
            ctx->pc = 0x248414u;
            goto label_248414;
        }
    }
    ctx->pc = 0x248324u;
    // 0x248324: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x248324u;
    SET_GPR_U32(ctx, 31, 0x24832Cu);
    ctx->pc = 0x248328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248324u;
    // 0x248328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x248324u, 0x24832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24832Cu;
label_24832c:
    // 0x24832c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x24832Cu;
    {
        const bool branch_taken_0x24832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24832Cu;
        // 0x248330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24832c) {
            ctx->pc = 0x248414u;
            goto label_248414;
        }
    }
    ctx->pc = 0x248334u;
    // 0x248334: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x248334u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x248338: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x248338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x24833c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24833cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x248340: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x248340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x248344: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x248344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x248348: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x248348u;
    {
        const bool branch_taken_0x248348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248348u;
        // 0x24834c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248348) {
            ctx->pc = 0x248414u;
            goto label_248414;
        }
    }
    ctx->pc = 0x248350u;
    // 0x248350: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x248350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x248354: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x248354u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x248358: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x248358u;
    {
        const bool branch_taken_0x248358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248358) {
            ctx->pc = 0x2483CCu;
            goto label_2483cc;
        }
    }
    ctx->pc = 0x248360u;
    // 0x248360: 0x3405f073  ori         $a1, $zero, 0xF073
    ctx->pc = 0x248360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61555);
    // 0x248364: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x248364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x248368: 0x34a5c0af  ori         $a1, $a1, 0xC0AF
    ctx->pc = 0x248368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49327);
    // 0x24836c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x24836cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x248370: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x248370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x248374: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x248374u;
    SET_GPR_U32(ctx, 31, 0x24837Cu);
    ctx->pc = 0x248378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248374u;
    // 0x248378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x248374u, 0x24837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24837Cu;
label_24837c:
    // 0x24837c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x24837Cu;
    {
        const bool branch_taken_0x24837c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24837Cu;
        // 0x248380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24837c) {
            ctx->pc = 0x248414u;
            goto label_248414;
        }
    }
    ctx->pc = 0x248384u;
    // 0x248384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248388: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x248388u;
    SET_GPR_U32(ctx, 31, 0x248390u);
    ctx->pc = 0x24838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248388u;
    // 0x24838c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x248388u, 0x248390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248390u;
label_248390:
    // 0x248390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248390u;
    {
        const bool branch_taken_0x248390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248390u;
        // 0x248394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248390) {
            ctx->pc = 0x2483A0u;
            goto label_2483a0;
        }
    }
    ctx->pc = 0x248398u;
    // 0x248398: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x248398u;
    {
        const bool branch_taken_0x248398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248398u;
        // 0x24839c: 0x240500c4  addiu       $a1, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248398) {
            ctx->pc = 0x2483B4u;
            goto label_2483b4;
        }
    }
    ctx->pc = 0x2483A0u;
label_2483a0:
    // 0x2483a0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2483A0u;
    SET_GPR_U32(ctx, 31, 0x2483A8u);
    ctx->pc = 0x2483A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483A0u;
    // 0x2483a4: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2483A0u, 0x2483A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483A8u;
label_2483a8:
    // 0x2483a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2483A8u;
    {
        const bool branch_taken_0x2483a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2483ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483A8u;
        // 0x2483ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483a8) {
            ctx->pc = 0x2483F0u;
            goto label_2483f0;
        }
    }
    ctx->pc = 0x2483B0u;
    // 0x2483b0: 0x24050164  addiu       $a1, $zero, 0x164
    ctx->pc = 0x2483b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
label_2483b4:
    // 0x2483b4: 0xc08866e  jal         func_2219B8
    ctx->pc = 0x2483B4u;
    SET_GPR_U32(ctx, 31, 0x2483BCu);
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x2483B4u, 0x2483BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483BCu;
label_2483bc:
    // 0x2483bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2483BCu;
    {
        const bool branch_taken_0x2483bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2483C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483BCu;
        // 0x2483c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483bc) {
            ctx->pc = 0x2483F0u;
            goto label_2483f0;
        }
    }
    ctx->pc = 0x2483C4u;
    // 0x2483c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2483C4u;
    {
        const bool branch_taken_0x2483c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2483c4) {
            ctx->pc = 0x248414u;
            goto label_248414;
        }
    }
    ctx->pc = 0x2483CCu;
label_2483cc:
    // 0x2483cc: 0x3405f073  ori         $a1, $zero, 0xF073
    ctx->pc = 0x2483ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61555);
    // 0x2483d0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2483d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2483d4: 0x34a5c3af  ori         $a1, $a1, 0xC3AF
    ctx->pc = 0x2483d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50095);
    // 0x2483d8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2483d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x2483dc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2483dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x2483e0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2483E0u;
    SET_GPR_U32(ctx, 31, 0x2483E8u);
    ctx->pc = 0x2483E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483E0u;
    // 0x2483e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2483E0u, 0x2483E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483E8u;
label_2483e8:
    // 0x2483e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2483E8u;
    {
        const bool branch_taken_0x2483e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2483ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483E8u;
        // 0x2483ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483e8) {
            ctx->pc = 0x248414u;
            goto label_248414;
        }
    }
    ctx->pc = 0x2483F0u;
label_2483f0:
    // 0x2483f0: 0xc08a01c  jal         func_228070
    ctx->pc = 0x2483F0u;
    SET_GPR_U32(ctx, 31, 0x2483F8u);
    ctx->pc = 0x2483F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483F0u;
    // 0x2483f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x2483F0u, 0x2483F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483F8u;
label_2483f8:
    // 0x2483f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2483F8u;
    {
        const bool branch_taken_0x2483f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2483FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483F8u;
        // 0x2483fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483f8) {
            ctx->pc = 0x248414u;
            goto label_248414;
        }
    }
    ctx->pc = 0x248400u;
    // 0x248400: 0xc08a024  jal         func_228090
    ctx->pc = 0x248400u;
    SET_GPR_U32(ctx, 31, 0x248408u);
    ctx->pc = 0x248404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248400u;
    // 0x248404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x248400u, 0x248408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248408u;
label_248408:
    // 0x248408: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x248408u;
    {
        const bool branch_taken_0x248408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248408u;
        // 0x24840c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248408) {
            ctx->pc = 0x248414u;
            goto label_248414;
        }
    }
    ctx->pc = 0x248410u;
    // 0x248410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248414:
    // 0x248414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x248414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24841c: 0x3e00008  jr          $ra
    ctx->pc = 0x24841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24841Cu;
        // 0x248420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24841Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248424u;
    // 0x248424: 0x0  nop
    ctx->pc = 0x248424u;
    // NOP
    ctx->pc = 0x248428u;
}
