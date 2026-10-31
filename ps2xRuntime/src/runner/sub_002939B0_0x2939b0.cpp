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

// Function: sub_002939B0
// Address: 0x2939b0 - 0x293a10
void sub_002939B0_0x2939b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002939B0_0x2939b0");
#endif

    switch (ctx->pc) {
        case 0x2939c8u: goto label_2939c8;
        default: break;
    }

    ctx->pc = 0x2939b0u;

    // 0x2939b0: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x2939b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x2939b4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2939b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2939b8: 0x24650430  addiu       $a1, $v1, 0x430
    ctx->pc = 0x2939b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1072));
    // 0x2939bc: 0x2447eac0  addiu       $a3, $v0, -0x1540
    ctx->pc = 0x2939bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x2939c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2939c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2939c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2939c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2939c8:
    // 0x2939c8: 0x5485000b  bnel        $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2939C8u;
    {
        const bool branch_taken_0x2939c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2939c8) {
            ctx->pc = 0x2939CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2939C8u;
            // 0x2939cc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2939F8u;
            goto label_2939f8;
        }
    }
    ctx->pc = 0x2939D0u;
    // 0x2939d0: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2939d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2939d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2939d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2939d8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2939d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2939dc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2939dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2939e0: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x2939e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x2939e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2939e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2939e8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2939e8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2939ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2939ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2939f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2939F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2939F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939F0u;
        // 0x2939f4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2939F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2939F8u;
label_2939f8:
    // 0x2939f8: 0x2c6200aa  sltiu       $v0, $v1, 0xAA
    ctx->pc = 0x2939f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)170) ? 1 : 0);
    // 0x2939fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2939FCu;
    {
        const bool branch_taken_0x2939fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939FCu;
        // 0x293a00: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939fc) {
            ctx->pc = 0x2939C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2939c8;
        }
    }
    ctx->pc = 0x293A04u;
    // 0x293a04: 0x3e00008  jr          $ra
    ctx->pc = 0x293A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293A0Cu;
    // 0x293a0c: 0x0  nop
    ctx->pc = 0x293a0cu;
    // NOP
    ctx->pc = 0x293a10u;
}
