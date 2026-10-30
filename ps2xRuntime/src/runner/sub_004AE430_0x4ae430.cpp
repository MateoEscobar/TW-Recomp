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

// Function: sub_004AE430
// Address: 0x4ae430 - 0x4ae450
void sub_004AE430_0x4ae430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE430_0x4ae430");
#endif

    switch (ctx->pc) {
        case 0x4ae430u: goto label_4ae430;
        case 0x4ae434u: goto label_4ae434;
        case 0x4ae438u: goto label_4ae438;
        case 0x4ae43cu: goto label_4ae43c;
        case 0x4ae440u: goto label_4ae440;
        case 0x4ae444u: goto label_4ae444;
        case 0x4ae448u: goto label_4ae448;
        case 0x4ae44cu: goto label_4ae44c;
        default: break;
    }

    ctx->pc = 0x4ae430u;

label_4ae430:
    // 0x4ae430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ae434:
    // 0x4ae434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ae438:
    // 0x4ae438: 0xa0f809  jalr        $a1
label_4ae43c:
    if (ctx->pc == 0x4AE43Cu) {
        ctx->pc = 0x4AE440u;
        goto label_4ae440;
    }
    ctx->pc = 0x4AE438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4AE440u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE438u, 0x4AE440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AE440u;
label_4ae440:
    // 0x4ae440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ae444:
    // 0x4ae444: 0x3e00008  jr          $ra
label_4ae448:
    if (ctx->pc == 0x4AE448u) {
        ctx->pc = 0x4AE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE444u;
        // 0x4ae448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AE44Cu;
        goto label_4ae44c;
    }
    ctx->pc = 0x4AE444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE444u;
        // 0x4ae448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE44Cu;
label_4ae44c:
    // 0x4ae44c: 0x0  nop
    ctx->pc = 0x4ae44cu;
    // NOP
    ctx->pc = 0x4ae450u;
}
