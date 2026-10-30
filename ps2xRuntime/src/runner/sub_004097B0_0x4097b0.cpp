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

// Function: sub_004097B0
// Address: 0x4097b0 - 0x409888
void sub_004097B0_0x4097b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004097B0_0x4097b0");
#endif

    switch (ctx->pc) {
        case 0x4097d8u: goto label_4097d8;
        case 0x4097e8u: goto label_4097e8;
        case 0x4097f8u: goto label_4097f8;
        case 0x409804u: goto label_409804;
        case 0x409814u: goto label_409814;
        case 0x409820u: goto label_409820;
        case 0x40982cu: goto label_40982c;
        case 0x40983cu: goto label_40983c;
        case 0x409844u: goto label_409844;
        case 0x409850u: goto label_409850;
        case 0x40985cu: goto label_40985c;
        case 0x409868u: goto label_409868;
        default: break;
    }

    ctx->pc = 0x4097b0u;

    // 0x4097b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4097b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4097b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4097b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4097b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4097b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4097bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4097bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4097c0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4097c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4097c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4097c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4097c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4097c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4097cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4097ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4097d0: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x4097D0u;
    SET_GPR_U32(ctx, 31, 0x4097D8u);
    ctx->pc = 0x4097D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4097D0u;
    // 0x4097d4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x4097D0u, 0x4097D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4097D8u;
label_4097d8:
    // 0x4097d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4097d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4097dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4097dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4097e0: 0xc1028ac  jal         func_40A2B0
    ctx->pc = 0x4097E0u;
    SET_GPR_U32(ctx, 31, 0x4097E8u);
    ctx->pc = 0x4097E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4097E0u;
    // 0x4097e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A2B0u, 0x4097E0u, 0x4097E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4097E8u;
label_4097e8:
    // 0x4097e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4097e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4097ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4097ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4097f0: 0xc102918  jal         func_40A460
    ctx->pc = 0x4097F0u;
    SET_GPR_U32(ctx, 31, 0x4097F8u);
    ctx->pc = 0x4097F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4097F0u;
    // 0x4097f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A460u, 0x4097F0u, 0x4097F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4097F8u;
label_4097f8:
    // 0x4097f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4097f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4097fc: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x4097FCu;
    SET_GPR_U32(ctx, 31, 0x409804u);
    ctx->pc = 0x409800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4097FCu;
    // 0x409800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x4097FCu, 0x409804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409804u;
label_409804:
    // 0x409804: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x409804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x409808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40980c: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40980Cu;
    SET_GPR_U32(ctx, 31, 0x409814u);
    ctx->pc = 0x409810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40980Cu;
    // 0x409810: 0x24a57fc0  addiu       $a1, $a1, 0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40980Cu, 0x409814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409814u;
label_409814:
    // 0x409814: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x409814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409818: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x409818u;
    SET_GPR_U32(ctx, 31, 0x409820u);
    ctx->pc = 0x40981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409818u;
    // 0x40981c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x409818u, 0x409820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409820u;
label_409820:
    // 0x409820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409824: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x409824u;
    SET_GPR_U32(ctx, 31, 0x40982Cu);
    ctx->pc = 0x409828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409824u;
    // 0x409828: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x409824u, 0x40982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40982Cu;
label_40982c:
    // 0x40982c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x40982cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x409830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409834: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x409834u;
    SET_GPR_U32(ctx, 31, 0x40983Cu);
    ctx->pc = 0x409838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409834u;
    // 0x409838: 0x24a57fc8  addiu       $a1, $a1, 0x7FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x409834u, 0x40983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40983Cu;
label_40983c:
    // 0x40983c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40983Cu;
    SET_GPR_U32(ctx, 31, 0x409844u);
    ctx->pc = 0x409840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40983Cu;
    // 0x409840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40983Cu, 0x409844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409844u;
label_409844:
    // 0x409844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x409844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409848: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x409848u;
    SET_GPR_U32(ctx, 31, 0x409850u);
    ctx->pc = 0x40984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409848u;
    // 0x40984c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x409848u, 0x409850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409850u;
label_409850:
    // 0x409850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409854: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x409854u;
    SET_GPR_U32(ctx, 31, 0x40985Cu);
    ctx->pc = 0x409858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409854u;
    // 0x409858: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x409854u, 0x40985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40985Cu;
label_40985c:
    // 0x40985c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409860: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409860u;
    SET_GPR_U32(ctx, 31, 0x409868u);
    ctx->pc = 0x409864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409860u;
    // 0x409864: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409860u, 0x409868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409868u;
label_409868:
    // 0x409868: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x409868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40986c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x40986cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x409870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409874: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x409874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40987c: 0x3e00008  jr          $ra
    ctx->pc = 0x40987Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40987Cu;
        // 0x409880: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40987Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409884u;
    // 0x409884: 0x0  nop
    ctx->pc = 0x409884u;
    // NOP
    ctx->pc = 0x409888u;
}
