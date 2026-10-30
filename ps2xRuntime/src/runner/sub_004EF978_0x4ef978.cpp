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

// Function: sub_004EF978
// Address: 0x4ef978 - 0x4ef9a8
void sub_004EF978_0x4ef978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF978_0x4ef978");
#endif

    switch (ctx->pc) {
        case 0x4ef978u: goto label_4ef978;
        case 0x4ef97cu: goto label_4ef97c;
        case 0x4ef980u: goto label_4ef980;
        case 0x4ef984u: goto label_4ef984;
        case 0x4ef988u: goto label_4ef988;
        case 0x4ef98cu: goto label_4ef98c;
        case 0x4ef990u: goto label_4ef990;
        case 0x4ef994u: goto label_4ef994;
        case 0x4ef998u: goto label_4ef998;
        case 0x4ef99cu: goto label_4ef99c;
        case 0x4ef9a0u: goto label_4ef9a0;
        case 0x4ef9a4u: goto label_4ef9a4;
        default: break;
    }

    ctx->pc = 0x4ef978u;

label_4ef978:
    // 0x4ef978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef97c:
    // 0x4ef97c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef980:
    // 0x4ef980: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef984:
    // 0x4ef984: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef984u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef988:
    // 0x4ef988: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef98c:
    // 0x4ef98c: 0x40f809  jalr        $v0
label_4ef990:
    if (ctx->pc == 0x4EF990u) {
        ctx->pc = 0x4EF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF98Cu;
        // 0x4ef990: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF994u;
        goto label_4ef994;
    }
    ctx->pc = 0x4EF98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF994u);
        ctx->pc = 0x4EF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF98Cu;
        // 0x4ef990: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF98Cu, 0x4EF994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF994u;
label_4ef994:
    // 0x4ef994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef998:
    // 0x4ef998: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef99c:
    // 0x4ef99c: 0x3e00008  jr          $ra
label_4ef9a0:
    if (ctx->pc == 0x4EF9A0u) {
        ctx->pc = 0x4EF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF99Cu;
        // 0x4ef9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF9A4u;
        goto label_4ef9a4;
    }
    ctx->pc = 0x4EF99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF99Cu;
        // 0x4ef9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF9A4u;
label_4ef9a4:
    // 0x4ef9a4: 0x0  nop
    ctx->pc = 0x4ef9a4u;
    // NOP
    ctx->pc = 0x4ef9a8u;
}
