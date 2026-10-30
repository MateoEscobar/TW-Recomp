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

// Function: sub_0043AFE0
// Address: 0x43afe0 - 0x43b0a0
void sub_0043AFE0_0x43afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AFE0_0x43afe0");
#endif

    ctx->pc = 0x43afe0u;

    // 0x43afe0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x43afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43afe4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x43afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x43afe8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x43AFE8u;
    {
        const bool branch_taken_0x43afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AFE8u;
        // 0x43afec: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43afe8) {
            ctx->pc = 0x43B024u;
            goto label_43b024;
        }
    }
    ctx->pc = 0x43AFF0u;
    // 0x43aff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43AFF0u;
    {
        const bool branch_taken_0x43aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AFF0u;
        // 0x43aff4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43aff0) {
            ctx->pc = 0x43B000u;
            goto label_43b000;
        }
    }
    ctx->pc = 0x43AFF8u;
    // 0x43aff8: 0x3e00008  jr          $ra
    ctx->pc = 0x43AFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AFF8u;
        // 0x43affc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B000u;
label_43b000:
    // 0x43b000: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x43B000u;
    {
        const bool branch_taken_0x43b000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b000) {
            ctx->pc = 0x43B004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B000u;
            // 0x43b004: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B018u;
            goto label_43b018;
        }
    }
    ctx->pc = 0x43B008u;
    // 0x43b008: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x43b008u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x43b00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43b010: 0x3e00008  jr          $ra
    ctx->pc = 0x43B010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B010u;
        // 0x43b014: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B018u;
label_43b018:
    // 0x43b018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43b018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x43b01c: 0x3e00008  jr          $ra
    ctx->pc = 0x43B01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B01Cu;
        // 0x43b020: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B024u;
label_43b024:
    // 0x43b024: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x43b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x43b028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43B028u;
    {
        const bool branch_taken_0x43b028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B028u;
        // 0x43b02c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b028) {
            ctx->pc = 0x43B038u;
            goto label_43b038;
        }
    }
    ctx->pc = 0x43B030u;
    // 0x43b030: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x43b030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x43b034: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x43b034u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_43b038:
    // 0x43b038: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x43b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x43b03c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43B03Cu;
    {
        const bool branch_taken_0x43b03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B03Cu;
        // 0x43b040: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b03c) {
            ctx->pc = 0x43B050u;
            goto label_43b050;
        }
    }
    ctx->pc = 0x43B044u;
    // 0x43b044: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x43b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x43b048: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x43b048u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x43b04c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x43b04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_43b050:
    // 0x43b050: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43B050u;
    {
        const bool branch_taken_0x43b050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B050u;
        // 0x43b054: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b050) {
            ctx->pc = 0x43B064u;
            goto label_43b064;
        }
    }
    ctx->pc = 0x43B058u;
    // 0x43b058: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x43b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x43b05c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x43b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x43b060: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x43b060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_43b064:
    // 0x43b064: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43B064u;
    {
        const bool branch_taken_0x43b064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B064u;
        // 0x43b068: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b064) {
            ctx->pc = 0x43B078u;
            goto label_43b078;
        }
    }
    ctx->pc = 0x43B06Cu;
    // 0x43b06c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x43b06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x43b070: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x43b070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x43b074: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x43b074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_43b078:
    // 0x43b078: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x43B078u;
    {
        const bool branch_taken_0x43b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43b078) {
            ctx->pc = 0x43B07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B078u;
            // 0x43b07c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B098u;
            goto label_43b098;
        }
    }
    ctx->pc = 0x43B080u;
    // 0x43b080: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x43b080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x43b084: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43B084u;
    {
        const bool branch_taken_0x43b084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B084u;
        // 0x43b088: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b084) {
            ctx->pc = 0x43B094u;
            goto label_43b094;
        }
    }
    ctx->pc = 0x43B08Cu;
    // 0x43b08c: 0x3e00008  jr          $ra
    ctx->pc = 0x43B08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B08Cu;
        // 0x43b090: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B094u;
label_43b094:
    // 0x43b094: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x43b094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_43b098:
    // 0x43b098: 0x3e00008  jr          $ra
    ctx->pc = 0x43B098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B098u;
        // 0x43b09c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B0A0u;
}
