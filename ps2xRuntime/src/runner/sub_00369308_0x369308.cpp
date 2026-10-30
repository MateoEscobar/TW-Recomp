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

// Function: sub_00369308
// Address: 0x369308 - 0x369518
void sub_00369308_0x369308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369308_0x369308");
#endif

    switch (ctx->pc) {
        case 0x369338u: goto label_369338;
        case 0x369350u: goto label_369350;
        case 0x369358u: goto label_369358;
        case 0x369370u: goto label_369370;
        case 0x369388u: goto label_369388;
        case 0x369390u: goto label_369390;
        case 0x3693a8u: goto label_3693a8;
        case 0x3693c0u: goto label_3693c0;
        case 0x3693c8u: goto label_3693c8;
        case 0x3693e8u: goto label_3693e8;
        case 0x3693f0u: goto label_3693f0;
        case 0x369404u: goto label_369404;
        case 0x36941cu: goto label_36941c;
        case 0x369430u: goto label_369430;
        case 0x369448u: goto label_369448;
        case 0x36945cu: goto label_36945c;
        case 0x369474u: goto label_369474;
        case 0x369488u: goto label_369488;
        case 0x3694a0u: goto label_3694a0;
        case 0x3694b4u: goto label_3694b4;
        case 0x3694ccu: goto label_3694cc;
        case 0x3694e0u: goto label_3694e0;
        default: break;
    }

    ctx->pc = 0x369308u;

    // 0x369308: 0x27bdf3a0  addiu       $sp, $sp, -0xC60
    ctx->pc = 0x369308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964128));
    // 0x36930c: 0x7fb00c50  sq          $s0, 0xC50($sp)
    ctx->pc = 0x36930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3152), GPR_VEC(ctx, 16));
    // 0x369310: 0x7fb10c40  sq          $s1, 0xC40($sp)
    ctx->pc = 0x369310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3136), GPR_VEC(ctx, 17));
    // 0x369314: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369318: 0x7fb20c30  sq          $s2, 0xC30($sp)
    ctx->pc = 0x369318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3120), GPR_VEC(ctx, 18));
    // 0x36931c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36931cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369320: 0x7fb30c20  sq          $s3, 0xC20($sp)
    ctx->pc = 0x369320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3104), GPR_VEC(ctx, 19));
    // 0x369324: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x369324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369328: 0x7fb40c10  sq          $s4, 0xC10($sp)
    ctx->pc = 0x369328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3088), GPR_VEC(ctx, 20));
    // 0x36932c: 0x27b30400  addiu       $s3, $sp, 0x400
    ctx->pc = 0x36932cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x369330: 0xffbf0c00  sd          $ra, 0xC00($sp)
    ctx->pc = 0x369330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3072), GPR_U64(ctx, 31));
    // 0x369334: 0x27b40800  addiu       $s4, $sp, 0x800
    ctx->pc = 0x369334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
label_369338:
    // 0x369338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x369338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36933c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x369340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369344: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x369344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369348: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x369348u;
    SET_GPR_U32(ctx, 31, 0x369350u);
    ctx->pc = 0x36934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369348u;
    // 0x36934c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x369348u, 0x369350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369350u;
label_369350:
    // 0x369350: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369350u;
    SET_GPR_U32(ctx, 31, 0x369358u);
    ctx->pc = 0x369354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369350u;
    // 0x369354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369350u, 0x369358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369358u;
label_369358:
    // 0x369358: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x369358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36935c: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x36935cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x369360: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x369360u;
    {
        const bool branch_taken_0x369360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369360u;
        // 0x369364: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369360) {
            ctx->pc = 0x369338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369338;
        }
    }
    ctx->pc = 0x369368u;
    // 0x369368: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x369368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36936c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x36936cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_369370:
    // 0x369370: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x369370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x369374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x369374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369378: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x369378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36937c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36937cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369380: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x369380u;
    SET_GPR_U32(ctx, 31, 0x369388u);
    ctx->pc = 0x369384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369380u;
    // 0x369384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x369380u, 0x369388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369388u;
