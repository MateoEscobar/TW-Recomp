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

// Function: sub_0016CDF0
// Address: 0x16cdf0 - 0x16d068
void sub_0016CDF0_0x16cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CDF0_0x16cdf0");
#endif

    switch (ctx->pc) {
        case 0x16ce28u: goto label_16ce28;
        case 0x16ce3cu: goto label_16ce3c;
        case 0x16ce50u: goto label_16ce50;
        case 0x16ce5cu: goto label_16ce5c;
        case 0x16ce6cu: goto label_16ce6c;
        case 0x16ce7cu: goto label_16ce7c;
        case 0x16ce88u: goto label_16ce88;
        case 0x16cea8u: goto label_16cea8;
        case 0x16ceb4u: goto label_16ceb4;
        case 0x16cec8u: goto label_16cec8;
        case 0x16cee0u: goto label_16cee0;
        case 0x16cf50u: goto label_16cf50;
        case 0x16cf68u: goto label_16cf68;
        case 0x16cf80u: goto label_16cf80;
        case 0x16cfacu: goto label_16cfac;
        case 0x16cfc4u: goto label_16cfc4;
        case 0x16cff0u: goto label_16cff0;
        case 0x16cff8u: goto label_16cff8;
        case 0x16d028u: goto label_16d028;
        default: break;
    }

    ctx->pc = 0x16cdf0u;

    // 0x16cdf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16cdf4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16cdf8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x16cdfc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x16cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x16ce00: 0x49c03  sra         $s3, $a0, 16
    ctx->pc = 0x16ce00u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16ce04: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16ce04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce08: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x16ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x16ce0c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x16ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x16ce10: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16ce14: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x16ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x16ce18: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x16ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x16ce1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ce1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ce20: 0xc05b526  jal         func_16D498
    ctx->pc = 0x16CE20u;
    SET_GPR_U32(ctx, 31, 0x16CE28u);
    ctx->pc = 0x16CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE20u;
    // 0x16ce24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D498u, 0x16CE20u, 0x16CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE28u;
label_16ce28:
    // 0x16ce28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ce2c: 0x14430083  bne         $v0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x16CE2Cu;
    {
        const bool branch_taken_0x16ce2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE2Cu;
        // 0x16ce30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce2c) {
            ctx->pc = 0x16D03Cu;
            goto label_16d03c;
        }
    }
    ctx->pc = 0x16CE34u;
    // 0x16ce34: 0xc05b504  jal         func_16D410
    ctx->pc = 0x16CE34u;
    SET_GPR_U32(ctx, 31, 0x16CE3Cu);
    ctx->pc = 0x16CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE34u;
    // 0x16ce38: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D410u, 0x16CE34u, 0x16CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE3Cu;
label_16ce3c:
    // 0x16ce3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x16ce3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16ce40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16ce44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce48: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16CE48u;
    SET_GPR_U32(ctx, 31, 0x16CE50u);
    ctx->pc = 0x16CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE48u;
    // 0x16ce4c: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16CE48u, 0x16CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE50u;
label_16ce50:
    // 0x16ce50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16ce50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce54: 0xc059202  jal         func_164808
    ctx->pc = 0x16CE54u;
    SET_GPR_U32(ctx, 31, 0x16CE5Cu);
    ctx->pc = 0x16CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE54u;
    // 0x16ce58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164808u, 0x16CE54u, 0x16CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE5Cu;
label_16ce5c:
    // 0x16ce5c: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x16ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x16ce60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce64: 0xc05928a  jal         func_164A28
    ctx->pc = 0x16CE64u;
    SET_GPR_U32(ctx, 31, 0x16CE6Cu);
    ctx->pc = 0x16CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE64u;
    // 0x16ce68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A28u, 0x16CE64u, 0x16CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE6Cu;
