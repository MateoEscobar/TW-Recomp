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

// Function: sub_00199E08
// Address: 0x199e08 - 0x199e50
void sub_00199E08_0x199e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199E08_0x199e08");
#endif

    switch (ctx->pc) {
        case 0x199e30u: goto label_199e30;
        case 0x199e3cu: goto label_199e3c;
        default: break;
    }

    ctx->pc = 0x199e08u;

    // 0x199e08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199e0c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x199e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x199e10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x199e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x199e14: 0x244290f0  addiu       $v0, $v0, -0x6F10
    ctx->pc = 0x199e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
    // 0x199e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199e24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x199e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e28: 0xc066846  jal         func_19A118
    ctx->pc = 0x199E28u;
    SET_GPR_U32(ctx, 31, 0x199E30u);
    ctx->pc = 0x199E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E28u;
    // 0x199e2c: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A118u, 0x199E28u, 0x199E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E30u;
label_199e30:
    // 0x199e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e34: 0xc066eae  jal         func_19BAB8
    ctx->pc = 0x199E34u;
    SET_GPR_U32(ctx, 31, 0x199E3Cu);
    ctx->pc = 0x199E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E34u;
    // 0x199e38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BAB8u, 0x199E34u, 0x199E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E3Cu;
label_199e3c:
    // 0x199e3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x199e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199e40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199e48: 0x3e00008  jr          $ra
    ctx->pc = 0x199E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E48u;
        // 0x199e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199E50u;
}
