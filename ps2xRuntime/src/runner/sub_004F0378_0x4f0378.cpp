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

// Function: sub_004F0378
// Address: 0x4f0378 - 0x4f03a8
void sub_004F0378_0x4f0378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0378_0x4f0378");
#endif

    switch (ctx->pc) {
        case 0x4f0378u: goto label_4f0378;
        case 0x4f037cu: goto label_4f037c;
        case 0x4f0380u: goto label_4f0380;
        case 0x4f0384u: goto label_4f0384;
        case 0x4f0388u: goto label_4f0388;
        case 0x4f038cu: goto label_4f038c;
        case 0x4f0390u: goto label_4f0390;
        case 0x4f0394u: goto label_4f0394;
        case 0x4f0398u: goto label_4f0398;
        case 0x4f039cu: goto label_4f039c;
        case 0x4f03a0u: goto label_4f03a0;
        case 0x4f03a4u: goto label_4f03a4;
        default: break;
    }

    ctx->pc = 0x4f0378u;

label_4f0378:
    // 0x4f0378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f037c:
    // 0x4f037c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f037cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f0380:
    // 0x4f0380: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4f0380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4f0384:
    // 0x4f0384: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4f0384u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4f0388:
    // 0x4f0388: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4f0388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f038c:
    // 0x4f038c: 0x40f809  jalr        $v0
label_4f0390:
    if (ctx->pc == 0x4F0390u) {
        ctx->pc = 0x4F0390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F038Cu;
        // 0x4f0390: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0394u;
        goto label_4f0394;
    }
    ctx->pc = 0x4F038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F0394u);
        ctx->pc = 0x4F0390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F038Cu;
        // 0x4f0390: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F038Cu, 0x4F0394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F0394u;
label_4f0394:
    // 0x4f0394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0398:
    // 0x4f0398: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4f0398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4f039c:
    // 0x4f039c: 0x3e00008  jr          $ra
label_4f03a0:
    if (ctx->pc == 0x4F03A0u) {
        ctx->pc = 0x4F03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F039Cu;
        // 0x4f03a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F03A4u;
        goto label_4f03a4;
    }
    ctx->pc = 0x4F039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F039Cu;
        // 0x4f03a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F03A4u;
label_4f03a4:
    // 0x4f03a4: 0x0  nop
    ctx->pc = 0x4f03a4u;
    // NOP
    ctx->pc = 0x4f03a8u;
}
