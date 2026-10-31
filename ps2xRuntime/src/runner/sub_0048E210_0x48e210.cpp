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

// Function: sub_0048E210
// Address: 0x48e210 - 0x48e250
void sub_0048E210_0x48e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E210_0x48e210");
#endif

    switch (ctx->pc) {
        case 0x48e224u: goto label_48e224;
        default: break;
    }

    ctx->pc = 0x48e210u;

    // 0x48e210: 0x97838682  lhu         $v1, -0x797E($gp)
    ctx->pc = 0x48e210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936194)));
    // 0x48e214: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x48e214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x48e218: 0x8f828678  lw          $v0, -0x7988($gp)
    ctx->pc = 0x48e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x48e21c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48E21Cu;
    {
        const bool branch_taken_0x48e21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E21Cu;
        // 0x48e220: 0x65280a  movz        $a1, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e21c) {
            ctx->pc = 0x48E22Cu;
            goto label_48e22c;
        }
    }
    ctx->pc = 0x48E224u;
label_48e224:
    // 0x48e224: 0x3e00008  jr          $ra
    ctx->pc = 0x48E224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E224u;
        // 0x48e228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E22Cu;
label_48e22c:
    // 0x48e22c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x48E22Cu;
    {
        const bool branch_taken_0x48e22c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E22Cu;
        // 0x48e230: 0x30c2007f  andi        $v0, $a2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e22c) {
            ctx->pc = 0x48E240u;
            goto label_48e240;
        }
    }
    ctx->pc = 0x48E234u;
    // 0x48e234: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x48E234u;
    {
        const bool branch_taken_0x48e234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e234) {
            ctx->pc = 0x48E224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48e224;
        }
    }
    ctx->pc = 0x48E23Cu;
    // 0x48e23c: 0xaf868684  sw          $a2, -0x797C($gp)
    ctx->pc = 0x48e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 6));
label_48e240:
    // 0x48e240: 0xaf848688  sw          $a0, -0x7978($gp)
    ctx->pc = 0x48e240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 4));
    // 0x48e244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e248: 0x3e00008  jr          $ra
    ctx->pc = 0x48E248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E248u;
        // 0x48e24c: 0xa7858682  sh          $a1, -0x797E($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936194), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E250u;
}