label_16ce6c:
    // 0x16ce6c: 0xae33002c  sw          $s3, 0x2C($s1)
    ctx->pc = 0x16ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
    // 0x16ce70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16ce70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce74: 0xc059bf2  jal         func_166FC8
    ctx->pc = 0x16CE74u;
    SET_GPR_U32(ctx, 31, 0x16CE7Cu);
    ctx->pc = 0x16CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE74u;
    // 0x16ce78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166FC8u, 0x16CE74u, 0x16CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE7Cu;
label_16ce7c:
    // 0x16ce7c: 0xa6350030  sh          $s5, 0x30($s1)
    ctx->pc = 0x16ce7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 21));
    // 0x16ce80: 0xc13782a  jal         func_4DE0A8
    ctx->pc = 0x16CE80u;
    SET_GPR_U32(ctx, 31, 0x16CE88u);
    ctx->pc = 0x16CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE80u;
    // 0x16ce84: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x16CE80u, 0x16CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE88u;
label_16ce88:
    // 0x16ce88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x16ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x16ce8c: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x16ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x16ce90: 0xa23000d2  sb          $s0, 0xD2($s1)
    ctx->pc = 0x16ce90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 210), (uint8_t)GPR_U32(ctx, 16));
    // 0x16ce94: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x16ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x16ce98: 0xa22000d0  sb          $zero, 0xD0($s1)
    ctx->pc = 0x16ce98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ce9c: 0xa22000d1  sb          $zero, 0xD1($s1)
    ctx->pc = 0x16ce9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 209), (uint8_t)GPR_U32(ctx, 0));
    // 0x16cea0: 0xa22000da  sb          $zero, 0xDA($s1)
    ctx->pc = 0x16cea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 218), (uint8_t)GPR_U32(ctx, 0));
    // 0x16cea4: 0x8ec4caa8  lw          $a0, -0x3558($s6)
    ctx->pc = 0x16cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294953640)));
label_16cea8:
    // 0x16cea8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16cea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ceac: 0xc059116  jal         func_164458
    ctx->pc = 0x16CEACu;
    SET_GPR_U32(ctx, 31, 0x16CEB4u);
    ctx->pc = 0x16CEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CEACu;
    // 0x16ceb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164458u, 0x16CEACu, 0x16CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CEB4u;
label_16ceb4:
    // 0x16ceb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ceb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ceb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16ceb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cec0: 0xc05946e  jal         func_1651B8
    ctx->pc = 0x16CEC0u;
    SET_GPR_U32(ctx, 31, 0x16CEC8u);
    ctx->pc = 0x16CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CEC0u;
    // 0x16cec4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1651B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651B8u, 0x16CEC0u, 0x16CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CEC8u;
label_16cec8:
    // 0x16cec8: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x16cec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x16cecc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16CECCu;
    {
        const bool branch_taken_0x16cecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CECCu;
        // 0x16ced0: 0x8ec4caa8  lw          $a0, -0x3558($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294953640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cecc) {
            ctx->pc = 0x16CEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cea8;
        }
    }
    ctx->pc = 0x16CED4u;
    // 0x16ced4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x16ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x16ced8: 0x26230640  addiu       $v1, $s1, 0x640
    ctx->pc = 0x16ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x16cedc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x16cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_16cee0:
    // 0x16cee0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16cee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cee4: 0xa0600050  sb          $zero, 0x50($v1)
    ctx->pc = 0x16cee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x16cee8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16cee8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16ceec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16cef0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16cef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16cef4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16CEF4u;
    {
        const bool branch_taken_0x16cef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEF4u;
        // 0x16cef8: 0x24630130  addiu       $v1, $v1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cef4) {
            ctx->pc = 0x16CEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cee0;
        }
    }
    ctx->pc = 0x16CEFCu;
    // 0x16cefc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x16cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16cf00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cf04: 0xa6200b00  sh          $zero, 0xB00($s1)
    ctx->pc = 0x16cf04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2816), (uint16_t)GPR_U32(ctx, 0));
    // 0x16cf08: 0xa6200b02  sh          $zero, 0xB02($s1)
    ctx->pc = 0x16cf08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2818), (uint16_t)GPR_U32(ctx, 0));
    // 0x16cf0c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16CF0Cu;
    {
        const bool branch_taken_0x16cf0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF0Cu;
        // 0x16cf10: 0xa6200b04  sh          $zero, 0xB04($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2820), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf0c) {
            ctx->pc = 0x16CF28u;
            goto label_16cf28;
        }
    }
    ctx->pc = 0x16CF14u;
    // 0x16cf14: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16cf14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x16cf18: 0x262401b0  addiu       $a0, $s1, 0x1B0
    ctx->pc = 0x16cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x16cf1c: 0x24c6cbb0  addiu       $a2, $a2, -0x3450
    ctx->pc = 0x16cf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953904));
    // 0x16cf20: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16CF20u;
    {
        const bool branch_taken_0x16cf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF20u;
        // 0x16cf24: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf20) {
            ctx->pc = 0x16CF78u;
            goto label_16cf78;
        }
    }
    ctx->pc = 0x16CF28u;
