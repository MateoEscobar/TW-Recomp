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

// Function: sub_002D7D10
// Address: 0x2d7d10 - 0x2d7d80
void sub_002D7D10_0x2d7d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7D10_0x2d7d10");
#endif

    ctx->pc = 0x2d7d10u;

    // 0x2d7d10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d7d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d14: 0x90a20040  lbu         $v0, 0x40($a1)
    ctx->pc = 0x2d7d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2d7d18: 0x90a60041  lbu         $a2, 0x41($a1)
    ctx->pc = 0x2d7d18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 65)));
    // 0x2d7d1c: 0x80a4003a  lb          $a0, 0x3A($a1)
    ctx->pc = 0x2d7d1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x2d7d20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d7d24: 0x90a7003a  lbu         $a3, 0x3A($a1)
    ctx->pc = 0x2d7d24u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x2d7d28: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2d7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d7d2c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2d7d2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2d7d30: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7D30u;
    {
        const bool branch_taken_0x2d7d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D30u;
        // 0x2d7d34: 0xa0a20040  sb          $v0, 0x40($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d30) {
            ctx->pc = 0x2D7D58u;
            goto label_2d7d58;
        }
    }
    ctx->pc = 0x2D7D38u;
    // 0x2d7d38: 0x90a3003f  lbu         $v1, 0x3F($a1)
    ctx->pc = 0x2d7d38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
    // 0x2d7d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7d40: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7D40u;
    {
        const bool branch_taken_0x2d7d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D40u;
        // 0x2d7d44: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d40) {
            ctx->pc = 0x2D7D50u;
            goto label_2d7d50;
        }
    }
    ctx->pc = 0x2D7D48u;
    // 0x2d7d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D48u;
        // 0x2d7d4c: 0xa0a00040  sb          $zero, 0x40($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7D50u;
label_2d7d50:
    // 0x2d7d50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7D50u;
    {
        const bool branch_taken_0x2d7d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D50u;
        // 0x2d7d54: 0x24e3fffe  addiu       $v1, $a3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d50) {
            ctx->pc = 0x2D7D64u;
            goto label_2d7d64;
        }
    }
    ctx->pc = 0x2D7D58u;
label_2d7d58:
    // 0x2d7d58: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7D58u;
    {
        const bool branch_taken_0x2d7d58 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D58u;
        // 0x2d7d5c: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d58) {
            ctx->pc = 0x2D7D74u;
            goto label_2d7d74;
        }
    }
    ctx->pc = 0x2D7D60u;
    // 0x2d7d60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7d64:
    // 0x2d7d64: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2d7d64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2d7d68: 0xa0a30040  sb          $v1, 0x40($a1)
    ctx->pc = 0x2d7d68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7d6c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2d7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d7d70: 0xa0a20041  sb          $v0, 0x41($a1)
    ctx->pc = 0x2d7d70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 65), (uint8_t)GPR_U32(ctx, 2));
label_2d7d74:
    // 0x2d7d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7D7Cu;
    // 0x2d7d7c: 0x0  nop
    ctx->pc = 0x2d7d7cu;
    // NOP
    ctx->pc = 0x2d7d80u;
}
