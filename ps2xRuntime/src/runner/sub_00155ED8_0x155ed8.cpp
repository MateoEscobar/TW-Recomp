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

// Function: sub_00155ED8
// Address: 0x155ed8 - 0x155f48
void sub_00155ED8_0x155ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155ED8_0x155ed8");
#endif

    switch (ctx->pc) {
        case 0x155f00u: goto label_155f00;
        case 0x155f28u: goto label_155f28;
        default: break;
    }

    ctx->pc = 0x155ed8u;

    // 0x155ed8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x155ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x155edc: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x155edcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x155ee0: 0x244283a8  addiu       $v0, $v0, -0x7C58
    ctx->pc = 0x155ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935464));
    // 0x155ee4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x155ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x155ee8: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x155ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x155eec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x155eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155ef0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x155ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x155ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155ef8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x155ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x155efc: 0x0  nop
    ctx->pc = 0x155efcu;
    // NOP
label_155f00:
    // 0x155f00: 0x0  nop
    ctx->pc = 0x155f00u;
    // NOP
    // 0x155f04: 0x0  nop
    ctx->pc = 0x155f04u;
    // NOP
    // 0x155f08: 0x0  nop
    ctx->pc = 0x155f08u;
    // NOP
    // 0x155f0c: 0x0  nop
    ctx->pc = 0x155f0cu;
    // NOP
    // 0x155f10: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x155F10u;
    {
        const bool branch_taken_0x155f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x155F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F10u;
        // 0x155f14: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f10) {
            ctx->pc = 0x155F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155f00;
        }
    }
    ctx->pc = 0x155F18u;
    // 0x155f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f1c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x155f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x155f20: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x155f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x155f24: 0x0  nop
    ctx->pc = 0x155f24u;
    // NOP
label_155f28:
    // 0x155f28: 0x8ce2d300  lw          $v0, -0x2D00($a3)
    ctx->pc = 0x155f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955776)));
    // 0x155f2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x155f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x155f30: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x155f30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x155f34: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x155f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x155f38: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x155F38u;
    {
        const bool branch_taken_0x155f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F38u;
        // 0x155f3c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f38) {
            ctx->pc = 0x155F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155f28;
        }
    }
    ctx->pc = 0x155F40u;
    // 0x155f40: 0x3e00008  jr          $ra
    ctx->pc = 0x155F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F40u;
        // 0x155f44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155F48u;
}