label_369388:
    // 0x369388: 0xc10b108  jal         func_42C420
    ctx->pc = 0x369388u;
    SET_GPR_U32(ctx, 31, 0x369390u);
    ctx->pc = 0x36938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369388u;
    // 0x36938c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x369388u, 0x369390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369390u;
label_369390:
    // 0x369390: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x369390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x369394: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x369394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x369398: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x369398u;
    {
        const bool branch_taken_0x369398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369398u;
        // 0x36939c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369398) {
            ctx->pc = 0x369370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369370;
        }
    }
    ctx->pc = 0x3693A0u;
    // 0x3693a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3693a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693a4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3693a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3693a8:
    // 0x3693a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3693a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3693ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3693acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3693b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3693b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3693b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693b8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3693B8u;
    SET_GPR_U32(ctx, 31, 0x3693C0u);
    ctx->pc = 0x3693BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693B8u;
    // 0x3693bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3693B8u, 0x3693C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693C0u;
label_3693c0:
    // 0x3693c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3693C0u;
    SET_GPR_U32(ctx, 31, 0x3693C8u);
    ctx->pc = 0x3693C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693C0u;
    // 0x3693c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3693C0u, 0x3693C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693C8u;
label_3693c8:
    // 0x3693c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3693c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3693cc: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x3693ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3693d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3693D0u;
    {
        const bool branch_taken_0x3693d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3693D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693D0u;
        // 0x3693d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3693d0) {
            ctx->pc = 0x3693A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3693a8;
        }
    }
    ctx->pc = 0x3693D8u;
    // 0x3693d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3693d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3693dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693e0: 0xc0639f4  jal         func_18E7D0
    ctx->pc = 0x3693E0u;
    SET_GPR_U32(ctx, 31, 0x3693E8u);
    ctx->pc = 0x3693E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693E0u;
    // 0x3693e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E7D0u, 0x3693E0u, 0x3693E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693E8u;
label_3693e8:
    // 0x3693e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3693e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3693ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3693f0:
    // 0x3693f0: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x3693f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3693f4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3693f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3693f8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3693f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3693fc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3693FCu;
    SET_GPR_U32(ctx, 31, 0x369404u);
    ctx->pc = 0x369400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693FCu;
    // 0x369400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3693FCu, 0x369404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369404u;
label_369404:
    // 0x369404: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x369404u;
    {
        const bool branch_taken_0x369404 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x369408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369404u;
        // 0x369408: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369404) {
            ctx->pc = 0x369420u;
            goto label_369420;
        }
    }
    ctx->pc = 0x36940Cu;
    // 0x36940c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36940cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x369410: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x369410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x369414: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x369414u;
    SET_GPR_U32(ctx, 31, 0x36941Cu);
    ctx->pc = 0x369418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369414u;
    // 0x369418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x369414u, 0x36941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36941Cu;
label_36941c:
    // 0x36941c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36941cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_369420:
    // 0x369420: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x369420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x369424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369428: 0xc102576  jal         func_4095D8
    ctx->pc = 0x369428u;
    SET_GPR_U32(ctx, 31, 0x369430u);
    ctx->pc = 0x36942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369428u;
    // 0x36942c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x369428u, 0x369430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369430u;
label_369430:
    // 0x369430: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x369430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369434: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x369434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x369438: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x369438u;
    {
        const bool branch_taken_0x369438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369438u;
        // 0x36943c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369438) {
            ctx->pc = 0x3693F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3693f0;
        }
    }
    ctx->pc = 0x369440u;
    // 0x369440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x369440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369444: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x369444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_369448:
    // 0x369448: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x369448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36944c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x36944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x369450: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x369450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x369454: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x369454u;
    SET_GPR_U32(ctx, 31, 0x36945Cu);
    ctx->pc = 0x369458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369454u;
    // 0x369458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x369454u, 0x36945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36945Cu;
