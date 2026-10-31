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

// Function: sub_0039C698
// Address: 0x39c698 - 0x39c770
void sub_0039C698_0x39c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C698_0x39c698");
#endif

    switch (ctx->pc) {
        case 0x39c698u: goto label_39c698;
        case 0x39c69cu: goto label_39c69c;
        case 0x39c6a0u: goto label_39c6a0;
        case 0x39c6a4u: goto label_39c6a4;
        case 0x39c6a8u: goto label_39c6a8;
        case 0x39c6acu: goto label_39c6ac;
        case 0x39c6b0u: goto label_39c6b0;
        case 0x39c6b4u: goto label_39c6b4;
        case 0x39c6b8u: goto label_39c6b8;
        case 0x39c6bcu: goto label_39c6bc;
        case 0x39c6c0u: goto label_39c6c0;
        case 0x39c6c4u: goto label_39c6c4;
        case 0x39c6c8u: goto label_39c6c8;
        case 0x39c6ccu: goto label_39c6cc;
        case 0x39c6d0u: goto label_39c6d0;
        case 0x39c6d4u: goto label_39c6d4;
        case 0x39c6d8u: goto label_39c6d8;
        case 0x39c6dcu: goto label_39c6dc;
        case 0x39c6e0u: goto label_39c6e0;
        case 0x39c6e4u: goto label_39c6e4;
        case 0x39c6e8u: goto label_39c6e8;
        case 0x39c6ecu: goto label_39c6ec;
        case 0x39c6f0u: goto label_39c6f0;
        case 0x39c6f4u: goto label_39c6f4;
        case 0x39c6f8u: goto label_39c6f8;
        case 0x39c6fcu: goto label_39c6fc;
        case 0x39c700u: goto label_39c700;
        case 0x39c704u: goto label_39c704;
        case 0x39c708u: goto label_39c708;
        case 0x39c70cu: goto label_39c70c;
        case 0x39c710u: goto label_39c710;
        case 0x39c714u: goto label_39c714;
        case 0x39c718u: goto label_39c718;
        case 0x39c71cu: goto label_39c71c;
        case 0x39c720u: goto label_39c720;
        case 0x39c724u: goto label_39c724;
        case 0x39c728u: goto label_39c728;
        case 0x39c72cu: goto label_39c72c;
        case 0x39c730u: goto label_39c730;
        case 0x39c734u: goto label_39c734;
        case 0x39c738u: goto label_39c738;
        case 0x39c73cu: goto label_39c73c;
        case 0x39c740u: goto label_39c740;
        case 0x39c744u: goto label_39c744;
        case 0x39c748u: goto label_39c748;
        case 0x39c74cu: goto label_39c74c;
        case 0x39c750u: goto label_39c750;
        case 0x39c754u: goto label_39c754;
        case 0x39c758u: goto label_39c758;
        case 0x39c75cu: goto label_39c75c;
        case 0x39c760u: goto label_39c760;
        case 0x39c764u: goto label_39c764;
        case 0x39c768u: goto label_39c768;
        case 0x39c76cu: goto label_39c76c;
        default: break;
    }

    ctx->pc = 0x39c698u;

label_39c698:
    // 0x39c698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39c698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39c69c:
    // 0x39c69c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x39c69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_39c6a0:
    // 0x39c6a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39c6a4:
    // 0x39c6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c6a8:
    // 0x39c6a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x39c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_39c6ac:
    // 0x39c6ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39c6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c6b0:
    // 0x39c6b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c6b4:
    // 0x39c6b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39c6b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39c6b8:
    // 0x39c6b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c6bc:
    // 0x39c6bc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x39c6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_39c6c0:
    // 0x39c6c0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x39c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_39c6c4:
    // 0x39c6c4: 0x40f809  jalr        $v0
label_39c6c8:
    if (ctx->pc == 0x39C6C8u) {
        ctx->pc = 0x39C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6C4u;
        // 0x39c6c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6CCu;
        goto label_39c6cc;
    }
    ctx->pc = 0x39C6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C6CCu);
        ctx->pc = 0x39C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6C4u;
        // 0x39c6c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C6C4u, 0x39C6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C6CCu;
label_39c6cc:
    // 0x39c6cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_39c6d0:
    if (ctx->pc == 0x39C6D0u) {
        ctx->pc = 0x39C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6CCu;
        // 0x39c6d0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6D4u;
        goto label_39c6d4;
    }
    ctx->pc = 0x39C6CCu;
    {
        const bool branch_taken_0x39c6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c6cc) {
            ctx->pc = 0x39C6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C6CCu;
            // 0x39c6d0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C6DCu;
            goto label_39c6dc;
        }
    }
    ctx->pc = 0x39C6D4u;
label_39c6d4:
    // 0x39c6d4: 0x10000020  b           . + 4 + (0x20 << 2)
