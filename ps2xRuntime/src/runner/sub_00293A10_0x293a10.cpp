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

// Function: sub_00293A10
// Address: 0x293a10 - 0x293a70
void sub_00293A10_0x293a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293A10_0x293a10");
#endif

    switch (ctx->pc) {
        case 0x293a28u: goto label_293a28;
        default: break;
    }

    ctx->pc = 0x293a10u;

    // 0x293a10: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293a14: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x293a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x293a18: 0x2449ead8  addiu       $t1, $v0, -0x1528
    ctx->pc = 0x293a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x293a1c: 0x246763d0  addiu       $a3, $v1, 0x63D0
    ctx->pc = 0x293a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 25552));
    // 0x293a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x293a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293a28:
    // 0x293a28: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x293a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x293a2c: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x293a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x293a30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293a34: 0x682004  sllv        $a0, $t0, $v1
    ctx->pc = 0x293a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x293a38: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x293a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x293a3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x293a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293a40: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x293a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x293a44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293A44u;
    {
        const bool branch_taken_0x293a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A44u;
        // 0x293a48: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a44) {
            ctx->pc = 0x293A5Cu;
            goto label_293a5c;
        }
    }
    ctx->pc = 0x293A4Cu;
    // 0x293a4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x293a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x293a50: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x293a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a54: 0x3e00008  jr          $ra
    ctx->pc = 0x293A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A54u;
        // 0x293a58: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293A5Cu;
label_293a5c:
    // 0x293a5c: 0x2cc20064  sltiu       $v0, $a2, 0x64
    ctx->pc = 0x293a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x293a60: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x293A60u;
    {
        const bool branch_taken_0x293a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A60u;
        // 0x293a64: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a60) {
            ctx->pc = 0x293A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293a28;
        }
    }
    ctx->pc = 0x293A68u;
    // 0x293a68: 0x3e00008  jr          $ra
    ctx->pc = 0x293A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A68u;
        // 0x293a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293A70u;
}