label_16cf28:
    // 0x16cf28: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x16cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x16cf2c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16CF2Cu;
    {
        const bool branch_taken_0x16cf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF2Cu;
        // 0x16cf30: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf2c) {
            ctx->pc = 0x16CF88u;
            goto label_16cf88;
        }
    }
    ctx->pc = 0x16CF34u;
    // 0x16cf34: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x16cf34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x16cf38: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16cf38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x16cf3c: 0x24c6cb80  addiu       $a2, $a2, -0x3480
    ctx->pc = 0x16cf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953856));
    // 0x16cf40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf44: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x16cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x16cf48: 0xc05905e  jal         func_164178
    ctx->pc = 0x16CF48u;
    SET_GPR_U32(ctx, 31, 0x16CF50u);
    ctx->pc = 0x16CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF48u;
    // 0x16cf4c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x16CF48u, 0x16CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF50u;
label_16cf50:
    // 0x16cf50: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16cf50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x16cf54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf58: 0x24c6cb90  addiu       $a2, $a2, -0x3470
    ctx->pc = 0x16cf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953872));
    // 0x16cf5c: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x16cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x16cf60: 0xc05905e  jal         func_164178
    ctx->pc = 0x16CF60u;
    SET_GPR_U32(ctx, 31, 0x16CF68u);
    ctx->pc = 0x16CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF60u;
    // 0x16cf64: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x16CF60u, 0x16CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF68u;
label_16cf68:
    // 0x16cf68: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16cf68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x16cf6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf70: 0x24c6cba0  addiu       $a2, $a2, -0x3460
    ctx->pc = 0x16cf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953888));
    // 0x16cf74: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x16cf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
label_16cf78:
    // 0x16cf78: 0xc05905e  jal         func_164178
    ctx->pc = 0x16CF78u;
    SET_GPR_U32(ctx, 31, 0x16CF80u);
    ctx->pc = 0x16CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF78u;
    // 0x16cf7c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x16CF78u, 0x16CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF80u;
label_16cf80:
    // 0x16cf80: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16CF80u;
    {
        const bool branch_taken_0x16cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF80u;
        // 0x16cf84: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf80) {
            ctx->pc = 0x16CFC8u;
            goto label_16cfc8;
        }
    }
    ctx->pc = 0x16CF88u;
label_16cf88:
    // 0x16cf88: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16CF88u;
    {
        const bool branch_taken_0x16cf88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16cf88) {
            ctx->pc = 0x16CF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CF88u;
            // 0x16cf8c: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CFC8u;
            goto label_16cfc8;
        }
    }
    ctx->pc = 0x16CF90u;
    // 0x16cf90: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x16cf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x16cf94: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16cf94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x16cf98: 0x24c6cbc0  addiu       $a2, $a2, -0x3440
    ctx->pc = 0x16cf98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953920));
    // 0x16cf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfa0: 0x2405025b  addiu       $a1, $zero, 0x25B
    ctx->pc = 0x16cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
    // 0x16cfa4: 0xc05905e  jal         func_164178
    ctx->pc = 0x16CFA4u;
    SET_GPR_U32(ctx, 31, 0x16CFACu);
    ctx->pc = 0x16CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CFA4u;
    // 0x16cfa8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x16CFA4u, 0x16CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFACu;
