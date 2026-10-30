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

// Function: sub_00465630
// Address: 0x465630 - 0x4656a0
void sub_00465630_0x465630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465630_0x465630");
#endif

    switch (ctx->pc) {
        case 0x465658u: goto label_465658;
        case 0x46568cu: goto label_46568c;
        default: break;
    }

    ctx->pc = 0x465630u;

    // 0x465630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x465630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x465634: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x465634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x465638: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x465638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46563c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x46563cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x465640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x465640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x465648: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x465648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x46564c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465650: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x465650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465654: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x465654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_465658:
    // 0x465658: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x465658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x46565c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x46565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x465660: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x465660u;
    {
        const bool branch_taken_0x465660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x465660) {
            ctx->pc = 0x465664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465660u;
            // 0x465664: 0xac45000c  sw          $a1, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x465684u;
            goto label_465684;
        }
    }
    ctx->pc = 0x465668u;
    // 0x465668: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x465668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x46566c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x46566cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465670: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x465670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465674: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x465674u;
    {
        const bool branch_taken_0x465674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x465678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465674u;
        // 0x465678: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465674) {
            ctx->pc = 0x465658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465658;
        }
    }
    ctx->pc = 0x46567Cu;
    // 0x46567c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46567cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465680: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x465680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0xCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0xCu, _value); } while (0);
label_465684:
    // 0x465684: 0xc119808  jal         func_466020
    ctx->pc = 0x465684u;
    SET_GPR_U32(ctx, 31, 0x46568Cu);
    ctx->pc = 0x465688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465684u;
    // 0x465688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466020u, 0x465684u, 0x46568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46568Cu;
label_46568c:
    // 0x46568c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46568cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x465690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465694: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x465694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465698: 0x3e00008  jr          $ra
    ctx->pc = 0x465698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465698u;
        // 0x46569c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4656A0u;
}
