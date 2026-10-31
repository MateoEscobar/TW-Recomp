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

// Function: sub_00333EF8
// Address: 0x333ef8 - 0x333f48
void sub_00333EF8_0x333ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333EF8_0x333ef8");
#endif

    switch (ctx->pc) {
        case 0x333f14u: goto label_333f14;
        case 0x333f34u: goto label_333f34;
        default: break;
    }

    ctx->pc = 0x333ef8u;

    // 0x333ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x333ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x333efc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x333efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x333f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x333f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333f0c: 0xc0ccf88  jal         func_333E20
    ctx->pc = 0x333F0Cu;
    SET_GPR_U32(ctx, 31, 0x333F14u);
    ctx->pc = 0x333F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F0Cu;
    // 0x333f10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333E20u, 0x333F0Cu, 0x333F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F14u;
label_333f14:
    // 0x333f14: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x333F14u;
    {
        const bool branch_taken_0x333f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333f14) {
            ctx->pc = 0x333F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333F14u;
            // 0x333f18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333F38u;
            goto label_333f38;
        }
    }
    ctx->pc = 0x333F1Cu;
    // 0x333f1c: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x333f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x333f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f24: 0x2625ffe0  addiu       $a1, $s1, -0x20
    ctx->pc = 0x333f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x333f28: 0x24e76830  addiu       $a3, $a3, 0x6830
    ctx->pc = 0x333f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26672));
    // 0x333f2c: 0xc0ca19a  jal         func_328668
    ctx->pc = 0x333F2Cu;
    SET_GPR_U32(ctx, 31, 0x333F34u);
    ctx->pc = 0x333F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F2Cu;
    // 0x333f30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328668u, 0x333F2Cu, 0x333F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F34u;
label_333f34:
    // 0x333f34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x333f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_333f38:
    // 0x333f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333f40: 0x3e00008  jr          $ra
    ctx->pc = 0x333F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F40u;
        // 0x333f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333F48u;
}
