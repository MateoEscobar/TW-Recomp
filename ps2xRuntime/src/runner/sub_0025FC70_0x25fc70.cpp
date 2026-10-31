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

// Function: sub_0025FC70
// Address: 0x25fc70 - 0x25fcb0
void sub_0025FC70_0x25fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FC70_0x25fc70");
#endif

    switch (ctx->pc) {
        case 0x25fc94u: goto label_25fc94;
        default: break;
    }

    ctx->pc = 0x25fc70u;

    // 0x25fc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fc74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25fc78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fc7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25fc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc80: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25fc84: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x25fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25fc88: 0x38a50015  xori        $a1, $a1, 0x15
    ctx->pc = 0x25fc88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)21);
    // 0x25fc8c: 0xc097838  jal         func_25E0E0
    ctx->pc = 0x25FC8Cu;
    SET_GPR_U32(ctx, 31, 0x25FC94u);
    ctx->pc = 0x25FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC8Cu;
    // 0x25fc90: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0E0u, 0x25FC8Cu, 0x25FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC94u;
label_25fc94:
    // 0x25fc94: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25fc98: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x25fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25fc9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25fc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fca4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x25fca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x25fca8: 0x3e00008  jr          $ra
    ctx->pc = 0x25FCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCA8u;
        // 0x25fcac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FCB0u;
}
