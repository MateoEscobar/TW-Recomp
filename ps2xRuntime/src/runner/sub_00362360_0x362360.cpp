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

// Function: sub_00362360
// Address: 0x362360 - 0x3624e0
void sub_00362360_0x362360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362360_0x362360");
#endif

    switch (ctx->pc) {
        case 0x362390u: goto label_362390;
        case 0x3623a8u: goto label_3623a8;
        case 0x3623c0u: goto label_3623c0;
        case 0x3623d8u: goto label_3623d8;
        case 0x3623f0u: goto label_3623f0;
        case 0x362400u: goto label_362400;
        case 0x362418u: goto label_362418;
        case 0x362420u: goto label_362420;
        case 0x362434u: goto label_362434;
        case 0x36243cu: goto label_36243c;
        case 0x362454u: goto label_362454;
        case 0x36245cu: goto label_36245c;
        case 0x362474u: goto label_362474;
        case 0x36247cu: goto label_36247c;
        case 0x362494u: goto label_362494;
        case 0x3624acu: goto label_3624ac;
        case 0x3624bcu: goto label_3624bc;
        default: break;
    }

    ctx->pc = 0x362360u;

    // 0x362360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x362360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x362364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362368: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x362368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36236c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36236cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362370: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x362370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362374: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x362374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x362378: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x362378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36237c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x362380: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x362380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x362384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362388: 0xc10311e  jal         func_40C478
    ctx->pc = 0x362388u;
    SET_GPR_U32(ctx, 31, 0x362390u);
    ctx->pc = 0x36238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362388u;
    // 0x36238c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x362388u, 0x362390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362390u;
label_362390:
    // 0x362390: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x362390u;
    {
        const bool branch_taken_0x362390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362390u;
        // 0x362394: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362390) {
            ctx->pc = 0x3624B4u;
            goto label_3624b4;
        }
    }
    ctx->pc = 0x362398u;
    // 0x362398: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36239c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36239cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3623a0: 0xc10311e  jal         func_40C478
    ctx->pc = 0x3623A0u;
    SET_GPR_U32(ctx, 31, 0x3623A8u);
    ctx->pc = 0x3623A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3623A0u;
    // 0x3623a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x3623A0u, 0x3623A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3623A8u;
label_3623a8:
    // 0x3623a8: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3623A8u;
    {
        const bool branch_taken_0x3623a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623A8u;
        // 0x3623ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623a8) {
            ctx->pc = 0x3624B4u;
            goto label_3624b4;
        }
    }
    ctx->pc = 0x3623B0u;
    // 0x3623b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3623b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3623b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3623b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3623b8: 0xc10311e  jal         func_40C478
    ctx->pc = 0x3623B8u;
    SET_GPR_U32(ctx, 31, 0x3623C0u);
    ctx->pc = 0x3623BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3623B8u;
    // 0x3623bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x3623B8u, 0x3623C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3623C0u;
label_3623c0:
    // 0x3623c0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3623C0u;
    {
        const bool branch_taken_0x3623c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623C0u;
        // 0x3623c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623c0) {
            ctx->pc = 0x3624B4u;
            goto label_3624b4;
        }
    }
    ctx->pc = 0x3623C8u;
    // 0x3623c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3623c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3623cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3623ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3623d0: 0xc10311e  jal         func_40C478
    ctx->pc = 0x3623D0u;
    SET_GPR_U32(ctx, 31, 0x3623D8u);
    ctx->pc = 0x3623D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3623D0u;
    // 0x3623d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x3623D0u, 0x3623D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3623D8u;
label_3623d8:
    // 0x3623d8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3623D8u;
    {
        const bool branch_taken_0x3623d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623D8u;
        // 0x3623dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623d8) {
            ctx->pc = 0x3624B4u;
            goto label_3624b4;
        }
    }
    ctx->pc = 0x3623E0u;
    // 0x3623e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3623e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3623e4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3623e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3623e8: 0xc10311e  jal         func_40C478
    ctx->pc = 0x3623E8u;
    SET_GPR_U32(ctx, 31, 0x3623F0u);
    ctx->pc = 0x3623ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3623E8u;
    // 0x3623ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x3623E8u, 0x3623F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3623F0u;
label_3623f0:
    // 0x3623f0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3623F0u;
    {
        const bool branch_taken_0x3623f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623F0u;
        // 0x3623f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623f0) {
            ctx->pc = 0x3624B4u;
            goto label_3624b4;
        }
    }
    ctx->pc = 0x3623F8u;
    // 0x3623f8: 0xc10314e  jal         func_40C538
    ctx->pc = 0x3623F8u;
    SET_GPR_U32(ctx, 31, 0x362400u);
    ctx->pc = 0x3623FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3623F8u;
    // 0x3623fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x3623F8u, 0x362400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362400u;
