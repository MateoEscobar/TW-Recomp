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

// Function: sub_00287730
// Address: 0x287730 - 0x2878b8
void sub_00287730_0x287730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287730_0x287730");
#endif

    switch (ctx->pc) {
        case 0x287748u: goto label_287748;
        case 0x28775cu: goto label_28775c;
        case 0x28777cu: goto label_28777c;
        case 0x28778cu: goto label_28778c;
        case 0x28779cu: goto label_28779c;
        case 0x2877acu: goto label_2877ac;
        case 0x2877bcu: goto label_2877bc;
        case 0x2877ccu: goto label_2877cc;
        case 0x2877dcu: goto label_2877dc;
        case 0x2877f0u: goto label_2877f0;
        case 0x287800u: goto label_287800;
        case 0x28780cu: goto label_28780c;
        case 0x287814u: goto label_287814;
        case 0x287824u: goto label_287824;
        case 0x287830u: goto label_287830;
        case 0x287844u: goto label_287844;
        case 0x287868u: goto label_287868;
        case 0x287878u: goto label_287878;
        case 0x287890u: goto label_287890;
        case 0x2878a0u: goto label_2878a0;
        default: break;
    }

    ctx->pc = 0x287730u;

    // 0x287730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x287730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x287734: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x287734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x287738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x287738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28773c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287740: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287740u;
    SET_GPR_U32(ctx, 31, 0x287748u);
    ctx->pc = 0x287744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287740u;
    // 0x287744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287740u, 0x287748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287748u;
label_287748:
    // 0x287748: 0x3c05aeeb  lui         $a1, 0xAEEB
    ctx->pc = 0x287748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44779 << 16));
    // 0x28774c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28774cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287754: 0xc089998  jal         func_226660
    ctx->pc = 0x287754u;
    SET_GPR_U32(ctx, 31, 0x28775Cu);
    ctx->pc = 0x287758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287754u;
    // 0x287758: 0x34a5f7ff  ori         $a1, $a1, 0xF7FF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63487);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x287754u, 0x28775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28775Cu;
label_28775c:
    // 0x28775c: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x28775Cu;
    {
        const bool branch_taken_0x28775c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28775Cu;
        // 0x287760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28775c) {
            ctx->pc = 0x2878A4u;
            goto label_2878a4;
        }
    }
    ctx->pc = 0x287764u;
    // 0x287764: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x287764u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x287768: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x287768u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28776c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28776Cu;
    {
        const bool branch_taken_0x28776c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28776c) {
            ctx->pc = 0x287784u;
            goto label_287784;
        }
    }
    ctx->pc = 0x287774u;
    // 0x287774: 0xc089018  jal         func_224060
    ctx->pc = 0x287774u;
    SET_GPR_U32(ctx, 31, 0x28777Cu);
    ctx->pc = 0x287778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287774u;
    // 0x287778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x287774u, 0x28777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28777Cu;
label_28777c:
    // 0x28777c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x28777Cu;
    {
        const bool branch_taken_0x28777c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28777Cu;
        // 0x287780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28777c) {
            ctx->pc = 0x2878A4u;
            goto label_2878a4;
        }
    }
    ctx->pc = 0x287784u;
label_287784:
    // 0x287784: 0xc09ee10  jal         func_27B840
    ctx->pc = 0x287784u;
    SET_GPR_U32(ctx, 31, 0x28778Cu);
    ctx->pc = 0x287788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287784u;
    // 0x287788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B840u, 0x287784u, 0x28778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28778Cu;
label_28778c:
    // 0x28778c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28778Cu;
    {
        const bool branch_taken_0x28778c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28778Cu;
        // 0x287790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28778c) {
            ctx->pc = 0x2877A4u;
            goto label_2877a4;
        }
    }
    ctx->pc = 0x287794u;
    // 0x287794: 0xc098f24  jal         func_263C90
    ctx->pc = 0x287794u;
    SET_GPR_U32(ctx, 31, 0x28779Cu);
    ctx->pc = 0x287798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287794u;
    // 0x287798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263C90u, 0x287794u, 0x28779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28779Cu;
