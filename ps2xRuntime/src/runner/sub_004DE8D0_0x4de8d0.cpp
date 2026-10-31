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

// Function: sub_004DE8D0
// Address: 0x4de8d0 - 0x4de938
void sub_004DE8D0_0x4de8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE8D0_0x4de8d0");
#endif

    switch (ctx->pc) {
        case 0x4de8e8u: goto label_4de8e8;
        default: break;
    }

    ctx->pc = 0x4de8d0u;

    // 0x4de8d0: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4de8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4de8d4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4de8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4de8d8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4DE8D8u;
    {
        const bool branch_taken_0x4de8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE8D8u;
        // 0x4de8dc: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de8d8) {
            ctx->pc = 0x4DE904u;
            goto label_4de904;
        }
    }
    ctx->pc = 0x4DE8E0u;
    // 0x4de8e0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4de8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de8e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4de8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4de8e8:
    // 0x4de8e8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4de8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4de8ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DE8ECu;
    {
        const bool branch_taken_0x4de8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4de8ec) {
            ctx->pc = 0x4DE8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE8ECu;
            // 0x4de8f0: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE8FCu;
            goto label_4de8fc;
        }
    }
    ctx->pc = 0x4DE8F4u;
    // 0x4de8f4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4de8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de8f8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4de8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4de8fc:
    // 0x4de8fc: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4DE8FCu;
    {
        const bool branch_taken_0x4de8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4de8fc) {
            ctx->pc = 0x4DE900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE8FCu;
            // 0x4de900: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4de8e8;
        }
    }
    ctx->pc = 0x4DE904u;
label_4de904:
    // 0x4de904: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4de904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4de908: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4de908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4de90c: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DE90Cu;
    {
        const bool branch_taken_0x4de90c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4DE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE90Cu;
        // 0x4de910: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de90c) {
            ctx->pc = 0x4DE928u;
            goto label_4de928;
        }
    }
    ctx->pc = 0x4DE914u;
    // 0x4de914: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4de914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4de918: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4de918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4de91c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4de91cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4de920: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4DE920u;
    {
        const bool branch_taken_0x4de920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de920) {
            ctx->pc = 0x4DE924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE920u;
            // 0x4de924: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE92Cu;
            goto label_4de92c;
        }
    }
    ctx->pc = 0x4DE928u;
label_4de928:
    // 0x4de928: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4de928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4de92c:
    // 0x4de92c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4de92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de930: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE930u;
        // 0x4de934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE938u;
}
