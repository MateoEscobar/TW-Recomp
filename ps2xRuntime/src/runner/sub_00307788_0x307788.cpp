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

// Function: sub_00307788
// Address: 0x307788 - 0x307878
void sub_00307788_0x307788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307788_0x307788");
#endif

    switch (ctx->pc) {
        case 0x307788u: goto label_307788;
        case 0x30778cu: goto label_30778c;
        case 0x307790u: goto label_307790;
        case 0x307794u: goto label_307794;
        case 0x307798u: goto label_307798;
        case 0x30779cu: goto label_30779c;
        case 0x3077a0u: goto label_3077a0;
        case 0x3077a4u: goto label_3077a4;
        case 0x3077a8u: goto label_3077a8;
        case 0x3077acu: goto label_3077ac;
        case 0x3077b0u: goto label_3077b0;
        case 0x3077b4u: goto label_3077b4;
        case 0x3077b8u: goto label_3077b8;
        case 0x3077bcu: goto label_3077bc;
        case 0x3077c0u: goto label_3077c0;
        case 0x3077c4u: goto label_3077c4;
        case 0x3077c8u: goto label_3077c8;
        case 0x3077ccu: goto label_3077cc;
        case 0x3077d0u: goto label_3077d0;
        case 0x3077d4u: goto label_3077d4;
        case 0x3077d8u: goto label_3077d8;
        case 0x3077dcu: goto label_3077dc;
        case 0x3077e0u: goto label_3077e0;
        case 0x3077e4u: goto label_3077e4;
        case 0x3077e8u: goto label_3077e8;
        case 0x3077ecu: goto label_3077ec;
        case 0x3077f0u: goto label_3077f0;
        case 0x3077f4u: goto label_3077f4;
        case 0x3077f8u: goto label_3077f8;
        case 0x3077fcu: goto label_3077fc;
        case 0x307800u: goto label_307800;
        case 0x307804u: goto label_307804;
        case 0x307808u: goto label_307808;
        case 0x30780cu: goto label_30780c;
        case 0x307810u: goto label_307810;
        case 0x307814u: goto label_307814;
        case 0x307818u: goto label_307818;
        case 0x30781cu: goto label_30781c;
        case 0x307820u: goto label_307820;
        case 0x307824u: goto label_307824;
        case 0x307828u: goto label_307828;
        case 0x30782cu: goto label_30782c;
        case 0x307830u: goto label_307830;
        case 0x307834u: goto label_307834;
        case 0x307838u: goto label_307838;
        case 0x30783cu: goto label_30783c;
        case 0x307840u: goto label_307840;
        case 0x307844u: goto label_307844;
        case 0x307848u: goto label_307848;
        case 0x30784cu: goto label_30784c;
        case 0x307850u: goto label_307850;
        case 0x307854u: goto label_307854;
        case 0x307858u: goto label_307858;
        case 0x30785cu: goto label_30785c;
        case 0x307860u: goto label_307860;
        case 0x307864u: goto label_307864;
        case 0x307868u: goto label_307868;
        case 0x30786cu: goto label_30786c;
        case 0x307870u: goto label_307870;
        case 0x307874u: goto label_307874;
        default: break;
    }

    ctx->pc = 0x307788u;

label_307788:
    // 0x307788: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x307788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_30778c:
    // 0x30778c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30778cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_307790:
    // 0x307790: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x307790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_307794:
    // 0x307794: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307798:
    // 0x307798: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x307798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_30779c:
    // 0x30779c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x30779cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3077a0:
    // 0x3077a0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x3077a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3077a4:
    // 0x3077a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3077a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3077a8:
    // 0x3077a8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3077a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3077ac:
    // 0x3077ac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3077acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3077b0:
    // 0x3077b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3077b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3077b4:
    // 0x3077b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3077b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3077b8:
    // 0x3077b8: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x3077b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_3077bc:
    // 0x3077bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3077bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3077c0:
    // 0x3077c0: 0xc137826  jal         func_4DE098
