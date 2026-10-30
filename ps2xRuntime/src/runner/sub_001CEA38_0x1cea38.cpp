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

// Function: sub_001CEA38
// Address: 0x1cea38 - 0x1cea70
void sub_001CEA38_0x1cea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEA38_0x1cea38");
#endif

    switch (ctx->pc) {
        case 0x1cea60u: goto label_1cea60;
        default: break;
    }

    ctx->pc = 0x1cea38u;

    // 0x1cea38: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1cea38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1cea3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cea3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cea44: 0x2444e998  addiu       $a0, $v0, -0x1668
    ctx->pc = 0x1cea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961560));
    // 0x1cea48: 0x8c43e998  lw          $v1, -0x1668($v0)
    ctx->pc = 0x1cea48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6FE998u));
    // 0x1cea4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cea50: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEA50u;
    {
        const bool branch_taken_0x1cea50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA50u;
        // 0x1cea54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea50) {
            ctx->pc = 0x1CEA64u;
            goto label_1cea64;
        }
    }
    ctx->pc = 0x1CEA58u;
    // 0x1cea58: 0xc10904c  jal         func_424130
    ctx->pc = 0x1CEA58u;
    SET_GPR_U32(ctx, 31, 0x1CEA60u);
    ctx->pc = 0x1CEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA58u;
    // 0x1cea5c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x1CEA58u, 0x1CEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA60u;
label_1cea60:
    // 0x1cea60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1cea60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cea64:
    // 0x1cea64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cea64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cea68: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA68u;
        // 0x1cea6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA70u;
}
