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

// Function: sub_002A8EF0
// Address: 0x2a8ef0 - 0x2a8f48
void sub_002A8EF0_0x2a8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8EF0_0x2a8ef0");
#endif

    ctx->pc = 0x2a8ef0u;

    // 0x2a8ef0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a8ef4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a8ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2a8ef8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8efc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a8efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a8f00: 0x2463f790  addiu       $v1, $v1, -0x870
    ctx->pc = 0x2a8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965136));
    // 0x2a8f04: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2a8f04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2a8f08: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x2a8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x2a8f0c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a8f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a8f10: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x2a8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x2a8f14: 0xa0e00004  sb          $zero, 0x4($a3)
    ctx->pc = 0x2a8f14u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8f18: 0xa0e00005  sb          $zero, 0x5($a3)
    ctx->pc = 0x2a8f18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8f1c: 0xace60010  sw          $a2, 0x10($a3)
    ctx->pc = 0x2a8f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 6));
    // 0x2a8f20: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x2a8f20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x2a8f24: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2a8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2a8f28: 0xa0e0001c  sb          $zero, 0x1C($a3)
    ctx->pc = 0x2a8f28u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8f2c: 0xa0e0001e  sb          $zero, 0x1E($a3)
    ctx->pc = 0x2a8f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8f30: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x2a8f30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2a8f34: 0x10c20002  beq         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8F34u;
    {
        const bool branch_taken_0x2a8f34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F34u;
        // 0x2a8f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f34) {
            ctx->pc = 0x2A8F40u;
            goto label_2a8f40;
        }
    }
    ctx->pc = 0x2A8F3Cu;
    // 0x2a8f3c: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x2a8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_2a8f40:
    // 0x2a8f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F40u;
        // 0x2a8f44: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8F48u;
}
