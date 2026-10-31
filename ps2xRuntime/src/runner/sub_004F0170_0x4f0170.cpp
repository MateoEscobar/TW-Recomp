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

// Function: sub_004F0170
// Address: 0x4f0170 - 0x4f01a0
void sub_004F0170_0x4f0170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0170_0x4f0170");
#endif

    switch (ctx->pc) {
        case 0x4f0170u: goto label_4f0170;
        case 0x4f0174u: goto label_4f0174;
        case 0x4f0178u: goto label_4f0178;
        case 0x4f017cu: goto label_4f017c;
        case 0x4f0180u: goto label_4f0180;
        case 0x4f0184u: goto label_4f0184;
        case 0x4f0188u: goto label_4f0188;
        case 0x4f018cu: goto label_4f018c;
        case 0x4f0190u: goto label_4f0190;
        case 0x4f0194u: goto label_4f0194;
        case 0x4f0198u: goto label_4f0198;
        case 0x4f019cu: goto label_4f019c;
        default: break;
    }

    ctx->pc = 0x4f0170u;

label_4f0170:
    // 0x4f0170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f0174:
    // 0x4f0174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f0178:
    // 0x4f0178: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4f0178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4f017c:
    // 0x4f017c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4f017cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4f0180:
    // 0x4f0180: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4f0180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f0184:
    // 0x4f0184: 0x40f809  jalr        $v0
label_4f0188:
    if (ctx->pc == 0x4F0188u) {
        ctx->pc = 0x4F0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0184u;
        // 0x4f0188: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F018Cu;
        goto label_4f018c;
    }
    ctx->pc = 0x4F0184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F018Cu);
        ctx->pc = 0x4F0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0184u;
        // 0x4f0188: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0184u, 0x4F018Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F018Cu;
label_4f018c:
    // 0x4f018c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f018cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0190:
    // 0x4f0190: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4f0190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4f0194:
    // 0x4f0194: 0x3e00008  jr          $ra
label_4f0198:
    if (ctx->pc == 0x4F0198u) {
        ctx->pc = 0x4F0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0194u;
        // 0x4f0198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F019Cu;
        goto label_4f019c;
    }
    ctx->pc = 0x4F0194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0194u;
        // 0x4f0198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F019Cu;
label_4f019c:
    // 0x4f019c: 0x0  nop
    ctx->pc = 0x4f019cu;
    // NOP
    ctx->pc = 0x4f01a0u;
}
