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

// Function: sub_0016BA18
// Address: 0x16ba18 - 0x16bac0
void sub_0016BA18_0x16ba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BA18_0x16ba18");
#endif

    switch (ctx->pc) {
        case 0x16ba44u: goto label_16ba44;
        case 0x16ba60u: goto label_16ba60;
        case 0x16ba68u: goto label_16ba68;
        case 0x16ba70u: goto label_16ba70;
        case 0x16ba80u: goto label_16ba80;
        case 0x16ba8cu: goto label_16ba8c;
        case 0x16ba94u: goto label_16ba94;
        default: break;
    }

    ctx->pc = 0x16ba18u;

    // 0x16ba18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ba18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ba1c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16ba20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16ba24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ba28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16ba28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16ba2c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16ba2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16ba30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16ba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16ba34: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16BA34u;
    {
        const bool branch_taken_0x16ba34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA34u;
        // 0x16ba38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba34) {
            ctx->pc = 0x16BAA4u;
            goto label_16baa4;
        }
    }
    ctx->pc = 0x16BA3Cu;
    // 0x16ba3c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16BA3Cu;
    SET_GPR_U32(ctx, 31, 0x16BA44u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16BA3Cu, 0x16BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA44u;
label_16ba44:
    // 0x16ba44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba48: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16ba4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16BA4Cu;
    {
        const bool branch_taken_0x16ba4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA4Cu;
        // 0x16ba50: 0x24920048  addiu       $s2, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba4c) {
            ctx->pc = 0x16BAA4u;
            goto label_16baa4;
        }
    }
    ctx->pc = 0x16BA54u;
    // 0x16ba54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16ba54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba5c: 0x0  nop
    ctx->pc = 0x16ba5cu;
    // NOP
label_16ba60:
    // 0x16ba60: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16BA60u;
    SET_GPR_U32(ctx, 31, 0x16BA68u);
    ctx->pc = 0x16BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA60u;
    // 0x16ba64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16BA60u, 0x16BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA68u;
label_16ba68:
    // 0x16ba68: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16BA68u;
    SET_GPR_U32(ctx, 31, 0x16BA70u);
    ctx->pc = 0x16BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA68u;
    // 0x16ba6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16BA68u, 0x16BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA70u;
label_16ba70:
    // 0x16ba70: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16BA70u;
    {
        const bool branch_taken_0x16ba70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba70) {
            ctx->pc = 0x16BA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BA70u;
            // 0x16ba74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BA98u;
            goto label_16ba98;
        }
    }
    ctx->pc = 0x16BA78u;
    // 0x16ba78: 0xc087502  jal         func_21D408
    ctx->pc = 0x16BA78u;
    SET_GPR_U32(ctx, 31, 0x16BA80u);
    ctx->pc = 0x16BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA78u;
    // 0x16ba7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16BA78u, 0x16BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA80u;
label_16ba80:
    // 0x16ba80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ba80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba84: 0xc0a3644  jal         func_28D910
    ctx->pc = 0x16BA84u;
    SET_GPR_U32(ctx, 31, 0x16BA8Cu);
    ctx->pc = 0x16BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA84u;
    // 0x16ba88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D910u, 0x16BA84u, 0x16BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA8Cu;
label_16ba8c:
    // 0x16ba8c: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x16BA8Cu;
    SET_GPR_U32(ctx, 31, 0x16BA94u);
    ctx->pc = 0x16BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BA8Cu;
    // 0x16ba90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x16BA8Cu, 0x16BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA94u;
label_16ba94:
    // 0x16ba94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16ba94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16ba98:
    // 0x16ba98: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x16ba98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16ba9c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16BA9Cu;
    {
        const bool branch_taken_0x16ba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ba9c) {
            ctx->pc = 0x16BAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BA9Cu;
            // 0x16baa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ba60;
        }
    }
    ctx->pc = 0x16BAA4u;
label_16baa4:
    // 0x16baa4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16baa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16baa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16baa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16baac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16baacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bab4: 0x3e00008  jr          $ra
    ctx->pc = 0x16BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAB4u;
        // 0x16bab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BABCu;
    // 0x16babc: 0x0  nop
    ctx->pc = 0x16babcu;
    // NOP
    ctx->pc = 0x16bac0u;
}
