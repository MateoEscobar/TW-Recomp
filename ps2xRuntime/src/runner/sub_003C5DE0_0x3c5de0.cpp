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

// Function: sub_003C5DE0
// Address: 0x3c5de0 - 0x3c5e50
void sub_003C5DE0_0x3c5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5DE0_0x3c5de0");
#endif

    switch (ctx->pc) {
        case 0x3c5e08u: goto label_3c5e08;
        case 0x3c5e14u: goto label_3c5e14;
        case 0x3c5e20u: goto label_3c5e20;
        case 0x3c5e30u: goto label_3c5e30;
        case 0x3c5e38u: goto label_3c5e38;
        default: break;
    }

    ctx->pc = 0x3c5de0u;

    // 0x3c5de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c5de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c5de4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c5de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c5de8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c5de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c5dec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c5decu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c5df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5df4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c5df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c5df8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5dfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5e00: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5E00u;
    SET_GPR_U32(ctx, 31, 0x3C5E08u);
    ctx->pc = 0x3C5E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5E00u;
    // 0x3c5e04: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5E00u, 0x3C5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5E08u;
label_3c5e08:
    // 0x3c5e08: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5e0c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5E0Cu;
    SET_GPR_U32(ctx, 31, 0x3C5E14u);
    ctx->pc = 0x3C5E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5E0Cu;
    // 0x3c5e10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5E0Cu, 0x3C5E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5E14u;
label_3c5e14:
    // 0x3c5e14: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5e18: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5E18u;
    SET_GPR_U32(ctx, 31, 0x3C5E20u);
    ctx->pc = 0x3C5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5E18u;
    // 0x3c5e1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5E18u, 0x3C5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5E20u;
label_3c5e20:
    // 0x3c5e20: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5e24: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c5e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5e28: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5E28u;
    SET_GPR_U32(ctx, 31, 0x3C5E30u);
    ctx->pc = 0x3C5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5E28u;
    // 0x3c5e2c: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5E28u, 0x3C5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5E30u;
label_3c5e30:
    // 0x3c5e30: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C5E30u;
    SET_GPR_U32(ctx, 31, 0x3C5E38u);
    ctx->pc = 0x3C5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5E30u;
    // 0x3c5e34: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C5E30u, 0x3C5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5E38u;
label_3c5e38:
    // 0x3c5e38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c5e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5e3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c5e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5e40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c5e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5e48: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E48u;
        // 0x3c5e4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5E50u;
}
