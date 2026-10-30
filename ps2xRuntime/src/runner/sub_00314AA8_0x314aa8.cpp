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

// Function: sub_00314AA8
// Address: 0x314aa8 - 0x314b50
void sub_00314AA8_0x314aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314AA8_0x314aa8");
#endif

    switch (ctx->pc) {
        case 0x314ad8u: goto label_314ad8;
        case 0x314ae0u: goto label_314ae0;
        case 0x314af0u: goto label_314af0;
        case 0x314b14u: goto label_314b14;
        case 0x314b24u: goto label_314b24;
        default: break;
    }

    ctx->pc = 0x314aa8u;

    // 0x314aa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x314aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x314aac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x314aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x314ab0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x314ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x314ab4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x314ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ab8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x314ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x314abc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x314abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ac0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x314ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x314ac4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x314ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x314ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314acc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x314accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x314ad0: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x314ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x314ad4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x314ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_314ad8:
    // 0x314ad8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x314AD8u;
    SET_GPR_U32(ctx, 31, 0x314AE0u);
    ctx->pc = 0x314ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314AD8u;
    // 0x314adc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x314AD8u, 0x314AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314AE0u;
label_314ae0:
    // 0x314ae0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x314ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x314ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ae8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x314AE8u;
    SET_GPR_U32(ctx, 31, 0x314AF0u);
    ctx->pc = 0x314AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314AE8u;
    // 0x314aec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x314AE8u, 0x314AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314AF0u;
label_314af0:
    // 0x314af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314af4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x314AF4u;
    {
        const bool branch_taken_0x314af4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AF4u;
        // 0x314af8: 0x2e420010  sltiu       $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314af4) {
            ctx->pc = 0x314B28u;
            goto label_314b28;
        }
    }
    ctx->pc = 0x314AFCu;
    // 0x314afc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x314afcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x314b00: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x314b00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x314b04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x314B04u;
    {
        const bool branch_taken_0x314b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B04u;
        // 0x314b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b04) {
            ctx->pc = 0x314B24u;
            goto label_314b24;
        }
    }
    ctx->pc = 0x314B0Cu;
    // 0x314b0c: 0xc089f98  jal         func_227E60
    ctx->pc = 0x314B0Cu;
    SET_GPR_U32(ctx, 31, 0x314B14u);
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x314B0Cu, 0x314B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B14u;
label_314b14:
    // 0x314b14: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314B14u;
    {
        const bool branch_taken_0x314b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x314B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B14u;
        // 0x314b18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b14) {
            ctx->pc = 0x314B24u;
            goto label_314b24;
        }
    }
    ctx->pc = 0x314B1Cu;
    // 0x314b1c: 0xc0c52d4  jal         func_314B50
    ctx->pc = 0x314B1Cu;
    SET_GPR_U32(ctx, 31, 0x314B24u);
    ctx->pc = 0x314B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B1Cu;
    // 0x314b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314B50u, 0x314B1Cu, 0x314B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B24u;
label_314b24:
    // 0x314b24: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x314b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_314b28:
    // 0x314b28: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x314B28u;
    {
        const bool branch_taken_0x314b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314b28) {
            ctx->pc = 0x314B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314B28u;
            // 0x314b2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314ad8;
        }
    }
    ctx->pc = 0x314B30u;
    // 0x314b30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x314b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314b34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x314b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314b38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x314b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314b3c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x314b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314b40: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x314b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314b48: 0x3e00008  jr          $ra
    ctx->pc = 0x314B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B48u;
        // 0x314b4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314B50u;
}
