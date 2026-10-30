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

// Function: sub_0010FC30
// Address: 0x10fc30 - 0x10fc70
void sub_0010FC30_0x10fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FC30_0x10fc30");
#endif

    switch (ctx->pc) {
        case 0x10fc44u: goto label_10fc44;
        case 0x10fc5cu: goto label_10fc5c;
        default: break;
    }

    ctx->pc = 0x10fc30u;

    // 0x10fc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10fc34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10fc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fc3c: 0xc04444c  jal         func_111130
    ctx->pc = 0x10FC3Cu;
    SET_GPR_U32(ctx, 31, 0x10FC44u);
    ctx->pc = 0x10FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC3Cu;
    // 0x10fc40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x10FC3Cu, 0x10FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC44u;
label_10fc44:
    // 0x10fc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc4c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x10fc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x10fc50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10fc50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc54: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x10FC54u;
    SET_GPR_U32(ctx, 31, 0x10FC5Cu);
    ctx->pc = 0x10FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC54u;
    // 0x10fc58: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x10FC54u, 0x10FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC5Cu;
label_10fc5c:
    // 0x10fc5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10fc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fc64: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC64u;
        // 0x10fc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FC6Cu;
    // 0x10fc6c: 0x0  nop
    ctx->pc = 0x10fc6cu;
    // NOP
    ctx->pc = 0x10fc70u;
}
