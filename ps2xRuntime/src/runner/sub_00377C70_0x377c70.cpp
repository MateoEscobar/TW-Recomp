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

// Function: sub_00377C70
// Address: 0x377c70 - 0x377cc8
void sub_00377C70_0x377c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377C70_0x377c70");
#endif

    switch (ctx->pc) {
        case 0x377c8cu: goto label_377c8c;
        case 0x377c94u: goto label_377c94;
        case 0x377c9cu: goto label_377c9c;
        case 0x377ca4u: goto label_377ca4;
        case 0x377cb0u: goto label_377cb0;
        default: break;
    }

    ctx->pc = 0x377c70u;

    // 0x377c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377c74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x377c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x377c7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377c84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377C84u;
    SET_GPR_U32(ctx, 31, 0x377C8Cu);
    ctx->pc = 0x377C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C84u;
    // 0x377c88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377C84u, 0x377C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C8Cu;
label_377c8c:
    // 0x377c8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377C8Cu;
    SET_GPR_U32(ctx, 31, 0x377C94u);
    ctx->pc = 0x377C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C8Cu;
    // 0x377c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377C8Cu, 0x377C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C94u;
label_377c94:
    // 0x377c94: 0xc0e5a04  jal         func_396810
    ctx->pc = 0x377C94u;
    SET_GPR_U32(ctx, 31, 0x377C9Cu);
    ctx->pc = 0x377C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C94u;
    // 0x377c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396810u, 0x377C94u, 0x377C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C9Cu;
label_377c9c:
    // 0x377c9c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x377C9Cu;
    SET_GPR_U32(ctx, 31, 0x377CA4u);
    ctx->pc = 0x377CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C9Cu;
    // 0x377ca0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x377C9Cu, 0x377CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377CA4u;
label_377ca4:
    // 0x377ca4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x377ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ca8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x377CA8u;
    SET_GPR_U32(ctx, 31, 0x377CB0u);
    ctx->pc = 0x377CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377CA8u;
    // 0x377cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x377CA8u, 0x377CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377CB0u;
label_377cb0:
    // 0x377cb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x377cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x377CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377CBCu;
        // 0x377cc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377CC4u;
    // 0x377cc4: 0x0  nop
    ctx->pc = 0x377cc4u;
    // NOP
    ctx->pc = 0x377cc8u;
}
