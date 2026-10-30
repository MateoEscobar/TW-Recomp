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

// Function: sub_00470788
// Address: 0x470788 - 0x470828
void sub_00470788_0x470788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470788_0x470788");
#endif

    switch (ctx->pc) {
        case 0x470788u: goto label_470788;
        case 0x47078cu: goto label_47078c;
        case 0x470790u: goto label_470790;
        case 0x470794u: goto label_470794;
        case 0x470798u: goto label_470798;
        case 0x47079cu: goto label_47079c;
        case 0x4707a0u: goto label_4707a0;
        case 0x4707a4u: goto label_4707a4;
        case 0x4707a8u: goto label_4707a8;
        case 0x4707acu: goto label_4707ac;
        case 0x4707b0u: goto label_4707b0;
        case 0x4707b4u: goto label_4707b4;
        case 0x4707b8u: goto label_4707b8;
        case 0x4707bcu: goto label_4707bc;
        case 0x4707c0u: goto label_4707c0;
        case 0x4707c4u: goto label_4707c4;
        case 0x4707c8u: goto label_4707c8;
        case 0x4707ccu: goto label_4707cc;
        case 0x4707d0u: goto label_4707d0;
        case 0x4707d4u: goto label_4707d4;
        case 0x4707d8u: goto label_4707d8;
        case 0x4707dcu: goto label_4707dc;
        case 0x4707e0u: goto label_4707e0;
        case 0x4707e4u: goto label_4707e4;
        case 0x4707e8u: goto label_4707e8;
        case 0x4707ecu: goto label_4707ec;
        case 0x4707f0u: goto label_4707f0;
        case 0x4707f4u: goto label_4707f4;
        case 0x4707f8u: goto label_4707f8;
        case 0x4707fcu: goto label_4707fc;
        case 0x470800u: goto label_470800;
        case 0x470804u: goto label_470804;
        case 0x470808u: goto label_470808;
        case 0x47080cu: goto label_47080c;
        case 0x470810u: goto label_470810;
        case 0x470814u: goto label_470814;
        case 0x470818u: goto label_470818;
        case 0x47081cu: goto label_47081c;
        case 0x470820u: goto label_470820;
        case 0x470824u: goto label_470824;
        default: break;
    }

    ctx->pc = 0x470788u;

label_470788:
    // 0x470788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x470788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47078c:
    // 0x47078c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x47078cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470790:
    // 0x470790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x470790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_470794:
    // 0x470794: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x470794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_470798:
    // 0x470798: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x470798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47079c:
    // 0x47079c: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_4707a0:
    if (ctx->pc == 0x4707A0u) {
        ctx->pc = 0x4707A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47079Cu;
        // 0x4707a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4707A4u;
        goto label_4707a4;
    }
    ctx->pc = 0x47079Cu;
    {
        const bool branch_taken_0x47079c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4707A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47079Cu;
        // 0x4707a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47079c) {
            ctx->pc = 0x47080Cu;
            goto label_47080c;
        }
    }
    ctx->pc = 0x4707A4u;
label_4707a4:
    // 0x4707a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4707a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4707a8:
    // 0x4707a8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4707ac:
    if (ctx->pc == 0x4707ACu) {
        ctx->pc = 0x4707ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707A8u;
        // 0x4707ac: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4707B0u;
        goto label_4707b0;
    }
    ctx->pc = 0x4707A8u;
    {
        const bool branch_taken_0x4707a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4707a8) {
            ctx->pc = 0x4707ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4707A8u;
            // 0x4707ac: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4707C4u;
            goto label_4707c4;
        }
    }
    ctx->pc = 0x4707B0u;
label_4707b0:
    // 0x4707b0: 0xc11b768  jal         func_46DDA0
label_4707b4:
    if (ctx->pc == 0x4707B4u) {
        ctx->pc = 0x4707B8u;
        goto label_4707b8;
    }
    ctx->pc = 0x4707B0u;
    SET_GPR_U32(ctx, 31, 0x4707B8u);
    ctx->pc = 0x46DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DDA0u, 0x4707B0u, 0x4707B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4707B8u;
label_4707b8:
    // 0x4707b8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4707b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4707bc:
    // 0x4707bc: 0x10000014  b           . + 4 + (0x14 << 2)
label_4707c0:
    if (ctx->pc == 0x4707C0u) {
        ctx->pc = 0x4707C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707BCu;
        // 0x4707c0: 0x2442e738  addiu       $v0, $v0, -0x18C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4707C4u;
        goto label_4707c4;
    }
    ctx->pc = 0x4707BCu;
    {
        const bool branch_taken_0x4707bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4707C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707BCu;
        // 0x4707c0: 0x2442e738  addiu       $v0, $v0, -0x18C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4707bc) {
            ctx->pc = 0x470810u;
            goto label_470810;
        }
    }
    ctx->pc = 0x4707C4u;
