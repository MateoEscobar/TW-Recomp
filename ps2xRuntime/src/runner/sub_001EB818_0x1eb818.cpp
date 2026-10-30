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

// Function: sub_001EB818
// Address: 0x1eb818 - 0x1eb9c8
void sub_001EB818_0x1eb818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB818_0x1eb818");
#endif

    switch (ctx->pc) {
        case 0x1eb818u: goto label_1eb818;
        case 0x1eb81cu: goto label_1eb81c;
        case 0x1eb820u: goto label_1eb820;
        case 0x1eb824u: goto label_1eb824;
        case 0x1eb828u: goto label_1eb828;
        case 0x1eb82cu: goto label_1eb82c;
        case 0x1eb830u: goto label_1eb830;
        case 0x1eb834u: goto label_1eb834;
        case 0x1eb838u: goto label_1eb838;
        case 0x1eb83cu: goto label_1eb83c;
        case 0x1eb840u: goto label_1eb840;
        case 0x1eb844u: goto label_1eb844;
        case 0x1eb848u: goto label_1eb848;
        case 0x1eb84cu: goto label_1eb84c;
        case 0x1eb850u: goto label_1eb850;
        case 0x1eb854u: goto label_1eb854;
        case 0x1eb858u: goto label_1eb858;
        case 0x1eb85cu: goto label_1eb85c;
        case 0x1eb860u: goto label_1eb860;
        case 0x1eb864u: goto label_1eb864;
        case 0x1eb868u: goto label_1eb868;
        case 0x1eb86cu: goto label_1eb86c;
        case 0x1eb870u: goto label_1eb870;
        case 0x1eb874u: goto label_1eb874;
        case 0x1eb878u: goto label_1eb878;
        case 0x1eb87cu: goto label_1eb87c;
        case 0x1eb880u: goto label_1eb880;
        case 0x1eb884u: goto label_1eb884;
        case 0x1eb888u: goto label_1eb888;
        case 0x1eb88cu: goto label_1eb88c;
        case 0x1eb890u: goto label_1eb890;
        case 0x1eb894u: goto label_1eb894;
        case 0x1eb898u: goto label_1eb898;
        case 0x1eb89cu: goto label_1eb89c;
        case 0x1eb8a0u: goto label_1eb8a0;
        case 0x1eb8a4u: goto label_1eb8a4;
        case 0x1eb8a8u: goto label_1eb8a8;
        case 0x1eb8acu: goto label_1eb8ac;
        case 0x1eb8b0u: goto label_1eb8b0;
        case 0x1eb8b4u: goto label_1eb8b4;
        case 0x1eb8b8u: goto label_1eb8b8;
        case 0x1eb8bcu: goto label_1eb8bc;
        case 0x1eb8c0u: goto label_1eb8c0;
        case 0x1eb8c4u: goto label_1eb8c4;
        case 0x1eb8c8u: goto label_1eb8c8;
        case 0x1eb8ccu: goto label_1eb8cc;
        case 0x1eb8d0u: goto label_1eb8d0;
        case 0x1eb8d4u: goto label_1eb8d4;
        case 0x1eb8d8u: goto label_1eb8d8;
        case 0x1eb8dcu: goto label_1eb8dc;
        case 0x1eb8e0u: goto label_1eb8e0;
        case 0x1eb8e4u: goto label_1eb8e4;
        case 0x1eb8e8u: goto label_1eb8e8;
        case 0x1eb8ecu: goto label_1eb8ec;
        case 0x1eb8f0u: goto label_1eb8f0;
        case 0x1eb8f4u: goto label_1eb8f4;
        case 0x1eb8f8u: goto label_1eb8f8;
        case 0x1eb8fcu: goto label_1eb8fc;
        case 0x1eb900u: goto label_1eb900;
        case 0x1eb904u: goto label_1eb904;
        case 0x1eb908u: goto label_1eb908;
        case 0x1eb90cu: goto label_1eb90c;
        case 0x1eb910u: goto label_1eb910;
        case 0x1eb914u: goto label_1eb914;
        case 0x1eb918u: goto label_1eb918;
        case 0x1eb91cu: goto label_1eb91c;
        case 0x1eb920u: goto label_1eb920;
        case 0x1eb924u: goto label_1eb924;
        case 0x1eb928u: goto label_1eb928;
        case 0x1eb92cu: goto label_1eb92c;
        case 0x1eb930u: goto label_1eb930;
        case 0x1eb934u: goto label_1eb934;
        case 0x1eb938u: goto label_1eb938;
        case 0x1eb93cu: goto label_1eb93c;
        case 0x1eb940u: goto label_1eb940;
        case 0x1eb944u: goto label_1eb944;
        case 0x1eb948u: goto label_1eb948;
        case 0x1eb94cu: goto label_1eb94c;
        case 0x1eb950u: goto label_1eb950;
        case 0x1eb954u: goto label_1eb954;
        case 0x1eb958u: goto label_1eb958;
        case 0x1eb95cu: goto label_1eb95c;
        case 0x1eb960u: goto label_1eb960;
        case 0x1eb964u: goto label_1eb964;
        case 0x1eb968u: goto label_1eb968;
        case 0x1eb96cu: goto label_1eb96c;
        case 0x1eb970u: goto label_1eb970;
        case 0x1eb974u: goto label_1eb974;
        case 0x1eb978u: goto label_1eb978;
        case 0x1eb97cu: goto label_1eb97c;
        case 0x1eb980u: goto label_1eb980;
        case 0x1eb984u: goto label_1eb984;
        case 0x1eb988u: goto label_1eb988;
        case 0x1eb98cu: goto label_1eb98c;
        case 0x1eb990u: goto label_1eb990;
        case 0x1eb994u: goto label_1eb994;
        case 0x1eb998u: goto label_1eb998;
        case 0x1eb99cu: goto label_1eb99c;
        case 0x1eb9a0u: goto label_1eb9a0;
        case 0x1eb9a4u: goto label_1eb9a4;
        case 0x1eb9a8u: goto label_1eb9a8;
        case 0x1eb9acu: goto label_1eb9ac;
        case 0x1eb9b0u: goto label_1eb9b0;
        case 0x1eb9b4u: goto label_1eb9b4;
        case 0x1eb9b8u: goto label_1eb9b8;
        case 0x1eb9bcu: goto label_1eb9bc;
        case 0x1eb9c0u: goto label_1eb9c0;
        case 0x1eb9c4u: goto label_1eb9c4;
        default: break;
    }

    ctx->pc = 0x1eb818u;

