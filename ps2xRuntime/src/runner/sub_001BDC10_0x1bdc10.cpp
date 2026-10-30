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

// Function: sub_001BDC10
// Address: 0x1bdc10 - 0x1bdc48
void sub_001BDC10_0x1bdc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDC10_0x1bdc10");
#endif

    switch (ctx->pc) {
        case 0x1bdc38u: goto label_1bdc38;
        default: break;
    }

    ctx->pc = 0x1bdc10u;

    // 0x1bdc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bdc14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bdc14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdc1c: 0xac4006a8  sw          $zero, 0x6A8($v0)
    ctx->pc = 0x1bdc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 0));
    // 0x1bdc20: 0x8c450584  lw          $a1, 0x584($v0)
    ctx->pc = 0x1bdc20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x1bdc24: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1bdc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1bdc28: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1bdc28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bdc2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bdc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bdc30: 0xc06f60e  jal         func_1BD838
    ctx->pc = 0x1BDC30u;
    SET_GPR_U32(ctx, 31, 0x1BDC38u);
    ctx->pc = 0x1BDC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC30u;
    // 0x1bdc34: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD838u, 0x1BDC30u, 0x1BDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC38u;
label_1bdc38:
    // 0x1bdc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC3Cu;
        // 0x1bdc40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDC44u;
    // 0x1bdc44: 0x0  nop
    ctx->pc = 0x1bdc44u;
    // NOP
    ctx->pc = 0x1bdc48u;
}
