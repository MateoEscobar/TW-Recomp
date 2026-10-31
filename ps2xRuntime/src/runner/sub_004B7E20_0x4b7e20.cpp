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

// Function: sub_004B7E20
// Address: 0x4b7e20 - 0x4b7e50
void sub_004B7E20_0x4b7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7E20_0x4b7e20");
#endif

    switch (ctx->pc) {
        case 0x4b7e38u: goto label_4b7e38;
        default: break;
    }

    ctx->pc = 0x4b7e20u;

    // 0x4b7e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b7e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b7e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b7e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b7e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b7e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7e30: 0xc10c550  jal         func_431540
    ctx->pc = 0x4B7E30u;
    SET_GPR_U32(ctx, 31, 0x4B7E38u);
    ctx->pc = 0x4B7E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7E30u;
    // 0x4b7e34: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431540u, 0x4B7E30u, 0x4B7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7E38u;
label_4b7e38:
    // 0x4b7e38: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4b7e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x4b7e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b7e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7e44: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7E44u;
        // 0x4b7e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7E4Cu;
    // 0x4b7e4c: 0x0  nop
    ctx->pc = 0x4b7e4cu;
    // NOP
    ctx->pc = 0x4b7e50u;
}
