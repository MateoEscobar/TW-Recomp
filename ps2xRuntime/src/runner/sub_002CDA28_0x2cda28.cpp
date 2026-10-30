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

// Function: sub_002CDA28
// Address: 0x2cda28 - 0x2cda68
void sub_002CDA28_0x2cda28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDA28_0x2cda28");
#endif

    switch (ctx->pc) {
        case 0x2cda54u: goto label_2cda54;
        default: break;
    }

    ctx->pc = 0x2cda28u;

    // 0x2cda28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cda28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cda2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cda2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cda30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cda30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cda34: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2cda34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2cda38: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDA38u;
    {
        const bool branch_taken_0x2cda38 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2CDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA38u;
        // 0x2cda3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda38) {
            ctx->pc = 0x2CDA58u;
            goto label_2cda58;
        }
    }
    ctx->pc = 0x2CDA40u;
    // 0x2cda40: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2cda40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2cda44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDA44u;
    {
        const bool branch_taken_0x2cda44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA44u;
        // 0x2cda48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda44) {
            ctx->pc = 0x2CDA5Cu;
            goto label_2cda5c;
        }
    }
    ctx->pc = 0x2CDA4Cu;
    // 0x2cda4c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2CDA4Cu;
    SET_GPR_U32(ctx, 31, 0x2CDA54u);
    ctx->pc = 0x2CDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA4Cu;
    // 0x2cda50: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2CDA4Cu, 0x2CDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA54u;
label_2cda54:
    // 0x2cda54: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x2cda54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2cda58:
    // 0x2cda58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cda58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cda5c:
    // 0x2cda5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2cda5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA60u;
        // 0x2cda64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDA68u;
}
