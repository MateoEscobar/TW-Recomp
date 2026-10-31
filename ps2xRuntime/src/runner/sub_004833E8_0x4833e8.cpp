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

// Function: sub_004833E8
// Address: 0x4833e8 - 0x483530
void sub_004833E8_0x4833e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004833E8_0x4833e8");
#endif

    switch (ctx->pc) {
        case 0x483438u: goto label_483438;
        case 0x48345cu: goto label_48345c;
        case 0x483474u: goto label_483474;
        case 0x483494u: goto label_483494;
        case 0x4834ccu: goto label_4834cc;
        case 0x4834d8u: goto label_4834d8;
        case 0x4834f4u: goto label_4834f4;
        case 0x483500u: goto label_483500;
        default: break;
    }

    ctx->pc = 0x4833e8u;

    // 0x4833e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4833e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4833ec: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4833ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4833f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4833f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4833f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4833f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4833f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4833f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4833fc: 0x2472ad18  addiu       $s2, $v1, -0x52E8
    ctx->pc = 0x4833fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x483400: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x483400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x483404: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x483404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483408: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x483408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x48340c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x483410: 0x8e420124  lw          $v0, 0x124($s2)
    ctx->pc = 0x483410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70AE3Cu));
    // 0x483414: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x483414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x483418: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x483418u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48341c: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x48341Cu;
    {
        const bool branch_taken_0x48341c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48341Cu;
        // 0x483420: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48341c) {
            ctx->pc = 0x4834E0u;
            goto label_4834e0;
        }
    }
    ctx->pc = 0x483424u;
    // 0x483424: 0x13802b  sltu        $s0, $zero, $s3
    ctx->pc = 0x483424u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x483428: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x483428u;
    {
        const bool branch_taken_0x483428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483428u;
        // 0x48342c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483428) {
            ctx->pc = 0x4834BCu;
            goto label_4834bc;
        }
    }
    ctx->pc = 0x483430u;
    // 0x483430: 0xc126110  jal         func_498440
    ctx->pc = 0x483430u;
    SET_GPR_U32(ctx, 31, 0x483438u);
    ctx->pc = 0x498440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498440u, 0x483430u, 0x483438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483438u;
label_483438:
    // 0x483438: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x483438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48343c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x48343cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x483440: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x483440u;
    {
        const bool branch_taken_0x483440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483440u;
        // 0x483444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483440) {
            ctx->pc = 0x483500u;
            goto label_483500;
        }
    }
    ctx->pc = 0x483448u;
    // 0x483448: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x483448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48344c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x48344cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x483450: 0x26470108  addiu       $a3, $s2, 0x108
    ctx->pc = 0x483450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x483454: 0xc120de8  jal         func_4837A0
    ctx->pc = 0x483454u;
    SET_GPR_U32(ctx, 31, 0x48345Cu);
    ctx->pc = 0x483458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483454u;
    // 0x483458: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4837A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4837A0u, 0x483454u, 0x48345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48345Cu;
label_48345c:
    // 0x48345c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x48345cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x483460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x483464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x483468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48346c: 0xc120de8  jal         func_4837A0
    ctx->pc = 0x48346Cu;
    SET_GPR_U32(ctx, 31, 0x483474u);
    ctx->pc = 0x483470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48346Cu;
    // 0x483470: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4837A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4837A0u, 0x48346Cu, 0x483474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483474u;
label_483474:
    // 0x483474: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x483474u;
    {
        const bool branch_taken_0x483474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x483478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483474u;
        // 0x483478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483474) {
            ctx->pc = 0x4834A4u;
            goto label_4834a4;
        }
    }
    ctx->pc = 0x48347Cu;
    // 0x48347c: 0x26460048  addiu       $a2, $s2, 0x48
    ctx->pc = 0x48347cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x483480: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x483480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x483484: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x483484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483488: 0x2408001d  addiu       $t0, $zero, 0x1D
    ctx->pc = 0x483488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x48348c: 0xc120de8  jal         func_4837A0
    ctx->pc = 0x48348Cu;
    SET_GPR_U32(ctx, 31, 0x483494u);
    ctx->pc = 0x483490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48348Cu;
    // 0x483490: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4837A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4837A0u, 0x48348Cu, 0x483494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483494u;
label_483494:
    // 0x483494: 0x8f838618  lw          $v1, -0x79E8($gp)
    ctx->pc = 0x483494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
    // 0x483498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x483498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48349c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48349Cu;
    {
        const bool branch_taken_0x48349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4834A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48349Cu;
        // 0x4834a0: 0xaf838618  sw          $v1, -0x79E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48349c) {
            ctx->pc = 0x4834A8u;
            goto label_4834a8;
        }
    }
    ctx->pc = 0x4834A4u;
label_4834a4:
    // 0x4834a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4834a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4834a8:
    // 0x4834a8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4834A8u;
    {
        const bool branch_taken_0x4834a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4834ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4834A8u;
        // 0x4834ac: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4834a8) {
            ctx->pc = 0x483500u;
            goto label_483500;
        }
    }
    ctx->pc = 0x4834B0u;
    // 0x4834b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4834b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4834b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4834B4u;
    {
        const bool branch_taken_0x4834b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4834B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4834B4u;
        // 0x4834b8: 0xac620124  sw          $v0, 0x124($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4834b4) {
            ctx->pc = 0x483500u;
            goto label_483500;
        }
    }
    ctx->pc = 0x4834BCu;
label_4834bc:
    // 0x4834bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4834bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4834c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4834c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4834c4: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4834C4u;
    SET_GPR_U32(ctx, 31, 0x4834CCu);
    ctx->pc = 0x4834C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4834C4u;
    // 0x4834c8: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4834C4u, 0x4834CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4834CCu;
label_4834cc:
    // 0x4834cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4834ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4834d0: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4834D0u;
    SET_GPR_U32(ctx, 31, 0x4834D8u);
    ctx->pc = 0x4834D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4834D0u;
    // 0x4834d4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4834D0u, 0x4834D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4834D8u;
label_4834d8:
    // 0x4834d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4834D8u;
    {
        const bool branch_taken_0x4834d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4834DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4834D8u;
        // 0x4834dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4834d8) {
            ctx->pc = 0x483504u;
            goto label_483504;
        }
    }
    ctx->pc = 0x4834E0u;
label_4834e0:
    // 0x4834e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4834e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4834e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4834e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4834e8: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x4834e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x4834ec: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4834ECu;
    SET_GPR_U32(ctx, 31, 0x4834F4u);
    ctx->pc = 0x4834F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4834ECu;
    // 0x4834f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4834ECu, 0x4834F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4834F4u;
label_4834f4:
    // 0x4834f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4834f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4834f8: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4834F8u;
    SET_GPR_U32(ctx, 31, 0x483500u);
    ctx->pc = 0x4834FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4834F8u;
    // 0x4834fc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4834F8u, 0x483500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483500u;
label_483500:
    // 0x483500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x483500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483504:
    // 0x483504: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x483504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x483508: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x483508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48350c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x48350cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x483510: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x483510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x483514: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x483514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x483518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48351c: 0x3e00008  jr          $ra
    ctx->pc = 0x48351Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48351Cu;
        // 0x483520: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48351Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483524u;
    // 0x483524: 0x0  nop
    ctx->pc = 0x483524u;
    // NOP
    // 0x483528: 0x34427002  ori         $v0, $v0, 0x7002
    ctx->pc = 0x483528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28674);
    // 0x48352c: 0x0  nop
    ctx->pc = 0x48352cu;
    // NOP
    ctx->pc = 0x483530u;
}
