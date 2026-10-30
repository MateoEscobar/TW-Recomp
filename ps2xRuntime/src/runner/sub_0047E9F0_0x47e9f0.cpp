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

// Function: sub_0047E9F0
// Address: 0x47e9f0 - 0x47ea78
void sub_0047E9F0_0x47e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E9F0_0x47e9f0");
#endif

    ctx->pc = 0x47e9f0u;

    // 0x47e9f0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x47e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x47e9f4: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x47e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
    // 0x47e9f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x47e9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47e9fc: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x47e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x47ea00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47ea04: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x47ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x47ea08: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x47ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x47ea0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x47ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x47ea10: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x47EA10u;
    {
        const bool branch_taken_0x47ea10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x47EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EA10u;
        // 0x47ea14: 0x8f828938  lw          $v0, -0x76C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ea10) {
            ctx->pc = 0x47EA5Cu;
            goto label_47ea5c;
        }
    }
    ctx->pc = 0x47EA18u;
    // 0x47ea18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x47ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47ea1c: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x47EA1Cu;
    {
        const bool branch_taken_0x47ea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x47ea1c) {
            ctx->pc = 0x47EA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47EA1Cu;
            // 0x47ea20: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47EA3Cu;
            goto label_47ea3c;
        }
    }
    ctx->pc = 0x47EA24u;
    // 0x47ea24: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x47ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x47ea28: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x47ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x47ea2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x47ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x47ea30: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x47ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x47ea34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47EA34u;
    {
        const bool branch_taken_0x47ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EA34u;
        // 0x47ea38: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ea34) {
            ctx->pc = 0x47EA50u;
            goto label_47ea50;
        }
    }
    ctx->pc = 0x47EA3Cu;
label_47ea3c:
    // 0x47ea3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x47ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x47ea40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x47ea40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x47ea44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x47ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x47ea48: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x47ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x47ea4c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x47ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_47ea50:
    // 0x47ea50: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x47ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x47ea54: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x47ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x47ea58: 0x8f828938  lw          $v0, -0x76C8($gp)
    ctx->pc = 0x47ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_47ea5c:
    // 0x47ea5c: 0x24c3ad18  addiu       $v1, $a2, -0x52E8
    ctx->pc = 0x47ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946072));
    // 0x47ea60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47ea64: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x47ea64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    // 0x47ea68: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x47ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x47ea6c: 0x3e00008  jr          $ra
    ctx->pc = 0x47EA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EA6Cu;
        // 0x47ea70: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47EA74u;
    // 0x47ea74: 0x0  nop
    ctx->pc = 0x47ea74u;
    // NOP
    ctx->pc = 0x47ea78u;
}
