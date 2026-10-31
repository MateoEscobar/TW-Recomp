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

// Function: sub_003A3960
// Address: 0x3a3960 - 0x3a3978
void sub_003A3960_0x3a3960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3960_0x3a3960");
#endif

    switch (ctx->pc) {
        case 0x3a3964u: goto label_3a3964;
        case 0x3a3968u: goto label_3a3968;
        default: break;
    }

    ctx->pc = 0x3a3960u;

    // 0x3a3960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a3960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a3964:
    // 0x3a3964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a3964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3968:
    // 0x3a3968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a396c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A396Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A396Cu;
        // 0x3a3970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A396Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3974u;
    // 0x3a3974: 0x0  nop
    ctx->pc = 0x3a3974u;
    // NOP
    ctx->pc = 0x3a3978u;
}
