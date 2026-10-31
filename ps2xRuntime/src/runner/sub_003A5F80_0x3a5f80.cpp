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

// Function: sub_003A5F80
// Address: 0x3a5f80 - 0x3a5fb0
void sub_003A5F80_0x3a5f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5F80_0x3a5f80");
#endif

    ctx->pc = 0x3a5f80u;

    // 0x3a5f80: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x3a5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3a5f84: 0x30a3ff00  andi        $v1, $a1, 0xFF00
    ctx->pc = 0x3a5f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x3a5f88: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3a5f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3a5f8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a5f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a5f90: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3a5f90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3a5f94: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x3a5f94u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x3a5f98: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x3a5f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x3a5f9c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3a5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3a5fa0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3a5fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3a5fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FA4u;
        // 0x3a5fa8: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5FACu;
    // 0x3a5fac: 0x0  nop
    ctx->pc = 0x3a5facu;
    // NOP
    ctx->pc = 0x3a5fb0u;
}
