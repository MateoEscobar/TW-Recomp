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

// Function: sub_00202B08
// Address: 0x202b08 - 0x202b50
void sub_00202B08_0x202b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202B08_0x202b08");
#endif

    switch (ctx->pc) {
        case 0x202b30u: goto label_202b30;
        default: break;
    }

    ctx->pc = 0x202b08u;

    // 0x202b08: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x202b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x202b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202b10: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x202b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x202b14: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x202b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x202b18: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x202b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x202b1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x202b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b20: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x202b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x202b24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x202b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x202b28: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x202b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x202b2c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x202b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_202b30:
    // 0x202b30: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x202b30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x202b34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x202b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x202b38: 0x2cc20009  sltiu       $v0, $a2, 0x9
    ctx->pc = 0x202b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x202b3c: 0x0  nop
    ctx->pc = 0x202b3cu;
    // NOP
    // 0x202b40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202B40u;
    {
        const bool branch_taken_0x202b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B40u;
        // 0x202b44: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b40) {
            ctx->pc = 0x202B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202b30;
        }
    }
    ctx->pc = 0x202B48u;
    // 0x202b48: 0x3e00008  jr          $ra
    ctx->pc = 0x202B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202B50u;
}
