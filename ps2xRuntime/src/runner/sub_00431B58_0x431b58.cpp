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

// Function: sub_00431B58
// Address: 0x431b58 - 0x431b88
void sub_00431B58_0x431b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431B58_0x431b58");
#endif

    switch (ctx->pc) {
        case 0x431b68u: goto label_431b68;
        default: break;
    }

    ctx->pc = 0x431b58u;

    // 0x431b58: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x431B58u;
    {
        const bool branch_taken_0x431b58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x431B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431B58u;
        // 0x431b5c: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431b58) {
            ctx->pc = 0x431B80u;
            goto label_431b80;
        }
    }
    ctx->pc = 0x431B60u;
    // 0x431b60: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x431b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x431b64: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x431b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_431b68:
    // 0x431b68: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x431b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x431b6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x431b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x431b70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x431b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x431b74: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x431b74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x431b78: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x431B78u;
    {
        const bool branch_taken_0x431b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x431B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431B78u;
        // 0x431b7c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431b78) {
            ctx->pc = 0x431B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431b68;
        }
    }
    ctx->pc = 0x431B80u;
label_431b80:
    // 0x431b80: 0x3e00008  jr          $ra
    ctx->pc = 0x431B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431B88u;
}