label_3077c4:
    if (ctx->pc == 0x3077C4u) {
        ctx->pc = 0x3077C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077C0u;
        // 0x3077c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3077C8u;
        goto label_3077c8;
    }
    ctx->pc = 0x3077C0u;
    SET_GPR_U32(ctx, 31, 0x3077C8u);
    ctx->pc = 0x3077C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077C0u;
    // 0x3077c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3077C0u, 0x3077C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077C8u;
label_3077c8:
    // 0x3077c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3077c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3077cc:
    // 0x3077cc: 0xc0e409a  jal         func_390268
label_3077d0:
    if (ctx->pc == 0x3077D0u) {
        ctx->pc = 0x3077D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077CCu;
        // 0x3077d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3077D4u;
        goto label_3077d4;
    }
    ctx->pc = 0x3077CCu;
    SET_GPR_U32(ctx, 31, 0x3077D4u);
    ctx->pc = 0x3077D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077CCu;
    // 0x3077d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3077CCu, 0x3077D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077D4u;
label_3077d4:
    // 0x3077d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3077d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3077d8:
    // 0x3077d8: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_3077dc:
    if (ctx->pc == 0x3077DCu) {
        ctx->pc = 0x3077DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077D8u;
        // 0x3077dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3077E0u;
        goto label_3077e0;
    }
    ctx->pc = 0x3077D8u;
    {
        const bool branch_taken_0x3077d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3077DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077D8u;
        // 0x3077dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077d8) {
            ctx->pc = 0x307844u;
            goto label_307844;
        }
    }
    ctx->pc = 0x3077E0u;
label_3077e0:
    // 0x3077e0: 0xc089f98  jal         func_227E60
label_3077e4:
    if (ctx->pc == 0x3077E4u) {
        ctx->pc = 0x3077E8u;
        goto label_3077e8;
    }
    ctx->pc = 0x3077E0u;
    SET_GPR_U32(ctx, 31, 0x3077E8u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x3077E0u, 0x3077E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077E8u;
label_3077e8:
    // 0x3077e8: 0x10550017  beq         $v0, $s5, . + 4 + (0x17 << 2)
label_3077ec:
    if (ctx->pc == 0x3077ECu) {
        ctx->pc = 0x3077ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077E8u;
        // 0x3077ec: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3077F0u;
        goto label_3077f0;
    }
    ctx->pc = 0x3077E8u;
    {
        const bool branch_taken_0x3077e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x3077ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077E8u;
        // 0x3077ec: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3077e8) {
            ctx->pc = 0x307848u;
            goto label_307848;
        }
    }
    ctx->pc = 0x3077F0u;
label_3077f0:
    // 0x3077f0: 0xc087502  jal         func_21D408
label_3077f4:
    if (ctx->pc == 0x3077F4u) {
        ctx->pc = 0x3077F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3077F0u;
        // 0x3077f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3077F8u;
        goto label_3077f8;
    }
    ctx->pc = 0x3077F0u;
    SET_GPR_U32(ctx, 31, 0x3077F8u);
    ctx->pc = 0x3077F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3077F0u;
    // 0x3077f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3077F0u, 0x3077F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3077F8u;
label_3077f8:
    // 0x3077f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3077f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3077fc:
    // 0x3077fc: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x3077fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_307800:
    // 0x307800: 0xc0a3658  jal         func_28D960
label_307804:
    if (ctx->pc == 0x307804u) {
        ctx->pc = 0x307804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307800u;
        // 0x307804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307808u;
        goto label_307808;
    }
    ctx->pc = 0x307800u;
    SET_GPR_U32(ctx, 31, 0x307808u);
    ctx->pc = 0x307804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307800u;
    // 0x307804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x307800u, 0x307808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307808u;
label_307808:
    // 0x307808: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
