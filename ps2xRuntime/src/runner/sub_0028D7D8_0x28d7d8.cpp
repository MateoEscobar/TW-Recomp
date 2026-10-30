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

// Function: sub_0028D7D8
// Address: 0x28d7d8 - 0x28d8a0
void sub_0028D7D8_0x28d7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D7D8_0x28d7d8");
#endif

    switch (ctx->pc) {
        case 0x28d7d8u: goto label_28d7d8;
        case 0x28d7dcu: goto label_28d7dc;
        case 0x28d7e0u: goto label_28d7e0;
        case 0x28d7e4u: goto label_28d7e4;
        case 0x28d7e8u: goto label_28d7e8;
        case 0x28d7ecu: goto label_28d7ec;
        case 0x28d7f0u: goto label_28d7f0;
        case 0x28d7f4u: goto label_28d7f4;
        case 0x28d7f8u: goto label_28d7f8;
        case 0x28d7fcu: goto label_28d7fc;
        case 0x28d800u: goto label_28d800;
        case 0x28d804u: goto label_28d804;
        case 0x28d808u: goto label_28d808;
        case 0x28d80cu: goto label_28d80c;
        case 0x28d810u: goto label_28d810;
        case 0x28d814u: goto label_28d814;
        case 0x28d818u: goto label_28d818;
        case 0x28d81cu: goto label_28d81c;
        case 0x28d820u: goto label_28d820;
        case 0x28d824u: goto label_28d824;
        case 0x28d828u: goto label_28d828;
        case 0x28d82cu: goto label_28d82c;
        case 0x28d830u: goto label_28d830;
        case 0x28d834u: goto label_28d834;
        case 0x28d838u: goto label_28d838;
        case 0x28d83cu: goto label_28d83c;
        case 0x28d840u: goto label_28d840;
        case 0x28d844u: goto label_28d844;
        case 0x28d848u: goto label_28d848;
        case 0x28d84cu: goto label_28d84c;
        case 0x28d850u: goto label_28d850;
        case 0x28d854u: goto label_28d854;
        case 0x28d858u: goto label_28d858;
        case 0x28d85cu: goto label_28d85c;
        case 0x28d860u: goto label_28d860;
        case 0x28d864u: goto label_28d864;
        case 0x28d868u: goto label_28d868;
        case 0x28d86cu: goto label_28d86c;
        case 0x28d870u: goto label_28d870;
        case 0x28d874u: goto label_28d874;
        case 0x28d878u: goto label_28d878;
        case 0x28d87cu: goto label_28d87c;
        case 0x28d880u: goto label_28d880;
        case 0x28d884u: goto label_28d884;
        case 0x28d888u: goto label_28d888;
        case 0x28d88cu: goto label_28d88c;
        case 0x28d890u: goto label_28d890;
        case 0x28d894u: goto label_28d894;
        case 0x28d898u: goto label_28d898;
        case 0x28d89cu: goto label_28d89c;
        default: break;
    }

    ctx->pc = 0x28d7d8u;

label_28d7d8:
    // 0x28d7d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28d7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28d7dc:
    // 0x28d7dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28d7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_28d7e0:
    // 0x28d7e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28d7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_28d7e4:
    // 0x28d7e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d7e8:
    // 0x28d7e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28d7ec:
    // 0x28d7ec: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x28d7ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_28d7f0:
    // 0x28d7f0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28d7f4:
    if (ctx->pc == 0x28D7F4u) {
        ctx->pc = 0x28D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7F0u;
        // 0x28d7f4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D7F8u;
        goto label_28d7f8;
    }
    ctx->pc = 0x28D7F0u;
    {
        const bool branch_taken_0x28d7f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7F0u;
        // 0x28d7f4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7f0) {
            ctx->pc = 0x28D804u;
            goto label_28d804;
        }
    }
    ctx->pc = 0x28D7F8u;
label_28d7f8:
    // 0x28d7f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28d7fc:
    // 0x28d7fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_28d800:
    if (ctx->pc == 0x28D800u) {
        ctx->pc = 0x28D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7FCu;
        // 0x28d800: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D804u;
        goto label_28d804;
    }
    ctx->pc = 0x28D7FCu;
    {
        const bool branch_taken_0x28d7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7FCu;
        // 0x28d800: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7fc) {
            ctx->pc = 0x28D808u;
            goto label_28d808;
        }
    }
    ctx->pc = 0x28D804u;
label_28d804:
    // 0x28d804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28d804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d808:
    // 0x28d808: 0x9222002c  lbu         $v0, 0x2C($s1)
    ctx->pc = 0x28d808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_28d80c:
    // 0x28d80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d810:
    // 0x28d810: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28d810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28d814:
    // 0x28d814: 0xc0a7b76  jal         func_29EDD8
label_28d818:
    if (ctx->pc == 0x28D818u) {
        ctx->pc = 0x28D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D814u;
        // 0x28d818: 0xa222002c  sb          $v0, 0x2C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D81Cu;
        goto label_28d81c;
    }
    ctx->pc = 0x28D814u;
    SET_GPR_U32(ctx, 31, 0x28D81Cu);
    ctx->pc = 0x28D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D814u;
    // 0x28d818: 0xa222002c  sb          $v0, 0x2C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EDD8u, 0x28D814u, 0x28D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D81Cu;
