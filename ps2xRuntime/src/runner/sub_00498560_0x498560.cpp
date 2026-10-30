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

// Function: sub_00498560
// Address: 0x498560 - 0x498598
void sub_00498560_0x498560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498560_0x498560");
#endif

    switch (ctx->pc) {
        case 0x498560u: goto label_498560;
        case 0x498564u: goto label_498564;
        case 0x498568u: goto label_498568;
        case 0x49856cu: goto label_49856c;
        case 0x498570u: goto label_498570;
        case 0x498574u: goto label_498574;
        case 0x498578u: goto label_498578;
        case 0x49857cu: goto label_49857c;
        case 0x498580u: goto label_498580;
        case 0x498584u: goto label_498584;
        case 0x498588u: goto label_498588;
        case 0x49858cu: goto label_49858c;
        case 0x498590u: goto label_498590;
        case 0x498594u: goto label_498594;
        default: break;
    }

    ctx->pc = 0x498560u;

label_498560:
    // 0x498560: 0xaf848794  sw          $a0, -0x786C($gp)
    ctx->pc = 0x498560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936468), GPR_U32(ctx, 4));
label_498564:
    // 0x498564: 0x3e00008  jr          $ra
label_498568:
    if (ctx->pc == 0x498568u) {
        ctx->pc = 0x498568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498564u;
        // 0x498568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49856Cu;
        goto label_49856c;
    }
    ctx->pc = 0x498564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498564u;
        // 0x498568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49856Cu;
label_49856c:
    // 0x49856c: 0x0  nop
    ctx->pc = 0x49856cu;
    // NOP
label_498570:
    // 0x498570: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x498570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_498574:
    // 0x498574: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x498574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_498578:
    // 0x498578: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_49857c:
    if (ctx->pc == 0x49857Cu) {
        ctx->pc = 0x49857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498578u;
        // 0x49857c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498580u;
        goto label_498580;
    }
    ctx->pc = 0x498578u;
    {
        const bool branch_taken_0x498578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498578u;
        // 0x49857c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498578) {
            ctx->pc = 0x4985B4u;
            return;
        }
    }
    ctx->pc = 0x498580u;
label_498580:
    // 0x498580: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x498580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_498584:
    // 0x498584: 0x2442fb80  addiu       $v0, $v0, -0x480
    ctx->pc = 0x498584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966144));
label_498588:
    // 0x498588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x498588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49858c:
    // 0x49858c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498590:
    // 0x498590: 0x800008  jr          $a0
label_498594:
    if (ctx->pc == 0x498594u) {
        ctx->pc = 0x498598u;
        goto label_fallthrough_0x498590;
    }
    ctx->pc = 0x498590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498590u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x498590:
    ctx->pc = 0x498598u;
}
