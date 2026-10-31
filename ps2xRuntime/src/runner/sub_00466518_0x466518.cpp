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

// Function: sub_00466518
// Address: 0x466518 - 0x466648
void sub_00466518_0x466518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466518_0x466518");
#endif

    switch (ctx->pc) {
        case 0x466598u: goto label_466598;
        case 0x4665b0u: goto label_4665b0;
        case 0x4665c8u: goto label_4665c8;
        case 0x4665dcu: goto label_4665dc;
        case 0x4665f8u: goto label_4665f8;
        case 0x466608u: goto label_466608;
        case 0x466620u: goto label_466620;
        default: break;
    }

    ctx->pc = 0x466518u;

    // 0x466518: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x466518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x46651c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46651cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x466520: 0x8c62e688  lw          $v0, -0x1978($v1)
    ctx->pc = 0x466520u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52E688u));
    // 0x466524: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x466524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466528: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x466528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x46652c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x466530: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x466530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x466534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x466534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x466538: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x466538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x46653c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46653cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x466540: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x466540u;
    {
        const bool branch_taken_0x466540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x466544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466540u;
        // 0x466544: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466540) {
            ctx->pc = 0x46662Cu;
            goto label_46662c;
        }
    }
    ctx->pc = 0x466548u;
    // 0x466548: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x466548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x46654c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x46654cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x466550: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x466550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x466554: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x466554u;
    {
        const bool branch_taken_0x466554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466554u;
        // 0x466558: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466554) {
            ctx->pc = 0x466618u;
            goto label_466618;
        }
    }
    ctx->pc = 0x46655Cu;
    // 0x46655c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x46655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x466560: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x466560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x466564: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x466564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x466568: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x466568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x46656c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x46656cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x466570: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x466570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x466574: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x466574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x466578: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x466578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x46657c: 0x8cf20014  lw          $s2, 0x14($a3)
    ctx->pc = 0x46657cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x466580: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x466580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x466584: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x466584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466588: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x466588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x46658c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46658cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x466590: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x466590u;
    SET_GPR_U32(ctx, 31, 0x466598u);
    ctx->pc = 0x466594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466590u;
    // 0x466594: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x466590u, 0x466598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466598u;
label_466598:
    // 0x466598: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x466598u;
    {
        const bool branch_taken_0x466598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466598u;
        // 0x46659c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466598) {
            ctx->pc = 0x466630u;
            goto label_466630;
        }
    }
    ctx->pc = 0x4665A0u;
    // 0x4665a0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4665a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4665a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4665a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4665a8: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x4665A8u;
    SET_GPR_U32(ctx, 31, 0x4665B0u);
    ctx->pc = 0x4665ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4665A8u;
    // 0x4665ac: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x4665A8u, 0x4665B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4665B0u;
label_4665b0:
    // 0x4665b0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4665B0u;
    {
        const bool branch_taken_0x4665b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4665B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4665B0u;
        // 0x4665b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4665b0) {
            ctx->pc = 0x466630u;
            goto label_466630;
        }
    }
    ctx->pc = 0x4665B8u;
    // 0x4665b8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x4665b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4665bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4665bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4665c0: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4665C0u;
    SET_GPR_U32(ctx, 31, 0x4665C8u);
    ctx->pc = 0x4665C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4665C0u;
    // 0x4665c4: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4665C0u, 0x4665C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4665C8u;
label_4665c8:
    // 0x4665c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4665C8u;
    {
        const bool branch_taken_0x4665c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4665CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4665C8u;
        // 0x4665cc: 0x123100  sll         $a2, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4665c8) {
            ctx->pc = 0x466610u;
            goto label_466610;
        }
    }
    ctx->pc = 0x4665D0u;
    // 0x4665d0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x4665d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4665d4: 0xc11ef3c  jal         func_47BCF0
    ctx->pc = 0x4665D4u;
    SET_GPR_U32(ctx, 31, 0x4665DCu);
    ctx->pc = 0x4665D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4665D4u;
    // 0x4665d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BCF0u, 0x4665D4u, 0x4665DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4665DCu;
label_4665dc:
    // 0x4665dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4665DCu;
    {
        const bool branch_taken_0x4665dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4665E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4665DCu;
        // 0x4665e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4665dc) {
            ctx->pc = 0x466630u;
            goto label_466630;
        }
    }
    ctx->pc = 0x4665E4u;
    // 0x4665e4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4665e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4665e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4665e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4665ec: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4665ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4665f0: 0xc11ef3c  jal         func_47BCF0
    ctx->pc = 0x4665F0u;
    SET_GPR_U32(ctx, 31, 0x4665F8u);
    ctx->pc = 0x4665F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4665F0u;
    // 0x4665f4: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BCF0u, 0x4665F0u, 0x4665F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4665F8u;
label_4665f8:
    // 0x4665f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4665F8u;
    {
        const bool branch_taken_0x4665f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4665FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4665F8u;
        // 0x4665fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4665f8) {
            ctx->pc = 0x466610u;
            goto label_466610;
        }
    }
    ctx->pc = 0x466600u;
    // 0x466600: 0xc119e8c  jal         func_467A30
    ctx->pc = 0x466600u;
    SET_GPR_U32(ctx, 31, 0x466608u);
    ctx->pc = 0x466604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466600u;
    // 0x466604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x467A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467A30u, 0x466600u, 0x466608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466608u;
label_466608:
    // 0x466608: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x466608u;
    {
        const bool branch_taken_0x466608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466608u;
        // 0x46660c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466608) {
            ctx->pc = 0x466630u;
            goto label_466630;
        }
    }
    ctx->pc = 0x466610u;
label_466610:
    // 0x466610: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x466610u;
    {
        const bool branch_taken_0x466610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466610u;
        // 0x466614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466610) {
            ctx->pc = 0x466630u;
            goto label_466630;
        }
    }
    ctx->pc = 0x466618u;
label_466618:
    // 0x466618: 0xc119cf4  jal         func_4673D0
    ctx->pc = 0x466618u;
    SET_GPR_U32(ctx, 31, 0x466620u);
    ctx->pc = 0x46661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466618u;
    // 0x46661c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4673D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4673D0u, 0x466618u, 0x466620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466620u;
label_466620:
    // 0x466620: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x466620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466624: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x466624u;
    {
        const bool branch_taken_0x466624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x466628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466624u;
        // 0x466628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466624) {
            ctx->pc = 0x466630u;
            goto label_466630;
        }
    }
    ctx->pc = 0x46662Cu;
label_46662c:
    // 0x46662c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46662cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_466630:
    // 0x466630: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x466630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x466634: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x466634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x466638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x466638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46663c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46663cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466640: 0x3e00008  jr          $ra
    ctx->pc = 0x466640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466640u;
        // 0x466644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466648u;
}