label_28779c:
    // 0x28779c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x28779Cu;
    {
        const bool branch_taken_0x28779c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28779Cu;
        // 0x2877a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28779c) {
            ctx->pc = 0x2878A4u;
            goto label_2878a4;
        }
    }
    ctx->pc = 0x2877A4u;
label_2877a4:
    // 0x2877a4: 0xc09ee1a  jal         func_27B868
    ctx->pc = 0x2877A4u;
    SET_GPR_U32(ctx, 31, 0x2877ACu);
    ctx->pc = 0x2877A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877A4u;
    // 0x2877a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B868u, 0x2877A4u, 0x2877ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2877ACu;
label_2877ac:
    // 0x2877ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2877ACu;
    {
        const bool branch_taken_0x2877ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877ACu;
        // 0x2877b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877ac) {
            ctx->pc = 0x2877C4u;
            goto label_2877c4;
        }
    }
    ctx->pc = 0x2877B4u;
    // 0x2877b4: 0xc098f24  jal         func_263C90
    ctx->pc = 0x2877B4u;
    SET_GPR_U32(ctx, 31, 0x2877BCu);
    ctx->pc = 0x2877B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877B4u;
    // 0x2877b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263C90u, 0x2877B4u, 0x2877BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2877BCu;
label_2877bc:
    // 0x2877bc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2877BCu;
    {
        const bool branch_taken_0x2877bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877BCu;
        // 0x2877c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877bc) {
            ctx->pc = 0x2878A4u;
            goto label_2878a4;
        }
    }
    ctx->pc = 0x2877C4u;
label_2877c4:
    // 0x2877c4: 0xc09ee24  jal         func_27B890
    ctx->pc = 0x2877C4u;
    SET_GPR_U32(ctx, 31, 0x2877CCu);
    ctx->pc = 0x2877C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877C4u;
    // 0x2877c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B890u, 0x2877C4u, 0x2877CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2877CCu;
label_2877cc:
    // 0x2877cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2877CCu;
    {
        const bool branch_taken_0x2877cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877CCu;
        // 0x2877d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877cc) {
            ctx->pc = 0x287838u;
            goto label_287838;
        }
    }
    ctx->pc = 0x2877D4u;
    // 0x2877d4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2877D4u;
    SET_GPR_U32(ctx, 31, 0x2877DCu);
    ctx->pc = 0x2877D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877D4u;
    // 0x2877d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2877D4u, 0x2877DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2877DCu;
label_2877dc:
    // 0x2877dc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2877dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2877e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2877E0u;
    {
        const bool branch_taken_0x2877e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2877e0) {
            ctx->pc = 0x2877F8u;
            goto label_2877f8;
        }
    }
    ctx->pc = 0x2877E8u;
    // 0x2877e8: 0xc088a06  jal         func_222818
    ctx->pc = 0x2877E8u;
    SET_GPR_U32(ctx, 31, 0x2877F0u);
    ctx->pc = 0x2877ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877E8u;
    // 0x2877ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222818u, 0x2877E8u, 0x2877F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2877F0u;
label_2877f0:
    // 0x2877f0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2877F0u;
    {
        const bool branch_taken_0x2877f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877F0u;
        // 0x2877f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877f0) {
            ctx->pc = 0x2878A4u;
            goto label_2878a4;
        }
    }
    ctx->pc = 0x2877F8u;
label_2877f8:
    // 0x2877f8: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2877F8u;
    SET_GPR_U32(ctx, 31, 0x287800u);
    ctx->pc = 0x2877FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877F8u;
    // 0x2877fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2877F8u, 0x287800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287800u;
label_287800:
    // 0x287800: 0x24050298  addiu       $a1, $zero, 0x298
    ctx->pc = 0x287800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x287804: 0xc09e92c  jal         func_27A4B0
    ctx->pc = 0x287804u;
    SET_GPR_U32(ctx, 31, 0x28780Cu);
    ctx->pc = 0x287808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287804u;
    // 0x287808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A4B0u, 0x287804u, 0x28780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28780Cu;
