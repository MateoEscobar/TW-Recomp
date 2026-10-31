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

// Function: sub_00268DF8
// Address: 0x268df8 - 0x268e50
void sub_00268DF8_0x268df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268DF8_0x268df8");
#endif

    switch (ctx->pc) {
        case 0x268e18u: goto label_268e18;
        case 0x268e30u: goto label_268e30;
        case 0x268e3cu: goto label_268e3c;
        default: break;
    }

    ctx->pc = 0x268df8u;

    // 0x268df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268dfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x268dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x268e00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268e0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x268e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e10: 0xc0e409a  jal         func_390268
    ctx->pc = 0x268E10u;
    SET_GPR_U32(ctx, 31, 0x268E18u);
    ctx->pc = 0x268E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E10u;
    // 0x268e14: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x268E10u, 0x268E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E18u;
label_268e18:
    // 0x268e18: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x268e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x268e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x268e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e28: 0xc08b3ae  jal         func_22CEB8
    ctx->pc = 0x268E28u;
    SET_GPR_U32(ctx, 31, 0x268E30u);
    ctx->pc = 0x268E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E28u;
    // 0x268e2c: 0xa4600118  sh          $zero, 0x118($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x268E28u, 0x268E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E30u;
label_268e30:
    // 0x268e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e34: 0xc09a3aa  jal         func_268EA8
    ctx->pc = 0x268E34u;
    SET_GPR_U32(ctx, 31, 0x268E3Cu);
    ctx->pc = 0x268E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E34u;
    // 0x268e38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268EA8u, 0x268E34u, 0x268E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E3Cu;
label_268e3c:
    // 0x268e3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x268e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268e40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268e48: 0x3e00008  jr          $ra
    ctx->pc = 0x268E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E48u;
        // 0x268e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268E50u;
}
