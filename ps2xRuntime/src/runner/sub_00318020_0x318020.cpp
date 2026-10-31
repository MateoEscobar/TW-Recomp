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

// Function: sub_00318020
// Address: 0x318020 - 0x318098
void sub_00318020_0x318020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318020_0x318020");
#endif

    ctx->pc = 0x318020u;

    // 0x318020: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x318020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318024: 0x14a7000b  bne         $a1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x318024u;
    {
        const bool branch_taken_0x318024 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x318028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318024u;
        // 0x318028: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318024) {
            ctx->pc = 0x318054u;
            goto label_318054;
        }
    }
    ctx->pc = 0x31802Cu;
    // 0x31802c: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x31802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x318030: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x318030u;
    {
        const bool branch_taken_0x318030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318030u;
        // 0x318034: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318030) {
            ctx->pc = 0x31804Cu;
            goto label_31804c;
        }
    }
    ctx->pc = 0x318038u;
    // 0x318038: 0x8cc50040  lw          $a1, 0x40($a2)
    ctx->pc = 0x318038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x31803c: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x31803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x318040: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x318040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x318044: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x318044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x318048: 0xacc2003c  sw          $v0, 0x3C($a2)
    ctx->pc = 0x318048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 2));
label_31804c:
    // 0x31804c: 0x3e00008  jr          $ra
    ctx->pc = 0x31804Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31804Cu;
        // 0x318050: 0xa4c7004c  sh          $a3, 0x4C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 76), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31804Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318054u;
label_318054:
    // 0x318054: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x318054u;
    {
        const bool branch_taken_0x318054 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x318058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318054u;
        // 0x318058: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318054) {
            ctx->pc = 0x318068u;
            goto label_318068;
        }
    }
    ctx->pc = 0x31805Cu;
    // 0x31805c: 0xa4c0004c  sh          $zero, 0x4C($a2)
    ctx->pc = 0x31805cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x318060: 0x3e00008  jr          $ra
    ctx->pc = 0x318060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318060u;
        // 0x318064: 0xacc0003c  sw          $zero, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318068u;
label_318068:
    // 0x318068: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x318068u;
    {
        const bool branch_taken_0x318068 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x31806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318068u;
        // 0x31806c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318068) {
            ctx->pc = 0x31808Cu;
            goto label_31808c;
        }
    }
    ctx->pc = 0x318070u;
    // 0x318070: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x318070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x318074: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x318074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x318078: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x318078u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x31807c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x31807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x318080: 0xa4c7004c  sh          $a3, 0x4C($a2)
    ctx->pc = 0x318080u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 76), (uint16_t)GPR_U32(ctx, 7));
    // 0x318084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x318084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x318088: 0xacc2003c  sw          $v0, 0x3C($a2)
    ctx->pc = 0x318088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 2));
label_31808c:
    // 0x31808c: 0x3e00008  jr          $ra
    ctx->pc = 0x31808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318094u;
    // 0x318094: 0x0  nop
    ctx->pc = 0x318094u;
    // NOP
    ctx->pc = 0x318098u;
}
