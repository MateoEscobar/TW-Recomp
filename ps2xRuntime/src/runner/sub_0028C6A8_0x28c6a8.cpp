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

// Function: sub_0028C6A8
// Address: 0x28c6a8 - 0x28c780
void sub_0028C6A8_0x28c6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C6A8_0x28c6a8");
#endif

    switch (ctx->pc) {
        case 0x28c6a8u: goto label_28c6a8;
        case 0x28c6acu: goto label_28c6ac;
        case 0x28c6b0u: goto label_28c6b0;
        case 0x28c6b4u: goto label_28c6b4;
        case 0x28c6b8u: goto label_28c6b8;
        case 0x28c6bcu: goto label_28c6bc;
        case 0x28c6c0u: goto label_28c6c0;
        case 0x28c6c4u: goto label_28c6c4;
        case 0x28c6c8u: goto label_28c6c8;
        case 0x28c6ccu: goto label_28c6cc;
        case 0x28c6d0u: goto label_28c6d0;
        case 0x28c6d4u: goto label_28c6d4;
        case 0x28c6d8u: goto label_28c6d8;
        case 0x28c6dcu: goto label_28c6dc;
        case 0x28c6e0u: goto label_28c6e0;
        case 0x28c6e4u: goto label_28c6e4;
        case 0x28c6e8u: goto label_28c6e8;
        case 0x28c6ecu: goto label_28c6ec;
        case 0x28c6f0u: goto label_28c6f0;
        case 0x28c6f4u: goto label_28c6f4;
        case 0x28c6f8u: goto label_28c6f8;
        case 0x28c6fcu: goto label_28c6fc;
        case 0x28c700u: goto label_28c700;
        case 0x28c704u: goto label_28c704;
        case 0x28c708u: goto label_28c708;
        case 0x28c70cu: goto label_28c70c;
        case 0x28c710u: goto label_28c710;
        case 0x28c714u: goto label_28c714;
        case 0x28c718u: goto label_28c718;
        case 0x28c71cu: goto label_28c71c;
        case 0x28c720u: goto label_28c720;
        case 0x28c724u: goto label_28c724;
        case 0x28c728u: goto label_28c728;
        case 0x28c72cu: goto label_28c72c;
        case 0x28c730u: goto label_28c730;
        case 0x28c734u: goto label_28c734;
        case 0x28c738u: goto label_28c738;
        case 0x28c73cu: goto label_28c73c;
        case 0x28c740u: goto label_28c740;
        case 0x28c744u: goto label_28c744;
        case 0x28c748u: goto label_28c748;
        case 0x28c74cu: goto label_28c74c;
        case 0x28c750u: goto label_28c750;
        case 0x28c754u: goto label_28c754;
        case 0x28c758u: goto label_28c758;
        case 0x28c75cu: goto label_28c75c;
        case 0x28c760u: goto label_28c760;
        case 0x28c764u: goto label_28c764;
        case 0x28c768u: goto label_28c768;
        case 0x28c76cu: goto label_28c76c;
        case 0x28c770u: goto label_28c770;
        case 0x28c774u: goto label_28c774;
        case 0x28c778u: goto label_28c778;
        case 0x28c77cu: goto label_28c77c;
        default: break;
    }

    ctx->pc = 0x28c6a8u;

label_28c6a8:
    // 0x28c6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28c6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28c6ac:
    // 0x28c6ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28c6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28c6b0:
    // 0x28c6b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28c6b4:
    // 0x28c6b4: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x28c6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_28c6b8:
    // 0x28c6b8: 0x56000021  bnel        $s0, $zero, . + 4 + (0x21 << 2)
label_28c6bc:
    if (ctx->pc == 0x28C6BCu) {
        ctx->pc = 0x28C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6B8u;
        // 0x28c6bc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C6C0u;
        goto label_28c6c0;
    }
    ctx->pc = 0x28C6B8u;
    {
        const bool branch_taken_0x28c6b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c6b8) {
            ctx->pc = 0x28C6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C6B8u;
            // 0x28c6bc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C740u;
            goto label_28c740;
        }
    }
    ctx->pc = 0x28C6C0u;
label_28c6c0:
    // 0x28c6c0: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x28c6c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_28c6c4:
    // 0x28c6c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28c6c8:
    if (ctx->pc == 0x28C6C8u) {
        ctx->pc = 0x28C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6C4u;
        // 0x28c6c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C6CCu;
        goto label_28c6cc;
    }
    ctx->pc = 0x28C6C4u;
    {
        const bool branch_taken_0x28c6c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6C4u;
        // 0x28c6c8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6c4) {
            ctx->pc = 0x28C6D8u;
            goto label_28c6d8;
        }
    }
    ctx->pc = 0x28C6CCu;
