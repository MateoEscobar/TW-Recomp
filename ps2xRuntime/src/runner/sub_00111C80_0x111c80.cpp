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

// Function: sub_00111C80
// Address: 0x111c80 - 0x111cc0
void sub_00111C80_0x111c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111C80_0x111c80");
#endif

    switch (ctx->pc) {
        case 0x111c98u: goto label_111c98;
        case 0x111cb0u: goto label_111cb0;
        default: break;
    }

    ctx->pc = 0x111c80u;

    // 0x111c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111c84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x111c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x111c88: 0x2490000c  addiu       $s0, $a0, 0xC
    ctx->pc = 0x111c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x111c8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111c90: 0xc044674  jal         func_1119D0
    ctx->pc = 0x111C90u;
    SET_GPR_U32(ctx, 31, 0x111C98u);
    ctx->pc = 0x111C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C90u;
    // 0x111c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1119D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1119D0u, 0x111C90u, 0x111C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C98u;
label_111c98:
    // 0x111c98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x111c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111ca0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111CA0u;
    {
        const bool branch_taken_0x111ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x111CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CA0u;
        // 0x111ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ca0) {
            ctx->pc = 0x111CB0u;
            goto label_111cb0;
        }
    }
    ctx->pc = 0x111CA8u;
    // 0x111ca8: 0xc0446ac  jal         func_111AB0
    ctx->pc = 0x111CA8u;
    SET_GPR_U32(ctx, 31, 0x111CB0u);
    ctx->pc = 0x111CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111CA8u;
    // 0x111cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111AB0u, 0x111CA8u, 0x111CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111CB0u;
label_111cb0:
    // 0x111cb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x111cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x111CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CB8u;
        // 0x111cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111CC0u;
}
