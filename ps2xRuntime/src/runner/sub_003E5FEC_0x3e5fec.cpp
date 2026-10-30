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

// Function: sub_003E5FEC
// Address: 0x3e5fec - 0x3e6008
void sub_003E5FEC_0x3e5fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5FEC_0x3e5fec");
#endif

    switch (ctx->pc) {
        case 0x3e5ff0u: goto label_3e5ff0;
        default: break;
    }

    ctx->pc = 0x3e5fecu;

    // 0x3e5fec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e5fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e5ff0:
    // 0x3e5ff0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e5ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5ff4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e5ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e5ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e5ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FFCu;
        // 0x3e6000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6004u;
    // 0x3e6004: 0x0  nop
    ctx->pc = 0x3e6004u;
    // NOP
    ctx->pc = 0x3e6008u;
}
