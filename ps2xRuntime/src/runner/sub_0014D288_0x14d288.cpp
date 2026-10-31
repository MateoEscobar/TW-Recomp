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

// Function: sub_0014D288
// Address: 0x14d288 - 0x14d2b8
void sub_0014D288_0x14d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D288_0x14d288");
#endif

    switch (ctx->pc) {
        case 0x14d2a8u: goto label_14d2a8;
        default: break;
    }

    ctx->pc = 0x14d288u;

    // 0x14d288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d28c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14d28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d298: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D298u;
    {
        const bool branch_taken_0x14d298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D298u;
        // 0x14d29c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d298) {
            ctx->pc = 0x14D2A8u;
            goto label_14d2a8;
        }
    }
    ctx->pc = 0x14D2A0u;
    // 0x14d2a0: 0xc05398a  jal         func_14E628
    ctx->pc = 0x14D2A0u;
    SET_GPR_U32(ctx, 31, 0x14D2A8u);
    ctx->pc = 0x14E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E628u, 0x14D2A0u, 0x14D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2A8u;
label_14d2a8:
    // 0x14d2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x14D2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2ACu;
        // 0x14d2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D2B4u;
    // 0x14d2b4: 0x0  nop
    ctx->pc = 0x14d2b4u;
    // NOP
    ctx->pc = 0x14d2b8u;
}
