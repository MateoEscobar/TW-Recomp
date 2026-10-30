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

// Function: sub_0027D800
// Address: 0x27d800 - 0x27d900
void sub_0027D800_0x27d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D800_0x27d800");
#endif

    switch (ctx->pc) {
        case 0x27d828u: goto label_27d828;
        case 0x27d838u: goto label_27d838;
        case 0x27d848u: goto label_27d848;
        case 0x27d85cu: goto label_27d85c;
        case 0x27d870u: goto label_27d870;
        case 0x27d884u: goto label_27d884;
        case 0x27d8a0u: goto label_27d8a0;
        case 0x27d8c0u: goto label_27d8c0;
        case 0x27d8d0u: goto label_27d8d0;
        case 0x27d8e0u: goto label_27d8e0;
        default: break;
    }

    ctx->pc = 0x27d800u;

    // 0x27d800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d804: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x27d804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x27d808: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x27d808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27d80c: 0x34a5d3e8  ori         $a1, $a1, 0xD3E8
    ctx->pc = 0x27d80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54248);
    // 0x27d810: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x27d810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x27d814: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x27d814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x27d818: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27d818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27d81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d820: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x27D820u;
    SET_GPR_U32(ctx, 31, 0x27D828u);
    ctx->pc = 0x27D824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D820u;
    // 0x27d824: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x27D820u, 0x27D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D828u;
label_27d828:
    // 0x27d828: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x27D828u;
    {
        const bool branch_taken_0x27d828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D828u;
        // 0x27d82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d828) {
            ctx->pc = 0x27D8ECu;
            goto label_27d8ec;
        }
    }
    ctx->pc = 0x27D830u;
    // 0x27d830: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x27D830u;
    SET_GPR_U32(ctx, 31, 0x27D838u);
    ctx->pc = 0x27D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D830u;
    // 0x27d834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x27D830u, 0x27D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D838u;
label_27d838:
    // 0x27d838: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D838u;
    {
        const bool branch_taken_0x27d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d838) {
            ctx->pc = 0x27D854u;
            goto label_27d854;
        }
    }
    ctx->pc = 0x27D840u;
    // 0x27d840: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27D840u;
    SET_GPR_U32(ctx, 31, 0x27D848u);
    ctx->pc = 0x27D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D840u;
    // 0x27d844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27D840u, 0x27D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D848u;
label_27d848:
    // 0x27d848: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27d848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d84c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27D84Cu;
    {
        const bool branch_taken_0x27d84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d84c) {
            ctx->pc = 0x27D87Cu;
            goto label_27d87c;
        }
    }
    ctx->pc = 0x27D854u;
label_27d854:
    // 0x27d854: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27D854u;
    SET_GPR_U32(ctx, 31, 0x27D85Cu);
    ctx->pc = 0x27D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D854u;
    // 0x27d858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27D854u, 0x27D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D85Cu;
label_27d85c:
    // 0x27d85c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27d860: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D860u;
    {
        const bool branch_taken_0x27d860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d860) {
            ctx->pc = 0x27D87Cu;
            goto label_27d87c;
        }
    }
    ctx->pc = 0x27D868u;
    // 0x27d868: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27D868u;
    SET_GPR_U32(ctx, 31, 0x27D870u);
    ctx->pc = 0x27D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D868u;
    // 0x27d86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27D868u, 0x27D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D870u;
label_27d870:
    // 0x27d870: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27d870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d874: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D874u;
    {
        const bool branch_taken_0x27d874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D874u;
        // 0x27d878: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d874) {
            ctx->pc = 0x27D894u;
            goto label_27d894;
        }
    }
    ctx->pc = 0x27D87Cu;
label_27d87c:
    // 0x27d87c: 0xc0a2036  jal         func_2880D8
    ctx->pc = 0x27D87Cu;
    SET_GPR_U32(ctx, 31, 0x27D884u);
    ctx->pc = 0x27D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D87Cu;
    // 0x27d880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2880D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2880D8u, 0x27D87Cu, 0x27D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D884u;
