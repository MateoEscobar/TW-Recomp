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

// Function: sub_00308698
// Address: 0x308698 - 0x308790
void sub_00308698_0x308698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308698_0x308698");
#endif

    switch (ctx->pc) {
        case 0x308698u: goto label_308698;
        case 0x30869cu: goto label_30869c;
        case 0x3086a0u: goto label_3086a0;
        case 0x3086a4u: goto label_3086a4;
        case 0x3086a8u: goto label_3086a8;
        case 0x3086acu: goto label_3086ac;
        case 0x3086b0u: goto label_3086b0;
        case 0x3086b4u: goto label_3086b4;
        case 0x3086b8u: goto label_3086b8;
        case 0x3086bcu: goto label_3086bc;
        case 0x3086c0u: goto label_3086c0;
        case 0x3086c4u: goto label_3086c4;
        case 0x3086c8u: goto label_3086c8;
        case 0x3086ccu: goto label_3086cc;
        case 0x3086d0u: goto label_3086d0;
        case 0x3086d4u: goto label_3086d4;
        case 0x3086d8u: goto label_3086d8;
        case 0x3086dcu: goto label_3086dc;
        case 0x3086e0u: goto label_3086e0;
        case 0x3086e4u: goto label_3086e4;
        case 0x3086e8u: goto label_3086e8;
        case 0x3086ecu: goto label_3086ec;
        case 0x3086f0u: goto label_3086f0;
        case 0x3086f4u: goto label_3086f4;
        case 0x3086f8u: goto label_3086f8;
        case 0x3086fcu: goto label_3086fc;
        case 0x308700u: goto label_308700;
        case 0x308704u: goto label_308704;
        case 0x308708u: goto label_308708;
        case 0x30870cu: goto label_30870c;
        case 0x308710u: goto label_308710;
        case 0x308714u: goto label_308714;
        case 0x308718u: goto label_308718;
        case 0x30871cu: goto label_30871c;
        case 0x308720u: goto label_308720;
        case 0x308724u: goto label_308724;
        case 0x308728u: goto label_308728;
        case 0x30872cu: goto label_30872c;
        case 0x308730u: goto label_308730;
        case 0x308734u: goto label_308734;
        case 0x308738u: goto label_308738;
        case 0x30873cu: goto label_30873c;
        case 0x308740u: goto label_308740;
        case 0x308744u: goto label_308744;
        case 0x308748u: goto label_308748;
        case 0x30874cu: goto label_30874c;
        case 0x308750u: goto label_308750;
        case 0x308754u: goto label_308754;
        case 0x308758u: goto label_308758;
        case 0x30875cu: goto label_30875c;
        case 0x308760u: goto label_308760;
        case 0x308764u: goto label_308764;
        case 0x308768u: goto label_308768;
        case 0x30876cu: goto label_30876c;
        case 0x308770u: goto label_308770;
        case 0x308774u: goto label_308774;
        case 0x308778u: goto label_308778;
        case 0x30877cu: goto label_30877c;
        case 0x308780u: goto label_308780;
        case 0x308784u: goto label_308784;
        case 0x308788u: goto label_308788;
        case 0x30878cu: goto label_30878c;
        default: break;
    }

    ctx->pc = 0x308698u;

label_308698:
    // 0x308698: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x308698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_30869c:
    // 0x30869c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3086a0:
    // 0x3086a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3086a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3086a4:
    // 0x3086a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3086a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3086a8:
    // 0x3086a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3086a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3086ac:
    // 0x3086ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3086acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3086b0:
    // 0x3086b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3086b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3086b4:
    // 0x3086b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3086b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3086b8:
    // 0x3086b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3086b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3086bc:
    // 0x3086bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3086bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3086c0:
    // 0x3086c0: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x3086c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_3086c4:
    // 0x3086c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3086c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3086c8:
    // 0x3086c8: 0xc137826  jal         func_4DE098
label_3086cc:
    if (ctx->pc == 0x3086CCu) {
        ctx->pc = 0x3086CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086C8u;
        // 0x3086cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3086D0u;
        goto label_3086d0;
    }
    ctx->pc = 0x3086C8u;
    SET_GPR_U32(ctx, 31, 0x3086D0u);
    ctx->pc = 0x3086CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086C8u;
    // 0x3086cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3086C8u, 0x3086D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086D0u;
label_3086d0:
    // 0x3086d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3086d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3086d4:
    // 0x3086d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3086d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3086d8:
    // 0x3086d8: 0xc0e409a  jal         func_390268
label_3086dc:
    if (ctx->pc == 0x3086DCu) {
        ctx->pc = 0x3086DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086D8u;
        // 0x3086dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3086E0u;
        goto label_3086e0;
    }
    ctx->pc = 0x3086D8u;
    SET_GPR_U32(ctx, 31, 0x3086E0u);
    ctx->pc = 0x3086DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086D8u;
    // 0x3086dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3086D8u, 0x3086E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086E0u;
label_3086e0:
    // 0x3086e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3086e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3086e4:
    // 0x3086e4: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_3086e8:
    if (ctx->pc == 0x3086E8u) {
        ctx->pc = 0x3086E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086E4u;
        // 0x3086e8: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3086ECu;
        goto label_3086ec;
    }
    ctx->pc = 0x3086E4u;
    {
        const bool branch_taken_0x3086e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3086E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086E4u;
        // 0x3086e8: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086e4) {
            ctx->pc = 0x308764u;
            goto label_308764;
        }
    }
    ctx->pc = 0x3086ECu;
