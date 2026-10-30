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

// Function: sub_0046AA70
// Address: 0x46aa70 - 0x46aac0
void sub_0046AA70_0x46aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AA70_0x46aa70");
#endif

    switch (ctx->pc) {
        case 0x46aa94u: goto label_46aa94;
        case 0x46aa9cu: goto label_46aa9c;
        default: break;
    }

    ctx->pc = 0x46aa70u;

    // 0x46aa70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46aa74: 0x8f8284bc  lw          $v0, -0x7B44($gp)
    ctx->pc = 0x46aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x46aa78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46aa7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46aa7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aa80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46aa84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x46aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x46aa88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46aa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aa8c: 0xc11a880  jal         func_46A200
    ctx->pc = 0x46AA8Cu;
    SET_GPR_U32(ctx, 31, 0x46AA94u);
    ctx->pc = 0x46AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AA8Cu;
    // 0x46aa90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A200u, 0x46AA8Cu, 0x46AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AA94u;
label_46aa94:
    // 0x46aa94: 0xc120a1c  jal         func_482870
    ctx->pc = 0x46AA94u;
    SET_GPR_U32(ctx, 31, 0x46AA9Cu);
    ctx->pc = 0x46AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AA94u;
    // 0x46aa98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482870u, 0x46AA94u, 0x46AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AA9Cu;
label_46aa9c:
    // 0x46aa9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46aa9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aaa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46aaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46aaa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46aaa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46aaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x46AAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AAA8u;
        // 0x46aaac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AAB0u;
    // 0x46aab0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46aab4: 0x0  nop
    ctx->pc = 0x46aab4u;
    // NOP
    // 0x46aab8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46aab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46aabc: 0x0  nop
    ctx->pc = 0x46aabcu;
    // NOP
    ctx->pc = 0x46aac0u;
}
