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

// Function: sub_00342230
// Address: 0x342230 - 0x342260
void sub_00342230_0x342230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342230_0x342230");
#endif

    switch (ctx->pc) {
        case 0x342244u: goto label_342244;
        default: break;
    }

    ctx->pc = 0x342230u;

    // 0x342230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342234: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x342234u;
    {
        const bool branch_taken_0x342234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x342238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342234u;
        // 0x342238: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342234) {
            ctx->pc = 0x34224Cu;
            goto label_34224c;
        }
    }
    ctx->pc = 0x34223Cu;
    // 0x34223c: 0xc0d06c8  jal         func_341B20
    ctx->pc = 0x34223Cu;
    SET_GPR_U32(ctx, 31, 0x342244u);
    ctx->pc = 0x341B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341B20u, 0x34223Cu, 0x342244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342244u;
label_342244:
    // 0x342244: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x342244u;
    {
        const bool branch_taken_0x342244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342244u;
        // 0x342248: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342244) {
            ctx->pc = 0x342258u;
            goto label_342258;
        }
    }
    ctx->pc = 0x34224Cu;
label_34224c:
    // 0x34224c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342250: 0xac8200d4  sw          $v0, 0xD4($a0)
    ctx->pc = 0x342250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
    // 0x342254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342258:
    // 0x342258: 0x3e00008  jr          $ra
    ctx->pc = 0x342258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342258u;
        // 0x34225c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342260u;
}
