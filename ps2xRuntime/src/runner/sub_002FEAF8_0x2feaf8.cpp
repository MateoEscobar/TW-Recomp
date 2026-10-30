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

// Function: sub_002FEAF8
// Address: 0x2feaf8 - 0x2feb28
void sub_002FEAF8_0x2feaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEAF8_0x2feaf8");
#endif

    ctx->pc = 0x2feaf8u;

    // 0x2feaf8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2feaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2feafc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2feafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2feb00: 0x24632f60  addiu       $v1, $v1, 0x2F60
    ctx->pc = 0x2feb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12128));
    // 0x2feb04: 0xa4880004  sh          $t0, 0x4($a0)
    ctx->pc = 0x2feb04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2feb08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2feb08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb0c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2feb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2feb10: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2feb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2feb14: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2feb14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2feb18: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2feb18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2feb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB1Cu;
        // 0x2feb20: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEB24u;
    // 0x2feb24: 0x0  nop
    ctx->pc = 0x2feb24u;
    // NOP
    ctx->pc = 0x2feb28u;
}
