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

// Function: sub_0037C348
// Address: 0x37c348 - 0x37c438
void sub_0037C348_0x37c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C348_0x37c348");
#endif

    switch (ctx->pc) {
        case 0x37c370u: goto label_37c370;
        case 0x37c388u: goto label_37c388;
        case 0x37c398u: goto label_37c398;
        case 0x37c3b0u: goto label_37c3b0;
        case 0x37c3b8u: goto label_37c3b8;
        case 0x37c3ccu: goto label_37c3cc;
        case 0x37c3d4u: goto label_37c3d4;
        case 0x37c3e0u: goto label_37c3e0;
        case 0x37c3ecu: goto label_37c3ec;
        case 0x37c404u: goto label_37c404;
        case 0x37c410u: goto label_37c410;
        case 0x37c420u: goto label_37c420;
        default: break;
    }

    ctx->pc = 0x37c348u;

    // 0x37c348: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37c348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37c34c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c350: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37c354: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37c354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c358: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37c358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c35c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37c360: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37c364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c368: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37C368u;
    SET_GPR_U32(ctx, 31, 0x37C370u);
    ctx->pc = 0x37C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C368u;
    // 0x37c36c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37C368u, 0x37C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C370u;
label_37c370:
    // 0x37c370: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x37C370u;
    {
        const bool branch_taken_0x37c370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C370u;
        // 0x37c374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c370) {
            ctx->pc = 0x37C418u;
            goto label_37c418;
        }
    }
    ctx->pc = 0x37C378u;
    // 0x37c378: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37c378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c37c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37c37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c380: 0xc10311e  jal         func_40C478
    ctx->pc = 0x37C380u;
    SET_GPR_U32(ctx, 31, 0x37C388u);
    ctx->pc = 0x37C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C380u;
    // 0x37c384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x37C380u, 0x37C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C388u;
label_37c388:
    // 0x37c388: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x37C388u;
    {
        const bool branch_taken_0x37c388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C388u;
        // 0x37c38c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c388) {
            ctx->pc = 0x37C418u;
            goto label_37c418;
        }
    }
    ctx->pc = 0x37C390u;
    // 0x37c390: 0xc10314e  jal         func_40C538
    ctx->pc = 0x37C390u;
    SET_GPR_U32(ctx, 31, 0x37C398u);
    ctx->pc = 0x37C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C390u;
    // 0x37c394: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x37C390u, 0x37C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C398u;
label_37c398:
    // 0x37c398: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x37C398u;
    {
        const bool branch_taken_0x37c398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C398u;
        // 0x37c39c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c398) {
            ctx->pc = 0x37C418u;
            goto label_37c418;
        }
    }
    ctx->pc = 0x37C3A0u;
    // 0x37c3a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c3a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c3a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C3A8u;
    SET_GPR_U32(ctx, 31, 0x37C3B0u);
    ctx->pc = 0x37C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C3A8u;
    // 0x37c3ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C3A8u, 0x37C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C3B0u;
label_37c3b0:
    // 0x37c3b0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C3B0u;
    SET_GPR_U32(ctx, 31, 0x37C3B8u);
    ctx->pc = 0x37C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C3B0u;
    // 0x37c3b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C3B0u, 0x37C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C3B8u;
label_37c3b8:
    // 0x37c3b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c3bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37c3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c3c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37c3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c3c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C3C4u;
    SET_GPR_U32(ctx, 31, 0x37C3CCu);
    ctx->pc = 0x37C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C3C4u;
    // 0x37c3c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C3C4u, 0x37C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C3CCu;
label_37c3cc:
    // 0x37c3cc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C3CCu;
    SET_GPR_U32(ctx, 31, 0x37C3D4u);
    ctx->pc = 0x37C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C3CCu;
    // 0x37c3d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C3CCu, 0x37C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C3D4u;
label_37c3d4:
    // 0x37c3d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37c3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c3d8: 0xc05fc58  jal         func_17F160
    ctx->pc = 0x37C3D8u;
    SET_GPR_U32(ctx, 31, 0x37C3E0u);
    ctx->pc = 0x37C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C3D8u;
    // 0x37c3dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F160u, 0x37C3D8u, 0x37C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C3E0u;
label_37c3e0:
    // 0x37c3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37c3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c3e4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37C3E4u;
    SET_GPR_U32(ctx, 31, 0x37C3ECu);
    ctx->pc = 0x37C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C3E4u;
    // 0x37c3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37C3E4u, 0x37C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C3ECu;
label_37c3ec:
    // 0x37c3ec: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37C3ECu;
    {
        const bool branch_taken_0x37c3ec = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C3ECu;
        // 0x37c3f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c3ec) {
            ctx->pc = 0x37C408u;
            goto label_37c408;
        }
    }
    ctx->pc = 0x37C3F4u;
    // 0x37c3f4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37c3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37c3f8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37c3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37c3fc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37C3FCu;
    SET_GPR_U32(ctx, 31, 0x37C404u);
    ctx->pc = 0x37C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C3FCu;
    // 0x37c400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37C3FCu, 0x37C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C404u;
label_37c404:
    // 0x37c404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37c404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37c408:
    // 0x37c408: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37C408u;
    SET_GPR_U32(ctx, 31, 0x37C410u);
    ctx->pc = 0x37C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C408u;
    // 0x37c40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37C408u, 0x37C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C410u;
label_37c410:
    // 0x37c410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37C410u;
    {
        const bool branch_taken_0x37c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C410u;
        // 0x37c414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c410) {
            ctx->pc = 0x37C420u;
            goto label_37c420;
        }
    }
    ctx->pc = 0x37C418u;
label_37c418:
    // 0x37c418: 0xc0defee  jal         func_37BFB8
    ctx->pc = 0x37C418u;
    SET_GPR_U32(ctx, 31, 0x37C420u);
    ctx->pc = 0x37C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C418u;
    // 0x37c41c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BFB8u, 0x37C418u, 0x37C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C420u;
label_37c420:
    // 0x37c420: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37c420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c424: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37c424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c428: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37c428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c42c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c430: 0x3e00008  jr          $ra
    ctx->pc = 0x37C430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C430u;
        // 0x37c434: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C438u;
}
