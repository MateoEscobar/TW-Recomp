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

// Function: sub_00341A68
// Address: 0x341a68 - 0x341aa8
void sub_00341A68_0x341a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341A68_0x341a68");
#endif

    switch (ctx->pc) {
        case 0x341a68u: goto label_341a68;
        case 0x341a6cu: goto label_341a6c;
        case 0x341a70u: goto label_341a70;
        case 0x341a74u: goto label_341a74;
        case 0x341a78u: goto label_341a78;
        case 0x341a7cu: goto label_341a7c;
        case 0x341a80u: goto label_341a80;
        case 0x341a84u: goto label_341a84;
        case 0x341a88u: goto label_341a88;
        case 0x341a8cu: goto label_341a8c;
        case 0x341a90u: goto label_341a90;
        case 0x341a94u: goto label_341a94;
        case 0x341a98u: goto label_341a98;
        case 0x341a9cu: goto label_341a9c;
        case 0x341aa0u: goto label_341aa0;
        case 0x341aa4u: goto label_341aa4;
        default: break;
    }

    ctx->pc = 0x341a68u;

label_341a68:
    // 0x341a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341a6c:
    // 0x341a6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x341a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_341a70:
    // 0x341a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_341a74:
    // 0x341a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341a78:
    // 0x341a78: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_341a7c:
    if (ctx->pc == 0x341A7Cu) {
        ctx->pc = 0x341A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A78u;
        // 0x341a7c: 0xae050034  sw          $a1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A80u;
        goto label_341a80;
    }
    ctx->pc = 0x341A78u;
    {
        const bool branch_taken_0x341a78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x341A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A78u;
        // 0x341a7c: 0xae050034  sw          $a1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a78) {
            ctx->pc = 0x341A98u;
            goto label_341a98;
        }
    }
    ctx->pc = 0x341A80u;
label_341a80:
    // 0x341a80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x341a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_341a84:
    // 0x341a84: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x341a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_341a88:
    // 0x341a88: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x341a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_341a8c:
    // 0x341a8c: 0x40f809  jalr        $v0
label_341a90:
    if (ctx->pc == 0x341A90u) {
        ctx->pc = 0x341A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A8Cu;
        // 0x341a90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A94u;
        goto label_341a94;
    }
    ctx->pc = 0x341A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341A94u);
        ctx->pc = 0x341A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A8Cu;
        // 0x341a90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341A8Cu, 0x341A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341A94u;
label_341a94:
    // 0x341a94: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x341a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_341a98:
    // 0x341a98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x341a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_341a9c:
    // 0x341a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341aa0:
    // 0x341aa0: 0x3e00008  jr          $ra
label_341aa4:
    if (ctx->pc == 0x341AA4u) {
        ctx->pc = 0x341AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AA0u;
        // 0x341aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AA8u;
        goto label_fallthrough_0x341aa0;
    }
    ctx->pc = 0x341AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AA0u;
        // 0x341aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x341aa0:
    ctx->pc = 0x341AA8u;
}
