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

// Function: sub_0048B620
// Address: 0x48b620 - 0x48b668
void sub_0048B620_0x48b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B620_0x48b620");
#endif

    switch (ctx->pc) {
        case 0x48b658u: goto label_48b658;
        default: break;
    }

    ctx->pc = 0x48b620u;

label_48b620:
    // 0x48b620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b624: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x48B624u;
    {
        const bool branch_taken_0x48b624 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B624u;
        // 0x48b628: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b624) {
            ctx->pc = 0x48B634u;
            goto label_48b634;
        }
    }
    ctx->pc = 0x48B62Cu;
    // 0x48b62c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x48B62Cu;
    {
        const bool branch_taken_0x48b62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B62Cu;
        // 0x48b630: 0x90820018  lbu         $v0, 0x18($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b62c) {
            ctx->pc = 0x48B658u;
            goto label_48b658;
        }
    }
    ctx->pc = 0x48B634u;
label_48b634:
    // 0x48b634: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x48b634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x48b638: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x48b638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x48b63c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48b640: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48b640u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x48b644: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x48b644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x48b648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48b648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48b64c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x48b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x48b650: 0xc122d88  jal         func_48B620
    ctx->pc = 0x48B650u;
    SET_GPR_U32(ctx, 31, 0x48B658u);
    ctx->pc = 0x48B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B650u;
    // 0x48b654: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B620u;
    goto label_48b620;
    ctx->pc = 0x48B658u;
label_48b658:
    // 0x48b658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x48B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B65Cu;
        // 0x48b660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B664u;
    // 0x48b664: 0x0  nop
    ctx->pc = 0x48b664u;
    // NOP
    ctx->pc = 0x48b668u;
}
