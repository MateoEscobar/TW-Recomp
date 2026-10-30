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

// Function: sub_0028BF40
// Address: 0x28bf40 - 0x28bf88
void sub_0028BF40_0x28bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BF40_0x28bf40");
#endif

    switch (ctx->pc) {
        case 0x28bf60u: goto label_28bf60;
        default: break;
    }

    ctx->pc = 0x28bf40u;

    // 0x28bf40: 0x4a20005  bltzl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BF40u;
    {
        const bool branch_taken_0x28bf40 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x28bf40) {
            ctx->pc = 0x28BF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BF40u;
            // 0x28bf44: 0x2484014e  addiu       $a0, $a0, 0x14E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 334));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BF58u;
            goto label_28bf58;
        }
    }
    ctx->pc = 0x28BF48u;
    // 0x28bf48: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x28bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28bf4c: 0x9062014e  lbu         $v0, 0x14E($v1)
    ctx->pc = 0x28bf4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 334)));
    // 0x28bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x28BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF50u;
        // 0x28bf54: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BF58u;
label_28bf58:
    // 0x28bf58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28bf58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28bf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bf60:
    // 0x28bf60: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x28bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28bf64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28bf64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28bf68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28bf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28bf6c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x28bf6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28bf70: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x28bf70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x28bf74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28BF74u;
    {
        const bool branch_taken_0x28bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF74u;
        // 0x28bf78: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf74) {
            ctx->pc = 0x28BF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bf60;
        }
    }
    ctx->pc = 0x28BF7Cu;
    // 0x28bf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28BF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF7Cu;
        // 0x28bf80: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BF84u;
    // 0x28bf84: 0x0  nop
    ctx->pc = 0x28bf84u;
    // NOP
    ctx->pc = 0x28bf88u;
}
