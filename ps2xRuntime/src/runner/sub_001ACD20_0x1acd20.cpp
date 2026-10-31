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

// Function: sub_001ACD20
// Address: 0x1acd20 - 0x1acd60
void sub_001ACD20_0x1acd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACD20_0x1acd20");
#endif

    switch (ctx->pc) {
        case 0x1acd38u: goto label_1acd38;
        default: break;
    }

    ctx->pc = 0x1acd20u;

    // 0x1acd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1acd24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1acd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1acd28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1acd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1acd30: 0xc0e1938  jal         func_3864E0
    ctx->pc = 0x1ACD30u;
    SET_GPR_U32(ctx, 31, 0x1ACD38u);
    ctx->pc = 0x1ACD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD30u;
    // 0x1acd34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3864E0u, 0x1ACD30u, 0x1ACD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD38u;
label_1acd38:
    // 0x1acd38: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1acd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1acd3c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1acd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1acd40: 0x24632e20  addiu       $v1, $v1, 0x2E20
    ctx->pc = 0x1acd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11808));
    // 0x1acd44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acd48: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1acd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1acd4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1acd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1acd50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1acd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acd54: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD54u;
        // 0x1acd58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD5Cu;
    // 0x1acd5c: 0x0  nop
    ctx->pc = 0x1acd5cu;
    // NOP
    ctx->pc = 0x1acd60u;
}
