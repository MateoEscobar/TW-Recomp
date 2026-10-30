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

// Function: sub_001696E0
// Address: 0x1696e0 - 0x169878
void sub_001696E0_0x1696e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001696E0_0x1696e0");
#endif

    switch (ctx->pc) {
        case 0x169710u: goto label_169710;
        case 0x169718u: goto label_169718;
        case 0x169730u: goto label_169730;
        case 0x169760u: goto label_169760;
        case 0x169768u: goto label_169768;
        case 0x169770u: goto label_169770;
        case 0x169780u: goto label_169780;
        case 0x169794u: goto label_169794;
        case 0x1697ccu: goto label_1697cc;
        case 0x1697dcu: goto label_1697dc;
        case 0x16980cu: goto label_16980c;
        case 0x169820u: goto label_169820;
        default: break;
    }

    ctx->pc = 0x1696e0u;

    // 0x1696e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1696e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1696e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1696e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1696e8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1696e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1696ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1696ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696f0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1696f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1696f4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1696f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1696f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1696fc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1696fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x169700: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x169700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x169704: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x169704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x169708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16970c: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x16970cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
label_169710:
    // 0x169710: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x169710u;
    SET_GPR_U32(ctx, 31, 0x169718u);
    ctx->pc = 0x169714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169710u;
    // 0x169714: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x169710u, 0x169718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169718u;
label_169718:
    // 0x169718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16971c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x169720: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x169720u;
    {
        const bool branch_taken_0x169720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169720u;
        // 0x169724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169720) {
            ctx->pc = 0x169838u;
            goto label_169838;
        }
    }
    ctx->pc = 0x169728u;
    // 0x169728: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x169728u;
    SET_GPR_U32(ctx, 31, 0x169730u);
    ctx->pc = 0x16972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169728u;
    // 0x16972c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x169728u, 0x169730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169730u;
label_169730:
    // 0x169730: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x169730u;
    {
        const bool branch_taken_0x169730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169730) {
            ctx->pc = 0x169734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169730u;
            // 0x169734: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16983Cu;
            goto label_16983c;
        }
    }
    ctx->pc = 0x169738u;
    // 0x169738: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x169738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16973c: 0x2442ffe9  addiu       $v0, $v0, -0x17
    ctx->pc = 0x16973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967273));
    // 0x169740: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x169740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x169744: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x169744u;
    {
        const bool branch_taken_0x169744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169744) {
            ctx->pc = 0x169748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169744u;
            // 0x169748: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16983Cu;
            goto label_16983c;
        }
    }
    ctx->pc = 0x16974Cu;
    // 0x16974c: 0x26140048  addiu       $s4, $s0, 0x48
    ctx->pc = 0x16974cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x169750: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x169750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169754: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x169754u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169758: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x169758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16975c: 0x0  nop
    ctx->pc = 0x16975cu;
    // NOP
label_169760:
    // 0x169760: 0xc137826  jal         func_4DE098
    ctx->pc = 0x169760u;
    SET_GPR_U32(ctx, 31, 0x169768u);
    ctx->pc = 0x169764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169760u;
    // 0x169764: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x169760u, 0x169768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169768u;
label_169768:
    // 0x169768: 0xc0e409a  jal         func_390268
    ctx->pc = 0x169768u;
    SET_GPR_U32(ctx, 31, 0x169770u);
    ctx->pc = 0x16976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169768u;
    // 0x16976c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169768u, 0x169770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169770u;
label_169770:
    // 0x169770: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x169770u;
    {
        const bool branch_taken_0x169770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169770) {
            ctx->pc = 0x169774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169770u;
            // 0x169774: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16982Cu;
            goto label_16982c;
        }
    }
    ctx->pc = 0x169778u;
    // 0x169778: 0xc087502  jal         func_21D408
    ctx->pc = 0x169778u;
    SET_GPR_U32(ctx, 31, 0x169780u);
    ctx->pc = 0x16977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169778u;
    // 0x16977c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x169778u, 0x169780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169780u;
label_169780:
    // 0x169780: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x169780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169784: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x169784u;
    {
        const bool branch_taken_0x169784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169784u;
        // 0x169788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169784) {
            ctx->pc = 0x169828u;
            goto label_169828;
        }
    }
    ctx->pc = 0x16978Cu;
    // 0x16978c: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x16978Cu;
    SET_GPR_U32(ctx, 31, 0x169794u);
    ctx->pc = 0x169790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16978Cu;
    // 0x169790: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x16978Cu, 0x169794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169794u;
