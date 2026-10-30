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

// Function: sub_0040B4F0
// Address: 0x40b4f0 - 0x40b5b8
void sub_0040B4F0_0x40b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B4F0_0x40b4f0");
#endif

    switch (ctx->pc) {
        case 0x40b510u: goto label_40b510;
        case 0x40b520u: goto label_40b520;
        case 0x40b52cu: goto label_40b52c;
        case 0x40b53cu: goto label_40b53c;
        case 0x40b548u: goto label_40b548;
        case 0x40b554u: goto label_40b554;
        case 0x40b564u: goto label_40b564;
        case 0x40b574u: goto label_40b574;
        case 0x40b588u: goto label_40b588;
        case 0x40b594u: goto label_40b594;
        case 0x40b5a0u: goto label_40b5a0;
        default: break;
    }

    ctx->pc = 0x40b4f0u;

    // 0x40b4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40b4f4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40b4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40b4f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40b4fc: 0x24a58310  addiu       $a1, $a1, -0x7CF0
    ctx->pc = 0x40b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935312));
    // 0x40b500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40b504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b508: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40B508u;
    SET_GPR_U32(ctx, 31, 0x40B510u);
    ctx->pc = 0x40B50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B508u;
    // 0x40b50c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40B508u, 0x40B510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B510u;
label_40b510:
    // 0x40b510: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x40b510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b518: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40B518u;
    SET_GPR_U32(ctx, 31, 0x40B520u);
    ctx->pc = 0x40B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B518u;
    // 0x40b51c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40B518u, 0x40B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B520u;
label_40b520:
    // 0x40b520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b524: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40B524u;
    SET_GPR_U32(ctx, 31, 0x40B52Cu);
    ctx->pc = 0x40B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B524u;
    // 0x40b528: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40B524u, 0x40B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B52Cu;
label_40b52c:
    // 0x40b52c: 0x10510013  beq         $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x40B52Cu;
    {
        const bool branch_taken_0x40b52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x40B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B52Cu;
        // 0x40b530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b52c) {
            ctx->pc = 0x40B57Cu;
            goto label_40b57c;
        }
    }
    ctx->pc = 0x40B534u;
    // 0x40b534: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B534u;
    SET_GPR_U32(ctx, 31, 0x40B53Cu);
    ctx->pc = 0x40B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B534u;
    // 0x40b538: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B534u, 0x40B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B53Cu;
label_40b53c:
    // 0x40b53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b540: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40B540u;
    SET_GPR_U32(ctx, 31, 0x40B548u);
    ctx->pc = 0x40B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B540u;
    // 0x40b544: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40B540u, 0x40B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B548u;
label_40b548:
    // 0x40b548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b54c: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40B54Cu;
    SET_GPR_U32(ctx, 31, 0x40B554u);
    ctx->pc = 0x40B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B54Cu;
    // 0x40b550: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40B54Cu, 0x40B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B554u;
label_40b554:
    // 0x40b554: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x40B554u;
    {
        const bool branch_taken_0x40b554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x40B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B554u;
        // 0x40b558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b554) {
            ctx->pc = 0x40B57Cu;
            goto label_40b57c;
        }
    }
    ctx->pc = 0x40B55Cu;
    // 0x40b55c: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B55Cu;
    SET_GPR_U32(ctx, 31, 0x40B564u);
    ctx->pc = 0x40B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B55Cu;
    // 0x40b560: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B55Cu, 0x40B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B564u;
label_40b564:
    // 0x40b564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b568: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b56c: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40B56Cu;
    SET_GPR_U32(ctx, 31, 0x40B574u);
    ctx->pc = 0x40B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B56Cu;
    // 0x40b570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40B56Cu, 0x40B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B574u;
label_40b574:
    // 0x40b574: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x40B574u;
    {
        const bool branch_taken_0x40b574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B574u;
        // 0x40b578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b574) {
            ctx->pc = 0x40B5A4u;
            goto label_40b5a4;
        }
    }
    ctx->pc = 0x40B57Cu;
label_40b57c:
    // 0x40b57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b580: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B580u;
    SET_GPR_U32(ctx, 31, 0x40B588u);
    ctx->pc = 0x40B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B580u;
    // 0x40b584: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B580u, 0x40B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B588u;
label_40b588:
    // 0x40b588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b58c: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B58Cu;
    SET_GPR_U32(ctx, 31, 0x40B594u);
    ctx->pc = 0x40B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B58Cu;
    // 0x40b590: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B58Cu, 0x40B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B594u;
label_40b594:
    // 0x40b594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b598: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x40B598u;
    SET_GPR_U32(ctx, 31, 0x40B5A0u);
    ctx->pc = 0x40B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B598u;
    // 0x40b59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x40B598u, 0x40B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B5A0u;
label_40b5a0:
    // 0x40b5a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40b5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b5a4:
    // 0x40b5a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40b5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40b5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x40B5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B5B0u;
        // 0x40b5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B5B8u;
}
