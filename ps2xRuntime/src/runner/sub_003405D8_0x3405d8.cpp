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

// Function: sub_003405D8
// Address: 0x3405d8 - 0x340628
void sub_003405D8_0x3405d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003405D8_0x3405d8");
#endif

    ctx->pc = 0x3405d8u;

    // 0x3405d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3405d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3405dc: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3405DCu;
    {
        const bool branch_taken_0x3405dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3405dc) {
            ctx->pc = 0x3405E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3405DCu;
            // 0x3405e0: 0x8ca30024  lw          $v1, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3405F8u;
            goto label_3405f8;
        }
    }
    ctx->pc = 0x3405E4u;
    // 0x3405e4: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x3405e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3405e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3405E8u;
    {
        const bool branch_taken_0x3405e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3405ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405E8u;
        // 0x3405ec: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405e8) {
            ctx->pc = 0x340618u;
            goto label_340618;
        }
    }
    ctx->pc = 0x3405F0u;
    // 0x3405f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3405F0u;
    {
        const bool branch_taken_0x3405f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3405F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405F0u;
        // 0x3405f4: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405f0) {
            ctx->pc = 0x340618u;
            goto label_340618;
        }
    }
    ctx->pc = 0x3405F8u;
label_3405f8:
    // 0x3405f8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3405F8u;
    {
        const bool branch_taken_0x3405f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3405f8) {
            ctx->pc = 0x3405FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3405F8u;
            // 0x3405fc: 0x8ca30028  lw          $v1, 0x28($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34060Cu;
            goto label_34060c;
        }
    }
    ctx->pc = 0x340600u;
    // 0x340600: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x340600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x340604: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x340604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x340608: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x340608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_34060c:
    // 0x34060c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34060Cu;
    {
        const bool branch_taken_0x34060c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34060Cu;
        // 0x340610: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34060c) {
            ctx->pc = 0x34061Cu;
            goto label_34061c;
        }
    }
    ctx->pc = 0x340614u;
    // 0x340614: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x340614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_340618:
    // 0x340618: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x340618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_34061c:
    // 0x34061c: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x34061cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x340620: 0x3e00008  jr          $ra
    ctx->pc = 0x340620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340620u;
        // 0x340624: 0xaca00028  sw          $zero, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340628u;
}
