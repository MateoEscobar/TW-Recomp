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

// Function: sub_00288A78
// Address: 0x288a78 - 0x288ad0
void sub_00288A78_0x288a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288A78_0x288a78");
#endif

    ctx->pc = 0x288a78u;

    // 0x288a78: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x288a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x288a7c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x288a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x288a80: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x288a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
    // 0x288a84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x288a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288a88: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x288a88u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x288a8c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x288a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x288a90: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x288a90u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x288a94: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x288a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x288a98: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x288a98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x288a9c: 0xa0880028  sb          $t0, 0x28($a0)
    ctx->pc = 0x288a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 8));
    // 0x288aa0: 0xa087002a  sb          $a3, 0x2A($a0)
    ctx->pc = 0x288aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 7));
    // 0x288aa4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x288aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x288aa8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x288aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x288aac: 0xa0800029  sb          $zero, 0x29($a0)
    ctx->pc = 0x288aacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x288ab0: 0xa080002b  sb          $zero, 0x2B($a0)
    ctx->pc = 0x288ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x288ab4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x288ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x288ab8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x288ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x288abc: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x288abcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x288ac0: 0xa4800032  sh          $zero, 0x32($a0)
    ctx->pc = 0x288ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x288ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x288AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AC4u;
        // 0x288ac8: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288ACCu;
    // 0x288acc: 0x0  nop
    ctx->pc = 0x288accu;
    // NOP
    ctx->pc = 0x288ad0u;
}
