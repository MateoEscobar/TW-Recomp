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

// Function: sub_004F0038
// Address: 0x4f0038 - 0x4f0068
void sub_004F0038_0x4f0038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0038_0x4f0038");
#endif

    switch (ctx->pc) {
        case 0x4f0038u: goto label_4f0038;
        case 0x4f003cu: goto label_4f003c;
        case 0x4f0040u: goto label_4f0040;
        case 0x4f0044u: goto label_4f0044;
        case 0x4f0048u: goto label_4f0048;
        case 0x4f004cu: goto label_4f004c;
        case 0x4f0050u: goto label_4f0050;
        case 0x4f0054u: goto label_4f0054;
        case 0x4f0058u: goto label_4f0058;
        case 0x4f005cu: goto label_4f005c;
        case 0x4f0060u: goto label_4f0060;
        case 0x4f0064u: goto label_4f0064;
        default: break;
    }

    ctx->pc = 0x4f0038u;

label_4f0038:
    // 0x4f0038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f003c:
    // 0x4f003c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f003cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f0040:
    // 0x4f0040: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4f0040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4f0044:
    // 0x4f0044: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4f0044u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4f0048:
    // 0x4f0048: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4f0048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f004c:
    // 0x4f004c: 0x40f809  jalr        $v0
label_4f0050:
    if (ctx->pc == 0x4F0050u) {
        ctx->pc = 0x4F0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F004Cu;
        // 0x4f0050: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0054u;
        goto label_4f0054;
    }
    ctx->pc = 0x4F004Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F0054u);
        ctx->pc = 0x4F0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F004Cu;
        // 0x4f0050: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F004Cu, 0x4F0054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F0054u;
label_4f0054:
    // 0x4f0054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0058:
    // 0x4f0058: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4f0058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4f005c:
    // 0x4f005c: 0x3e00008  jr          $ra
label_4f0060:
    if (ctx->pc == 0x4F0060u) {
        ctx->pc = 0x4F0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F005Cu;
        // 0x4f0060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0064u;
        goto label_4f0064;
    }
    ctx->pc = 0x4F005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F005Cu;
        // 0x4f0060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0064u;
label_4f0064:
    // 0x4f0064: 0x0  nop
    ctx->pc = 0x4f0064u;
    // NOP
    ctx->pc = 0x4f0068u;
}