label_169794:
    // 0x169794: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x169794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x169798: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x169798u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16979c: 0x10760019  beq         $v1, $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x16979Cu;
    {
        const bool branch_taken_0x16979c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x1697A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16979Cu;
        // 0x1697a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16979c) {
            ctx->pc = 0x169804u;
            goto label_169804;
        }
    }
    ctx->pc = 0x1697A4u;
    // 0x1697a4: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1697A4u;
    {
        const bool branch_taken_0x1697a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1697A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697A4u;
        // 0x1697a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697a4) {
            ctx->pc = 0x1697C4u;
            goto label_1697c4;
        }
    }
    ctx->pc = 0x1697ACu;
    // 0x1697ac: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x1697acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1697b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1697b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1697b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1697B4u;
    {
        const bool branch_taken_0x1697b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1697B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697B4u;
        // 0x1697b8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697b4) {
            ctx->pc = 0x1697C4u;
            goto label_1697c4;
        }
    }
    ctx->pc = 0x1697BCu;
    // 0x1697bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1697bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1697c0: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x1697c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1697c4:
    // 0x1697c4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1697C4u;
    SET_GPR_U32(ctx, 31, 0x1697CCu);
    ctx->pc = 0x1697C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697C4u;
    // 0x1697c8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1697C4u, 0x1697CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697CCu;
label_1697cc:
    // 0x1697cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1697CCu;
    {
        const bool branch_taken_0x1697cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697CCu;
        // 0x1697d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697cc) {
            ctx->pc = 0x169804u;
            goto label_169804;
        }
    }
    ctx->pc = 0x1697D4u;
    // 0x1697d4: 0xc087502  jal         func_21D408
    ctx->pc = 0x1697D4u;
    SET_GPR_U32(ctx, 31, 0x1697DCu);
    ctx->pc = 0x1697D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697D4u;
    // 0x1697d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1697D4u, 0x1697DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697DCu;
label_1697dc:
    // 0x1697dc: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1697dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1697e0: 0x54750008  bnel        $v1, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1697E0u;
    {
        const bool branch_taken_0x1697e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1697e0) {
            ctx->pc = 0x1697E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1697E0u;
            // 0x1697e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169804u;
            goto label_169804;
        }
    }
    ctx->pc = 0x1697E8u;
    // 0x1697e8: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x1697e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
    // 0x1697ec: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1697ECu;
    {
        const bool branch_taken_0x1697ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1697F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697ECu;
        // 0x1697f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697ec) {
            ctx->pc = 0x16984Cu;
            goto label_16984c;
        }
    }
    ctx->pc = 0x1697F4u;
    // 0x1697f4: 0x9202005d  lbu         $v0, 0x5D($s0)
    ctx->pc = 0x1697f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x1697f8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1697F8u;
    {
        const bool branch_taken_0x1697f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1697FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697F8u;
        // 0x1697fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697f8) {
            ctx->pc = 0x16984Cu;
            goto label_16984c;
        }
    }
    ctx->pc = 0x169800u;
    // 0x169800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_169804:
    // 0x169804: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x169804u;
    SET_GPR_U32(ctx, 31, 0x16980Cu);
    ctx->pc = 0x169808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169804u;
    // 0x169808: 0x24050076  addiu       $a1, $zero, 0x76 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x169804u, 0x16980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16980Cu;
label_16980c:
    // 0x16980c: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16980Cu;
    {
        const bool branch_taken_0x16980c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x169810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16980Cu;
        // 0x169810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16980c) {
            ctx->pc = 0x16984Cu;
            goto label_16984c;
        }
    }
    ctx->pc = 0x169814u;
    // 0x169814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169818: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x169818u;
    SET_GPR_U32(ctx, 31, 0x169820u);
    ctx->pc = 0x16981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169818u;
    // 0x16981c: 0x24050075  addiu       $a1, $zero, 0x75 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x169818u, 0x169820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169820u;
label_169820:
    // 0x169820: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x169820u;
    {
        const bool branch_taken_0x169820 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x169824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169820u;
        // 0x169824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169820) {
            ctx->pc = 0x16984Cu;
            goto label_16984c;
        }
    }
    ctx->pc = 0x169828u;
label_169828:
    // 0x169828: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x169828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16982c:
    // 0x16982c: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x16982cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x169830: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x169830u;
    {
        const bool branch_taken_0x169830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169830u;
        // 0x169834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169830) {
            ctx->pc = 0x169760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169760;
        }
    }
    ctx->pc = 0x169838u;
label_169838:
    // 0x169838: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16983c:
    // 0x16983c: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x16983cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x169840: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x169840u;
    {
        const bool branch_taken_0x169840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169840u;
        // 0x169844: 0x132400  sll         $a0, $s3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169840) {
            ctx->pc = 0x169710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169710;
        }
    }
    ctx->pc = 0x169848u;
    // 0x169848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16984c:
    // 0x16984c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16984cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169850: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x169850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169854: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x169854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x169858: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x169858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16985c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x16985cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169860: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x169860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169864: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x169864u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16986c: 0x3e00008  jr          $ra
    ctx->pc = 0x16986Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16986Cu;
        // 0x169870: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16986Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169874u;
    // 0x169874: 0x0  nop
    ctx->pc = 0x169874u;
    // NOP
    ctx->pc = 0x169878u;
}