label_28d81c:
    // 0x28d81c: 0xc0a4e6c  jal         func_2939B0
label_28d820:
    if (ctx->pc == 0x28D820u) {
        ctx->pc = 0x28D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D81Cu;
        // 0x28d820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D824u;
        goto label_28d824;
    }
    ctx->pc = 0x28D81Cu;
    SET_GPR_U32(ctx, 31, 0x28D824u);
    ctx->pc = 0x28D820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D81Cu;
    // 0x28d820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2939B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2939B0u, 0x28D81Cu, 0x28D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D824u;
label_28d824:
    // 0x28d824: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x28d824u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_28d828:
    // 0x28d828: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28d82c:
    if (ctx->pc == 0x28D82Cu) {
        ctx->pc = 0x28D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D828u;
        // 0x28d82c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D830u;
        goto label_28d830;
    }
    ctx->pc = 0x28D828u;
    {
        const bool branch_taken_0x28d828 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D828u;
        // 0x28d82c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d828) {
            ctx->pc = 0x28D83Cu;
            goto label_28d83c;
        }
    }
    ctx->pc = 0x28D830u;
label_28d830:
    // 0x28d830: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28d834:
    // 0x28d834: 0x10000002  b           . + 4 + (0x2 << 2)
label_28d838:
    if (ctx->pc == 0x28D838u) {
        ctx->pc = 0x28D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D834u;
        // 0x28d838: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D83Cu;
        goto label_28d83c;
    }
    ctx->pc = 0x28D834u;
    {
        const bool branch_taken_0x28d834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D834u;
        // 0x28d838: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d834) {
            ctx->pc = 0x28D840u;
            goto label_28d840;
        }
    }
    ctx->pc = 0x28D83Cu;
label_28d83c:
    // 0x28d83c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28d83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d840:
    // 0x28d840: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_28d844:
    if (ctx->pc == 0x28D844u) {
        ctx->pc = 0x28D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D840u;
        // 0x28d844: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D848u;
        goto label_28d848;
    }
    ctx->pc = 0x28D840u;
    {
        const bool branch_taken_0x28d840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d840) {
            ctx->pc = 0x28D844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D840u;
            // 0x28d844: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D854u;
            goto label_28d854;
        }
    }
    ctx->pc = 0x28D848u;
label_28d848:
    // 0x28d848: 0xc0a7b8c  jal         func_29EE30
label_28d84c:
    if (ctx->pc == 0x28D84Cu) {
        ctx->pc = 0x28D850u;
        goto label_28d850;
    }
    ctx->pc = 0x28D848u;
    SET_GPR_U32(ctx, 31, 0x28D850u);
    ctx->pc = 0x29EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EE30u, 0x28D848u, 0x28D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D850u;
label_28d850:
    // 0x28d850: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x28d850u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_28d854:
    // 0x28d854: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
label_28d858:
    if (ctx->pc == 0x28D858u) {
        ctx->pc = 0x28D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D854u;
        // 0x28d858: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D85Cu;
        goto label_28d85c;
    }
    ctx->pc = 0x28D854u;
    {
        const bool branch_taken_0x28d854 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28d854) {
            ctx->pc = 0x28D858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D854u;
            // 0x28d858: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D888u;
            goto label_28d888;
        }
    }
    ctx->pc = 0x28D85Cu;
label_28d85c:
    // 0x28d85c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28d860:
    // 0x28d860: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x28d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_28d864:
    // 0x28d864: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28d864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28d868:
    // 0x28d868: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28d868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28d86c:
    // 0x28d86c: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x28d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_28d870:
    // 0x28d870: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28d870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28d874:
    // 0x28d874: 0x84660040  lh          $a2, 0x40($v1)
    ctx->pc = 0x28d874u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28d878:
    // 0x28d878: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28d87c:
    // 0x28d87c: 0x40f809  jalr        $v0
label_28d880:
    if (ctx->pc == 0x28D880u) {
        ctx->pc = 0x28D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D87Cu;
        // 0x28d880: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D884u;
        goto label_28d884;
    }
    ctx->pc = 0x28D87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D884u);
        ctx->pc = 0x28D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D87Cu;
        // 0x28d880: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D87Cu, 0x28D884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D884u;
label_28d884:
    // 0x28d884: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x28d884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_28d888:
    // 0x28d888: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28d888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28d88c:
    // 0x28d88c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28d88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28d890:
    // 0x28d890: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28d890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28d894:
    // 0x28d894: 0x3e00008  jr          $ra
label_28d898:
    if (ctx->pc == 0x28D898u) {
        ctx->pc = 0x28D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D894u;
        // 0x28d898: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D89Cu;
        goto label_28d89c;
    }
    ctx->pc = 0x28D894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D894u;
        // 0x28d898: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D89Cu;
label_28d89c:
    // 0x28d89c: 0x0  nop
    ctx->pc = 0x28d89cu;
    // NOP
    ctx->pc = 0x28d8a0u;
}
