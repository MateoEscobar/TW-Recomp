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

// Function: sub_00339880
// Address: 0x339880 - 0x3398b8
void sub_00339880_0x339880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339880_0x339880");
#endif

    switch (ctx->pc) {
        case 0x339880u: goto label_339880;
        case 0x339884u: goto label_339884;
        case 0x339888u: goto label_339888;
        case 0x33988cu: goto label_33988c;
        case 0x339890u: goto label_339890;
        case 0x339894u: goto label_339894;
        case 0x339898u: goto label_339898;
        case 0x33989cu: goto label_33989c;
        case 0x3398a0u: goto label_3398a0;
        case 0x3398a4u: goto label_3398a4;
        case 0x3398a8u: goto label_3398a8;
        case 0x3398acu: goto label_3398ac;
        case 0x3398b0u: goto label_3398b0;
        case 0x3398b4u: goto label_3398b4;
        default: break;
    }

    ctx->pc = 0x339880u;

label_339880:
    // 0x339880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339884:
    // 0x339884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339888:
    // 0x339888: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x339888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_33988c:
    // 0x33988c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33988cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_339890:
    // 0x339890: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x339890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339894:
    // 0x339894: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x339894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339898:
    // 0x339898: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x339898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33989c:
    // 0x33989c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x33989cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_3398a0:
    // 0x3398a0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x3398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3398a4:
    // 0x3398a4: 0x40f809  jalr        $v0
label_3398a8:
    if (ctx->pc == 0x3398A8u) {
        ctx->pc = 0x3398A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398A4u;
        // 0x3398a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3398ACu;
        goto label_3398ac;
    }
    ctx->pc = 0x3398A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3398ACu);
        ctx->pc = 0x3398A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398A4u;
        // 0x3398a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3398A4u, 0x3398ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3398ACu;
label_3398ac:
    // 0x3398ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3398acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3398b0:
    // 0x3398b0: 0x3e00008  jr          $ra
label_3398b4:
    if (ctx->pc == 0x3398B4u) {
        ctx->pc = 0x3398B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398B0u;
        // 0x3398b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3398B8u;
        goto label_fallthrough_0x3398b0;
    }
    ctx->pc = 0x3398B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3398B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398B0u;
        // 0x3398b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3398B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3398b0:
    ctx->pc = 0x3398B8u;
}
