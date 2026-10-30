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

// Function: sub_00341B80
// Address: 0x341b80 - 0x341c10
void sub_00341B80_0x341b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341B80_0x341b80");
#endif

    switch (ctx->pc) {
        case 0x341ba0u: goto label_341ba0;
        case 0x341be0u: goto label_341be0;
        default: break;
    }

    ctx->pc = 0x341b80u;

    // 0x341b80: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x341B80u;
    {
        const bool branch_taken_0x341b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x341B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B80u;
        // 0x341b84: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b80) {
            ctx->pc = 0x341BD0u;
            goto label_341bd0;
        }
    }
    ctx->pc = 0x341B88u;
    // 0x341b88: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x341b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x341b8c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341B8Cu;
    {
        const bool branch_taken_0x341b8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x341B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B8Cu;
        // 0x341b90: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b8c) {
            ctx->pc = 0x341BA0u;
            goto label_341ba0;
        }
    }
    ctx->pc = 0x341B94u;
    // 0x341b94: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x341b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x341b98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x341B98u;
    {
        const bool branch_taken_0x341b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B98u;
        // 0x341b9c: 0xacc20038  sw          $v0, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b98) {
            ctx->pc = 0x341BC0u;
            goto label_341bc0;
        }
    }
    ctx->pc = 0x341BA0u;
label_341ba0:
    // 0x341ba0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x341BA0u;
    {
        const bool branch_taken_0x341ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341ba0) {
            ctx->pc = 0x341BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341BA0u;
            // 0x341ba4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341BC4u;
            goto label_341bc4;
        }
    }
    ctx->pc = 0x341BA8u;
    // 0x341ba8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x341ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x341bac: 0x0  nop
    ctx->pc = 0x341bacu;
    // NOP
    // 0x341bb0: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x341BB0u;
    {
        const bool branch_taken_0x341bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x341bb0) {
            ctx->pc = 0x341BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341BB0u;
            // 0x341bb4: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341ba0;
        }
    }
    ctx->pc = 0x341BB8u;
    // 0x341bb8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x341bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x341bbc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x341bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_341bc0:
    // 0x341bc0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x341bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_341bc4:
    // 0x341bc4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x341bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x341bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x341BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BC8u;
        // 0x341bcc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341BD0u;
label_341bd0:
    // 0x341bd0: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x341bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x341bd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x341BD4u;
    {
        const bool branch_taken_0x341bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341bd4) {
            ctx->pc = 0x341C04u;
            goto label_341c04;
        }
    }
    ctx->pc = 0x341BDCu;
    // 0x341bdc: 0x0  nop
    ctx->pc = 0x341bdcu;
    // NOP
label_341be0:
    // 0x341be0: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x341be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x341be4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x341be8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x341be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x341bec: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x341becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x341bf0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x341bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x341bf4: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x341bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x341bf8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x341bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x341bfc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x341BFCu;
    {
        const bool branch_taken_0x341bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x341C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BFCu;
        // 0x341c00: 0xacc40038  sw          $a0, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341bfc) {
            ctx->pc = 0x341BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341be0;
        }
    }
    ctx->pc = 0x341C04u;
label_341c04:
    // 0x341c04: 0x3e00008  jr          $ra
    ctx->pc = 0x341C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341C0Cu;
    // 0x341c0c: 0x0  nop
    ctx->pc = 0x341c0cu;
    // NOP
    ctx->pc = 0x341c10u;
}
