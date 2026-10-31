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

// Function: sub_00293A70
// Address: 0x293a70 - 0x293ad0
void sub_00293A70_0x293a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293A70_0x293a70");
#endif

    switch (ctx->pc) {
        case 0x293a88u: goto label_293a88;
        default: break;
    }

    ctx->pc = 0x293a70u;

    // 0x293a70: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x293a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x293a74: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293a78: 0x246563d0  addiu       $a1, $v1, 0x63D0
    ctx->pc = 0x293a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 25552));
    // 0x293a7c: 0x2447ead8  addiu       $a3, $v0, -0x1528
    ctx->pc = 0x293a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x293a80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x293a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x293a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293a88:
    // 0x293a88: 0x5485000b  bnel        $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x293A88u;
    {
        const bool branch_taken_0x293a88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x293a88) {
            ctx->pc = 0x293A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293A88u;
            // 0x293a8c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293AB8u;
            goto label_293ab8;
        }
    }
    ctx->pc = 0x293A90u;
    // 0x293a90: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x293a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x293a94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x293a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x293a98: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x293a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x293a9c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x293a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x293aa0: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x293aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x293aa4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x293aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x293aa8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x293aa8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x293aac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x293aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x293ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x293AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AB0u;
        // 0x293ab4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293AB8u;
label_293ab8:
    // 0x293ab8: 0x2c620064  sltiu       $v0, $v1, 0x64
    ctx->pc = 0x293ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x293abc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x293ABCu;
    {
        const bool branch_taken_0x293abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293ABCu;
        // 0x293ac0: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293abc) {
            ctx->pc = 0x293A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293a88;
        }
    }
    ctx->pc = 0x293AC4u;
    // 0x293ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x293AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293ACCu;
    // 0x293acc: 0x0  nop
    ctx->pc = 0x293accu;
    // NOP
    ctx->pc = 0x293ad0u;
}
