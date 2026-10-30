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

// Function: sub_003A57D8
// Address: 0x3a57d8 - 0x3a5810
void sub_003A57D8_0x3a57d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A57D8_0x3a57d8");
#endif

    switch (ctx->pc) {
        case 0x3a57d8u: goto label_3a57d8;
        case 0x3a57dcu: goto label_3a57dc;
        case 0x3a57e0u: goto label_3a57e0;
        case 0x3a57e4u: goto label_3a57e4;
        case 0x3a57e8u: goto label_3a57e8;
        case 0x3a57ecu: goto label_3a57ec;
        case 0x3a57f0u: goto label_3a57f0;
        case 0x3a57f4u: goto label_3a57f4;
        case 0x3a57f8u: goto label_3a57f8;
        case 0x3a57fcu: goto label_3a57fc;
        case 0x3a5800u: goto label_3a5800;
        case 0x3a5804u: goto label_3a5804;
        case 0x3a5808u: goto label_3a5808;
        case 0x3a580cu: goto label_3a580c;
        default: break;
    }

    ctx->pc = 0x3a57d8u;

label_3a57d8:
    // 0x3a57d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a57d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a57dc:
    // 0x3a57dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a57dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a57e0:
    // 0x3a57e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a57e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a57e4:
    // 0x3a57e4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_3a57e8:
    if (ctx->pc == 0x3A57E8u) {
        ctx->pc = 0x3A57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57E4u;
        // 0x3a57e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A57ECu;
        goto label_3a57ec;
    }
    ctx->pc = 0x3A57E4u;
    {
        const bool branch_taken_0x3a57e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57E4u;
        // 0x3a57e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a57e4) {
            ctx->pc = 0x3A5804u;
            goto label_3a5804;
        }
    }
    ctx->pc = 0x3A57ECu;
label_3a57ec:
    // 0x3a57ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a57f0:
    // 0x3a57f0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3a57f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3a57f4:
    // 0x3a57f4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3a57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3a57f8:
    // 0x3a57f8: 0x60f809  jalr        $v1
label_3a57fc:
    if (ctx->pc == 0x3A57FCu) {
        ctx->pc = 0x3A57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57F8u;
        // 0x3a57fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5800u;
        goto label_3a5800;
    }
    ctx->pc = 0x3A57F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A5800u);
        ctx->pc = 0x3A57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57F8u;
        // 0x3a57fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A57F8u, 0x3A5800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5800u;
label_3a5800:
    // 0x3a5800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a5804:
    // 0x3a5804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a5808:
    // 0x3a5808: 0x3e00008  jr          $ra
label_3a580c:
    if (ctx->pc == 0x3A580Cu) {
        ctx->pc = 0x3A580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5808u;
        // 0x3a580c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5810u;
        goto label_fallthrough_0x3a5808;
    }
    ctx->pc = 0x3A5808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5808u;
        // 0x3a580c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a5808:
    ctx->pc = 0x3A5810u;
}
