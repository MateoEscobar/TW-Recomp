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

// Function: sub_001B4948
// Address: 0x1b4948 - 0x1b4980
void sub_001B4948_0x1b4948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4948_0x1b4948");
#endif

    switch (ctx->pc) {
        case 0x1b4970u: goto label_1b4970;
        default: break;
    }

    ctx->pc = 0x1b4948u;

    // 0x1b4948: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b4948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b494c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b494cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4950: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b4950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b4954: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1b4954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x1b4958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b495c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b4960: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b4960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4964: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1b4964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b4968: 0xc069b0e  jal         func_1A6C38
    ctx->pc = 0x1B4968u;
    SET_GPR_U32(ctx, 31, 0x1B4970u);
    ctx->pc = 0x1B496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4968u;
    // 0x1b496c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6C38u, 0x1B4968u, 0x1B4970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4970u;
label_1b4970:
    // 0x1b4970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4974: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4974u;
        // 0x1b4978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B497Cu;
    // 0x1b497c: 0x0  nop
    ctx->pc = 0x1b497cu;
    // NOP
    ctx->pc = 0x1b4980u;
}
