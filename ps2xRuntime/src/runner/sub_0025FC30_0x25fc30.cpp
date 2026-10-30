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

// Function: sub_0025FC30
// Address: 0x25fc30 - 0x25fc70
void sub_0025FC30_0x25fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FC30_0x25fc30");
#endif

    switch (ctx->pc) {
        case 0x25fc54u: goto label_25fc54;
        default: break;
    }

    ctx->pc = 0x25fc30u;

    // 0x25fc30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fc34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25fc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fc3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25fc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc40: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25fc44: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x25fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25fc48: 0x38a50018  xori        $a1, $a1, 0x18
    ctx->pc = 0x25fc48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)24);
    // 0x25fc4c: 0xc097788  jal         func_25DE20
    ctx->pc = 0x25FC4Cu;
    SET_GPR_U32(ctx, 31, 0x25FC54u);
    ctx->pc = 0x25FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC4Cu;
    // 0x25fc50: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DE20u, 0x25FC4Cu, 0x25FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC54u;
label_25fc54:
    // 0x25fc54: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25fc58: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x25fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x25fc5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25fc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fc64: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x25fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x25fc68: 0x3e00008  jr          $ra
    ctx->pc = 0x25FC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC68u;
        // 0x25fc6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FC70u;
}
