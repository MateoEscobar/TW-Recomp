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

// Function: sub_002BAE80
// Address: 0x2bae80 - 0x2baec0
void sub_002BAE80_0x2bae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAE80_0x2bae80");
#endif

    ctx->pc = 0x2bae80u;

    // 0x2bae80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bae80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae84: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2bae84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2bae88: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x2bae88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2bae8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2bae8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2bae90: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAE90u;
    {
        const bool branch_taken_0x2bae90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE90u;
        // 0x2bae94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae90) {
            ctx->pc = 0x2BAEACu;
            goto label_2baeac;
        }
    }
    ctx->pc = 0x2BAE98u;
    // 0x2bae98: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2bae98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2bae9c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2bae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2baea0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2baea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2baea4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BAEA4u;
    {
        const bool branch_taken_0x2baea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEA4u;
        // 0x2baea8: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baea4) {
            ctx->pc = 0x2BAEB0u;
            goto label_2baeb0;
        }
    }
    ctx->pc = 0x2BAEACu;
label_2baeac:
    // 0x2baeac: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2baeacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_2baeb0:
    // 0x2baeb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2baeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2baeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEB4u;
        // 0x2baeb8: 0xac40021c  sw          $zero, 0x21C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAEBCu;
    // 0x2baebc: 0x0  nop
    ctx->pc = 0x2baebcu;
    // NOP
    ctx->pc = 0x2baec0u;
}
