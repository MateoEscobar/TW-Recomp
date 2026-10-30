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

// Function: sub_0038FE28
// Address: 0x38fe28 - 0x38fe88
void sub_0038FE28_0x38fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FE28_0x38fe28");
#endif

    switch (ctx->pc) {
        case 0x38fe58u: goto label_38fe58;
        default: break;
    }

    ctx->pc = 0x38fe28u;

    // 0x38fe28: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x38fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x38fe2c: 0x43403  sra         $a2, $a0, 16
    ctx->pc = 0x38fe2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x38fe30: 0x28c20b00  slti        $v0, $a2, 0xB00
    ctx->pc = 0x38fe30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2816) ? 1 : 0);
    // 0x38fe34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x38FE34u;
    {
        const bool branch_taken_0x38fe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE34u;
        // 0x38fe38: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe34) {
            ctx->pc = 0x38FE80u;
            goto label_38fe80;
        }
    }
    ctx->pc = 0x38FE3Cu;
    // 0x38fe3c: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x38fe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x38fe40: 0x2442bd38  addiu       $v0, $v0, -0x42C8
    ctx->pc = 0x38fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950200));
    // 0x38fe44: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x38fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x38fe48: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x38fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x38fe4c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x38fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x38fe50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38fe50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38fe54: 0x0  nop
    ctx->pc = 0x38fe54u;
    // NOP
label_38fe58:
    // 0x38fe58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38fe5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FE5Cu;
    {
        const bool branch_taken_0x38fe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE5Cu;
        // 0x38fe60: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe5c) {
            ctx->pc = 0x38FE6Cu;
            goto label_38fe6c;
        }
    }
    ctx->pc = 0x38FE64u;
    // 0x38fe64: 0x3e00008  jr          $ra
    ctx->pc = 0x38FE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE64u;
        // 0x38fe68: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FE6Cu;
label_38fe6c:
    // 0x38fe6c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x38fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x38fe70: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x38fe70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x38fe74: 0x28c20b00  slti        $v0, $a2, 0xB00
    ctx->pc = 0x38fe74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2816) ? 1 : 0);
    // 0x38fe78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x38FE78u;
    {
        const bool branch_taken_0x38fe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE78u;
        // 0x38fe7c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe78) {
            ctx->pc = 0x38FE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fe58;
        }
    }
    ctx->pc = 0x38FE80u;
label_38fe80:
    // 0x38fe80: 0x3e00008  jr          $ra
    ctx->pc = 0x38FE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE80u;
        // 0x38fe84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FE88u;
}