label_39c6d8:
    if (ctx->pc == 0x39C6D8u) {
        ctx->pc = 0x39C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6D4u;
        // 0x39c6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6DCu;
        goto label_39c6dc;
    }
    ctx->pc = 0x39C6D4u;
    {
        const bool branch_taken_0x39c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6D4u;
        // 0x39c6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c6d4) {
            ctx->pc = 0x39C758u;
            goto label_39c758;
        }
    }
    ctx->pc = 0x39C6DCu;
label_39c6dc:
    // 0x39c6dc: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x39c6dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39c6e0:
    // 0x39c6e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39c6e4:
    // 0x39c6e4: 0x40f809  jalr        $v0
label_39c6e8:
    if (ctx->pc == 0x39C6E8u) {
        ctx->pc = 0x39C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6E4u;
        // 0x39c6e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6ECu;
        goto label_39c6ec;
    }
    ctx->pc = 0x39C6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C6ECu);
        ctx->pc = 0x39C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6E4u;
        // 0x39c6e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C6E4u, 0x39C6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C6ECu;
label_39c6ec:
    // 0x39c6ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39c6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c6f0:
    // 0x39c6f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39c6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c6f4:
    // 0x39c6f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c6f8:
    // 0x39c6f8: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x39c6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_39c6fc:
    // 0x39c6fc: 0x8c460134  lw          $a2, 0x134($v0)
    ctx->pc = 0x39c6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_39c700:
    // 0x39c700: 0xc0f809  jalr        $a2
label_39c704:
    if (ctx->pc == 0x39C704u) {
        ctx->pc = 0x39C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C700u;
        // 0x39c704: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C708u;
        goto label_39c708;
    }
    ctx->pc = 0x39C700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x39C708u);
        ctx->pc = 0x39C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C700u;
        // 0x39c704: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C700u, 0x39C708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C708u;
label_39c708:
    // 0x39c708: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c70c:
    // 0x39c70c: 0x84640198  lh          $a0, 0x198($v1)
    ctx->pc = 0x39c70cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 408)));
label_39c710:
    // 0x39c710: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x39c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_39c714:
    // 0x39c714: 0x40f809  jalr        $v0
label_39c718:
    if (ctx->pc == 0x39C718u) {
        ctx->pc = 0x39C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C714u;
        // 0x39c718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C71Cu;
        goto label_39c71c;
    }
    ctx->pc = 0x39C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C71Cu);
        ctx->pc = 0x39C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C714u;
        // 0x39c718: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C714u, 0x39C71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C71Cu;
label_39c71c:
    // 0x39c71c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39c720:
    if (ctx->pc == 0x39C720u) {
        ctx->pc = 0x39C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C71Cu;
        // 0x39c720: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C724u;
        goto label_39c724;
    }
    ctx->pc = 0x39C71Cu;
    {
        const bool branch_taken_0x39c71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C71Cu;
        // 0x39c720: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c71c) {
            ctx->pc = 0x39C730u;
            goto label_39c730;
        }
    }
    ctx->pc = 0x39C724u;
label_39c724:
    // 0x39c724: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x39c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39c728:
    // 0x39c728: 0x40f809  jalr        $v0
label_39c72c:
    if (ctx->pc == 0x39C72Cu) {
        ctx->pc = 0x39C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C728u;
        // 0x39c72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C730u;
        goto label_39c730;
    }
    ctx->pc = 0x39C728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C730u);
        ctx->pc = 0x39C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C728u;
        // 0x39c72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C728u, 0x39C730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C730u;
label_39c730:
    // 0x39c730: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39c730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39c734:
    // 0x39c734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39c734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c738:
    // 0x39c738: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x39c738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_39c73c:
    // 0x39c73c: 0xc0e8cbc  jal         func_3A32F0
label_39c740:
    if (ctx->pc == 0x39C740u) {
        ctx->pc = 0x39C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C73Cu;
        // 0x39c740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C744u;
        goto label_39c744;
    }
    ctx->pc = 0x39C73Cu;
    SET_GPR_U32(ctx, 31, 0x39C744u);
    ctx->pc = 0x39C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C73Cu;
    // 0x39c740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x39C73Cu, 0x39C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C744u;
label_39c744:
    // 0x39c744: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x39c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_39c748:
    // 0x39c748: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x39c748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_39c74c:
    // 0x39c74c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39c74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c750:
    // 0x39c750: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x39c750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_39c754:
    // 0x39c754: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x39c754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_39c758:
    // 0x39c758: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39c758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c75c:
    // 0x39c75c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39c75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c760:
    // 0x39c760: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x39c760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c764:
    // 0x39c764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c768:
    // 0x39c768: 0x3e00008  jr          $ra
label_39c76c:
    if (ctx->pc == 0x39C76Cu) {
        ctx->pc = 0x39C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C768u;
        // 0x39c76c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C770u;
        goto label_fallthrough_0x39c768;
    }
    ctx->pc = 0x39C768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C768u;
        // 0x39c76c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c768:
    ctx->pc = 0x39C770u;
}
