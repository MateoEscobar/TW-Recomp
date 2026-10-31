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

// Function: sub_002B5148
// Address: 0x2b5148 - 0x2b5190
void sub_002B5148_0x2b5148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5148_0x2b5148");
#endif

    switch (ctx->pc) {
        case 0x2b5174u: goto label_2b5174;
        case 0x2b5184u: goto label_2b5184;
        default: break;
    }

    ctx->pc = 0x2b5148u;

    // 0x2b5148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b514c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5154: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b5154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5158: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5158u;
    {
        const bool branch_taken_0x2b5158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5158u;
        // 0x2b515c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5158) {
            ctx->pc = 0x2B517Cu;
            goto label_2b517c;
        }
    }
    ctx->pc = 0x2B5160u;
    // 0x2b5160: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2b5160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2b5164: 0x244403c8  addiu       $a0, $v0, 0x3C8
    ctx->pc = 0x2b5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
    // 0x2b5168: 0x24a54008  addiu       $a1, $a1, 0x4008
    ctx->pc = 0x2b5168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16392));
    // 0x2b516c: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2B516Cu;
    SET_GPR_U32(ctx, 31, 0x2B5174u);
    ctx->pc = 0x2B5170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B516Cu;
    // 0x2b5170: 0x2406029d  addiu       $a2, $zero, 0x29D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2B516Cu, 0x2B5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5174u;
label_2b5174:
    // 0x2b5174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5174u;
    {
        const bool branch_taken_0x2b5174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5174u;
        // 0x2b5178: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5174) {
            ctx->pc = 0x2B5188u;
            goto label_2b5188;
        }
    }
    ctx->pc = 0x2B517Cu;
label_2b517c:
    // 0x2b517c: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2B517Cu;
    SET_GPR_U32(ctx, 31, 0x2B5184u);
    ctx->pc = 0x2B5180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B517Cu;
    // 0x2b5180: 0x244403c8  addiu       $a0, $v0, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2B517Cu, 0x2B5184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5184u;
label_2b5184:
    // 0x2b5184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b5188:
    // 0x2b5188: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5188u;
        // 0x2b518c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5190u;
}
