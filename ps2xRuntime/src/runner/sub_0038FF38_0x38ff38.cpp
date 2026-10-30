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

// Function: sub_0038FF38
// Address: 0x38ff38 - 0x38ffd0
void sub_0038FF38_0x38ff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FF38_0x38ff38");
#endif

    switch (ctx->pc) {
        case 0x38ff60u: goto label_38ff60;
        case 0x38ff78u: goto label_38ff78;
        default: break;
    }

    ctx->pc = 0x38ff38u;

    // 0x38ff38: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x38ff3c: 0x24070b00  addiu       $a3, $zero, 0xB00
    ctx->pc = 0x38ff3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2816));
    // 0x38ff40: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x38ff40u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff44: 0x844d2bec  lh          $t5, 0x2BEC($v0)
    ctx->pc = 0x38ff44u;
    SET_GPR_S32(ctx, 13, (int16_t)FAST_READ16(0x512BECu));
    // 0x38ff48: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x38ff48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff4c: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x38ff4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38ff50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff54: 0x240f02ec  addiu       $t7, $zero, 0x2EC
    ctx->pc = 0x38ff54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 748));
    // 0x38ff58: 0x3c0e006f  lui         $t6, 0x6F
    ctx->pc = 0x38ff58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)111 << 16));
    // 0x38ff5c: 0x0  nop
    ctx->pc = 0x38ff5cu;
    // NOP
label_38ff60:
    // 0x38ff60: 0x85422bec  lh          $v0, 0x2BEC($t2)
    ctx->pc = 0x38ff60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 11244)));
    // 0x38ff64: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x38ff64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x38ff68: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x38FF68u;
    {
        const bool branch_taken_0x38ff68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ff68) {
            ctx->pc = 0x38FF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FF68u;
            // 0x38ff6c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FFB4u;
            goto label_38ffb4;
        }
    }
    ctx->pc = 0x38FF70u;
    // 0x38ff70: 0x25c8bd38  addiu       $t0, $t6, -0x42C8
    ctx->pc = 0x38ff70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950200));
    // 0x38ff74: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x38ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_38ff78:
    // 0x38ff78: 0x84c42bec  lh          $a0, 0x2BEC($a2)
    ctx->pc = 0x38ff78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 11244)));
    // 0x38ff7c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x38ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x38ff80: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x38ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x38ff84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38ff88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FF88u;
    {
        const bool branch_taken_0x38ff88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF88u;
        // 0x38ff8c: 0x94c52bec  lhu         $a1, 0x2BEC($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 11244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff88) {
            ctx->pc = 0x38FF98u;
            goto label_38ff98;
        }
    }
    ctx->pc = 0x38FF90u;
    // 0x38ff90: 0x3e00008  jr          $ra
    ctx->pc = 0x38FF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF90u;
        // 0x38ff94: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FF98u;
label_38ff98:
    // 0x38ff98: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x38ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38ff9c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x38ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x38ffa0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x38ffa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x38ffa4: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x38ffa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x38ffa8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x38FFA8u;
    {
        const bool branch_taken_0x38ffa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFA8u;
        // 0x38ffac: 0xa5632bec  sh          $v1, 0x2BEC($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 11244), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ffa8) {
            ctx->pc = 0x38FF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ff78;
        }
    }
    ctx->pc = 0x38FFB0u;
    // 0x38ffb0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x38ffb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_38ffb4:
    // 0x38ffb4: 0xa54f2bec  sh          $t7, 0x2BEC($t2)
    ctx->pc = 0x38ffb4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 11244), (uint16_t)GPR_U32(ctx, 15));
    // 0x38ffb8: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x38ffb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38ffbc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x38FFBCu;
    {
        const bool branch_taken_0x38ffbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFBCu;
        // 0x38ffc0: 0x1a0382d  daddu       $a3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ffbc) {
            ctx->pc = 0x38FF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ff60;
        }
    }
    ctx->pc = 0x38FFC4u;
    // 0x38ffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x38FFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFC4u;
        // 0x38ffc8: 0x85822bec  lh          $v0, 0x2BEC($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 11244)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FFCCu;
    // 0x38ffcc: 0x0  nop
    ctx->pc = 0x38ffccu;
    // NOP
    ctx->pc = 0x38ffd0u;
}
