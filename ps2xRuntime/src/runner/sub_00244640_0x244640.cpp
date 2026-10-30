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

// Function: sub_00244640
// Address: 0x244640 - 0x2446a8
void sub_00244640_0x244640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244640_0x244640");
#endif

    switch (ctx->pc) {
        case 0x244670u: goto label_244670;
        default: break;
    }

    ctx->pc = 0x244640u;

    // 0x244640: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x244640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244648: 0xace00678  sw          $zero, 0x678($a3)
    ctx->pc = 0x244648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1656), GPR_U32(ctx, 0));
    // 0x24464c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x24464cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x244650: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x244654: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x244654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x244658: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x244658u;
    {
        const bool branch_taken_0x244658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244658u;
        // 0x24465c: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244658) {
            ctx->pc = 0x244694u;
            goto label_244694;
        }
    }
    ctx->pc = 0x244660u;
    // 0x244660: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x244660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244664: 0x24e4067c  addiu       $a0, $a3, 0x67C
    ctx->pc = 0x244664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1660));
    // 0x244668: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x244668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24466c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24466cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_244670:
    // 0x244670: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x244670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x244674: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x244674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x244678: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x244678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24467c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24467Cu;
    {
        const bool branch_taken_0x24467c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24467Cu;
        // 0x244680: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24467c) {
            ctx->pc = 0x244694u;
            goto label_244694;
        }
    }
    ctx->pc = 0x244684u;
    // 0x244684: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x244684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x244688: 0x8d02bd30  lw          $v0, -0x42D0($t0)
    ctx->pc = 0x244688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950192)));
    // 0x24468c: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24468Cu;
    {
        const bool branch_taken_0x24468c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24468c) {
            ctx->pc = 0x244690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24468Cu;
            // 0x244690: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244670;
        }
    }
    ctx->pc = 0x244694u;
label_244694:
    // 0x244694: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x244694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x244698: 0x8d23bd30  lw          $v1, -0x42D0($t1)
    ctx->pc = 0x244698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294950192)));
    // 0x24469c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x24469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2446a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2446A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2446A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446A0u;
        // 0x2446a4: 0xac43067c  sw          $v1, 0x67C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2446A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2446A8u;
}
