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

// Function: sub_00231C20
// Address: 0x231c20 - 0x231c58
void sub_00231C20_0x231c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231C20_0x231c20");
#endif

    switch (ctx->pc) {
        case 0x231c34u: goto label_231c34;
        case 0x231c44u: goto label_231c44;
        default: break;
    }

    ctx->pc = 0x231c20u;

    // 0x231c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x231c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x231c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231c2c: 0xc08a150  jal         func_228540
    ctx->pc = 0x231C2Cu;
    SET_GPR_U32(ctx, 31, 0x231C34u);
    ctx->pc = 0x231C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C2Cu;
    // 0x231c30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228540u, 0x231C2Cu, 0x231C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C34u;
label_231c34:
    // 0x231c34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x231C34u;
    {
        const bool branch_taken_0x231c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c34) {
            ctx->pc = 0x231C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231C34u;
            // 0x231c38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231C48u;
            goto label_231c48;
        }
    }
    ctx->pc = 0x231C3Cu;
    // 0x231c3c: 0xc08a588  jal         func_229620
    ctx->pc = 0x231C3Cu;
    SET_GPR_U32(ctx, 31, 0x231C44u);
    ctx->pc = 0x231C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C3Cu;
    // 0x231c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229620u, 0x231C3Cu, 0x231C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C44u;
label_231c44:
    // 0x231c44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x231c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231c48:
    // 0x231c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x231C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C4Cu;
        // 0x231c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231C54u;
    // 0x231c54: 0x0  nop
    ctx->pc = 0x231c54u;
    // NOP
    ctx->pc = 0x231c58u;
}
