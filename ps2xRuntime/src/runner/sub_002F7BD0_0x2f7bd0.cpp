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

// Function: sub_002F7BD0
// Address: 0x2f7bd0 - 0x2f7c48
void sub_002F7BD0_0x2f7bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7BD0_0x2f7bd0");
#endif

    switch (ctx->pc) {
        case 0x2f7c28u: goto label_2f7c28;
        default: break;
    }

    ctx->pc = 0x2f7bd0u;

    // 0x2f7bd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f7bd4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f7bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f7bd8: 0x24632430  addiu       $v1, $v1, 0x2430
    ctx->pc = 0x2f7bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9264));
    // 0x2f7bdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f7bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f7be0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2f7be4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f7be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7be8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2f7be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2f7bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bf0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2f7bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f7bf4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2f7bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f7bf8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2f7bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7bfc: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2f7bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7c00: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2f7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2f7c04: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2f7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2f7c08: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x2f7c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7c0c: 0xa0800029  sb          $zero, 0x29($a0)
    ctx->pc = 0x2f7c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7c10: 0xa080002a  sb          $zero, 0x2A($a0)
    ctx->pc = 0x2f7c10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7c14: 0xa080002b  sb          $zero, 0x2B($a0)
    ctx->pc = 0x2f7c14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7c18: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x2f7c18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7c1c: 0xa080002d  sb          $zero, 0x2D($a0)
    ctx->pc = 0x2f7c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7c20: 0xa080002e  sb          $zero, 0x2E($a0)
    ctx->pc = 0x2f7c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7c24: 0xa080002f  sb          $zero, 0x2F($a0)
    ctx->pc = 0x2f7c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 47), (uint8_t)GPR_U32(ctx, 0));
label_2f7c28:
    // 0x2f7c28: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x2f7c28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2f7c2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f7c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f7c30: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x2f7c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f7c34: 0x0  nop
    ctx->pc = 0x2f7c34u;
    // NOP
    // 0x2f7c38: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F7C38u;
    {
        const bool branch_taken_0x2f7c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C38u;
        // 0x2f7c3c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c38) {
            ctx->pc = 0x2F7C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7c28;
        }
    }
    ctx->pc = 0x2F7C40u;
    // 0x2f7c40: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C40u;
        // 0x2f7c44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7C48u;
}