label_30780c:
    if (ctx->pc == 0x30780Cu) {
        ctx->pc = 0x30780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307808u;
        // 0x30780c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307810u;
        goto label_307810;
    }
    ctx->pc = 0x307808u;
    {
        const bool branch_taken_0x307808 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307808u;
        // 0x30780c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307808) {
            ctx->pc = 0x307844u;
            goto label_307844;
        }
    }
    ctx->pc = 0x307810u;
label_307810:
    // 0x307810: 0xc0a3630  jal         func_28D8C0
label_307814:
    if (ctx->pc == 0x307814u) {
        ctx->pc = 0x307814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307810u;
        // 0x307814: 0xae14021c  sw          $s4, 0x21C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307818u;
        goto label_307818;
    }
    ctx->pc = 0x307810u;
    SET_GPR_U32(ctx, 31, 0x307818u);
    ctx->pc = 0x307814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307810u;
    // 0x307814: 0xae14021c  sw          $s4, 0x21C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x307810u, 0x307818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307818u;
label_307818:
    // 0x307818: 0xc0a3628  jal         func_28D8A0
label_30781c:
    if (ctx->pc == 0x30781Cu) {
        ctx->pc = 0x30781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307818u;
        // 0x30781c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307820u;
        goto label_307820;
    }
    ctx->pc = 0x307818u;
    SET_GPR_U32(ctx, 31, 0x307820u);
    ctx->pc = 0x30781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307818u;
    // 0x30781c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x307818u, 0x307820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307820u;
label_307820:
    // 0x307820: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x307820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_307824:
    // 0x307824: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x307824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_307828:
    // 0x307828: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x307828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30782c:
    // 0x30782c: 0x40f809  jalr        $v0
label_307830:
    if (ctx->pc == 0x307830u) {
        ctx->pc = 0x307830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30782Cu;
        // 0x307830: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307834u;
        goto label_307834;
    }
    ctx->pc = 0x30782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x307834u);
        ctx->pc = 0x307830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30782Cu;
        // 0x307830: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30782Cu, 0x307834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x307834u;
label_307834:
    // 0x307834: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x307834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_307838:
    // 0x307838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30783c:
    // 0x30783c: 0xc0ab742  jal         func_2ADD08
label_307840:
    if (ctx->pc == 0x307840u) {
        ctx->pc = 0x307840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30783Cu;
        // 0x307840: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307844u;
        goto label_307844;
    }
    ctx->pc = 0x30783Cu;
    SET_GPR_U32(ctx, 31, 0x307844u);
    ctx->pc = 0x307840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30783Cu;
    // 0x307840: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x30783Cu, 0x307844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307844u;
label_307844:
    // 0x307844: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x307844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_307848:
    // 0x307848: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
label_30784c:
    if (ctx->pc == 0x30784Cu) {
        ctx->pc = 0x30784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307848u;
        // 0x30784c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307850u;
        goto label_307850;
    }
    ctx->pc = 0x307848u;
    {
        const bool branch_taken_0x307848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307848) {
            ctx->pc = 0x30784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307848u;
            // 0x30784c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3077C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3077c0;
        }
    }
    ctx->pc = 0x307850u;
label_307850:
    // 0x307850: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x307850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_307854:
    // 0x307854: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x307854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_307858:
    // 0x307858: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x307858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30785c:
    // 0x30785c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30785cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307860:
    // 0x307860: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x307860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307864:
    // 0x307864: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x307864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307868:
    // 0x307868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30786c:
    // 0x30786c: 0x3e00008  jr          $ra
label_307870:
    if (ctx->pc == 0x307870u) {
        ctx->pc = 0x307870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30786Cu;
        // 0x307870: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307874u;
        goto label_307874;
    }
    ctx->pc = 0x30786Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30786Cu;
        // 0x307870: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30786Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307874u;
label_307874:
    // 0x307874: 0x0  nop
    ctx->pc = 0x307874u;
    // NOP
    ctx->pc = 0x307878u;
}
