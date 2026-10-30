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

// Function: sub_004EE740
// Address: 0x4ee740 - 0x4ee758
void sub_004EE740_0x4ee740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE740_0x4ee740");
#endif

    ctx->pc = 0x4ee740u;

    // 0x4ee740: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee744: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE744u;
        // 0x4ee748: 0x244252f8  addiu       $v0, $v0, 0x52F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE74Cu;
    // 0x4ee74c: 0x0  nop
    ctx->pc = 0x4ee74cu;
    // NOP
    // 0x4ee750: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ee750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ee754: 0x0  nop
    ctx->pc = 0x4ee754u;
    // NOP
    ctx->pc = 0x4ee758u;
}