label_28c6cc:
    // 0x28c6cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28c6d0:
    // 0x28c6d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_28c6d4:
    if (ctx->pc == 0x28C6D4u) {
        ctx->pc = 0x28C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6D0u;
        // 0x28c6d4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C6D8u;
        goto label_28c6d8;
    }
    ctx->pc = 0x28C6D0u;
    {
        const bool branch_taken_0x28c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6D0u;
        // 0x28c6d4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6d0) {
            ctx->pc = 0x28C6DCu;
            goto label_28c6dc;
        }
    }
    ctx->pc = 0x28C6D8u;
label_28c6d8:
    // 0x28c6d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c6dc:
    // 0x28c6dc: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_28c6e0:
    if (ctx->pc == 0x28C6E0u) {
        ctx->pc = 0x28C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6DCu;
        // 0x28c6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C6E4u;
        goto label_28c6e4;
    }
    ctx->pc = 0x28C6DCu;
    {
        const bool branch_taken_0x28c6dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6DCu;
        // 0x28c6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6dc) {
            ctx->pc = 0x28C76Cu;
            goto label_28c76c;
        }
    }
    ctx->pc = 0x28C6E4u;
label_28c6e4:
    // 0x28c6e4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x28c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_28c6e8:
    // 0x28c6e8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28c6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28c6ec:
    // 0x28c6ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28c6f0:
    // 0x28c6f0: 0x40f809  jalr        $v0
label_28c6f4:
    if (ctx->pc == 0x28C6F4u) {
        ctx->pc = 0x28C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6F0u;
        // 0x28c6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C6F8u;
        goto label_28c6f8;
    }
    ctx->pc = 0x28C6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C6F8u);
        ctx->pc = 0x28C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6F0u;
        // 0x28c6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C6F0u, 0x28C6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C6F8u;
label_28c6f8:
    // 0x28c6f8: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x28c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_28c6fc:
    // 0x28c6fc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_28c700:
    if (ctx->pc == 0x28C700u) {
        ctx->pc = 0x28C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C6FCu;
        // 0x28c700: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C704u;
        goto label_28c704;
    }
    ctx->pc = 0x28C6FCu;
    {
        const bool branch_taken_0x28c6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28c6fc) {
            ctx->pc = 0x28C700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C6FCu;
            // 0x28c700: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C714u;
            goto label_28c714;
        }
    }
    ctx->pc = 0x28C704u;
label_28c704:
    // 0x28c704: 0xc0ad5a6  jal         func_2B5698
label_28c708:
    if (ctx->pc == 0x28C708u) {
        ctx->pc = 0x28C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C704u;
        // 0x28c708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C70Cu;
        goto label_28c70c;
    }
    ctx->pc = 0x28C704u;
    SET_GPR_U32(ctx, 31, 0x28C70Cu);
    ctx->pc = 0x28C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C704u;
    // 0x28c708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5698u, 0x28C704u, 0x28C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C70Cu;
label_28c70c:
    // 0x28c70c: 0x10000018  b           . + 4 + (0x18 << 2)
label_28c710:
    if (ctx->pc == 0x28C710u) {
        ctx->pc = 0x28C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C70Cu;
        // 0x28c710: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C714u;
        goto label_28c714;
    }
    ctx->pc = 0x28C70Cu;
    {
        const bool branch_taken_0x28c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C70Cu;
        // 0x28c710: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c70c) {
            ctx->pc = 0x28C770u;
            goto label_28c770;
        }
    }
    ctx->pc = 0x28C714u;
label_28c714:
    // 0x28c714: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28c714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28c718:
    // 0x28c718: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28c71c:
    // 0x28c71c: 0x40f809  jalr        $v0
label_28c720:
    if (ctx->pc == 0x28C720u) {
        ctx->pc = 0x28C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C71Cu;
        // 0x28c720: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C724u;
        goto label_28c724;
    }
    ctx->pc = 0x28C71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C724u);
        ctx->pc = 0x28C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C71Cu;
        // 0x28c720: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C71Cu, 0x28C724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C724u;
