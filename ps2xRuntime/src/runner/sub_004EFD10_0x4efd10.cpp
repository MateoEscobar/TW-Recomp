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

// Function: sub_004EFD10
// Address: 0x4efd10 - 0x4efd48
void sub_004EFD10_0x4efd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFD10_0x4efd10");
#endif

    switch (ctx->pc) {
        case 0x4efd34u: goto label_4efd34;
        default: break;
    }

    ctx->pc = 0x4efd10u;

    // 0x4efd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4efd14: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4efd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4efd18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4efd1c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x4efd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x4efd20: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4efd20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4efd24: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EFD24u;
    {
        const bool branch_taken_0x4efd24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFD24u;
        // 0x4efd28: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4efd24) {
            ctx->pc = 0x4EFD34u;
            goto label_4efd34;
        }
    }
    ctx->pc = 0x4EFD2Cu;
    // 0x4efd2c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4EFD2Cu;
    SET_GPR_U32(ctx, 31, 0x4EFD34u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EFD2Cu, 0x4EFD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EFD34u;
label_4efd34:
    // 0x4efd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4efd38: 0x3e00008  jr          $ra
    ctx->pc = 0x4EFD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFD38u;
        // 0x4efd3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFD40u;
    // 0x4efd40: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4efd40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4efd44: 0x0  nop
    ctx->pc = 0x4efd44u;
    // NOP
    ctx->pc = 0x4efd48u;
}
