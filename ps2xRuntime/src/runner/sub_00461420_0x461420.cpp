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

// Function: sub_00461420
// Address: 0x461420 - 0x461470
void sub_00461420_0x461420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461420_0x461420");
#endif

    switch (ctx->pc) {
        case 0x46144cu: goto label_46144c;
        case 0x461458u: goto label_461458;
        default: break;
    }

    ctx->pc = 0x461420u;

    // 0x461420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x461420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x461424: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x461424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x461428: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x461428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46142c: 0x8c43d81c  lw          $v1, -0x27E4($v0)
    ctx->pc = 0x46142cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51D81Cu));
    // 0x461430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x461430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x461434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x461438: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x461438u;
    {
        const bool branch_taken_0x461438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461438u;
        // 0x46143c: 0x2442d81c  addiu       $v0, $v0, -0x27E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461438) {
            ctx->pc = 0x46144Cu;
            goto label_46144c;
        }
    }
    ctx->pc = 0x461440u;
    // 0x461440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x461440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461444: 0xc11864c  jal         func_461930
    ctx->pc = 0x461444u;
    SET_GPR_U32(ctx, 31, 0x46144Cu);
    ctx->pc = 0x461448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461444u;
    // 0x461448: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461930u, 0x461444u, 0x46144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46144Cu;
label_46144c:
    // 0x46144c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46144cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461450: 0xc118574  jal         func_4615D0
    ctx->pc = 0x461450u;
    SET_GPR_U32(ctx, 31, 0x461458u);
    ctx->pc = 0x461454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461450u;
    // 0x461454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4615D0u, 0x461450u, 0x461458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461458u;
label_461458:
    // 0x461458: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x461458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46145c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46145cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x461460: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x461460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x461464: 0x3e00008  jr          $ra
    ctx->pc = 0x461464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461464u;
        // 0x461468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46146Cu;
    // 0x46146c: 0x0  nop
    ctx->pc = 0x46146cu;
    // NOP
    ctx->pc = 0x461470u;
}
