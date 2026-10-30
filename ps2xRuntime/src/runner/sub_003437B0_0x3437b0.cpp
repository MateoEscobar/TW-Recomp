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

// Function: sub_003437B0
// Address: 0x3437b0 - 0x3437e8
void sub_003437B0_0x3437b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003437B0_0x3437b0");
#endif

    switch (ctx->pc) {
        case 0x3437c8u: goto label_3437c8;
        default: break;
    }

    ctx->pc = 0x3437b0u;

    // 0x3437b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3437b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3437b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3437b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3437b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3437b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3437bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3437bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3437c0: 0xc0d0a8c  jal         func_342A30
    ctx->pc = 0x3437C0u;
    SET_GPR_U32(ctx, 31, 0x3437C8u);
    ctx->pc = 0x3437C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3437C0u;
    // 0x3437c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A30u, 0x3437C0u, 0x3437C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3437C8u;
label_3437c8:
    // 0x3437c8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x3437c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x3437cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3437ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437d0: 0x24634770  addiu       $v1, $v1, 0x4770
    ctx->pc = 0x3437d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18288));
    // 0x3437d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3437d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3437d8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x3437d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x3437dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3437dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3437e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3437E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3437E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437E0u;
        // 0x3437e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3437E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3437E8u;
}
