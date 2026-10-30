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

// Function: sub_00339A58
// Address: 0x339a58 - 0x339a90
void sub_00339A58_0x339a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339A58_0x339a58");
#endif

    switch (ctx->pc) {
        case 0x339a58u: goto label_339a58;
        case 0x339a5cu: goto label_339a5c;
        case 0x339a60u: goto label_339a60;
        case 0x339a64u: goto label_339a64;
        case 0x339a68u: goto label_339a68;
        case 0x339a6cu: goto label_339a6c;
        case 0x339a70u: goto label_339a70;
        case 0x339a74u: goto label_339a74;
        case 0x339a78u: goto label_339a78;
        case 0x339a7cu: goto label_339a7c;
        case 0x339a80u: goto label_339a80;
        case 0x339a84u: goto label_339a84;
        case 0x339a88u: goto label_339a88;
        case 0x339a8cu: goto label_339a8c;
        default: break;
    }

    ctx->pc = 0x339a58u;

label_339a58:
    // 0x339a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339a5c:
    // 0x339a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339a60:
    // 0x339a60: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x339a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_339a64:
    // 0x339a64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_339a68:
    // 0x339a68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x339a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339a6c:
    // 0x339a6c: 0x8c880020  lw          $t0, 0x20($a0)
    ctx->pc = 0x339a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339a70:
    // 0x339a70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x339a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_339a74:
    // 0x339a74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x339a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_339a78:
    // 0x339a78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x339a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_339a7c:
    // 0x339a7c: 0x60f809  jalr        $v1
label_339a80:
    if (ctx->pc == 0x339A80u) {
        ctx->pc = 0x339A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A7Cu;
        // 0x339a80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A84u;
        goto label_339a84;
    }
    ctx->pc = 0x339A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x339A84u);
        ctx->pc = 0x339A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A7Cu;
        // 0x339a80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A7Cu, 0x339A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339A84u;
label_339a84:
    // 0x339a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339a88:
    // 0x339a88: 0x3e00008  jr          $ra
label_339a8c:
    if (ctx->pc == 0x339A8Cu) {
        ctx->pc = 0x339A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A88u;
        // 0x339a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A90u;
        goto label_fallthrough_0x339a88;
    }
    ctx->pc = 0x339A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A88u;
        // 0x339a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339a88:
    ctx->pc = 0x339A90u;
}
