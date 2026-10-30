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

// Function: sub_00150348
// Address: 0x150348 - 0x150380
void sub_00150348_0x150348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150348_0x150348");
#endif

    ctx->pc = 0x150348u;

    // 0x150348: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x150348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x15034c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15034Cu;
    {
        const bool branch_taken_0x15034c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15034Cu;
        // 0x150350: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15034c) {
            ctx->pc = 0x150370u;
            goto label_150370;
        }
    }
    ctx->pc = 0x150354u;
    // 0x150354: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x150354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150358: 0x2463c278  addiu       $v1, $v1, -0x3D88
    ctx->pc = 0x150358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951544));
    // 0x15035c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x150360: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x150360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150364: 0x384400ff  xori        $a0, $v0, 0xFF
    ctx->pc = 0x150364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x150368: 0x3e00008  jr          $ra
    ctx->pc = 0x150368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150368u;
        // 0x15036c: 0xa4100a  movz        $v0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150370u;
label_150370:
    // 0x150370: 0x3e00008  jr          $ra
    ctx->pc = 0x150370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150370u;
        // 0x150374: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150378u;
    // 0x150378: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x150378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15037c: 0x0  nop
    ctx->pc = 0x15037cu;
    // NOP
    ctx->pc = 0x150380u;
}
