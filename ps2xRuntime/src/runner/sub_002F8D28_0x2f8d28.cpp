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

// Function: sub_002F8D28
// Address: 0x2f8d28 - 0x2f8d88
void sub_002F8D28_0x2f8d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8D28_0x2f8d28");
#endif

    ctx->pc = 0x2f8d28u;

    // 0x2f8d28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8d2c: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2f8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x2f8d30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8D30u;
    {
        const bool branch_taken_0x2f8d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D30u;
        // 0x2f8d34: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d30) {
            ctx->pc = 0x2F8D40u;
            goto label_2f8d40;
        }
    }
    ctx->pc = 0x2F8D38u;
    // 0x2f8d38: 0xac600284  sw          $zero, 0x284($v1)
    ctx->pc = 0x2f8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
    // 0x2f8d3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8d40:
    // 0x2f8d40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f8d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8d44: 0xa066014c  sb          $a2, 0x14C($v1)
    ctx->pc = 0x2f8d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 332), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f8d48: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x2f8d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2f8d4c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8D4Cu;
    {
        const bool branch_taken_0x2f8d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8d4c) {
            ctx->pc = 0x2F8D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8D4Cu;
            // 0x2f8d50: 0x90820029  lbu         $v0, 0x29($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D6Cu;
            goto label_2f8d6c;
        }
    }
    ctx->pc = 0x2F8D54u;
    // 0x2f8d54: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x2f8d54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x2f8d58: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x2f8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x2f8d5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f8d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f8d60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f8d64: 0xfca200e0  sd          $v0, 0xE0($a1)
    ctx->pc = 0x2f8d64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
    // 0x2f8d68: 0x90820029  lbu         $v0, 0x29($a0)
    ctx->pc = 0x2f8d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_2f8d6c:
    // 0x2f8d6c: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8D6Cu;
    {
        const bool branch_taken_0x2f8d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2F8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D6Cu;
        // 0x2f8d70: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d6c) {
            ctx->pc = 0x2F8D80u;
            goto label_2f8d80;
        }
    }
    ctx->pc = 0x2F8D74u;
    // 0x2f8d74: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x2f8d74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x2f8d78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f8d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f8d7c: 0xfca200e0  sd          $v0, 0xE0($a1)
    ctx->pc = 0x2f8d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
label_2f8d80:
    // 0x2f8d80: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8D88u;
}
