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

// Function: sub_002533B8
// Address: 0x2533b8 - 0x253480
void sub_002533B8_0x2533b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002533B8_0x2533b8");
#endif

    switch (ctx->pc) {
        case 0x253420u: goto label_253420;
        default: break;
    }

    ctx->pc = 0x2533b8u;

    // 0x2533b8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2533b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2533bc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2533bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2533c0: 0x25042  srl         $t2, $v0, 1
    ctx->pc = 0x2533c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2533c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2533c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2533c8: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x2533c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2533cc: 0x1827021  addu        $t6, $t4, $v0
    ctx->pc = 0x2533ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2533d0: 0x1834021  addu        $t0, $t4, $v1
    ctx->pc = 0x2533d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2533d4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2533d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2533d8: 0x95cd0000  lhu         $t5, 0x0($t6)
    ctx->pc = 0x2533d8u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2533dc: 0x95070000  lhu         $a3, 0x0($t0)
    ctx->pc = 0x2533dcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2533e0: 0x8c46a21c  lw          $a2, -0x5DE4($v0)
    ctx->pc = 0x2533e0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CA21Cu));
    // 0x2533e4: 0xd2140  sll         $a0, $t5, 5
    ctx->pc = 0x2533e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x2533e8: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x2533e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2533ec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2533ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2533f0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2533f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2533f4: 0x94650016  lhu         $a1, 0x16($v1)
    ctx->pc = 0x2533f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2533f8: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x2533f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2533fc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2533fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x253400: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x253400u;
    {
        const bool branch_taken_0x253400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253400) {
            ctx->pc = 0x253474u;
            goto label_253474;
        }
    }
    ctx->pc = 0x253408u;
    // 0x253408: 0x11400018  beqz        $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x253408u;
    {
        const bool branch_taken_0x253408 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x25340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253408u;
        // 0x25340c: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253408) {
            ctx->pc = 0x25346Cu;
            goto label_25346c;
        }
    }
    ctx->pc = 0x253410u;
    // 0x253410: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x253410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253414: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x253414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253418: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x253418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25341c: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x25341cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
label_253420:
    // 0x253420: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x253420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253424: 0x25042  srl         $t2, $v0, 1
    ctx->pc = 0x253424u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x253428: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x253428u;
    {
        const bool branch_taken_0x253428 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x25342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253428u;
        // 0x25342c: 0xa5070000  sh          $a3, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253428) {
            ctx->pc = 0x25346Cu;
            goto label_25346c;
        }
    }
    ctx->pc = 0x253430u;
    // 0x253430: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x253430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x253434: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x253434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x253438: 0x1834021  addu        $t0, $t4, $v1
    ctx->pc = 0x253438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x25343c: 0x1824821  addu        $t1, $t4, $v0
    ctx->pc = 0x25343cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x253440: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x253440u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x253444: 0x95270000  lhu         $a3, 0x0($t1)
    ctx->pc = 0x253444u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x253448: 0x62140  sll         $a0, $a2, 5
    ctx->pc = 0x253448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x25344c: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x25344cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x253450: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x253450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x253454: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x253454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x253458: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x253458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x25345c: 0x94650016  lhu         $a1, 0x16($v1)
    ctx->pc = 0x25345cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x253460: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x253460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x253464: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x253464u;
    {
        const bool branch_taken_0x253464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253464) {
            ctx->pc = 0x253468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253464u;
            // 0x253468: 0xa5260000  sh          $a2, 0x0($t1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253420;
        }
    }
    ctx->pc = 0x25346Cu;
label_25346c:
    // 0x25346c: 0x3e00008  jr          $ra
    ctx->pc = 0x25346Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25346Cu;
        // 0x253470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25346Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253474u;
label_253474:
    // 0x253474: 0x3e00008  jr          $ra
    ctx->pc = 0x253474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253474u;
        // 0x253478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25347Cu;
    // 0x25347c: 0x0  nop
    ctx->pc = 0x25347cu;
    // NOP
    ctx->pc = 0x253480u;
}
