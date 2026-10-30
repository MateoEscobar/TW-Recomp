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

// Function: sub_003EEE68
// Address: 0x3eee68 - 0x3eeea0
void sub_003EEE68_0x3eee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEE68_0x3eee68");
#endif

    switch (ctx->pc) {
        case 0x3eee68u: goto label_3eee68;
        case 0x3eee6cu: goto label_3eee6c;
        case 0x3eee70u: goto label_3eee70;
        case 0x3eee74u: goto label_3eee74;
        case 0x3eee78u: goto label_3eee78;
        case 0x3eee7cu: goto label_3eee7c;
        case 0x3eee80u: goto label_3eee80;
        case 0x3eee84u: goto label_3eee84;
        case 0x3eee88u: goto label_3eee88;
        case 0x3eee8cu: goto label_3eee8c;
        case 0x3eee90u: goto label_3eee90;
        case 0x3eee94u: goto label_3eee94;
        case 0x3eee98u: goto label_3eee98;
        case 0x3eee9cu: goto label_3eee9c;
        default: break;
    }

    ctx->pc = 0x3eee68u;

label_3eee68:
    // 0x3eee68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3eee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3eee6c:
    // 0x3eee6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eee70:
    // 0x3eee70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3eee70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eee74:
    // 0x3eee74: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3eee74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eee78:
    // 0x3eee78: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eee7c:
    // 0x3eee7c: 0x40f809  jalr        $v0
label_3eee80:
    if (ctx->pc == 0x3EEE80u) {
        ctx->pc = 0x3EEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE7Cu;
        // 0x3eee80: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEE84u;
        goto label_3eee84;
    }
    ctx->pc = 0x3EEE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EEE84u);
        ctx->pc = 0x3EEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE7Cu;
        // 0x3eee80: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEE7Cu, 0x3EEE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EEE84u;
label_3eee84:
    // 0x3eee84: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3eee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3eee88:
    // 0x3eee88: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3eee88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3eee8c:
    // 0x3eee8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eee8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eee90:
    // 0x3eee90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3eee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_3eee94:
    // 0x3eee94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3eee94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3eee98:
    // 0x3eee98: 0x3e00008  jr          $ra
label_3eee9c:
    if (ctx->pc == 0x3EEE9Cu) {
        ctx->pc = 0x3EEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE98u;
        // 0x3eee9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EEEA0u;
        goto label_fallthrough_0x3eee98;
    }
    ctx->pc = 0x3EEE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE98u;
        // 0x3eee9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eee98:
    ctx->pc = 0x3EEEA0u;
}
