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

// Function: sub_002E55E8
// Address: 0x2e55e8 - 0x2e5618
void sub_002E55E8_0x2e55e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E55E8_0x2e55e8");
#endif

    switch (ctx->pc) {
        case 0x2e560cu: goto label_2e560c;
        default: break;
    }

    ctx->pc = 0x2e55e8u;

    // 0x2e55e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e55e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e55ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e55ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e55f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e55f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e55f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E55F8u;
    {
        const bool branch_taken_0x2e55f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55F8u;
        // 0x2e55fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55f8) {
            ctx->pc = 0x2E5610u;
            goto label_2e5610;
        }
    }
    ctx->pc = 0x2E5600u;
    // 0x2e5600: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2e5600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2e5604: 0xc0a33b6  jal         func_28CED8
    ctx->pc = 0x2E5604u;
    SET_GPR_U32(ctx, 31, 0x2E560Cu);
    ctx->pc = 0x2E5608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5604u;
    // 0x2e5608: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x2E5604u, 0x2E560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E560Cu;
label_2e560c:
    // 0x2e560c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e560cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5610:
    // 0x2e5610: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5610u;
        // 0x2e5614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5618u;
}
