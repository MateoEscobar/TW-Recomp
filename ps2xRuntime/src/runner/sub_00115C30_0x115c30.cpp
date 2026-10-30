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

// Function: sub_00115C30
// Address: 0x115c30 - 0x115c80
void sub_00115C30_0x115c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115C30_0x115c30");
#endif

    switch (ctx->pc) {
        case 0x115c40u: goto label_115c40;
        case 0x115c50u: goto label_115c50;
        default: break;
    }

    ctx->pc = 0x115c30u;

    // 0x115c30: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x115c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x115c34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x115c34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c38: 0x240502fc  addiu       $a1, $zero, 0x2FC
    ctx->pc = 0x115c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 764));
    // 0x115c3c: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x115c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_115c40:
    // 0x115c40: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x115c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x115c44: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x115c48: 0x244202f8  addiu       $v0, $v0, 0x2F8
    ctx->pc = 0x115c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 760));
    // 0x115c4c: 0x240300be  addiu       $v1, $zero, 0xBE
    ctx->pc = 0x115c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
label_115c50:
    // 0x115c50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x115c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x115c54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115c58: 0x0  nop
    ctx->pc = 0x115c58u;
    // NOP
    // 0x115c5c: 0x0  nop
    ctx->pc = 0x115c5cu;
    // NOP
    // 0x115c60: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x115C60u;
    {
        const bool branch_taken_0x115c60 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x115C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C60u;
        // 0x115c64: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c60) {
            ctx->pc = 0x115C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c50;
        }
    }
    ctx->pc = 0x115C68u;
    // 0x115c68: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x115c68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c6c: 0x286200bf  slti        $v0, $v1, 0xBF
    ctx->pc = 0x115c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)191) ? 1 : 0);
    // 0x115c70: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x115C70u;
    {
        const bool branch_taken_0x115c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C70u;
        // 0x115c74: 0x652018  mult        $a0, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c70) {
            ctx->pc = 0x115C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c40;
        }
    }
    ctx->pc = 0x115C78u;
    // 0x115c78: 0x3e00008  jr          $ra
    ctx->pc = 0x115C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C80u;
}
