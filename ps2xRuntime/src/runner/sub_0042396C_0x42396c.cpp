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

// Function: sub_0042396C
// Address: 0x42396c - 0x423988
void sub_0042396C_0x42396c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042396C_0x42396c");
#endif

    switch (ctx->pc) {
        case 0x423974u: goto label_423974;
        case 0x423978u: goto label_423978;
        default: break;
    }

    ctx->pc = 0x42396cu;

    // 0x42396c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42396Cu;
    {
        const bool branch_taken_0x42396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42396Cu;
        // 0x423970: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42396c) {
            ctx->pc = 0x423978u;
            goto label_423978;
        }
    }
    ctx->pc = 0x423974u;
label_423974:
    // 0x423974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x423974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423978:
    // 0x423978: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x423978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42397c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42397cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423980: 0x3e00008  jr          $ra
    ctx->pc = 0x423980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423980u;
        // 0x423984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423988u;
}
