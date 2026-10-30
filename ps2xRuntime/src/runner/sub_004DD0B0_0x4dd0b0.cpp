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

// Function: sub_004DD0B0
// Address: 0x4dd0b0 - 0x4dd108
void sub_004DD0B0_0x4dd0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD0B0_0x4dd0b0");
#endif

    ctx->pc = 0x4dd0b0u;

    // 0x4dd0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DD0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD0B0u;
        // 0x4dd0b4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD0B8u;
    // 0x4dd0b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4dd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4dd0bc: 0x0  nop
    ctx->pc = 0x4dd0bcu;
    // NOP
    // 0x4dd0c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4dd0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4dd0c4: 0x0  nop
    ctx->pc = 0x4dd0c4u;
    // NOP
    // 0x4dd0c8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x4dd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x4dd0cc: 0x0  nop
    ctx->pc = 0x4dd0ccu;
    // NOP
    // 0x4dd0d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4dd0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4dd0d4: 0x0  nop
    ctx->pc = 0x4dd0d4u;
    // NOP
    // 0x4dd0d8: 0x244200d8  addiu       $v0, $v0, 0xD8
    ctx->pc = 0x4dd0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x4dd0dc: 0x0  nop
    ctx->pc = 0x4dd0dcu;
    // NOP
    // 0x4dd0e0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4dd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4dd0e4: 0x0  nop
    ctx->pc = 0x4dd0e4u;
    // NOP
    // 0x4dd0e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4dd0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4dd0ec: 0x0  nop
    ctx->pc = 0x4dd0ecu;
    // NOP
    // 0x4dd0f0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4dd0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x4dd0f4: 0x0  nop
    ctx->pc = 0x4dd0f4u;
    // NOP
    // 0x4dd0f8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4dd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4dd0fc: 0x0  nop
    ctx->pc = 0x4dd0fcu;
    // NOP
    // 0x4dd100: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x4dd100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x4dd104: 0x0  nop
    ctx->pc = 0x4dd104u;
    // NOP
    ctx->pc = 0x4dd108u;
}
