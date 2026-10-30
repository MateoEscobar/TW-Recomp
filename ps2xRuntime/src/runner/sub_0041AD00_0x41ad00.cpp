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

// Function: sub_0041AD00
// Address: 0x41ad00 - 0x41ad28
void sub_0041AD00_0x41ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AD00_0x41ad00");
#endif

    ctx->pc = 0x41ad00u;

    // 0x41ad00: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x41ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x41ad04: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x41ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x41ad08: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x41ad0c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x41ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x41ad10: 0x8ca2489c  lw          $v0, 0x489C($a1)
    ctx->pc = 0x41ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ad14: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x41ad14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x41ad18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x41ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x41ad1c: 0x3e00008  jr          $ra
    ctx->pc = 0x41AD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD1Cu;
        // 0x41ad20: 0xc440570c  lwc1        $f0, 0x570C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41AD24u;
    // 0x41ad24: 0x0  nop
    ctx->pc = 0x41ad24u;
    // NOP
    ctx->pc = 0x41ad28u;
}
