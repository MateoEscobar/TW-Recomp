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

// Function: sub_002FAF20
// Address: 0x2faf20 - 0x2faf70
void sub_002FAF20_0x2faf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAF20_0x2faf20");
#endif

    switch (ctx->pc) {
        case 0x2faf4cu: goto label_2faf4c;
        default: break;
    }

    ctx->pc = 0x2faf20u;

    // 0x2faf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2faf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2faf24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2faf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2faf28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2faf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2faf2c: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x2faf2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2faf30: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FAF30u;
    {
        const bool branch_taken_0x2faf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2faf30) {
            ctx->pc = 0x2FAF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAF30u;
            // 0x2faf34: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAF5Cu;
            goto label_2faf5c;
        }
    }
    ctx->pc = 0x2FAF38u;
    // 0x2faf38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2faf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2faf3c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2faf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2faf40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2faf40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2faf44: 0xc089998  jal         func_226660
    ctx->pc = 0x2FAF44u;
    SET_GPR_U32(ctx, 31, 0x2FAF4Cu);
    ctx->pc = 0x2FAF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF44u;
    // 0x2faf48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FAF44u, 0x2FAF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF4Cu;
label_2faf4c:
    // 0x2faf4c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2faf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2faf50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2faf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2faf54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAF54u;
    {
        const bool branch_taken_0x2faf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF54u;
        // 0x2faf58: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf54) {
            ctx->pc = 0x2FAF60u;
            goto label_2faf60;
        }
    }
    ctx->pc = 0x2FAF5Cu;
label_2faf5c:
    // 0x2faf5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2faf5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2faf60:
    // 0x2faf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2faf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faf64: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF64u;
        // 0x2faf68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAF6Cu;
    // 0x2faf6c: 0x0  nop
    ctx->pc = 0x2faf6cu;
    // NOP
    ctx->pc = 0x2faf70u;
}
