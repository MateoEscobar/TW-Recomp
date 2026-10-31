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

// Function: sub_00332668
// Address: 0x332668 - 0x3326a0
void sub_00332668_0x332668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332668_0x332668");
#endif

    switch (ctx->pc) {
        case 0x332694u: goto label_332694;
        default: break;
    }

    ctx->pc = 0x332668u;

    // 0x332668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x332668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33266c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33266cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332670: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x332670u;
    {
        const bool branch_taken_0x332670 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x332674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332670u;
        // 0x332674: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332670) {
            ctx->pc = 0x332688u;
            goto label_332688;
        }
    }
    ctx->pc = 0x332678u;
    // 0x332678: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x332678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x33267c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x33267cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x332680: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x332680u;
    {
        const bool branch_taken_0x332680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332680u;
        // 0x332684: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332680) {
            ctx->pc = 0x332698u;
            goto label_332698;
        }
    }
    ctx->pc = 0x332688u;
label_332688:
    // 0x332688: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x332688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x33268c: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x33268Cu;
    SET_GPR_U32(ctx, 31, 0x332694u);
    ctx->pc = 0x332690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33268Cu;
    // 0x332690: 0x24a56538  addiu       $a1, $a1, 0x6538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x33268Cu, 0x332694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332694u;
label_332694:
    // 0x332694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_332698:
    // 0x332698: 0x3e00008  jr          $ra
    ctx->pc = 0x332698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332698u;
        // 0x33269c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3326A0u;
}
