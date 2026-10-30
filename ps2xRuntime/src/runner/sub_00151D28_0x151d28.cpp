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

// Function: sub_00151D28
// Address: 0x151d28 - 0x151d88
void sub_00151D28_0x151d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151D28_0x151d28");
#endif

    switch (ctx->pc) {
        case 0x151d58u: goto label_151d58;
        default: break;
    }

    ctx->pc = 0x151d28u;

    // 0x151d28: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151d2c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x151d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d30: 0x8c64c20c  lw          $a0, -0x3DF4($v1)
    ctx->pc = 0x151d30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x151d34: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x151d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x151d38: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x151d38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x151d3c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x151d3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x151d40: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x151D40u;
    {
        const bool branch_taken_0x151d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D40u;
        // 0x151d44: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d40) {
            ctx->pc = 0x151D80u;
            goto label_151d80;
        }
    }
    ctx->pc = 0x151D48u;
    // 0x151d48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x151d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x151d4c: 0x24433ac8  addiu       $v1, $v0, 0x3AC8
    ctx->pc = 0x151d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x151d50: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x151d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x151d54: 0x0  nop
    ctx->pc = 0x151d54u;
    // NOP
label_151d58:
    // 0x151d58: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x151d58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151D5Cu;
    {
        const bool branch_taken_0x151d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d5c) {
            ctx->pc = 0x151D6Cu;
            goto label_151d6c;
        }
    }
    ctx->pc = 0x151D64u;
    // 0x151d64: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151D64u;
    {
        const bool branch_taken_0x151d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x151d64) {
            ctx->pc = 0x151D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151D64u;
            // 0x151d68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151D74u;
            goto label_151d74;
        }
    }
    ctx->pc = 0x151D6Cu;
label_151d6c:
    // 0x151d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x151D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D6Cu;
        // 0x151d70: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151D74u;
label_151d74:
    // 0x151d74: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x151d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x151d78: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x151D78u;
    {
        const bool branch_taken_0x151d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D78u;
        // 0x151d7c: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d78) {
            ctx->pc = 0x151D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151d58;
        }
    }
    ctx->pc = 0x151D80u;
label_151d80:
    // 0x151d80: 0x3e00008  jr          $ra
    ctx->pc = 0x151D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D80u;
        // 0x151d84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151D88u;
}
