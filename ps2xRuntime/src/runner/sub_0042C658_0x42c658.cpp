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

// Function: sub_0042C658
// Address: 0x42c658 - 0x42c718
void sub_0042C658_0x42c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C658_0x42c658");
#endif

    ctx->pc = 0x42c658u;

    // 0x42c658: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x42c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42c65c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x42c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x42c660: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x42c660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x42c664: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x42c664u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x42c668: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x42c668u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x42c66c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x42c66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x42c670: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x42c670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x42c674: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C674u;
    {
        const bool branch_taken_0x42c674 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C674u;
        // 0x42c678: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c674) {
            ctx->pc = 0x42C688u;
            goto label_42c688;
        }
    }
    ctx->pc = 0x42C67Cu;
    // 0x42c67c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42c680: 0x3e00008  jr          $ra
    ctx->pc = 0x42C680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C680u;
        // 0x42c684: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C688u;
label_42c688:
    // 0x42c688: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x42c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x42c68c: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x42C68Cu;
    {
        const bool branch_taken_0x42c68c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x42C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C68Cu;
        // 0x42c690: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c68c) {
            ctx->pc = 0x42C6C8u;
            goto label_42c6c8;
        }
    }
    ctx->pc = 0x42C694u;
    // 0x42c694: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C694u;
    {
        const bool branch_taken_0x42c694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C694u;
        // 0x42c698: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c694) {
            ctx->pc = 0x42C6A8u;
            goto label_42c6a8;
        }
    }
    ctx->pc = 0x42C69Cu;
    // 0x42c69c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x42c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x42c6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x42C6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C6A0u;
        // 0x42c6a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C6A8u;
label_42c6a8:
    // 0x42c6a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x42c6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x42c6ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C6ACu;
    {
        const bool branch_taken_0x42c6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C6ACu;
        // 0x42c6b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c6ac) {
            ctx->pc = 0x42C6BCu;
            goto label_42c6bc;
        }
    }
    ctx->pc = 0x42C6B4u;
    // 0x42c6b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42C6B4u;
    {
        const bool branch_taken_0x42c6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C6B4u;
        // 0x42c6b8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c6b4) {
            ctx->pc = 0x42C6C0u;
            goto label_42c6c0;
        }
    }
    ctx->pc = 0x42C6BCu;
label_42c6bc:
    // 0x42c6bc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x42c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_42c6c0:
    // 0x42c6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x42C6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C6C0u;
        // 0x42c6c4: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C6C8u;
label_42c6c8:
    // 0x42c6c8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x42c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x42c6cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x42c6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x42c6d0: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x42c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x42c6d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42c6d8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x42c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x42c6dc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x42c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x42c6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x42C6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C6E0u;
        // 0x42c6e4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C6E8u;
    // 0x42c6e8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x42c6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c6ec: 0x0  nop
    ctx->pc = 0x42c6ecu;
    // NOP
    // 0x42c6f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x42c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x42c6f4: 0x0  nop
    ctx->pc = 0x42c6f4u;
    // NOP
    // 0x42c6f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x42c6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x42c6fc: 0x0  nop
    ctx->pc = 0x42c6fcu;
    // NOP
    // 0x42c700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x42c700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c704: 0x0  nop
    ctx->pc = 0x42c704u;
    // NOP
    // 0x42c708: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x42c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x42c70c: 0x0  nop
    ctx->pc = 0x42c70cu;
    // NOP
    // 0x42c710: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x42c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x42c714: 0x0  nop
    ctx->pc = 0x42c714u;
    // NOP
    ctx->pc = 0x42c718u;
}
