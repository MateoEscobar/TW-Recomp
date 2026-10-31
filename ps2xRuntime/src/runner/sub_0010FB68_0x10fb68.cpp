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

// Function: sub_0010FB68
// Address: 0x10fb68 - 0x10fba8
void sub_0010FB68_0x10fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FB68_0x10fb68");
#endif

    switch (ctx->pc) {
        case 0x10fb68u: goto label_10fb68;
        case 0x10fb6cu: goto label_10fb6c;
        case 0x10fb70u: goto label_10fb70;
        case 0x10fb74u: goto label_10fb74;
        case 0x10fb78u: goto label_10fb78;
        case 0x10fb7cu: goto label_10fb7c;
        case 0x10fb80u: goto label_10fb80;
        case 0x10fb84u: goto label_10fb84;
        case 0x10fb88u: goto label_10fb88;
        case 0x10fb8cu: goto label_10fb8c;
        case 0x10fb90u: goto label_10fb90;
        case 0x10fb94u: goto label_10fb94;
        case 0x10fb98u: goto label_10fb98;
        case 0x10fb9cu: goto label_10fb9c;
        case 0x10fba0u: goto label_10fba0;
        case 0x10fba4u: goto label_10fba4;
        default: break;
    }

    ctx->pc = 0x10fb68u;

label_10fb68:
    // 0x10fb68: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x10fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_10fb6c:
    // 0x10fb6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fb6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10fb70:
    // 0x10fb70: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_10fb74:
    // 0x10fb74: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10fb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_10fb78:
    // 0x10fb78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10fb7c:
    // 0x10fb7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10fb80:
    // 0x10fb80: 0x8c65bce4  lw          $a1, -0x431C($v1)
    ctx->pc = 0x10fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950116)));
label_10fb84:
    // 0x10fb84: 0xac807a24  sw          $zero, 0x7A24($a0)
    ctx->pc = 0x10fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31268), GPR_U32(ctx, 0));
label_10fb88:
    // 0x10fb88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10fb8c:
    // 0x10fb8c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x10fb8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_10fb90:
    // 0x10fb90: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x10fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_10fb94:
    // 0x10fb94: 0x60f809  jalr        $v1
label_10fb98:
    if (ctx->pc == 0x10FB98u) {
        ctx->pc = 0x10FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB94u;
        // 0x10fb98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB9Cu;
        goto label_10fb9c;
    }
    ctx->pc = 0x10FB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10FB9Cu);
        ctx->pc = 0x10FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB94u;
        // 0x10fb98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB94u, 0x10FB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10FB9Cu;
label_10fb9c:
    // 0x10fb9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10fba0:
    // 0x10fba0: 0x3e00008  jr          $ra
label_10fba4:
    if (ctx->pc == 0x10FBA4u) {
        ctx->pc = 0x10FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBA0u;
        // 0x10fba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBA8u;
        goto label_fallthrough_0x10fba0;
    }
    ctx->pc = 0x10FBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBA0u;
        // 0x10fba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10fba0:
    ctx->pc = 0x10FBA8u;
}
