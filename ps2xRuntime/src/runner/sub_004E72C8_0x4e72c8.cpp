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

// Function: sub_004E72C8
// Address: 0x4e72c8 - 0x4e7330
void sub_004E72C8_0x4e72c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E72C8_0x4e72c8");
#endif

    switch (ctx->pc) {
        case 0x4e72e0u: goto label_4e72e0;
        default: break;
    }

    ctx->pc = 0x4e72c8u;

    // 0x4e72c8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e72c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e72cc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4e72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e72d0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4E72D0u;
    {
        const bool branch_taken_0x4e72d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E72D0u;
        // 0x4e72d4: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e72d0) {
            ctx->pc = 0x4E72FCu;
            goto label_4e72fc;
        }
    }
    ctx->pc = 0x4E72D8u;
    // 0x4e72d8: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4e72d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e72dc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4e72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4e72e0:
    // 0x4e72e0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4e72e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4e72e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E72E4u;
    {
        const bool branch_taken_0x4e72e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e72e4) {
            ctx->pc = 0x4E72E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E72E4u;
            // 0x4e72e8: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E72F4u;
            goto label_4e72f4;
        }
    }
    ctx->pc = 0x4E72ECu;
    // 0x4e72ec: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4e72ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e72f0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x4e72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e72f4:
    // 0x4e72f4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E72F4u;
    {
        const bool branch_taken_0x4e72f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e72f4) {
            ctx->pc = 0x4E72F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E72F4u;
            // 0x4e72f8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E72E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e72e0;
        }
    }
    ctx->pc = 0x4E72FCu;
label_4e72fc:
    // 0x4e72fc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x4e72fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e7300: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4e7300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4e7304: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E7304u;
    {
        const bool branch_taken_0x4e7304 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x4E7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7304u;
        // 0x4e7308: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7304) {
            ctx->pc = 0x4E7320u;
            goto label_4e7320;
        }
    }
    ctx->pc = 0x4E730Cu;
    // 0x4e730c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e7310: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x4e7310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e7314: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e7314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e7318: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E7318u;
    {
        const bool branch_taken_0x4e7318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7318) {
            ctx->pc = 0x4E731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7318u;
            // 0x4e731c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7324u;
            goto label_4e7324;
        }
    }
    ctx->pc = 0x4E7320u;
label_4e7320:
    // 0x4e7320: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4e7320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_4e7324:
    // 0x4e7324: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4e7324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7328: 0x3e00008  jr          $ra
    ctx->pc = 0x4E7328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7328u;
        // 0x4e732c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7330u;
}
