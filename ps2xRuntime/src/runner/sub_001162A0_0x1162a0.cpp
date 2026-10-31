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

// Function: sub_001162A0
// Address: 0x1162a0 - 0x116438
void sub_001162A0_0x1162a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001162A0_0x1162a0");
#endif

    switch (ctx->pc) {
        case 0x116300u: goto label_116300;
        case 0x116324u: goto label_116324;
        case 0x116348u: goto label_116348;
        case 0x11635cu: goto label_11635c;
        case 0x116384u: goto label_116384;
        case 0x1163acu: goto label_1163ac;
        case 0x1163c0u: goto label_1163c0;
        case 0x1163e8u: goto label_1163e8;
        case 0x116410u: goto label_116410;
        default: break;
    }

    ctx->pc = 0x1162a0u;

    // 0x1162a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1162a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1162a4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1162a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1162a8: 0x34423a3c  ori         $v0, $v0, 0x3A3C
    ctx->pc = 0x1162a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14908);
    // 0x1162ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1162acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1162b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1162b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1162b4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1162b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1162b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1162b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1162bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1162bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1162c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1162c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1162c4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1162c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1162c8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1162c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1162cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1162ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1162d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1162d4: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x1162d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1162d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1162d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1162dc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1162dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162e0: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1162e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1162e4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1162e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162e8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1162E8u;
    {
        const bool branch_taken_0x1162e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162E8u;
        // 0x1162ec: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162e8) {
            ctx->pc = 0x116348u;
            goto label_116348;
        }
    }
    ctx->pc = 0x1162F0u;
    // 0x1162f0: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1162f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1162f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1162f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162f8: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x1162F8u;
    SET_GPR_U32(ctx, 31, 0x116300u);
    ctx->pc = 0x1162FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162F8u;
    // 0x1162fc: 0x24a57ca8  addiu       $a1, $a1, 0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1162F8u, 0x116300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116300u;
label_116300:
    // 0x116300: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116300u;
    {
        const bool branch_taken_0x116300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116300u;
        // 0x116304: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116300) {
            ctx->pc = 0x116318u;
            goto label_116318;
        }
    }
    ctx->pc = 0x116308u;
    // 0x116308: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x116308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11630c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x116310: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x116310u;
    {
        const bool branch_taken_0x116310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116310u;
        // 0x116314: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116310) {
            ctx->pc = 0x116348u;
            goto label_116348;
        }
    }
    ctx->pc = 0x116318u;
label_116318:
    // 0x116318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11631c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x11631Cu;
    SET_GPR_U32(ctx, 31, 0x116324u);
    ctx->pc = 0x116320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11631Cu;
    // 0x116320: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x11631Cu, 0x116324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116324u;
label_116324:
    // 0x116324: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x116324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x116328: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x116328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x11632c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x11632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x116330: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x116330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x116334: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x116334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x116338: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x116338u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x11633c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x116340: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x116340u;
    SET_GPR_U32(ctx, 31, 0x116348u);
    ctx->pc = 0x116344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116340u;
    // 0x116344: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x116340u, 0x116348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116348u;
label_116348:
    // 0x116348: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x116348u;
    {
        const bool branch_taken_0x116348 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116348u;
        // 0x11634c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116348) {
            ctx->pc = 0x1163ACu;
            goto label_1163ac;
        }
    }
    ctx->pc = 0x116350u;
    // 0x116350: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x116350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x116354: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x116354u;
    SET_GPR_U32(ctx, 31, 0x11635Cu);
    ctx->pc = 0x116358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116354u;
    // 0x116358: 0x24a57ca8  addiu       $a1, $a1, 0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x116354u, 0x11635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11635Cu;
label_11635c:
    // 0x11635c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11635Cu;
    {
        const bool branch_taken_0x11635c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11635Cu;
        // 0x116360: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11635c) {
            ctx->pc = 0x116378u;
            goto label_116378;
        }
    }
    ctx->pc = 0x116364u;
    // 0x116364: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x116364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x116368: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x116368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x11636c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116370: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x116370u;
    {
        const bool branch_taken_0x116370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116370u;
        // 0x116374: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116370) {
            ctx->pc = 0x1163ACu;
            goto label_1163ac;
        }
    }
    ctx->pc = 0x116378u;
label_116378:
    // 0x116378: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x116378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11637c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x11637Cu;
    SET_GPR_U32(ctx, 31, 0x116384u);
    ctx->pc = 0x116380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11637Cu;
    // 0x116380: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x11637Cu, 0x116384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116384u;
label_116384:
    // 0x116384: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x116384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x116388: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x116388u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x11638c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x11638cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x116390: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x116390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x116394: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x116394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x116398: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x116398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11639c: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x11639cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1163a0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1163a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1163a4: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x1163A4u;
    SET_GPR_U32(ctx, 31, 0x1163ACu);
    ctx->pc = 0x1163A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163A4u;
    // 0x1163a8: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x1163A4u, 0x1163ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163ACu;
label_1163ac:
    // 0x1163ac: 0x12a00018  beqz        $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x1163ACu;
    {
        const bool branch_taken_0x1163ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163ACu;
        // 0x1163b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163ac) {
            ctx->pc = 0x116410u;
            goto label_116410;
        }
    }
    ctx->pc = 0x1163B4u;
    // 0x1163b4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1163b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1163b8: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x1163B8u;
    SET_GPR_U32(ctx, 31, 0x1163C0u);
    ctx->pc = 0x1163BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163B8u;
    // 0x1163bc: 0x24a57ca8  addiu       $a1, $a1, 0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1163B8u, 0x1163C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163C0u;
label_1163c0:
    // 0x1163c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1163C0u;
    {
        const bool branch_taken_0x1163c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1163C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163C0u;
        // 0x1163c4: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163c0) {
            ctx->pc = 0x1163DCu;
            goto label_1163dc;
        }
    }
    ctx->pc = 0x1163C8u;
    // 0x1163c8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1163c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1163cc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1163ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1163d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1163d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1163d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1163D4u;
    {
        const bool branch_taken_0x1163d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163D4u;
        // 0x1163d8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163d4) {
            ctx->pc = 0x116410u;
            goto label_116410;
        }
    }
    ctx->pc = 0x1163DCu;
label_1163dc:
    // 0x1163dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1163dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163e0: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1163E0u;
    SET_GPR_U32(ctx, 31, 0x1163E8u);
    ctx->pc = 0x1163E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163E0u;
    // 0x1163e4: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1163E0u, 0x1163E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163E8u;
label_1163e8:
    // 0x1163e8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1163e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1163ec: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x1163ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1163f0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1163f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1163f4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1163f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1163f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1163f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1163fc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1163fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x116400: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x116400u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x116404: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x116404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x116408: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x116408u;
    SET_GPR_U32(ctx, 31, 0x116410u);
    ctx->pc = 0x11640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116408u;
    // 0x11640c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x116408u, 0x116410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116410u;
label_116410:
    // 0x116410: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x116410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116414: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x116414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116418: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x116418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11641c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11641cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116420: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x116420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116424: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x116424u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11642c: 0x3e00008  jr          $ra
    ctx->pc = 0x11642Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11642Cu;
        // 0x116430: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11642Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116434u;
    // 0x116434: 0x0  nop
    ctx->pc = 0x116434u;
    // NOP
    ctx->pc = 0x116438u;
}
