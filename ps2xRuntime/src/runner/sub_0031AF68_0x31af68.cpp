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

// Function: sub_0031AF68
// Address: 0x31af68 - 0x31af98
void sub_0031AF68_0x31af68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AF68_0x31af68");
#endif

    switch (ctx->pc) {
        case 0x31af68u: goto label_31af68;
        case 0x31af6cu: goto label_31af6c;
        case 0x31af70u: goto label_31af70;
        case 0x31af74u: goto label_31af74;
        case 0x31af78u: goto label_31af78;
        case 0x31af7cu: goto label_31af7c;
        case 0x31af80u: goto label_31af80;
        case 0x31af84u: goto label_31af84;
        case 0x31af88u: goto label_31af88;
        case 0x31af8cu: goto label_31af8c;
        case 0x31af90u: goto label_31af90;
        case 0x31af94u: goto label_31af94;
        default: break;
    }

    ctx->pc = 0x31af68u;

label_31af68:
    // 0x31af68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31af68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31af6c:
    // 0x31af6c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x31af6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31af70:
    // 0x31af70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31af70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31af74:
    // 0x31af74: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x31af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_31af78:
    // 0x31af78: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x31af78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31af7c:
    // 0x31af7c: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x31af7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31af80:
    // 0x31af80: 0xc0f809  jalr        $a2
label_31af84:
    if (ctx->pc == 0x31AF84u) {
        ctx->pc = 0x31AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF80u;
        // 0x31af84: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF88u;
        goto label_31af88;
    }
    ctx->pc = 0x31AF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x31AF88u);
        ctx->pc = 0x31AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF80u;
        // 0x31af84: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF80u, 0x31AF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AF88u;
label_31af88:
    // 0x31af88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31af88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31af8c:
    // 0x31af8c: 0x3e00008  jr          $ra
label_31af90:
    if (ctx->pc == 0x31AF90u) {
        ctx->pc = 0x31AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF8Cu;
        // 0x31af90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF94u;
        goto label_31af94;
    }
    ctx->pc = 0x31AF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF8Cu;
        // 0x31af90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AF94u;
label_31af94:
    // 0x31af94: 0x0  nop
    ctx->pc = 0x31af94u;
    // NOP
    ctx->pc = 0x31af98u;
}