label_28c724:
    // 0x28c724: 0x24030085  addiu       $v1, $zero, 0x85
    ctx->pc = 0x28c724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_28c728:
    // 0x28c728: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_28c72c:
    if (ctx->pc == 0x28C72Cu) {
        ctx->pc = 0x28C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C728u;
        // 0x28c72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C730u;
        goto label_28c730;
    }
    ctx->pc = 0x28C728u;
    {
        const bool branch_taken_0x28c728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C728u;
        // 0x28c72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c728) {
            ctx->pc = 0x28C76Cu;
            goto label_28c76c;
        }
    }
    ctx->pc = 0x28C730u;
label_28c730:
    // 0x28c730: 0xc0baad4  jal         func_2EAB50
label_28c734:
    if (ctx->pc == 0x28C734u) {
        ctx->pc = 0x28C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C730u;
        // 0x28c734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C738u;
        goto label_28c738;
    }
    ctx->pc = 0x28C730u;
    SET_GPR_U32(ctx, 31, 0x28C738u);
    ctx->pc = 0x28C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C730u;
    // 0x28c734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB50u, 0x28C730u, 0x28C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C738u;
label_28c738:
    // 0x28c738: 0x1000000d  b           . + 4 + (0xD << 2)
label_28c73c:
    if (ctx->pc == 0x28C73Cu) {
        ctx->pc = 0x28C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C738u;
        // 0x28c73c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C740u;
        goto label_28c740;
    }
    ctx->pc = 0x28C738u;
    {
        const bool branch_taken_0x28c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C738u;
        // 0x28c73c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c738) {
            ctx->pc = 0x28C770u;
            goto label_28c770;
        }
    }
    ctx->pc = 0x28C740u;
label_28c740:
    // 0x28c740: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28c740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28c744:
    // 0x28c744: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28c744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28c748:
    // 0x28c748: 0x40f809  jalr        $v0
label_28c74c:
    if (ctx->pc == 0x28C74Cu) {
        ctx->pc = 0x28C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C748u;
        // 0x28c74c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C750u;
        goto label_28c750;
    }
    ctx->pc = 0x28C748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C750u);
        ctx->pc = 0x28C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C748u;
        // 0x28c74c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C748u, 0x28C750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C750u;
label_28c750:
    // 0x28c750: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x28c750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_28c754:
    // 0x28c754: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_28c758:
    if (ctx->pc == 0x28C758u) {
        ctx->pc = 0x28C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C754u;
        // 0x28c758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C75Cu;
        goto label_28c75c;
    }
    ctx->pc = 0x28C754u;
    {
        const bool branch_taken_0x28c754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C754u;
        // 0x28c758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c754) {
            ctx->pc = 0x28C76Cu;
            goto label_28c76c;
        }
    }
    ctx->pc = 0x28C75Cu;
label_28c75c:
    // 0x28c75c: 0xc0ad2a8  jal         func_2B4AA0
label_28c760:
    if (ctx->pc == 0x28C760u) {
        ctx->pc = 0x28C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C75Cu;
        // 0x28c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C764u;
        goto label_28c764;
    }
    ctx->pc = 0x28C75Cu;
    SET_GPR_U32(ctx, 31, 0x28C764u);
    ctx->pc = 0x28C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C75Cu;
    // 0x28c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4AA0u, 0x28C75Cu, 0x28C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C764u;
label_28c764:
    // 0x28c764: 0x10000002  b           . + 4 + (0x2 << 2)
label_28c768:
    if (ctx->pc == 0x28C768u) {
        ctx->pc = 0x28C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C764u;
        // 0x28c768: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C76Cu;
        goto label_28c76c;
    }
    ctx->pc = 0x28C764u;
    {
        const bool branch_taken_0x28c764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C764u;
        // 0x28c768: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c764) {
            ctx->pc = 0x28C770u;
            goto label_28c770;
        }
    }
    ctx->pc = 0x28C76Cu;
label_28c76c:
    // 0x28c76c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28c76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c770:
    // 0x28c770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28c774:
    // 0x28c774: 0x3e00008  jr          $ra
label_28c778:
    if (ctx->pc == 0x28C778u) {
        ctx->pc = 0x28C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C774u;
        // 0x28c778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C77Cu;
        goto label_28c77c;
    }
    ctx->pc = 0x28C774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C774u;
        // 0x28c778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C77Cu;
label_28c77c:
    // 0x28c77c: 0x0  nop
    ctx->pc = 0x28c77cu;
    // NOP
    ctx->pc = 0x28c780u;
}
