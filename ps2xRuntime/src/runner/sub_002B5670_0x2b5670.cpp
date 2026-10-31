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

// Function: sub_002B5670
// Address: 0x2b5670 - 0x2b5698
void sub_002B5670_0x2b5670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5670_0x2b5670");
#endif

    ctx->pc = 0x2b5670u;

    // 0x2b5670: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5674: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x2b5674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b5678: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5678u;
    {
        const bool branch_taken_0x2b5678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5678u;
        // 0x2b567c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5678) {
            ctx->pc = 0x2B5690u;
            goto label_2b5690;
        }
    }
    ctx->pc = 0x2B5680u;
    // 0x2b5680: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2b5680u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2b5684: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2b5684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2b5688: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b5688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b568c: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2b568cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2b5690:
    // 0x2b5690: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5698u;
}
