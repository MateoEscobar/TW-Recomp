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

// Function: sub_00223D38
// Address: 0x223d38 - 0x223db8
void sub_00223D38_0x223d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223D38_0x223d38");
#endif

    switch (ctx->pc) {
        case 0x223d54u: goto label_223d54;
        case 0x223d64u: goto label_223d64;
        case 0x223d88u: goto label_223d88;
        default: break;
    }

    ctx->pc = 0x223d38u;

    // 0x223d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223d3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x223d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x223d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223d4c: 0xc089000  jal         func_224000
    ctx->pc = 0x223D4Cu;
    SET_GPR_U32(ctx, 31, 0x223D54u);
    ctx->pc = 0x223D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D4Cu;
    // 0x223d50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x223D4Cu, 0x223D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D54u;
label_223d54:
    // 0x223d54: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x223D54u;
    {
        const bool branch_taken_0x223d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d54) {
            ctx->pc = 0x223D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223D54u;
            // 0x223d58: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223D94u;
            goto label_223d94;
        }
    }
    ctx->pc = 0x223D5Cu;
    // 0x223d5c: 0xc088f2c  jal         func_223CB0
    ctx->pc = 0x223D5Cu;
    SET_GPR_U32(ctx, 31, 0x223D64u);
    ctx->pc = 0x223D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D5Cu;
    // 0x223d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223CB0u, 0x223D5Cu, 0x223D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D64u;
label_223d64:
    // 0x223d64: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x223D64u;
    {
        const bool branch_taken_0x223d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d64) {
            ctx->pc = 0x223D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223D64u;
            // 0x223d68: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223D94u;
            goto label_223d94;
        }
    }
    ctx->pc = 0x223D6Cu;
    // 0x223d6c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x223d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x223d70: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x223d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x223d74: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x223d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x223d78: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x223d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x223d7c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x223d7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x223d80: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223D80u;
    SET_GPR_U32(ctx, 31, 0x223D88u);
    ctx->pc = 0x223D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D80u;
    // 0x223d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223D80u, 0x223D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D88u;
label_223d88:
    // 0x223d88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223D88u;
    {
        const bool branch_taken_0x223d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D88u;
        // 0x223d8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d88) {
            ctx->pc = 0x223D98u;
            goto label_223d98;
        }
    }
    ctx->pc = 0x223D90u;
    // 0x223d90: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x223d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223d94:
    // 0x223d94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x223d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223d98:
    // 0x223d98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x223d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223d9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223da4: 0x3e00008  jr          $ra
    ctx->pc = 0x223DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DA4u;
        // 0x223da8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223DACu;
    // 0x223dac: 0x0  nop
    ctx->pc = 0x223dacu;
    // NOP
    // 0x223db0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223db4: 0x0  nop
    ctx->pc = 0x223db4u;
    // NOP
    ctx->pc = 0x223db8u;
}
