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

// Function: sub_004A9B38
// Address: 0x4a9b38 - 0x4a9b80
void sub_004A9B38_0x4a9b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9B38_0x4a9b38");
#endif

    switch (ctx->pc) {
        case 0x4a9b50u: goto label_4a9b50;
        default: break;
    }

    ctx->pc = 0x4a9b38u;

    // 0x4a9b38: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4A9B38u;
    {
        const bool branch_taken_0x4a9b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9b38) {
            ctx->pc = 0x4A9B74u;
            goto label_4a9b74;
        }
    }
    ctx->pc = 0x4A9B40u;
    // 0x4a9b40: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4a9b40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9b44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A9B44u;
    {
        const bool branch_taken_0x4a9b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B44u;
        // 0x4a9b48: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9b44) {
            ctx->pc = 0x4A9B74u;
            goto label_4a9b74;
        }
    }
    ctx->pc = 0x4A9B4Cu;
    // 0x4a9b4c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x4a9b4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4a9b50:
    // 0x4a9b50: 0x24a2ffbf  addiu       $v0, $a1, -0x41
    ctx->pc = 0x4a9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967231));
    // 0x4a9b54: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x4a9b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x4a9b58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A9B58u;
    {
        const bool branch_taken_0x4a9b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B58u;
        // 0x4a9b5c: 0x24a20020  addiu       $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9b58) {
            ctx->pc = 0x4A9B64u;
            goto label_4a9b64;
        }
    }
    ctx->pc = 0x4A9B60u;
    // 0x4a9b60: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4a9b60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_4a9b64:
    // 0x4a9b64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a9b68: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4a9b68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a9b6c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A9B6Cu;
    {
        const bool branch_taken_0x4a9b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9b6c) {
            ctx->pc = 0x4A9B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A9B6Cu;
            // 0x4a9b70: 0x80650000  lb          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A9B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9b50;
        }
    }
    ctx->pc = 0x4A9B74u;
label_4a9b74:
    // 0x4a9b74: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9B74u;
        // 0x4a9b78: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9B7Cu;
    // 0x4a9b7c: 0x0  nop
    ctx->pc = 0x4a9b7cu;
    // NOP
    ctx->pc = 0x4a9b80u;
}
