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

// Function: sub_002AEF30
// Address: 0x2aef30 - 0x2aef78
void sub_002AEF30_0x2aef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEF30_0x2aef30");
#endif

    ctx->pc = 0x2aef30u;

    // 0x2aef30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2aef30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2aef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2aef38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2aef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2aef3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aef40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2aef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2aef44: 0xa06402d3  sb          $a0, 0x2D3($v1)
    ctx->pc = 0x2aef44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 723), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aef48: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x2aef48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2aef4c: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEF4Cu;
    {
        const bool branch_taken_0x2aef4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF4Cu;
        // 0x2aef50: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef4c) {
            ctx->pc = 0x2AEF64u;
            goto label_2aef64;
        }
    }
    ctx->pc = 0x2AEF54u;
    // 0x2aef54: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2aef54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2aef58: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2aef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2aef5c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2aef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2aef60: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x2aef60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_2aef64:
    // 0x2aef64: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2aef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2aef68: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2aef68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2aef6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF6Cu;
        // 0x2aef70: 0xaca20018  sw          $v0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEF74u;
    // 0x2aef74: 0x0  nop
    ctx->pc = 0x2aef74u;
    // NOP
    ctx->pc = 0x2aef78u;
}
