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

// Function: sub_004F02A8
// Address: 0x4f02a8 - 0x4f02d8
void sub_004F02A8_0x4f02a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F02A8_0x4f02a8");
#endif

    switch (ctx->pc) {
        case 0x4f02a8u: goto label_4f02a8;
        case 0x4f02acu: goto label_4f02ac;
        case 0x4f02b0u: goto label_4f02b0;
        case 0x4f02b4u: goto label_4f02b4;
        case 0x4f02b8u: goto label_4f02b8;
        case 0x4f02bcu: goto label_4f02bc;
        case 0x4f02c0u: goto label_4f02c0;
        case 0x4f02c4u: goto label_4f02c4;
        case 0x4f02c8u: goto label_4f02c8;
        case 0x4f02ccu: goto label_4f02cc;
        case 0x4f02d0u: goto label_4f02d0;
        case 0x4f02d4u: goto label_4f02d4;
        default: break;
    }

    ctx->pc = 0x4f02a8u;

label_4f02a8:
    // 0x4f02a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f02a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f02ac:
    // 0x4f02ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f02acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f02b0:
    // 0x4f02b0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4f02b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4f02b4:
    // 0x4f02b4: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4f02b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4f02b8:
    // 0x4f02b8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4f02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f02bc:
    // 0x4f02bc: 0x40f809  jalr        $v0
label_4f02c0:
    if (ctx->pc == 0x4F02C0u) {
        ctx->pc = 0x4F02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F02BCu;
        // 0x4f02c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F02C4u;
        goto label_4f02c4;
    }
    ctx->pc = 0x4F02BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F02C4u);
        ctx->pc = 0x4F02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F02BCu;
        // 0x4f02c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F02BCu, 0x4F02C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F02C4u;
label_4f02c4:
    // 0x4f02c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f02c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f02c8:
    // 0x4f02c8: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4f02c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4f02cc:
    // 0x4f02cc: 0x3e00008  jr          $ra
label_4f02d0:
    if (ctx->pc == 0x4F02D0u) {
        ctx->pc = 0x4F02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F02CCu;
        // 0x4f02d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F02D4u;
        goto label_4f02d4;
    }
    ctx->pc = 0x4F02CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F02CCu;
        // 0x4f02d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F02CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F02D4u;
label_4f02d4:
    // 0x4f02d4: 0x0  nop
    ctx->pc = 0x4f02d4u;
    // NOP
    ctx->pc = 0x4f02d8u;
}
