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

// Function: sub_0033BF70
// Address: 0x33bf70 - 0x33bfa8
void sub_0033BF70_0x33bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BF70_0x33bf70");
#endif

    switch (ctx->pc) {
        case 0x33bf8cu: goto label_33bf8c;
        default: break;
    }

    ctx->pc = 0x33bf70u;

    // 0x33bf70: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x33bf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33bf74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bf74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33bf78: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x33bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x33bf7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33bf80: 0x52823  negu        $a1, $a1
    ctx->pc = 0x33bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x33bf84: 0xc0cee74  jal         func_33B9D0
    ctx->pc = 0x33BF84u;
    SET_GPR_U32(ctx, 31, 0x33BF8Cu);
    ctx->pc = 0x33BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF84u;
    // 0x33bf88: 0xc52824  and         $a1, $a2, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B9D0u, 0x33BF84u, 0x33BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF8Cu;
label_33bf8c:
    // 0x33bf8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF90u;
        // 0x33bf94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BF98u;
    // 0x33bf98: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x33bf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33bf9c: 0x0  nop
    ctx->pc = 0x33bf9cu;
    // NOP
    // 0x33bfa0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x33bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33bfa4: 0x0  nop
    ctx->pc = 0x33bfa4u;
    // NOP
    ctx->pc = 0x33bfa8u;
}