label_1eb818:
    // 0x1eb818: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1eb818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1eb81c:
    // 0x1eb81c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1eb81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1eb820:
    // 0x1eb820: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1eb820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1eb824:
    // 0x1eb824: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1eb824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb828:
    // 0x1eb828: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1eb828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1eb82c:
    // 0x1eb82c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1eb82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1eb830:
    // 0x1eb830: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1eb830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1eb834:
    // 0x1eb834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb838:
    // 0x1eb838: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1eb838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1eb83c:
    // 0x1eb83c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_1eb840:
    if (ctx->pc == 0x1EB840u) {
        ctx->pc = 0x1EB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB83Cu;
        // 0x1eb840: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB844u;
        goto label_1eb844;
    }
    ctx->pc = 0x1EB83Cu;
    {
        const bool branch_taken_0x1eb83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB83Cu;
        // 0x1eb840: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb83c) {
            ctx->pc = 0x1EB9A8u;
            goto label_1eb9a8;
        }
    }
    ctx->pc = 0x1EB844u;
label_1eb844:
    // 0x1eb844: 0x8e6400b8  lw          $a0, 0xB8($s3)
    ctx->pc = 0x1eb844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1eb848:
    // 0x1eb848: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1eb848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb84c:
    // 0x1eb84c: 0xc073462  jal         func_1CD188
label_1eb850:
    if (ctx->pc == 0x1EB850u) {
        ctx->pc = 0x1EB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB84Cu;
        // 0x1eb850: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB854u;
        goto label_1eb854;
    }
    ctx->pc = 0x1EB84Cu;
    SET_GPR_U32(ctx, 31, 0x1EB854u);
    ctx->pc = 0x1EB850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB84Cu;
    // 0x1eb850: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1EB84Cu, 0x1EB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB854u;
label_1eb854:
    // 0x1eb854: 0x267100b0  addiu       $s1, $s3, 0xB0
    ctx->pc = 0x1eb854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_1eb858:
    // 0x1eb858: 0x8e6400b8  lw          $a0, 0xB8($s3)
    ctx->pc = 0x1eb858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_1eb85c:
    // 0x1eb85c: 0x26056ce8  addiu       $a1, $s0, 0x6CE8
    ctx->pc = 0x1eb85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 27880));
label_1eb860:
    // 0x1eb860: 0xc139138  jal         func_4E44E0
