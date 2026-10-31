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

// Function: sub_004F11C8
// Address: 0x4f11c8 - 0x4f1200
void sub_004F11C8_0x4f11c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F11C8_0x4f11c8");
#endif

    ctx->pc = 0x4f11c8u;

    // 0x4f11c8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F11C8u;
    {
        const bool branch_taken_0x4f11c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F11C8u;
        // 0x4f11cc: 0x94820032  lhu         $v0, 0x32($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f11c8) {
            ctx->pc = 0x4F11DCu;
            goto label_4f11dc;
        }
    }
    ctx->pc = 0x4F11D0u;
    // 0x4f11d0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x4f11d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x4f11d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F11D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F11D4u;
        // 0x4f11d8: 0xa4820032  sh          $v0, 0x32($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F11D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F11DCu;
label_4f11dc:
    // 0x4f11dc: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x4f11dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x4f11e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F11E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F11E0u;
        // 0x4f11e4: 0xa4820032  sh          $v0, 0x32($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F11E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F11E8u;
    // 0x4f11e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f11ec: 0x0  nop
    ctx->pc = 0x4f11ecu;
    // NOP
    // 0x4f11f0: 0xa4820032  sh          $v0, 0x32($a0)
    ctx->pc = 0x4f11f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f11f4: 0x0  nop
    ctx->pc = 0x4f11f4u;
    // NOP
    // 0x4f11f8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4f11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4f11fc: 0x0  nop
    ctx->pc = 0x4f11fcu;
    // NOP
    ctx->pc = 0x4f1200u;
}
