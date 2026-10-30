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

// Function: sub_002EFA58
// Address: 0x2efa58 - 0x2efb48
void sub_002EFA58_0x2efa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFA58_0x2efa58");
#endif

    switch (ctx->pc) {
        case 0x2efa8cu: goto label_2efa8c;
        case 0x2efaa0u: goto label_2efaa0;
        case 0x2efab4u: goto label_2efab4;
        case 0x2efac8u: goto label_2efac8;
        case 0x2efadcu: goto label_2efadc;
        case 0x2efaf0u: goto label_2efaf0;
        case 0x2efb04u: goto label_2efb04;
        case 0x2efb18u: goto label_2efb18;
        case 0x2efb24u: goto label_2efb24;
        default: break;
    }

    ctx->pc = 0x2efa58u;

    // 0x2efa58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2efa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2efa5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efa60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2efa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2efa64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2efa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2efa68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2efa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2efa6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2efa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2efa70: 0x14a30026  bne         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2EFA70u;
    {
        const bool branch_taken_0x2efa70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA70u;
        // 0x2efa74: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa70) {
            ctx->pc = 0x2EFB0Cu;
            goto label_2efb0c;
        }
    }
    ctx->pc = 0x2EFA78u;
    // 0x2efa78: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2efa78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2efa7c: 0x260403c8  addiu       $a0, $s0, 0x3C8
    ctx->pc = 0x2efa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 968));
    // 0x2efa80: 0x24a57ab8  addiu       $a1, $a1, 0x7AB8
    ctx->pc = 0x2efa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31416));
    // 0x2efa84: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2EFA84u;
    SET_GPR_U32(ctx, 31, 0x2EFA8Cu);
    ctx->pc = 0x2EFA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA84u;
    // 0x2efa88: 0x24060184  addiu       $a2, $zero, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2EFA84u, 0x2EFA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA8Cu;
label_2efa8c:
    // 0x2efa8c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2efa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2efa90: 0x260403f0  addiu       $a0, $s0, 0x3F0
    ctx->pc = 0x2efa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x2efa94: 0x24a57ac8  addiu       $a1, $a1, 0x7AC8
    ctx->pc = 0x2efa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31432));
    // 0x2efa98: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2EFA98u;
    SET_GPR_U32(ctx, 31, 0x2EFAA0u);
    ctx->pc = 0x2EFA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA98u;
    // 0x2efa9c: 0x24060186  addiu       $a2, $zero, 0x186 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2EFA98u, 0x2EFAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAA0u;
label_2efaa0:
    // 0x2efaa0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2efaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2efaa4: 0x26040418  addiu       $a0, $s0, 0x418
    ctx->pc = 0x2efaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1048));
    // 0x2efaa8: 0x24a57ad8  addiu       $a1, $a1, 0x7AD8
    ctx->pc = 0x2efaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31448));
    // 0x2efaac: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2EFAACu;
    SET_GPR_U32(ctx, 31, 0x2EFAB4u);
    ctx->pc = 0x2EFAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAACu;
    // 0x2efab0: 0x24060187  addiu       $a2, $zero, 0x187 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 391));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2EFAACu, 0x2EFAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAB4u;
label_2efab4:
    // 0x2efab4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2efab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2efab8: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x2efab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x2efabc: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8
    ctx->pc = 0x2efabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
    // 0x2efac0: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2EFAC0u;
    SET_GPR_U32(ctx, 31, 0x2EFAC8u);
    ctx->pc = 0x2EFAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAC0u;
    // 0x2efac4: 0x24060189  addiu       $a2, $zero, 0x189 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2EFAC0u, 0x2EFAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAC8u;
label_2efac8:
    // 0x2efac8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2efac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2efacc: 0x26040468  addiu       $a0, $s0, 0x468
    ctx->pc = 0x2efaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1128));
    // 0x2efad0: 0x24a57b00  addiu       $a1, $a1, 0x7B00
    ctx->pc = 0x2efad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    // 0x2efad4: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2EFAD4u;
    SET_GPR_U32(ctx, 31, 0x2EFADCu);
    ctx->pc = 0x2EFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAD4u;
    // 0x2efad8: 0x240602a0  addiu       $a2, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2EFAD4u, 0x2EFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFADCu;
label_2efadc:
    // 0x2efadc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2efadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2efae0: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x2efae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x2efae4: 0x24a57b18  addiu       $a1, $a1, 0x7B18
    ctx->pc = 0x2efae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31512));
    // 0x2efae8: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2EFAE8u;
    SET_GPR_U32(ctx, 31, 0x2EFAF0u);
    ctx->pc = 0x2EFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAE8u;
    // 0x2efaec: 0x2406029f  addiu       $a2, $zero, 0x29F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2EFAE8u, 0x2EFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAF0u;
label_2efaf0:
    // 0x2efaf0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2efaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2efaf4: 0x260404b8  addiu       $a0, $s0, 0x4B8
    ctx->pc = 0x2efaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1208));
    // 0x2efaf8: 0x24a57b30  addiu       $a1, $a1, 0x7B30
    ctx->pc = 0x2efaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31536));
    // 0x2efafc: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2EFAFCu;
    SET_GPR_U32(ctx, 31, 0x2EFB04u);
    ctx->pc = 0x2EFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAFCu;
    // 0x2efb00: 0x240602a1  addiu       $a2, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2EFAFCu, 0x2EFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB04u;
label_2efb04:
    // 0x2efb04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EFB04u;
    {
        const bool branch_taken_0x2efb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB04u;
        // 0x2efb08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb04) {
            ctx->pc = 0x2EFB34u;
            goto label_2efb34;
        }
    }
    ctx->pc = 0x2EFB0Cu;
label_2efb0c:
    // 0x2efb0c: 0x261003c8  addiu       $s0, $s0, 0x3C8
    ctx->pc = 0x2efb0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 968));
    // 0x2efb10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2efb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb14: 0x0  nop
    ctx->pc = 0x2efb14u;
    // NOP
label_2efb18:
    // 0x2efb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb1c: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2EFB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB24u);
    ctx->pc = 0x2EFB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB1Cu;
    // 0x2efb20: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2EFB1Cu, 0x2EFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB24u;
label_2efb24:
    // 0x2efb24: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x2efb24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2efb28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2EFB28u;
    {
        const bool branch_taken_0x2efb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB28u;
        // 0x2efb2c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb28) {
            ctx->pc = 0x2EFB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efb18;
        }
    }
    ctx->pc = 0x2EFB30u;
    // 0x2efb30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2efb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2efb34:
    // 0x2efb34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2efb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB3Cu;
        // 0x2efb40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFB44u;
    // 0x2efb44: 0x0  nop
    ctx->pc = 0x2efb44u;
    // NOP
    ctx->pc = 0x2efb48u;
}