label_27d884:
    // 0x27d884: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27D884u;
    {
        const bool branch_taken_0x27d884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D884u;
        // 0x27d888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d884) {
            ctx->pc = 0x27D8E8u;
            goto label_27d8e8;
        }
    }
    ctx->pc = 0x27D88Cu;
    // 0x27d88c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27D88Cu;
    {
        const bool branch_taken_0x27d88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D88Cu;
        // 0x27d890: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d88c) {
            ctx->pc = 0x27D8F0u;
            goto label_27d8f0;
        }
    }
    ctx->pc = 0x27D894u;
label_27d894:
    // 0x27d894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d898: 0xc089998  jal         func_226660
    ctx->pc = 0x27D898u;
    SET_GPR_U32(ctx, 31, 0x27D8A0u);
    ctx->pc = 0x27D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D898u;
    // 0x27d89c: 0x34a5001f  ori         $a1, $a1, 0x1F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27D898u, 0x27D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8A0u;
label_27d8a0:
    // 0x27d8a0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27D8A0u;
    {
        const bool branch_taken_0x27d8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8A0u;
        // 0x27d8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8a0) {
            ctx->pc = 0x27D8ECu;
            goto label_27d8ec;
        }
    }
    ctx->pc = 0x27D8A8u;
    // 0x27d8a8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x27d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27d8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d8b0: 0xa46000bc  sh          $zero, 0xBC($v1)
    ctx->pc = 0x27d8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d8b4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27d8b8: 0xc088e98  jal         func_223A60
    ctx->pc = 0x27D8B8u;
    SET_GPR_U32(ctx, 31, 0x27D8C0u);
    ctx->pc = 0x27D8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D8B8u;
    // 0x27d8bc: 0xac4000b8  sw          $zero, 0xB8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x27D8B8u, 0x27D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8C0u;
label_27d8c0:
    // 0x27d8c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D8C0u;
    {
        const bool branch_taken_0x27d8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8C0u;
        // 0x27d8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8c0) {
            ctx->pc = 0x27D8D8u;
            goto label_27d8d8;
        }
    }
    ctx->pc = 0x27D8C8u;
    // 0x27d8c8: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x27D8C8u;
    SET_GPR_U32(ctx, 31, 0x27D8D0u);
    ctx->pc = 0x27D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D8C8u;
    // 0x27d8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x27D8C8u, 0x27D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8D0u;
label_27d8d0:
    // 0x27d8d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D8D0u;
    {
        const bool branch_taken_0x27d8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8D0u;
        // 0x27d8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8d0) {
            ctx->pc = 0x27D8E8u;
            goto label_27d8e8;
        }
    }
    ctx->pc = 0x27D8D8u;
label_27d8d8:
    // 0x27d8d8: 0xc0992a0  jal         func_264A80
    ctx->pc = 0x27D8D8u;
    SET_GPR_U32(ctx, 31, 0x27D8E0u);
    ctx->pc = 0x27D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D8D8u;
    // 0x27d8dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A80u, 0x27D8D8u, 0x27D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8E0u;
label_27d8e0:
    // 0x27d8e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D8E0u;
    {
        const bool branch_taken_0x27d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8E0u;
        // 0x27d8e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8e0) {
            ctx->pc = 0x27D8ECu;
            goto label_27d8ec;
        }
    }
    ctx->pc = 0x27D8E8u;
label_27d8e8:
    // 0x27d8e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d8ec:
    // 0x27d8ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27d8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d8f0:
    // 0x27d8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x27D8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D8F4u;
        // 0x27d8f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D8FCu;
    // 0x27d8fc: 0x0  nop
    ctx->pc = 0x27d8fcu;
    // NOP
    ctx->pc = 0x27d900u;
}
