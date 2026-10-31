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

// Function: sub_001A5D28
// Address: 0x1a5d28 - 0x1a5d60
void sub_001A5D28_0x1a5d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5D28_0x1a5d28");
#endif

    ctx->pc = 0x1a5d28u;

    // 0x1a5d28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a5d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a5d2c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5D2Cu;
    {
        const bool branch_taken_0x1a5d2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5d2c) {
            ctx->pc = 0x1A5D58u;
            goto label_1a5d58;
        }
    }
    ctx->pc = 0x1A5D34u;
    // 0x1a5d34: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5D34u;
    {
        const bool branch_taken_0x1a5d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D34u;
        // 0x1a5d38: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d34) {
            ctx->pc = 0x1A5D58u;
            goto label_1a5d58;
        }
    }
    ctx->pc = 0x1A5D3Cu;
    // 0x1a5d3c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a5d40: 0x24a30688  addiu       $v1, $a1, 0x688
    ctx->pc = 0x1a5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1672));
    // 0x1a5d44: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1a5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a5d48: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1a5d48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5d4c: 0xa0a40688  sb          $a0, 0x688($a1)
    ctx->pc = 0x1a5d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1672), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a5d50: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1a5d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a5d54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a5d54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1a5d58:
    // 0x1a5d58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5D60u;
}
