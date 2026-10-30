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

// Function: sub_003A1ED8
// Address: 0x3a1ed8 - 0x3a1f00
void sub_003A1ED8_0x3a1ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1ED8_0x3a1ed8");
#endif

    ctx->pc = 0x3a1ed8u;

    // 0x3a1ed8: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x3a1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3a1edc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3a1edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3a1ee0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1EE0u;
    {
        const bool branch_taken_0x3a1ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EE0u;
        // 0x3a1ee4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ee0) {
            ctx->pc = 0x3A1EF0u;
            goto label_3a1ef0;
        }
    }
    ctx->pc = 0x3A1EE8u;
    // 0x3a1ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EE8u;
        // 0x3a1eec: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1EF0u;
label_3a1ef0:
    // 0x3a1ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EF0u;
        // 0x3a1ef4: 0x2442b910  addiu       $v0, $v0, -0x46F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1EF8u;
    // 0x3a1ef8: 0xe48e0038  swc1        $f14, 0x38($a0)
    ctx->pc = 0x3a1ef8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x3a1efc: 0x0  nop
    ctx->pc = 0x3a1efcu;
    // NOP
    ctx->pc = 0x3a1f00u;
}
