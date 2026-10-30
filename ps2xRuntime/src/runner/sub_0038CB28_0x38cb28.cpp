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

// Function: sub_0038CB28
// Address: 0x38cb28 - 0x38cb70
void sub_0038CB28_0x38cb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CB28_0x38cb28");
#endif

    switch (ctx->pc) {
        case 0x38cb40u: goto label_38cb40;
        default: break;
    }

    ctx->pc = 0x38cb28u;

    // 0x38cb28: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CB28u;
    {
        const bool branch_taken_0x38cb28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB28u;
        // 0x38cb2c: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cb28) {
            ctx->pc = 0x38CB38u;
            goto label_38cb38;
        }
    }
    ctx->pc = 0x38CB30u;
    // 0x38cb30: 0x3e00008  jr          $ra
    ctx->pc = 0x38CB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB30u;
        // 0x38cb34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CB38u;
label_38cb38:
    // 0x38cb38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38cb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38cb3c: 0x661004  sllv        $v0, $a2, $v1
    ctx->pc = 0x38cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_38cb40:
    // 0x38cb40: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x38cb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x38cb44: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CB44u;
    {
        const bool branch_taken_0x38cb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38cb44) {
            ctx->pc = 0x38CB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CB44u;
            // 0x38cb48: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CB60u;
            goto label_38cb60;
        }
    }
    ctx->pc = 0x38CB4Cu;
    // 0x38cb4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38cb50: 0x5c60fffb  bgtzl       $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x38CB50u;
    {
        const bool branch_taken_0x38cb50 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x38cb50) {
            ctx->pc = 0x38CB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CB50u;
            // 0x38cb54: 0x661004  sllv        $v0, $a2, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38cb40;
        }
    }
    ctx->pc = 0x38CB58u;
    // 0x38cb58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38cb58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cb5c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x38cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_38cb60:
    // 0x38cb60: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x38cb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38cb64: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x38cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x38cb68: 0x3e00008  jr          $ra
    ctx->pc = 0x38CB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB68u;
        // 0x38cb6c: 0x244201d0  addiu       $v0, $v0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CB70u;
}
