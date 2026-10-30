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

// Function: sub_002C8970
// Address: 0x2c8970 - 0x2c89a8
void sub_002C8970_0x2c8970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8970_0x2c8970");
#endif

    ctx->pc = 0x2c8970u;

    // 0x2c8970: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c8970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c8974: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c8974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c8978: 0x24630c30  addiu       $v1, $v1, 0xC30
    ctx->pc = 0x2c8978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3120));
    // 0x2c897c: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2c897cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2c8980: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c8980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8984: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c8984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c8988: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2c8988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2c898c: 0xa0870018  sb          $a3, 0x18($a0)
    ctx->pc = 0x2c898cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c8990: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c8990u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8994: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c8994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8998: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2c8998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2c899c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C899Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C899Cu;
        // 0x2c89a0: 0xa0800019  sb          $zero, 0x19($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C899Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C89A4u;
    // 0x2c89a4: 0x0  nop
    ctx->pc = 0x2c89a4u;
    // NOP
    ctx->pc = 0x2c89a8u;
}
