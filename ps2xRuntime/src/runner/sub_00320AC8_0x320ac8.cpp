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

// Function: sub_00320AC8
// Address: 0x320ac8 - 0x320b60
void sub_00320AC8_0x320ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320AC8_0x320ac8");
#endif

    switch (ctx->pc) {
        case 0x320ae8u: goto label_320ae8;
        case 0x320b28u: goto label_320b28;
        case 0x320b48u: goto label_320b48;
        default: break;
    }

    ctx->pc = 0x320ac8u;

    // 0x320ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x320ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x320acc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x320accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x320ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320ad4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x320ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x320adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320ae0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x320AE0u;
    SET_GPR_U32(ctx, 31, 0x320AE8u);
    ctx->pc = 0x320AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320AE0u;
    // 0x320ae4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x320AE0u, 0x320AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320AE8u;
label_320ae8:
    // 0x320ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x320ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320aec: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x320AECu;
    {
        const bool branch_taken_0x320aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AECu;
        // 0x320af0: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320aec) {
            ctx->pc = 0x320B48u;
            goto label_320b48;
        }
    }
    ctx->pc = 0x320AF4u;
    // 0x320af4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x320af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x320af8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x320AF8u;
    {
        const bool branch_taken_0x320af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x320AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AF8u;
        // 0x320afc: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320af8) {
            ctx->pc = 0x320B1Cu;
            goto label_320b1c;
        }
    }
    ctx->pc = 0x320B00u;
    // 0x320b00: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x320B00u;
    {
        const bool branch_taken_0x320b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B00u;
        // 0x320b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b00) {
            ctx->pc = 0x320B4Cu;
            goto label_320b4c;
        }
    }
    ctx->pc = 0x320B08u;
    // 0x320b08: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x320b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x320b0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x320B0Cu;
    {
        const bool branch_taken_0x320b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x320B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B0Cu;
        // 0x320b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b0c) {
            ctx->pc = 0x320B30u;
            goto label_320b30;
        }
    }
    ctx->pc = 0x320B14u;
    // 0x320b14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x320B14u;
    {
        const bool branch_taken_0x320b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B14u;
        // 0x320b18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b14) {
            ctx->pc = 0x320B50u;
            goto label_320b50;
        }
    }
    ctx->pc = 0x320B1Cu;
label_320b1c:
    // 0x320b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x320b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b20: 0xc0c8186  jal         func_320618
    ctx->pc = 0x320B20u;
    SET_GPR_U32(ctx, 31, 0x320B28u);
    ctx->pc = 0x320B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B20u;
    // 0x320b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320618u, 0x320B20u, 0x320B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B28u;
label_320b28:
    // 0x320b28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x320B28u;
    {
        const bool branch_taken_0x320b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B28u;
        // 0x320b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b28) {
            ctx->pc = 0x320B4Cu;
            goto label_320b4c;
        }
    }
    ctx->pc = 0x320B30u;
label_320b30:
    // 0x320b30: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x320b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x320b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320b38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x320B38u;
    {
        const bool branch_taken_0x320b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B38u;
        // 0x320b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b38) {
            ctx->pc = 0x320B4Cu;
            goto label_320b4c;
        }
    }
    ctx->pc = 0x320B40u;
    // 0x320b40: 0xc0c8186  jal         func_320618
    ctx->pc = 0x320B40u;
    SET_GPR_U32(ctx, 31, 0x320B48u);
    ctx->pc = 0x320B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B40u;
    // 0x320b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320618u, 0x320B40u, 0x320B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B48u;
label_320b48:
    // 0x320b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320b4c:
    // 0x320b4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x320b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_320b50:
    // 0x320b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320b58: 0x3e00008  jr          $ra
    ctx->pc = 0x320B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B58u;
        // 0x320b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320B60u;
}