label_1eb864:
    if (ctx->pc == 0x1EB864u) {
        ctx->pc = 0x1EB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB860u;
        // 0x1eb864: 0x24060184  addiu       $a2, $zero, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB868u;
        goto label_1eb868;
    }
    ctx->pc = 0x1EB860u;
    SET_GPR_U32(ctx, 31, 0x1EB868u);
    ctx->pc = 0x1EB864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB860u;
    // 0x1eb864: 0x24060184  addiu       $a2, $zero, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1EB860u, 0x1EB868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB868u;
label_1eb868:
    // 0x1eb868: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1eb868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1eb86c:
    // 0x1eb86c: 0x0  nop
    ctx->pc = 0x1eb86cu;
    // NOP
label_1eb870:
    // 0x1eb870: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eb870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1eb874:
    // 0x1eb874: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eb874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eb878:
    // 0x1eb878: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1eb878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1eb87c:
    // 0x1eb87c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1eb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1eb880:
    // 0x1eb880: 0x60f809  jalr        $v1
label_1eb884:
    if (ctx->pc == 0x1EB884u) {
        ctx->pc = 0x1EB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB880u;
        // 0x1eb884: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB888u;
        goto label_1eb888;
    }
    ctx->pc = 0x1EB880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB888u);
        ctx->pc = 0x1EB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB880u;
        // 0x1eb884: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB880u, 0x1EB888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB888u;
label_1eb888:
    // 0x1eb888: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1eb888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1eb88c:
    // 0x1eb88c: 0x26856ce8  addiu       $a1, $s4, 0x6CE8
    ctx->pc = 0x1eb88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 27880));
label_1eb890:
    // 0x1eb890: 0x2406018b  addiu       $a2, $zero, 0x18B
    ctx->pc = 0x1eb890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 395));
label_1eb894:
    // 0x1eb894: 0xc138e72  jal         func_4E39C8
label_1eb898:
    if (ctx->pc == 0x1EB898u) {
        ctx->pc = 0x1EB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB894u;
        // 0x1eb898: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB89Cu;
        goto label_1eb89c;
    }
    ctx->pc = 0x1EB894u;
    SET_GPR_U32(ctx, 31, 0x1EB89Cu);
    ctx->pc = 0x1EB898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB894u;
    // 0x1eb898: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1EB894u, 0x1EB89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB89Cu;
label_1eb89c:
    // 0x1eb89c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1eb89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1eb8a0:
    // 0x1eb8a0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_1eb8a4:
    if (ctx->pc == 0x1EB8A4u) {
        ctx->pc = 0x1EB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8A0u;
        // 0x1eb8a4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB8A8u;
        goto label_1eb8a8;
    }
    ctx->pc = 0x1EB8A0u;
    {
        const bool branch_taken_0x1eb8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb8a0) {
            ctx->pc = 0x1EB8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB8A0u;
            // 0x1eb8a4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb870;
        }
    }
    ctx->pc = 0x1EB8A8u;
label_1eb8a8:
    // 0x1eb8a8: 0x8e6500c0  lw          $a1, 0xC0($s3)
    ctx->pc = 0x1eb8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_1eb8ac:
    // 0x1eb8ac: 0x26906ce8  addiu       $s0, $s4, 0x6CE8
    ctx->pc = 0x1eb8acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 27880));
label_1eb8b0:
    // 0x1eb8b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eb8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eb8b4:
    // 0x1eb8b4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1eb8b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1eb8b8:
    // 0x1eb8b8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1eb8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1eb8bc:
    // 0x1eb8bc: 0x60f809  jalr        $v1
label_1eb8c0:
    if (ctx->pc == 0x1EB8C0u) {
        ctx->pc = 0x1EB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8BCu;
        // 0x1eb8c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB8C4u;
        goto label_1eb8c4;
    }
    ctx->pc = 0x1EB8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB8C4u);
        ctx->pc = 0x1EB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8BCu;
        // 0x1eb8c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB8BCu, 0x1EB8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB8C4u;
label_1eb8c4:
    // 0x1eb8c4: 0x8e6400c0  lw          $a0, 0xC0($s3)
    ctx->pc = 0x1eb8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_1eb8c8:
    // 0x1eb8c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb8cc:
    // 0x1eb8cc: 0xc139fe8  jal         func_4E7FA0