label_28780c:
    // 0x28780c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x28780Cu;
    SET_GPR_U32(ctx, 31, 0x287814u);
    ctx->pc = 0x287810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28780Cu;
    // 0x287810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x28780Cu, 0x287814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287814u;
label_287814:
    // 0x287814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28781c: 0xc098720  jal         func_261C80
    ctx->pc = 0x28781Cu;
    SET_GPR_U32(ctx, 31, 0x287824u);
    ctx->pc = 0x287820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28781Cu;
    // 0x287820: 0x24060298  addiu       $a2, $zero, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261C80u, 0x28781Cu, 0x287824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287824u;
label_287824:
    // 0x287824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287828: 0xc088a1a  jal         func_222868
    ctx->pc = 0x287828u;
    SET_GPR_U32(ctx, 31, 0x287830u);
    ctx->pc = 0x28782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287828u;
    // 0x28782c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222868u, 0x287828u, 0x287830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287830u;
label_287830:
    // 0x287830: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x287830u;
    {
        const bool branch_taken_0x287830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287830u;
        // 0x287834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287830) {
            ctx->pc = 0x2878A4u;
            goto label_2878a4;
        }
    }
    ctx->pc = 0x287838u;
label_287838:
    // 0x287838: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x287838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x28783c: 0xc089998  jal         func_226660
    ctx->pc = 0x28783Cu;
    SET_GPR_U32(ctx, 31, 0x287844u);
    ctx->pc = 0x287840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28783Cu;
    // 0x287840: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x28783Cu, 0x287844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287844u;
label_287844:
    // 0x287844: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x287844u;
    {
        const bool branch_taken_0x287844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287844u;
        // 0x287848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287844) {
            ctx->pc = 0x2878A4u;
            goto label_2878a4;
        }
    }
    ctx->pc = 0x28784Cu;
    // 0x28784c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x28784cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x287850: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x287850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x287854: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x287854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x287858: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x287858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x28785c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x28785cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x287860: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x287860u;
    SET_GPR_U32(ctx, 31, 0x287868u);
    ctx->pc = 0x287864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287860u;
    // 0x287864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x287860u, 0x287868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287868u;
label_287868:
    // 0x287868: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x287868u;
    {
        const bool branch_taken_0x287868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287868u;
        // 0x28786c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287868) {
            ctx->pc = 0x2878A4u;
            goto label_2878a4;
        }
    }
    ctx->pc = 0x287870u;
    // 0x287870: 0xc09edfc  jal         func_27B7F0
    ctx->pc = 0x287870u;
    SET_GPR_U32(ctx, 31, 0x287878u);
    ctx->pc = 0x287874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287870u;
    // 0x287874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B7F0u, 0x287870u, 0x287878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287878u;
label_287878:
    // 0x287878: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287878u;
    {
        const bool branch_taken_0x287878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287878u;
        // 0x28787c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287878) {
            ctx->pc = 0x287888u;
            goto label_287888;
        }
    }
    ctx->pc = 0x287880u;
    // 0x287880: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x287880u;
    {
        const bool branch_taken_0x287880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287880u;
        // 0x287884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287880) {
            ctx->pc = 0x2878A4u;
            goto label_2878a4;
        }
    }
    ctx->pc = 0x287888u;
label_287888:
    // 0x287888: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x287888u;
    SET_GPR_U32(ctx, 31, 0x287890u);
    ctx->pc = 0x28788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287888u;
    // 0x28788c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x287888u, 0x287890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287890u;
label_287890:
    // 0x287890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287894: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x287894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x287898: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x287898u;
    SET_GPR_U32(ctx, 31, 0x2878A0u);
    ctx->pc = 0x28789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287898u;
    // 0x28789c: 0x3c060002  lui         $a2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x287898u, 0x2878A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878A0u;
label_2878a0:
    // 0x2878a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2878a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2878a4:
    // 0x2878a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2878a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2878a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2878a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2878ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2878acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2878b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2878B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2878B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878B0u;
        // 0x2878b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2878B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2878B8u;
}
