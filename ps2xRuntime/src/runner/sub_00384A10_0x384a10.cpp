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

// Function: sub_00384A10
// Address: 0x384a10 - 0x384a50
void sub_00384A10_0x384a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384A10_0x384a10");
#endif

    switch (ctx->pc) {
        case 0x384a30u: goto label_384a30;
        default: break;
    }

    ctx->pc = 0x384a10u;

    // 0x384a10: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x384a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x384a14: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x384a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x384a18: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x384a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x384a1c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x384a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x384a20: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x384a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x384a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x384a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a28: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x384a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x384a2c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x384a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
label_384a30:
    // 0x384a30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x384a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x384a34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x384a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x384a38: 0x2ca2001a  sltiu       $v0, $a1, 0x1A
    ctx->pc = 0x384a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x384a3c: 0x0  nop
    ctx->pc = 0x384a3cu;
    // NOP
    // 0x384a40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x384A40u;
    {
        const bool branch_taken_0x384a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A40u;
        // 0x384a44: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a40) {
            ctx->pc = 0x384A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384a30;
        }
    }
    ctx->pc = 0x384A48u;
    // 0x384a48: 0x3e00008  jr          $ra
    ctx->pc = 0x384A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384A50u;
}