label_3086ec:
    // 0x3086ec: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x3086ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_3086f0:
    // 0x3086f0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3086f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3086f4:
    // 0x3086f4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_3086f8:
    if (ctx->pc == 0x3086F8u) {
        ctx->pc = 0x3086F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086F4u;
        // 0x3086f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3086FCu;
        goto label_3086fc;
    }
    ctx->pc = 0x3086F4u;
    {
        const bool branch_taken_0x3086f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3086F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086F4u;
        // 0x3086f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086f4) {
            ctx->pc = 0x308760u;
            goto label_308760;
        }
    }
    ctx->pc = 0x3086FCu;
label_3086fc:
    // 0x3086fc: 0xc089f98  jal         func_227E60
label_308700:
    if (ctx->pc == 0x308700u) {
        ctx->pc = 0x308704u;
        goto label_308704;
    }
    ctx->pc = 0x3086FCu;
    SET_GPR_U32(ctx, 31, 0x308704u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x3086FCu, 0x308704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308704u;
label_308704:
    // 0x308704: 0x10500017  beq         $v0, $s0, . + 4 + (0x17 << 2)
label_308708:
    if (ctx->pc == 0x308708u) {
        ctx->pc = 0x308708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308704u;
        // 0x308708: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30870Cu;
        goto label_30870c;
    }
    ctx->pc = 0x308704u;
    {
        const bool branch_taken_0x308704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x308708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308704u;
        // 0x308708: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308704) {
            ctx->pc = 0x308764u;
            goto label_308764;
        }
    }
    ctx->pc = 0x30870Cu;
label_30870c:
    // 0x30870c: 0xc087502  jal         func_21D408
label_308710:
    if (ctx->pc == 0x308710u) {
        ctx->pc = 0x308710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30870Cu;
        // 0x308710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308714u;
        goto label_308714;
    }
    ctx->pc = 0x30870Cu;
    SET_GPR_U32(ctx, 31, 0x308714u);
    ctx->pc = 0x308710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30870Cu;
    // 0x308710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30870Cu, 0x308714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308714u;
label_308714:
    // 0x308714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308718:
    // 0x308718: 0xc0a3630  jal         func_28D8C0
label_30871c:
    if (ctx->pc == 0x30871Cu) {
        ctx->pc = 0x30871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308718u;
        // 0x30871c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308720u;
        goto label_308720;
    }
    ctx->pc = 0x308718u;
    SET_GPR_U32(ctx, 31, 0x308720u);
    ctx->pc = 0x30871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308718u;
    // 0x30871c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x308718u, 0x308720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308720u;
label_308720:
    // 0x308720: 0xc0a3628  jal         func_28D8A0
label_308724:
    if (ctx->pc == 0x308724u) {
        ctx->pc = 0x308724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308720u;
        // 0x308724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308728u;
        goto label_308728;
    }
    ctx->pc = 0x308720u;
    SET_GPR_U32(ctx, 31, 0x308728u);
    ctx->pc = 0x308724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308720u;
    // 0x308724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x308720u, 0x308728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308728u;
label_308728:
    // 0x308728: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x308728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30872c:
    // 0x30872c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30872cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308730:
    // 0x308730: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308734:
    // 0x308734: 0x40f809  jalr        $v0
label_308738:
    if (ctx->pc == 0x308738u) {
        ctx->pc = 0x308738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308734u;
        // 0x308738: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30873Cu;
        goto label_30873c;
    }
    ctx->pc = 0x308734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30873Cu);
        ctx->pc = 0x308738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308734u;
        // 0x308738: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308734u, 0x30873Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30873Cu;
label_30873c:
    // 0x30873c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x30873cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_308740:
    // 0x308740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308744:
    // 0x308744: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x308744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_308748:
    // 0x308748: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x308748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30874c:
    // 0x30874c: 0xc64d0028  lwc1        $f13, 0x28($s2)
    ctx->pc = 0x30874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_308750:
    // 0x308750: 0xc64e002c  lwc1        $f14, 0x2C($s2)
    ctx->pc = 0x308750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_308754:
    // 0x308754: 0xc64f0030  lwc1        $f15, 0x30($s2)
    ctx->pc = 0x308754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_308758:
    // 0x308758: 0xc0b8c24  jal         func_2E3090
label_30875c:
    if (ctx->pc == 0x30875Cu) {
        ctx->pc = 0x30875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308758u;
        // 0x30875c: 0x8e470034  lw          $a3, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308760u;
        goto label_308760;
    }
    ctx->pc = 0x308758u;
    SET_GPR_U32(ctx, 31, 0x308760u);
    ctx->pc = 0x30875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308758u;
    // 0x30875c: 0x8e470034  lw          $a3, 0x34($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3090u, 0x308758u, 0x308760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308760u;
label_308760:
    // 0x308760: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x308760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_308764:
    // 0x308764: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_308768:
    if (ctx->pc == 0x308768u) {
        ctx->pc = 0x308768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308764u;
        // 0x308768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30876Cu;
        goto label_30876c;
    }
    ctx->pc = 0x308764u;
    {
        const bool branch_taken_0x308764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308764u;
        // 0x308768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308764) {
            ctx->pc = 0x3086C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3086c8;
        }
    }
    ctx->pc = 0x30876Cu;
label_30876c:
    // 0x30876c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30876cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_308770:
    // 0x308770: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x308770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_308774:
    // 0x308774: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x308774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_308778:
    // 0x308778: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x308778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30877c:
    // 0x30877c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x30877cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_308780:
    // 0x308780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308784:
    // 0x308784: 0x3e00008  jr          $ra
label_308788:
    if (ctx->pc == 0x308788u) {
        ctx->pc = 0x308788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308784u;
        // 0x308788: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30878Cu;
        goto label_30878c;
    }
    ctx->pc = 0x308784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308784u;
        // 0x308788: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30878Cu;
label_30878c:
    // 0x30878c: 0x0  nop
    ctx->pc = 0x30878cu;
    // NOP
    ctx->pc = 0x308790u;
}
