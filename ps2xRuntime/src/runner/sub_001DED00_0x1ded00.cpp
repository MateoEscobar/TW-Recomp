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

// Function: sub_001DED00
// Address: 0x1ded00 - 0x1ded48
void sub_001DED00_0x1ded00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DED00_0x1ded00");
#endif

    switch (ctx->pc) {
        case 0x1ded30u: goto label_1ded30;
        default: break;
    }

    ctx->pc = 0x1ded00u;

    // 0x1ded00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ded00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ded04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ded04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ded08: 0x8c823a78  lw          $v0, 0x3A78($a0)
    ctx->pc = 0x1ded08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14968)));
    // 0x1ded0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DED0Cu;
    {
        const bool branch_taken_0x1ded0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED0Cu;
        // 0x1ded10: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded0c) {
            ctx->pc = 0x1DED38u;
            goto label_1ded38;
        }
    }
    ctx->pc = 0x1DED14u;
    // 0x1ded14: 0x8c821b88  lw          $v0, 0x1B88($a0)
    ctx->pc = 0x1ded14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7048)));
    // 0x1ded18: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DED18u;
    {
        const bool branch_taken_0x1ded18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED18u;
        // 0x1ded1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded18) {
            ctx->pc = 0x1DED24u;
            goto label_1ded24;
        }
    }
    ctx->pc = 0x1DED20u;
    // 0x1ded20: 0xac822bc4  sw          $v0, 0x2BC4($a0)
    ctx->pc = 0x1ded20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11204), GPR_U32(ctx, 2));
label_1ded24:
    // 0x1ded24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ded24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1ded28: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1DED28u;
    SET_GPR_U32(ctx, 31, 0x1DED30u);
    ctx->pc = 0x1DED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DED28u;
    // 0x1ded2c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1DED28u, 0x1DED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED30u;
label_1ded30:
    // 0x1ded30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DED30u;
    {
        const bool branch_taken_0x1ded30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED30u;
        // 0x1ded34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded30) {
            ctx->pc = 0x1DED40u;
            goto label_1ded40;
        }
    }
    ctx->pc = 0x1DED38u;
label_1ded38:
    // 0x1ded38: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x1ded38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
    // 0x1ded3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ded3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ded40:
    // 0x1ded40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DED40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED40u;
        // 0x1ded44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DED40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DED48u;
}
