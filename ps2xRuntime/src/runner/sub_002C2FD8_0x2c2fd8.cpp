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

// Function: sub_002C2FD8
// Address: 0x2c2fd8 - 0x2c3008
void sub_002C2FD8_0x2c2fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2FD8_0x2c2fd8");
#endif

    ctx->pc = 0x2c2fd8u;

    // 0x2c2fd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2fdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2fe0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c2fe4: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2FE4u;
    {
        const bool branch_taken_0x2c2fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FE4u;
        // 0x2c2fe8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fe4) {
            ctx->pc = 0x2C2FFCu;
            goto label_2c2ffc;
        }
    }
    ctx->pc = 0x2C2FECu;
    // 0x2c2fec: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2c2fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2c2ff0: 0x94830322  lhu         $v1, 0x322($a0)
    ctx->pc = 0x2c2ff0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 802)));
    // 0x2c2ff4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c2ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c2ff8: 0xa4830322  sh          $v1, 0x322($a0)
    ctx->pc = 0x2c2ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 802), (uint16_t)GPR_U32(ctx, 3));
label_2c2ffc:
    // 0x2c2ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3004u;
    // 0x2c3004: 0x0  nop
    ctx->pc = 0x2c3004u;
    // NOP
    ctx->pc = 0x2c3008u;
}
