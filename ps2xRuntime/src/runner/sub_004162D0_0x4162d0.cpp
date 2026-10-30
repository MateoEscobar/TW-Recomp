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

// Function: sub_004162D0
// Address: 0x4162d0 - 0x4162f8
void sub_004162D0_0x4162d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004162D0_0x4162d0");
#endif

    ctx->pc = 0x4162d0u;

    // 0x4162d0: 0x948400d0  lhu         $a0, 0xD0($a0)
    ctx->pc = 0x4162d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x4162d4: 0x28820025  slti        $v0, $a0, 0x25
    ctx->pc = 0x4162d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x4162d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4162D8u;
    {
        const bool branch_taken_0x4162d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4162DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4162D8u;
        // 0x4162dc: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4162d8) {
            ctx->pc = 0x4162E8u;
            goto label_4162e8;
        }
    }
    ctx->pc = 0x4162E0u;
    // 0x4162e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4162E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4162E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4162E0u;
        // 0x4162e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4162E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4162E8u;
label_4162e8:
    // 0x4162e8: 0x24639678  addiu       $v1, $v1, -0x6988
    ctx->pc = 0x4162e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940280));
    // 0x4162ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4162ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4162f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4162F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4162F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4162F0u;
        // 0x4162f4: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4162F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4162F8u;
}
