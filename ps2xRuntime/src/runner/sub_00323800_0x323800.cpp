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

// Function: sub_00323800
// Address: 0x323800 - 0x323840
void sub_00323800_0x323800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323800_0x323800");
#endif

    switch (ctx->pc) {
        case 0x323810u: goto label_323810;
        default: break;
    }

    ctx->pc = 0x323800u;

    // 0x323800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323808: 0xc0c8cb0  jal         func_3232C0
    ctx->pc = 0x323808u;
    SET_GPR_U32(ctx, 31, 0x323810u);
    ctx->pc = 0x3232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232C0u, 0x323808u, 0x323810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323810u;
label_323810:
    // 0x323810: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x323810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323814: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x323814u;
    {
        const bool branch_taken_0x323814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x323818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323814u;
        // 0x323818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323814) {
            ctx->pc = 0x323830u;
            goto label_323830;
        }
    }
    ctx->pc = 0x32381Cu;
    // 0x32381c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x323820: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x323820u;
    {
        const bool branch_taken_0x323820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323820) {
            ctx->pc = 0x323824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323820u;
            // 0x323824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323830u;
            goto label_323830;
        }
    }
    ctx->pc = 0x323828u;
    // 0x323828: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x323828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32382c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x32382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_323830:
    // 0x323830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323834: 0x3e00008  jr          $ra
    ctx->pc = 0x323834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323834u;
        // 0x323838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32383Cu;
    // 0x32383c: 0x0  nop
    ctx->pc = 0x32383cu;
    // NOP
    ctx->pc = 0x323840u;
}