label_4707c4:
    // 0x4707c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4707c8:
    if (ctx->pc == 0x4707C8u) {
        ctx->pc = 0x4707C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707C4u;
        // 0x4707c8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4707CCu;
        goto label_4707cc;
    }
    ctx->pc = 0x4707C4u;
    {
        const bool branch_taken_0x4707c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4707C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707C4u;
        // 0x4707c8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4707c4) {
            ctx->pc = 0x4707DCu;
            goto label_4707dc;
        }
    }
    ctx->pc = 0x4707CCu;
label_4707cc:
    // 0x4707cc: 0x2442e738  addiu       $v0, $v0, -0x18C8
    ctx->pc = 0x4707ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960952));
label_4707d0:
    // 0x4707d0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x4707d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4707d4:
    // 0x4707d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4707d8:
    if (ctx->pc == 0x4707D8u) {
        ctx->pc = 0x4707D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707D4u;
        // 0x4707d8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4707DCu;
        goto label_4707dc;
    }
    ctx->pc = 0x4707D4u;
    {
        const bool branch_taken_0x4707d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4707D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707D4u;
        // 0x4707d8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4707d4) {
            ctx->pc = 0x4707E4u;
            goto label_4707e4;
        }
    }
    ctx->pc = 0x4707DCu;
label_4707dc:
    // 0x4707dc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x4707dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_4707e0:
    // 0x4707e0: 0x24420490  addiu       $v0, $v0, 0x490
    ctx->pc = 0x4707e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
label_4707e4:
    // 0x4707e4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4707e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4707e8:
    // 0x4707e8: 0x40f809  jalr        $v0
label_4707ec:
    if (ctx->pc == 0x4707ECu) {
        ctx->pc = 0x4707ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707E8u;
        // 0x4707ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4707F0u;
        goto label_4707f0;
    }
    ctx->pc = 0x4707E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4707F0u);
        ctx->pc = 0x4707ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707E8u;
        // 0x4707ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4707E8u, 0x4707F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4707F0u;
label_4707f0:
    // 0x4707f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4707f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4707f4:
    // 0x4707f4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4707f8:
    if (ctx->pc == 0x4707F8u) {
        ctx->pc = 0x4707F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707F4u;
        // 0x4707f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4707FCu;
        goto label_4707fc;
    }
    ctx->pc = 0x4707F4u;
    {
        const bool branch_taken_0x4707f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4707F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707F4u;
        // 0x4707f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4707f4) {
            ctx->pc = 0x470810u;
            goto label_470810;
        }
    }
    ctx->pc = 0x4707FCu;
label_4707fc:
    // 0x4707fc: 0xc11b768  jal         func_46DDA0
label_470800:
    if (ctx->pc == 0x470800u) {
        ctx->pc = 0x470800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4707FCu;
        // 0x470800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470804u;
        goto label_470804;
    }
    ctx->pc = 0x4707FCu;
    SET_GPR_U32(ctx, 31, 0x470804u);
    ctx->pc = 0x470800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4707FCu;
    // 0x470800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DDA0u, 0x4707FCu, 0x470804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470804u;
label_470804:
    // 0x470804: 0x10000002  b           . + 4 + (0x2 << 2)
label_470808:
    if (ctx->pc == 0x470808u) {
        ctx->pc = 0x470808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470804u;
        // 0x470808: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47080Cu;
        goto label_47080c;
    }
    ctx->pc = 0x470804u;
    {
        const bool branch_taken_0x470804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470804u;
        // 0x470808: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470804) {
            ctx->pc = 0x470810u;
            goto label_470810;
        }
    }
    ctx->pc = 0x47080Cu;
label_47080c:
    // 0x47080c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47080cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470810:
    // 0x470810: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x470810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_470814:
    // 0x470814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x470814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_470818:
    // 0x470818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x470818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47081c:
    // 0x47081c: 0x3e00008  jr          $ra
label_470820:
    if (ctx->pc == 0x470820u) {
        ctx->pc = 0x470820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47081Cu;
        // 0x470820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470824u;
        goto label_470824;
    }
    ctx->pc = 0x47081Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x470820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47081Cu;
        // 0x470820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47081Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470824u;
label_470824:
    // 0x470824: 0x0  nop
    ctx->pc = 0x470824u;
    // NOP
    ctx->pc = 0x470828u;
}
