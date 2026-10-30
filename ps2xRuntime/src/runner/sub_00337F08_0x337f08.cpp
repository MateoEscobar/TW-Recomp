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

// Function: sub_00337F08
// Address: 0x337f08 - 0x337f28
void sub_00337F08_0x337f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337F08_0x337f08");
#endif

    ctx->pc = 0x337f08u;

    // 0x337f08: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x337f08u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337f0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x337f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f10: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x337f10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x337f14: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x337f14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337f18: 0x3e00008  jr          $ra
    ctx->pc = 0x337F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F18u;
        // 0x337f1c: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337F20u;
    // 0x337f20: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x337f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x337f24: 0x0  nop
    ctx->pc = 0x337f24u;
    // NOP
    ctx->pc = 0x337f28u;
}