label_16cfac:
    // 0x16cfac: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16cfacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x16cfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfb4: 0x24c6cbe0  addiu       $a2, $a2, -0x3420
    ctx->pc = 0x16cfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953952));
    // 0x16cfb8: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x16cfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x16cfbc: 0xc05905e  jal         func_164178
    ctx->pc = 0x16CFBCu;
    SET_GPR_U32(ctx, 31, 0x16CFC4u);
    ctx->pc = 0x16CFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CFBCu;
    // 0x16cfc0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x16CFBCu, 0x16CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFC4u;
label_16cfc4:
    // 0x16cfc4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x16cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_16cfc8:
    // 0x16cfc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cfcc: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16CFCCu;
    {
        const bool branch_taken_0x16cfcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFCCu;
        // 0x16cfd0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfcc) {
            ctx->pc = 0x16D03Cu;
            goto label_16d03c;
        }
    }
    ctx->pc = 0x16CFD4u;
    // 0x16cfd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x16cfd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16cfd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfdc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x16cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x16cfe0: 0x8c64028c  lw          $a0, 0x28C($v1)
    ctx->pc = 0x16cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 652)));
    // 0x16cfe4: 0x2c920001  sltiu       $s2, $a0, 0x1
    ctx->pc = 0x16cfe4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16cfe8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x16cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x16cfec: 0x0  nop
    ctx->pc = 0x16cfecu;
    // NOP
label_16cff0:
    // 0x16cff0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16CFF0u;
    SET_GPR_U32(ctx, 31, 0x16CFF8u);
    ctx->pc = 0x16CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CFF0u;
    // 0x16cff4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16CFF0u, 0x16CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFF8u;
label_16cff8:
    // 0x16cff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16cff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cffc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16d000: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x16D000u;
    {
        const bool branch_taken_0x16d000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d000) {
            ctx->pc = 0x16D004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D000u;
            // 0x16d004: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D02Cu;
            goto label_16d02c;
        }
    }
    ctx->pc = 0x16D008u;
    // 0x16d008: 0x50710008  beql        $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D008u;
    {
        const bool branch_taken_0x16d008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x16d008) {
            ctx->pc = 0x16D00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D008u;
            // 0x16d00c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D02Cu;
            goto label_16d02c;
        }
    }
    ctx->pc = 0x16D010u;
    // 0x16d010: 0x8c6205e8  lw          $v0, 0x5E8($v1)
    ctx->pc = 0x16d010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1512)));
    // 0x16d014: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D014u;
    {
        const bool branch_taken_0x16d014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D014u;
        // 0x16d018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d014) {
            ctx->pc = 0x16D028u;
            goto label_16d028;
        }
    }
    ctx->pc = 0x16D01Cu;
    // 0x16d01c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16d01cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x16d020: 0xc05b0ea  jal         func_16C3A8
    ctx->pc = 0x16D020u;
    SET_GPR_U32(ctx, 31, 0x16D028u);
    ctx->pc = 0x16D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D020u;
    // 0x16d024: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C3A8u, 0x16D020u, 0x16D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D028u;
label_16d028:
    // 0x16d028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16d028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16d02c:
    // 0x16d02c: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x16d02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16d030: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x16D030u;
    {
        const bool branch_taken_0x16d030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D030u;
        // 0x16d034: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d030) {
            ctx->pc = 0x16CFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cff0;
        }
    }
    ctx->pc = 0x16D038u;
    // 0x16d038: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x16d038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16d03c:
    // 0x16d03c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x16d03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16d040: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16d040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16d044: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x16d044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d048: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16d048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d04c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x16d04cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d050: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x16d050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d054: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x16d054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d05c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D05Cu;
        // 0x16d060: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D064u;
    // 0x16d064: 0x0  nop
    ctx->pc = 0x16d064u;
    // NOP
    ctx->pc = 0x16d068u;
}
