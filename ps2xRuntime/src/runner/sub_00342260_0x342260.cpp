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

// Function: sub_00342260
// Address: 0x342260 - 0x342288
void sub_00342260_0x342260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342260_0x342260");
#endif

    switch (ctx->pc) {
        case 0x342278u: goto label_342278;
        default: break;
    }

    ctx->pc = 0x342260u;

    // 0x342260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342264: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x342264u;
    {
        const bool branch_taken_0x342264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x342268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342264u;
        // 0x342268: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342264) {
            ctx->pc = 0x342270u;
            goto label_342270;
        }
    }
    ctx->pc = 0x34226Cu;
    // 0x34226c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x34226cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_342270:
    // 0x342270: 0xc0d06e0  jal         func_341B80
    ctx->pc = 0x342270u;
    SET_GPR_U32(ctx, 31, 0x342278u);
    ctx->pc = 0x341B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341B80u, 0x342270u, 0x342278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342278u;
label_342278:
    // 0x342278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34227c: 0x3e00008  jr          $ra
    ctx->pc = 0x34227Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34227Cu;
        // 0x342280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34227Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342284u;
    // 0x342284: 0x0  nop
    ctx->pc = 0x342284u;
    // NOP
    ctx->pc = 0x342288u;
}
