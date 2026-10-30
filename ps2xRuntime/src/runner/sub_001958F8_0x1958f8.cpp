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

// Function: sub_001958F8
// Address: 0x1958f8 - 0x195928
void sub_001958F8_0x1958f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001958F8_0x1958f8");
#endif

    switch (ctx->pc) {
        case 0x1958f8u: goto label_1958f8;
        case 0x1958fcu: goto label_1958fc;
        case 0x195900u: goto label_195900;
        case 0x195904u: goto label_195904;
        case 0x195908u: goto label_195908;
        case 0x19590cu: goto label_19590c;
        case 0x195910u: goto label_195910;
        case 0x195914u: goto label_195914;
        case 0x195918u: goto label_195918;
        case 0x19591cu: goto label_19591c;
        case 0x195920u: goto label_195920;
        case 0x195924u: goto label_195924;
        default: break;
    }

    ctx->pc = 0x1958f8u;

label_1958f8:
    // 0x1958f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1958f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1958fc:
    // 0x1958fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1958fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195900:
    // 0x195900: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_195904:
    // 0x195904: 0x8c850440  lw          $a1, 0x440($a0)
    ctx->pc = 0x195904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1088)));
label_195908:
    // 0x195908: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x195908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_19590c:
    // 0x19590c: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x19590cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_195910:
    // 0x195910: 0xc0f809  jalr        $a2
label_195914:
    if (ctx->pc == 0x195914u) {
        ctx->pc = 0x195914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195910u;
        // 0x195914: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195918u;
        goto label_195918;
    }
    ctx->pc = 0x195910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x195918u);
        ctx->pc = 0x195914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195910u;
        // 0x195914: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195910u, 0x195918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195918u;
label_195918:
    // 0x195918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19591c:
    // 0x19591c: 0x3e00008  jr          $ra
label_195920:
    if (ctx->pc == 0x195920u) {
        ctx->pc = 0x195920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19591Cu;
        // 0x195920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195924u;
        goto label_195924;
    }
    ctx->pc = 0x19591Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19591Cu;
        // 0x195920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19591Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195924u;
label_195924:
    // 0x195924: 0x0  nop
    ctx->pc = 0x195924u;
    // NOP
    ctx->pc = 0x195928u;
}