label_1eb8d0:
    if (ctx->pc == 0x1EB8D0u) {
        ctx->pc = 0x1EB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8CCu;
        // 0x1eb8d0: 0x2406018f  addiu       $a2, $zero, 0x18F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB8D4u;
        goto label_1eb8d4;
    }
    ctx->pc = 0x1EB8CCu;
    SET_GPR_U32(ctx, 31, 0x1EB8D4u);
    ctx->pc = 0x1EB8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8CCu;
    // 0x1eb8d0: 0x2406018f  addiu       $a2, $zero, 0x18F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1EB8CCu, 0x1EB8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB8D4u;
label_1eb8d4:
    // 0x1eb8d4: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x1eb8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1eb8d8:
    // 0x1eb8d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eb8dc:
    // 0x1eb8dc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1eb8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1eb8e0:
    // 0x1eb8e0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1eb8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1eb8e4:
    // 0x1eb8e4: 0x60f809  jalr        $v1
label_1eb8e8:
    if (ctx->pc == 0x1EB8E8u) {
        ctx->pc = 0x1EB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8E4u;
        // 0x1eb8e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB8ECu;
        goto label_1eb8ec;
    }
    ctx->pc = 0x1EB8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB8ECu);
        ctx->pc = 0x1EB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8E4u;
        // 0x1eb8e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB8E4u, 0x1EB8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB8ECu;
label_1eb8ec:
    // 0x1eb8ec: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x1eb8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1eb8f0:
    // 0x1eb8f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb8f4:
    // 0x1eb8f4: 0xc13a4ae  jal         func_4E92B8
label_1eb8f8:
    if (ctx->pc == 0x1EB8F8u) {
        ctx->pc = 0x1EB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8F4u;
        // 0x1eb8f8: 0x24060193  addiu       $a2, $zero, 0x193 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB8FCu;
        goto label_1eb8fc;
    }
    ctx->pc = 0x1EB8F4u;
    SET_GPR_U32(ctx, 31, 0x1EB8FCu);
    ctx->pc = 0x1EB8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8F4u;
    // 0x1eb8f8: 0x24060193  addiu       $a2, $zero, 0x193 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E92B8u, 0x1EB8F4u, 0x1EB8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB8FCu;
label_1eb8fc:
    // 0x1eb8fc: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1eb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eb900:
    // 0x1eb900: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1eb900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1eb904:
    // 0x1eb904: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1eb904u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1eb908:
    // 0x1eb908: 0x12230016  beq         $s1, $v1, . + 4 + (0x16 << 2)
label_1eb90c:
    if (ctx->pc == 0x1EB90Cu) {
        ctx->pc = 0x1EB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB908u;
        // 0x1eb90c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB910u;
        goto label_1eb910;
    }
    ctx->pc = 0x1EB908u;
    {
        const bool branch_taken_0x1eb908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB908u;
        // 0x1eb90c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb908) {
            ctx->pc = 0x1EB964u;
            goto label_1eb964;
        }
    }
    ctx->pc = 0x1EB910u;
label_1eb910:
    // 0x1eb910: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1eb910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1eb914:
    // 0x1eb914: 0x0  nop
    ctx->pc = 0x1eb914u;
    // NOP
label_1eb918:
    // 0x1eb918: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1eb918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1eb91c:
    // 0x1eb91c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1eb91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb920:
    // 0x1eb920: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eb920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eb924:
    // 0x1eb924: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1eb924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1eb928:
    // 0x1eb928: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1eb928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1eb92c:
    // 0x1eb92c: 0x60f809  jalr        $v1
label_1eb930:
    if (ctx->pc == 0x1EB930u) {
        ctx->pc = 0x1EB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB92Cu;
        // 0x1eb930: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB934u;
        goto label_1eb934;
    }
    ctx->pc = 0x1EB92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EB934u);
        ctx->pc = 0x1EB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB92Cu;
        // 0x1eb930: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB92Cu, 0x1EB934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB934u;
label_1eb934:
    // 0x1eb934: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1eb934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb938:
    // 0x1eb938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eb938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb93c:
    // 0x1eb93c: 0xc13a658  jal         func_4E9960
label_1eb940:
    if (ctx->pc == 0x1EB940u) {
        ctx->pc = 0x1EB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB93Cu;
        // 0x1eb940: 0x24060199  addiu       $a2, $zero, 0x199 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB944u;
        goto label_1eb944;
    }
    ctx->pc = 0x1EB93Cu;
    SET_GPR_U32(ctx, 31, 0x1EB944u);
    ctx->pc = 0x1EB940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB93Cu;
    // 0x1eb940: 0x24060199  addiu       $a2, $zero, 0x199 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9960u, 0x1EB93Cu, 0x1EB944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB944u;
