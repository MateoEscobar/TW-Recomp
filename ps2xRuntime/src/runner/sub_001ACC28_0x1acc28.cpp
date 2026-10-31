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

// Function: sub_001ACC28
// Address: 0x1acc28 - 0x1acc60
void sub_001ACC28_0x1acc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACC28_0x1acc28");
#endif

    switch (ctx->pc) {
        case 0x1acc3cu: goto label_1acc3c;
        default: break;
    }

    ctx->pc = 0x1acc28u;

    // 0x1acc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1acc2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1acc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1acc30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1acc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1acc34: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1ACC34u;
    SET_GPR_U32(ctx, 31, 0x1ACC3Cu);
    ctx->pc = 0x1ACC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC34u;
    // 0x1acc38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1ACC34u, 0x1ACC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC3Cu;
label_1acc3c:
    // 0x1acc3c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1acc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1acc40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1acc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc44: 0x24639e38  addiu       $v1, $v1, -0x61C8
    ctx->pc = 0x1acc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942264));
    // 0x1acc48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acc4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1acc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1acc50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1acc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acc54: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC54u;
        // 0x1acc58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACC5Cu;
    // 0x1acc5c: 0x0  nop
    ctx->pc = 0x1acc5cu;
    // NOP
    ctx->pc = 0x1acc60u;
}