label_362400:
    // 0x362400: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x362400u;
    {
        const bool branch_taken_0x362400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362400u;
        // 0x362404: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362400) {
            ctx->pc = 0x3624B4u;
            goto label_3624b4;
        }
    }
    ctx->pc = 0x362408u;
    // 0x362408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36240c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36240cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362410: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362410u;
    SET_GPR_U32(ctx, 31, 0x362418u);
    ctx->pc = 0x362414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362410u;
    // 0x362414: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362410u, 0x362418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362418u;
label_362418:
    // 0x362418: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362418u;
    SET_GPR_U32(ctx, 31, 0x362420u);
    ctx->pc = 0x36241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362418u;
    // 0x36241c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362418u, 0x362420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362420u;
label_362420:
    // 0x362420: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362424: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362428: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x362428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36242c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36242Cu;
    SET_GPR_U32(ctx, 31, 0x362434u);
    ctx->pc = 0x362430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36242Cu;
    // 0x362430: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36242Cu, 0x362434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362434u;
label_362434:
    // 0x362434: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x362434u;
    SET_GPR_U32(ctx, 31, 0x36243Cu);
    ctx->pc = 0x362438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362434u;
    // 0x362438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x362434u, 0x36243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36243Cu;
label_36243c:
    // 0x36243c: 0x29400  sll         $s2, $v0, 16
    ctx->pc = 0x36243cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362440: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362444: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362448: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x362448u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x36244c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36244Cu;
    SET_GPR_U32(ctx, 31, 0x362454u);
    ctx->pc = 0x362450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36244Cu;
    // 0x362450: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36244Cu, 0x362454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362454u;
label_362454:
    // 0x362454: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x362454u;
    SET_GPR_U32(ctx, 31, 0x36245Cu);
    ctx->pc = 0x362458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362454u;
    // 0x362458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x362454u, 0x36245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36245Cu;
label_36245c:
    // 0x36245c: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x36245cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362460: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362464: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x362464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362468: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x362468u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x36246c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36246Cu;
    SET_GPR_U32(ctx, 31, 0x362474u);
    ctx->pc = 0x362470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36246Cu;
    // 0x362470: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36246Cu, 0x362474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362474u;
label_362474:
    // 0x362474: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x362474u;
    SET_GPR_U32(ctx, 31, 0x36247Cu);
    ctx->pc = 0x362478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362474u;
    // 0x362478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x362474u, 0x36247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36247Cu;
label_36247c:
    // 0x36247c: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x36247cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362480: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x362480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362484: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x362484u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x362488: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x362488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36248c: 0xc102488  jal         func_409220
    ctx->pc = 0x36248Cu;
    SET_GPR_U32(ctx, 31, 0x362494u);
    ctx->pc = 0x362490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36248Cu;
    // 0x362490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36248Cu, 0x362494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362494u;
label_362494:
    // 0x362494: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x362494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x362498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36249c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36249cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3624a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3624a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3624a4: 0xc0a962a  jal         func_2A58A8
    ctx->pc = 0x3624A4u;
    SET_GPR_U32(ctx, 31, 0x3624ACu);
    ctx->pc = 0x3624A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3624A4u;
    // 0x3624a8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A58A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A58A8u, 0x3624A4u, 0x3624ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3624ACu;
label_3624ac:
    // 0x3624ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3624ACu;
    {
        const bool branch_taken_0x3624ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3624B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3624ACu;
        // 0x3624b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3624ac) {
            ctx->pc = 0x3624BCu;
            goto label_3624bc;
        }
    }
    ctx->pc = 0x3624B4u;
label_3624b4:
    // 0x3624b4: 0xc0d8894  jal         func_362250
    ctx->pc = 0x3624B4u;
    SET_GPR_U32(ctx, 31, 0x3624BCu);
    ctx->pc = 0x3624B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3624B4u;
    // 0x3624b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362250u, 0x3624B4u, 0x3624BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3624BCu;
label_3624bc:
    // 0x3624bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3624bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3624c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3624c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3624c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3624c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3624c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3624c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3624cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3624ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3624d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3624d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3624d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3624D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3624D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3624D4u;
        // 0x3624d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3624D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3624DCu;
    // 0x3624dc: 0x0  nop
    ctx->pc = 0x3624dcu;
    // NOP
    ctx->pc = 0x3624e0u;
}