label_1eb944:
    // 0x1eb944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb948:
    // 0x1eb948: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eb948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb94c:
    // 0x1eb94c: 0xc13a678  jal         func_4E99E0
label_1eb950:
    if (ctx->pc == 0x1EB950u) {
        ctx->pc = 0x1EB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB94Cu;
        // 0x1eb950: 0x2406019b  addiu       $a2, $zero, 0x19B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB954u;
        goto label_1eb954;
    }
    ctx->pc = 0x1EB94Cu;
    SET_GPR_U32(ctx, 31, 0x1EB954u);
    ctx->pc = 0x1EB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB94Cu;
    // 0x1eb950: 0x2406019b  addiu       $a2, $zero, 0x19B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E99E0u, 0x1EB94Cu, 0x1EB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB954u;
label_1eb954:
    // 0x1eb954: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1eb954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eb958:
    // 0x1eb958: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1eb958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1eb95c:
    // 0x1eb95c: 0x5623ffee  bnel        $s1, $v1, . + 4 + (-0x12 << 2)
label_1eb960:
    if (ctx->pc == 0x1EB960u) {
        ctx->pc = 0x1EB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB95Cu;
        // 0x1eb960: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB964u;
        goto label_1eb964;
    }
    ctx->pc = 0x1EB95Cu;
    {
        const bool branch_taken_0x1eb95c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eb95c) {
            ctx->pc = 0x1EB960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB95Cu;
            // 0x1eb960: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb918;
        }
    }
    ctx->pc = 0x1EB964u;
label_1eb964:
    // 0x1eb964: 0x8e71008c  lw          $s1, 0x8C($s3)
    ctx->pc = 0x1eb964u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1eb968:
    // 0x1eb968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb96c:
    // 0x1eb96c: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1eb96cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb970:
    // 0x1eb970: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1eb970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1eb974:
    // 0x1eb974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eb974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb978:
    // 0x1eb978: 0xc10c1bb  jal         func_4306EC
label_1eb97c:
    if (ctx->pc == 0x1EB97Cu) {
        ctx->pc = 0x1EB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB978u;
        // 0x1eb97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB980u;
        goto label_1eb980;
    }
    ctx->pc = 0x1EB978u;
    SET_GPR_U32(ctx, 31, 0x1EB980u);
    ctx->pc = 0x1EB97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB978u;
    // 0x1eb97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x1EB978u, 0x1EB980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB980u;
label_1eb980:
    // 0x1eb980: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1eb980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1eb984:
    // 0x1eb984: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1eb984u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1eb988:
    // 0x1eb988: 0x26856ce8  addiu       $a1, $s4, 0x6CE8
    ctx->pc = 0x1eb988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 27880));
label_1eb98c:
    // 0x1eb98c: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x1eb98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
label_1eb990:
    // 0x1eb990: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1eb990u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1eb994:
    // 0x1eb994: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1eb994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1eb998:
    // 0x1eb998: 0xc13a68a  jal         func_4E9A28
label_1eb99c:
    if (ctx->pc == 0x1EB99Cu) {
        ctx->pc = 0x1EB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB998u;
        // 0x1eb99c: 0x8e64008c  lw          $a0, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB9A0u;
        goto label_1eb9a0;
    }
    ctx->pc = 0x1EB998u;
    SET_GPR_U32(ctx, 31, 0x1EB9A0u);
    ctx->pc = 0x1EB99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB998u;
    // 0x1eb99c: 0x8e64008c  lw          $a0, 0x8C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9A28u, 0x1EB998u, 0x1EB9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB9A0u;
label_1eb9a0:
    // 0x1eb9a0: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1eb9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1eb9a4:
    // 0x1eb9a4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1eb9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_1eb9a8:
    // 0x1eb9a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1eb9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1eb9ac:
    // 0x1eb9ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1eb9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1eb9b0:
    // 0x1eb9b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1eb9b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eb9b4:
    // 0x1eb9b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1eb9b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb9b8:
    // 0x1eb9b8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1eb9b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb9bc:
    // 0x1eb9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb9c0:
    // 0x1eb9c0: 0x3e00008  jr          $ra
label_1eb9c4:
    if (ctx->pc == 0x1EB9C4u) {
        ctx->pc = 0x1EB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9C0u;
        // 0x1eb9c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB9C8u;
        goto label_fallthrough_0x1eb9c0;
    }
    ctx->pc = 0x1EB9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9C0u;
        // 0x1eb9c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eb9c0:
    ctx->pc = 0x1EB9C8u;
}
