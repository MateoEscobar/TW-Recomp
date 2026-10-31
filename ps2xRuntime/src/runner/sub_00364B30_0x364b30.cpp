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

// Function: sub_00364B30
// Address: 0x364b30 - 0x364ba8
void sub_00364B30_0x364b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364B30_0x364b30");
#endif

    switch (ctx->pc) {
        case 0x364b58u: goto label_364b58;
        case 0x364b60u: goto label_364b60;
        case 0x364b74u: goto label_364b74;
        case 0x364b7cu: goto label_364b7c;
        case 0x364b88u: goto label_364b88;
        default: break;
    }

    ctx->pc = 0x364b30u;

    // 0x364b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x364b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x364b34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364b38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x364b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x364b3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x364b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x364b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x364b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x364b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x364b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364b50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364B50u;
    SET_GPR_U32(ctx, 31, 0x364B58u);
    ctx->pc = 0x364B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B50u;
    // 0x364b54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364B50u, 0x364B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B58u;
label_364b58:
    // 0x364b58: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364B58u;
    SET_GPR_U32(ctx, 31, 0x364B60u);
    ctx->pc = 0x364B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B58u;
    // 0x364b5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364B58u, 0x364B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B60u;
label_364b60:
    // 0x364b60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x364b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x364b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364B6Cu;
    SET_GPR_U32(ctx, 31, 0x364B74u);
    ctx->pc = 0x364B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B6Cu;
    // 0x364b70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364B6Cu, 0x364B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B74u;
label_364b74:
    // 0x364b74: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364B74u;
    SET_GPR_U32(ctx, 31, 0x364B7Cu);
    ctx->pc = 0x364B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B74u;
    // 0x364b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364B74u, 0x364B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B7Cu;
label_364b7c:
    // 0x364b7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x364b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b80: 0xc0a648e  jal         func_299238
    ctx->pc = 0x364B80u;
    SET_GPR_U32(ctx, 31, 0x364B88u);
    ctx->pc = 0x364B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364B80u;
    // 0x364b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299238u, 0x364B80u, 0x364B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B88u;
label_364b88:
    // 0x364b88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x364b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x364b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364b94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x364b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x364B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364B9Cu;
        // 0x364ba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364BA4u;
    // 0x364ba4: 0x0  nop
    ctx->pc = 0x364ba4u;
    // NOP
    ctx->pc = 0x364ba8u;
}
