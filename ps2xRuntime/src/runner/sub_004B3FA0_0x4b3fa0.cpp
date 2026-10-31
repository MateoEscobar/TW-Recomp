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

// Function: sub_004B3FA0
// Address: 0x4b3fa0 - 0x4b4060
void sub_004B3FA0_0x4b3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3FA0_0x4b3fa0");
#endif

    ctx->pc = 0x4b3fa0u;

    // 0x4b3fa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3fa4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x4b3fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x4b3fa8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B3FA8u;
    {
        const bool branch_taken_0x4b3fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FA8u;
        // 0x4b3fac: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3fa8) {
            ctx->pc = 0x4B3FE4u;
            goto label_4b3fe4;
        }
    }
    ctx->pc = 0x4B3FB0u;
    // 0x4b3fb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3FB0u;
    {
        const bool branch_taken_0x4b3fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FB0u;
        // 0x4b3fb4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3fb0) {
            ctx->pc = 0x4B3FC0u;
            goto label_4b3fc0;
        }
    }
    ctx->pc = 0x4B3FB8u;
    // 0x4b3fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FB8u;
        // 0x4b3fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3FC0u;
label_4b3fc0:
    // 0x4b3fc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B3FC0u;
    {
        const bool branch_taken_0x4b3fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3fc0) {
            ctx->pc = 0x4B3FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3FC0u;
            // 0x4b3fc4: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3FD8u;
            goto label_4b3fd8;
        }
    }
    ctx->pc = 0x4B3FC8u;
    // 0x4b3fc8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4b3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4b3fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FD0u;
        // 0x4b3fd4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3FD8u;
label_4b3fd8:
    // 0x4b3fd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b3fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FDCu;
        // 0x4b3fe0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3FE4u;
label_4b3fe4:
    // 0x4b3fe4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x4b3fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4b3fe8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3FE8u;
    {
        const bool branch_taken_0x4b3fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FE8u;
        // 0x4b3fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3fe8) {
            ctx->pc = 0x4B3FF8u;
            goto label_4b3ff8;
        }
    }
    ctx->pc = 0x4B3FF0u;
    // 0x4b3ff0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4b3ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4b3ff4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_4b3ff8:
    // 0x4b3ff8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4b3ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4b3ffc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3FFCu;
    {
        const bool branch_taken_0x4b3ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FFCu;
        // 0x4b4000: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ffc) {
            ctx->pc = 0x4B4010u;
            goto label_4b4010;
        }
    }
    ctx->pc = 0x4B4004u;
    // 0x4b4004: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4b4004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4b4008: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x4b4008u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x4b400c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x4b400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_4b4010:
    // 0x4b4010: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4010u;
    {
        const bool branch_taken_0x4b4010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4010u;
        // 0x4b4014: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4010) {
            ctx->pc = 0x4B4024u;
            goto label_4b4024;
        }
    }
    ctx->pc = 0x4B4018u;
    // 0x4b4018: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4b4018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4b401c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x4b401cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x4b4020: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x4b4020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_4b4024:
    // 0x4b4024: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4024u;
    {
        const bool branch_taken_0x4b4024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4024u;
        // 0x4b4028: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4024) {
            ctx->pc = 0x4B4038u;
            goto label_4b4038;
        }
    }
    ctx->pc = 0x4B402Cu;
    // 0x4b402c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4b402cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4b4030: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x4b4030u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x4b4034: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4b4034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4b4038:
    // 0x4b4038: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B4038u;
    {
        const bool branch_taken_0x4b4038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4038) {
            ctx->pc = 0x4B403Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4038u;
            // 0x4b403c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4058u;
            goto label_4b4058;
        }
    }
    ctx->pc = 0x4B4040u;
    // 0x4b4040: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4b4040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4b4044: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4044u;
    {
        const bool branch_taken_0x4b4044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4044u;
        // 0x4b4048: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4044) {
            ctx->pc = 0x4B4054u;
            goto label_4b4054;
        }
    }
    ctx->pc = 0x4B404Cu;
    // 0x4b404c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B404Cu;
        // 0x4b4050: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B404Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4054u;
label_4b4054:
    // 0x4b4054: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b4054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4b4058:
    // 0x4b4058: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4058u;
        // 0x4b405c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4060u;
}
