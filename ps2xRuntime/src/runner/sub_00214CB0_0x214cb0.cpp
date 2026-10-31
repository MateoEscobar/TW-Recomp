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

// Function: sub_00214CB0
// Address: 0x214cb0 - 0x214ce8
void sub_00214CB0_0x214cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214CB0_0x214cb0");
#endif

    ctx->pc = 0x214cb0u;

    // 0x214cb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x214cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x214cb4: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x214CB4u;
    {
        const bool branch_taken_0x214cb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x214cb4) {
            ctx->pc = 0x214CE0u;
            goto label_214ce0;
        }
    }
    ctx->pc = 0x214CBCu;
    // 0x214cbc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x214CBCu;
    {
        const bool branch_taken_0x214cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CBCu;
        // 0x214cc0: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cbc) {
            ctx->pc = 0x214CE0u;
            goto label_214ce0;
        }
    }
    ctx->pc = 0x214CC4u;
    // 0x214cc4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x214cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x214cc8: 0x24820c40  addiu       $v0, $a0, 0xC40
    ctx->pc = 0x214cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3136));
    // 0x214ccc: 0xa0850c40  sb          $a1, 0xC40($a0)
    ctx->pc = 0x214cccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3136), (uint8_t)GPR_U32(ctx, 5));
    // 0x214cd0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x214cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x214cd4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x214cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x214cd8: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x214cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x214cdc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x214cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_214ce0:
    // 0x214ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x214CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214CE8u;
}