label_36945c:
    // 0x36945c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36945Cu;
    {
        const bool branch_taken_0x36945c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x369460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36945Cu;
        // 0x369460: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36945c) {
            ctx->pc = 0x369478u;
            goto label_369478;
        }
    }
    ctx->pc = 0x369464u;
    // 0x369464: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x369464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x369468: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x369468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36946c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36946Cu;
    SET_GPR_U32(ctx, 31, 0x369474u);
    ctx->pc = 0x369470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36946Cu;
    // 0x369470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36946Cu, 0x369474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369474u;
label_369474:
    // 0x369474: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x369474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_369478:
    // 0x369478: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x369478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36947c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369480: 0xc102576  jal         func_4095D8
    ctx->pc = 0x369480u;
    SET_GPR_U32(ctx, 31, 0x369488u);
    ctx->pc = 0x369484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369480u;
    // 0x369484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x369480u, 0x369488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369488u;
label_369488:
    // 0x369488: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x369488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36948c: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x36948cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x369490: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x369490u;
    {
        const bool branch_taken_0x369490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369490u;
        // 0x369494: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369490) {
            ctx->pc = 0x369448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369448;
        }
    }
    ctx->pc = 0x369498u;
    // 0x369498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x369498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36949c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x36949cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3694a0:
    // 0x3694a0: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x3694a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3694a4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3694a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3694a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3694a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3694ac: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3694ACu;
    SET_GPR_U32(ctx, 31, 0x3694B4u);
    ctx->pc = 0x3694B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3694ACu;
    // 0x3694b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3694ACu, 0x3694B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3694B4u;
label_3694b4:
    // 0x3694b4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3694B4u;
    {
        const bool branch_taken_0x3694b4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3694B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694B4u;
        // 0x3694b8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3694b4) {
            ctx->pc = 0x3694D0u;
            goto label_3694d0;
        }
    }
    ctx->pc = 0x3694BCu;
    // 0x3694bc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3694bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3694c0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3694c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3694c4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3694C4u;
    SET_GPR_U32(ctx, 31, 0x3694CCu);
    ctx->pc = 0x3694C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3694C4u;
    // 0x3694c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3694C4u, 0x3694CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3694CCu;
label_3694cc:
    // 0x3694cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3694ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3694d0:
    // 0x3694d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3694d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3694d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694d8: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3694D8u;
    SET_GPR_U32(ctx, 31, 0x3694E0u);
    ctx->pc = 0x3694DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3694D8u;
    // 0x3694dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3694D8u, 0x3694E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3694E0u;
label_3694e0:
    // 0x3694e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3694e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694e4: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x3694e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3694e8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3694E8u;
    {
        const bool branch_taken_0x3694e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3694ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694E8u;
        // 0x3694ec: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3694e8) {
            ctx->pc = 0x3694A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3694a0;
        }
    }
    ctx->pc = 0x3694F0u;
    // 0x3694f0: 0x7bb00c50  lq          $s0, 0xC50($sp)
    ctx->pc = 0x3694f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3152)));
    // 0x3694f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3694f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694f8: 0x7bb10c40  lq          $s1, 0xC40($sp)
    ctx->pc = 0x3694f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3136)));
    // 0x3694fc: 0x7bb20c30  lq          $s2, 0xC30($sp)
    ctx->pc = 0x3694fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3120)));
    // 0x369500: 0x7bb30c20  lq          $s3, 0xC20($sp)
    ctx->pc = 0x369500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3104)));
    // 0x369504: 0x7bb40c10  lq          $s4, 0xC10($sp)
    ctx->pc = 0x369504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3088)));
    // 0x369508: 0xdfbf0c00  ld          $ra, 0xC00($sp)
    ctx->pc = 0x369508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3072)));
    // 0x36950c: 0x3e00008  jr          $ra
    ctx->pc = 0x36950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36950Cu;
        // 0x369510: 0x27bd0c60  addiu       $sp, $sp, 0xC60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36950Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369514u;
    // 0x369514: 0x0  nop
    ctx->pc = 0x369514u;
    // NOP
    ctx->pc = 0x369518u;
}
