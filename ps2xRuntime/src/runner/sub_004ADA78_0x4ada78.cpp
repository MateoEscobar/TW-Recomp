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

// Function: sub_004ADA78
// Address: 0x4ada78 - 0x4adb50
void sub_004ADA78_0x4ada78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADA78_0x4ada78");
#endif

    switch (ctx->pc) {
        case 0x4ada94u: goto label_4ada94;
        case 0x4adaccu: goto label_4adacc;
        case 0x4adb00u: goto label_4adb00;
        case 0x4adb38u: goto label_4adb38;
        case 0x4adb40u: goto label_4adb40;
        default: break;
    }

    ctx->pc = 0x4ada78u;

    // 0x4ada78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ada78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ada7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ada7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ada80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ada80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ada84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ada84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ada88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ada88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ada8c: 0xc12af22  jal         func_4ABC88
    ctx->pc = 0x4ADA8Cu;
    SET_GPR_U32(ctx, 31, 0x4ADA94u);
    ctx->pc = 0x4ADA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADA8Cu;
    // 0x4ada90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABC88u, 0x4ADA8Cu, 0x4ADA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADA94u;
label_4ada94:
    // 0x4ada94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ada94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ada98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ada98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ada9c: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4ADA9Cu;
    {
        const bool branch_taken_0x4ada9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ada9c) {
            ctx->pc = 0x4ADAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ADA9Cu;
            // 0x4adaa0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ADABCu;
            goto label_4adabc;
        }
    }
    ctx->pc = 0x4ADAA4u;
    // 0x4adaa4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4adaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4adaa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4adaa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adaac: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x4adaacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4adab0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x4adab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x4adab4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4ADAB4u;
    {
        const bool branch_taken_0x4adab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADAB4u;
        // 0x4adab8: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adab4) {
            ctx->pc = 0x4ADAD0u;
            goto label_4adad0;
        }
    }
    ctx->pc = 0x4ADABCu;
label_4adabc:
    // 0x4adabc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4adabcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4adac0: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x4adac0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x4adac4: 0xc12bed0  jal         func_4AFB40
    ctx->pc = 0x4ADAC4u;
    SET_GPR_U32(ctx, 31, 0x4ADACCu);
    ctx->pc = 0x4ADAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADAC4u;
    // 0x4adac8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB40u, 0x4ADAC4u, 0x4ADACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADACCu;
label_4adacc:
    // 0x4adacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4adaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4adad0:
    // 0x4adad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4adad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4adad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4adad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adad8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADAD8u;
        // 0x4adadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADAE0u;
    // 0x4adae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4adae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4adae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4adae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4adae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4adae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4adaec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4adaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adaf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4adaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adaf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4adaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4adaf8: 0xc12cc82  jal         func_4B3208
    ctx->pc = 0x4ADAF8u;
    SET_GPR_U32(ctx, 31, 0x4ADB00u);
    ctx->pc = 0x4ADAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADAF8u;
    // 0x4adafc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4ADAF8u, 0x4ADB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADB00u;
label_4adb00:
    // 0x4adb00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4adb00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adb04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4adb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4adb08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4adb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADB0Cu;
        // 0x4adb10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADB14u;
    // 0x4adb14: 0x0  nop
    ctx->pc = 0x4adb14u;
    // NOP
    // 0x4adb18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4adb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4adb1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4adb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4adb20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4adb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4adb24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4adb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adb28: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4adb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4adb2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4adb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4adb30: 0xc12cc82  jal         func_4B3208
    ctx->pc = 0x4ADB30u;
    SET_GPR_U32(ctx, 31, 0x4ADB38u);
    ctx->pc = 0x4ADB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADB30u;
    // 0x4adb34: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4ADB30u, 0x4ADB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADB38u;
label_4adb38:
    // 0x4adb38: 0xc12b668  jal         func_4AD9A0
    ctx->pc = 0x4ADB38u;
    SET_GPR_U32(ctx, 31, 0x4ADB40u);
    ctx->pc = 0x4ADB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADB38u;
    // 0x4adb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD9A0u, 0x4ADB38u, 0x4ADB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADB40u;
label_4adb40:
    // 0x4adb40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4adb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4adb44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4adb44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adb48: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADB48u;
        // 0x4adb4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADB50u;
}
