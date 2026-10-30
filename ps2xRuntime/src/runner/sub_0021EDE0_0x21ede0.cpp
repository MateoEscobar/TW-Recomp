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

// Function: sub_0021EDE0
// Address: 0x21ede0 - 0x21ee50
void sub_0021EDE0_0x21ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EDE0_0x21ede0");
#endif

    switch (ctx->pc) {
        case 0x21ee00u: goto label_21ee00;
        case 0x21ee24u: goto label_21ee24;
        case 0x21ee34u: goto label_21ee34;
        default: break;
    }

    ctx->pc = 0x21ede0u;

    // 0x21ede0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ede4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21ede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21ede8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21edec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21edecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21edf0: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x21edf0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x21edf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21edf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21edf8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21EDF8u;
    SET_GPR_U32(ctx, 31, 0x21EE00u);
    ctx->pc = 0x21EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDF8u;
    // 0x21edfc: 0x26246d80  addiu       $a0, $s1, 0x6D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21EDF8u, 0x21EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE00u;
label_21ee00:
    // 0x21ee00: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x21EE00u;
    {
        const bool branch_taken_0x21ee00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ee00) {
            ctx->pc = 0x21EE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EE00u;
            // 0x21ee04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EE40u;
            goto label_21ee40;
        }
    }
    ctx->pc = 0x21EE08u;
    // 0x21ee08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x21ee0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x21ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x21ee10: 0x8c47489c  lw          $a3, 0x489C($v0)
    ctx->pc = 0x21ee10u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x51489Cu));
    // 0x21ee14: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x21ee14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x21ee18: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x21ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x21ee1c: 0xc0441ac  jal         func_1106B0
    ctx->pc = 0x21EE1Cu;
    SET_GPR_U32(ctx, 31, 0x21EE24u);
    ctx->pc = 0x21EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE1Cu;
    // 0x21ee20: 0x84e50328  lh          $a1, 0x328($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1106B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1106B0u, 0x21EE1Cu, 0x21EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE24u;
label_21ee24:
    // 0x21ee24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EE24u;
    {
        const bool branch_taken_0x21ee24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE24u;
        // 0x21ee28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee24) {
            ctx->pc = 0x21EE3Cu;
            goto label_21ee3c;
        }
    }
    ctx->pc = 0x21EE2Cu;
    // 0x21ee2c: 0xc087ba2  jal         func_21EE88
    ctx->pc = 0x21EE2Cu;
    SET_GPR_U32(ctx, 31, 0x21EE34u);
    ctx->pc = 0x21EE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE2Cu;
    // 0x21ee30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EE88u, 0x21EE2Cu, 0x21EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE34u;
label_21ee34:
    // 0x21ee34: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x21ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21ee38: 0xae226d80  sw          $v0, 0x6D80($s1)
    ctx->pc = 0x21ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28032), GPR_U32(ctx, 2));
label_21ee3c:
    // 0x21ee3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21ee3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21ee40:
    // 0x21ee40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ee40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ee44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ee44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ee48: 0x3e00008  jr          $ra
    ctx->pc = 0x21EE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE48u;
        // 0x21ee4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EE50u;
}
