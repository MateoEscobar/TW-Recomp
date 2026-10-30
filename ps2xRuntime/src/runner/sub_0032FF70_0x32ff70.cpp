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

// Function: sub_0032FF70
// Address: 0x32ff70 - 0x330040
void sub_0032FF70_0x32ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FF70_0x32ff70");
#endif

    switch (ctx->pc) {
        case 0x32ff9cu: goto label_32ff9c;
        case 0x32ffacu: goto label_32ffac;
        case 0x32ffc0u: goto label_32ffc0;
        case 0x32ffd8u: goto label_32ffd8;
        case 0x33001cu: goto label_33001c;
        default: break;
    }

    ctx->pc = 0x32ff70u;

    // 0x32ff70: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x32ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
    // 0x32ff74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ff78: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x32ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
    // 0x32ff7c: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x32ff7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x32ff80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ff80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff84: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x32ff84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
    // 0x32ff88: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x32ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
    // 0x32ff8c: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x32ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
    // 0x32ff90: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x32ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
    // 0x32ff94: 0xc0c9192  jal         func_324648
    ctx->pc = 0x32FF94u;
    SET_GPR_U32(ctx, 31, 0x32FF9Cu);
    ctx->pc = 0x32FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF94u;
    // 0x32ff98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x32FF94u, 0x32FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF9Cu;
label_32ff9c:
    // 0x32ff9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32ff9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ffa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ffa4: 0xc0c930c  jal         func_324C30
    ctx->pc = 0x32FFA4u;
    SET_GPR_U32(ctx, 31, 0x32FFACu);
    ctx->pc = 0x32FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FFA4u;
    // 0x32ffa8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C30u, 0x32FFA4u, 0x32FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FFACu;
label_32ffac:
    // 0x32ffac: 0x8fa20410  lw          $v0, 0x410($sp)
    ctx->pc = 0x32ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x32ffb0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x32FFB0u;
    {
        const bool branch_taken_0x32ffb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFB0u;
        // 0x32ffb4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ffb0) {
            ctx->pc = 0x330014u;
            goto label_330014;
        }
    }
    ctx->pc = 0x32FFB8u;
    // 0x32ffb8: 0x27b0040c  addiu       $s0, $sp, 0x40C
    ctx->pc = 0x32ffb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
    // 0x32ffbc: 0x2453c531  addiu       $s3, $v0, -0x3ACF
    ctx->pc = 0x32ffbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_32ffc0:
    // 0x32ffc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ffc4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x32ffc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x32ffc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32FFC8u;
    {
        const bool branch_taken_0x32ffc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFC8u;
        // 0x32ffcc: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ffc8) {
            ctx->pc = 0x32FFDCu;
            goto label_32ffdc;
        }
    }
    ctx->pc = 0x32FFD0u;
    // 0x32ffd0: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x32FFD0u;
    SET_GPR_U32(ctx, 31, 0x32FFD8u);
    ctx->pc = 0x32FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FFD0u;
    // 0x32ffd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x32FFD0u, 0x32FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FFD8u;
label_32ffd8:
    // 0x32ffd8: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x32ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_32ffdc:
    // 0x32ffdc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x32ffdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ffe0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32ffe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32ffe4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32ffe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32ffe8: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x32ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x32ffec: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x32ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x32fff0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x32fff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32fff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32fff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32fff8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x32fff8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x32fffc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x32fffcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x330000: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x330000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x330004: 0x8fa20410  lw          $v0, 0x410($sp)
    ctx->pc = 0x330004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x330008: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x330008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33000c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x33000Cu;
    {
        const bool branch_taken_0x33000c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33000Cu;
        // 0x330010: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33000c) {
            ctx->pc = 0x32FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ffc0;
        }
    }
    ctx->pc = 0x330014u;
label_330014:
    // 0x330014: 0xc0c92c0  jal         func_324B00
    ctx->pc = 0x330014u;
    SET_GPR_U32(ctx, 31, 0x33001Cu);
    ctx->pc = 0x330018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330014u;
    // 0x330018: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324B00u, 0x330014u, 0x33001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33001Cu;
label_33001c:
    // 0x33001c: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x33001cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x330020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330024: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x330024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x330028: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x330028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x33002c: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x33002cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x330030: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x330030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x330034: 0x3e00008  jr          $ra
    ctx->pc = 0x330034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330034u;
        // 0x330038: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33003Cu;
    // 0x33003c: 0x0  nop
    ctx->pc = 0x33003cu;
    // NOP
    ctx->pc = 0x330040u;
}
