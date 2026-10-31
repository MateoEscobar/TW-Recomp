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

// Function: sub_004B0168
// Address: 0x4b0168 - 0x4b0190
void sub_004B0168_0x4b0168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0168_0x4b0168");
#endif

    switch (ctx->pc) {
        case 0x4b0168u: goto label_4b0168;
        case 0x4b016cu: goto label_4b016c;
        case 0x4b0170u: goto label_4b0170;
        case 0x4b0174u: goto label_4b0174;
        case 0x4b0178u: goto label_4b0178;
        case 0x4b017cu: goto label_4b017c;
        case 0x4b0180u: goto label_4b0180;
        case 0x4b0184u: goto label_4b0184;
        case 0x4b0188u: goto label_4b0188;
        case 0x4b018cu: goto label_4b018c;
        default: break;
    }

    ctx->pc = 0x4b0168u;

label_4b0168:
    // 0x4b0168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b016c:
    // 0x4b016c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b0170:
    // 0x4b0170: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x4b0170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4b0174:
    // 0x4b0174: 0x84670030  lh          $a3, 0x30($v1)
    ctx->pc = 0x4b0174u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4b0178:
    // 0x4b0178: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4b0178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b017c:
    // 0x4b017c: 0x40f809  jalr        $v0
label_4b0180:
    if (ctx->pc == 0x4B0180u) {
        ctx->pc = 0x4B0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B017Cu;
        // 0x4b0180: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0184u;
        goto label_4b0184;
    }
    ctx->pc = 0x4B017Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B0184u);
        ctx->pc = 0x4B0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B017Cu;
        // 0x4b0180: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B017Cu, 0x4B0184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B0184u;
label_4b0184:
    // 0x4b0184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b0188:
    // 0x4b0188: 0x3e00008  jr          $ra
label_4b018c:
    if (ctx->pc == 0x4B018Cu) {
        ctx->pc = 0x4B018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0188u;
        // 0x4b018c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0190u;
        goto label_fallthrough_0x4b0188;
    }
    ctx->pc = 0x4B0188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0188u;
        // 0x4b018c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b0188:
    ctx->pc = 0x4B0190u;
}
