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

// Function: sub_004EFC78
// Address: 0x4efc78 - 0x4efca8
void sub_004EFC78_0x4efc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFC78_0x4efc78");
#endif

    switch (ctx->pc) {
        case 0x4efc78u: goto label_4efc78;
        case 0x4efc7cu: goto label_4efc7c;
        case 0x4efc80u: goto label_4efc80;
        case 0x4efc84u: goto label_4efc84;
        case 0x4efc88u: goto label_4efc88;
        case 0x4efc8cu: goto label_4efc8c;
        case 0x4efc90u: goto label_4efc90;
        case 0x4efc94u: goto label_4efc94;
        case 0x4efc98u: goto label_4efc98;
        case 0x4efc9cu: goto label_4efc9c;
        case 0x4efca0u: goto label_4efca0;
        case 0x4efca4u: goto label_4efca4;
        default: break;
    }

    ctx->pc = 0x4efc78u;

label_4efc78:
    // 0x4efc78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4efc7c:
    // 0x4efc7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4efc80:
    // 0x4efc80: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4efc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4efc84:
    // 0x4efc84: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4efc84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4efc88:
    // 0x4efc88: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4efc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4efc8c:
    // 0x4efc8c: 0x40f809  jalr        $v0
label_4efc90:
    if (ctx->pc == 0x4EFC90u) {
        ctx->pc = 0x4EFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC8Cu;
        // 0x4efc90: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFC94u;
        goto label_4efc94;
    }
    ctx->pc = 0x4EFC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFC94u);
        ctx->pc = 0x4EFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC8Cu;
        // 0x4efc90: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFC8Cu, 0x4EFC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFC94u;
label_4efc94:
    // 0x4efc94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efc98:
    // 0x4efc98: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4efc98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4efc9c:
    // 0x4efc9c: 0x3e00008  jr          $ra
label_4efca0:
    if (ctx->pc == 0x4EFCA0u) {
        ctx->pc = 0x4EFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC9Cu;
        // 0x4efca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFCA4u;
        goto label_4efca4;
    }
    ctx->pc = 0x4EFC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFC9Cu;
        // 0x4efca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFCA4u;
label_4efca4:
    // 0x4efca4: 0x0  nop
    ctx->pc = 0x4efca4u;
    // NOP
    ctx->pc = 0x4efca8u;
}
