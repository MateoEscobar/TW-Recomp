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

// Function: sub_00329AC0
// Address: 0x329ac0 - 0x329b38
void sub_00329AC0_0x329ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329AC0_0x329ac0");
#endif

    switch (ctx->pc) {
        case 0x329b14u: goto label_329b14;
        default: break;
    }

    ctx->pc = 0x329ac0u;

    // 0x329ac0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x329ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329ac4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x329ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x329ac8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x329AC8u;
    {
        const bool branch_taken_0x329ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x329ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AC8u;
        // 0x329acc: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ac8) {
            ctx->pc = 0x329B04u;
            goto label_329b04;
        }
    }
    ctx->pc = 0x329AD0u;
    // 0x329ad0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329AD0u;
    {
        const bool branch_taken_0x329ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AD0u;
        // 0x329ad4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ad0) {
            ctx->pc = 0x329AE8u;
            goto label_329ae8;
        }
    }
    ctx->pc = 0x329AD8u;
    // 0x329ad8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x329AD8u;
    {
        const bool branch_taken_0x329ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x329ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AD8u;
        // 0x329adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ad8) {
            ctx->pc = 0x329B04u;
            goto label_329b04;
        }
    }
    ctx->pc = 0x329AE0u;
    // 0x329ae0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x329AE0u;
    {
        const bool branch_taken_0x329ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ae0) {
            ctx->pc = 0x329B2Cu;
            goto label_329b2c;
        }
    }
    ctx->pc = 0x329AE8u;
label_329ae8:
    // 0x329ae8: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x329AE8u;
    {
        const bool branch_taken_0x329ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x329ae8) {
            ctx->pc = 0x329AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329AE8u;
            // 0x329aec: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B10u;
            goto label_329b10;
        }
    }
    ctx->pc = 0x329AF0u;
    // 0x329af0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x329af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x329af4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x329AF4u;
    {
        const bool branch_taken_0x329af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x329af4) {
            ctx->pc = 0x329AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329AF4u;
            // 0x329af8: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B20u;
            goto label_329b20;
        }
    }
    ctx->pc = 0x329AFCu;
    // 0x329afc: 0x3e00008  jr          $ra
    ctx->pc = 0x329AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AFCu;
        // 0x329b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329B04u;
label_329b04:
    // 0x329b04: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x329b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x329b08: 0x3e00008  jr          $ra
    ctx->pc = 0x329B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B08u;
        // 0x329b0c: 0x8462000a  lh          $v0, 0xA($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329B10u;
label_329b10:
    // 0x329b10: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x329b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_329b14:
    // 0x329b14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x329b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x329b18: 0x3e00008  jr          $ra
    ctx->pc = 0x329B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B18u;
        // 0x329b1c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329B20u;
label_329b20:
    // 0x329b20: 0x0  nop
    ctx->pc = 0x329b20u;
    // NOP
    // 0x329b24: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x329B24u;
    {
        const bool branch_taken_0x329b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B24u;
        // 0x329b28: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b24) {
            ctx->pc = 0x329B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329b14;
        }
    }
    ctx->pc = 0x329B2Cu;
label_329b2c:
    // 0x329b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x329B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329B34u;
    // 0x329b34: 0x0  nop
    ctx->pc = 0x329b34u;
    // NOP
    ctx->pc = 0x329b38u;
}
