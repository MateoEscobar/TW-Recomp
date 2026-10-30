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

// Function: sub_00354D28
// Address: 0x354d28 - 0x354d98
void sub_00354D28_0x354d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354D28_0x354d28");
#endif

    switch (ctx->pc) {
        case 0x354d54u: goto label_354d54;
        case 0x354d70u: goto label_354d70;
        default: break;
    }

    ctx->pc = 0x354d28u;

    // 0x354d28: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x354d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x354d2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x354D2Cu;
    {
        const bool branch_taken_0x354d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D2Cu;
        // 0x354d30: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d2c) {
            ctx->pc = 0x354D5Cu;
            goto label_354d5c;
        }
    }
    ctx->pc = 0x354D34u;
    // 0x354d34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354d38: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x354d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x354d3c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x354d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x354d40: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x354d40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x354d44: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x354d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x354d48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x354d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x354d4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x354D4Cu;
    {
        const bool branch_taken_0x354d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D4Cu;
        // 0x354d50: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d4c) {
            ctx->pc = 0x354D64u;
            goto label_354d64;
        }
    }
    ctx->pc = 0x354D54u;
label_354d54:
    // 0x354d54: 0x3e00008  jr          $ra
    ctx->pc = 0x354D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D54u;
        // 0x354d58: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354D5Cu;
label_354d5c:
    // 0x354d5c: 0x94850014  lhu         $a1, 0x14($a0)
    ctx->pc = 0x354d5cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x354d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x354d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354d64:
    // 0x354d64: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x354D64u;
    {
        const bool branch_taken_0x354d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x354D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D64u;
        // 0x354d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d64) {
            ctx->pc = 0x354D8Cu;
            goto label_354d8c;
        }
    }
    ctx->pc = 0x354D6Cu;
    // 0x354d6c: 0x0  nop
    ctx->pc = 0x354d6cu;
    // NOP
label_354d70:
    // 0x354d70: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x354d70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x354d74: 0x1046fff7  beq         $v0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x354D74u;
    {
        const bool branch_taken_0x354d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x354D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D74u;
        // 0x354d78: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d74) {
            ctx->pc = 0x354D54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354d54;
        }
    }
    ctx->pc = 0x354D7Cu;
    // 0x354d7c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x354d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x354d80: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x354d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x354d84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x354D84u;
    {
        const bool branch_taken_0x354d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D84u;
        // 0x354d88: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d84) {
            ctx->pc = 0x354D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354d70;
        }
    }
    ctx->pc = 0x354D8Cu;
label_354d8c:
    // 0x354d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x354D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D8Cu;
        // 0x354d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354D94u;
    // 0x354d94: 0x0  nop
    ctx->pc = 0x354d94u;
    // NOP
    ctx->pc = 0x354d98u;
}
