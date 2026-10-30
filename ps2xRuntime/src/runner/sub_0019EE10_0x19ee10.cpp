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

// Function: sub_0019EE10
// Address: 0x19ee10 - 0x19ee50
void sub_0019EE10_0x19ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EE10_0x19ee10");
#endif

    ctx->pc = 0x19ee10u;

    // 0x19ee10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19ee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19ee14: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19EE14u;
    {
        const bool branch_taken_0x19ee14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ee14) {
            ctx->pc = 0x19EE44u;
            goto label_19ee44;
        }
    }
    ctx->pc = 0x19EE1Cu;
    // 0x19ee1c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EE1Cu;
    {
        const bool branch_taken_0x19ee1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE1Cu;
        // 0x19ee20: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee1c) {
            ctx->pc = 0x19EE44u;
            goto label_19ee44;
        }
    }
    ctx->pc = 0x19EE24u;
    // 0x19ee24: 0x240500f5  addiu       $a1, $zero, 0xF5
    ctx->pc = 0x19ee24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x19ee28: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x19ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x19ee2c: 0xa0850040  sb          $a1, 0x40($a0)
    ctx->pc = 0x19ee2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x19ee30: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x19ee30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x19ee34: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x19ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19ee38: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x19ee38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ee3c: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x19ee3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x19ee40: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x19ee40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_19ee44:
    // 0x19ee44: 0x3e00008  jr          $ra
    ctx->pc = 0x19EE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE4Cu;
    // 0x19ee4c: 0x0  nop
    ctx->pc = 0x19ee4cu;
    // NOP
    ctx->pc = 0x19ee50u;
}
